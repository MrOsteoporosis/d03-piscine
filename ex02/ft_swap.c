/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 12:57:30 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 11:23:45 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */

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
	return (0);
}
