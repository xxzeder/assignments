#include<stdio.h>
#include<math.h>
int main() {
    double p,r,t;
    double compound_interest, A;

    printf("enter principle amount:");
    scanf("%lf",&p);

    printf("enter annual rate of interest(in percentage):");
    scanf("%lf",&r);

    printf("enter time period(in years):");
    scanf("%lf",&t);

    r=r/100;

    compound_interest=p*pow((1+r),t)-p ;
    compound_interest = A - p;

    printf("total amount after %0f years: %2f\n",t,A);
    printf("compound_interest:%2f\n",compound_interest);

    return 0;
}