#include<stdio.h>  
void average(int a, int b, int c, int d, int e){  
    float avg;   
    avg = (a+b+c+d+e)/5;   
    printf("The average of five numbers : %f",avg);  
}    
void main()  
{  
    int a,b,c,d,e;   
    printf("\nGoing to calculate the average of five numbers:");  
    printf("\nEnter five numbers:");  
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);  
    average(a,b,c,d,e);  
}  
