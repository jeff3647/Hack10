#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char dnaToRNA(const char *dna){
	if(dna == NULL){
		return 0;
	}
	int i;
	for(i = 0; i < dna.len; i++){
		if(dna[i] == 'T'){
			replace;
	}
}

char rnaToProtein(const char *rna) {
	if(rna == NULL || strlen(rna) != 3) {
		return 0;
	}
	char fileDNA[100];
	char fileProtein[100];
	
	/**ProteinMap key is in h*/
	ProteinMap key = { "", '\0' };
	/**trigram: group of three consecutive characters taken from string*/
	strcpy(key.trigram, rna);
	
	/*bsearch = binary search*/
	ProteinMap *match = bsearch(&key, pMap, NUM_TRIGRAMS, sizeof(ProteinMap), proteinMapComp);
	return (match == NULL) ? 0 : match -> protein;
}

int main(int argc, char **argv){
	
}



