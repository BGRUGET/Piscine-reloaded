/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 22:15:56 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 00:39:55 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(int file)
{
	char buff;

	while (read(file, &buff, 1) != 0)
		write(1, &buff, 1);
}

int		main(int ac, char **av)
{
	int file;

	if (ac == 1)
		write(1, "File name missing.\n", 19);
	if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	if (ac == 2)
	{
		file = open(av[1], O_RDONLY);
		ft_display(file);
		close(file);
	}
	return (0);
}
