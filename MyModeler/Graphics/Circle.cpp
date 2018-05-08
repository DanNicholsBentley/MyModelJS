#include "stdafx.h"

#include <iostream>
#include <string>

using std::string;

#include "Circle.h"
#include "Point.h"
#include "Vector.h"
#include "Constants.h"

using MyModeler::Geometry::Point;
using MyModeler::Geometry::Vector;

namespace MyModeler {
	namespace Graphics {

		Circle::Circle(Point orginPt, double radius, Vector normal, string colorName) 
			: GraphicalElement(colorName), origin(orginPt), radius(radius), normal(normal)
		{
			std::cout << "Circle created" << std::endl;
		}

		Circle::~Circle()
		{
			std::cout << "Circle destroyed" << std::endl;
		}

		Point Circle::getOrigin() const
		{
			return origin;
		}

		Vector Circle::getNormal() const
		{
			return normal;
		}

		double Circle::getRadius() const
		{
			return radius;
		}

		void Circle::setOrigin(const Point &pt)
		{
			origin = pt;
		}

		void Circle::setNormal(const Vector &vec)
		{
			normal = vec;
		}

		void Circle::setRadius(double radius)
		{
			this->radius = radius;
		}

		double Circle::Area() const
		{
			return MyModeler::Geometry::Constants::PI * radius * radius;
		}

		double Circle::Circumference() const
		{
			return 2 * MyModeler::Geometry::Constants::PI * radius;
		}

		void Circle::Print(std::ostream& out) const
		{
			out << "Circle: " << std::endl;
			out << "   Id: " << GetId() << std::endl;
			out << "   Color: " << GetColor() << std::endl;
			out << "   Origin: " << origin << std::endl;
			out << "   Radius: " << radius << std::endl;
			out << "   Normal: " << normal << std::endl;
			out << "   Area: " << Area() << std::endl;
			out << "   Circumference: " << Circumference() << std::endl;
		}
	}
}