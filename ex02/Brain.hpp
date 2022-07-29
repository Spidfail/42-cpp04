/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:10:46 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/24 17:39:19 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {

	public:
		Brain();
		~Brain();
		Brain(std::string array[100]);
		Brain(std::string const &);
		Brain(Brain const &);
		Brain	&operator=(Brain const &);
		Brain(std::string const oldIdeas[100]);

		std::string		ideas[100];
};

#endif
