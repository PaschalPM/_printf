#include "main.h"

/**
 * u_parser_h - u_parser helper function
 * @num: unsigned number
 * @pv: place_value
 * @buf: character buffer
 *
 * Return: void
 */
void u_parser_h(unsigned int num, unsigned int pv, char *buf)
{
	unsigned int digit;

	if (pv <= 0)
		return;

	digit = num / pv;
	*buf = 48 + digit;

	u_parser_h(num - (digit * pv), pv / 10, (buf + 1));
}
