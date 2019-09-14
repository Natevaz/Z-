// Created by Nate Vazquez
// 9-12-19
// The purpose of this program is to create a table that shows
// the 401k account.
#include<math.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char**arv) {
  double StartB = 0.0;
  double MonthlyC = 0.0;
  double AnnualR = 0.0;
  double AnnualI = 0.0;
  double Retirement = 0.0;
  double total = 0.0;
  double interest = 0.0;
  double Balance = 0.0;

  printf("What is your Starting Balance? \n");
  scanf("%lf", &StartB);
  printf("What is your monthly contribution amount? \n");
  scanf("%lf", &MonthlyC);
  printf("What is your annual rate of return on a scale of 0-1? \n");
  scanf("%lf", &AnnualR);
  printf("Give an annual inflation rate \n");
  scanf("%lf", &AnnualI);
  printf("How many years until retired?\n");
  scanf("%lf", &Retirement);



  int i;

  for (i=1; i<10; i++){
    // use formula times balance divide by month
    interest = (((1+AnnualR)/(1+AnnualI)-1)*StartB)/ i;
    Balance = interest + StartB + MonthlyC;
    printf(" Month(%lf)  Interest(%lf)  Balance(%lf) \n", , interest, Balance);
    //printf("(%lf)  (%lf)  (%lf)  (%lf) (%lf) \n", StartB, MonthlyC, AnnualR, AnnualI, Retirement);
  }
}
