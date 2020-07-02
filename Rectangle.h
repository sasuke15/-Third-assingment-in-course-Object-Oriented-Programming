#pragma once
#include"Point.h"
#include"Polygon.h"

class Rectangle : public Polygon 
{

 public:
 
 Rectangle( Point a , Point b);
 double getArea()const;
 double getPerim()const;

 private:

 double friction( double x , double y )const;
 const Point a,b;

};