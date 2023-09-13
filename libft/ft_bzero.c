/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 02:22:11 by sfu               #+#    #+#             */
/*   Updated: 2023/09/12 21:11:16 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void* s, size_t len)
{
	unsigned char* p 
		
	*p = s;
	while (len--) 
	{
		*p++ = 0;
	}
}
