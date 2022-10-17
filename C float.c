#include <stdio.h>


int main()
{
    system ("color 0a");
    float Math, English, Science, result;
    printf("Input Grades of Math: ");
    scanf("%f",&Math);
    printf("Input Grades of English: ");
    scanf("%f",&English);
    printf("Input Grades of Science:8989 ");
    scanf("%f",&Science);

    result = (Math + English + Science)/3;
    printf("the total Average is % .2f \n\n", result);
    return 0;
}
