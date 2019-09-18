#include <iostream>
#include <cmath>

int main(void)
{
  int  a = 0;
  std::cout << "Escrice un Numero entero \n";
  std::cin >> a;
  if (a%3 == 0) {
    std::cout << "El numero " << a << " puede ser divido por 3 \n";
  }
  else {
    std::cout << "El numero " << a << " NO puede ser divido por 3 \n";
  }
    
  return 0;
}
