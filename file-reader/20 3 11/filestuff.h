#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<conio.h>
#include<process.h>
using namespace std;

class CFileStuff{
private:
	signed int iCount;
	string szFile;
    ifstream FileToReadFrom;
	ofstream FileToWriteTo;
	vector<string>v_Store;
public:
	CFileStuff(){
		iCount = 0;
	}//nada que hacer en cpp
	~CFileStuff(){}
	void WriteToFile(void);
	void ReadFromFile(void);
	void OpenFile(void);
	void CloseFile(void);
};