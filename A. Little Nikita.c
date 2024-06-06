#include<stdio.h>
int main()
{
    int t,n,m;
    printf("Enter number of test case:");
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        if(n<m){
            printf("No");
        }
        else if(n=m){
            printf("Yes");
        }
        else if(n%2==0&&m%2==0){
            printf("Yes");
        }
        else if(n%2!=0&&m%2!=0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
}