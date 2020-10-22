#include <stdio.h>

double pot( double a, int b )
{
    if( b < 0 )
    {
        a = 1 / a;    
        b = b * -1;
    }

    if( b == 0 )
        return 1;
    else if( b == 1 )
        return a;

    if(b > 1)
        return a * pot( a, b-1 );
}

int main() 
{
    int a, b;

    printf("Choose a number and a number to raise to the power of it respectively:\nExample: 2 3\n");

    scanf( "%d %d", &a, &b );
    //a = (double) a;

    if( a == 0 && b == 0 )
        printf( "undefined\n" );
    else
    {
        printf( "%d raised to the power of %d equals %.3lf\n", a, b, pot( (double) a, b ) );
    }

    return 0;
}
