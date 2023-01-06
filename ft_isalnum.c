/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:13:45 by ysantos-          #+#    #+#             */
/*   Updated: 2023/01/06 22:05:39 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isalnum() function checks whether the argument passed is an
alphanumeric character (alphabet or number) or not.
Returns 1 if argument is an alphanumeric character.
Returns 0 if argument is neither an alphabet nor a digit. */
int	ft_isalnum(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	else if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}
