#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
#include "viagem.h"
#include "viagemList.h"

struct usuario {
  int* id;
  char* nome;
  Usuario** listAmigos;
  ViagemList* listViagens;
};

Usuario* criaUser(char* nome, int* id) {
  Usuario* usuario = (Usuario*) malloc(sizeof(Usuario*));
  Usuario** listAmigos = (Usuario**) malloc(sizeof(Usuario*));
  usuario->listAmigos = listAmigos;
  usuario->listViagens = criaListV();
  usuario->id = id;
  usuario->nome = nome;
}



