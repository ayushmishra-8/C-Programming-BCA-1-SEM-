// ...****
// ..****.
// .****..
// ****...
// Code for printing this type of pattern

//NOT CORRECT CODE 


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numbber of rows:");
    scanf("%d", &n);
    int m;
    printf("Enter the numbber of columns:");
    scanf("%d", &m);

    // int a = m / 2;
    // int b = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++) {//PERFECT
            printf("#");
        }
        for(int k = 1 ; k<=n; k++){ ////PERFECT
            printf("*");
        }
        for(int l = 1; l<=n/2; l++){  // NOT PERFECT
            printf("#");
        }
        printf("\n");
    }
    return 0 ;
}