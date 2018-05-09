#pragma once

#include <string>

namespace MyModeler { 	namespace Geometry {

	class Tuple3
	{
	public:
		double x;
		double y;
		double z;

		// Constructors
		Tuple3(double x=0, double y=0, double z=0);
		Tuple3(const Tuple3 &p1);

		// Setters
		void Tuple3::setXYZ(double x = 0, double y = 0, double z = 0);

		// Methods
		Tuple3 Tuple3::Offset(double x, double y, double z=0) const;
		double Tuple3::Distance(const Tuple3 &p1) const;

		std::string Tuple3::ToString();

		// Operator Overloads using class methods

		// Operator Overloads using friend methods
		friend Tuple3 operator+(const Tuple3 &p1, const Tuple3 &p2);

		friend Tuple3 operator-(const Tuple3 &p1, const Tuple3 &p2);

		friend Tuple3 operator*(const Tuple3 &p1, double sf);
		friend Tuple3 operator*(double sf, const Tuple3 &p1);
		friend std::ostream& operator<< (std::ostream &out, const Tuple3 &p1);


	};



}} // namespace MyModeler::Geometry

