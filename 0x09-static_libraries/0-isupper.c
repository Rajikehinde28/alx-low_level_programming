#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

