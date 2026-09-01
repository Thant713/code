#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <string>

class InventoryItem {
private:
  std::string item;
  double cost;
  int units;

public:
  InventoryItem(std::string i, double c, int u);

  std::string getDescription() const;
  double getCost() const;
  int getUnits() const;
};

#endif
