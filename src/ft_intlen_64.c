/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_intmax.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrari <tferrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 14:19:31 by tferrari          #+#    #+#             */
/*   Updated: 2017/02/22 15:07:51 by tferrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen_64(int64_t n)
{
	int64_t		len;

	len = (n < 0) ? 2 : 1;
	while (((n) > 9) || ((n) < -9))
	{
		len++;
		n = n / 10;
	}
	return (len);
}
