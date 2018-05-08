#include "stdafx.h"

#include <string>
#include <math.h>
#include "Point.h"
#include "Vector.h"


using std::string;

namespace MyModeler {
	namespace Geometry {


		// Constructors
		Point::Point(double x, double y, double z) : Tuple3(x, y, z)
		{
		}

		//Point::Point(const Point &p1) : Tuple3(p1)
		//{
		//}

		Point::Point(const Tuple3 &p1) : Tuple3(p1)
		{
		}

		// Methods

		Point Point::OffsetByVector(Vector &v1, double sf, bool normalize) const
		{
			Vector offset = (normalize ? v1.Normalize() : v1) * sf;
		
			return Offset(offset.x, offset.y, offset.z);
		}


		// Operator Overloads using class methods

		// Operator Overloads using friend methods

		std::ostream& operator<< (std::ostream &out, const Point &p1)
		{
			// Since operator<< is a friend of the Point class, we can access Point's members directly.
			out << "Point(" << p1.x << ", " << p1.y << ", " << p1.z << ")";

			return out;
		}

	}
} // namespace MyModeler::Geometry

