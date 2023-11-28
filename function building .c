#include<stdio.h>
int madd(int x,int y) {
    return x+y;
   // printf("value off addition =%d",x+y);
}
int maddd(){
int x,y;
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
return x+y;
}
void even_odd_tester( int p) {
    if(p%2==0)
    {
        printf("even");
    }
    else
        printf("odd");
}

int main()
{
    //printf("%d",madd (5,2));
    int s,t;
    scanf("%d",&s);
    scanf("%d",&t);
    madd(s,t);
    maddd();
    int p=6*madd(s,t);
    printf("value of p =%d\n",p);
    //even_odd_tester(35);
    
    int e= printf("%d\n",5);
    printf("%d",e);

    return 0;
}
