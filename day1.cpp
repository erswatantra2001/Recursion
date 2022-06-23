// starting with recursion

// question 1 : finding factorial

// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }

//     int recResult = fact(n-1);
//     int result = recResult * n;
//     return result;
// }

// int main(){

//     int n;
//     cin >> n;

//     cout << fact(n) << endl;

//     return 0;
// }

// question 2 : finding sum of n natural numbers

// #include<iostream>
// using namespace std;

// int findSum(int n){

//     if(n == 0){
//         return 0;
//     }

//     if(n == 1){
//         return 1;
//     }

//     int recResult = findSum(n-1);
//     int result = n + recResult;
//     return result;
// }

// int main(){

//     int n;
//     cin >> n;

//     cout << findSum(n) << " ";

//     return 0;
// }

// question 3 : finding fibbonacci series

// #include<iostream>
// using namespace std;

// long long int nthFibonacci(long long int n){
//         // code here
//         if(n == 1){
//             return 1;
//         }

//         if(n == 0){
//             return 0;
//         }

//         long long int recResult1 = nthFibonacci(n-1);
//         long long int recResult2 = nthFibonacci(n-2);

//         long long int result = recResult1 + recResult2;

//         return result;
//     }

// int main(){

//     int n;
//     cin >> n;

//     cout << nthFibonacci(n) << endl;

//     return 0;
// }

// question 4 : finding power of 2

// #include<iostream>
// using namespace std;

// int powerOf2(int n){
//     if(n == 0){
//         return 1;
//     }

//     if(n == 1){
//         return 2;
//     }

//     // if n is even

//     if(n%2 == 0){
//         return powerOf2(n/2) * powerOf2(n/2);
//     }

//     // if n is odd

//     if(n%2 != 0){
//         return 2 * powerOf2(n/2) * powerOf2(n/2);
//     }

// }

// int main(){

//     int n;
//     cin >> n;

//     cout << powerOf2(n) << endl;

//     return 0;
// }

// question 5 : count number of ways to reach N stairs

// #include<iostream>
// using namespace std;

// long long int countWaysStairs(int n){
//     if(n == 1){
//         return 1;
//     }

//     if(n == 2){
//         return 2;
//     }

//     long long int firstSteps = countWaysStairs(n-1);
//     long long int secondSteps = countWaysStairs(n-2);
//     long long int result = firstSteps + secondSteps;
//     return result;
// }

// int main(){

//     int n;
//     cin >> n;

//     cout << countWaysStairs(n) << endl;
//     return 0;

// }

// question 6 : checking palindrome

// #include<iostream>
// using namespace std;

// int helper(string s,int start, int end){
//     if(start >= end){
//         return true;
//     }
//     if(s[start] != s[end]){
//         return false;
//     }

//     return helper(s,start+1,end-1);
// }

// int checkPalin(string s){
//     int n = s.size()-1;
//     return helper(s,0,n);
// }

// int main(){

//     string s;
//     cin >> s;

//     cout << checkPalin(s) << endl;

//     return 0;
// }

// question 7 : power set / subsequences

// #include <iostream>
// #include <vector>
// using namespace std;

// void helper(string s, string temp, int index)
// {
//     if (s.size() == index) // it check until it get equals size with index...
//     {
//         cout << temp << " ";
//             return;
//     }

//     // take the string

//     helper(s, temp + s[index], index + 1);

//     // not take the string

//     helper(s, temp, index + 1);

// }

// int main()
// {

//     string n;
//     cin >> n;

//     helper(n,"",0);

//     return 0;
// }


// question 8 : finding subsets

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution{
        
//     public:
    
//     vector<vector<int> > ans; //Global Variable
//     //vector is a Dynamic Data structure similar to array but unlike array we do not need to declare its size in advance
    
//     void helper(vector <int> A,vector<int>temp, int i){
//         if (i==A.size()){            //Base Case
//             ans.push_back(temp);     //this will keep the contents of temp in ans for now
//             return;
//         }
        
//         temp.push_back(A[i]); //Appends or adds element at the end
//         helper(A,temp,i+1);   //Inclusion or Take condition
        
//         temp.pop_back();      //Removes an element from the end
//         helper(A,temp,i+1);    //Exclusion or not-take condition
        
//         return;
//     }
    
//     vector<vector<int> > subsets(vector<int>& A)
//     {
//         //code here
//         vector<int> temp;
//         helper(A,temp,0);
//         // sort(ans.begin(),ans.end()); //this is to sort the array
//         return ans;
//     }
    
// };

// // take and non-take always work for only for finding subsequence and subset .


// // { Driver Code Starts.

// int main(){
// 	int n, x;
//     cout<<"Enter number of elements : ";
// 	cin >> n;

// 	vector<int> array;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> x;
// 		array.push_back(x);
// 	}
       
     
//     Solution ob;
//     vector<vector<int> > res = ob.subsets(array);

// 	// Print result
//     cout<<endl<<"Subsets are : "<<endl;
// 	for (int i = 0; i < res.size(); i++) {
// 		for (int j = 0; j < res[i].size(); j++){
// 			cout << res[i][j] << " ";
//         }
// 		cout << endl;
// 	}

// 	return 0;
// }  // } Driver Code Ends


// question 9 : 