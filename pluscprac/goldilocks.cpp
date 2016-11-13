/* Program: Goldilock's Seat Finder
 *
 *
 *
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
   int g_weight = 0, g_temp = 0, cNum = 1;
   int c_weight = 0, p_temp = 0;

   // Scan goldilock's weight and max porridge temp
   cin >> g_weight >> g_temp;

   while((scanf("%d %d", &c_weight, &p_temp) != EOF)) {
      if((g_weight <= c_weight) && (g_temp >= p_temp)) {
         cout << cNum << " ";
      }
      cNum++;
   }


   cout << "\n";
   return 0;
}
