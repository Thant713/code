#include "Monitor.h"
#include <cmath>
#include <iostream>

void Monitor::setBrand(std::string b) {
  brand = b;
}
void Monitor::setWidth(int w) {
  width = w;
}
void Monitor::setHeight(int h) {
  height = h;
}
void Monitor::setPpi(int p) {
  ppi = p;
}

std::string Monitor::getBrand() const {
  return brand;
}
int Monitor::getWidth() const {
  return width;
}
int Monitor::getHeight() const {
  return height;
}
int Monitor::getPpi() const {
  return ppi;
}

int Monitor::getScreenSize() const {
  double wInches = static_cast<double>(width) / ppi;
  double hInches = static_cast<double>(height) / ppi;
  double diagonal = sqrt(pow(wInches, 2) + pow(hInches, 2));
  return static_cast<int>(diagonal);
}

void Monitor::listMonitor() const {
  std::cout << "Brand: " << brand << "  Screen size: (pixels) " << width << "x"
            << height << " @ " << ppi << "ppi, (diagonal) " << getScreenSize();
}
