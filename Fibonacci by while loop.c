//Fibonacci series 
#include<stdio.h>
int main()
{
    int c =0,n,fibo;
    int f=0, s=1;
    printf("Enter the 'n'th term :");
    scanf("%d",&n);
    
    while(c<n)
    {
        if(c<=1) 
         fibo=c;
        
        else
        {
         fibo = f + s;
         f = s;
         s = fibo;
        
        }
        
        printf("%d ",fibo);
        c++;
    
    
    }
    
    return 0;

}
