
#include <string>

#include <gtest/gtest.h>



int Sum(int a, int b)
{
    return a + b;
}

TEST(sumtest, t1)
{
    EXPECT_EQ(3, Sum(1, 2));

}

TEST(strtest, unsignedstr1)
{
    std::string srcStr("abc");
    srcStr += 244;
    srcStr += 245;
    srcStr.append("gh");
    std::string pattern;
    pattern +=244;
    pattern +=245;

    EXPECT_NE(std::string::npos, srcStr.find(pattern));
    srcStr.append("gh");
    EXPECT_NE(std::string::npos, srcStr.find(pattern));
    pattern +=245;
    EXPECT_EQ(std::string::npos, srcStr.find(pattern));
}

TEST(strtest, unsignedstr2)
{
    std::string srcStr;
    srcStr += 244;
    srcStr += 245;

    std::string pattern;
    pattern +=244;
    pattern +=245;
    
    EXPECT_NE(std::string::npos, srcStr.find(pattern));
    srcStr.append("gh");
    EXPECT_NE(std::string::npos, srcStr.find(pattern));
    pattern.append("gh");
    EXPECT_NE(std::string::npos, srcStr.find(pattern));
    
    pattern +=245;
    EXPECT_EQ(std::string::npos, srcStr.find(pattern));
}

TEST(strtest, unsignedstr3)
{
    std::string srcStr;
    srcStr += 244;
    srcStr += 245;

    std::string pattern;
    pattern +=244;
    pattern +=245;
    
    EXPECT_NE(std::string::npos, srcStr.find(pattern));
    pattern.append("gh");
    EXPECT_EQ(std::string::npos, srcStr.find(pattern));
    srcStr.append("gh");
    EXPECT_NE(std::string::npos, srcStr.find(pattern));
    
    pattern +=245;
    EXPECT_EQ(std::string::npos, srcStr.find(pattern));
}


int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
