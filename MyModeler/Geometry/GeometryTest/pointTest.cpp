#include "pch.h"

#include "../Constants.h"
#include "../Point.h"

using MyModeler::Geometry::Constants;
using MyModeler::Geometry::Point;

TEST(PointTest, Verify) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(PointTest, DefaultConstructor) {
	Point p1;

	EXPECT_NEAR(p1.x, 0.0, Constants::Tolerance);
	EXPECT_NEAR(p1.y, 0.0, Constants::Tolerance);
	EXPECT_NEAR(p1.z, 0.0, Constants::Tolerance);
}
