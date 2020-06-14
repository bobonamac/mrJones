/* Calculates Mr. Jones's inheritence to his offspring as follows...
	- if it's a boy: 2/3 for son, 1/3 for wife
	- if it's a girl: 1/3 for daughter, 2/3 for wife
	- if it's twins: ???
*/

#include<stdio.h>

int main(void) {
	
	int sonsCutBeforeMomsCut;
	int daughtersCutBeforeMomsCut;
	float estate;
	char offspring; 

	printf("Enter estate value: ");
	scanf("%f", &estate);

	printf("Enter b for a boy, g for a girl, or t for twins: ");
	scanf(" %c", &offspring);

	printf("\nestate: %.2lf\n", estate);
	printf("offspring: %c\n", offspring);

	sonsCutBeforeMomsCut = estate * .66666;
	daughtersCutBeforeMomsCut = estate * .33333;

	printf("sonsCutBeforeMomsCut: %.2d\n", sonsCutBeforeMomsCut);
	printf("daughtersCutBeforeMomsCut: %.2d\n", daughtersCutBeforeMomsCut);

	if(offspring == 'b') {
		printf("It's a Boy!\nThe son receives %.2lf and mom gets %.2lf\n", 
			(estate * .66666), (estate * .33333));
	}
	else if(offspring == 'g') {
		printf("It's a Girl!\nThe daughter receives %.2lf and mom gets %.2lf\n",
		 (estate * .33333), (estate * .66666));
	}
	else {
		printf("It's Twins!\nThe son receives %.2lf and the daughter receives %.2lf and mom gets %.2lf\n", (sonsCutBeforeMomsCut * .66666), (daughtersCutBeforeMomsCut * .33333), ((sonsCutBeforeMomsCut * .33333) + (daughtersCutBeforeMomsCut * .66666)));
	}
	printf("\n");
}