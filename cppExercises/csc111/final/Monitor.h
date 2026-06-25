#ifndef MONITOR_H
#define MONITOR_H

#include <string>

class Monitor {
private:
  std::string brand;
  int width;
  int height;
  int ppi;

public:
  void setBrand(std::string b);
  void setWidth(int w);
  void setHeight(int h);
  void setPpi(int p);

  std::string getBrand() const;
  int getWidth() const;
  int getHeight() const;
  int getPpi() const;

  int getScreenSize() const;
  void listMonitor() const;
};

#endif
