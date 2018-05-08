#pragma once

#include <string>
#include "Tuple3.h"
#include "Vector.h"

namespace MyModeler {
	namespace Geometry {

		class Point : public Tuple3
		{
		public:

			// Constructors
			Point(double x = 0, double y = 0, double z = 0);
			//Point(const Point &p1);
			Point(const Tuple3 &p1);

			// Setters

			// Methods
			Point Point::OffsetByVector(Vector &v1, double sf, bool normalize = true) const;

			// Operator Overloads using class methods

			// Operator Overloads using friend methods
			friend std::ostream& operator<< (std::ostream &out, const Point &p1);


		};



	}
} // namespace MyModeler::Geometry

