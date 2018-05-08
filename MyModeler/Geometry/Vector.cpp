#include "stdafx.h"

#include <string>
#include <math.h>
#include "Vector.h"
#include "Constants.h"


using std::string;

namespace MyModeler {
	namespace Geometry {


		// Constructors
		Vector::Vector(double x = 0, double y = 0, double z = 0) : Tuple3(x, y, z)
		{
		}

		Vector::Vector(const Tuple3 &v1) : Tuple3(v1)
		{
		}


		// Setters


		// Methods

		double Vector::Magnitude() const
		{
			return sqrt(x*x + y*y + z*z);
		}

		Vector Vector::Normalize() const
		{
			double mag = Magnitude();
			if (mag < Constants::Tolerance)
				return Vector(0, 0, 0);

			return Vector(x / mag, y / mag, z / mag);
		}


		// Operator Overloads using class methods

		// Operator Overloads using friend methods
		std::ostream& operator<< (std::ostream &out, const Vector &v1)
		{
			// Since operator<< is a friend of the Point class, we can access Point's members directly.
			out << "Vector(" << v1.x << ", " << v1.y << ", " << v1.z << ")";

			return out;
		}

	}
} // namespace MyModeler::Geometry

