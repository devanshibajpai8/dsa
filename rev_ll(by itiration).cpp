class node{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
node *reverse(node * head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node *prev=NULL;
    node *curr=head;
    node *forward;
    while(curr->next!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
