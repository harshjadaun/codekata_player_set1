#include <stdio.h>

int main()
{
    char s[100001];
    int i=0;
    scanf("%s",s);
    while(s[i]!='\0'){
        i++;
    }
    s[i]='.';
    s[i+1]='\0';
    printf("%s",s);
    return 0;
}
