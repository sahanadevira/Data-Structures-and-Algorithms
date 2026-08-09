int singlelist::search(int d){
    int pos = 1;
    p = head;
    while(p != NULL){
        if(p->data == d){
            return pos;
        }
        p = p->next;
        pos++;
    }
    return -1;
}
