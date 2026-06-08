#include "unity.h"
#include "character_generator/character_generator.h"

void setUp(void) {
    // Run before every test
}

void tearDown(void) {
    // Run after every test
}

void test_placeholder(void) {
    TEST_ASSERT_TRUE(1);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_placeholder);
    return UNITY_END();
}
