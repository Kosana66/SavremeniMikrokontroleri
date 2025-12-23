#include <stdio.h>
#include <stdlib.h>

int main() {

	int* broj;
	broj = malloc(sizeof(int));

	while (1) {
		scanf_s("%d", broj);
		printf("Uneli ste broj: %d\n", *broj);
	}

	free(broj);
	return 0;
}