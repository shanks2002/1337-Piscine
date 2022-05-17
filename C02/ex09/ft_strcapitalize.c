/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:27:04 by ogorfti           #+#    #+#             */
/*   Updated: 2022/03/29 12:51:37 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alphanumeric(char alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else if (alpha >= 'A' && alpha <= 'Z')
		return (1);
	else if (alpha >= '0' && alpha <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	fc;

	i = 0;
	fc = 1;
	while (str[i] != '\0')
	{
		if (alphanumeric(str[i]))
		{
			if (fc && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!fc && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			fc = 0;
		}
		else
			fc = 1;
		i++;
	}
	return (str);
}
