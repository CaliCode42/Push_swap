/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_isprint.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tcali <tcali@student.42.fr>				+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/11/08 13:27:02 by tcali			 #+#	#+#			 */
/*   Updated: 2024/11/08 13:27:02 by tcali			###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
