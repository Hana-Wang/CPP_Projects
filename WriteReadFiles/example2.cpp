//---------
// Task: Read and write text in the file 'test.txt' using
//       the three open_mode 'ios::in', 'ios::out', 'ios::app'
//-------

#include<fstream>
#include<iostream>

using namespace std;

int main()
{
  //in=0x01,out=0x02,ate=0x04,app=0x08,trunc=0x10,binary=0x20
  // 0x1==1, 0x2==10, 0x4==100, 0x8==1000, 0x10==1010,...
  // 0x1 | 0x2 == 11; 0x1 or 0x2
  fstream fp("test.txt", ios::in | ios::out | ios::app);
  if(!fp)
  {
    cerr << "Open file fail!" << endl;
    return 0;
  }
  //fp.tellg(ios::beg);
  fp<<"ILoveProgramming!" << endl;

  static char str[10];

  // make the file pointer pointing the beginning of the file
  // ios::end is the ending of the file
  fp.seekg(ios::beg);
  fp >> str;
  cout << str <<endl;

  fp.close();

  return 0;
}
