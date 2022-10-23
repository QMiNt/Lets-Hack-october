import java.util.*;
public class CURD 
{
    int ar[],m;
    CURD(int a)
    {
        m=a;
        ar=new int[m];
    }
    void CreateArray()
    {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter elements of array");
    for (int i=0;i<m;i++)
    ar[i]=sc.nextInt();
    }
    void PrintArray()
    {
        for (int i=0;i<m;i++)
        System.out.print(ar[i]+" ");
    }
    void UpdateElement(int newElement,int pos)
    {
        if(ar==null || pos>=m || pos<0){
            System.out.println("Out of bound index");
            return;
        }
        for (int i=0;i<m;i++)
        {
            if(pos==i+1)
            ar[i]=newElement;
        }
    }
    void DeleteElement(int pos)
    {
        if(ar==null || pos>=m || pos<0){
            System.out.println("Out of bound index");
            return;
        }
        for(int i=pos;i<m-1;i++)
        ar[i]=ar[i+1];
        m--;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length of array");
        int m=sc.nextInt();
        CURD obj=new CURD(m);
        obj.CreateArray();
        obj.PrintArray();
        System.out.println("Enter element to be updated also the position in which it is to be updated");
        int Element=sc.nextInt();
        int pos=sc.nextInt();
        obj.UpdateElement(Element,pos);
        obj.PrintArray();
        System.out.println("Enter index to be deleted");
        int index=sc.nextInt();
        obj.DeleteElement(index);
        obj.PrintArray();
    }
}
