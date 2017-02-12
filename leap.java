package hello;

public class leap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int year=2006;
		System.out.println("find in leap year");
		
		if((year % 400==0)||((year%4==0)&&(year%100!=0)))
			System.out.println("\nyear" +year+"is a leap year");
		
		else
			System.out.println("year" +year+"is a not leap year");
			
			
	}
	}


