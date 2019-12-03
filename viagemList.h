#include "viagem.h"

/* TAD lista de viagens */
typedef struct viagemList ViagemList;

/* Cria uma lista de viagens */
ViagemList* criaListV();

/* Retorna a raiz da lista */
Viagem* obtemRaiz(ViagemList* listV);

/* Adiciona uma viagem à lista */
void addV(ViagemList* listV, Viagem* viagem);

/* Remove uma viagem da lista */
void rmV(ViagemList* listV, Viagem* viagem);

/* Altera um agendamento de viagem */
void altV(ViagemList* listV, Viagem* antes, Viagem* depois);

/* Percorre a lista e imprime as viagens da lista de viagem */
void emOrdem(Viagem* viagem);


