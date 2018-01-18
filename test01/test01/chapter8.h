#ifndef test01_chapter8_h
#define test01_chapter8_h
#endif

#include <iostream>

using namespace std;
void pause(void)
{
	cout << "按任意键继续...";
	cin.clear();
	cin.sync();
	cin.get();
};


istream& func81(istream &is) {
	string mm;
	while (is >> mm)
	{
		if (mm == "q")
		{
			break;
		}
		cout << mm << endl;
	}
	is.clear();
	return is;

}