#include "lib.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (int argc, char *argv[]){

char saida [100];
int numero;


if (argc != 4){

    printf ("Argumentos inválidos!\n");
    return 1;
}

if ((atoi (argv[2])) == (atoi(argv[3]))){

    printf ("%d", atoi(argv[1]));
    return 0;
}


numero = baseNparaDec(argv[1], atoi(argv[2]));
baseDecparaM(saida, numero, atoi(argv[3]));

puts(saida);


return 0;

}