#include "plant_growth.h"

int daystoreach(int up, int down, int need) {
  int height = 0;
  int days = 0;
  while (true) {
    days++;
    height += up;
    if (height >= need) return days;
    height -= down;
  }
} 
