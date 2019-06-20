#include<stdio.h>
typedef struct saaketh{
    char name[30];
    char usn[10];
    int marks[10];
    int average;
    int total;
} stu;
void main(){
    stu s[100];
    int m, n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);
    printf("Enter the details of students\n");
    //Data Entry starts here
    for(i=0;i<n;i++){
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("USN: ");
        scanf("%s",s[i].usn);
        for(j=0;j<m;j++){
            printf("Marks %d :",j+1);
            scanf("%d",&s[i].marks[j]);
        }
        s[i].total=0;
        for(j=0;j<m;j++){
            s[i].total+=s[i].marks[j];
        }
        s[i].average=s[i].total/m;

    }
    //Class average 
    int averaze=0;
    for(i=0;i<n;i++){
        averaze+=s[i].average;
    }
    averaze=averaze/n;

    //sorting peepul into less than and more than class average


    printf("Students Below average are: \n");
    for(i=0;i<n;i++){
        if(s[i].average<averaze){
            printf("%s\t%s\n",s[i].name,s[i].usn);
        }
    }

    printf("Students Above average are: \n");
    for(i=0;i<n;i++){
        if(s[i].average>=averaze){
            printf("%s\t%s\n",s[i].name,s[i].usn);
        }
    }
}