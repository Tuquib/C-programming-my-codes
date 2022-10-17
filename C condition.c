#include <stdio.h>
#include <windows.h>

int main()
{
    int age;
    system ("color 0a");
    printf("Input Age: ");
    scanf("%d", &age);

    if(age >= 14) {
        printf("You're allowed to vote! \n\n");
    }else if(age =0){
        printf("Invalid age, Try again \n\n");
    }else{
        printf("You're not allowed to vote \n\n");
    }

    system ("pause");

    return 0;


}
