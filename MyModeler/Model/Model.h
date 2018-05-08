#pragma once

#include <string>
#include <map>
#include <vector>
#include <memory>

#include "ModelComponent.h"


namespace MyModeler {
	class Model
	{
	private:
		std::string m_Id;
		std::string m_Name;
		std::map<std::string, std::shared_ptr<ModelComponent>> m_Components;

	public:
		Model(std::string name);
		~Model();

		void AddComponent(std::shared_ptr<ModelComponent> comp);
		//std::map<std::string, std::shared_ptr<ModelComponent>> GetComponents() const;
		std::vector<std::shared_ptr<ModelComponent>> Model::GetComponents() const;
	    std::shared_ptr<ModelComponent> GetComponent(const std::string& id) const;

		virtual void Print(std::ostream &out) const;

		// Operator Overloads using friend methods
		friend std::ostream& operator<< (std::ostream &out, const Model& model);

	};
}
