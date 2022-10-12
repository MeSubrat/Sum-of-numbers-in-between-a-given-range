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
