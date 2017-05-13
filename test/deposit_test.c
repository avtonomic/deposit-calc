#include <deposit.h>
#include <ctest.h>

CTEST(arithmetic_suite, income_first_if_dataFirst)
{
    // Given
    const int amount_test = 100000;
    const int data_test = 20;

    // When
    const int result = income_calc(amount_test, data_test);

    // Then
    const int expected = 90000;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataSecond)
{
    // Given
    const int amount_test = 100000;
    const int data_test = 110;

    // When
    const int result = income_calc(amount_test, data_test);

    // Then
    const int expected = 102000;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataThird)
{
    // Given
    const int amount_test = 70000;
    const int data_test = 220;

    // When
    const int result = income_calc(amount_test, data_test);

    // Then
    const int expected = 74200;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_first_if_dataFourth)
{
    // Given
    const int amount_test = 80000;
    const int data_test = 324;

    // When
    const int result = income_calc(amount_test, data_test);

    // Then
    const int expected = 89600;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataFirst)
{
    // Given
    const int amount_test = 710000;
    const int data_test = 10;

    // When
    const int result = income_calc(amount_test, data_test);

    // Then
    const int expected = 639000;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataSecond)
{
    // Given
    const int amount_test = 180000;
    const int data_test = 115;

    // When
    const int result = income_calc(amount_test, data_test);

    // Then
    const int expected = 185400;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataThird)
{
    // Given
    const int amount_test = 640000;
    const int data_test = 185;

    // When
    const int result = income_calc(amount_test, data_test);

    // Then
    const int expected = 691200;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataFourth)
{
    // Given
    const int amount_test = 680000;
    const int data_test = 364;

    // When
    const int result = income_calc(amount_test, data_test);

    // Then
    const int expected = 782000;
    ASSERT_EQUAL(expected, result);
}