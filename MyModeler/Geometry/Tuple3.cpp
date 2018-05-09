#include "stdafx.h"

#include <string>
#include <math.h>

#include "Tuple3.h"


using std::string;

namespace MyModeler {
	namespace Geometry {


		// Constructors
		Tuple3::Tuple3(double x, double y, double z) : x(x), y(y), z(z)
		{
		}

		Tuple3::Tuple3(const Tuple3 &p1) : x(p1.x), y(p1.y), z(p1.z)
		{
		}


		// Setters
		void Tuple3::setXYZ(double x, double y, double z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}


		// Methods

		Tuple3 Tuple3::Offset(double dx, double dy, double dz) const
		{
			return Tuple3(x + dx, y + dy, z + dz);
		}

		double Tuple3::Distance(const Tuple3 &p1) const
		{
			double dx = x - p1.x;
			double dy = y - p1.y;
			double dz = z - p1.z;

			return sqrt(dx*dx + dy*dy + dz*dz);
		}

		string Tuple3::ToString()
		{
			return std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z);
		}



		// Operator Overloads using class methods

		// Operator Overloads using friend methods

		Tuple3 operator+(const Tuple3 &p1, const Tuple3 &p2)
		{
			return Tuple3(p1.x + p2.x, p1.y + p2.y, p1.z + p2.z);
		}

		Tuple3 operator-(const Tuple3 &p1, const Tuple3 &p2)
		{
			return Tuple3(p1.x - p2.x, p1.y - p2.y, p1.z - p2.z);
		}

		Tuple3 operator*(const Tuple3 &p1, double sf)
		{
			return Tuple3(p1.x*sf, p1.y*sf, p1.z*sf);
		}

		Tuple3 operator*(double sf, const Tuple3 &p1)
		{
			return p1 * sf;
		}

		std::ostream& operator<< (std::ostream &out, const Tuple3 &p1)
		{
			// Since operator<< is a friend of the Tuple3 class, we can access Tuple3's members directly.
			out << "Tuple3(" << p1.x << ", " << p1.y << ", " << p1.z << ")";

			return out;
		}

	}
} // namespace MyModeler::Geometry

