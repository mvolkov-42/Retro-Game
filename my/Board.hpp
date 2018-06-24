/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 15:33:16 by mvolkov           #+#    #+#             */
/*   Updated: 2018/06/18 15:33:16 by mvolkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H
# include <iostream>
# include <cstdlib>
# include <ncurses.h>
# include <unistd.h>
# include "Weapon.hpp"
# include "Player.hpp"
# include "Enemies.hpp"
# include <cstdint>
# include <string>
# include <curses.h>
# include <sys/ioctl.h>

class Board {

public:

	Board(void);

	~Board(void);

	void run();

	int		init_status;

	bool	game_over;
private:
	WINDOW *	main_win;
	WINDOW *	game_win;
};

#endif
