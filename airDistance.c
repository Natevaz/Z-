// Program made by Nate Vazquez
// 9-5-19
//This program is made to take the Latitdue and longitude of two places and
//calculates the distance between the two.
#include<stdio.h> // When using # include, I included all of these libraries just in case I need them.
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<math.h>
#define PI 3.14159 // Wanted to define PI to 3.14159

int main(int argc, char **argv) {

double lon = 0.0; // Here is where I set all of my "variables" to either a double or an integer. lon means longitude
double lat = 0.0;// lat means Latitude
double lon1 = 0.0; // lon1 and lat1 mean the same thing, except they are named different since we have two locations that need a lat and a lon
double lat1 = 0.0;
int r = 6371; // average radius of the earth in KMS
double radianslat = 0.0; // everything that says radians before it means that this will be converted into radians late.
double radianslon = 0.0;// for instance radianslon is just lon plugged into a formula that will produce lon into radians.
double londiff = 0.0;// this is short for longitude difference, which we needed to plug into our formula.
double radianslat1 = 0.0;
double radianslon1 = 0.0;
double d = 0.0; // d needed to be defined as a double

  printf("Enter a Latitude for the Orgin\n"); // this is where all the magic happens. where it says print followed by a scan
  scanf("%lf", &lat);// is where the program ask for user input.
  printf("Enter a longitude for the Orgin\n");
  scanf("%lf", &lon);
  printf ("Now enter a different Latitude for a different location\n");
  scanf("%lf", &lat1);
  printf("Now enter a different Longitude for the different location\n");
  scanf("%lf", &lon1);
  radianslat = ((lat)/(180) * PI);// this is where the conversions from degrees to radians take place
  radianslat1 = ((lat1)/(180) * PI);
  radianslon = ((lon)/(180) * PI);
  radianslon1 =((lon1)/(180) * PI);
  londiff = radianslon1 - radianslon;// this is where that difference of lonitude b and longitude a
  d = acos((sin(radianslat)*sin(radianslat1)) + (cos(radianslat)*cos(radianslat1)*cos(londiff))) * r;// this is the distance equation
printf("Orgin: (%lf) (%lf)\n",lat,lon);// and finally this is where they display the outcomes.
printf("Destination: (%lf) (%lf)\n",lat1,lon1);
printf("Air Distance: (%lf) KMS \n", d);

}
