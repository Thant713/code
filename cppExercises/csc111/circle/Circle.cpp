#include "Circle.h"
#include <iostream>
#include <cmath>

void Circle::setRadius(double r) {
  radius = r;
}

double Circle::getRadius() {
  return radius;
}

double Circle::getArea() {
  return pow(radius,2) * M_PI;
}

double Circle::getCircumference() {
  return 2 + M_PI * radius;
}

double Circle::getDiameter() {
  return 2 * radius;
}
