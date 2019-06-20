#include<stdio.h>
void main(){
    int a[10], mid, low, high, i, n, key, flag=0, pos;
    printf("Number of numbers in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<high){
        mid=(low+high)/2;
        if(a[mid]==key){
            pos= mid;
            flag= 1;
            break;
        }
        else
        if(key<a[mid]){
            high= mid-1;
        }
        else
            low= mid+1;
        
    }

    if(flag==1){
        printf("Element found at position %d\n", pos+1);
    }
    else
        {
            printf("Element not found\n");
        }
        
}