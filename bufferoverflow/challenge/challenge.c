#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void vulnerable() {
    char buffer[64];
    gets(buffer);
    printf(buffer);
}

int main() {
    vulnerable();
    return 0;
}