/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheusms1 <matheusms1@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:13:04 by matheusms1        #+#    #+#             */
/*   Updated: 2026/06/29 10:36:05 by matheusms1       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_str(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	return (ft_print_str(str));
}

int	handle_ptr(va_list args)
{
	void			*ptr;
	unsigned long	addr;

	ptr = va_arg(args, void *);
	addr = (unsigned long)ptr;
	if (ft_print_str("0x") == -1)
		return (-1);
	if (!addr)
		return (2 + ft_print_char('0'));
	return (2 + ft_print_nbr(addr, 16, 0));
}

int	handle_int(va_list args)
{
	long	n;
	int		printed;

	printed = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		if (ft_print_char('-') == -1)
			return (-1);
		printed++;
		n = -n;
	}
	printed += ft_print_nbr((unsigned long)n, 10, 0);
	return (printed);
}

int	handle_unsigned(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_print_nbr((unsigned long)n, 10, 0));
}

int	handle_hex(va_list args, int upper)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_print_nbr((unsigned long)n, 16, upper));
}
