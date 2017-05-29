#include "DrawObject.h"
#include <Windows.h>

void DrawObject :: Initialize()
{
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdoutのコンソールスクリーンバッファ情報をcsbiに取得
	GetConsoleScreenBufferInfo(hStdout, &csbi);
}

void DrawObject::Draw()
{
	return;
}