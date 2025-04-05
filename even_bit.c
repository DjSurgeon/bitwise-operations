/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even_bit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:51:48 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/04/05 13:27:58 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a 16-bit number is even by examining its least significant
 * bit (LSB).
 * 
 * A number is even if its LSB (bit 0) is 0. This function uses a bitwise AND
 * to isolate the LSB and determine parity.
 * 
 * @param bytes Number to check (unsigned short, 16 bits).
 * @return true Number is even.
 * @return false Number is odd.
 */

#include <unistd.h>
#include <stdbool.h>

bool	is_even(unsigned short bytes)
{
	if((bytes & 1) == 0)
		return (true);
	return (false);
}

int main(void)
{
	unsigned short n1;
	unsigned short n2;

	n1 = 10;	//	0000 0000 0010 1010
	//				---- ---- ---- ---X true is even
	if(is_even(n1))
		write(1, "is even\n", 8);
	else
		write(1, "is odd\n", 7);
	n2 = 111;	//	0000 0000 0110 1111
	//				---- ---- ---- ---X false is odd
	if(is_even(n2))
		write(1, "is even\n", 8);
	else
		write(1, "is odd\n", 7);
	return (0);
}