#include"filestuff.h"

void CFileStuff::WriteToFile(void){
	
		system("ipconfig /all >> F:/Computing/C++/20 3 17/goldfish.txt");
		
	
}
void CFileStuff::ReadFromFile(void){
	
	if(FileToReadFrom.good()){
		while(!FileToReadFrom.eof()){
			FileToReadFrom >> this->szFile;
			v_Store.push_back(szFile);
			iCount++;
			cout<<endl<<iCount<<" "<<szFile<<endl;
		}
		cout <<endl<<"File contents complete"<<endl;
		_getch();
	}
}
void CFileStuff::OpenFile(void){
	FileToReadFrom.open("F:/Computing/C++/20 3 17/goldfish.txt");
	this->ReadFromFile();
}
void CFileStuff::CloseFile(void){
	FileToReadFrom.close();
}
void main(void){
	CFileStuff MyFile;
	MyFile.OpenFile();
};