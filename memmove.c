/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:33:17 by tle               #+#    #+#             */
/*   Updated: 2021/03/30 12:49:08 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_memmove(void *dst, const void *src, int len);

int	main(void)
{
	char	sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char	sCheck[] = {67, 68, 67, 68, 69, 0, 45};

	printf("%s\n", memmove(sCheck + 1, sCheck, 2));
	ft_memmove(sResult + 1, sResult, 2);
	printf("%s\n", sResult + 1);
}
