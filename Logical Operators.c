#include <stdio.h>
#include <windows.h>

int main()
{
    system ("color 0a");
    int a = 20, b = 25, c = 35, d = 40;
    int result;

    result = ((a < d) || (b == c)) && ((c < d) || (b == a));
    printf("The result is %d", result);

    return 0;
}
