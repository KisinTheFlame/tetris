#include "Block.h"

bool Block::is_droppable(Panel panel) {
	// todo
	// ��������һ��λ��Ȼ���ж�������Ƿ�ᳬ���ײ��������Ѵ��ڵķ����ص���

	// �жϳ����ײ�������shape[3]�ز�ȫΪfalse�����ʡ�
	if (this->y + 3 == BD_HEIGHT - 1) {
		return false;
	}

	// �ж����Ѵ��ڵķ����ص���
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (this->shape[i][j] && panel.boardBlocked[i][j + 1]) {
				return false;
			}
		}
	}

	return true;
}