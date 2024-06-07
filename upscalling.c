#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int n,m,y,z,temp=0;
    char mat[m][m];
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        m = 2*n;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++)
            {
                    if((i/2+j/2)%2==0){
                        printf("#");
                    }else printf(".");
            }
            printf("\n");
        }

    }

    return 0;
}
