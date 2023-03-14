/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:36:57 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/14 10:00:43 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_type(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (c == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (c == 'p')
		count += ft_print_ptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += ft_print_nbr(va_arg(args, long long));
	else if (c == 'u')
		count += ft_print_uns(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		count += ft_print_per();
	return (count);
}
