void	ft_swap(int *a, int *b)
{
	int pointer_aux;

	pointer_aux = *a;
	*a = *b;
	*b = pointer_aux;
}
