//Name: Utsav Punia
//Roll No: 2010991423
//Group g-8
// set01
// code 1



#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter number of elements:"<<endl;
    int n; // no of elements
    cin>>n; // user input of no of elements
    
     try {
      cout << "Inside try \n";
      if (n <= 0)
      { 
	  	 cout << "Please enter a positive integer"<<endl;
         throw n;
         
      }
   }
   catch (int n ) {
      cout << "Exception Caught \n";
   }
 
   cout << "No exception occured \n";
    
    int arr[n];//array declarataion
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++){
    	
        cin>>arr[i];// taking space sepearated integers as array inputs
    }
    sort(arr,arr+n); // sort the array
    for(int i=n-1;i>=0;i--){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
    // due to being sorted the repeated elements would be adjacent to each other and hence we can the adjacent indices for repeating and non repeating;

    return 0;
}
