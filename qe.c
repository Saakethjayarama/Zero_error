#include<stdio.h>
#include<math.h>
void main(){
    int a, b, c;
    float x1, x2, disc;
    printf("Enter a, b, c: ");
    scanf("%d %d %d",&a, &b, &c);
    disc=pow(b,2)-4*a*c;
    if(disc==0){
        printf("The roots are real and equal\n");
        x2=x1=(-b)/(2*a);
        printf("The roots are %.2f and %.2f\n", x1, x2);
    }
    else if (disc>0)
    {
        printf("The roots are real and distinct \n");
        x1=(-b+sqrt(disc))/(2*a);
        x2=(-b-sqrt(disc))/(2*a);
        printf("The roots are %.2f and %.2f\n", x1, x2);
    }
    else
    {
        printf("The roots are imaginary\n");
        x1=(-b)/(2*a);
        x2=sqrt(disc);
        printf("The roots are %.2f+%.2f and %.2f-%.2f\n",x1, x2, x1, x2);
    }
    
}