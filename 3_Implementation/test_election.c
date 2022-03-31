#include "unity.h"

extern void test_election();

void setUp(void)
{ 
}

void tearDown(void)
{ 
}

int main(void)
{ 
    UnityBegin(NULL);

    RUN_TEST(test_election);

    return (UnityEnd());
}