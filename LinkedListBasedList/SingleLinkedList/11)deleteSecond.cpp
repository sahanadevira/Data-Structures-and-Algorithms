void singlelist::deleteSecond(){
    if(head == NULL || head->next == NULL)
        return;
    temp = head->next;
    head->next = temp->next;
    delete temp;
}
