#include<stdio.h>
void main(){
    int a, b, res;
    char op;
    printf("Enter expression: ");
    scanf("%d %c %d",&a, &op, &b);    
    switch (op)
    {
    case '+':
        res=a+b;
        break;
    case '-':
        res=a-b;
        break;
    case '*':
        res=a*b;
        break;
    case '/':
        res=a/b;
    default:
        printf("Invalid operation\n");
        break;
    }
    printf("Result: %d\n",res);
}