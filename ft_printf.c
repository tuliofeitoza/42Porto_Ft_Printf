/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:11:22 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/27 22:51:55 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_check(const char *content, va_list args, size_t i);

int ft_printf(const char *content, ...)
{
    va_list args;
    size_t i;

    i = 0;  
    va_start(args, content);
    ft_check(content, args, &i);
    va_end(args);
    return (i);
}

static void ft_check(const char *content, va_list args, size_t i)
{
    while (*content)
    {
        if (*content == '%')
        {
            *content++;
            if (*content == 'c')
                ft_putchar(va_arg(args, int), i);
            else if (*content == 's')
                ft_putstr(va_arg(args, char *), i);
            else if (*content == 'd' || *content == 'i')
                ft_putnbr_dec(va_arg(args, int), i);
            else if (*content == 'u')
                ft_putnbr_dec_unsigned(va_arg(args, unsigned long int), i);
            else if (*content == 'x' || *content == 'X')
                ft_putnbr_hex(va_arg(args, unsigned int), i);
            else if (*content == 'p')
                ft_putptr(va_arg(args, unsigned long), i);
            else if (*content == '%')
                ft_putchar('%', i);
        }
        else
            ft_putchar(*content, i);
        content++;
    }
}
