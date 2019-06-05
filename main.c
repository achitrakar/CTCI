#include <stdio.h>

#include "Chapter01/chapter1.h"

int main() {
	int chapter, problem;
	printf("Enter Chapter number, Problem number: ");
	scanf("%d, %d", &chapter, &problem);
	switch (chapter) {
	case 1:
		switch (problem) {
		case 1:
			Chapter01Problem01_IsUniqueTest();
			break;
		case 2:
			Chapter01Problem02_Permutation();
			break;
		case 3:
			Chapter01Problem03_URLify();
			break;
		default:
			printf("\nProblem Not Found!");
			break;
		}
		break;
	default:
		printf("\nChapter Not found!");
		break;
	}
	printf("\nCompleted");
	return 0;
}
