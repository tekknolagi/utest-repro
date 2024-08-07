#include "utest.h"

char a = 'c';

UTEST(ExampleTest, Test1) {
    EXPECT_EQ(a, 'c');
}

UTEST_MAIN();
