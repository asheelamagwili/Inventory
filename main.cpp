#include <iostream>
#include "Inventory.h"

using std::cin;
using std::cout;
using std::string;

int main()
{
  char choice = 'q';
  // Initial amount of the stock: Name of stock, price, amount
  Inventory stock("Cupcake",2.99,100);

  do
  {
    cout<<"\nMENU\n====\n(S)ell item\n(Q)uit\n>";
    cin>>choice;
    // Take user input for Sell until user chooses to Quit
    if( choice == 'S' || choice == 's' )
    {
      stock.sell();
      cout<<stock<<"\n";
    }
  }while( choice != 'q' && choice != 'Q');

  return 0;
}