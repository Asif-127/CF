//Digit Summation 
#include<stdio.h>
int main()
{
    long long  int A,B;
    scanf("%lld %lld",&A,&B);
    
    long long int NA = A%10;
    long long int NB = B%10;
    
    printf("%lld",NA+NB);
    
    return 0;
}
