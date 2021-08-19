#include <stdio.h>
#include <stdlib.h>

char* program_name;

int main(int argc, char **argv){
    program_name = argv[0];

    printf(program_name);

    return EXIT_SUCCESS;
}