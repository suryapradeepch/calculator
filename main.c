# include <stdio.h>
# include <assert.h>
#include "calculator.h"
int main()
{
test_case1();
test_case2();
test_case3();
test_case4();
}
void test_case1(void)
{
    assert(calculator(1,5,5)==10);
    printf("\n addition of two positive numbers");
    assert(calculator(1,-2,-2)==-4);
    printf("\n addition of two negative numbers");
    assert(calculator(1,5,-2)==3);
    printf("\n addition of positive and negative numbers");
    assert(calculator(1,5,0)==5);
    printf("\n addition of positive number and zero");
}
void test_case2(void)
{
    assert(calculator(2,5,5)==0);
    printf("\n subtraction of two positive numbers");
     assert(calculator(2,-2,-2)==0);
    printf("\n subtraction of two negative numbers");
     assert(calculator(2,5,-2)==7);
    printf("\n subtraction of positive and negative numbers");
     assert(calculator(2,5,0)==5);
    printf("\n subtraction of positive number and zero");
}
 void test_case3(void)
{
    assert(calculator(3,5,5)==25);
    printf("\n multiplication of two positive numbers");
     assert(calculator(3,-2,-2)==4);
    printf("\n multiplication of two negative numbers");
     assert(calculator(3,5,-2)==-10);
    printf("\n multiplication of positive and negative numbers");
     assert(calculator(3,5,0)==0);
    printf("\n multiplication of positive number and zero");
}
 void test_case4(void)
{
    assert(calculator(4,5,5)==1);
    printf("\n division of two positive numbers");
     assert(calculator(4,-2,-2)==1);
    printf("\n division of two negative numbers");
     assert(calculator(4,4,-2)==-2);
    printf("\n division of positive and negative numbers");
}


