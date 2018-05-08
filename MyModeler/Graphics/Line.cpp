#include "stdafx.h"
#include "Line.h"
#include "Point.h"

#include <iostream>
#include <string>

using MyModeler::Geometry::Point;

namespace MyModeler {
	namespace Graphics {

		Line::Line(Point startPt, Point endPt, std::string colorName) : 
			GraphicalElement(colorName), start(startPt), end(endPt)
		{
			std::cout << "Line created" << std::endl;
		}

		Line::~Line()
		{
			std::cout << "Line destoyed" << std::endl;
		}

		Point Line::getStart() const
		{
			return start;
		}

		Point Line::getEnd() const
		{
			return end;
		}

		void Line::setStart(const Point &pt)
		{
			start = pt;
		}

		void Line::setEnd(const Point &pt)
		{
			end = pt;
		}

		double Line::Length() const
		{
			return start.Distance(end);
		}

		void Line::Print(std::ostream &out) const
		{
			out << "Line: " << std::endl;
			out << "   Id: " << GetId() << std::endl;
			out << "   Color: " << GetColor() << std::endl;
			out << "   StartPoint: " << start << std::endl;
			out << "   EndPoint: " << end << std::endl;
			out << "   Length: " << Length() << std::endl;
		}


	}
}