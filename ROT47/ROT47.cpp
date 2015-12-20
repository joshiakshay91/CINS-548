#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <string>
#include <fstream>
using namespace std;
string rot47(string s)
{
	string s1 = "!\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	string s2 = "PQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~!\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNO";

	string ret = "";
	for (unsigned int i = 0; i < s.size(); i++)
	{
		if(s[i]==' '){
			ret+=' ';
		}else{
			std::size_t pos = s2.find(s[i]);
			ret += s1[pos];}
	}

	return ret;
}


void processFile(string key) //this functions stores the input from txt file
{
	cout<<"\n---------------------------------\n";
std:string input=" ";
    ifstream filein(key.c_str());
    string word_line;
    if (filein.is_open())
    {
	    {
		    while(getline(filein, word_line))
		    {
			    string str=word_line;
			    string retFct = rot47(str);
			    cout << retFct << std::endl;
			    string retFct2 = rot47(retFct);
			    input=input+"\n"+retFct2;
		    }
	    }
	    filein.close();
	    cout <<"\n---------------------------------\n";

    }
}

int main(int argc, char* argv[])
{
	if(argc<2)
	{
		cout<<"Not Enough Arguments"<<endl;
		cout<<"USAGE: <INPUT FILE>"<<endl;
		return -1;
	}
	processFile (argv[1]);
	return 0;
}
