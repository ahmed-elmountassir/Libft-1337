/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:50:00 by ahel-mou          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/29 15:05:10 by ahouari          ###   ########.fr       */
=======
/*   Updated: 2022/05/29 14:26:39 by ahel-mou         ###   ########.fr       */
>>>>>>> db4a869956cfbe037ba39fff19270068ca675ba2
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

// linked list
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;


// trees
typedef struct s_node
{
    int        content;
    struct s_node	*left;
    struct s_node	*right;
}				t_node;


int			ft_isalpha(int c); // return 1 if c is a letter
int			ft_isdigit(int c); // return 1 if c is a digit
int			ft_isalnum(int c); // return 1 if c is a letter or a digit
int			ft_isascii(int c); // return 1 if c is an ASCII character 
int			ft_isprint(int c); // return 1 if c is a printable character
int			ft_tolower(int c); // return a lowercase letter if c is an uppercase letter
int			ft_toupper(int c); // return an uppercase letter if c is a lowercase letter
char		*ft_strchr(const char *str, int c); // return a pointer to the first occurrence of c in str
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize); 	// copy src to dst, return the number of bytes copied
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize); 	// append src to dst, return the number of bytes copied
size_t		ft_strlen(const char *str); // return the length of str
int 		ft_strcmp(const char *s1  , const char *s2); // return 0 if s1 and s2 are identical, return a negative number if s1 is before s2, return a positive number if s1 is after s2
int			ft_strncmp(const char *s1, const char *s2, size_t n); // return the difference between the first n characters of s1 and s2
char		*ft_strnstr(const char *haystack, const char *needle, size_t len); // return a pointer to the first occurrence of needle in haystack
void		*ft_memset(void *s, int c, size_t n); // set the first n bytes of s to the value c
void		*ft_memmove(void *dest, const void *src, size_t n); // copy n bytes from src to dest
void		*ft_memchr(const void *s, int c, size_t n); // return a pointer to the first occurrence of c in s
void		*ft_memcpy(void *dest, const void *src, size_t n); // copy n bytes from src to dest
int			ft_memcmp(const void *s1, const void *s2, size_t n); // return the difference between the first n bytes of s1 and s2
void		*ft_bzero(void *s, size_t n); // set the first n bytes of s to 0
char		*ft_strrchr(const char *s, int c); // return a pointer to the last occurrence of c in s
int			ft_atoi(const char *str); // return the integer value of str
void		*ft_calloc(size_t count, size_t size); // allocate memory for an array of count elements each of which has size bytes
char		*ft_strdup(const char *s1); // return a copy of the string s1
char		*ft_substr(char const *s, unsigned int start, size_t len); // return a substring of s starting at index start and of length len
char		*ft_strjoin(char const *s1, char const *s2); // return a new string which is the concatenation of s1 and s2
char		*ft_strtrim(char const *s1, char const *set); // return a new string which is a copy of s1 with the characters in set removed from the beginning and end
char		**ft_split(char const *str, char c); // return an array of strings which are the result of splitting str using the character c
void		ft_putchar_fd(char cara, int file_d); // write the character cara to the file descriptor file_d
void		ft_putstr_fd(char *str, int file_d); // write the string str to the file descriptor file_d
void		ft_putnbr_fd(int nb, int file_d); // write the number nb to the file descriptor file_d
void		ft_putendl_fd(char *str, int file_d); // write the string str to the file descriptor file_d and add a new line
char		*ft_itoa(int n); 	// return a string representation of n
char		*reverse_string(char *add_func); // return a string which is the reverse of add_func
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char)); // return a new string which is the result of applying f to each character of s
void		ft_striteri(char *s, void (*f)(unsigned int, char*)); // apply f to each character of s
t_list		*ft_lstnew(void *ele_content); // return a new t_list element
t_list		*ft_lstlast(t_list *lst); // return the last element of lst
void		ft_lstadd_front(t_list **lst, t_list *new); // add new at the beginning of lst
void		ft_lstadd_back(t_list **lst, t_list *new); // add new at the end of lst
int			ft_lstsize(t_list *lst); // return the number of elements in lst
void		ft_lstdelone(t_list *lst, void (*del)(void *)); // delete the element lst
void		ft_lstclear(t_list **lst, void (*del)(void *)); // delete all the elements of lst
void		ft_lstiter(t_list *lst, void (*f)(void *)); // apply f to each element of lst
char		*char_to_bin(char cara) ;// return a string which is the binary representation of ascii
int			bin_to_char(char *bits); // return the ASCII value of the string bits
size_t 		char_index(char *str , char c); // find the index of a char in a string
void    	free_td_arr(char **arr); // free an array of strings
void    	print_td_arr(char **arr); // print an array of strings
size_t  	td_arr_size(char **arr); // return the number of strings in an array of strings
void   		ft_free(char *str); // free a string
char   		**append_to_arr(char **arr, char *append); // append a string to an array of strings
char   		**pop_index(char **arr, int index); // remove the string at index from an array of strings
void		sort_ints_tab(int *tab); // sort an array of integers
void		sort_strings_arr(char **tab); // sort an array of strings
<<<<<<< HEAD


// -------------- trees functions --------------
t_node	*create_node(int content); // create a new node with content
void	print_tree(t_node *node); // print the tree 
void	free_tree(t_node *node); // free the tree
t_node *reverse(t_node *node); // reverse the leaves of the node

=======
void    	ft_error(char *str, char *arg); // print an error message and exit
int			*reverse_ints_tab(int *arr); // return an array of integers which is the reverse of arr
>>>>>>> db4a869956cfbe037ba39fff19270068ca675ba2
#endif
