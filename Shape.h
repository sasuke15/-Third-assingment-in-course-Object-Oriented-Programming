#pragma once
#include<iostream>
using namespace std;

class Shape
{

 public:
 
  virtual double getArea()const = 0;
  virtual double getPerim()const = 0;

};