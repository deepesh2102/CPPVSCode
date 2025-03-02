#include<iostream>
#include<stack>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};
Node *ReverseLinkListUsingStack (Node* head)
{
    stack<Node*>st;
    Node *curr = head;
    while (nullptr != curr->next)
    {
        st.push(curr);
        curr = curr->next;
    }
    head = curr;
    while (!st.empty())
    {
        curr->next = st.top();
        st.pop();
        curr = curr->next;// this is for moving the currnet pointer to the right side and this is will point to the newer node which was taken from stak above
    }
    curr->next = nullptr;
    return head;
}
Node* ReverseLinkList(Node* head)
{
    if (head == nullptr) return nullptr;

    Node* curr = head, *prev = nullptr, *next;
    while (curr != nullptr)
    {
        next = curr->next;// find and store the pointer of next node.
        curr->next = prev; //we are basically changing the direction now curr will point to nullptr as it is going te be last element of list//
        prev = curr;

        curr = next;
    }
    return prev;// as this is the first element now.
}
void PrintList (Node* head)
{
    Node* t = head;
    while (nullptr != t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(2);

    cout<<"Curr LinkList is ";
    PrintList(head);
    //head = ReverseLinkListUsingStack(head);
    head = ReverseLinkList(head);
    cout<<"LinkList after reversing it  ";
    PrintList(head);

}