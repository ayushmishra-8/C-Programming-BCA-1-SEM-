//Display GP till nth term 3,12,48, ...
#include<stdio.h>
int main(){
    {
        int n ;
        printf("Enter nth term :");
        scanf("%d",&n);
        int a = 3 ;
        for(int i=1 ; i<=n ;i++ ){
            printf("%d \n",a);
            a=a*4 ;
        }
    }
    return 0 ;
}
//done