/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeurico- <jeurico-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:05:56 by jeurico-          #+#    #+#             */
/*   Updated: 2022/04/17 21:50:21 by jeurico-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*pntr_dest;
	char	*pntr_src;

	count = 0;
	pntr_dest = (char *)dest;
	pntr_src = (char *)src;
	if (pntr_dest < pntr_src)
	{
		while (count < n)
		{
			pntr_dest[count] = pntr_src[count];
			count ++;
		}
	}
	else if (pntr_dest > pntr_src)
	{	
		while (n > 0)
		{
			pntr_dest[n - 1] = pntr_src[n - 1];
			n --;
		}
	}
	return (pntr_dest);
}
