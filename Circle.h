#pragma once
#include"Point.h"
#include"Shape.h"

class Circle : public Shape
{
 public:
 Circle( Point o , int r );
 double getArea()const;
 double getPerim()const;

 private:
 const Point o;
 const int r;
};