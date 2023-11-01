#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    node* next;
    int val = 0;
};
typedef struct nodeHead{
    node* next;
    int num = 0;
};
nodeHead a,b;

void insertAB(int whichone,int number){
	node* temp = (node*)malloc(sizeof(node));
	temp->val = number;
	if(whichone = 0)//A
		{	
			if(a.next&&a.next->val <= number){
				temp->next = a.next;
				a.next = temp;
			}
			else{
				node* tempList = a.next;
				while(tempList->next&&tempList->next->val > number) tempList = temp->next;
				temp->next = tempList->next;
				tempList->next = temp;
			}
			a.num++;
		}
	else//B
		{
			if(b.next&&a.next->val <= number){
				temp->next = b.next;
				b.next = temp;
			}
			else{
				node* tempList = b.next;
				while(tempList->next&&tempList->next->val > number) tempList = temp->next;
				temp->next = tempList->next;
				tempList->next = temp;
			}
			b.num++;
		}
	
}
void nodeChange(int orgin, int target){
		if(orgin = 0){
			int temp = a.next->val;
			a.next = a.next->next;
			a.num--;
			insertAB(target,temp);
		}else{
			int temp = b.next->val;
			b.next = b.next->next;
			b.num--;
			insertAB(target,temp);
		}
}
void insert(int number)
{
    if(number > a.next->val) {
    	insertAB(0,number);
    	if(a.num > b.num+1)
    		nodeChange(0,1);
	}
    else {
    	insertAB(1,number);
    	if(b.num > a.num+1)
    		nodeChange(1,0);
	}
    
}
int main(int argc, char const *argv[])
{
    int numbers[10] = {5,7,8,3,1,2,6,7,9,10};
    for(int i = 0;i<1;i++){
        insert(numbers[i]);
    }
    cout<<"ÖÐÎ»Êý£º"<<a.next->val<<"  and   "<<b.next->val;
    cout<<"hello";
    return 0;
}
