#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int size = 3;
    for(int i=0;i<t;i++){
        char str[size];
        char str2[size];
        scanf("%s %s",&str,&str2);
        char temp;
        temp = str[0];
        str[0] = str2[0];
        str2[0] = temp;
        printf("%s %s\n",str,str2);
    }

    return 0;
}
