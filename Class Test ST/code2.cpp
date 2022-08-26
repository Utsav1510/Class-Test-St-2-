//Name: Utsav Punia
//Roll No: 2010991423
//Group g-8
// set01
// code 2


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count; // n is the no. of elements.
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
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
  
    int set[n];  // set is the array which contains n elements, which are being input by the user in the next loop;
    cout<<"Enter the elements:"<<endl;
    for(i=0; i<n; i++)
    {
       cin>>set[i];// user inputs the ith element of the array
    }
    
    
    int flag[n]={0};        //Flag is used to make mark that the repeated no has been printed once(as we have to print it once), and every flag[x] here is initialized by 0
    cout<<"Repeated Numbers with their frequency:"<<endl;
    for(i=0; i<n; i++)
    {
      count=0;
      if(flag[i]!=1)       // checking if the element is considered or not
      {
         for(j=0; j<n; j++)
         {
            if(set[i]==set[j]) // checking if  elements are repeating
            {
              count++;        
              flag[j]=1;     // flag is set to 1 so the the next time the element is not considered and printed;
            }
         }
         if(count>1)      // if no. of occurrences of element set[i] > 1 then print it
         {
           cout<<"\n"<<set[i]<<" -> "<<count;
         }
      }
    }
return 0;
}
