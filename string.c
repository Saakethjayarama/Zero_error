#include<stdio.h>
int length(char []);
int comp(char [], char []);
void cat(char [], char []);
void main(){
    char str1[50], str2[50];
    printf("1. String Length\n 2. String Comparision\n 3. String Concatenation\nEnter your choice ");
    int op, res;
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Enter string: ");
        scanf("%s", str1);
        res=length(str1);
        printf("The length of string is %d\n", res);
        break;
    case 2:
        printf("Enter strings to compare: ");
        scanf("%s %s", str1, str2);
        res=comp(str1, str2);
        if(res==1){
            printf("The strings are equal\n");
        }
        else 
            printf("The strings are not equal\n");
        break;
    case 3:
        printf("Enter Strings to merge: ");
        scanf("%s %s", str1, str2);
        cat(str1,str2);
        break;
    default:
        printf("Invalid choice!");
        break;
    }
}




//String length function definition starts here
int length(char a[]){
    int count=0, i;
    for(i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}

//String length function definition ends here

/********************************************************/

//string compaision function definition starts here ///

int comp(char a[], char b[]){
    int len1=length(a);
    int len2=length(b);
    int flag=1, i;
    if(len1!=len2){
        flag=0;
    }
    else
    {
        for(i=0;i<len1;i++){
            if(a[i]!=b[i]){
                flag=0;
                break;
            }
        }
    }
    return flag;
}

// string comparision function definition ends here //
/**************************************************/

//string concatenation function definition starts here//

void cat(char a[], char b[]){
    int len1, len2, i, j;
    char c[50];
    len1=length(a);
    len2=length(b);
    for(i=0;i<len1;i++)
        c[i]=a[i];

   
    for(i=len1+1, j=0;j<len2;i++, j++){
        c[i]=b[j];
    }
   for(i=0; i<=len1+len2;i++){
       printf("%c", c[i]);
   }
   printf("\n");
}

//String concatenation function ends here //

