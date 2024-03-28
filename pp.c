#include <stdio.h>

int	main(void)
{
	int	pp = 24;
	char	cc[] = pp;
	int	i;
	for (i = 0; i < 4; i++)
		printf("what happend %c\n", cc[i]);
	return (0);
}
