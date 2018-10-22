#include <iostream>
using namespace std;
void countGiftcard(int arr[],int amount,int size) // size is needed pre computed as if we try to get the size of arr in function it will give the size of pointer
{
    int cardCount[size] = { 0 };
    int temp=amount,flag=0,i=0,cnt=0,j=0;
    for (; i < size; i++) {
    	

		 if (amount >= arr[i] ) { // check if our amount is more than the first highest card value and so on...
            cardCount[i] = amount / arr[i]; //how many cards of this value can be given to accomodate the amount
            amount = amount - cardCount[i] * arr[i]; // subtract the amount of which we have issued the cards
        }       
		cnt++; 
    }
	if(amount%arr[size-1]!=0){ // Backtrack The Solution 
		cnt--;
		for(j=cnt;j>=0;j--){
	        amount=amount+arr[j]*cardCount[j];
	        if(amount%arr[cnt]!=0){
	        	continue;
			}
			if(amount%arr[cnt]==0){
				cardCount[cnt-1]=0;
			cardCount[cnt] = amount / arr[cnt]; //how many cards of this value can be given to accomodate the amount
            amount = amount - cardCount[cnt] * arr[cnt]; // subtract the amount of which we have issued the cards
				cnt--;
			}
			if(amount==0){
				break;
			}
		}	
	}
     if(amount>0){ // if amount in the end is not zero that means some value is still there but cannot be filled by our card values
     	cout<<"sorry you cannot buy gift cards for the given value";
     	exit(0);
	 }
    cout << "Gift Card Count ->" << endl;
    for (int i = 0; i < size; i++) { // print logic
       if (cardCount[i] != 0) {
            cout << arr[i] << " : "
                << cardCount[i] << endl;
        }
    }
}

int main()
{
	int n,amount,temp;
	cout<<"Enter no. of gift cards available";
	cin>>n;
	int arr[n];
	cout<<"Enter Values for gift cards";

	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	cout<<"Enter the amount of gift card you want";
    cin>>amount;
    for(int i=0;i<n;i++) // sort in descending to get highest value cards first we can also ask the user to enter the values in descending order but still this is a safe way
	{		
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//int size=sizeof(arr)/sizeof(arr[0]);//size of the array
    countGiftcard(arr,amount,n);
    return 0;
}

