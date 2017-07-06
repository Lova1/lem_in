#ifndef LEM_IN_LEM_IN_H
#define LEM_IN_LEM_IN_H
# include "get_next_line.h"
# include "./ft_printf/ft_printf.h"
# include <stdlib.h>
# include "./libft/libft.h"
# include <limits.h>
# include <unistd.h>

typedef struct      s_lem
{
    uintmax_t       ants;
    int             turn;
    int             start;
    int             **adj_matrix;
    int             end;
    int             size;
    int             *visited;
    char            *input_data;
    int             found;
    int             prev_i;
    int             prev_j;
    int 			del;
}                   t_lem;

typedef struct      s_room
{
    struct s_room   *next;
    char            *name;
    uintmax_t       x;
    uintmax_t       y;
    int             end;
    int             start;
}                   t_room;

typedef struct      s_path
{
    struct s_path   *next;
    int             *path;
    int             length;
}                   t_path;

t_room          *ft_create_room(t_lem *lem);
t_room          *ft_append_element(t_room *head, t_lem *lem);
t_path          *ft_create_path(t_lem *lem);
t_path          *ft_append_path(t_path *head, t_lem *lem);
uintmax_t       ft_atoi_unsigned(char *str);
void            ft_make_matrix(t_room *head, t_lem *lem);
void            ft_print_adjecency_matrix(t_lem *lem);
void            ft_sort_rooms(t_room *head);
void            ft_set_start(t_room *head);
void            ft_set_end(t_room *head);
void            ft_swap_nodes_rooms(t_room *node_1, t_room *node_2);
void            ft_depth_first_search(t_lem *lem, int i, t_room *head);
void            ft_print_list(t_path *head, t_lem *lem);
void            ft_swap_nodes_path(t_path *node_1, t_path *node_2);
void            ft_sort_path(t_path *head);
void            ft_print_needed_node(t_lem *lem, t_room *head, int pos);
void            ft_clear_path(t_lem *lem);
void            ft_error();
int             ft_check_number(char *data);
int             ft_count_char(char *str, char ch);
int             ft_find_list_element(t_room *head, char *key);
int             ft_list_size(t_room *head);
int             ft_check_dupliactes(t_room *head);
int             ft_check_start_end(t_room *head);
int             ft_string_compare(char *str_1, char *str_2);
int             ft_present_path(t_lem *lem);
int 			ft_check_connection(t_lem *lem, int i, int j);
void			ft_erase_node(t_lem *lem, int i);
int 			ft_check_prev(t_lem *lem, int i);
int 			ft_check_next(t_lem *lem, int i);
void			ft_cut_nodes(t_lem *lem);
int 			ft_is_empty(t_lem *lem, int i);
void			ft_set_last_row(t_lem *lem);
void			ft_count_path(t_lem *lem);
void			ft_connection_numbers(t_lem *lem);
int 			ft_assign_last(t_lem *lem, int i);
void			ft_find_prev_node(t_lem *lem);
int 			ft_check_dupliactes_path(t_lem *lem,  t_path *head);

#endif
