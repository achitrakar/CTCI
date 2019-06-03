#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Utility for debugging...
void printCharSet(int *letters) {
	for (int i = 0; i < 128; i++) {
		printf("%d", letters[i]);
	}
	printf("\n");
}

bool permutation(char *str1, char *str2) {
	int len = strlen(str1);
	if (len != strlen(str2)) {
		return false;
	}
	//
	int letters[128] = { 0 }; // Assumption: ASCII
	//
	for (int i = 0; i < len; i++) {
		int s1 = (int) str1[i];
		int s2 = (int) str2[i];
		letters[s1]++;
		letters[s2]--;
	}
	//
	//printCharSet(&letters[0]);
	for (int i = 0 ; i < 128 ; i++)
	{
		if (letters[i] != 0){
			return false;
		}
	}
	//
	return true;
}

void Chapter01Problem02_Permutation() {
	char *sample_data[][2] = { { "honey", "nyeho" }, { "parrot", "tarrop" }, {
			"world", "drlow" }, {"apple","ppple"}};

	for (int i = 0; i < 4; i++) {
		bool retVal = permutation(sample_data[i][0], sample_data[i][1]);
		printf("%s, %s: %s\n", sample_data[i][0], sample_data[i][1],
				retVal ? "True" : "False");
	}
}

