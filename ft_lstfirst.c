/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfirst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:49:13 by mmaquine          #+#    #+#             */
/*   Updated: 2025/12/29 13:56:51 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Return the element which should be the first element on a list
*/
t_list	*ft_lstfirst(t_list	*node)
{
	if (!node)
		return (node);
	while (node->prev)
		node = node->prev;
	return (node);
}
