//Comparison 
#include<stdio.h>
int main()
{
    long long int a,b;
    char c;
    scanf("%lld %c %lld",&a,&c,&b);
    
    if(c=='>')
    {
        if(a>b) printf("Right");
        
        else printf("Wrong");
        
    }
    
    else if(c=='<')
    {
        if(a<b) printf("Right");
        
        else printf("Wrong");
        
    }
    
    else if(c=='=')
    {
        if(a==b) printf("Right");
        
        else printf("Wrong");
    
    }
    
    return 0;

}
