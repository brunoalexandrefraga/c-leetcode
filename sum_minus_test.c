// sum_minus_test.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sum_minus.h"

int main(int argc, char *argv[]) {
	if (argc != 4) {
		fprintf(stderr, "Usage: %s <function> <arg1> <arg2>\n", argv[0]);
		return 1;
	}

	int arg1 = atoi(argv[2]);
	int arg2 = atoi(argv[3]);

	if (strcmp(argv[1], "sum") == 0) {
		printf("%d\n", sum(arg1, arg2));
	} else if (strcmp(argv[1], "minus") == 0) {
		printf("%d\n", minus(arg1, arg2));
	} else {
		fprintf(stderr, "Unknown function: %s\n", argv[1]);
		return 1;
	}

	return 0;
}

