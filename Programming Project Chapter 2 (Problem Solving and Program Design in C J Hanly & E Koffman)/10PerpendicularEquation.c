#include <stdio.h>

int main (void){
    double x1, y1, x2, y2;
    double slopePoint, slopePerp;
    double xmid, ymid;
    double yIntercept;
    double c;

    printf("Enter first point coordinate (x1 y1) =>  ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter second point coordinate (x2 y2) => ");
    scanf("%lf%lf", &x2, &y2);

    xmid = (x2 - x1) / 2 + x1;
    ymid = (y2 -y1) / 2 + y1;

    slopePoint = (y2 - y1) / (x2 - x1);

    slopePerp = -(1/slopePoint);

    yIntercept = ymid - slopePerp * xmid;        /*Apa Guna y intercept??*/

    c = -slopePerp * xmid + ymid;

    printf("The equation of perpendicular bisector line of the two points is y = %lfx + %lf", slopePerp, c);



    return 0;
}