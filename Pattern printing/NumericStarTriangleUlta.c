//Ulta triangle number wala 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int a = n ;
    for(int i = 1 ; i<=n; i++)
    {
        for(int j =1 ; j<=a ; j++)
        {
            printf("%d", j);
        }
        a-- ;
        printf("\n");
    }
    return 0 ;

}
//Done