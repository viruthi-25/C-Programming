#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 char ch;
 int *mark,i,nos,tot=0,ns;
 printf("Enter the no.of subjects: ");
 scanf("%d",&nos);
 mark=(int*)malloc(nos*sizeof(int));
 printf("\nEnter the marks: ");
 for(i=0;i<nos;i++)
 {
 scanf("%d",&mark[i]);
 }
printf("Do you have additional subjects: ");
scanf("%s",&ch);
if(ch=='Y'||ch=='y')
{
printf("\nEnter the new no.of subjects : ");
scanf("%d",&ns);
mark=(int*)realloc(mark,ns*sizeof(int));
if(mark!=0)
printf("Realloc successful");
}
printf("\nEnter the mark of new subjects :" );
for(i=nos;i<ns;i++)
{
scanf("%d",&mark[i]);
}
for(i=0;i<ns;i++)
{
tot=tot+(*(mark+i));
}
printf("The total marks is %d ",tot);
free (mark);
return 0;
}
