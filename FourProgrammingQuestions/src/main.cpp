#include <stdio.h>

// Question #1: Rectangle Copy
static void CopyRect(char *BufferA, int PitchA, char *BufferB, int PitchB,
					 int FromMinX, int FromMinY, int FromMaxX, int FromMaxY,
					 int ToMinX, int ToMinY)
{
	
}

// Question #2: String Copy
__declspec(noinline)
static void CopyString(char* dest, const char* src) {
	while (*src) {
		*dest = *src;

		dest++;
		src++;
	}

	*dest = 0;
}

// Question #3: Flood Fill Detection
__declspec(noinline)
static int ContainsColor_1(unsigned char pixel, unsigned char color) {
	// first naive solution

	return (pixel & 0b11) == color
		|| ((pixel >> 2) & 0b11) == color
		|| ((pixel >> 4) & 0b11) == color
		|| (pixel >> 6) == color;
}

__declspec(noinline)
static int ContainsColor_2(unsigned char pixel, unsigned char color) {
	//unsigned char color_mask = (color << 2) | color;
	//color_mask = (color_mask << 4) | color_mask;

	int result = 0;

	switch (color) {
		case 0b00: {
			unsigned char zeros1 = (~pixel) & 0b01010101;
			unsigned char zeros2 = (~pixel) & 0b10101010;
			result = ((zeros2 >> 1) & zeros1) != 0;
			break;
		}
		case 0b01: {
			unsigned char color_mask = 0b01010101;
			unsigned char ones = pixel & color_mask;
			unsigned char zeros = (~pixel) & (~color_mask);
			result = ((zeros >> 1) & ones) != 0;
			break;
		}
		case 0b10: {
			unsigned char color_mask = 0b10101010;
			unsigned char ones = pixel & color_mask;
			unsigned char zeros = (~pixel) & (~color_mask);
			result = ((ones >> 1) & zeros) != 0;
			break;
		}
		case 0b11: {
			unsigned char ones1 = pixel & 0b01010101;
			unsigned char ones2 = pixel & 0b10101010;
			result = ((ones2 >> 1) & ones1) != 0;
			break;
		}
	}

	return result;
}

__declspec(noinline)
static int ContainsColor_3(unsigned char pixel, unsigned char color) {
	int result;

	unsigned char aa = (color & 0b01) ? pixel : (~pixel);
	unsigned char bb = (color & 0b10) ? pixel : (~pixel);

	unsigned char a = aa & 0b01010101;
	unsigned char b = bb & 0b10101010;
	result = ((b >> 1) & a) != 0;

	return result;
}

// Question #4: Outlining A Circle
static void Plot(int X, int Y);

static void OutlineCircle(int Cx, int Cy, int R)
{
	
}

int main(int argc, char* argv[]) {
	// Question #1
	{
	
	}

	// Question #2
	{
		printf("Question #2\n");

		const char* src = "Foo Bar Baz";
		char dest[32] = {0};

		printf("  src:  %s\n",   src);
		printf("  dest: %s\n\n", dest);

		CopyString(dest, src);

		printf("  src:  %s\n",   src);
		printf("  dest: %s\n\n", dest);
	}

	// Question #3
	{
		printf("Question #3\n");

		printf("  00000000 contains 00: %d (1)\n", ContainsColor_3(0b00000000, 0b00));
		printf("  11111001 contains 00: %d (0)\n", ContainsColor_3(0b11111001, 0b00));
		printf("  00000000 contains 01: %d (0)\n", ContainsColor_3(0b00000000, 0b01));
		printf("  00000000 contains 10: %d (0)\n", ContainsColor_3(0b00000000, 0b10));
		printf("  00000000 contains 11: %d (0)\n", ContainsColor_3(0b00000000, 0b11));
		printf("  11111111 contains 11: %d (1)\n", ContainsColor_3(0b11111111, 0b11));
		printf("  11111111 contains 00: %d (0)\n", ContainsColor_3(0b11111111, 0b00));
		printf("  11000000 contains 11: %d (1)\n", ContainsColor_3(0b11000000, 0b11));
		printf("  00111111 contains 00: %d (1)\n", ContainsColor_3(0b00111111, 0b00));
		printf("  01100000 contains 11: %d (0)\n", ContainsColor_3(0b01100000, 0b11));
		printf("  10011111 contains 00: %d (0)\n", ContainsColor_3(0b10011111, 0b00));
		printf("  00000100 contains 01: %d (1)\n", ContainsColor_3(0b00000100, 0b01));
		printf("  11110111 contains 01: %d (1)\n", ContainsColor_3(0b11110111, 0b01));
		printf("  00100000 contains 10: %d (1)\n", ContainsColor_3(0b00100000, 0b10));
		printf("  11101111 contains 10: %d (1)\n", ContainsColor_3(0b11101111, 0b10));
	}

	// Question #4
	{
	
	}

	return 0;
}
