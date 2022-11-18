#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "structures.h"

void SubRoundKey(unsigned char * state, unsigned char * roundKey) {
	for (int i = 0; i < 16; i++) {
		state[i] ^= roundKey[i];
	}
}

int main()
{
	unsigned char * state = '8';
	unsigned char * roundKey = d;
 } 
