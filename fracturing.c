#include <stdio.h>
#include <math.h>
#define pi 3.14159

double distanceformula(double x1, double x2, double y1, double y2)
{
    double distance = 0;

    distance = sqrt((x2  - x1) * (x2  - x1) + (y2  - y1) * (y2  - y1));

    return distance;
}

double calculateWidth()
{
    double x1 = 0;
    double x2  = 0;
    double y1 = 0;
    double y2  = 0;

    printf("Calculations for Width \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double width = distanceformula(x1, x2, y1, y2);

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The width of the city encompassed by your request is %lf \n\n", width);

    return 1;
}

double calculateHeight()
 {
    double x1 = 0;
    double x2  = 0;
    double y1 = 0;
    double y2  = 0;

    printf("Calculations for Height \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    
    double height = distanceformula(x1, x2, y1, y2);

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The height of the city encompassed by your request is %lf \n\n", height);

    return 1;

 }

double calculateDistance()
{ 
    
    double x1 = 0;
    double x2  = 0;
    double y1 = 0;
    double y2  = 0;

    printf("Calculations for Distance \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double distance = distanceformula(x1, x2, y1, y2);

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The distance between the two points is %lf \n\n", distance);

    return distance;

}

double calculatePerimeter()
{
    double x1 = 0;
    double x2  = 0;
    double y1 = 0;
    double y2  = 0;

    printf("Calculations for Perimeter \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double distance = distanceformula(x1, x2, y1, y2);
    double perimeter = 2 * pi * (distance / 2);

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The perimeter of the city encompassed by your request %lf \n\n", perimeter);

    return 2;
}

double calculateArea()
{
    double x1 = 0;
    double x2  = 0;
    double y1 = 0;
    double y2  = 0;

    printf("Calculations for Area \n");
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    double distance = distanceformula(x1, x2, y1, y2);
    double area = pi * pow(distance, 2);

    printf("Point #1 entered: x1 = %lf ; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf \n", x2, y2);
    printf("The area of the city encompassed by your request is %lf \n\n", area);

    return 2;
}

int main(int argc, char **argv)
{   
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
 }
