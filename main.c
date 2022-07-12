#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char str[] = "This is a sample string";
	char str2[] = "ABCD EFGH";
	char str3[] = "AAAC";
	char str4[] = "AABA";
	char empty[40];

	
    printf("*** ft_isalpaha test ***\n");
    printf("Should give 1\n");
		printf("\tA: %d\n", ft_isalpha('A'));
		printf("\tz: %d\n", ft_isalpha('z'));
    printf("Should give 0\n");
		printf("\t?: %d\n", ft_isalpha('?'));
		printf("\t[: %d\n", ft_isalpha('['));
		printf("\t_: %d\n", ft_isalpha('_'));
		printf("\t{: %d\n", ft_isalpha('{'));

	printf("\n\n*** ft_isdigit test ***\n");
    printf("Should give 1\n");
		printf("\t1: %d\n", ft_isdigit('1'));
		printf("\t9: %d\n", ft_isdigit('9'));    
    printf("Should give 0\n");
		printf("\t/: %d\n", ft_isdigit('/'));
		printf("\t:: %d\n", ft_isdigit(':'));

    printf("\n\n*** ft_toupper ***\n");
		printf("\ta -> %c\n", ft_toupper('a'));
		printf("\tz -> %c\n", ft_toupper('z'));
		printf("\t` -> %c\n", ft_toupper('`'));
		printf("\t{ -> %c\n", ft_toupper('{'));
	
	printf("\n\n*** ft_tolower ***\n");
		printf("\tA -> %c\n", ft_tolower('A'));
		printf("\tZ -> %c\n", ft_tolower('Z'));
		printf("\t@ -> %c\n", ft_tolower('@'));
		printf("\t[ -> %c\n", ft_tolower('['));
	
	printf("\n\n*** ft_isalnum ***\n");
    printf("Should give 1\n");
		printf("\t1: %d\n", ft_isalpha('1'));
		printf("\t9: %d\n", ft_isalpha('9'));  
		printf("\ta -> %d\n", ft_isalpha('a'));
		printf("\tz -> %d\n", ft_isalpha('z'));
		printf("\tA -> %d\n", ft_isalpha('A'));
		printf("\tZ -> %d\n", ft_isalpha('Z')); 
    printf("Shoulddgive 0\n");
		printf("\t/: %d\n", ft_isalpha('/'));
		printf("\t:: %d\n", ft_isalpha(':'));
		printf("\t` -> %d\n", ft_isalpha('`'));
		printf("\t{ -> %d\n", ft_isalpha('{'));
		printf("\t@ -> %d\n", ft_isalpha('@'));
		printf("\t[ -> %d\n", ft_isalpha('['));

	printf("\n\n*** ft_isascii ***\n");
  	printf("Should give 1\n");
		printf("\t(int)0: %d\n", ft_toascii(0));
		printf("\t(int)127: %d\n", ft_toascii(127));
  	printf("Should give 0\n");
		printf("\t-1: %d\n", ft_toascii(-1));
		printf("\t(int)128: %d\n", ft_toascii(128));
  
	printf("\n\n *** ft_strchr ***\n");
		printf("Looking for characters in \"%s\"\n", str);
		printf("string after |%c| is - |%s|\n", 's', ft_strchr(str, 's'));
		printf("string after |%c| is - |%s|\n", 'a', ft_strchr(str, 'a'));
		printf("string after |%c| is - |%s|\n", 'r', ft_strchr(str, 'r'));
		printf("string after |\\0| is - |%s|\n", ft_strchr(str, '\0'));
		printf("string after |%c| is - |%s|\n", 'z', ft_strchr(str, 'z'));

	int	i;
	i = 0;
	printf("\n\n*** ft_isprint ***\n");
		while(i < 128)
			if(ft_isprint(i++) != 0)
				printf("%c ", i);
	
	printf("\n\n*** ft_strlen ***\n");
		printf("length of |%s| \n> %d words\n", str, ft_strlen(str));
		printf("length of |%s| (space)\n> %d words\n", " ", ft_strlen(" "));
		printf("length of |%s| (empty string)\n> %d words\n", "", ft_strlen(""));
	
	
	printf("\n\n *** ft_strrchr ***\n");
		printf("Looking for characters in \"%s\"\n", str);
		printf("string after |%c| is - |%s|\n", 's', ft_strrchr(str, 's'));
		printf("string after |%c| is - |%s|\n", 'a', ft_strrchr(str, 'a'));
		printf("string after |%c| is - |%s|\n", 'r', ft_strrchr(str, 'r'));
		printf("string after |%c| is - |%s|\n", 'i', ft_strrchr(str, 'i'));
		printf("string after |\\0| is - |%s|\n", ft_strrchr(str, '\0'));
		printf("string after |%c| is - |%s|\n", 'z', ft_strrchr(str, 'z'));
	
	printf("\n\n*** ft_memset ***\n");
		printf("Before memset => %s\n", str2);
		ft_memset(str2, (int)'x', 10);
		printf("After memset  => %s\n", str2);
	
	printf("\n\n *** ft_strncmp ***\n");
		printf("A & A => %d\n", ft_strncmp("A", "A", 1));
		printf("A & B => %d\n", ft_strncmp("A", "B", 1));
		printf("B & A => %d\n", ft_strncmp("B", "A", 1));
		printf("%s & %s (3) => %d\n", str3, str4, ft_strncmp(str3, str4, 3));
		printf("%s & %s (10) => %d\n", str3, str4, ft_strncmp(str3, str4, 10));
		printf("AA & AA (2) => %d\n", ft_strncmp(str3, str4, 2));
		printf("%s & AAA (10) => %d\n", str3, ft_strncmp(str3, "AAA", 10));
		printf("[] & [] => %d\n", ft_strncmp("", "", 2));
	

	printf("\n\n*** ft_strlcpy ***\n");
		printf("before => %s\n", empty);
		ft_strlcpy(empty, str, sizeof(str));
		printf("after  => %s\n\n", empty);
		printf("before => %s\n", empty);
		ft_strlcpy(empty, str2, 4);
		printf("after  => %s\n\n", empty);


	return 0;
}