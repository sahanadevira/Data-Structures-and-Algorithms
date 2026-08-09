void singlelist::findMin(){
    p = head;
    int min = p->data;
    while(p != NULL){
        if(p->data < min)
            min = p->data;
			p = p->next;
    }

    cout << "Minimum Element = " << min << endl;
}
