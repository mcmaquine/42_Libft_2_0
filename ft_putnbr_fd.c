/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:00:48 by mmaquine          #+#    #+#             */
/*   Updated: 2025/09/03 16:42:30 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Outputs the integer 'n' to the specified file descriptor 'fd'.
*/
int	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	ln;
	int		printed;

	ln = n;
	printed = 0;
	if (ln < 0)
	{
		printed += ft_putchar_fd('-', fd);
		ln = -ln;
	}
	if (ln >= 10)
	{
		printed += ft_putnbr_fd(ln / 10, fd);
		printed += ft_putnbr_fd(ln % 10, fd);
	}
	if (ln < 10)
	{
		c = ln + '0';
		printed += ft_putchar_fd(c, fd);
	}
	return (printed);
}
