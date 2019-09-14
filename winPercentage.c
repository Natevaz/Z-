// Created by Nate Vazquez
// 9-13-19
// The purpose of this prgram is to calculate the win percentage.

#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// -lm must be included or this program will not work.
int main(int argc, char **argv){

  double Winp = 0.0; // these are my variables used for the program.
  double AllowedR = 0.0;
  double Runs = 0.0;
  double pvalue = 0.0;
  double Games = 0.0;
  double ActualWins = 0.0;
  double PredictedW = 0.0;
  double PredictedL = 0.0;
  double Error = 0.0;



  printf("Runs Scored?\n");// this is where the user will put in their inputs
  scanf("%lf", &Runs);
  printf("Runs Against?\n");
  scanf("%lf", &AllowedR);
  printf("Total number of games played?\n");
  scanf("%lf", &Games);
  printf("actual wins?\n");
  scanf("%lf", &ActualWins);
  pvalue = pow ((Runs+AllowedR)/(Games), 0.287);// thiss is where the math happens
  Winp = (pow((Runs), pvalue))/((pow((Runs), pvalue))+(pow((AllowedR),pvalue)));
  PredictedW = round(Winp * Games);
  PredictedL = round(Games - PredictedW);
  Error = abs(PredictedW - ActualWins);
  printf(" PValue (%lf) WinPercentage (%lf) Prediced Wins (%lf) Predicted Loss (%lf) Error (%lf)\n", pvalue, Winp, PredictedW,PredictedL, Error);
// above is where the output will occur.
}
