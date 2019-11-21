/* TAD usuário */
typedef struct usuario Usuario;

/* Cria um usuário */
Usuario* criaUser();

/**/

/* Permissão de acesso, retorna '1' para permitido, e '0' para negado */
int accV(Usuario* usuario1, Usuario* usuario2);