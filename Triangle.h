#pragma once
#include"Point.h"
#include"Polygon.h"

class Triangle : public Polygon
{

  public:
 
  Triangle(Point o , Point a , Point b);
  double getArea()const;
  double getPerim()const;

  private:
  
  double friction( Point a , Point b )const;
  double shoresh( double x )const;
  const Point o,a,b;

};