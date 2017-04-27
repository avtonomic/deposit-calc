#include <stdio.h>
#include "func.h"

int F(int sum, int sr)
{
    float rez, sumf = sum;
    
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
    
    return rez;
}