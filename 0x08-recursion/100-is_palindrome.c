#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - checks if a string is a palindrome recursively
 * @s: the string to check if it's a palindrome
 * @start: the index of the first character of the string
 * @end: the index of the last character of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return (1);
    if (s[start] != s[end])
        return (0);
    return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check if it's a palindrome
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return (is_palindrome_helper(s, 0, len - 1));
}
