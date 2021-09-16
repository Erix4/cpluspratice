#include <iostream>
using namespace std;

static short int i;

void func(void);

/* This program shows the difference between
   * signed and unsigned integers.
*/
int main() {
   short unsigned int j;  // an unsigned short integer
   //
   j = 15;
   //
   i = j;
   short int n = -5;
   //
   cout << "i starts as " << i << "\n";
   //
   while(n++){
    func();
    cout << "i to " << i << "\n";
   }
   //
   cout << i << ", " << j;

   return 0;
}

void func (void ){
    i++;
}