#include "Reversi.h"
#include<locale>

using namespace std;

/*
�R���\�[���F�ύX�Q�l
http://www.kumei.ne.jp/c_lang/intro/no_58.htm
*/

int main()
{
	Reversi reversi;

	//���C�h�^�őS�p������\���ł���悤�ɐݒ�
	locale::global(locale("japanese"));

	reversi.Run();

	return 0;
}

//http://tech2assist.web.fc2.com/wabisabi/cpp/cpp014.html
//http://inemaru.hatenablog.com/entry/2015/09/23/002412
