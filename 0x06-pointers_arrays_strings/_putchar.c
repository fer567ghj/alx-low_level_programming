#include <unistd.h>

/** 
  * _putchar 
  *write 
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
