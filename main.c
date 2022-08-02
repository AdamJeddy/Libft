#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define COLOR_RED     "\x1b[31m" 
#define COLOR_GREEN   "\x1b[32m" 
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m" 
#define COLOR_MAGENTA "\x1b[35m" 
#define COLOR_CYAN    "\x1b[36m" 
#define COLOR_RESET   "\x1b[0m" 

char str[] = "This is a sample string";
char str2[15] = "ABCD EFGH";
char str2_1[15] = "ABCD EFGH";
char str3[10] = "AAAC";
char str3_1[10] = "AAAC";
char str4[10] = "AABA";
char str4_1[10] = "AABA";
char empty[40] = "\0";
char empty_1[40] = "\0";

void reset_str()
{
	strcpy(str, "This is a sample string");
	strcpy(str2, "ABCD EFGH"); 	strcpy(str2_1, "ABCD EFGH");
	strcpy(str3, "AAAC"); 		strcpy(str3_1, "AAAC");
	strcpy(str4, "AABA"); 		strcpy(str4_1, "AABA");
	int i = 0;
	while (i < 40)
		empty[i++] = '\0';
	while(i < 40)
		empty_1[i++] = '\0';
}

void ft_strlcat_test();

int main()
{

/*
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


	printf(COLOR_MAGENTA "\n\n*** ft_memset ***\n" COLOR_RESET);
		printf(COLOR_CYAN "Test string:" COLOR_RESET " '%s'\n", str);
		printf("After memset w/ 'x' 1: '%s'\n", ft_memset(str, 'x', 1));
		reset_str();
		printf("After memset w/ 'x' 23: '%s'\n", ft_memset(str, 'x', 23));
		reset_str();
		printf(COLOR_CYAN "Test string:" COLOR_RESET " '%s'\n", empty);
		printf("After memset w/ 'x' 1: '%s'\n", ft_memset(empty, 'x', 1));
		reset_str();
		printf("After memset w/ 'x' 23: '%s'\n", ft_memset(empty, 'x', 23));
		reset_str();


	printf(COLOR_MAGENTA "\n\n*** ft_bzero ***\n" COLOR_RESET);
		printf(COLOR_CYAN "Test string:" COLOR_RESET " '%s'\n", str);
		ft_bzero(str, 24);
		printf("bzero whole string: '%s'\n", str);
		reset_str();
		ft_bzero(&str[4], 1);
		printf("bzero after 4: '%s'\n", str);
		reset_str();
		ft_bzero(&str[22], 1);
		printf("bzero after 22: '%s'\n", str);
		reset_str();
		printf(COLOR_CYAN "Test string:" COLOR_RESET " '%s'\n", str2);
		ft_bzero(&str2[4], 4);
		printf("bzero after 4: '%s'\n", str2);
		reset_str();
		ft_bzero(&str2[8], 1);
		printf("bzero after 8: '%s'\n", str2);
		reset_str();


	printf(COLOR_MAGENTA "\n\n*** ft_memchr ***\n" COLOR_RESET);
		printf(COLOR_CYAN "Test string:" COLOR_RESET " '%s'\n", str);
		printf("location of '%c' within 10 positions: '%s'\n", 'a', ft_memchr(str, 'a', 10));
		printf("location of '%c' within 5 positions: '%s'\n", 'a', ft_memchr(str, 'a', 5));
		printf("location of '%c' within 4 positions: '%s'\n", 's', ft_memchr(str, 's', 4));
		printf("location of '%c' within 10 positions: '%s'\n", 'g', ft_memchr(str, 'g', 10));
		printf("location of '%c' within 24 positions: '%s'\n", 'g', ft_memchr(str, 'g', 24));

	printf(COLOR_MAGENTA "\n\n*** ft_memchr ***\n" COLOR_RESET);
		printf(COLOR_CYAN "Test string:" COLOR_RESET "\n\tdest: '%s'\n\tsrc: '%s'\n", str2, str3);
		printf("Replace 4 characters\n");
		ft_memcpy(str2, str3, 4);
		printf("dest = '%s'\n", str2);
		printf("src  = '%s'\n\n", str3);
		reset_str();
		printf("Replace 0 characters\n");
		ft_memcpy(str2, str3, 0);
		printf("dest = '%s'\n", str2);
		printf("src  = '%s'\n", str3);
		printf("---\n");
		reset_str();
		printf(COLOR_CYAN "Test string:" COLOR_RESET "\n\tdest: '%s'\n\tsrc: '%s'\n", str, empty_1);
		printf("Replace 5 characters\n");
		ft_memcpy(str, empty_1, 10);
		printf("dest = '%s'\n", str);
		printf("src  = '%s'\n", empty_1);
		printf("---\n");

	printf(COLOR_MAGENTA "\n\n*** ft_memcmp ***\n" COLOR_RESET);
		printf("'%s' == '%s' (3): %d | %d\n", "ABC", "ABC", ft_memcmp("ABC", "ABC", 3), memcmp("ABC", "ABC", 3));
		printf("'%s' == '%s' (0): %d | %d\n", "ABC", "ABC", ft_memcmp("ABC", "ABC", 0), memcmp("ABC", "ABC", 0));
		printf("'%s' == '%s' (%d): %d | %d\n", "", "", 10, ft_memcmp("", "", 10), memcmp("", "", 10));
		printf("'%s' == '%s' (%d): %d | %d\n", "A", "", 10, ft_memcmp("A", "", 10), memcmp("A", "", 10));
		printf("'%s' == '%s' (%d): %d | %d\n", "", "A", 10, ft_memcmp("", "A", 10), memcmp("", "A", 10));
		int n = 8;
		char temp1[]  = "ABCD E";
		char temp2[] = "ABCD EF";
		printf("'%s' == '%s' (%d): %d | %d\n", temp1, temp2, n, ft_memcmp(temp1, temp2, n), memcmp(temp1, temp2, n));
		printf("'%s' == '%s' (%d): %d | %d\n", temp2, temp1, n, ft_memcmp(temp2, temp1, n), memcmp(temp2, temp1, n));
		n = 4;printf("'%s' == '%s' (%d): %d | %d\n", temp1, temp2, n, ft_memcmp(temp1, temp2, n), memcmp(temp1, temp2, n));
		
	printf(COLOR_MAGENTA "\n\n*** ft_memmove ***\n" COLOR_RESET);
		printf(COLOR_CYAN "str3 before ft_memmove:" COLOR_RESET " %s\n", str3);
		ft_memmove(str3, str4, sizeof(str4));
		printf(COLOR_CYAN "str3 after ft_memmove:" COLOR_RESET " %s\n", str3);
		reset_str();

	printf(COLOR_MAGENTA "\n\n*** ft_strnstr ***\n" COLOR_RESET);
		printf("\n");
		const char *largestring = "Foo Bai Bar Baz";
		const char *smallstring = "Bar";
		char *ptr = ft_strnstr(largestring, smallstring, 16);
		ptr ? printf("\n%s\n", ptr) : printf("\nNULL\n");

	printf(COLOR_MAGENTA "\n\n*** ft_atoi ***\n" COLOR_RESET);
		printf("'   -1': %d\n", ft_atoi("   -1"));
		printf("'   --1': %d\n", ft_atoi("   --1"));
		printf("'   -0': %d\n", ft_atoi("   -0"));
		printf("'   0': %d\n", ft_atoi("   0"));
		printf("'   1234': %d\n", ft_atoi("   1234"));
		printf("'   -1234': %d\n", ft_atoi("   -1234"));
		printf("'-1234a': %d\n", ft_atoi("-1234a"));

	printf(COLOR_MAGENTA "\n\n*** ft_strdup ***\n" COLOR_RESET);
		char *v_strdup = ft_strdup(str);
		v_strdup ? printf("%s\n", v_strdup) : printf("NULL\n");
		free(v_strdup);
		v_strdup = ft_strdup("\0");
		v_strdup ? printf("%s\n", v_strdup) : printf("NULL\n");
		free(v_strdup);

	printf(COLOR_MAGENTA "\n\n*** ft_substr ***\n" COLOR_RESET);
		printf(COLOR_CYAN "Test string: " COLOR_RESET "I love you\n");
		char	*p_substr = ft_substr("I love you", 2, 8);
		printf("start 2 | len 8 -> '%s'\n", p_substr);
		free(p_substr);
		p_substr = ft_substr("I love you", 2, 0);
		printf("start 2 | len 0 -> '%s'\n", p_substr);
		free(p_substr);

	printf(COLOR_MAGENTA "\n\n*** ft_strjoin ***\n" COLOR_RESET);
		printf(COLOR_CYAN "Test string: " COLOR_RESET "%s + %s\n", str2, str3);
		char	*p_strjoin = ft_strjoin(str2, str3);
		printf("%s\n", p_strjoin);
		free(p_strjoin);

	printf(COLOR_MAGENTA "\n\n*** ft_itoa ***\n" COLOR_RESET);
		printf("%s\n", ft_itoa(-2147483648));
		printf("%s\n", ft_itoa(-10));
		printf("%s\n", ft_itoa(-1));
		printf("%s\n", ft_itoa(0));
		printf("%s\n", ft_itoa(1));
		printf("%s\n", ft_itoa(10));
		printf("%s\n", ft_itoa(100));
*/
	printf(COLOR_MAGENTA "\n\n*** ft_itoa ***\n" COLOR_RESET);

	return 0;
}


