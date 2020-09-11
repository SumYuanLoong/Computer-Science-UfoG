#include <stdio.h>

int main(){
    float x1,x2,y1,y2;
    float y,m,x,c;

    // y=mx+c
    printf("Linear Algebra");

    printf("\nPls enter the coords of the first point(x y): "); //pt 1
    scanf("%f %f",&x1, &y1);
    printf("%f,%f", x1, y1);

    printf("\nPls enter the coords of the 2nd point(x y): "); //pt 2
    scanf("%f %f",&x2, &y2);
    printf("%f,%f", x2, y2);

    m= (x2-x1)/(y2-y1);                                         //finding the missing vars
    c= y1 - (m*x1); 

    printf("\nPlease enter the x-coord of the unknown point: ");
    scanf("%f", &x);
    y= (m*x)+c;
    printf("The y-coord is: %1d", y);
    return 0;
}