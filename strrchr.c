/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:55:28 by tle               #+#    #+#             */
/*   Updated: 2021/03/24 12:18:00 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(char *s, int c);

int	main(void)
{
	char str[] = "Helloiu What's up?";
	char c = 'u';

	printf("%s\n", strrchr(str, c));
	printf("%s\n", ft_strrchr(str, c));
}
