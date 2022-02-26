
/* power: raise base to n-th power; n >= 0 */
int theFunctions(int base, int exp) {
    int output = 1;
    int i;
    for (i = 1; i <= exp; ++i) {
        output = base * output;
    }
    return output;
}
