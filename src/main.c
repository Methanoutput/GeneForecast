#include <stdio.h>
#include <stdlib.h>
#include "get_sequence.h"

int main(int argc, char **argv){
    if(argc != 2){
        printf("%s", "atleast 1 arguments!");
    }
    char* seq = malloc(sizeof(char) * 10 * 256);
    readInSequence(argv[1], seq);
    for(int i = 0; i < 10; i++){
        printf("%c", seq[i]);
    }
    free(seq);
    return 0;
}
