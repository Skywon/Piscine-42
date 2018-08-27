/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:13:00 by pvinson           #+#    #+#             */
/*   Updated: 2018/08/15 00:50:32 by tguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   			ft_putstr(char *str);
void   			ft_putnbr(int nb);
int    			ft_atoi(char *str);
char   			*ft_strcpy(char *dest, char *src);
char 		    *ft_strncpy(char *dest, char *src, unsigned int n);
char    	 	*ft_strstr(char *str, char *to_find);
int   			ft_strcmp(char *s1, char *s2);
int  			ft_strncmp(char *s1, char *s2, unsigned int n);
char            *ft_strupcase(char *str);
char            *ft_strlowcase(char *str);
char            *ft_strcapitalize(char *str);
int             ft_str_is_alpha(char *str);
int             ft_str_is_numeric(char *str);
int             ft_str_is_lowercase(char *str);
int             ft_str_is_uppercase(char *str);
int             ft_str_is_printable(char *str);
char            *ft_strcat(char *dest, char *src);
char            *ft_strncat(char *dest, char *src, int nb);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int main(int argc, char **argv)
{
	char str[255];
	char str2[255];
	char *res3;
	char *res4;
	int i;

	if (argc == 2)
	{
		printf("Test \'\033[36m%s\033[0m\': atoi > %d VS %d < ft_atoi => %s\n", argv[1], atoi(argv[1]), ft_atoi(argv[1]), (atoi(argv[1]) == ft_atoi(argv[1]) ? "\033[32m OK \033[0m" : "\033[31m FAIL \033[0m"));
		printf("Test \'\033[36m%s\033[0m\': ft_str_is_alpha > %s\n", argv[1], (ft_str_is_alpha(argv[1]) ? "\033[33m YES \033[0m" : "\033[33m NO \033[0m"));
		printf("Test \'\033[36m%s\033[0m\': ft_str_is_numeric > %s\n", argv[1], (ft_str_is_numeric(argv[1]) ? "\033[33m YES \033[0m" : "\033[33m NO \033[0m"));
		printf("Test \'\033[36m%s\033[0m\': ft_str_is_lowercase > %s\n", argv[1], (ft_str_is_lowercase(argv[1]) ? "\033[33m YES \033[0m" : "\033[33m NO \033[0m"));
		printf("Test \'\033[36m%s\033[0m\': ft_str_is_uppercase > %s\n", argv[1], (ft_str_is_uppercase(argv[1]) ? "\033[33m YES \033[0m" : "\033[33m NO \033[0m"));
		i = 0;
		while (argv[1][i])
		{
			str[i] = argv[1][i];
			i++;
		}
		str[i] = '\0';
		printf("Test \'\033[36m%s\033[0m\': ft_strupcase >\033[33m %s \033[0m\n", argv[1], ft_strupcase(str));
		i = 0;
		while (argv[1][i])
		{
			str[i] = argv[1][i];
			i++;
		}
		str[i] = '\0';
		printf("Test \'\033[36m%s\033[0m\': ft_strlowcase >\033[33m %s \033[0m\n", argv[1], ft_strlowcase(str));
		i = 0;
		while (argv[1][i])
		{
			str[i] = argv[1][i];
			i++;
		}
		str[i] = '\0';
		printf("Test \'\033[36m%s\033[0m\': ft_strcapitalize >\033[33m %s \033[0m\n", argv[1], ft_strcapitalize(str));
		i = 0;
		while (argv[1][i])
		{
			str[i] = argv[1][i];
			i++;
		}
		str[i] = '\0';
		printf("Test \'\033[36m%s\033[0m\': strcpy > %s VS %s < ft_strcpy => %s\n", argv[1], strcpy(str2, str), ft_strcpy(str2, str), (strcpy(str2, str) == ft_strcpy(str2, str) ? "\033[32m OK \033[0m" : "\033[31m FAIL \033[0m"));
		i = 0;
		while (argv[1][i])
		{
			str[i] = argv[1][i];
			i++;
		}
		str[i] = '\0';
		//printf("Test \'\033[36m%s\033[0m\': ft_putstr_non_printable > \n", argv[1]); ft_putstr_non_printable(argv[1]); printf("\n");
	}
	else if (argc == 3)
	{
		if (atoi(argv[2]) != 0 && atoi(argv[1]) == 0)
		{
			res3 = strncpy(str, argv[1], atoi(argv[2]));
			res4 = ft_strncpy(str2, argv[1], atoi(argv[2]));
			printf("Test \'\033[36m%s\033[0m\': strncpy > \033[33m%s\033[0m VS \033[33m%s\033[0m < ft_strncpy => %s\n", argv[1], res3, res4, (strcmp(res3, res4) == 0 ? "\033[32m OK \033[0m" : "\033[31m FAIL \033[0m"));
		}
		else if (atoi(argv[1]) == 0)
		{
			printf("Test \'\033[36m%s\033[0m\' => \'\033[36m%s\033[0m\': strstr > \033[36m%s\033[0m VS \033[36m%s\033[0m < ft_strstr => %s\n", argv[1], argv[2], strstr(argv[2], argv[1]), ft_strstr(argv[2], argv[1]), (strstr(argv[2], argv[1]) == ft_strstr(argv[2], argv[1]) ? "\033[32m OK \033[0m" : "\033[31m FAIL \033[0m"));
			printf("Test \'\033[36m%s\033[0m\' == \'\033[36m%s\033[0m\': strcmp > \033[33m%d\033[0m VS \033[33m%d\033[0m < ft_strcmp => %s\n", argv[1], argv[2], strcmp(argv[2], argv[1]), ft_strcmp(argv[2], argv[1]), (strcmp(argv[2], argv[1]) == ft_strcmp(argv[2], argv[1]) ? "\033[32m OK \033[0m" : "\033[31m FAIL \033[0m"));
			i = 0;
			while (argv[1][i])
			{
				str[i] = argv[1][i];
				str2[i] = argv[1][i];
				i++;
			}
			str[i] = '\0';
			str2[i] = '\0';
			res3 = strcat(str, argv[2]);
			res4 = strcat(str2, argv[2]);
			printf("Test \'\033[36m%s\033[0m\' + \'\033[36m%s\033[0m\': strcat > \033[33m%s\033[0m VS \033[33m%s\033[0m < ft_strcat => %s\n", argv[1], argv[2], res3, res4, ( strcmp(res3, res4) == 0 ? "\033[32m OK \033[0m" : "\033[31m FAIL \033[0m"));
		}
	}
	else if (argc == 4)
	{
		printf("Test \'\033[36m%s\033[0m\' + \033[36m%s\033[0m char from \'\033[36m%d\033[0m\': strncmp > \033[33m%d\033[0m VS \033[33m%d\033[0m < ft_strncmp => %s\n", argv[1], argv[2], atoi(argv[3]), strncmp(argv[1], argv[2], atoi(argv[3])), strncmp(argv[1], argv[2], atoi(argv[3])), (strncmp(argv[1], argv[2], atoi(argv[3])) == strncmp(argv[1], argv[2], atoi(argv[3])) ? "\033[32m OK \033[0m" : "\033[31m FAIL \033[0m"));
		i = 0;
		while (argv[1][i])
		{
			str[i] = argv[1][i];
			str2[i] = argv[1][i];
			i++;
		}
		str[i] = '\0';
		str2[i] = '\0';
		res3 = strncat(str, argv[2], atoi(argv[3]));
		res4 = ft_strncat(str2, argv[2], atoi(argv[3]));
		printf("Test \'\033[36m%s\033[0m\' + \033[36m%d\033[0m char from \'\033[36m%s\033[0m\': strncat > \033[33m%s\033[0m VS \033[33m%s\033[0m < ft_strncat => %s\n", str, atoi(argv[3]), argv[2], res3, res4, (strcmp(res3, res4) == 0 ? "\033[32m OK \033[0m" : "\033[31m FAIL \033[0m"));
	}
}
