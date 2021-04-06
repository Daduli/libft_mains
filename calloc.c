/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:48:18 by tle               #+#    #+#             */
/*   Updated: 2021/04/01 16:43:52 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	int	size = 8539;
	int *d1 = ft_calloc(size, sizeof(int));
	int *d2 = calloc(size, sizeof(int));

	printf("%d\n", (int)memcmp(d1, d2, size * sizeof(int)));
}
