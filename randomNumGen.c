// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Generates and prints 'count' random
// numbers in range [lower, upper].
void printRandoms(int lower, int upper,
							int count) {
	int i;

	printf("\nGenerated Numbers:\n");
	for (i = 0; i < count; i++) {
		int num = (rand() %
		(upper - lower + 1)) + lower;
		printf("%d ", num);
	}
}

int main() {
	int lower, upper, count;
    char c='y';

    do {
        printf("Minimum number size:\n");scanf("%d",&lower);
        printf("\nMaximum number size:\n");
        scanf("%d", &upper);
        printf("\nAmount of numbers to be generated:\n");
        scanf("%d", &count);

        // Use current time as
        // seed for random generator
        srand(time(0));

        printRandoms(lower, upper, count);

        printf("\n\nGenerate new set? (y/n)\n");
        scanf(" %c",&c);
        printf("\n");
    } while(c=='y');

    if (c=='n'){
        exit(0);
    }
	return 0;
}
