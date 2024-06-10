#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int a,b,c;
    for(int i=0;i<t;i++){
       scanf("%d %d %d",&a,&b,&c);
        int arr1[a];
        int arr2[b];
        int temp=0;
        for(int i=0;i<a;i++){
            scanf("%d",&arr1[i]);
        }
        for(int i=0;i<b;i++){
            scanf("%d",&arr2[i]);
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(arr1[i]+arr2[j]<=c){
                    temp++;
                }
            }
        }
        printf("%d\n",temp);

    }

    return 0;
}
