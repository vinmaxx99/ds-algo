import java.util.*;

public class MergerSort 
{
	public static void main(String[] args) 
	{
	
		Integer[] a = { 2, 6, 3, 5, 1 };
		
	
		mergeSort(a);
		
	
		System.out.println(Arrays.toString(a));
	}

	@SuppressWarnings("rawtypes") 
	public static Comparable[] mergeSort(Comparable[] list) 
	{
		
        if (list.length <= 1) {
            return list;
        }
        
        
        Comparable[] first = new Comparable[list.length / 2];
        Comparable[] second = new Comparable[list.length - first.length];
        System.arraycopy(list, 0, first, 0, first.length);
        System.arraycopy(list, first.length, second, 0, second.length);
     
        mergeSort(first);
        mergeSort(second);
        
      
        merge(first, second, list);
        return list;
    }
    
	@SuppressWarnings({ "rawtypes", "unchecked" }) 
    private static void merge(Comparable[] first, Comparable[] second, Comparable[] result) 
	{
    
        int iFirst = 0;
        
       
        int iSecond = 0;
        
        
        int iMerged = 0;
        
       
        while (iFirst < first.length && iSecond < second.length) 
        {
            if (first[iFirst].compareTo(second[iSecond]) < 0) 
            {
                result[iMerged] = first[iFirst];
                iFirst++;
            } 
            else 
            {
                result[iMerged] = second[iSecond];
                iSecond++;
            }
            iMerged++;
        }

        System.arraycopy(first, iFirst, result, iMerged, first.length - iFirst);
        System.arraycopy(second, iSecond, result, iMerged, second.length - iSecond);
    }
}

