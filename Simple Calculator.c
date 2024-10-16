//Simple Calculator 
#include<stdio.h>
int main()
{
    long long  int A,B,C,D;
    scanf("%lld %lld",&A,&B);
    
    printf("%lld + %lld = %lld\n",A,B,A+B);
    printf("%lld * %lld = %lld\n",A,B,A*B);
    printf("%lld - %lld = %lld",A,B,A-B);
    
    return 0;
}
