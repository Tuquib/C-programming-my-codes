#include <stdio.h>
#include <windows.h>

int main()
{
    system("color 0a");
    float originalPrice, discount = .50, discountedPrice, vat, tax = 0.12, total;

    printf("Enter Price: ");
    scanf("%f", &originalPrice );

    discount = .50;
    printf("Discount: 50%\n");

    discountedPrice = originalPrice * discount;
    printf("Discounted Price: is % .2f\n", total);

    tax = 0.12;

    vat = originalPrice * tax;
    printf("vat amount: % .2f\n", tax);

    tax = originalPrice * vat;
    printf("Taxable Amount: %.2f\n", tax);

    total = originalPrice * discount;
    printf("Total Payable Amount: % .2f ");

    return 0;
}





