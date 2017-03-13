package hello;

import java.util.Scanner;

public class primenum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
int n,status=1,num=3,i,j;
Scanner in=new Scanner(System.in);
n=in.nextInt();
if(n>=1)
{
	System.out.println("two interval " +n+  "prime numbers are: ");
	System.out.println(2);
	
}
for(int count=0;count<=n;)
{
for(j=2;j<=Math.sqrt(num);j++)
{
	if(num%j==0)
	{
		status=0;
		break;
	}
}
if(status!=0)
{
	System.out.println(num);
	count++;
}
status=1;
num++;
}
	}
}
