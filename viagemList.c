#include <stdio.h>
#include <stdlib.h>
#include "viagemList.h"
#include "viagem.h"

struct viagemList {
    Viagem* raiz;
};

/* Função para auxiliar no algoritmo de remoção rmV*/
void transplantarLV(ViagemList* VL, Viagem* v1, Viagem* v2) {
    if (pai(v1) == NULL) {
        VL->raiz = v2;
    }
    else if (v1 == esq(pai(v1))) {
        atribuiEsq(pai(v1), v2);
    }
    else {
        atribuiDir(pai(v1), v2);
    }
    if (v2 != NULL) {
        atribuiPai(v2, pai(v1));
    }
}

/* Função para auxiliar no algoritmo de remoção rmV*/
Viagem* minLV(Viagem* viagem) {
    while (esq(viagem) != NULL) {
        viagem = esq(viagem);
    }
    return viagem;
}

ViagemList* criaListV() {
    ViagemList* listViagem = (ViagemList*) malloc(sizeof(ViagemList));
    listViagem->raiz = NULL;
}

Viagem* obtemRaiz(ViagemList* listV) {
    return listV->raiz;
}

void addV(ViagemList* listV, Viagem* viagem) {
    Viagem* aux1 = NULL;
    Viagem* aux2 = listV->raiz;
    while (aux2 != NULL) {
        aux1 = aux2;
        if (peso(viagem) < peso(aux2)) {
            aux2 = esq(aux2);
        } else {
            aux2 = dir(aux2);
        }
    }
    atribuiPai(viagem, aux1);
    if (aux1 == NULL) {
        listV->raiz = viagem;
    }
    else if (peso(viagem) < peso(aux1)) {
        atribuiEsq(aux1, viagem);
    }
    else {
        atribuiDir(aux1, viagem);
    }
}

void rmV(ViagemList* listV, Viagem* viagem) {
    if (esq(viagem) == NULL) {
        transplantarLV(listV, viagem, dir(viagem));
    }
    else if (dir(viagem) == NULL) {
        transplantarLV(listV, viagem, esq(viagem));
    }
    else {
        Viagem* aux = minLV(dir(viagem));
        transplantarLV(listV, aux, dir(aux));
        atribuiDir(aux, dir(viagem));
        atribuiEsq(aux, esq(viagem));
        atribuiPai(esq(aux), aux);
        atribuiPai(dir(aux), aux);
        transplantarLV(listV, viagem, aux);
    }
}

void altV(ViagemList* listV, Viagem* antes, Viagem* depois) {
    rmV(listV, antes);
    addV(listV, depois);
}

void emOrdem(Viagem* viagem) {
    if (viagem != NULL) {
        emOrdem(esq(viagem));
        mostrarViagem(viagem);
        emOrdem(dir(viagem));
    }
}







