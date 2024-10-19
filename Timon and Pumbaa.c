//Timon and Pumbaa
#include <stdio.h>

int main() 
{
    int a,b;
    scanf("%d %d", &a, &b);

    int result = a - b;
    
    if (result < 0)    result = 0;
    

    printf("%d\n", result);
    
    return 0;
}
