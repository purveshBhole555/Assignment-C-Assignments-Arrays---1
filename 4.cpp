#include <iostream>
using namespace std;

int main()
{
    int arr[10]={79,80,34,57,118,38,2,79,1,34};
    int count=0;
    for(int i= 0 ; i<10 ; i++)
    {
        int x = arr[i];
        int count=0;
        for(int j=i ; j<10 ; j++)
        {
            if(x==arr[j+1])  count++;
        }
        

        if(count>1)  cout<<arr[i]<<endl;
    }
    
}


// output is 

79
34