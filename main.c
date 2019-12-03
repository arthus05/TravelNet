#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
#include "viagem.h"
#include "viagemList.h"

int main() {
    Usuario* Jose = criaUser("Jose", 00001);

    while (1) {
        int nav;
        printf(" --!-- Seja bem vindo à TravelNet, José! --!--\n");
        printf("_____\n");
        printf("Menu:\n");
        printf("-----------------------------\n");
        printf("[1]Informações de Usuário\n");
        printf("[2]Lista de Amigos\n");
        printf("[3]Cadastrar Amigos\n");
        printf("[4]Lista de Viagens\n");
        printf("[5]Cadastrar Viagens");
        printf("[0]Encerrar sessão.");
        printf("-----------------------------\n");
        printf("Digite o número da opção correspondente!\n");
        scanf("%d", &nav);

        if (nav == 0) {
            break;
        }

        if (nav == 1) {
            char nav1;
            printf("_____\n");
            printf("Informações de Usuário:\n");
            printf("-----------------------------\n");
            printf("Nome: %s", obterNome(Jose));
            printf("ID: %.5d", obterID(Jose));
            printf("-----------------------------\n");
            printf("Digite qualquer tecla para voltar ao Menu!");
            scanf("%c", &nav1);
        }

        if (nav == 2) {
            Usuario** listaAmigos = obterListAmigos(Jose);
            int nav2;
            printf("______\n");
            printf("Lista de amigos:\n");
            printf("-----------------------------\n");
            for (int i = 0; i < qtdA(Jose); i++) {
                printf("[%d]%s\n", 1 + i, obterNome(listaAmigos[i]));
            }
            printf("-----------------------------\n");
            printf("Digite o número correspondente ao amigo para gerenciar a amizade, ou 0, para voltar ao menu.\n");
            scanf("%d", &nav2);
            if (nav2 != 0) {
                Usuario* amigoSelecionado = listaAmigos[nav2-1];
                printf("-----------------------------\n");
                printf("Nome: %s", obterNome(amigoSelecionado));
                printf("-----------------------------\n");
                printf("Opções:\n");
                printf("[1]Espiar a lista de viagens.");
                printf("[2]Remover amigo.");
                printf("[0]Voltar ao Menu.");
                scanf("%d", &nav2);
                if (nav2 == 1) {
                    ViagemList* listVAmigSelec = obterViagemList(amigoSelecionado);
                    emOrdem(obtemRaiz(listVAmigSelec));
                }
                else if (nav2 == 2) {

                }
            }
        }
    }

    return 0;
}