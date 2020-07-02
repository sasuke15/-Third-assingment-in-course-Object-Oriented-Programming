#pragma once
#include<iostream>
using namespace std;

class Point
{
 public:
 Point( double x, double y);
 double getX() const;
 double getY() const;

 private:
 double x, y;
};