//Multiples
#include<stdio.h>
int main()
{
    long long  int A,B,C,D;
    scanf("%lld %lld",&A,&B);
    if(A%B==0 || B%A==0)
    {
        printf("Multiples");
    }
    else 
    printf("No Multiples");
    
    
    return 0;
}
