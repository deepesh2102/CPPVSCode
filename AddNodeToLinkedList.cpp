#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};
void  AddNodeToList(Node *head, int a_data)
{
    if (nullptr == head) return ;
    Node *tmp = head;
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    Node *newNode = new Node(a_data);
    tmp->next = newNode;
    newNode->next = nullptr;
    //return head;
}
void DeleteNode(Node* head, int value)// do practice for this 
{
    cout<<"In Delete fun() "<<endl;
    if (nullptr == head)
    {
        //cout<<"there is no Nodes to be deleted "<<endl;
        return;
    }
    Node* tmp = head;
    Node *nextt = nullptr, *prev = nullptr, *curr;
    while (tmp != nullptr)
    {
        if (tmp->next != nullptr && tmp->next->data == value)
        {
            nextt = tmp->next;//node to be deleted
            tmp->next = tmp->next->next;
            delete nextt;
            nextt = nullptr;
            break;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    //cout<<"head address in delete fun () "<<head<<endl;

}
int main()
{
    Node *head = new Node(0);
    AddNodeToList(head, 5);
    AddNodeToList(head, 6);
    AddNodeToList(head, 7);
    AddNodeToList(head, 8);
    Node* tmp = head;
    while (tmp != nullptr)
    {
        cout<<tmp->data<<" ";
        // if (tmp->data == 7)
        // {
        //     cout<<"Address of the 7 node to be deleted is "<<tmp<<endl;
        // }
        tmp = tmp->next;
    }
    DeleteNode(head, 7);
    //cout<<endl<<"head address in main is "<<head<<endl;
    cout<<"After deleting the node 7 : ";
    tmp = head;
    while (tmp != nullptr)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    return 0;
}