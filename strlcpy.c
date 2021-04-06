/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:27:05 by tle               #+#    #+#             */
/*   Updated: 2021/03/24 15:36:45 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlcpy(char *dst, char *src, int dstsize);

int	main(void)
{
	char str[] = "Copying";
	char copy[10] = "";
	char sr[] = "Copying";
	char cpy[10] = "";
	
	printf("%lu\n", strlcpy(copy, str, 0));
	printf("%d\n", ft_strlcpy(cpy, sr, 0));
}




	/*int i;

	i = 0;
	strlcpy(copy, str, 8);
	printf("%s\n", copy);
	while (copy[i] != '\0')
	{
		i++;
	}
	if (copy[i] == '\0')
		printf("\\0\n");
	ft_strlcpy(cpy, sr, 8);
	printf("%s\n", cpy);
	while (cpy[i] != '\0')
		i++;
	if (copy[i] == '\0')
		printf("\\0\n");
}*/
