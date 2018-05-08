#pragma once
#include "GraphicalElement.h"
#include "Point.h"

namespace MyModeler {
	namespace Graphics {
		class Line : public GraphicalElement
		{

		private:
			MyModeler::Geometry::Point start;
			MyModeler::Geometry::Point end;

		public:
			Line(MyModeler::Geometry::Point startPt, MyModeler::Geometry::Point endPt, std::string colorName="");
			~Line();

			MyModeler::Geometry::Point Line::getStart() const;
			MyModeler::Geometry::Point Line::getEnd() const;
			void Line::setStart(const MyModeler::Geometry::Point &pt);
			void Line::setEnd(const MyModeler::Geometry::Point &pt);

			double Line::Length() const;

			virtual void Print (std::ostream &out) const;



		};
	}
}

