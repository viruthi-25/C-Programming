#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 FILE *fp1,*fp2;
 char fname[10];
 char ch;
 int vowels=0;
 printf("\n Enter the file name");
 scanf("%s",fname);
 fp1=fopen(fname,"w");
 if(fp1==NULL)
 {
  printf("\nFile cannot be opened");
  exit(1);
}
printf("\nEnter the file contents till $\n");
ch=getc(stdin);
while(ch!='$')
{
 putc(ch,fp1);
 ch=getc(stdin);
}
fclose(fp1);
fp2=fopen(fname,"r");
ch=getc(fp2);
while(ch!=EOF)
{
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
 vowels++;
 ch=getc(fp2);
}
printf("\nThe number of vowels is %d",vowels);
fclose(fp2);
return 0;
}
