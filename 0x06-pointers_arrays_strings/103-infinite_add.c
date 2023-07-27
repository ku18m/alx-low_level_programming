#include "main.h"

/**
 * _strlen - a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @s: chaine of caractere
 *
 * Return: 1 or 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _bigger - a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @a: chaine of caractere
 * @b: chaine of caractere
 *
 * Return: the bigger of a and b
 */

int _bigger(int a, int b)
{
	if (a <= b)
		return (b);
	else
		return (a);
}

/**
 * rev_string - a function that takes a pointer to an int as parameter and
 * @s: chaine of caractere
 *
 * Return: 1 or 0
 */

void rev_string(char *s)
{
	int i = 0, taille, k;
	char c;

	while (s[i] != '\0')
		i++;

	i--;
	taille = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[taille];
		s[taille] = c;
		i++;
		taille--;
	}
}


/**
  * infinite_add - print numbers chars
  * @n1: the chaine of caractere
  * @n2: the chaine of caractere
  * @r: the chaine of caractere
  * @size_r: the chaine of caractere
  * Return: 0
 **/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *big, *small, ret = '0';
	int i = 0, j = 0, taille_n1, taille_n2;

	taille_n1 = _strlen(n1), taille_n2 = _strlen(n2);
	if (taille_n1 >= taille_n2)
	{
		big = n1;
		small = n2;
	}
	else
	{
		big = n2, small = n1;
	}
	if (size_r < _bigger(taille_n1, taille_n2))
		{
		return (0);
		}
	else
	{
		rev_string(big);
		rev_string(small);
		while (big[j])
		{
			if (small[i])
			{
				r[i] = (((small[i] - '0') + (big[i] - '0') + (ret - '0')) % 10) + '0';
				ret = (((small[i] - '0') + (big[i] - '0') + (ret - '0')) / 10) + '0';
			}
			else
			{
				r[i] = (((big[i] - '0') + (ret - '0')) % 10) + '0';
				ret = (((big[i] - '0') + ret) / 10);
			}
			i++;
		}
		rev_string(r);
		rev_string(big);
		rev_string(small);
		return (r);
	}
}
