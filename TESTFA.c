#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
FILE *fptr1,*fptr2;
fptr1=fopen("text.txt","r");
fscanf(fptr1,"%d %d %d",&a,&b,&c);
d=a+b;
e=b+c;
f=c+a;
fclose(fptr1);
//fptr2=fopen("result.txt","w");
//fprintf(fptr2,"Result=%d %d %d",d,e,f);
//fclose(fptr2);
fptr2=fopen("result1.txt","a");
fprintf(fptr2,"\nAppend a b and c: =%d %d %d",a,b,c);
fclose(fptr2);

}
