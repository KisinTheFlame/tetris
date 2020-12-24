#include "Block.h"

bool Block::is_droppable(Panel panel) {
	// todo
	// 假设下落一单位，然后判断下落后是否会超过底部或者与已存在的方块重叠。

	// 判断超过底部，利用shape[3]必不全为false的性质。
	if (this->y + 3 == BD_HEIGHT - 1) {
		return false;
	}

	// 判断与已存在的方块重叠。
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (this->shape[i][j] && panel.boardBlocked[i][j + 1]) {
				return false;
			}
		}
	}

	return true;
}