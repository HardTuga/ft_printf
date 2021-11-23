/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:20:38 by pcampos-          #+#    #+#             */
/*   Updated: 2021/11/23 17:39:20 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_strcpy(char *dst, const char *src, int n)
{
    if(dst && src)
    {
        while(n--)
            *dst++ = *src++;
    }
}

int ft_putp (unsigned long n)
{
	int i;
    int c;
	char hexa[16];
    
	ft_strcpy(hexa, "0123456789abcdef", 16);
	if (n >= 16)
		ft_putp(n / 16);
	ft_putchar(hexa[n % 16]);
    i = 1;
    c = 1;
    if (n >= 16)
    {
        while (n/c > 15)
        {
            c *= 16;
            i++;
        }
    }
    return(i);
}