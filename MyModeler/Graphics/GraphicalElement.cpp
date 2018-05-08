#include "stdafx.h"

#include <string>

using std::string;

#include "GraphicalElement.h"
#include "UniqueId.h"

namespace MyModeler {
	namespace Graphics {

		GraphicalElement::GraphicalElement(string colorName) : m_Id(Utilities::GenerateId()), m_Color(colorName)
		{
		}


		GraphicalElement::~GraphicalElement()
		{
		}

		string GraphicalElement::GetId() const
		{
			return m_Id;
		}

		string GraphicalElement::GetColor() const
		{
			return m_Color;
		}

		void GraphicalElement::SetColor(string colorName)
		{
			m_Color = colorName;
		}

		void GraphicalElement::Print(std::ostream& out) const
		{
			out << "GraphicalElement";
			out << "    id: " + m_Id + " color: " + m_Color;
		}

		// Operator Overloads
		std::ostream& operator<< (std::ostream &out, const GraphicalElement& graphicalElement)
		{
			graphicalElement.Print(out);
			return out;
		}

	}
}
