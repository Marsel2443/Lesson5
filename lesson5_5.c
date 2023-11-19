#include <stdio.h>

int main()
{
int a, b,d,  i=10; 
    printf("Input number:\n"); 
    scanf("%d", &a);    
    while (i <=a){       
            b = i;
            int sum = 0; 
            int prod = 1;
            while (b>0){                
                    d = b%10;                   
                    sum += d;
                    prod = prod * d;              
                    b = b/10;
            }
                if (sum == prod){
                        printf("%d ", i);
                }  
            i++;
        } 
    return 0;
}
