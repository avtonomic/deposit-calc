#include <stdio.h>

int main()
{
    int sum, sr;
    float rez = 0, sumf;
    
    printf("Input sum: \n");
    scanf("%d", &sum);
    printf("Input srok: \n");
    scanf("%d", &sr);
    sumf = sum;

    if (sr > 365 || sum < 10) {
        printf("Error");
        return 0;
    }
    if (sum <= 100) {
        if (sr <= 30) {
            rez = sum - (sumf / 10);
        } else 
        if (sr <= 120) {
            rez = sum + (sumf / 50);
        } else
        if (sr <= 240) {
            rez = sum + (3 * sumf / 50);
        } else
        if (sr <= 365) {
            rez = sum + (3 * sumf / 25);
        }
    } else {
        if (sr <= 30) {
            rez = sum - (sumf / 10);
        } else 
        if (sr <= 120) {
            rez = sum + (3 * sumf / 100);
        } else
        if (sr <= 240) {
            rez = sum + (2 * sumf / 25);
        } else
        if (sr <= 365) {
            rez = sum + (3 * sumf / 20);
        }
    }

    if (rez == 0) {
        return 0;
    } else printf("%.4f\n", rez);
    
    return 0;
}