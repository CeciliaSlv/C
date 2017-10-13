#include "redon.h"
#include <stdio.h>
#include <stdlib.h>
int
main (int argc, char *argv [])
{
  float n;
  int n_redon;
  if (2 != argc) {
    fprintf(stderr, "Error: debe haber un parámetro bye\n");
    return 1;
  }
  n = (float) atof(argv [1]);
  n_redon = redon(n);
  printf("El número entero que más se aproxima a %f es %d.\n",n, n_redon);
  return 0;
}
