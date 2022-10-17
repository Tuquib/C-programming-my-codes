#include <stdio.h>

int main()
{
    system ("color 0a");
    int a = 13, b = 54, c =31, d = 140;
    int result;

    result = c * a;
    printf("The result is %d \n", result);

    result = b - d;
    printf("The result is %d \n", result);

    result = c / d;
    printf("The result is %d \n", result);

    result = a + b;
    printf("The result is %d", result);


    return 0;
}
