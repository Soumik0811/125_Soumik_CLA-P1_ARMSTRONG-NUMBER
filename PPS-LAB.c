/*Write a program to check whether a number is Armstrong number or not 
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.*/
#include <stdio.h>
#include <math.h>
int main()
{
  int number,originalnumber;
  int count=0,rem;
  float result=0.0;
  printf("Enter The Number..");
  scanf("%d",&number);
  originalnumber=number;
  while(originalnumber!=0)
  {
    originalnumber=originalnumber/10;
    count++;
  }
  originalnumber=number;
  while (originalnumber!=0)
   {
    rem=originalnumber%10;
    result=result+pow(rem,count);
    originalnumber=originalnumber/10;
  }
  if((int)result==number)
  {
    printf("%d is a Armstrong Number",number);
  }
  else
  printf("%d is NOT a Armstrong Number",number);
  return 0;
}
