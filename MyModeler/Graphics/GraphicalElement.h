#pragma once

#include <string>


namespace MyModeler {
	namespace Graphics {
		class GraphicalElement
		{
		private:
			std::string m_Id;
			std::string m_Color;

		public:
			GraphicalElement(std::string colorName);
			~GraphicalElement();

			std::string GetId() const;

			std::string GetColor() const;
			void SetColor(std::string colorName);

			virtual void Print(std::ostream& out) const;

			// Operator Overloads using friend methods
			friend std::ostream& operator<< (std::ostream &out, const GraphicalElement& graphicalElement);

		};
	}
}

