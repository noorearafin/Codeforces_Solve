// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int a,b;
    for(int i=0;i<t;i++){
        scanf("%d",&a);
        printf(":");
        scanf("%d",&b);
        if(a>12)
        {
            a=a%12;
            printf("%02d:%02d PM\n",a,b);
        }
        else if(a==00&&b<=59){
            a=12;
            printf("%02d:%02d AM\n",a,b);
        }
        else if(a==12&&b<=59){
            printf("%02d:%02d PM\n",a,b);
        }
        else{
            printf("%02d:%02d AM\n",a,b);
        }
    }
    return 0;
}
