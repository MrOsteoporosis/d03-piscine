/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_integer_table.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 14:29:30 by averheij       #+#    #+#                */
/*   Updated: 2019/09/12 14:36:02 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int c1;
	int c2;
	int swap;

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

int		main(void)
{
	return (0);
}
