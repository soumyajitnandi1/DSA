//9  9  9  9  9  9  9  9  9  9  9  9  9  9  9  9  9  
//9  8  8  8  8  8  8  8  8  8  8  8  8  8  8  8  9  
//9  8  7  7  7  7  7  7  7  7  7  7  7  7  7  8  9  
//9  8  7  6  6  6  6  6  6  6  6  6  6  6  7  8  9  
//9  8  7  6  5  5  5  5  5  5  5  5  5  6  7  8  9  
//9  8  7  6  5  4  4  4  4  4  4  4  5  6  7  8  9  
//9  8  7  6  5  4  3  3  3  3  3  4  5  6  7  8  9  
//9  8  7  6  5  4  3  2  2  2  3  4  5  6  7  8  9  
//9  8  7  6  5  4  3  2  1  2  3  4  5  6  7  8  9  
//9  8  7  6  5  4  3  2  2  2  3  4  5  6  7  8  9  
//9  8  7  6  5  4  3  3  3  3  3  4  5  6  7  8  9  
//9  8  7  6  5  4  4  4  4  4  4  4  5  6  7  8  9  
//9  8  7  6  5  5  5  5  5  5  5  5  5  6  7  8  9  
//9  8  7  6  6  6  6  6  6  6  6  6  6  6  7  8  9  
//9  8  7  7  7  7  7  7  7  7  7  7  7  7  7  8  9  
//9  8  8  8  8  8  8  8  8  8  8  8  8  8  8  8  9  
//9  9  9  9  9  9  9  9  9  9  9  9  9  9  9  9  9  

import java.util.Scanner;

public class Pattern1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter no of lines (0-9): ");
		int n = sc.nextInt();
    
		pattern1(n);

		sc.close();
	}

	static void pattern1(int n) {
		
		for (int line = 1; line < 2 * n; line++) {
			int modifiedLine = line > n ? 2 * n - line : line, valueToPrint = n;

			for (int col = 1; col <= n; col++) { // part 1
				if (modifiedLine > col) {
					System.out.print(valueToPrint + "  ");
					valueToPrint--;
				} else
					System.out.print(valueToPrint + "  ");
			}

			for (int col = n - 1; col > 0; col--) { // part 2
				if (modifiedLine > col) {
					valueToPrint++;
					System.out.print(valueToPrint + "  ");
				} else
					System.out.print(valueToPrint + "  ");
			}

			System.out.println();
		}
	}
}
