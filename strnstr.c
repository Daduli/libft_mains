/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 09:13:36 by tle               #+#    #+#             */
/*   Updated: 2021/03/26 16:08:23 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len);

int	main(void)
{
	char	haystack[30] = "aaabcabcd";

	printf("%s\n", ft_strnstr(haystack, "cd", 8));
}
