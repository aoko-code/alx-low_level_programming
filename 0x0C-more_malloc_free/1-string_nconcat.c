#include "main.h"
/**
 *string_nconcat - concatenates new strings
 * @s1: first string
 *@s2: second string
 *@n: size allocated
 *Return: pointer to allocated memory
 *if it fails , value is 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *sout;
unsigned int is1, is2, isout, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (ls1 = 0; s1[ls1] != '\0'; ls1++)

		;


	for (ls2 = 0; s2[ls2] != '\0'; ls2++)

		;


	if (n > ls2)

		n = ls2;


	lsout = ls1 + n;


	sout = malloc(lsout + 1);


	if (sout == NULL)

		return (NULL);


	for (i = 0; i < lsout; i++)

		if (i < ls1)

			sout[i] = s1[i];

		else

			sout[i] = s2[i - ls1];


	sout[i] = '\0';


	return (sout);

}
