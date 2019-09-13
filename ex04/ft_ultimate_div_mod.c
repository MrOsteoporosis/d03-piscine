/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:05:26 by averheij       #+#    #+#                */
/*   Updated: 2019/09/13 11:24:16 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */

/*fstart */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*fend */

int		main(void)
{
	return (0);
}
