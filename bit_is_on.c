/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_is_on.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:24:28 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/04/05 11:05:42 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if a specific bit is active (1) in a 16-bit number.
 * 
 * This function applies a bitmask to check the state of the bit at the given position.
 * The input number must be a 16-bit value (0-65535).
 * 
 * @param bytes Number to analyze (unsigned short, 16 bits).
 * @param position Bit position to check (valid range: 0-15).
 * @return true Bit at `position` is 1.
 * @return false Bit at `position` is 0 or `position` is out of range.
 */

#include <unistd.h>
#include <stdbool.h>

bool	bit_is_on(unsigned short bytes, unsigned int position)
{
	unsigned int	bitmask;

	if (position >= 16)
		return (false);
	bitmask = 1 << position;
	if (bytes & bitmask)
		return (true);
	return (false);
}

int main(void)
{
	unsigned short	n1;
	unsigned short	n2;

	n1 = 255;	//	0000 0000 1111 1111 binary
	//				---- ---X ---- ---- false bit 8 is 0
	if (bit_is_on(n1, 8))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);
	n2 = 32768;	//	1000 0000 0000 0000 binary
	//				X--- ---- ---- ---- true bit 15 is 1
	if(bit_is_on(n2, 15))
		write(1, "true\n", 5);
	else
		write(1, "false\n", 6);
	return (0);
}