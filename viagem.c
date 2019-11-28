#include <stdio.h>
#include <stdlib.h>
#include "viagem.h"

struct viagem {
  int dia, mes, ano, permanencia, id;
  char* destino;
  Viagem* filho;
  Viagem* pai;
};
