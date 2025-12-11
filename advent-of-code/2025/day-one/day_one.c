#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

    FILE *f = fopen("tester.txt", "r");

    char buffer[10];
    while(fgets(buffer, sizeof(buffer), f) != NULL) {
        printf("%s", buffer);
    }

    fclose(f);

    return 0;
}