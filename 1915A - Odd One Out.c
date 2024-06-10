#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int a,b,c,temp=0;
    for(int i=0;i<t;i++){
       scanf("%d %d %d",&a,&b,&c);
       if(a==b&&b!=c&&a!=c){
           printf("%d\n",c);
       }else if(a==c&&b!=a&&b!=c){
           printf("%d\n",b);
       }else if(b==c&&b!=a&&a!=c){
           printf("%d\n",a);
       }

    }

    return 0;
}