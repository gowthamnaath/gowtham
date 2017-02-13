package hello;
import java.util.Scanner;

public class largenum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x,y,z;
		System.out.println("enter the three nums");
		Scanner in = new Scanner(System.in);
		x=in.nextInt();
		y=in.nextInt();
		z=in.nextInt();
		
		if(x>y&&x>z)
			System.out.println("x is largest");
		else if(y>x&&y>z)
			System.out.println("y is largest");
		else if(z>x&&z>y)
			System.out.println("z is largest");
		else
			System.out.println("enter num is not valued ");
	}

}
