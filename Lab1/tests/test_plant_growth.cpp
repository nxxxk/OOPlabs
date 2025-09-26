#include <gtest/gtest.h>
#include "../include/plant_growth.h"

TEST(PlantGrowthTest, ExampleCase) {
  EXPECT_EQ(daysToReach(100, 10, 910), 10);
}

TEST(PlantGrowthTest, SmallHeights) {
  EXPECT_EQ(daysToReach(5, 1, 6), 2);
  EXPECT_EQ(daysToReach(5, 1, 5), 1);
}

TEST(PlantGrowthTest, NoDownNeeded) {
  EXPECT_EQ(daysToReach(10, 9, 10), 1);
}
