#pragma once
#include <vector>
#include "GraphicalElement.h"


namespace MyModeler {
	namespace Elements {
		class ElementSet
		{
		private:
			std::vector<GraphicalElement> elements;

		public:
			ElementSet();
			~ElementSet();
		};

	}
}
