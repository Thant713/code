#include "InventoryItem.h"

InventoryItem::InventoryItem(std::string i, double c, int u) {
  item = i;
  cost = c;
  units = u;
}

std::string InventoryItem::getDescription() const {
  return item;
}

double InventoryItem::getCost() const {
  return cost;
}

int InventoryItem::getUnits() const {
  return units;
}
