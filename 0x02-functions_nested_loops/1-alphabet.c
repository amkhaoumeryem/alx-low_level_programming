#include "main.h"


	/**
	 * print_alphabet - print all alphabet in lowercase
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}




=====================================

1-main.c CODE


#include "main.h"


	/**
	 * main - check the code
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    print_alphabet();
	    return (0);
	}



=====================================


2-print_alphabet_x10.c CODE



#include "main.h"


	/**
	 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	 * followed by a new line
	 */
	void print_alphabet_x10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}

