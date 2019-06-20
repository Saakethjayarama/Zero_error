#include<stdio.h>
int todec(int);
void main(){
    printf("Enter the binary number: ");
    int bin;
    scanf("%d",&bin);
    int res=todec(bin);
    printf("%d = %d\n", bin, res);
}
int todec(int n){
    if(n==0){
        return 0;
    }
    else
    {
        return(n%10+2*todec(n/10));
    }
    
}