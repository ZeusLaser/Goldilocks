import java.util.Scanner;

public class goldilocks {

   public static void main(String[] args) {
            
      // Variable declarations
      int g_weight = 0, g_temp = 0;
      int c_weight = 0, p_temp = 0, cNum = 1;
      Scanner scan = new Scanner(System.in);
      
      // Inputting the Goldilocks' weight and max porridge temp
      g_weight = scan.nextInt();
      g_temp = scan.nextInt();

      // This segment will process every input pair of 
      // chair weight and porridge temperature and then
      // compare it to Goldilocks' requirements. 
      while (scan.hasNextInt()) {
         c_weight = scan.nextInt();
         p_temp = scan.nextInt();
         
         if ((g_weight <= c_weight) && (g_temp >= p_temp)) 
            System.out.print(cNum + " ");
         
         cNum++;
      
      }
      
      System.out.print("\n");
   }

}
