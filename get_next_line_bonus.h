/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfoughal <nfoughal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:04:40 by nfoughal          #+#    #+#             */
/*   Updated: 2022/11/05 20:31:50 by nfoughal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<unistd.h>
# include<stdlib.h>

char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);
int		ft_strchr(char *s, int c);
char	*ft_strdup(char *s1);
char	*get_next_line(int fd);
char	*read_record(int fd, char *record);
char	*get_line(char *record);
char	*new_record(char *record);
#endif