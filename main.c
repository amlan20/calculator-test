#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "cal1.h"

void test_case1(void)
{
    assert(calculator(1,5,4)==9);
    printf("\n the addition of two positive number is correct");

    assert(calculator(1,-5,4) == (-1));
    printf("\n the addition of one positive number and one negative number is correct");

    assert(calculator(1,5,-4) == (1));
    printf("\n the addition of one negative number and one positive number is correct");

    assert(calculator(2,5,4)==1);
    printf("\n the subtraction of two positive number is correct");

    assert(calculator(2,-5,4) == (-9));
    printf("\n the subtraction of one positive number and one negative number is correct");

    assert(calculator(2,5,-4) == (9));
    printf("\n the subtraction of one negative number and one positive number is correct");

}


void test_case2(void)
{
    assert(calculator(3,5,4)==20);
    printf("\n the multiplication of two positive number is correct");

    assert(calculator(3,-5,4) == (-20));
    printf("\n the multiplication of one positive number and one negative number is correct");

    assert(calculator(3,-5,-4) == (20));
    printf("\n the multiplication of two negative number is correct");

    assert(calculator(3,5,0)==0);
    printf("\n the multiplication of any number with zero will be zero");

    assert(calculator(4,20,4) == (5));
    printf("\n the division of two positive number is correct");

    assert(calculator(4,8,-4) == (-2));
    printf("\n the division of one positive number and one negative number is correct");

    assert(calculator(4,0,-4) == (0));
    printf("\n zero divided any any number will be zero");

    printf("\n the denominator cannot be zero, check the below expression");
    assert(calculator(4,8,0) == (00));
    printf("\n the division of one positive number and one negative number is correct");

}

void main()
{
    test_case1();
    test_case2();
}

