/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 12:42:26 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 14:22:11 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */
#include <stdio.h>

/*fstart */
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*fend */

int		main(void)
{
	int number;

	number = 10;
	printf("%d\n", number);
	ft_ft(&number);
	printf("%d\n", number);
	return (0);
}
