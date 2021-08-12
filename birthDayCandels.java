import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class birthDayCandels {
    public static void main (String [] args) {
        Scanner scanner = new Scanner (System.in);                           // create a scanner object

        System.out.println ("size = ");
        int size = scanner.nextInt();                                       // get the size

        ArrayList <Integer> candels = new ArrayList <Integer> ();           // create an array list
        
        for (int i = 0; i < size; i++) {
            System.out.println("height  = ");                               
            int a = scanner.nextInt();                                      // get elements to arraylist
            candels.add (a);
        }
        Collections.sort(candels);                                          // sort list

        //System.out.println (candels.get (size-1));
        int count = 1;
        for (int i = 0; i < size-1; i++) {
            if ((candels.get (size-1) == candels.get (i))) {                // count number of max values
                count++;

            }
        }
        System.out.println (count);                                         // print count
        scanner.close();
    }
}
