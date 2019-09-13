/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 12:57:30 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 14:25:58 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */
void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*fend */

int		main(void)
{
	int number;
	int number2;

	number = 10;
	number2 = 20;
	printf("%d\n", number);
	printf("%d\n", number2);
	ft_swap(&number, &number2);
	printf("%d\n", number);
	printf("%d\n", number2);
	return (0);
}
