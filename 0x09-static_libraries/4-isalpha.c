#include "main.h"
/**
  *_isalpha - Write a function that checks for alphabetic character.
  *@c: character to be cheched
  *Return: 1 if c is a lettre, lowercase or uppercase return 0 otherwise
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
