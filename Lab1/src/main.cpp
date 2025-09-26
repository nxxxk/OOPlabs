#include <iostream>
#include "plant_growth.h"
using namespace std;

int main() {
  int up, down, need;
  cin >> up >> down >> need;
  cout << daysToReach(up, down, need) << endl;
  return 0;
}
