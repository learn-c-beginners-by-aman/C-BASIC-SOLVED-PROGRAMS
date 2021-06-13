/*  C Program to calculate simple interest  */
/*learn_c_beginners*/
/*Aman Gupta*/
#include<stdio.h>
#include<conio.h>

int main()
{
  float principal,rate,time;
  float simpleInterest;
  printf("Enter the principal amount :: ");
  scanf("%f",&principal);
  printf("\nEnter the rate of interest :: ");
  scanf("%f",&rate);
  printf("\nEnter the time duration :: ");
  scanf("%f",&time);
  simpleInterest=(principal*rate*time)/100;
  printf("\nThe simple interest is %f \n",simpleInterest);

  return 0;
}