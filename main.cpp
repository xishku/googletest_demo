#include <gtest/gtest.h>

int Sum(int a, int b)
{
    return a + b;
}

TEST(sumtest, t1) {
    EXPECT_EQ(3, Sum(1, 2));

}

int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
