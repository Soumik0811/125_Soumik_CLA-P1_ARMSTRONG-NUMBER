/*QUESTION-Write a program to print all the Armstrong numbers between two      intervals.  
    An Armstrong number of three digits is an integer such that the sum 
    the cubes of its digits is equal to the number itself. 
For example,
1)371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371.
2)153 is an Armstrong number since 1^3 + 5^3 + 3^3 = 153.*/
#include <stdio.h>
#include <math.h>
int main()
{
  int number,originalnumber,low,high;
  int count=0,rem;
  float result=0.0;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &low, &high);
  printf("Armstrong numbers between %d and %d are: ", low, high);
  
  // swap numbers if high < low
  if (high < low) {
    high += low;
    low = high - low;
    high -= low;
  }
  
    // iterate number from (low + 1) to (high - 1)
  // In each iteration, check if number is Armstrong
  for (number = low + 1; number < high; ++number) 
  {
  originalnumber=number;
   // number of digits calculation
  while(originalnumber!=0)
  {
    originalnumber=originalnumber/10;
    count++;
  }
  originalnumber=number;
  
 // result contains sum of nth power of individual digits
  while (originalnumber!=0)
   {
    rem=originalnumber%10;
    result=result+pow(rem,count);
    originalnumber=originalnumber/10;
  }
  
    // check if number is equal to the sum of nth power of individual digits
  if((int)result==number)
  {
    printf("%d\t",number);
  }
  // resetting the values
    count = 0;
    result = 0;
  }
  return 0;//End of Program
}
