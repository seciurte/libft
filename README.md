# _LIBFT_


LIBFT is a 42 project in wich we reimplement common C functions.

---
## Grade : 125 / 100
---
To install and compile the library :
```
git clone https://github.com/TheShenZen/libft.git
cd /libft && make && make clean
```
---
Most of the functions have a MAN page except :

* ```char	**ft_split(char const *s, char c)``` :  
    *```ft_split```* takes a string and a separator as arguments.  
    It returns an array of strings from the given string separated by the given separator.

* ```char	*ft_itoa(int n)``` :  
    *```ft_itoa```* takes an integer as argument.  
    It returns the given integer as a string.

* ```char	*ft_itoa_base(int n, char *base)``` :  
    *```ft_itoa_base```* takes an integer as argument.  
    It returns the given integer as a string in the given base.

All the ```ft_lst*``` functions are for manipulating linked lists :  
```
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
```
