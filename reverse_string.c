
#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[100001];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        printf("%c",s[strlen(s)-i-1]);
    }

    return 0;
}
