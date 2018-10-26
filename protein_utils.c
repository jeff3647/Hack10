#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include "protein_utils.h"

/**
 *dnaInputFile.txt
 *protein.txt
 *return: single char
 */
char *dnaToRNA(const char *dna){
	 /**Exit the dna to rna conversion if any errors occur*/
	if(dna == NULL || strlen(dna) != 3){
		return 0;
	}
	int size = strlen(rna);
	
	/**Create new array of RNA to store converted DNA data*/
	char *rna = malloc(sizeof(char) * size);
	int i;
	
	/**Loop thorugh DNA and convert every T to U (convert DNA to RNA format)*/
	for(i = 0; i < size; i++){
		if(dna[i] == 'T'){
			rna[i] = 'U';
		} else {
			rna[i] = dna[i];
		}
	}
	return rna;
}
char rnaToProtein(const char *rna) {
	if(rna == NULL || strlen(rna) != 3) {
		return 0;
	}
	int size = strlen(rna);
	
	/**ProteinMap key is in h*/
	ProteinMap key = { "", '\0' };
	/**trigram: group of three consecutive characters taken from string*/
	strcpy(key.trigram, rna);
	
	/*bsearch = binary search*/
	ProteinMap *match = bsearch(&key, pMap, NUM_TRIGRAMS, sizeof(ProteinMap), proteinMapComp);
	return (match == NULL) ? 0 : match -> protein;

}

/**Used in rnaToProtein*/
int proteinMapComp(const void *a, const void *b) {
	const ProteinMap *x = (const ProteinMap *) a;
	const ProteinMap *y = (const ProteinMap *) b;
	return strcmp(x -> trigram, y -> trigram);
}
