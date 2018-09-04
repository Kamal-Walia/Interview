#include<iostream>
#include<conio.h>
#include<malloc.h>
#define MAX_LEN 1000				
using namespace std;
static int increment=0;
struct record
{
	struct timestamp					
	{
		int ss;
		int min;
		int hr;
		int day;
		int month;
		int year;
	}time;
	
	char str[MAX_LEN];
	int value;            //value of node
	int nodenumber;
	char nodeid[4];
	struct record *referenceNodeId;
	struct record *childReferenceNodeId;
	struct record *genesisReferenceNodeId;
	char HashValue[4];
	
	struct record *leftnext=NULL;					//* implementing through binary tree
	struct record *rightnext=NULL;
}*GenesisNode=NULL,*tempNode=NULL;

void create_tree()
{
	
	
	int ch='n';
	
	if(GenesisNode==NULL)
	{
		increment++;

		GenesisNode=(record *)malloc(sizeof(record *));
		
		cout<<"Enter time stamp of node";
		
		//Entering data for GenesisNode
		cout<<"Enter seconds ";
		cin>>(*GenesisNode).time.ss;
		cout<<"Enter mins";
		cin>>(*GenesisNode).time.min;
		cout<<"Enter hour";
		cin>>(*GenesisNode).time.hr;
		cout<<"Enter data day";
		cin>>(*GenesisNode).time.day;
		cout<<"Enter data month";
		cin>>(*GenesisNode).time.month;
		cout<<"Enter data year";
		cin>>(*GenesisNode).time.year;	
		cout<<"Enter data for the root node";
		
		cin>>(*GenesisNode).str;
		cout<<"Enter value of node";
		cin>>(*GenesisNode).value;
		(*GenesisNode).nodenumber=increment;
		cin>>(*GenesisNode).nodeid;
		(*GenesisNode).referenceNodeId=NULL;  //genesis parent node is NULL
		(*GenesisNode).childReferenceNodeId=NULL;
		(*GenesisNode).genesisReferenceNodeId=GenesisNode;
		cin>>(*GenesisNode).HashValue;
	}
		cout<<"Want to enter more nodes";
		cin>>ch;
	
	while(ch="y"||"Y") //check if user wants to add more items
	{
		int value=0;      //for checking against root value;	
		
		
		if((*GenesisNode).leftnext||(*GenesisNode).rightnext)
		{
			cout<<"Enter value for the record first";
		
			if(value<(*GenesisNode).value)
			{
				increment++;
		
				tempNode=(record *)malloc(sizeof(record *));
		
				//Entering data for children
				cin>>(*tempNode).time.ss;
				cin>>(*tempNode).time.min;
				cin>>(*tempNode).time.hr;
				cin>>(*tempNode).time.day;
				cin>>(*tempNode).time.month;
				cin>>(*tempNode).time.year;
			
				cin>>(*tempNode).str;
				cin>>(*tempNode).value;
				(*tempNode).nodenumber=increment;
				cin>>(*tempNode).nodeid;
				(*tempNode).referenceNodeId=GenesisNode;
				(*tempNode).childReferenceNodeId=NULL;
				(*tempNode).genesisReferenceNodeId=GenesisNode;
				cin>>(*tempNode).HashValue;
			}
			if((*GenesisNode).leftnext==NULL)
			{
				(*GenesisNode).leftnext=tempNode;
			}
			else
			{
				(*GenesisNode).rightnext=tempNode;
			}
		}
		cout<<"Want to enter more nodes";
		cin>>ch;
	}
}
void printInorder(record *GenesisNode)
{
	
    if (GenesisNode)
    {
        printInorder(GenesisNode->leftnext);
        printf("inorder = %d\n", GenesisNode->value);
        printInorder(GenesisNode->rightnext);
    }
}
int main()
{
	int ch;
	char ch1='y';
	record *G=GenesisNode;
	
	while(ch1=='y'){
		cout<<"what you want to do";
		cout<<"1) create tree \n 2)display inorder";
		cin>>ch;
		switch(ch){
		case 1:
		create_tree();
		break;
		case 2:
			printInorder(G);
			break;
			}
	}
			
	return 0;	
}
