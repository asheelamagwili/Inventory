#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;
using std::endl;
  
// Inventory class: name of item, price, amount
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// When user chooses to make a sale
void Inventory::sell()
{
  // Substract one from invetory after a sale.
  if(m_in_stock > 0)
  {
    m_in_stock--;
  }

  // When no inventory is left to sell, send error.
  else
  {
    cout<<"Sorry, that item is out of stock\n"<<endl;
  }
  
}

ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}