// Nate Vazquez
// Created on 9-10-19
// Purpose of this porgram is to compute a persons bmr (Basal Metabolic Rate).
#include<string.h> // these are all the libraries I implement. I always put all 6 libraries regardless of the program.
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int main(int argc, char **argv) {

double sex = 0.0; // all the variable that I will use for the program are here.
double weight = 0.0;
double height = 0.0;
double age = 0.0;
double BMRm = 0.0;
double BMRf = 0.0;
printf("What is your sex? Type 1 for male and 2 for female\n");
scanf("%lf", &s);
if (sex==1){ // this if statement is here since we have two formulas. One for male and one for female.
//if the user puts in 1, then it will activate this code, and if they put 2 it will activate the female code.
printf("What is your weight(in kilograms)?\n");
scanf("%lf", &weight);
printf("What is your height(in centimeters)?\n");
scanf("%lf", &height);
printf("What is your age(in years)?\n");
scanf("%lf", &age);
BMRm = 66.47+(13.7*(weight))+(5*(height))-(6.8*(age));
printf("Subject's BMR is(%lf)\n",BMRm);
}else if (sex ==2){
printf("What is your weight(in kilograms)?\n");
scanf("%lf", &weight);
printf("What is your height(in centimeters)?\n");
scanf("%lf", &height);
printf("What is your age(in years)?\n");
scanf("%lf", &age);
BMRf = 655.1+(9.6*(weight))+(1.8*(height))-(4.7*(age));
printf("Subject's BMR is (%lf)\n", BMRf);
}
}
