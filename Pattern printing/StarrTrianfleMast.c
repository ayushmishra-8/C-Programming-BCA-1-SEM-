// Print triangle like
//    *
//   **
//  ***
// ****
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of row : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//Done