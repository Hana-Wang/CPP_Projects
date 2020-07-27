//---------
// Task: write text in the file 'test.txt',
//       write text in the file with an open_mode 'ios::app'
//       Read the file and output contents in the standard output device
//-------
#include<fstream>
#include<iostream>

using namespace std;

int main()
{

   //ofstream out; //file writing file stream object
   //out.open("test.txt");
   ofstream out("test.txt");

   if(!out)
   {
     cerr<<"Open file fail!"<<endl;
   }

   for(int i=0; i<20; i++)
   {
      out << i;  // write variable 'i' in the stream 'out'
   }
   out<<endl;  // write endl in the stream 'out'
   out.close();


   // file writing stream object with an open_mode
   ofstream out1("test.txt", ios::app);
   if(!out1)
   {
      cerr << "Open file fail!" <<endl;
      return 0;
   }

   for(int i=10; i>0; i--)
   {
      out1 << i;
   }

   out1<<endl;
   out1.close();




   ifstream in; //file reading file stream object
   in.open("test.txt");
   // ifstream in("test.txt")
   // ifstream in(char* filename, int open_mode)
   // open_mode; 'ios::in'-open a file for read, 'ios::out', 'ios::binary'
   // 'ios::app', 'ios::trunk'-delete original file contents, 'ios::nocreate'
   // 'ios::nocreate'-if file does not exist, cannot open file
   // 'ios::noreplace'-if file does exist, open file will return error.


   if(!in)
   {
       cerr << "Open file fail!" <<endl;
       return 0;
   }

   char x; //in c++, declaration of a variable can do anywhere before using

   while(in >> x) //read a character from file stream 'in' to 'x'
   {
      cout << x; //write 'x' in the standard output terminal
   }

   cout<<endl;
   in.close();


   return 0;

}
