/* ed1_string.c */
#include "ed1_string.h"
#include <stdlib.h>
#include <string.h>

void strtrim(char *destino, const char *origem) {
  while (*origem == ' ')
    origem++;

  strcpy(destino, origem);
}

void strreverse(char *destino, const char *origem) {
}
