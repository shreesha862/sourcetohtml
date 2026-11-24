#include <stdio.h>
#include "header.h"

#define SIZE 100
#define PI 3.14

/* Multi line comment
   Line 2
   Line 3
*/

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num = 100;

    float f = 12.56;

    double d = 123.456;

    int hex = 0xABCD;

    char ch = 'A';

    char nl = '\n';

    char quote = '\'';

    char *str = "Hello World";

    char *str2 = "Value = %d\n";

    // Single line comment

    if(num >= 10 && num <= 500)
    {
        printf("Number = %d\n", num);

        printf(str2, num);
    }

    return 0;
}