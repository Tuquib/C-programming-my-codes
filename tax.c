#include <stdio.h>
#include <windows.h>

int main()
{
    system("color 1f");
    float originalPrice, discountedPrice, discountAmount, totalPayable, tax, discountValue, vat, total;

    printf("=========================INPUT VALUE===============================\n");
    printf("Original Price:                            ");
    scanf("%f", &originalPrice);
    printf("DIscounted Value:                          ");
    scanf("%f", &discountValue);

    discountAmount = originalPrice * (discountValue/100);
    discountedPrice = originalPrice - discountAmount;

    printf("---------------------------------------------------------------\n");

    printf("Original Price:                            % .2f\n", originalPrice);
    printf("Discounted Amount:                         % .2f\n", discountAmount);
    printf("Discounted Price:                          % .2f\n", discountedPrice);

    printf("*************************RECEIPT***********************************\n");

    vat = discountedPrice * 0.12;
    tax = discountedPrice - vat;
    totalPayable = vat + tax;

    printf("Taxable Amount:                            % .2f\n", tax);
    printf("VAT:                                       % .2f\n", vat);
    printf("Total Payable:                             % .2f\n\n\n", totalPayable);



    printf("Programmed By Ubald Jones L. Tuquib");


    system ("color 70");
    Beep(780,800);


    return 0;




}
