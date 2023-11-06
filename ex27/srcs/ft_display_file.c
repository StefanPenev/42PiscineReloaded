#include "ft.h"
#define BUF_SIZE 4096

void ft_putstr(char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
}

int			main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc >= 3)
		ft_putstr("Too many arguments.\n");
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
        {
            ft_putstr("Cannot read file.\n");
            return (1);
        }
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			write(1, buf, ret);
		}
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
