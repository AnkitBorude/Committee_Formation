#include<stdio.h>
#include<stdlib.h>
int fact(int i);
int combination(int n,int r);
/*int main()
{
    int dig1,dig2;
    printf("Combination\n n=");
    scanf("%d",&dig1);
    printf("\n r=");
    scanf("%d",&dig2);
    if(dig1 <0 && dig2<0){
        printf("plz enter positive value");
        return -1;
    }
    else{
        printf("\nthe value of the combination is= %d",combination(dig1,dig2));
        return 0;
    }}*/
int fact(int i)
{
    if(i<0)
    {
        printf("\nplz enter +ve value");
        exit(-1);
    }
    else if(i==0){
        return 1;
    }
    else{
    int facto=1,n;
    for(n=i;n!=1;facto=facto*n,n--)
    {}
    return facto;}
}
int combination(int n,int r)
{
    if(n == r)
    {
        return 1;
    }
    else
    {
    return fact(n) / (fact((n-r)) * fact(r));
    }
}
