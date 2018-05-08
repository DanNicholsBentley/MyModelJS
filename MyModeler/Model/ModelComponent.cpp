#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "ModelComponent.h"
#include "UniqueId.h"

using std::string;

namespace MyModeler {

	ModelComponent::ModelComponent() : m_Id("")
	{
		std::cout << "ModelComponent created" << std::endl;
	}

	ModelComponent::ModelComponent(string name) : m_Id(Utilities::GenerateId()), m_Name(name)
	{
		std::cout << "ModelComponent: " << name << " created" << std::endl;
	}

	ModelComponent::~ModelComponent()
	{
		std::cout << "ModelComponent: " << m_Name << " destroyed" << std::endl;
	}

	bool ModelComponent::IsValid() const
	{
		return m_Id != "";
	}

	string ModelComponent::GetId() const
	{
		return m_Id;
	}

	string ModelComponent::GetName() const
	{
		return m_Name;
	}

	void ModelComponent::AddGraphicalElement(std::shared_ptr<MyModeler::Graphics::GraphicalElement> graphicElement)
	{
		m_Graphics.push_back(graphicElement);
	}

	std::vector<std::shared_ptr<MyModeler::Graphics::GraphicalElement>> ModelComponent::GetGraphicalElements() const
	{
		return m_Graphics;
	}

	// Operator Overloads
	std::ostream& operator<< (std::ostream &out, const ModelComponent& comp)
	{
		out << "ModelComponent: " << std::endl;
		out << "   Id: " << comp.GetId() << std::endl;
		out << "   Name: " << comp.GetName() << std::endl;
		out << "   Graphics: " << std::endl;

		std::vector<std::shared_ptr<MyModeler::Graphics::GraphicalElement>> graphicalElements = comp.GetGraphicalElements();

		std::vector<std::shared_ptr<MyModeler::Graphics::GraphicalElement>>::const_iterator iterator; // declare a read-only iterator
		iterator = graphicalElements.begin(); // assign it to the start of the vector
		while (iterator != graphicalElements.end()) // while it hasn't reach the end
		{
			out << *(*iterator) << std::endl; // print the value of the element it points to
			++iterator; // and iterate to the next element
		}

		out << std::endl;

		return out;
	}

}
