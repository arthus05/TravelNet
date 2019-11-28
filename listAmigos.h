#include "usuario.h"

/* TAD lista de amigos */
typedef struct listAmigos ListAmigos;

/* Cria lista de amigos */
ListAmigos* criaListAmigos();

/* Adiciona um amigo na lista de amigos */
void addAmigo(ListAmigos* la, Usuario* user);

/* Remove um amigo da lista */
void rmAmigo(ListaAmigos* la, Usuario* user);