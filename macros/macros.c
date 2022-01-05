/*
 * macros.c
 *
 *  Created on: Jan 4, 2022
 *      Author: 19exc
 */
/*
 * macros.c
 *
 *  Created on: Jan 1, 2022
 *      Author: 19exc
 */

#include <stdio.h>
#include <stdlib.h>

#define ODD(X) ((X) & 01)
#define BITON(X,N) ((X >> N) & 01)
#define ALLON(X,S,E) ((X & (((1 << (E+1))-1) ^ ((1<<S)-1))) == (((1 << (E+1))-1) ^ ((1<<S)-1)))
//-----------------------------------------------------------------------------
int main(void) {

	unsigned int U1, BitNumber, Start, End;

	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%ud", &U1);
	printf("%u is %s\n", U1, ODD(U1) ? "odd" : "even");
	fflush(stdout);

	printf("Enter an integer and a bit number : ");
	fflush(stdout);
	scanf("%u %d", &U1, &BitNumber);
	printf("%u has bit %d %s\n", U1, BitNumber,
			BITON(U1,BitNumber) ? "on" : "off");
	fflush(stdout);

	printf("Enter an integer, start and end bit numbers : ");
	fflush(stdout);
	scanf("%u %u %u", &U1, &Start, &End);
	printf("%u has %s those bits on\n", U1,
			ALLON(U1,Start,End) ? "all" : "not all");
	fflush(stdout);

	return (0);
}
//-------------


