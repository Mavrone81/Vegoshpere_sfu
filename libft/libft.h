/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:43:13 by sfu               #+#    #+#             */
/*   Updated: 2023/09/15 19:16:51 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char* des, const char* sr, size_t size);
void    ft_toupper(char* s);
void    ft_tolower(char* s);
char*   strchr(const char *s, int c);
char*   strrchr(const char *s, int c);



#endif
