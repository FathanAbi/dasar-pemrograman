#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void){
    double radius, slant;
    double area;

    printf("Enter the radius of the cone circular base in cm => ");
    scanf("%lf", &radius);
    printf("Enter the slant height of a cone in cm => ");
    scanf("%lf", &slant);

    area = PI * radius * radius + PI * radius * slant;

    printf("The surface area of a right circular cone is %.3f cm^2", area);


    return 0;
}