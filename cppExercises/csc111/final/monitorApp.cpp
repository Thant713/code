#include "Monitor.h"

int main() {
  Monitor samsung;
  samsung.setBrand("Samsung");
  samsung.setWidth(1920);
  samsung.setHeight(1080);
  samsung.setPpi(70);
  samsung.listMonitor();
  return 0;
}
