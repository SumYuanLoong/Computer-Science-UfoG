#include <stdio.h>
#include <string.h>

int binomialA(int count, int n);
void main(){
    int i,n,b;

    printf("Hai pls enter z in (x+y)^z: ");
    scanf("%d",&n);

    printf("x^%d+  ", n);
    for (i = 1; i < n; i++)
    {
        b =binomialA(i,n);
        printf("%d",b);
        if(n == 2)
            printf("xy + ");
        else if(i==n-1)
            printf("xy^%d + ",i);
        else if(i==1)
            printf("x^%dy + ",n-1);
        else
        {
            printf("x^%dy^%d + ",n-i,i);
        }
    }
    printf("y^%d",n);
    
}

int binomialA(int count, int n){
    int i, top, bottom,a;
    top = n;
    bottom =count;
    for(i = 1; i < count;i++){
        top *= n-i;
        bottom *= i;
    }
    a = top/bottom;
    return a;
}
