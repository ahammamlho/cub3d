/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:19:54 by ahammam           #+#    #+#             */
/*   Updated: 2022/11/14 09:39:25 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int main()
{
    int fd = open("cub3d.c", O_RDONLY);
    char *line = get_next_line(fd);
    while ((line = get_next_line(fd)))
    {
        printf("----> %s", line);
    }
}