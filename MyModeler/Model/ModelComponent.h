#pragma once

#include <string>
#include <vector>
#include <memory>

#include "UniqueId.h"
#include "GraphicalElement.h"


namespace MyModeler {

	class ModelComponent
	{
	private:
		std::string m_Id;
		std::string m_Name;
		std::vector<std::shared_ptr<MyModeler::Graphics::GraphicalElement>> m_Graphics;

	public:
		ModelComponent();
		ModelComponent(std::string name);
		~ModelComponent();

		bool IsValid() const;
		std::string GetId() const;
		std::string GetName() const;

		void AddGraphicalElement(std::shared_ptr<MyModeler::Graphics::GraphicalElement> graphicElement);
		std::vector<std::shared_ptr<MyModeler::Graphics::GraphicalElement>> GetGraphicalElements() const;

		// Operator Overloads using friend methods
		friend std::ostream& operator<< (std::ostream &out, const ModelComponent& comp);

	};
}

