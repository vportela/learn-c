// Module 3 function example

#define _CRT_SECURE_NO_WARNINGS // for Visual Studio compiler
#pragma warning(disable : 6031) // ignore scanf warnings

#include <stdio.h> //for printf and scanf

#define PI 3.14

/* Computes the circumference of a circle with radius r.
 *  Pre: r is defined and is > 0.
 *       PI is a constant macro representing an approximation of pi.
 */
double Find_circum(double r);

/* Displays a real number in a box. */
void print_rboxed(double rnum);

// input: radius as a double
// returns the area
double Find_area(double r);

int main() // driver function
{
  double inputNum; // for the box number
  double radius, circum;

  // we already have an area variable but it is local to the area function.
  // so we have to declare a variable inside of main to hold the area value.
  double areaInMain;

  printf("Enter the radius, it must be greater than 0:");
  scanf("%lf", &radius);
  areaInMain = Find_area(radius);
  circum = Find_circum(radius);
  printf("\nThe Circumference is %.2f\n", circum);
  // number in a box
  printf("\nEnter a number to go inside the box: ");
  scanf("%lf", &inputNum);
  // function call
  print_rboxed(inputNum); // Argument

  // get the radius from the user
  printf("Enter the radius, it must be greater than 0: ");
  scanf("%lf", &radius);
  circum = Find_circum(radius);
  printf("\nThe Circumference is %.2f\n", circum);
  return 0;
}

// program 4 stuff
//displays menu choices
//ask, get, and return the integer choice from the user
// make sure you return an int! it needs to be the right type.
int Display_menu(){ 
  int choice;
  printf("choice 1:\n");
  printf("choice 2:\n");
  printf("enter choice:\n");
  scanf("%d", &choice);
  return choice;
  
}


// input: radius as a double
// returns the area
double Find_area(double radius) {
  // declare variables
  // pi is a global constant
  double area;
  double returnValue;
  // setting conditions
  if (radius <= 0) {
    printf("\nThe radius you entered is zero or less");
    returnValue = 0.0;
  }
  else { 
    area = radius * radius *PI;
    returnValue = area; 
  }
   // you have to return a double in this function, area is a double so it works
  // out.
  return area;
}

/* Computes the circumference of a circle with radius r.
 *  Pre: r is defined and is > 0.
 *       PI is a constant macro representing an approximation of pi.
 */
double Find_circum(double r) {
  double circumference = 2.0 * PI * r;
  if (r <= 0) {
    printf("\nThe radius you entered for finding circum is zero or less");
    return 0.0;
  }
  return circumference;
}

/* Displays a real number in a box. */
void print_rboxed(double rnum)
// formal parameter
{
  printf("***********\n");
  printf("***********\n");
  printf("*  %5.2f  *\n", rnum);
  printf("***********\n");
  printf("***********\n");
}
