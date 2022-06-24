// // question 9 : finding subset sum problem

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool helper(vector<int> arr, int sum, int tempSum, int i){
//     if(i >= arr.size()){
//         return false; // agar index ki value size se badi hogayi iska matlba usme aise kuch nahi mila
//     }

//     if(sum == tempSum){
//         return true;  // bhai agar mil gayi value toh jaldi se return kardo 
//     }

//     int recResult1 = helper(arr, sum, tempSum+arr[i], i+1); // when we take the values
//     int recResult2 = helper(arr, sum, tempSum, i+1);  //when we don't have to take values

//     return recResult1 || recResult2;  // jisme bhi target sum ke barabar value mile usko return karalo

// }

// int main(){

//     vector<int> arr = {3,34,4,12,5,2};
    
//     if(helper(arr,9,0,0)){
//         cout << "true";
//     }
//     else{
//         cout << "false";
//     }

//     return 0;
// }

// question 10 : find permutations

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// void helper(vector<int> &arr, int i, vector<vector<int>> &ans){
//     if(i == arr.size()){
//         ans.push_back(arr);
//         return;
//     }

//     for(int j = i;j < arr.size();j++){
//         swap(arr[i],arr[j]);
//         helper(arr,i+1,ans);
//         swap(arr[i],arr[j]);
//     }

//     return;
// }

// vector<vector<int>> permute(vector<int> arr){
//     vector<vector<int>> ans;
//     helper(arr,0,ans);
//     return ans;
// }


// int main(){
    
//     vector<int> arr = {1,2,3};
//     return 0;
// }
