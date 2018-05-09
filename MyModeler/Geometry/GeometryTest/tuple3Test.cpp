#include "pch.h"

#include "../Constants.h"
#include "../Tuple3.h"

using MyModeler::Geometry::Constants;
using MyModeler::Geometry::Tuple3;

TEST(Tuple3Test, Verify) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Tuple3Test, DefaultConstructor) {
	Tuple3 p1;

	EXPECT_NEAR(p1.x, 0.0, Constants::Tolerance);
	EXPECT_NEAR(p1.y, 0.0, Constants::Tolerance);
	EXPECT_NEAR(p1.z, 0.0, Constants::Tolerance);
}

TEST(Tuple3Test, ConstructorXYZ) {
	Tuple3 p1(1,2,3);

	EXPECT_NEAR(p1.x, 1.0, Constants::Tolerance);
	EXPECT_NEAR(p1.y, 2.0, Constants::Tolerance);
	EXPECT_NEAR(p1.z, 3.0, Constants::Tolerance);
}

TEST(Tuple3Test, ConstructorXY) {
	Tuple3 p1(1, 2);

	EXPECT_NEAR(p1.x, 1.0, Constants::Tolerance);
	EXPECT_NEAR(p1.y, 2.0, Constants::Tolerance);
	EXPECT_NEAR(p1.z, 0.0, Constants::Tolerance);
}

TEST(Tuple3Test, CopyConstructor) {
	Tuple3 p1(1, 2, 3);
	Tuple3 p2(p1);

	EXPECT_NEAR(p2.x, 1.0, Constants::Tolerance);
	EXPECT_NEAR(p2.y, 2.0, Constants::Tolerance);
	EXPECT_NEAR(p2.z, 3.0, Constants::Tolerance);
}

TEST(Tuple3Test, SetXYZ) {
	Tuple3 p1;
	p1.setXYZ(1, 2, 3);

	EXPECT_NEAR(p1.x, 1.0, Constants::Tolerance);
	EXPECT_NEAR(p1.y, 2.0, Constants::Tolerance);
	EXPECT_NEAR(p1.z, 3.0, Constants::Tolerance);
}

TEST(Tuple3Test, Offset) {
	Tuple3 p1(1,2,3);
	Tuple3 p2 = p1.Offset(4, 5, 6);

	EXPECT_NEAR(p2.x, 5.0, Constants::Tolerance);
	EXPECT_NEAR(p2.y, 7.0, Constants::Tolerance);
	EXPECT_NEAR(p2.z, 9.0, Constants::Tolerance);

	Tuple3 p3 = p2.Offset(-4, -5, -6);
	EXPECT_NEAR(p3.x, 1.0, Constants::Tolerance);
	EXPECT_NEAR(p3.y, 2.0, Constants::Tolerance);
	EXPECT_NEAR(p3.z, 3.0, Constants::Tolerance);

}
