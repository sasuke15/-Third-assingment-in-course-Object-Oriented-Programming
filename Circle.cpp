#include"Circle.h"

Circle::Circle( Point o , int r ): o(o) , r(r)
{}
double Circle::getArea()const
{

  return 3.1415 * r * r;

}
double Circle::getPerim()const
{

 return 6.283 * r;

}