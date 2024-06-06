#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a<b)printf("%d %d",a,b);
        else if(b<a)printf("%d %d",b,a);
        else printf("%d %d",a,b);
    }
    return 0;
}