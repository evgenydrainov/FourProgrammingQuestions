#include <stdio.h>

// Question #1: Rectangle Copy
static void CopyRect(char *BufferA, int PitchA, char *BufferB, int PitchB,
					 int FromMinX, int FromMinY, int FromMaxX, int FromMaxY,
					 int ToMinX, int ToMinY)
{
	
}

// Question #2: String Copy
static void CopyString(char* dest, const char* src) {
	while (*src) {
		*dest = *src;

		dest++;
		src++;
	}

	*dest = 0;
}

// Question #3: Flood Fill Detection
static int ContainsColor(char unsigned Pixel, char unsigned Color)
{
	
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
	
	}

	// Question #4
	{
	
	}


	return 0;
}
