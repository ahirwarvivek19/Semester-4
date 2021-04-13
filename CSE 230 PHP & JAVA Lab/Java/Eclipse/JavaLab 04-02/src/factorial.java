
public class factorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long n,fact=1;	   
		 
        n=Long.parseLong(args[0]);

        for(int i=1;i<=n;i++)
        {
        	fact=fact*i;
        }

        System.out.println(fact);
		
	}

}
