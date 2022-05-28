#include <stdio.h>

int main()
{
    printf("%d", bitcount(7));
    return 0;
}

int bitcount (unsigned x) 
{
    int b=0;
    while (x)
    {
        x &= (x-1);
        b++;
    }
    return b;
    
}