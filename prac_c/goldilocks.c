#include <stdio.h>

int main(int argc, char* argv[]){
   // These variables will keep track of the weight and temps
   int g_weight = 0, g_temp = 0;
   int c_weight = 0, p_temp = 0;
   int seatNum = 1;

   scanf("%d %d", &g_weight, &g_temp);

   while((scanf("%d %d", &c_weight, &p_temp) != EOF)){
      if((g_weight <= c_weight) && (g_temp >= p_temp)){
         printf("%d ", seatNum);
      }
      seatNum++;
   }
   puts("");
   return 0;
}
