#include <cstring>
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
std::string rot47(std::string s)
{
    std::string s1 = "!\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    std::string s2 = "PQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~!\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNO";

    std::string ret = "";
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
        std::string retFct = rot47(str);
        std::cout << retFct << std::endl;
        std::string retFct2 = rot47(retFct);
        input=input+"\n"+retFct2;

      }
    }
    filein.close();
    std::cout <<"\n---------------------------------\n";

  }
}

int main()
{
processFile ( "inp.txt" );
return 0;
}
