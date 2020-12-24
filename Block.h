#pragma once
#include "Panel.h"

#ifndef _BLOCK_H_
#define _BLOCK_H_

class Block {
public:
	bool is_droppable(Panel);

private:
	/**
	 * x、y分别表示shape[0][0]的左上角在board中的坐标。
	 */
	int x, y;
	/**
	 * true表示方块占用了这一格。
	 * 约定：第一维作为行而第二维作为列；shape[0][0]表示左上角而shape[3][3]表示右下角。
	 * 约定：shape[3]必不全为false。
	 */
	bool shape[4][4];
};

#endif