/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <begruget@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 20:12:40 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 22:38:51 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	while (res < nb / 2 && res * res != nb)
		res++;
	if (res * res == nb)
		return (res);
	return (0);
}
