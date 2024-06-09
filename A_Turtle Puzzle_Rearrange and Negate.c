#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d",&t);
    int x;
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        int sum=0;
        int y;
        for(int i=0;i<x;i++){
            scanf("%d",&y);
            sum=sum+abs(y);
        }
        printf("%d",sum);
    }
    return 0;
}