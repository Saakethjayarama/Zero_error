#include<stdio.h>
int isprime(int);
void main(){
    int n, res;
    printf("Enter a number: ");
    scanf("%d", &n);
    res=isprime(n);
    if(res==1){
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }
    
}
int isprime(int res){
    int flag=1, i;
    if(res==0 || res==1){
       flag=0; 
    }
    else{
        for(i=2;i<res/2;i++){
            if(res%i==0){
                flag=0;
            }
        }
    }
    return flag;
    
}