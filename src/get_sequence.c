#include <stdio.h>

/*Reads in the Genome from a FASTA file.*/
char* readInSequence(char* fptr, char* seq){
    if(fptr == NULL) return NULL;
    FILE *seq_file = fopen(fptr, "r");
    if(seq_file == NULL) return NULL;
    if(seq == NULL) return NULL;
    for(int i = 0; i < 10; i++){
        fgets(seq + i * 256, 256, seq_file);
    }
    fclose(seq_file);
    return seq;
}