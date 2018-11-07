#include <string.h>
#include <stdio.h>
#include "./Libft/libft.h"	
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc < 2)
		{
			printf("need 2 arg\n");
			return (0);
		}
	char *s1;
	char *s2;
	char *set;
	int i;
	int lens1;

	lens1 = ft_strlen(argv[1]);


	printf("*****ft_memset*****\n");
	s1 = ft_strdup(argv[1]);
	set = memset(s1, '*', 2);
	printf("%s\n", set);

	set =	ft_memset(s1, '*', 2);
	s1 = ft_strdup(argv[1]);
	printf("%s\n", set);
	free (s1);




printf("\n\n*****ft_bzero*****\n");
	i = 0;
	s1 = ft_strdup(argv[1]);
	bzero(s1, 3);
	while(i < lens1)
	{
		printf("%c", s1[i]);
		i++;
	}
	printf ("\n");

	i = 0;
	s1 = ft_strdup(argv[1]);
	ft_bzero(s1, 3);
	while(i < lens1)
	{
		printf("%c", s1[i]);
		i++;
	}
	printf ("\n");
	free (s1);



printf("\n\n*****ft_memcpy*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = memcpy(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	
printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_memcpy(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	free (s1);
	free (s2);


/*
printf("\n\n*****ft_memccpy*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = memccpy(s2, s1, 'o',20);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	
	printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_memccpy(s2, s1, 'o',20);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	free (s1);
	free (s2);
*/


printf("\n\n*****ft_memmove*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = memmove(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	
	printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_memmove(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);
	free (s1);
	free (s2);
	


printf("\n\n*****ft_memchr*****\n");
	s1 = ft_strdup(argv[1]);
	set = memchr(s1, 'u', 20);
	printf("%s\n", s1);
	printf("%s\n", set);

	printf("\n");

	s1 = ft_strdup(argv[1]);
	set = ft_memchr(s1, 'u', 20);
	printf("%s\n", s1);
	printf("%s\n", set);



printf("\n\n*****ft_memcmp*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	i = memcmp(s1, s2, 1);
	printf ("%d\n",i);

		printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	i = ft_memcmp(s1, s2, 1);
	printf ("%d\n",i);



printf("\n\n*****ft_strcpy*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = strcpy(s2, s1);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);

		printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strcpy(s2, s1);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);


printf("\n\n*****ft_strncpy*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = strncpy(s2, s1, 2);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);

		printf("\n");
		
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strncpy(s2, s1, 2);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);



printf("\n\n*****ft_strcat*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = strcat(s2, s1);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);

		printf("\n");
		
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strcat(s2, s1);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);




printf("\n\n*****ft_strncat*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = strncat(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);

		printf("\n");
		
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	set = ft_strncat(s2, s1, 3);
	printf("%s\n", set);
	printf("%s\n", s2);
	printf("%s\n", s1);



printf("\n\n*****ft_strlcat*****\n");
	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	i = strlcat(s2, s1, 4);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", i);

	printf("\n");

	s1 = ft_strdup(argv[1]);
	s2 = ft_strdup(argv[2]);
	i = ft_strlcat(s2, s1, 4);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", i);



























	return (0);
}