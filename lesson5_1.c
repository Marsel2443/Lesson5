#include <stdio.h>

int main()
{
int a, b, sum; 
    printf("Input number:\n");
    scanf("%d%d", &a, &b); 
    for (int i = a; i <= b; i++){ 
        sum += i*i;         
       }
        printf("%d", sum);
    return 0; 
}
