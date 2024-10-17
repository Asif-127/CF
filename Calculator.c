//Calculator 
#include<stdio.h>
int main()
{
    long long  int A,B;
    char c;
    scanf("%lld %c %lld",&A,&c,&B);
    
    switch(c)
    {
        case '+': 
        printf("%lld",A+B);
        break;
        
        case '-': 
        printf("%lld",A-B);
        break;
        
        case '*': 
        printf("%lld",A*B);
        break;
        
        case '/': 
        printf("%lld",A/B);
        break;
    
    }
    
    return 0;
}
