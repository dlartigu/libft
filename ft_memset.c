/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:10:40 by dlartigu          #+#    #+#             */
/*   Updated: 2019/05/30 16:54:33 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *str_cpy;

	str_cpy = b;
	while (len)
	{
		*str_cpy = c;
		str_cpy++;
		len--;
	}
	return (b);
}
