/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:06:09 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:06:14 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (*(str + i) == ' ' || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = -sign;
		i++;
	}
	while (*(str + i) && ft_isdigit(*(str + i)))
	{
		num = (num * 10) + ((*(str + i) - 48) * sign);
		i++;
		if (num > 2147483647)
			return (-1);
		if (num < -2147483648)
			return (0);
	}
	return (num);
}
// #include <stdio.h>
// int main()
// {
// 	char a[] = "123zeynep";
// 	printf("%d",ft_atoi(a));
// }
