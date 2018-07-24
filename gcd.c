#include <stdio.h>
int main()
{
    int l, g, i, gcd;

    printf("Enter two integers: ");
    
    scanf("%d %d", &l, &g);

    for(i=1; i <= l && i <= b; ++i)
    {
       
        if(l%i==0 && g%i==0)
        
            gcd = i;
            
    }

    printf("G.C.D of %d and %d is %d", l, g, gcd);

    return 0;
}
