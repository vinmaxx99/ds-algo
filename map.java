import java.util.*;
class XY
{
public static void main(String ar[])  throws Exception
   { 
    Scanner sc=new Scanner(System.in) ;
     int t=sc.nextInt() ;
    for(int i=0;i<t;i++)
   {
      int N=sc.nextInt() ;
       int arr[]=new int[N+1];
       arr[0]=0;
      for(int k=1;k<=N;k++)
    {
      arr[k]=sc.nextInt();
     }

     Map<Integer,Integer> map=new HashMap<>();
    {
    for(int j=1;j<=N;j++)
    {
        int p=arr[j];
        map.put(p,arr[p]);
    }
     ArrayList<Integer> list=new ArrayList<Integer>();
    for(Map.Entry <Integer, Integer>entry: map.entrySet())
    {
     list.add(entry.getValue());
    }
    java.util.Collections.sort(list);
   
     int flag=0;
    for(int g=0;g<list.size()-1;g++)
    {
     if(list.get(g)==list.get(g+1))
     {
      
     flag=1;
      break;
     }
     }
     
     if(flag==1){
      System.out.println("Truly Happy");
      }
     else
      {   
     System.out.println("Poor Chef");
     
     }
     
  }
   } 
   }   
   }