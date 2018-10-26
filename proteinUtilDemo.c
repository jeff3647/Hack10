#include<stdio.h>
#include<stdlib.h>

#include "protein_utils.h"

int main(int argc, char **argv) {
	/**Checks if command-line argument is correctly inputted*/
	if(argc != 2) {
		fprintf(stderr, "Usage: %s RNA\n", argv[0]);
		exit(1);
	}
  
	/**
	 *Open the file from command line
	 *dnaInputFile.txt -> input file
	 *protein.txt -> output file
	 */
	FILE *instream = fopen(argv[1], "r");
	FILE *outstream = fopen(argv[2], "w");

	char *current[3];
	char tempBuffer[100];
	
	
	
	
	int const maxSize = 50;
	int const numTeams = 16;
	char filePath[] = "data/mlb_nl_2011.txt";
	char tempBuffer[100];

	int i;
	char **dna = (char **)malloc(sizeof(char *) * 64);
	double *winPercentages = (double *)malloc(sizeof(double) * numTeams);
	for (i = 0; i < numTeams; i++) {
		teams[i] = (char *)malloc(sizeof(char) * maxSize);
	}
	
	
	
	
	
	// read the file, line by line
	int i = 0;
	
	while(fgets(tempBuffer, size, instream) != NULL) {
		// remove the endline character from the line
		tempBuffer[strlen(tempBuffer) - 1] = '\0';
		
		// char *dnaToken = strcpy(tempBuffer, 3);
		
		// char *stateToken = strtok(tempBuffer, ",");
		// strcpy(states[i], stateToken);
 
		i++;
	}
	fclose(instream);
	
	char prot = rnaToProtein(dnaToRNA(instream));

	printf("%s -> %c\n", *instream, prot);
	fwrite(prot, sizeof(char), 15, outstream);
	//fwrite(states[i], sizeof(char), 15, outstream);
	
	fclose(outstream);

	return 0;
}
