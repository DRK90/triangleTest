#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("numsToText.txt");
	for(int i = 0; i < 10000; i++)
	{
		int x = rand()%10;
		fout<<x<<" ";
	}
	fout.close();
	return 0;
}
