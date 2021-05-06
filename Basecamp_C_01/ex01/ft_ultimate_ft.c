/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdeining <rdeining@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:20:19 by rdeining          #+#    #+#             */
/*   Updated: 2021/05/03 17:00:38 by rdeining         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}



int		main(void)
{
	int *********ptr;
	int ********ptr1;
	int *******ptr2;
	int ******ptr3;
	int *****ptr4;
	int ****ptr5;
	int ***ptr6;
	int **ptr7;
	int *ptr8;
	int abc;
	ptr = &ptr1;
	ptr1 = &ptr2;
	ptr2 = &ptr3;
	ptr3 = &ptr4;
	ptr4 = &ptr5;
	ptr5 = &ptr6;
	ptr6 = &ptr7;
	ptr7 = &ptr8;
	ptr8 = &abc;
	ft_ultimate_ft(ptr);
	write (1, ptr8, 1);
}
