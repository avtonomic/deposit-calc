#include <stdio.h>
#include "func.h"

int main()
{
    int sum, sr;
    float rez = 0;
    
    printf("Input sum: \n");
    scanf("%d", &sum);
    printf("Input srok: \n");
    scanf("%d", &sr);
    rez = F(sum, sr);
    if (rez == 0) {
        return 0;
    } else printf("%.4f\n", rez);
    
    return 0;
}