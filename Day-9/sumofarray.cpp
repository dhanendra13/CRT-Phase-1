#include<iostream>
using namespace std;
class Sum
{
    public:
    int sumofarray(int arr[], int size){
        int sum=0;
        for (int i=0;i<size;i++){
            sum+=arr[i];
        }
        return sum;
    }
};
int main(){
    Sum s;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    cin>>arr[i];
    int sum=s.sumofarray(arr,size);
    cout<<"The sum of the elements of the array is: "<<sum;

    return 0;
}