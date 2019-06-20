#include<stdio.h>
void main(){
    int a[50], i, j, n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-2-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}