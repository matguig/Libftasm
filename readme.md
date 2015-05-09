## Compile : ##
	- make
## Compile && Test : ##
	- make test
## Ordinary make commands : ##
	- make re
	- make clean
	- make fclean

## functions : ##

	- size_tft_strlen(const char *s);
	- intft_isalpha(int t);
	- intft_isdigit(int c);
	- intft_isalnum(int c);
	- intft_i sprint(int c);
	- intft_isascii(int c);
	- char*ft_strdup(const char *str);
	- voidft_bzero(void *s, size_t n);
	- void*ft_memset(void *s, int c, size_t n);
	- char*ft_memcpy(void *st1, const void *st2, size_ t n);
	- char*ft_strcpy(char *s1, const char *s2);
	- intft_puts(cons t char *s);
	- voidft_cat(unsigned int fd);
	- intft_toupper(int lt);
	- intft_tolower(int lt);
	- char*ft_strcat(char *s1, const char *s2);
	- intft_isupper(int c);
	- intft_islower(int c);

## Where is this test code ? ##

	- test/main.c
		Call each part
	- test/tests_is.c
		* ft_isalpha
		* ft_isalnum
		* ft_isdigit
		* ft_isprint
		* ft_isascii
	- test/tests_str.c
		* ft_strdup
		* ft_strcat
		* ft_strcpy
	- test/tests_various.c
		* ft_puts
		* ft_strlen
		* ft_cat
	- test/tests_bonus.c
		* ft_isupper
		* ft_islower
		* ft_pow
		* ft_putstr_fd
		* ft_strnew
	- test/tests_mem.c
		* ft_memcpy
		* ft_memset
		* ft_bzero
	- test/tests_to.c
		* ft_toupper
		* ft_tolower
