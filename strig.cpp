#include "Reversi.h"
#include <iostream>
#include <string>
#include<locale>

using namespace std;

/*
	コンソール色変更参考
	http://www.kumei.ne.jp/c_lang/intro/no_58.htm
*/

wstring& WStringNumberToAll(wstring& str)
{
	wstring :: iterator ite = str.begin();
	wstring::iterator itEnd = str.end();

	while (ite != itEnd) {

		/*
		'a～z'なら'A～Z'に変換する
		*/
		if ((L'0' <= *ite) && (L'9' >= *ite)) {
			*ite += (L'０' - L'0');
		}

		// 次の文字へ
		ite++;
	}

	// 正常終了
	return(str);
}

int main()
{
	Reversi reversi;

	reversi.Run();

	auto DispLocale = []() {
		string locstr = std::locale().c_str();
		if (locstr == "C") {
			locstr += "（初期値です）";
		}
		cout << "現在のロケールは、" << locstr << endl << endl;
	};

	DispLocale();
	locale::global(locale("japanese"));

	wstring a = L"0" + (L"0");
	wstring b = WStringNumberToAll(a);
	wcout << b << endl;
	return 0;
}

//http://tech2assist.web.fc2.com/wabisabi/cpp/cpp014.html
