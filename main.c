#include <stdio.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc < 2)
		{
			printf("need 2 arg\n")	
		}
	char bset1[] = argv [1];
	char tset1[] = argv [1];
	char *set1;

	set1 = memset(bset1, '*', 2)
	printf("%s\n", set1);
	set1 =	ft_memset(tset, '*', 2);
	printf("%s\n", set1);
	
	
	return (0);
}
