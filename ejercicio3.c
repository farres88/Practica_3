#include <stdio.h>

int main() {
    int a, b = 2, c = 3, d = 4;

    a = b + c * d;
    d = a;

    a = (b + c) * d;
    d = a;

    return 0;
}

