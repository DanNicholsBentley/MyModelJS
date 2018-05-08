// MyModelerApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <memory>

#include "Point.h"
#include "Vector.h"
#include "Line.h"
#include "Circle.h"
#include "LineString.h"

#include "ModelComponent.h"
#include "Model.h"


using MyModeler::Geometry::Point;
using MyModeler::Geometry::Vector;

using MyModeler::Graphics::Line;
using MyModeler::Graphics::LineString;
using MyModeler::Graphics::Circle;

using MyModeler::ModelComponent;
using MyModeler::Model;

int main()
{

	Point p1(1, 1);
	Point p2 = p1.Offset(1, 1);

	std::cout << "p1 = " << p1 << std::endl;
	std::cout << "p2 = " << p2 << std::endl;

	std::cout << "Distance = " << p1.Distance(p2) << std::endl;


	Point p3 = p1 + p2;
	std::cout << "p3 = " << p3 << std::endl;

	Point p4 = p3 - p1;
	std::cout << "p4 = " << p4 << std::endl;


	Point p5 = p1 * 3;
	std::cout << "p5 = " << p5 << std::endl;

	Point p6 = 3 * p1;
	std::cout << "p6 = " << p6 << std::endl;

	Point p7 = Point(p1) * 3;
	std::cout << "p7 = " << p7 << std::endl;


	Vector v1(1, -1, 0);
	std::cout << "v1 = " << v1 << std::endl;

	Vector v2 = v1.Normalize();
	std::cout << "v2 = " << v2 << std::endl;


	Point p8 = v2;
	p8.x = 999;
	std::cout << "p8 = " << p8 << std::endl;

	p8 = p1;
	std::cout << "p8 = " << p8 << std::endl;

	//Line l1(p1, p2);
	auto l1 = std::make_shared<Line>(p1, p2);
	std::cout << *l1 << std::endl;

	Vector normal(0, 0, 1);
	//Circle c1(p3, 5.0, normal, "Blue");
	auto c1 = std::make_shared<Circle>(p3, 5.0, normal, "Blue");
	std::cout << *c1 << std::endl;

	//LineString lString("Green");
	auto lString1 = std::make_shared<LineString>("Green");
	lString1->addVertice(p1);
	lString1->addVertice(p2);
	lString1->addVertice(p3);
	lString1->addVertice(p4);
	std::cout << *lString1 << std::endl;


	//ModelComponent comp1("comp1");
	auto comp1 = std::make_shared<ModelComponent>("comp1");
	comp1->AddGraphicalElement(l1);
	comp1->AddGraphicalElement(c1);
	std::cout << *comp1 << std::endl;

	//ModelComponent comp2("comp2");
	auto comp2 = std::make_shared<ModelComponent>("comp2");
	comp2->AddGraphicalElement(lString1);
	std::cout << *comp2 << std::endl;


	auto myModel = std::make_shared<Model>("MyModel");
	myModel->AddComponent(comp1);
	myModel->AddComponent(comp2);
	std::cout << *myModel << std::endl;

    return 0;
}

