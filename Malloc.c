#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
int *mark,i,tot,nos,NUL;
printf("Enter the no.of subjects: ");
scanf("%d",&nos);
mark=(int*)malloc(nos*sizeof(int));
printf("\nEnter the marks: ");
for(i=0;i<nos;i++)
{
scanf("%d",&mark[i]);
}
tot=0;
for(i=0;i<nos;i++)
{
tot=tot+(*(mark+i));
}
printf("The total marks is %d ",tot);
return 0;
}
