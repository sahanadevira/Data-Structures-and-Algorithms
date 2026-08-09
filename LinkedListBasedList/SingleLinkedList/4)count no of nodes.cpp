void singlelist::countNodes(){
    int count = 0;
    p = head;
    while(p != NULL){
        count++;
        p = p->next;
    }
    cout << "Number of Nodes = " << count << endl;
}
