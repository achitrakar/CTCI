#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isUnique(char *str) {
	int length = strlen(str);
	if (length > 128) {
		return false;
	}
	//
	bool char_set[128] = { false };
	int data;
	for (int i = 0; i < length; i++) {
		data = (int) str[i];
		if (char_set[data]) {
			return false;
		}
		char_set[data] = true;
	}
	return true;
}

void Chapter01Problem01_IsUniqueTest() {
	char *sample_data[5] = { "avenger", "avEnger", "kite", "k it e", "apple" };

	for (int i = 0; i < 5; i++) {
		printf("%-*s: %s\n", 10, sample_data[i],
				isUnique(sample_data[i]) ? "True" : "False");
	}
}

