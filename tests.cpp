#include <gtest/gtest.h>
#include "map.cpp"

TEST(MapTileProxyTest, InitializationTest) {
    MapTileProxy mapTile(10, 20, 30, 40);

    ASSERT_EQ(mapTile.CenterX(), 10);
    ASSERT_EQ(mapTile.CenterY(), 20);
    ASSERT_EQ(mapTile.Width(), 30);
    ASSERT_EQ(mapTile.Height(), 40);
}



TEST(MapTileProxyTest, NegativeValuesTest) {
    MapTileProxy mapTile(-10, -20, -30, -40);

    ASSERT_EQ(mapTile.CenterX(), -10);
    ASSERT_EQ(mapTile.CenterY(), -20);
    ASSERT_EQ(mapTile.Width(), -30);
    ASSERT_EQ(mapTile.Height(), -40);
}

TEST(MapTest, PrintWithoutDrawTest) {
    Map map(0, 0, 60, 90, 2, 2);
    testing::internal::CaptureStdout(); // Redirect cout

    map.Print(false);

    std::string output = testing::internal::GetCapturedStdout(); // Get cout
    ASSERT_FALSE(output.empty());
    // Add more assertions to check the correctness of the output
}
