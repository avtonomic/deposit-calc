#include <stdio.h>
#include "deposit.h"

int validation(int amount, int data)
{
    if (data > 365 || data < 0 || amount < 10000) {
        return 0;
    } else return 1;
}

int income_calc(int amount, int data)
{
    int result;
    
    if (amount <= 100000) {
        if (data <= 30) {
            result = amount - (amount / 10);
        } else 
        if (data <= 120) {
            result = amount + (amount / 50);
        } else
        if (data <= 240) {
            result = amount + (3 * amount / 50);
        } else
        if (data <= 365) {
            result = amount + (3 * amount / 25);
        }
    } else {
        if (data <= 30) {
            result = amount - (amount / 10);
        } else 
        if (data <= 120) {
            result = amount + (3 * amount / 100);
        } else
        if (data <= 240) {
            result = amount + (2 * amount / 25);
        } else
        if (data <= 365) {
            result = amount + (3 * amount / 20);
        }
    }
    
    return result;
}