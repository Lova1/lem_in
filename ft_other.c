#include "lem_in.h"

int     ft_count_char(char *str, char ch)
{
    int i;
    int nb;

    i = 0;
    nb = 0;
    while (str[i])
    {
        if (str[i] == ch)
            nb++;
        i++;
    }
    return (nb);
}

int     ft_string_compare(char *str_1, char *str_2)
{
    if (ft_strlen(str_1) == ft_strlen(str_2) && ft_strcmp(str_1, str_2) > 0)
        return (1);
    if (ft_strlen(str_1) > ft_strlen(str_2))
        return (1);
    return (0);
}

uintmax_t   ft_atoi_unsigned(char *str)
{
    uintmax_t   number;
    uintmax_t   pow;
    int         i;

    i = 0;
    pow = 1;
    number = 0;
    while (str[i])
    {
        pow *= 10;
        i++;
    }
    i = 0;
    pow /= 10;
    while (pow != 0)
    {
        number += (str[i] - '0') * pow;
        pow /= 10;
        i++;
    }
    return (number);
}