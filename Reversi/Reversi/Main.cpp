#include "Reversi.h"
#include<locale>

using namespace std;

/*
コンソール色変更参考
http://www.kumei.ne.jp/c_lang/intro/no_58.htm
*/

int main()
{
	Reversi reversi;

	//ワイド型で全角文字を表示できるように設定
	locale::global(locale("japanese"));

	reversi.Run();

	return 0;
}

//http://tech2assist.web.fc2.com/wabisabi/cpp/cpp014.html
//http://inemaru.hatenablog.com/entry/2015/09/23/002412
