#include <stdio.h>
#include <windows.h>

int main()
{
    int choice;
    int ccost,scost;
    int myMoney, total, change;
    printf(" +++++Soft Drinks Shop+++++\n");
    printf(" 1 Coke:\n 2 Pepsi:\n 3 Dr. Pepper:\n");
    printf("Your Choice: ");
    scanf("%d", &choice);
    system ("color 0a");
    Beep(750,800);

    switch(choice){
        case 1:
            printf(" You Purchased Coke\n");
            ccost = 50;
            break;
        case 2:
            printf("You Purchased Pepsi\n");
            ccost = 55;
            break;
        case 3:
            printf("You Purchased Dr. Pepper\n");
            ccost = 60;
            break;
        default:
            printf("Invalid Input, Try Again!\n");
            break;
    }

    printf(" +++++Snacks+++++\n");
    printf(" 1 French Fries:\n 2 Kwek-Kwek:\n 3 Tempura:\n");
    printf("Your Choice: ");
    scanf("%d", &choice);
    system("color 70");
    Beep(750,800);

    switch (choice){
        case 1:
            printf("You Purchased French Fries\n");
            scost = 20;
            break;
        case 2:
            printf("You Purchased Kwek-Kwek\n");
            scost = 15;
            break;
        case 3:
            printf("You Purchased Tempura\n");
            scost = 20;
            break;
        default:
            printf("Invalid Input, Try Again!\n");
            break;
    }
    total = ccost+scost;

    printf("Total: %d\n", total);
    printf("Your Money: ");
    scanf("%d", &myMoney);

    change = myMoney - total;
    printf("Change: %d", change);

    Beep(750,800);

    return 0;

}
