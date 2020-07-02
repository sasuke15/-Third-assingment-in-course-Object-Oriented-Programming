#pragma once
#include<iostream>
#include"Shape.h"
using namespace std;

class Polygon : public Shape
{

 virtual double getArea()const = 0;
 virtual double getPerim()const = 0;

};