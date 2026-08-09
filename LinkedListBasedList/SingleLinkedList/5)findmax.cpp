void singlelist::findMax(){
    p = head;
    int max = p->data;
    while(p != NULL){
        if(p->data > max)
            max = p->data;
			p = p->next;
    }

    cout << "Maximum Element = " << max << endl;
}
