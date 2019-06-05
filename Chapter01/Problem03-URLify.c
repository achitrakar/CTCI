#include <string.h>
#include <stdio.h>

void replaceSpaces(char *str, int len) {
	int spaceCount = 0, finalLength = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			spaceCount++;
		}
	}
	finalLength = len + (spaceCount * 2);
	//
	if (len < strlen(str)) {
		str[finalLength] = '\0';
	}
	for (int i = (len - 1); i >= 0; i--) {
		if (str[i] == ' ') {
			str[finalLength - 1] = '0';
			str[finalLength - 2] = '2';
			str[finalLength - 3] = '%';
			finalLength = finalLength - 3;
		} else {
			str[finalLength - 1] = str[i];
			finalLength--;
		}
	}
}

void Chapter01Problem03_URLify() {
	char sample_data[1000] = "Mr John Smith    ";
	printf("Original String:[%s]\n", sample_data);
	int len = 13;
	replaceSpaces(&sample_data[0], len);
	printf("After Modification: [%s]\n", sample_data);
}
