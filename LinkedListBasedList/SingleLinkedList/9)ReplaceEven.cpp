void singlelist::replaceEven(){
    p = head;
    while(p != NULL){
        if(p->data % 2 == 0){
            p->data = 100;
        }
		p = p->next;
    }
}
