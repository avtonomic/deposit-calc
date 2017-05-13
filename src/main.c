#include <stdio.h>
#include "deposit.h"

int main()
{
    int amount, data, result = 0;
    
    printf("Input amount: ");
    scanf("%d", &amount);
    printf("Input data: ");
    scanf("%d", &data);
    if (validation(amount, data) == 1) {
        result = income_calc(amount, data);
    }
    if (result == 0) {
        printf("Error: incorrect data\n");
        return 0;
    } else printf("Income: %.4d\n", result);
    
    return 0;
}