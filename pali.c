#include<stdio.h>
int pali(int);
void main(){
    int res, num;
    printf("Enter the number: ");
    scanf("%d",&num);
    res=pali(num);
    if(res==1){
        printf("The entered number is palindrome\n");
    }
    else
    {
        printf("The entered number is not palindrome\n");
    }    
}




int pali(int a){
    int temp=a, rem, dig=0;
    while(temp!=0){
        rem=temp%10;
        dig=dig*10+rem;
        temp=temp/10;
    }
    if(dig==a){
        return 1;
    }
    else
        return 0;
}