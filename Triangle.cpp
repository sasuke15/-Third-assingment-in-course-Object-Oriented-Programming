#include"Triangle.h"


Triangle::Triangle( Point o, Point a , Point b ): o(o) , a(a), b(b)
{}

double Triangle::getArea()const
{

 double a = friction( o , this ->a );
 
 double b = friction( o , this ->b );

 double c = friction( this -> a , this -> b );

 return  shoresh( -1 * ( a * a +  b * b +  c * c ) + 2 * ( a * b +  a * c +  b * c ) ) * 0.25 ;

} 

double Triangle::getPerim()const
{

 double a = shoresh(friction( o , this ->a ));
 
 double b = shoresh(friction( o , this ->b ));

 double c = shoresh(friction( this -> a , this -> b ));

 return a + b + c;

}

double Triangle::friction( Point a , Point b ) const
{

 double x = a.getX() - b.getX();
 x *= x;

 double y = a.getY() - b.getY();
 y *= y;


 return  x + y ;

}

double Triangle::shoresh( double x )const
{

 double i , j = 0.000001;

 for( i = 0 ; x > i * i ; i += j )
 if( i * i == x )
 return i;

 return i - j;

}