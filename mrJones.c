/* Calculates Mr. Jones's inheritence to his offspring as follows...
	- if it's a boy: 2/3 for son, 1/3 for wife
	- if it's a girl: 1/3 for daughter, 2/3 for wife
	- if it's twins: ???
*/

#include<stdio.h>

int main(void) {
	
	float estate;
	char offspring; 

	printf("Enter estate value: ");
	scanf("%f", &estate);

	printf("Enter b for a boy, g for a girl, or t for twins: ");
	scanf(" %c", &offspring);

	printf("\nestate: %.2lf\n", estate);
	printf("offspring: %c\n", offspring);

	if(offspring == 'b') {
		printf("It's a Boy!\nThe son receives %.2lf and mom gets %.2lf\n", 
			(estate / 3 * 2), (estate / 3));
	}
	else if(offspring == 'g') {
		printf("It's a Girl!\nThe daughter receives %.2lf and mom gets %.2lf\n",
		 (estate / 3), (estate / 3 * 2));
	}
	else {
		printf("It's Twins!\nThe son receives %.2lf and the daughter receives %.2lf and mom gets %.2lf\n", (estate / 7 * 4), (estate / 7), ( + (estate / 7 * 2)));
	}
	printf("\n");
}