#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
#include "viagem.h"
#include "viagemList.h"

struct usuario {
  int id, qtdA;
  char* nome;
  Usuario** listAmigos;
  ViagemList* listViagens;
};

Usuario* criaUser(char* nome, int id) {
  Usuario* usuario = (Usuario*) malloc(sizeof(Usuario));
  Usuario** listAmigos;
  usuario->listViagens = criaListV();
  usuario->qtdA = 0;
  usuario->id = id;
  usuario->nome = nome;
}

int qtdA(Usuario* usuario) {
  return usuario->qtdA;
}

char* obterNome(Usuario* usuario) {
  return usuario->nome;
}

int obterID(Usuario* usuario) {
  return usuario->id;
}

void addAmigo(Usuario* user1, Usuario* user2) {
  user1->qtdA++;
  user2->qtdA++;

  user1->listAmigos = (Usuario**) realloc(user1->listAmigos, user1->qtdA*sizeof(Usuario*));
  user2->listAmigos = (Usuario**) realloc(user2->listAmigos, user2->qtdA*sizeof(Usuario*));

  user1->listAmigos[user1->qtdA - 1] = user2;
  user2->listAmigos[user2->qtdA - 1] = user1;
}

void rmAmigo(Usuario* user1, Usuario* user2) {
  user1->listAmigos[user1->qtdA - 1] = NULL;
  user2->listAmigos[user2->qtdA - 1] = NULL;

  user1->qtdA--;
  user2->qtdA--;

  user1->listAmigos = (Usuario**) realloc(user1->listAmigos, user1->qtdA*sizeof(Usuario*));
  user2->listAmigos = (Usuario**) realloc(user2->listAmigos, user2->qtdA*sizeof(Usuario*));
}

Usuario** obterListAmigos(Usuario* usuario) {
  return usuario->listAmigos;
}

ViagemList* obterViagemList(Usuario* usuario) {
  return usuario->listViagens;
}

int accV(Usuario* usuario1, Usuario* usuario2) {
  int j = 0;
  while (usuario1->listAmigos[j] != NULL) {
    if (usuario1->listAmigos[j] = usuario2) {
      return 1;
    } else {
      j++;
    }
  }
  return 0;
}