#include <stdio.h>

void main()
{
    int n,fact=1,i;
    scanf("%d",&n);
    if(n==0){
        printf("%d\n",fact);
        return 0;
    }
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d\n",fact);
}
