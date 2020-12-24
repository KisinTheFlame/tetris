#pragma once
#include "Panel.h"

#ifndef _BLOCK_H_
#define _BLOCK_H_

class Block {
public:
	bool is_droppable(Panel);

private:
	/**
	 * x��y�ֱ��ʾshape[0][0]�����Ͻ���board�е����ꡣ
	 */
	int x, y;
	/**
	 * true��ʾ����ռ������һ��
	 * Լ������һά��Ϊ�ж��ڶ�ά��Ϊ�У�shape[0][0]��ʾ���ϽǶ�shape[3][3]��ʾ���½ǡ�
	 * Լ����shape[3]�ز�ȫΪfalse��
	 */
	bool shape[4][4];
};

#endif