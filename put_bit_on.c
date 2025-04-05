/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_bit_on.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-jimenez <sergio-jimenez@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:18:12 by sergio-jime       #+#    #+#             */
/*   Updated: 2025/04/05 11:49:13 by sergio-jime      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Turns on (sets to 1) a specific bit in a 16-bit number.
 * 
 * This function creates a bitmask to activate the bit at the given position.
 * If the position is out of range (≥16), the original number is returned unchanged.
 * 
 * @param bytes Number to modify (unsigned short, 16 bits).
 * @param position Bit position to activate (0-15).
 * @return unsigned short Original number with the bit at `position` set to 1.
 */

#include <unistd.h>
#include <stdio.h>

unsigned short	put_bit_on(unsigned short bytes, unsigned int position)
{
	unsigned int	bitmask;
	unsigned short	result;

	if (position >= 16)
		return (bytes);
	bitmask = 1 << position;
	result = bytes | bitmask;
	return (result);
}

int main(void)
{
	unsigned short n1;
	unsigned short n2;

	n1 = 16;						//	0000 0000 0001 0000
	printf("%u original n1\n", n1);								// print "16"
	printf("after put bit 8 on -> %u\n", put_bit_on(n1, 8));	// print "272"
	n2 = 288;						//	0000 0001 0010 0000
	printf("%u original n2\n", n2);								// print "288"
	printf("after put bit 12 on -> %u\n", put_bit_on(n2, 12));	// print "4384"
	return (0);
}