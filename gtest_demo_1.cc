#include <gtest/gtest.h>

int add(int lhs, int rhs) { return lhs + rhs; }

int main(int argc, char const *argv[]) {

    EXPECT_EQ(add(1,1), 2); // PASS
    EXPECT_EQ(add(1,1), 1) << "FAILED: EXPECT: 2, but given 1";; // FAILDED
    
    return 0;
}
