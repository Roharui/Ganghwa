#include <iostream>
#include "driver.hpp"

using namespace ganghwa;
using namespace std;

int main(void)
{
  try
  {
    Driver().run();
  }
  catch (exception &e)
  {
    cout << typeid(e).name() << endl;
    cerr << e.what() << endl;
  }
  return 0;
}