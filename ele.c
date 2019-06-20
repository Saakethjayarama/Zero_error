#include<stdio.h>
void main(){
    int units;
    float rs;
    printf("Enter the number of units: ");
    scanf("%d", &units);
    if(units<=200){
        rs=units*0.8+100;
    }
    else if (units<=300 && units>200)
    {   
        rs=160+(units-200)*0.9+100;
    }
    else
    {
        rs=250+(units-300)+100;
    }

    if(rs>400){
        rs+=rs*0.15;
    }  
    printf("Amount: %.2f\n",rs);  
}