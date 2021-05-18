#ifndef FT_BOOLEAN
#define FT_BOOLEAN

#include <unistd.h>

#define TRUE 1
#define FALSE 0
#define EVEN_MSG "Número par de argumentos"
#define ODD_MSG "Número ímpar e argumentos"
#define SUCCESS 0

#define EVEN(var) (var % 2)

typedef int t_bool;

#endif