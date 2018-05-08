#pragma once
#include "GraphicalElement.h"
#include "Point.h"
#include <string>
#include <vector>

namespace MyModeler {
	namespace Graphics {
		class LineString : public GraphicalElement
		{

		private:
			std::vector<MyModeler::Geometry::Point> vertices;

		public:
			LineString(std::string colorName);
			~LineString();

			std::vector<MyModeler::Geometry::Point> getVertices() const;
			void addVertice(const MyModeler::Geometry::Point &pt);

			size_t NumberOfVertices() const;
			double Length() const;
			virtual void Print(std::ostream &out) const;


		};
	}
}

