#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lib.h"

char *alfabeto = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int index_alfabeto (char c){

    char *p;

    if ((p=strchr(alfabeto, c))){

        return (int)(p - alfabeto);
    }else {

        return 1;
    }
}


int baseNparaDec(char *strnum, int baseN){

   // printf ("BaseN10");

    int saidaNum = 0;
    int exp = 1;
    int index;

    index = strlen (strnum) -1;
    if (index <= 0) return 1;

    while (index >=0){

        saidaNum += index_alfabeto(strnum[index])*exp;
        index--;
        exp = exp * baseN;
    }

    return saidaNum;
}

void baseDecparaM (char *str, int num, int baseM){

  //  printf ("Base10M");

    int istr = 0;

    if (num == 0){
        str[0] = '0';
        istr = 1;
    }

    while (num){

        str[istr++] = alfabeto[num % baseM];
        num /= baseM;
    }

    if (istr > 0){

        char x;
        int i = 0;

        istr--;
            while (i <= istr/2){

                x = str[istr-i];
                str[istr-i] = str[i];
                str[i++] = x;
            }
    }
}
