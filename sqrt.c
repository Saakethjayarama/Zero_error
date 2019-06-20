#include<math.h>
#include<stdio.h>
void main(){
    int real=1, num, i;
    float dec, sq;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(!(num>0)){
        printf("Sqrt is imaginary number");
    }
    else if (num==0)
    {
        printf("Sqrt is 0");
    }
    else
    {
        for(i=0;real*real<=num;real++){
            ;
        }
        real--;
        for(dec=0.00001;dec<1;dec+=0.00001){
            sq=(double)real+dec;
            if(sq*sq>num){
                dec-=0.00001;
                break;
            }
        }
        sq=(double)real+dec;
        printf("Sqrt(%d) without using built in function is %.2f\n",num, sq);
        printf("Sqrt(%d) with using built in function is %.2f\n", num, sqrt(num));
    }
    
    
}