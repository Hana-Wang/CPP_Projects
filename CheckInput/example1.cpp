//-------------
//Task: Prompt user to input 'Y/N'
//     The user's input value is assigned to variable 'answer'
//Requirements: Filter the user's input
//-------------
#include<iostream>

int main()
{
   char answer;
   std::cout<<"Do you want to format your disks? [Y/N]" <<"\n";
   std::cin>>answer;

   switch (answer)
   {
     case 'Y':
     case 'y':
         std::cout<<"Formatting the disks warning!"<<"\n";
         break;

     case 'N':
     case 'n':
         std::cout<<"No Formatting the disks!"<<"\n";
         break;
     //any other input cases
     default:
         std::cout<<"Your input is not correct!"<<"\n";
         break;
    }

   // ignore '\n' if the cin stream has '\n' within 50 number of characters
   std::cin.ignore(50,'\n');
   std::cout<<"input any character to exit the program"<<"\n";
   std::cin.get();

   return 0;
}