/*
void ft_strlcat_test()
{
	int test_arr[] = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100};
	int ret_size1, ret_size2 = ret_size1 = 0;
	printf("Strings with the same size\n");
	char *s1_1 = str3, 	*s2_1 = str4;
	char *s1_2 = str3_1, *s2_2 = str4_1;
	for (int i = 0; i < (sizeof(test_arr) / sizeof(int)); i++)
	{
		ret_size1 = ft_strlcat(s1_1, s2_1, test_arr[i]);
		ret_size2 = strlcat(s1_2, s2_2, test_arr[i]);
		if (strcmp(s1_1, s1_2) == 0 && strcmp(s2_1, s2_2) == 0 && ret_size1 == ret_size2)
			printf(COLOR_GREEN     "[X] "     COLOR_RESET);
		else
		{
			printf(COLOR_RED     "\n[X] Test Failed" COLOR_RESET " - Test case: " COLOR_YELLOW "%d\n" COLOR_RESET, test_arr[i]);
			if (strcmp(s1_1, s1_2) != 0)
				printf(COLOR_RED     "\tft_strlcat: %s\tstrlcat: %s\n" COLOR_RESET, s1_1, s1_2);
			else
				printf("\tft_strlcat: %s\tstrlcat: %s\n", s1_1, s1_2);
			if(strcmp(s2_1, s2_2) != 0)
				printf(COLOR_RED     "\tft_strlcat: %s\tstrlcat: %s\n" COLOR_RESET, s2_1, s2_2);
			else
				printf("\tft_strlcat: %s\tstrlcat: %s\n", s2_1, s2_2);
			if (ret_size1 != ret_size2)
				printf(COLOR_RED     "\tft_strlcat: %d\tstrlcat: %d\n" COLOR_RESET, ret_size1, ret_size2);
			else
				printf("\tft_strlcat: %d\tstrlcat: %d\n", ret_size1, ret_size2);
		}
		ret_size2 = ret_size1 = 0;
		reset_str();
	}


	printf("\n\nStrings with different sizes\n");
	s1_1 = str3, 	s2_1 = str2;
	s1_2 = str3_1, 	s2_2 = str2_1;
	for (int i = 0; i < (sizeof(test_arr) / sizeof(int)); i++)
	{
		ret_size1 = ft_strlcat(s1_1, s2_1, test_arr[i]);
		ret_size2 = strlcat(s1_2, s2_2, test_arr[i]);
		if (strcmp(s1_1, s1_2) == 0 && strcmp(s2_1, s2_2) == 0 && ret_size1 == ret_size2)
			printf(COLOR_GREEN     "[X] "     COLOR_RESET);
		else
		{
			printf(COLOR_RED     "\n[X] Test Failed" COLOR_RESET " - Test case: " COLOR_YELLOW "%d\n" COLOR_RESET, test_arr[i]);
			if (strcmp(s1_1, s1_2) != 0)
				printf(COLOR_RED     "\tft_strlcat: %s\tstrlcat: %s\n" COLOR_RESET, s1_1, s1_2);
			else
				printf("\tft_strlcat: %s\tstrlcat: %s\n", s1_1, s1_2);
			if(strcmp(s2_1, s2_2) != 0)
				printf(COLOR_RED     "\tft_strlcat: %s\tstrlcat: %s\n" COLOR_RESET, s2_1, s2_2);
			else
				printf("\tft_strlcat: %s\tstrlcat: %s\n", s2_1, s2_2);
			if (ret_size1 != ret_size2)
				printf(COLOR_RED     "\tft_strlcat: %d\tstrlcat: %d\n" COLOR_RESET, ret_size1, ret_size2);
			else
				printf("\tft_strlcat: %d\tstrlcat: %d\n", ret_size1, ret_size2);
		}
		ret_size2 = ret_size1 = 0;
		reset_str();
	}
	s1_1 = str3_1, 	s2_1 = str2_1;
	s1_2 = str3, 	s2_2 = str2;
	for (int i = 0; i < (sizeof(test_arr) / sizeof(int)); i++)
	{
		ret_size1 = ft_strlcat(s1_1, s2_1, test_arr[i]);
		ret_size2 = strlcat(s1_2, s2_2, test_arr[i]);
		if (strcmp(s1_1, s1_2) == 0 && strcmp(s2_1, s2_2) == 0 && ret_size1 == ret_size2)
			printf(COLOR_GREEN     "[X] "     COLOR_RESET);
		else
		{
			printf(COLOR_RED     "\n[X] Test Failed" COLOR_RESET " - Test case: " COLOR_YELLOW "%d\n" COLOR_RESET, test_arr[i]);
			if (strcmp(s1_1, s1_2) != 0)
				printf(COLOR_RED     "\tft_strlcat: %s\tstrlcat: %s\n" COLOR_RESET, s1_1, s1_2);
			else
				printf("\tft_strlcat: %s\tstrlcat: %s\n", s1_1, s1_2);
			if(strcmp(s2_1, s2_2) != 0)
				printf(COLOR_RED     "\tft_strlcat: %s\tstrlcat: %s\n" COLOR_RESET, s2_1, s2_2);
			else
				printf("\tft_strlcat: %s\tstrlcat: %s\n", s2_1, s2_2);
			if (ret_size1 != ret_size2)
				printf(COLOR_RED     "\tft_strlcat: %d\tstrlcat: %d\n" COLOR_RESET, ret_size1, ret_size2);
			else
				printf("\tft_strlcat: %d\tstrlcat: %d\n", ret_size1, ret_size2);
		}
		ret_size2 = ret_size1 = 0;
		reset_str();
	}

	
	printf("\n\nStrings & Empty string\n");
	s1_1 = str3, 	s2_1 = empty;
	s1_2 = str3_1, 	s2_2 = empty_1;
	for (int i = 0; i < (sizeof(test_arr) / sizeof(int)); i++)
	{
		ret_size1 = ft_strlcat(s1_1, s2_1, test_arr[i]);
		ret_size2 = strlcat(s1_2, s2_2, test_arr[i]);
		if (strcmp(s1_1, s1_2) == 0 && strcmp(s2_1, s2_2) == 0 && ret_size1 == ret_size2)
			printf(COLOR_GREEN     "[X] "     COLOR_RESET);
		else
		{
			printf(COLOR_RED     "\n[X] Test Failed" COLOR_RESET " - Test case: " COLOR_YELLOW "%d\n" COLOR_RESET, test_arr[i]);
			if (strcmp(s1_1, s1_2) != 0)
				printf(COLOR_RED     "\tft_strlcat: %s\tstrlcat: %s\n" COLOR_RESET, s1_1, s1_2);
			else
				printf("\tft_strlcat: %s\tstrlcat: %s\n", s1_1, s1_2);
			if(strcmp(s2_1, s2_2) != 0)
				printf(COLOR_RED     "\tft_strlcat: %s\tstrlcat: %s\n" COLOR_RESET, s2_1, s2_2);
			else
				printf("\tft_strlcat: %s\tstrlcat: %s\n", s2_1, s2_2);
			if (ret_size1 != ret_size2)
				printf(COLOR_RED     "\tft_strlcat: %d\tstrlcat: %d\n" COLOR_RESET, ret_size1, ret_size2);
			else
				printf("\tft_strlcat: %d\tstrlcat: %d\n", ret_size1, ret_size2);
		}
		ret_size2 = ret_size1 = 0;
		reset_str();
	}
}

*/