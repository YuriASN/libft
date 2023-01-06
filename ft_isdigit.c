/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:08:10 by ysantos-          #+#    #+#             */
/*   Updated: 2023/01/06 22:05:55 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isdigit() function checks whether a character
is numeric character (0-9) or not.
Return 1 if it is.
Return 0 if it isn't. */
int	ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}
