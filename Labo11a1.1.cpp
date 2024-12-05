#include <iostream>

using namespace std;

int main()
{
    int t1[10] = {0};
	int t2[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int t3[10];
	int dix = 0;

	for (int i = 0; i < 10; i++)
	{
		dix += 10;
		t3[i] = dix;
	}
	cout << t1[0] << " " << t2[0] << " " << t3[0] << endl;
	cout << t1[1] << " " << t2[1] << " " << t3[1] << endl;
	cout << t1[2] << " " << t2[2] << " " << t3[2] << endl;
	cout << t1[3] << " " << t2[3] << " " << t3[3] << endl;
	cout << t1[4] << " " << t2[4] << " " << t3[4] << endl;
	cout << t1[5] << " " << t2[5] << " " << t3[5] << endl;
	cout << t1[6] << " " << t2[6] << " " << t3[6] << endl;
	cout << t1[7] << " " << t2[7] << " " << t3[7] << endl;
	cout << t1[8] << " " << t2[8] << " " << t3[8] << endl;
	cout << t1[9] << " " << t2[9] << " " << t3[9] << endl;
}