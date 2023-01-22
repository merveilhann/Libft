/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milhan <milhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:06:41 by milhan            #+#    #+#             */
/*   Updated: 2023/01/22 17:06:43 by milhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*int main(void)
{
    int *a;
    int b;
    a = (int *)ft_calloc(10,sizeof(int));
     for (b=0; b<10; b++) {
          *(a+b) = (b+1) * 5;
          printf("%p adresindeki değer: %d\n", (a+b), *(a+b));
     }
     free(a);
}
*/
