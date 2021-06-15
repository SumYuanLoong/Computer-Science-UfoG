//This prog seeks to find point x on the intersection of a parrallel line 
// and a perpendicular line to the initial line
#include <stdio.h>

void main(){
    float m1, c1, m2, c2, mi, ci;
    int xp, yp;
    printf("Hai pls key in m c: ");                 // getting the original line
    scanf("%f %f", &m1, &c1);
    printf("Original Line: y = %2.3fx+%2.1f", m1, c1);

    printf("\nPls enter the values of point P: ");  //finding point p
    scanf("%d %d", &xp, &yp);
    printf("point P is (%d, %d)", xp, yp);

    //parrallel line
    c2 = yp - (m1*xp);
    printf("\nThe parrallel line is: y = %2.3fx + %2.1f", m1, c2);

    //perpendicular line
    mi = -1/m1;
    ci = yp - mi*xp;
    printf("\nThe perpendicular line is: y = %2.3fx + %2.1f", mi, ci);

/*
    INITIALISE m1 c1 m2 c3 mi ci xp yp
    READ m1, c1
    PRINT y = m1x + c1
    READ xp yp
    PRINT  point P (xp,yp)

    m2 = m1
    c2 = yp -(m2*xp)
    PRINT parrallel line y = m2 x+ c2

    mi = -1/m1
    ci = yp -mi*xp
    PRINT intercept line
*/

}