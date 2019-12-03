/* TAD de uma viagem */
typedef struct viagem Viagem;

/* Cria e retorna uma viagem */
Viagem* criaViagem(int dia, int mes, int ano, int permanencia, int idUser, char* destino);

/* Retorna o dia da viagem */
int dia(Viagem* viagem);

/* Retorna o mes da viagem */
int mes(Viagem* viagem);

/* Retorna o ano da viagem */
int ano(Viagem* viagem);

/* Retorna a permanencia, em dias, da viagem */
int permanencia(Viagem* viagem);

/* Retorna o peso da viagem, relacionado com a data */
int peso(Viagem* viagem);

/* Retorna o ID da viagem, definido como seu peso concatenado ao ID do usuário */
int viagemID(Viagem* viagem);

/* Retorna o destino da viagem */
char* viagemDestino(Viagem* viagem);

/* Retorna o filho esquerdo do nó entrado */
Viagem* esq(Viagem* viagem);

/* Retorna o filho direito do nó entrado */
Viagem* dir(Viagem* viagem);

/* Retorna o pai do nó entrado */
Viagem* pai(Viagem* viagem);

/* Atribui à viagem1, o filho esquerdo viagem2 */
void atribuiEsq(Viagem* viagem1, Viagem* viagem2);

/* Atribui à viagem1, o filho direito viagem2 */
void atribuiDir(Viagem* viagem1, Viagem* viagem2);

/* Atribui à viagem1, o pai viagem2 */
void atribuiPai(Viagem* viagem1, Viagem* viagem2);

/* Imprime a viagem */
void mostrarViagem(Viagem* viagem);

