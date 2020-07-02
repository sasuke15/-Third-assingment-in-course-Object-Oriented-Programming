#include"Rectangle.h"

Rectangle::Rectangle( Point a , Point b ): a(a), b(b)
{}

double Rectangle::getArea()const
{

 return friction( a.getX() , b.getX() ) * friction( a.getY() , b.getY() );

}

double Rectangle::getPerim()const
{

  return ( friction( a.getX() , b.getX() ) + friction( a.getY() , b.getY() ) ) * 2;

}

double Rectangle::friction( double x , double y ) const
{

 if( x > y )
 return x - y;

 else 
 return y - x;

}