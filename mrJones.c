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
	char offspring[5]; 

	printf("Enter estate value: ");
	scanf("%f", &estate);

	printf("Enter one of: boy/girl/twins: ");
	scanf("%s", offspring);

	printf("%.2f\n", estate);
	printf("%s\n", offspring);

	sonsCutBeforeMomsCut = estate * .66;
	daughtersCutBeforeMomsCut = estate * .33;

	printf("%s\n", offspring);
	printf("%.2f\n", sonsCutBeforeMomsCut);
	printf("%.2f\n", daughtersCutBeforeMomsCut);

	if(offspring == "boy") {
		printf("It's a Boy!\nThe son receives %.2f and mom gets %.2f\n", 
			(estate * .66), (estate * .33));
	}
	else if(offspring == "girl") {
		printf("It's a Girl!\nThe daughter receives %.2f and mom gets %.2f\n",
		 (estate * .33), (estate * .66));
	}
	else {
		printf("It's Twins!\nThe son receives %.2f and the daughter receives %.2f
		 and mom gets %.2f\n", (sonsCutBeforeMomsCut * .66), (daughtersCutBeforeMomsCut * .33), 
		 ((sonsCutBeforeMomsCut * .33) + (daughtersCutBeforeMomsCut * .66)));
	}

}