/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:19:44 by ahammam           #+#    #+#             */
/*   Updated: 2022/11/14 09:38:47 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_add_char(char *str, char c)
{
    char *result;
    int i;

    i = 0;
    result = (char *)malloc(ft_strlen(str) + 2);
    while (str && str[i])
    {
        result[i] = str[i];
        i++;
    }
    if (str)
        free(str);
    result[i] = c;
    result[i + 1] = '\0';
    return (result);
}

char *get_next_line(int fd)
{
    char c;
    char *line;
    int bytes_read;

    line = NULL;
    if (fd < 0)
        return (NULL);
    while ((bytes_read = read(fd, &c, 1)) > 0)
    {
        line = ft_add_char(line, c);
        if (c == '\n')
            break;
    }
    return (line);
}
