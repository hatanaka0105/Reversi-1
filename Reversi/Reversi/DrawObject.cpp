#include "DrawObject.h"
#include <Windows.h>

void DrawObject :: Initialize()
{
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdout�̃R���\�[���X�N���[���o�b�t�@����csbi�Ɏ擾
	GetConsoleScreenBufferInfo(hStdout, &csbi);
}

void DrawObject::Draw()
{
	return;
}