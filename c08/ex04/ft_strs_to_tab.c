#include <stdlib.h>
#include "ft_stock_str.h"

char    *ft_strdup(char *src)
{
    char *dest;
    int i;
    int size;

    size = 0;
    //percorre a string ate chegar na penúltima posição para obter o size dela
    while (src[size])
        ++size;
    //aloca memoria para o ponteiro de destino
    if (!(dest = malloc(sizeof(char) * (size + 1))))
        return (NULL);
    i = 0;
    //copia a string de src para dest, caracter por caracter
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);

}

unsigned int    ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*str)
		++str && ++i; //dois incrementos na mesma linha
	return (i);
}

void    set_stock_str(struct s_stock_str *s, char *str)
{
    if (str == NULL) //se string for vazia atribui valores nulos para os 'atributos' da struct
    {
        s->size = 0;
        s->str = NULL;
        s->copy = NULL;
    }
    else
    { // seta valores para as variaveis da struct
        s->size = ft_strlen(str);
        s->str = str;
        s->copy = ft_strdup(str);
    }
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    //ponteiro apontando para uma struct do tipo s_stock_str
    struct s_stock_str *ret;

    //alocando memoria do tamanho de ac + 1 vezes o tamnho de uma struct do tipo s_stock_str
    ret = malloc((ac + 1) * sizeof(struct s_stock_str));
    if (ret == NULL) //tratamento em caso da alocação dar errado
		return (NULL);
    set_stock_str(&ret[ac], NULL); //envia o ponteiro na ultima posiçao para ser iniciado com NULL
    while (--ac >= 0)
        set_stock_str(&ret[ac], av[ac]); //seta as estruturas com os parametros da função set...
    return (ret);
}