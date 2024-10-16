//One Prime 
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    
    scanf("%d", &n);

    if(n <= 1) 
    {
        printf("NO");
        return 0;
    }

    int a = 0;
    for(int i = 2; i <= sqrt(n); i++) 
    {
        if(n % i == 0) 
        {
            a = 1;
            break;
        }
    }
    
    if(a == 0) printf("YES");  
    else printf("NO");       

    return 0;
}
