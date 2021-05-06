/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeining <rdeining@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:43:27 by rdeining          #+#    #+#             */
/*   Updated: 2021/05/05 10:13:44 by rdeining         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(char *tab, int l, int s)
{
	while (s <= l)
	{
		ft_swap(tab + s, tab + l);
		s++;
		l--;
	}
}

int		main(int argc, char *argv[])
{
	int l;
	int s;
	int ls;
	char a;

	
	l = 0;
	s = 0;
	ls = 0;
	while (*(argv[1] + l) != '\0')
	{
		l++;
	}
	ft_rev_int_tab(argv[1], l, s);
	a = *argv;
	while (ls <= l)
	{
		write(1, ((a + ls) + 48), 1);
		ls++;
	}
	write(1, "\n", l);
	return (0);
}
