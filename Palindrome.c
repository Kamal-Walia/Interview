#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000002];
    int test,i,flag,check,l,m,k;
    scanf("%d\n",&test);
    while(test--)
    {
        flag=1;
        gets(a);
        l=strlen(a);
        k=l>>1; //store half of the no.
        check=0;
        for(i=0;i<l;i++)
        {
            if(a[i]!='9') //check if all the digits are 9
            {
                flag=0;
                break;
            }
        }
        if(flag==1) // if all the digits are 9 then next palindrome will be 1 followed by 0 till length of the no. and at position of length we have a 1 for ex 9999 => 10001
        {
            a[0]='1';
            for(i=1;i<l;i++)
            a[i]='0';
            a[l]='1';
            a[l+1]='\0';
            check=1;
        }
        if(check!=1) //in case if all digits are not 9
        {
            for(i=0;i<k;i++)
            {
                if(a[i]<a[l-1-i])//if first half of digits are less than second half digits
                flag=-1;
                else if(a[i]>a[l-1-i]) //if second half of digits are less than first half digits
                flag=1;
                a[l-1-i]=a[i];		//replace the second half position value with first half of the same position value for ex 1709 =>1701=>1771 
            }
 
            if(!(l&1))// check if the no. is even
            m=k-1; //case if no. is even
            else m=k; //case if no. is odd
            if(flag==0||flag==-1) // if the digits are already palindrome for ex 1991 or first half is less than second half
            {
                i=0;
                while(a[m-i]=='9')//if first half of digits have 9 starting from the middle digits we replace them with zero 
                {
                    a[m-i]='0';
                    a[l-1-m+i]='0';
                    i++;
                }
                a[m-i]++; //increment first digit
                a[l-1-m+i]=a[m-i]; //make last digit same as first digit
        }
    }
    printf("%s\n",a);
    }
    return 0;
}
