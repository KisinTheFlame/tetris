#pragma once
#ifndef _PANEL_H_
#define _PANEL_H_

#define BD_HEIGHT 20
#define BD_WIDTH 12

class Panel {
public:
	Panel();
	~Panel();
	bool boardBlocked[BD_HEIGHT][BD_WIDTH];

private:
};

Panel::Panel() {
	for (int i = 0; i < BD_HEIGHT; i++) {
		for (int j = 0; j < BD_WIDTH; j++) {
			boardBlocked[i][j] = false;
		}
	}
}

Panel::~Panel() {}

#endif // !_PANEL_H_
