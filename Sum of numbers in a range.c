/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,sum=0;
    printf("Enter a range:");
    scanf("%d%d",&a,&b);
    int i;
    for(i=a;i<=b;i++){
    sum=sum+i;
    }
    printf("%d\n",sum);
    
}
