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
void reverse(node *head,node *curr,node *prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    node *forward;
    forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;

}
node *reverse(node *head)
{
    node *prev=NULL;
    node *curr=NULL;
    reverse(head,curr,prev);
    return head;
}