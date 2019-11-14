#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
#include "viagem.h"
#include "viagemList.h"

struct usuario {
  int id[6];
  char* nome;
  Usuario** listAmigos;
  ViagemList* listViagens;
};

