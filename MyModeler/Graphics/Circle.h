#pragma once
#include "Point.h"
#include "Vector.h"
#include "GraphicalElement.h"

namespace MyModeler {
	namespace Graphics {
		class Circle : public GraphicalElement
		{

		private:
			MyModeler::Geometry::Point origin;
			MyModeler::Geometry::Vector normal;
			double radius;

		public:
			Circle(MyModeler::Geometry::Point originPt, double radius, MyModeler::Geometry::Vector normal = MyModeler::Geometry::Vector(0,0,1), std::string color = "");
			~Circle();

			MyModeler::Geometry::Point Circle::getOrigin() const;
			MyModeler::Geometry::Vector Circle::getNormal() const;
			double Circle::getRadius() const;

			void Circle::setOrigin(const MyModeler::Geometry::Point &pt);
			void Circle::setNormal(const MyModeler::Geometry::Vector &vec);
			void Circle::setRadius(double radius);

			double Circle::Area() const;
			double Circle::Circumference() const;

			virtual void Print(std::ostream& out) const;

		};
	}
}

