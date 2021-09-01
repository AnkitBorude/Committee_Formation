#include<stdio.h>
#include "Combinations.c"
int main()
{
    int total=5,t_boy=7,t_girl=6,atleast_boy=1,atleast_girl=1;//values of no. of objects and constraints, can be changed according to problem
    int loopcntr,k,j,sum=0;//some internal values that should not be change
    printf("Committies calculator\n");
    if(total>t_boy && total>t_girl)
    {
        printf("\nplz enter valid values");//to avoid error
    }
    else
    {
    for(j=total-atleast_boy,loopcntr=atleast_girl--;j!=loopcntr;atleast_boy++,j--)
        {
            sum+=(combination(t_boy,atleast_boy) * combination(t_girl,j));
            printf("\n %d C %d == %d",atleast_boy,j,sum);//to show each step taken by loop
        }
    printf("\n\n\t the total no. of ways the committe can  be formed is %d",sum);//answer
    return 0;
}
}
