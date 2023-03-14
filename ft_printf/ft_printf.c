/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:26:24 by amargiac          #+#    #+#             */
/*   Updated: 2023/03/14 10:00:49 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			count;

	count = 0;
	if (!str || *str == '\0')
		return (0);
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
		str++;
		count += ft_printf_type(*str, args);
		str++;
		}
		else
		{
			ft_putchar(*str);
			count++;
			str++;
		}
	}
	return (count);
}
