//-------------
//Task: Change the temperature unit
//      Prompt to user to input '**.* C' or '**.* F'
//Example: If input 34.2C, then changing it to 90.32F
//         If input 90.32F, then changing it to 34.2C
//-------------
#include<iostream>

int main()
{
   // Change Celsius 'A' to Fahrenheit 'B' using the formula
   // B = A * 9.0/5.0 + 32
   // A = (B -32)*5.0/9.0
   // using const similar to #define const
   const unsigned short ADD_SUBTRACT = 32;
   const double RATIO = 9.0/5.0;

   double tempIn, tempOut;
   // To use type '.C' '.F' to distinguish Celsius and Fahrenheit
   char typeIn, typeOut;

   std::cout<<"Please input a temprature in the format [**.* C] or [**.* F]";
   // if input '32.4 C', then tempIn=32, typeIn=C
   std::cin >> tempIn >> typeIn;

   // it is necessary to do the checking of the validity of the input
   // in C++, 'cin' object have several memeber functions to check the work of cin
   // eof(); return true, if it is the end of the input
   // fail(); return true, if cin does not work
   // bad(); return true, if cin does not work because no enough memory etc.
   // good(); return true, if the above case not happen


   // avoiding '\n' within 100 characters
   // clear the cin stream buffer!!
   std::cin.ignore(100, '\n');
   std::cout<<"\n";

   //Filter the inputs from user
   switch (typeIn)
   {
     case 'C':
     case 'c':
           tempOut = tempIn * RATIO + ADD_SUBTRACT;
           typeOut = 'F';
           typeIn = 'C';
           break;

     case 'F':
     case 'f':
           tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
           typeOut = 'C';
           typeIn = 'F';
           break;

     default:
          typeOut = 'E'; // error
          break;
     }

   if(typeOut != 'E')
   {
      std::cout<<tempIn<<typeIn<<"="
               <<tempOut<<typeOut<<"\n\n";
   }
   else
   {
      std::cout<<"The input is wrong!"<<"\n\n";
   }
   // waiting for the user's inputs to terminate the program
   std::cout<<"Please input any character to terminate the program!" <<"\n";
   std::cin.get();

   return 0;

}
