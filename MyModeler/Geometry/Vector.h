#pragma once

#include <string>
#include "Tuple3.h"

namespace MyModeler {
	namespace Geometry {

		class Vector : public Tuple3
		{
		public:

			// Constructors
			Vector(double x, double y, double z);
			Vector(const Tuple3 &v1);

			// Setters

			// Methods
			double Vector::Magnitude() const;
			Vector Vector::Normalize() const;


			// Operator Overloads using class methods

			// Operator Overloads using friend methods

			friend std::ostream& operator<< (std::ostream &out, const Vector &v1);

		};



	}
} // namespace MyModeler::Geometry

