#include <time.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "Restricoes.h"
#include "Estruturas.h"

unsigned int nr_utilizadores = 0;
time_t tempo_inicio;

void * criarThreadUtilizador();
utilizador * criarUtilizador();
