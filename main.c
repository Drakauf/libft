#include "ft_int.h"
int main(int a, char **b)
{
	ft_putnbr_base(ft_atoi(b[1]), ft_atoi(b[2]));
	return(0);
}
