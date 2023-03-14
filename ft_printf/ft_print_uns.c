/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:40:22 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/14 10:00:38 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		count;

	count = ft_counter_unsigned(n);
	num = (char *)malloc(sizeof(char) * (count + 1));
	if (!num)
		return (0);
	num[count] = '\0';
	while (n != 0)
	{
		num[count - 1] = n % 10 + 48;
		n = n / 10;
		count--;
	}
	return (num);
}

int	ft_print_uns(unsigned int n)
{
	int		count;
	char	*num;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		count += ft_print_str(num);
		free(num);
	}
	return (count);
}
