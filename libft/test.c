/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:15:26 by sfu               #+#    #+#             */
/*   Updated: 2023/09/17 21:21:37 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char buffer[10];
	char *result;

	result = ft_memset(buffer, 'A', sizeof(buffer));
	write(STDOUT_FILENO, "MEMSET\n", 7);
	write(STDOUT_FILENO, result, sizeof(buffer));
	write(STDOUT_FILENO, "\n", 1);

	//return 0;
	
	//int main()
   	 char ch = '5';

	write(STDOUT_FILENO, "\nISDIGIT\n", 9);
    	if (ft_isdigit(ch)) 
	{
        	write(STDOUT_FILENO, "Character is a digit.\n", 23);
	} 
	else
	{
        	write(STDOUT_FILENO, "Character is not a digit.\n", 27);
	}
	return(0);

    const char *str = "12345";
    int num = custom_atoi(str);
    write(STDOUT_FILENO, "Parsed number: ", 15);
    write(STDOUT_FILENO, &num, sizeof(int));
    write(STDOUT_FILENO, "\n", 1);
    return 0;
}
