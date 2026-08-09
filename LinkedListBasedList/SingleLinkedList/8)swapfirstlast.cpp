void singlelist::swapFirstLast(){
    if(head == NULL || head->next == NULL)
        return;
    p = head;
    int t;
    while(p->next != NULL){
        p = p->next;
    }
    t = head->data;
    head->data = p->data;
    p->data = t;
}
