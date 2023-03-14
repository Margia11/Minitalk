/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:17:58 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/14 10:01:04 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nbr)
{
	long long int	n;
	int				len;

	n = nbr;
	len = 0;
	if (n < 0)
	{
		n *= -1;
		len += ft_print_char('-');
	}
	if (n >= 10)
	{
		len += ft_putnbr(n / 10);
	}
	len += ft_print_char((n % 10) + 48);
	return (len);
}
