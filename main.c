
 #include <stdio.h>
 #include <unistd.h>
 #include <string.h>

#include "libft.h"

 int main ()
 {
	printf("%zu\n", ft_strlcat(NULL, "hello",0));
	printf("%zu\n", strlcat(NULL, "hello",0));
 }