/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:10:48 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:10:50 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include<fcntl.h>
// int main()
// {
// 	char a = 'a';
// 	int fd = open("a.txt" , O_CREAT | O_RDWR , 0777 );
// 	ft_putchar_fd(a,fd);
// }
