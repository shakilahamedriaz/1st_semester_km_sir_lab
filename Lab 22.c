#include <stdio.h>

int main()
{
    int cust_no, powerUsage;
    float amount;

    printf("enter the customer number: ");
    scanf("%d", &cust_no);
    printf("enter the power consumed: ");
    scanf("%d", &powerUsage);

    if (powerUsage >= 0 && powerUsage <= 200)
        amount = powerUsage * 0.50;
    else if (powerUsage > 200 && powerUsage <= 400)
        amount = 100 + ((powerUsage - 200) * 0.45);
    else if (powerUsage > 400 && powerUsage <= 600)
        amount = 270 + ((powerUsage - 400) * 0.75);
    else if (powerUsage > 600)
        amount = 380 + ((powerUsage - 600) * 1.20);
    printf("the amount to be paid by the customer %d is %.2f Taka", cust_no, amount);

    return 0;
}
