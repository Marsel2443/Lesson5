#include <stdio.h>

int main()
{
    int a, b, c=0, count=0; 
    printf("Input number:\n");       
    scanf("%d", &a);    
    while (a != 0)
    {
        count++;
        b = a%10;
        if (b%2 == 0)
            c++;            
     a = a /10;
     }   
     (count == c) ? printf("YES"):printf("NO");
     return 0;
}

