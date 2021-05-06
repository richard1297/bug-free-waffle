/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeining <rdeining@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:25:49 by rdeining          #+#    #+#             */
/*   Updated: 2021/05/04 19:42:40 by rdeining         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int *ptra;
	int *ptrb;
	
	a = 5;	
	b = 3;
	ptra = &a;
	ptrb = &b;
	write (1, ptra, 1);
	ft_div_mod(a, b, ptra, ptrb)
	char c = *ptra + '0';
	write (1, &c, 1);
	c = *ptrb + '0';
	write (1, &c, 1);
	return(0);
}
