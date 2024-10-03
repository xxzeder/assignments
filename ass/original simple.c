#include<stdio.h>

int main() {
    // Write C code here
    int p ,t;
    float r , si;
     
    printf("Enter principle amount\n");
    scanf("%d", & p);
    
    printf("Enter rate of interest\n");
    scanf("%f", & r);
    
    printf("Enter time period\n");
    scanf("%d", & t);
    
    si=(p * r * t)/100;
    
    printf("simple interest is %f/n" );

    return 0;
}