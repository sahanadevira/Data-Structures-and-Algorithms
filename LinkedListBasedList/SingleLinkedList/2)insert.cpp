void singlelist::insert(int x){
    temp = new node;
    temp->data = x;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
    }
    else
    {
        p = head;
        while(p->next != NULL)
            p = p->next;

        p->next = temp;
    }
}
