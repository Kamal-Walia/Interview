#include <iostream>
using namespace std;
void countGiftcard(int min,int max,int amount)
{
	int count=0,temp;
	int cardCount[100] = { 0 };
	int valueCount[100] = { 0 };
	if(amount<min){ // if the requested amount is less the lower bound
		cout<<"sorry this request could not be processed";
		exit(0);
	}
	else{
		temp=max;
		for (int i = min; i <=max; i++) { // check in the range given starting from max to min to get cards of highest values
        if (amount >= temp) {
            cardCount[count] = amount / temp;
            amount = amount - cardCount[count] * temp;
            valueCount[count]=temp;
            temp--;
            count++;
        }
        else{
        	temp--;
		}
			}
			
		}
		 cout << "Gift Card Count ->" << endl;
   for (int i = 0; i <=count; i++)  {
       if (cardCount[i] != 0) {
            cout << valueCount[i] << " : "
                << cardCount[i] << endl;
        }
    }
    
}

int main()
{
	int n,amount,min,max;
	cout<<"Enter min and max of gift card";
	cin>>min;
	cin>>max;
	cout<<"Enter the amount of gift card you want";
    cin>>amount;
    
    countGiftcard(min,max,amount);
    return 0;
}

