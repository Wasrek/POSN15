/*
    TASK:POSN Image
    LANG: CPP
    AUTHOR: KersaWC
    SCHOOL: REPS
*/
#include<stdio.h>
int main()
{
    int n,y,x,q,l,two;
    scanf(" %d",&q);
    for(l=0;l<q;l++)
    {
    scanf(" %d",&n);
    for(x=0;x<3;x++){
    for(y=0;y<n;y++)
    {
        printf("*");
    }
    printf("-");
    }
    printf("*");
    for(x=0;x<(n-2);x++)
    {
        printf("-");
    }
    printf("*\n");

    //-------------------------------
    int o=2;
    two=(n/2)-1;
    for(y=0;y<two;y++)
    {
        while(o>=1){
        printf("*");
        for(x=0;x<n-2;x++)
        {
            printf("-");
        }
        printf("*-");o--;
        }
        printf("*");
        for(x=0;x<n;x++)
        {
            printf("-");
        }
         printf("*");
         for(x=0;x<y;x++)
         {
             printf("-");
         }
         printf("*");
        for(x=0;x<(n-3-y);x++)
         {
             printf("-");
         }
         printf("*\n");o=2;
    }
    //----------------------------------------
    for(x=0;x<n;x++)
    {
        printf("*");
    }
    printf("-*");
    for(x=0;x<(n-2);x++)
    {
        printf("-");
    }
    printf("*-");
    for(x=0;x<n;x++)
    {
        printf("*");
    }
    printf("-*");
    for(x=0;x<(n-3)/2;x++)
    {
        printf("-");
    }
    printf("*");
    for(x=0;x<(n-3)/2;x++)
    {
        printf("-");
    }
    printf("*\n");
    //-----------------------------------------------
    two=(n/2)-1;
    for(y=0;y<two;y++)
    {
    printf("*");
    for(x=0;x<n;x++)
    {
        printf("-");
    }
    printf("*");
    for(x=0;x<(n-2);x++)
    {
        printf("-");
    }
    printf("*");
    for(x=0;x<n;x++)
    {
        printf("-");
    }
    printf("*-*");
    for(x=0;x<((n-3)/2)+1+y;x++)
         {
             printf("-");
         }
         printf("*");
    for(x=(((n-3)/2)-1-y);x>=1;x--)
         {
             printf("-");
         }
         printf("*\n");

    }
    //---------------------------
    printf("*");
    for(y=0;y<(n-1);y++)
    {
        printf("-");
    }
    for(x=0;x<2;x++){
        printf("-");
    for(y=0;y<n;y++)
    {
        printf("*");
    }
    }
    printf("-*");
    for(x=0;x<(n-2);x++)
    {
        printf("-");
    }
    printf("*\n");
    }
    return 0;
}
