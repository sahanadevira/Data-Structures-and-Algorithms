void arraylist::sortList(){
    if(top == -1){
        cout << "List is empty";
        return;
    }
	node temp;
    for(int i = 0; i < top; i++){
        for(int j = i + 1; j <= top; j++){
            if(s[i].data > s[j].data){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
