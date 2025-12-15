/**
 * Author: Brady Dame
 * Date: 2025-12-11
 * 
 * This program counts the number of times a dial lands on '0' when trying to 
 * unlock the safe for Advent of Code - 2025, Day One Puzzle
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

    FILE *f = fopen("tester.txt", "r");

    char buffer[10];
    while(fgets(buffer, sizeof(buffer), f) != NULL) {
        char direction = buffer[0];
        int number = atoi(&buffer[1]);
        printf("Action: %sDirection: %c, Clicks: %d\n", buffer, direction, number);
    }

    fclose(f);

    return 0;
}