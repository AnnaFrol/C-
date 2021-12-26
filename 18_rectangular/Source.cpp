#include <iostream>
#include <fstream>
using namespace std;
class CRectagleClass {
private:
	int dotx;
	int doty;
	int vertikal;
	int gorizontal;
public:
	CRectagleClass(int tochkax,int tochkay, int storona1,int storona2)
	{
		dotx = tochkax;
		doty = tochkay;
		if (storona1 < 0)
		{
			dotx += storona1;
			gorizontal = abs(storona1);
		}
		else
		{
			gorizontal = storona1;
		}
		if (storona2 < 0)
		{
			doty += storona2;
			vertikal = abs(storona2);
		}
		else
		{
			vertikal = storona2;
		}
	

	}
	bool check(CRectagleClass two)
	{
		bool result = false;
		for (int tmpx = two.dotx; tmpx <= two.dotx+two.gorizontal;tmpx++)
		{
			if (!result)
			{
				if ((tmpx >= dotx) and (tmpx <= (dotx + gorizontal)))
				{
					for (int tmpy = two.doty; tmpy <= two.doty + two.vertikal;tmpy++)
					{
						if ((tmpy >= doty) and (tmpy <= (doty + vertikal)))
						{
							result = true;
						}
					}
				}
			}
		}
		 return result;
	}

	void show()
	{
		cout << dotx << doty << vertikal << gorizontal <<endl;
	}
};


int main()
{
	ifstream file; 
	file.open("file.txt");
	int x1, y1, gor1, ver1;
	int x2, y2, gor2, ver2;
	file >> x1 >> y1 >> gor1 >> ver1 >> x2 >> y2 >> gor2 >> ver2;
	CRectagleClass one (x1,y1,gor1,ver1);
	CRectagleClass two (x2,y2,gor2,ver2);
	std::cout <<"RESULT2 " << one.check(two) << std::endl;
	std::cout << "RESULT1 " << two.check(one) << std::endl;
	file.close();
};