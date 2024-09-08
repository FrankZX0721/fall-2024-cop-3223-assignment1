//********************************************************
// fracturing.c
// Author: Frank Morales
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program is used to calculate the height, width, distance, perimeter, and area of a circle.
// Input: 2 points on a graph (x1,y1 and x2,y2)
//
// Output: (to the command line) The calculations of height, width, distance, perimeter, and area of the circle based on the points inputted.
// //********************************************************

#include <stdio.h>
#include <math.h>
#define pi 3.14159

//********************************************************
// double distanceformula(double x1, double x2, double y1, double y2)
//
// Purpose: Used to calculate distance between the points inputted in other calculate functions. Considering these points act as the diameter of a circle,
// this also can solve for the width, height, and diameter of a circle.
// Output: Returns distance.
// Precondition: Needs values for x1, x2, y1, and y2.
// Postcondition: None.
//********************************************************

double distanceformula(double x1, double x2, double y1, double y2)
{
    double distance = 0; // Distance between two points.

    distance = sqrt((x2  - x1) * (x2  - x1) + (y2  - y1) * (y2  - y1));

    return distance;
}

//********************************************************
// double calculateWidth()
//
// Purpose: Used to calculate the width of a circle by taking in inputs for x1, x2, y1, and y2.
// Output: Prints out what values for x1, x2, y1, and y2 are inputted and prints out the width calculated. Returns 1.
// Precondition: None.
// Postcondition: None.
//********************************************************

double calculateWidth()
{
    double x1 = 0;  // x position of point 1
    double x2  = 0; // y position of point 1
    double y1 = 0; // x position of point 2
    double y2  = 0; // y position of point 2

    // Takes in four numbers for two position points.

    printf("Calculation for Width \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double width = distanceformula(x1, x2, y1, y2); // Width of circle based on distance formula (aka diameter)

    // Prints out the points entered and the Width calculated.

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The width of the city encompassed by your request is %lf \n\n", width);

    return 1;
}

//********************************************************
// double calculateHeight()
//
// Purpose: Used to calculate the height of a circle by taking in inputs for x1, x2, y1, and y2.
// Output: Prints out what values for x1, x2, y1, and y2 are inputted and prints out the height calculated. Returns 1.
// Precondition: None.
// Postcondition: None.
//********************************************************

double calculateHeight()
 {
    double x1 = 0;  // x position of point 1
    double x2  = 0; // y position of point 1
    double y1 = 0; // x position of point 2
    double y2  = 0; // y position of point 2

    // Takes in four numbers for two position points.

    printf("Calculation for Height \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    
    double height = distanceformula(x1, x2, y1, y2); // Height of circle based on distance formula (aka diameter)

    // Prints out the points entered and the Height calculated.

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The height of the city encompassed by your request is %lf \n\n", height);

    return 1;

 }

//********************************************************
// double calculateDistance()
//
// Purpose: Used to calculate the distance of a circle by taking in inputs for x1, x2, y1, and y2.
// Output: Prints out what values for x1, x2, y1, and y2 are inputted and prints out the distance calculated. Returns distance.
// Precondition: None.
// Postcondition: None.
//********************************************************

double calculateDistance()
{ 
    
    double x1 = 0;  // x position of point 1
    double x2  = 0; // y position of point 1
    double y1 = 0; // x position of point 2
    double y2  = 0; // y position of point 2

    // Takes in four numbers for two position points.

    printf("Calculation for Distance \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double distance = distanceformula(x1, x2, y1, y2); // Distance of circle based on distance formula (aka diameter)

    // Prints out the points entered and the Distance calculated.

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The distance between the two points is %lf \n\n", distance);

    return distance;

}

//********************************************************
// double calculatePerimeter()
//
// Purpose: Used to calculate the perimeter of a circle by taking in inputs for x1, x2, y1, and y2.
// Output: Prints out what values for x1, x2, y1, and y2 are inputted and prints out the perimeter calculated. Returns 2.
// Precondition: None.
// Postcondition: None.
//********************************************************

double calculatePerimeter()
{
    double x1 = 0;  // x position of point 1
    double x2  = 0; // y position of point 1
    double y1 = 0; // x position of point 2
    double y2  = 0; // y position of point 2

    // Takes in four numbers for two position points.

    printf("Calculation for Perimeter \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double distance = distanceformula(x1, x2, y1, y2); // Distance of circle based on distance formula (aka diameter)
    double perimeter = 2 * pi * (distance / 2); // Perimeter of circle utilizing pi and distance calculated.

    // Prints out the points entered and the Perimeter calculated.

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The perimeter of the city encompassed by your request %lf \n\n", perimeter);

    return 2;
}

//********************************************************
// double calculateArea()
//
// Purpose: Used to calculate the area of a circle by taking in inputs for x1, x2, y1, and y2.
// Output: Prints out what values for x1, x2, y1, and y2 are inputted and prints out the area calculated. Returns 2.
// Precondition: None.
// Postcondition: None.
//********************************************************

double calculateArea()
{
    double x1 = 0;  // x position of point 1
    double x2  = 0; // y position of point 1
    double y1 = 0; // x position of point 2
    double y2  = 0; // y position of point 2

    // Takes in four numbers for two position points.

    printf("Calculation for Area \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double distance = distanceformula(x1, x2, y1, y2); // Distance of circle based on distance formula (aka diameter)
    double area = pi * pow(distance, 2); // Area of circle utilizing distance (aka diameter) and pi.

    // Prints out the points entered and the Area calculated.

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The area of the city encompassed by your request is %lf \n\n", area);

    return 2;
}

//********************************************************
// int main(int argc, char **argv)
//
// Purpose: The main function of the  code. Used to call the other functions in the code.
// Output: Returns 0.
// Precondition: None.
// Postcondition: None.
//********************************************************

int main(int argc, char **argv)
{   
    // Calls each formula.

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
 } // main
