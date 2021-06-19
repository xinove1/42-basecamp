/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthomas- <nthomas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:24:01 by nthomas-          #+#    #+#             */
/*   Updated: 2021/06/12 18:26:08 by nthomas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_size(const char *c);
int	get_int(char c);
int	get_decimal_place(int n);
void	get_only_numbers(const char *c, char *cc);

int	ft_atoi(const char *str)
{
	int	size;
	char	only_numbers[get_size(str) + 1];
	int	number;
	int	i;
	int	flag;

	get_only_numbers(str, only_numbers);
	size = get_size(only_numbers);
	number = 0;
	flag = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||( str[i] >= 'A' && str[i] <= 'Z'  )||( str[i] >= '0' && str[i] <= '9' ))
			break;
		else if (str[i] == '-' )
		{
			flag = 1;
			break;
		}
		i++;
	}
	
	i = 0;
	while (only_numbers[i])
	{
		number += get_int(only_numbers[i]) * get_decimal_place(size-i);
		i++;
	}
	
	if (flag == 1)
	{
		number *= -1;
	}
	else if (flag == 2)
	{
		number *= 1;
	}

	return(number);
}

int	get_decimal_place(int n)
{
	int	decimal;
	int	i;
	
	i = 10 - n;
	decimal = 1000000000;
	while(i > 0)
	{
		decimal = decimal / 10;
		i--;
	}
	return (decimal);
}

void	get_only_numbers(const char *c, char *cc)
{
	int	i;
	int	icc;
	
	icc = 0;
	i = 0;
	while (c[i] != '\0' )
	{
		// parar de adicionar numeros a partir de caracter especial, desconsiderar espapaços no começo da string
		if ((c[i] >= '0' && c[i] <= '9') || (c[i] >= 'a' && c[i] <= 'z') || ( c[i] >= 'A' && c[i] <= 'Z' ) )
		{
			cc[icc] = c[i];
			icc++;
		}
		i++;
	}
	cc[icc] = '\0';
}

int	get_int(char c)
{
	// subtrair do codigo ascii para chegar no valor
	if (c == '0') return (0);
	else if (c == '1') return (1);
	else if (c == '2') return (2);
	else if (c == '3') return (3);
	else if (c == '4') return (4);
	else if (c == '5') return (5);
	else if (c == '6') return (6);
	else if (c == '7') return (7);
	else if (c == '8') return (8);
	else if (c == '9')return (9);
	else if (c == 'a' || c == 'A') return (10);
	else if (c == 'b' || c == 'B') return (11);
	else if (c == 'c' || c == 'C') return (12);
	else if (c == 'd' || c == 'D') return (13);
	else if (c == 'e' || c == 'E') return (14);
	else if (c == 'f' || c == 'F') return (15);
	else if (c == 'g' || c == 'G') return (16);
	else if (c == 'h' || c == 'H') return (17);
	else if (c == 'i' || c == 'I') return (18);
	else if (c == 'j' || c == 'J') return (19);
	else if (c == 'k' || c == 'K') return (20);
	else if (c == 'l' || c == 'L') return (21);
	else if (c == 'm' || c == 'M') return (22);
	else if (c == 'n' || c == 'N') return (23);
	else if (c == 'o' || c == 'O') return (24);
	else if (c == 'p' || c == 'P') return (25);
	else if (c == 'q' || c == 'Q') return (26);
	else if (c == 'r' || c == 'R') return (27);
	else if (c == 's' || c == 'S') return (28);
	else if (c == 't' || c == 'T') return (29);
	else if (c == 'u' || c == 'U') return (30);
	else if (c == 'v' || c == 'V') return (31);
	else if (c == 'w' || c == 'W') return (32);
	else if (c == 'x' || c == 'X') return (33);
	else if (c == 'y' || c == 'Y') return (34);
	else return (35);
}

int	get_size(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
