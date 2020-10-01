//input matrix is sorted such that every row is in ascending order and every coloumn is in ascending order
[
  [1,,5,10],
  [3,20,40],
  [5,21,50]
]

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i = 0;
        if(matrix.length==0)
            return false;
        int j = matrix[0].length-1;
        while(i<matrix.length && j>=0)
        {
            if(target==matrix[i][j])
                return true;
            else if(target>matrix[i][j])
            {
                i++;
            }
            else if(target<matrix[i][j])
            {
                j--;
            }   
        }
        return false;
        
    }
}
