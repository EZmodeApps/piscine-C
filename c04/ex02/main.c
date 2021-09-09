#include <stdio.h>
void	ft_putnbr(int nb);
int		main()
{
	int num[] = {1234, -4321, 0, 2147483647, -2147483648, 333, -1, 1};
	for (int i = 0; i < 8; i++)
	{
		printf("number: %d\n", num[i]);
		ft_putnbr(num[i]);
		printf("\n");
	}
}
