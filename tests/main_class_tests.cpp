#include "gtest/gtest.h"
#include "src/main_class.h"

TEST(DumbTest, OneIsOne)
{
    const auto numberOne = 1;
    EXPECT_TRUE(1 == numberOne);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
