#include <stdio.h>

main()
{
	int multOf3, multOf5;
	int i;
	int sumOf;

	i = 0;
	sumOf = 0;
	

	while (i < 1000) {
		i++;
		if (i%3==0 || i%5==0) {
			sumOf+=i;;
		}
		
		/* printf("%d\n", i); */
	}
	
	printf("%d\n", sumOf);
}
	
	
