//Age in days
#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    
    long long int year = n/365;
    long long int redays = n%365;
    long long int month = redays/30;
    long long int day = redays%30;
    
    
    printf("%lld years\n",year);
    printf("%lld months\n",month);
    printf("%lld days",day);
    
    
    return 0;

}
