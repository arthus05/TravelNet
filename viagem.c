#include <stdio.h>
#include <stdlib.h>
#include "viagem.h"

struct viagem {
    int dia, mes, ano, permanencia, id;
    char *destino;
    Viagem *filhoEsq;
    Viagem *filhoDir;
    Viagem *pai;
};

Viagem *criaViagem(int dia, int mes, int ano, int permanencia, int idUser, char *destino) {
    Viagem *viagem = (Viagem *)malloc(sizeof(Viagem));
    viagem->filhoDir = NULL;
    viagem->filhoEsq = NULL;
    viagem->pai = NULL;

    viagem->dia = dia;
    viagem->mes = mes;
    viagem->ano = ano;
    viagem->permanencia = permanencia;
    viagem->id = (dia + mes*30 + ano*365 + permanencia)*100000 + idUser;

    viagem->destino = destino;
}

int dia(Viagem* viagem) {
    return viagem->dia;
}

int mes(Viagem* viagem) {
    return viagem->mes;
}

int ano(Viagem* viagem) {
    return viagem->ano;
}

int permanencia(Viagem* viagem) {
    return viagem->permanencia;
}

int peso(Viagem *viagem) {
    return viagem->dia + viagem->mes*30 + viagem->ano*365;
}

int viagemID(Viagem* viagem) {
    return viagem->id;
}

char* viagemDestino(Viagem* viagem) {
    return  viagem->destino;
}

Viagem* esq(Viagem* viagem) {
    return viagem->filhoEsq;
}

Viagem* dir(Viagem* viagem) {
    return viagem->filhoDir;
}

Viagem* pai(Viagem* viagem) {
    return viagem->pai;
}

void atribuiEsq(Viagem* viagem1, Viagem* viagem2) {
    viagem1->filhoEsq = viagem2;
}

void atribuiDir(Viagem* viagem1, Viagem* viagem2) {
    viagem1->filhoDir = viagem2;
}

void atribuiPai(Viagem* viagem1, Viagem* viagem2) {
    viagem1->pai = viagem2;
}

void mostrarViagem(Viagem* viagem) {
    printf("-----------------------------\n");
    printf("ID da viagem: %d", viagemID(viagem));
    printf("Destino: %s", viagemDestino(viagem));
    printf("Data: %d/%d/%d", dia(viagem), mes(viagem), ano(viagem));
    printf("Permanencia: %d dias.", permanencia(viagem));
    printf("-----------------------------\n");

}



