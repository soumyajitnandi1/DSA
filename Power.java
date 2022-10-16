public class Power {

	public static void main(String[] args) {
		int number = 7, power = 7, ans = 1;
		while (power > 0) {
			if ((power & 1) == 1)
				ans *= number;
			power >>= 1;
			number *= number;
		}
		System.out.println(ans);
	}
}
