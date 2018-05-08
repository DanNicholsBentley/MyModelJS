#include "stdafx.h"
#include "Model.h"

#include <string>
#include <vector>
#include <map>
#include <memory>

using std::string;
using std::map;

#include "UniqueId.h"



namespace MyModeler {
	Model::Model(string modelName) : m_Id(Utilities::GenerateId()), m_Name(modelName)
	{
	}

	Model::~Model()
	{
	}

	void Model::AddComponent(std::shared_ptr<ModelComponent> comp)
	{
		m_Components.insert(std::make_pair(comp->GetId(), comp));
	}

	std::vector<std::shared_ptr<ModelComponent>> Model::GetComponents() const
	{
		std::vector<std::shared_ptr<ModelComponent>> comps;

		for (auto elem : m_Components)
			comps.push_back(elem.second);

		return comps;
	}

	std::shared_ptr<ModelComponent> Model::GetComponent(const string& id) const
	{
		std::shared_ptr<ModelComponent> comp;
		try
		{
			comp = m_Components.at(id);
		}
		catch (const std::out_of_range& outOfRangeException)
		{

		}

		return comp;
	}

	void Model::Print(std::ostream& out) const
	{
		out << "Model: " << std::endl;
		out << "    id: " + m_Id << std::endl;
		out << "    Name: " + m_Name << std::endl;

		auto modelComponents = GetComponents();

		std::vector<std::shared_ptr<ModelComponent>>::const_iterator iterator; // declare a read-only iterator

		iterator = modelComponents.begin(); // assign it to the start of the vector
		while (iterator != modelComponents.end()) // while it hasn't reach the end
		{
			out << *(*iterator) << std::endl; // print the value of the element it points to
			++iterator; // and iterate to the next element
		}

		out << std::endl;

	}

	// Operator Overloads
	std::ostream& operator<< (std::ostream &out, const Model& model)
	{
		model.Print(out);

		return out;
	}


}
