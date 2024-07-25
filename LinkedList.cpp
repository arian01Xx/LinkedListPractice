#include <iostream>
#include <vector>
#include <string>

struct ListNode{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class SolutionOne{
public:
    int length(ListNode *head){
        //conseguir el tamaño del linked list
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head){
        if(head==NULL || head->next==NULL) return NULL;
        int n=length(head);
        int t=n/2;
        ListNode* temp=head;
        for(int i=0; i<t; i++){
            if(i==t-1){
                ListNode* toDelete=temp->next;
                temp->next=temp->next->next;
                delete toDelete;
            }
            temp=temp->next;
        }
        return head;
    }
};

class SolutionTwo{
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* temp=even;
        while(even != NULL && even->next != NULL){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=temp;
        return head;
    }
/*
Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]
*/
};


int main(){

	int input
	SolutionOne solution1;


	SolutionTwo solution2;
	return 0;
}