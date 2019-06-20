#include<stdio.h>
#include<math.h>
#define pi 3.142
void main(){
    int degree, i=2;
    float x, nume, denom, term, sum=0;
    printf("Enter degree: ");
    scanf("%d",&degree);
    x=(degree*pi)/180;
    nume=x;
    denom=1;
    do{
        term=nume/denom;
        sum+=term;
        nume=-nume*x*x;
        denom=denom*i*(i+1);
        i+=2;
    }while(fabs(term)>0.00001);
    printf("Without using built in function sin(%d) = %.2f\n", degree, sum);
    printf("With using built in function sin(%d) = %.2f\n", degree, sin(x));
}