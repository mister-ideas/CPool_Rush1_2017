/*
** EPITECH PROJECT, 2017
** Day06
** File description:
** Rush01
*/

void drawline(int i, int x, int y)
{
	if ((i == 1 || i == y) && y > 1)
		my_putchar('A');
	else
		my_putchar('B');
	for (int j = 1; j <= (x - 2); j += 1) {
		if (i == 1 || i == y)
			my_putchar('B');
		else
			my_putchar(' ');
	}
	if ((i == 1 || i == y) && y > 1)
		my_putchar('C');
	else
		my_putchar('B');
}

void rush(int x, int y)
{
	if (x <= 0 || y <= 0) {
		write(1, "Invalid size\n", 13);
		x = 0;
		y = 0;
	}
	for (int i = 1; i <= y; i += 1) {
		if (x > 1)
			drawline(i, x, y);
		else
			my_putchar('B');
		my_putchar('\n');
	}
}
