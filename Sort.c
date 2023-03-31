#include<stdio.h>
#include<string.h>
int main()
{
char name[10][8],tname[10][8],temp[8];
int i,j,n;
printf("Enter the value of n : ");
scanf("%d",&n);
printf("\nEnter %d names",n);
for(i=0;i<n;i++)
{
scanf("%s",name[i]);
strcpy(tname[i],name[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+i;j<n;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
printf("%s%s",name[i],name[j]);
}
}
}
printf("\nInput names are sorted");
return 0;
}
