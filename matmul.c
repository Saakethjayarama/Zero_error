#include<stdio.h>
void main(){
    int a[20][20] ,b[20][20] ,c[20][20] ,i ,j ,k, m, n, p, q;
    printf("Enter the order of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the order of second matrix: ");
    scanf("%d %d", &p, &q);
    if(n!=p){
        printf("The matrices cant be multiplied\n");
    }
    else
    {
        printf("Enter the values into first matrix: ");
        for(i=0;i<m;i++)
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        printf("Enter the values into second matrix: ");
        for(i=0;i<p;i++)
            for(j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
        printf("Matrix after multiplication: ");
        for(i=0;i<n;i++){
            for(j=0;j<q;j++){
                c[i][j]=0;
                for(k=0;k<n;k++){
                    c[i][j]+=(a[i][k]*b[k][j]);
                }
            }
        }
        printf("\n The Matrix after multiplication is: \n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t",c[i][j]);
            }
        printf("\n");
        }

    }
    
}