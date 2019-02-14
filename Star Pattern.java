/*  Print the following pattern
Pattern for N = 4
    *
   *** 
  *****
 *******
*/

import java.util.Scanner;
public class Solution {


	public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/
      	 Scanner scan = new Scanner (System.in);
	 int num = scan.nextInt();
	 int i=1;
	 int k=1;
	 while (i<=num) {
		 int j=1;
		 k=i;
		 int r=1;
		 
		 while (r<num-i+1) {
			 System.out.print(" ");
			 r++;
		 }
		 while (j<=i) {
			 System.out.print(k);
			 k++;
			 j++;
			 }
		 System.out.println("");
		 i++;
		 }

		
	}

}