#include<stdio.h>
#include<math.h>
void main(){
    int a[20], n, i;
    int *ptr;
    float mean, stddev=0, sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    ptr=&a;
    
   for(i=0;i<n;ptr++){
       sum+=*ptr;
   }
   printf("Sum: %.2f", sum);
   mean=sum/n;
   printf("\nMean: %.2f",mean);
   for(i=0;i<n;ptr++){
       stddev+=(pow((mean-*ptr),2));
   }
   stddev=stddev/n;
   stddev=sqrt(stddev);
 
   
   printf("\nStandard Deviation: %.2f\n",stddev);


}