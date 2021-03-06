#include <iostream>
using namespace std;
int fibonacci(int);
void search(int);
int i = 0, terms;

int main()
{
   /*program for fibonacci series by recursion && finding a number entered by a user, is in fibonacci series or not*/

   cout << "How many terms of fibonacci series you want to print ";
   
   cin >> terms;
   cout << "The '" << terms << "' terms of Fibonnaci Series: ";

  
   while (i < terms)
   {
      cout << fibonacci(i) << " "; // calling a function
      i++;
   }

   cout << endl
        << "Enter the number you want to search in this series ";
   int key;
   cin >> key;
   search(key);

   
   return 0;
}

int fibonacci(int num)
{
   //base cases
   if ((num == 0) || (num == 1))
   {
      return (num);
   }
   else
   {
      return (fibonacci(num - 1) + fibonacci(num - 2));//recursively calling a function
   }
}

void search(int key)
{
for (i = 0; i < terms; i++)
   {
      if (key == fibonacci(i)) //found a match
      {

         cout <<endl<< "Congratulations!\nThe entered number '"<<key<<"' is in the Fibonaci Series at index number, '"<<i+1<<"'";
         break;
      }
 }
 if (i == terms) // loop has completed all iterations
      {
         cout <<endl<< "Sorry\nThe number you are searching("<<key<<") is nowhere in the Fibonaci Series"<<endl;
      }
}
