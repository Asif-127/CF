//Capital or Small or Digit
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);

     if(n>='0' && n<='9') printf("IS DIGIT");

     else if(n>='a' && n<='z') printf("ALPHA\nIS SMALL");

     if(n>='A' && n<='Z') printf("ALPHA\nIS CAPITAL");

    return 0;
}
