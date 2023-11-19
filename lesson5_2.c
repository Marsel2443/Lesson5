#include <stdio.h>

int main()
{
    int a, count=0; 
    printf("Input number:\n");   
    scanf("%d", &a);    
    while (a != 0)
    {
        count++;
        a = a /10;
    }
    (count<=3) ? printf("YES"):printf("NO");        
    return 0;
}
