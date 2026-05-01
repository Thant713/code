#include "Circle.h"
#include <iostream>

int main() {
  Circle red;
  red.setRadius(100);

  std::cout << "Circle area is " << red.getArea() << std::endl;
  std::cout << "Circle circumference is " << red.getCircumference() << std::endl;
  std::cout << "Circle diameter is " << red.getDiameter() << std::endl;
}
