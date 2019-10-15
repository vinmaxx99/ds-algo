 
#include <bits/stdc++.h> 
using namespace std; 
  

int minNumbers(int x, int* arr, int n) 
{ 
    
    queue<int> q; 
  
   
    q.push(x); 
  
    
    unordered_set<int> v; 
  
    // Variable to store depth of BFS 
    int d = 0; 
  
    // BFS algorithm 
    while (q.size()) { 
  
        // Size of queue 
        int s = q.size(); 
        while (s--) { 
  
            // Front most element of the queue 
            int c = q.front(); 
  
            
            if (!c) 
                return d; 
            q.pop(); 
            if (v.find(c) != v.end() or c < 0) 
                continue; 
  
            
            v.insert(c); 
  
            
            for (int i = 0; i < n; i++) 
                q.push(c - arr[i]); 
        } 
  
        d++; 
    } 
  
    // If no possible solution 
    return -1; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 3, 3, 4 }; 
    int n = sizeof(arr) / sizeof(int); 
    int x = 7; 
  
    cout << minNumbers(x, arr, n); 
  
    return 0; 
} 
