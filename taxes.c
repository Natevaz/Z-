/**
 * Nate Vazquez
 * 9-10-19
 *
 *
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);

  printf("Do you have any children? (Y) or (N)? ");
  getchar(); //remove the endline character
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

if (agi >= 0 && agi <= 17000) {
childCredit = numChildren*1000;
tax = agi *.10 - childCredit;
totalTax = tax;

}else if (agi > 17000 && agi <= 69000 ) {
childCredit = numChildren* 1000;
tax = 1700 + .15;
totalTax =  1700 +.15 *(agi - 17000) - childCredit;
}else if (agi > 69000 && agi <= 139350){
childCredit  = numChildren *1000;
tax = 9500 + .25;
totalTax = 9500 +.25*(agi - 69000) - childCredit;
}else if (agi > 139350 && agi <= 212300){
childCredit = numChildren * 1000;
tax = 27087.5 +(.28*agi);
totalTax = 27087.5 +.28*(agi - 139350) - childCredit;
}else if (agi > 212300 && agi <= 379150){
  childCredit = numChildren * 1000;
  tax = 47513.5 +(.33*agi);
  totalTax = 47513.5 + .33*(agi - 212300) - childCredit;
}else if (agi > 379150){
  childCredit = numChildren * 1000;
  tax = 102574 + (.35*agi);
  totalTax = 102574 + .35*(agi - 379150) - childCredit;
}
  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);


  return 0;
}
