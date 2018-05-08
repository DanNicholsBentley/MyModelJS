#include "stdafx.h"

#include <iostream>
#include <vector>
#include <string>

#include "LineString.h"
#include "Point.h"

using std::vector;
using MyModeler::Geometry::Point;


namespace MyModeler {
	namespace Graphics {

		LineString::LineString(std::string colorName) : GraphicalElement(colorName)
		{
			std::cout << "Linestring created" << std::endl;
		}

		LineString::~LineString()
		{
			std::cout << "Linestring destroyed" << std::endl;
		}

		vector<Point> LineString::getVertices() const
		{
			return vertices;
		}

		void LineString::addVertice(const Point &pt)
		{
			vertices.push_back(pt);
		}

		size_t LineString::NumberOfVertices() const
		{
			return vertices.size();
		}

		double LineString::Length() const
		{
			double length = 0;
			for (size_t i = 0; i < vertices.size()-1; i++)
			{
				length += vertices[i].Distance(vertices[i + 1]);
			}
			return length;
		}

		void LineString::Print(std::ostream &out)  const
		{
			out << "LineString: " << std::endl;
			out << "   Id: " << GetId() << std::endl;
			out << "   Color: " << GetColor() << std::endl;

			vector<Point> vertices = getVertices();
			for (size_t i = 0; i < vertices.size(); i++)
				out << "   Vertice[" << i << "]: " << vertices[i] << std::endl;
			out << "   Length: " << Length() << std::endl;
		}


	}
}