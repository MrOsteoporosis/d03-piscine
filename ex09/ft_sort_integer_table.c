/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_integer_table.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 14:29:30 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 15:23:43 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */
void	ft_sort_integer_table(int *tab, int size)
{
	int c1;
	int c2;
	int swap;

	c1 = 0;
	c2 = 0;
	while (c1 < size - 1)
	{
		c1 = c1 + 1;
		while (c2 < size - c1 - 1)
		{
			c2 = c2 + 1;
			if (*(tab + c2) > *(tab + (c2 + 1)))
			{
				swap = *(tab + c2);
				*(tab + c2) = *(tab + (c2 + 1));
				*(tab + (c2 + 1)) = swap;
			}
		}
	}
}
/*fend */

int		main(void)
{
	int tosort[5] = {9, 3, 5, 7, 1};
	int size = 5;
	int loop;

   	for(loop = 0; loop < 5; loop++)
      	printf("%d, ", tosort[loop]);
	printf("%s", "\n");
	ft_sort_integer_table(&tosort[0], size);
	for(loop = 0; loop < 5; loop++)
      	printf("%d, ", tosort[loop]);
	return (0);
}
