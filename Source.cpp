#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	char coordinates[20];
	printf("Input coordinates: ");
	fgets(coordinates, sizeof(coordinates), stdin);



	char* next_token;
	char* token = strtok_s(coordinates, " ", &next_token);
	int count = 0;
	float tokstring[7];
	while (token != NULL) {
		tokstring[count] = atof(token);
		//printf("\ntoken %s", token);
		token = strtok_s(NULL, " ", &next_token);
		count++;

		if (count > 4) {
			printf("Erorr");
			return 13;
		}
	}
	float distance = sqrt(pow(tokstring[2] - tokstring[0], 2) + pow(tokstring[3] - tokstring[1], 2));
	printf("\ndistance: %.6f", distance);

	
/*
	for (int i = 0; i < count; i++) {	
		printf("\nArray: %.2f", tokstring[i]);
	}
	*/

	return 0;
}
