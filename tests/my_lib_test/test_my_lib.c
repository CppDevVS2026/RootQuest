#include "unity.h"
#include "my_lib/my_lib.h"

void setUp(void) {
    // Run before every test
}

void tearDown(void) {
    // Run after every test
}

void test_add_should_sum_two_integers(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
    TEST_ASSERT_EQUAL_INT(-1, add(2, -3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_should_sum_two_integers);
    return UNITY_END();
}
