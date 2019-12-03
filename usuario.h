#include "viagemList.h"

/* TAD usuário */
typedef struct usuario Usuario;

/* Cria um usuário */
Usuario* criaUser(char* nome, int id);

/* Retorna a quantidade de amigos */
int qtdA(Usuario* usuario);

/* Retorna o nome do usuario */
char* obterNome(Usuario* usuario);

/* Retorna o ID do usuario */
int obterID(Usuario* usuario);

/* Adiciona um amigo */
void addAmigo(Usuario* user1, Usuario* user2);

/* Remove um amigo */
void rmAmigo(Usuario* user1, Usuario* user2);

/* Retorna a lista de amigos */
Usuario** obterListAmigos(Usuario* usuario);

/* Retorna a lista de viagens */
ViagemList* obterViagemList(Usuario* usuario);

/* Permissão de acesso, retorna '1' para permitido, e '0' para negado */
int accV(Usuario* usuario1, Usuario* usuario2);