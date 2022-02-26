#include <stdio.h>
#include <stdlib.h>

int main(){
    int ndigit[] = {2, 3, 4, 5, 6, 7};
    int i;
    for (i = 0; i < 6; ++i)
        printf("%d \n", thePower(ndigit[i], 2));
}

/* power: raise base to n-th power; n >= 0 */
int thePower(int base, int exp) {
    int output = 1;
    int i;
    for (i = 1; i <= exp; ++i) {
        output = base * output;
    }
    return output;
}
