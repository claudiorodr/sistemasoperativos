#include "Monitor.h"


void * criarThreadUtilizador()
{
    pthread_t t;
    pthread_create(&t,NULL,(void *)criarUtilizador,NULL);  
}

void inicializarUtilizador(utilizador * u)
{
    nr_utilizadores++;
    u->id = nr_utilizadores;
    u->tempo_entrada = time(NULL);
}

utilizador * criarUtilizador()
{
    utilizador * u = (utilizador *) malloc (sizeof(utilizador));
    
    inicializarUtilizador(u);

    return u;
}

void main()
{
    utilizador * u_head_bil = NULL;
    utilizador * u_head_mon = NULL;

    utilizador * u_novo = criarUtilizador();
    u_head_bil=inserirUtilizador(u_head_bil,u_novo);
    printf("%d",u_head_bil->id);
}
