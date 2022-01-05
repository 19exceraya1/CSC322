/*
 * textanalyzer.c
 *
 *  Created on: Jan 1, 2022
 *      Author: 19exc
 */
#include <stdio.h>
#include <stdlib.h>

typedef char String[256];

int GetNumOfCharacters(String input) {
	int charCount = 0;

	// looping through char array elements to get num of chars
	for (int count = 0; count < 256; count++) {

		if (input[count] == '\n') {
			break;
		}
		charCount++;
	}
	return charCount;
}

void OutputWithoutWhitespace(String input) {
	String output;
	int outputCount = 0;
	char *pointer;

	for (int i = 0; i < 256; i++) {
		if (input[i] != ' ') {
			pointer = &input[i];
			output[outputCount] = *pointer;
			outputCount++;
			if(input[i] == '\n'){
				break;
			}
		}
	}
	printf("%s", output);
}
int main(void) {
	String input; // char array to hold input string

	printf("Enter a sentence or phrase\n");
	fflush(stdout);
	fgets(input, 256, stdin); // get user input
	printf("You entered: %s", input);
	printf("Number of characters: %d\n", GetNumOfCharacters(input));
	printf("String with no whitespace: ");
	OutputWithoutWhitespace(input);

}

