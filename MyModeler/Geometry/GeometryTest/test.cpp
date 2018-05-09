#include "pch.h"

#include "../Constants.h"
#include "../Tuple3.h"
#include "../Point.h"
#include "../Vector.h"

using MyModeler::Geometry::Tuple3;
using MyModeler::Geometry::Point;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Tuple3Test, DefaultsToOrigin) {
	Tuple3 p1;

	EXPECT_DOUBLE_EQ(p1.x, 0.0);
	EXPECT_DOUBLE_EQ(p1.y, 0.0);
	EXPECT_DOUBLE_EQ(p1.z, 0.0);
}

TEST(Tuple3Test, ConstructorTest) {
	Tuple3 p1(1,2,3);

	EXPECT_DOUBLE_EQ(p1.x, 1.0);
	EXPECT_DOUBLE_EQ(p1.y, 2.0);
	EXPECT_DOUBLE_EQ(p1.z, 3.0);
}