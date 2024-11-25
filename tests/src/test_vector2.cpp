#include <gtest/gtest.h>
#include <walle-lib/vector2.hpp>

// Validates the behavior of the constructors
TEST(Vector2, test_constructor) {
  Vector2 v;

  EXPECT_NEAR(v.x(), 0.0, 0.00001);
  EXPECT_NEAR(v.y(), 0.0, 0.00001);
}
