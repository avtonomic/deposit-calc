#include <deposit.h>
#include <ctest.h>

CTEST(logic_suite, validation_all_wrong)
{
    // Given
    const int amount_test = 9000;
    const int data_test = -1;

    // When
    const int result = validation(amount_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, validation_all_wrong_other)
{
    // Given
    const int amount_test = 9000;
    const int data_test = 500;

    // When
    const int result = validation(amount_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, validation_amount_wrong)
{
    // Given
    const int amount_test = 9000;
    const int data_test = 10;

    // When
    const int result = validation(amount_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, validation_data_wrong)
{
    // Given
    const int amount_test = 15000;
    const int data_test = -1;

    // When
    const int result = validation(amount_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, validation_data_wrong_other)
{
    // Given
    const int amount_test = 15000;
    const int data_test = 500;

    // When
    const int result = validation(amount_test, data_test);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(logic_suite, validation_all_right)
{
    // Given
    const int amount_test = 15000;
    const int data_test = 100;

    // When
    const int result = validation(amount_test, data_test);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}