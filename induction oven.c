#include<stdio.h>

int main()
{ 
char a;
int b=1,c;

for (int x=1; 1; x++)
{
 
 //printf("enter any value=");
 scanf("%c",&a);
 c=(int) a;
 //printf("a=");
// printf(" %d",c);
 if(a>0){
 b++;
 if (b%2==0){
 printf("induction cooker on\n");
 
 }
 else 
 printf("induction cooker off\n");
 }
 
}
    return 0;
}