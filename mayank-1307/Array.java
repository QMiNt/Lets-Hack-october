public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		int [] arr = new int[10];
		for(int i=0;i<10;i++)
		{
		    int k=sc.nextInt();
		    arr[i]=k;    //insert the elements in the array 
		}
		arr[3]=83; //update the value of 4th position to 83
		System.out.println("The elements of the array are :");
		for(int i=0;i<10;i++)
		System.out.println(arr[i]);
		System.out.println("Enter the position you want to delete");
		int l=sc.nextInt();
		int [] new_arr=new int[9];
		int j=0;
		for(int i=0;i<10;i++)
		{
		    if(i==l-1)
		    continue;
		    else
		    {
		        new_arr[j]=arr[i];
		        j++;
		    }
		}
		
		
	}
}