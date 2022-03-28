// simulate EOF ^D
#include <stdio.h>

int main(int argc, char* argv[])
{
	int count_spaces = 0;
	int count_tabs = 0;
	int count_end_line = 0;

	int c;
	
	// while ((c = getchar()) != EOF)
	// {
	// 	if (c == ' ') ++count_spaces;
	// 	if (c == '\t') ++count_tabs;
	// 	if (c == '\n') ++count_end_line;
	// }
	// printf("spaces: %d, tabs: %d, end %d\n", count_spaces, count_tabs, count_end_line);

	while ((c = getchar()) != EOF)
	{
		if (c == '\t') printf("\\t");
		if (c == '\b') printf("\\b");
		if (c == '\\') printf("\\");

		if (c != '\t' || c != '\b' || c != '\\') putchar(c);
	}

	return 0;
}