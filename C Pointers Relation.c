#include <stdio.h>

int main()
{
    int a = 50, b = 100, c = 60, d = 40;
    int result;

    result = a != b;
    printf("The result is %d \n", result);

    result = c == d;
    printf("The result id %d \n", result);

    result = b < c;
    printf("The result is %d \n", result);

    result = a > d;
    printf("The result is %d", result);

    return 0;
}
