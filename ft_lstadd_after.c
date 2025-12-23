/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_after.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:48:41 by mmaquine          #+#    #+#             */
/*   Updated: 2025/12/23 16:10:24 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Add element after right after element current.
*/
void	ft_lstadd_after(t_list *current, t_list *after)
{
	if (!current || !after)
		return ;
	current->next->prev = after;
	after->next = current->next;
	after->prev = current;
	current->next = after;
}
