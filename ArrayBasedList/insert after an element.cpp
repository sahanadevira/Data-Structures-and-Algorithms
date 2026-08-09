void arraylist::insertAfter(){
    if(top == MAX - 1){
        cout << "List is full";
        return;
    }int key, value;
    cout << "Enter the element after which insertion is to be done: ";
    cin >> key;
    cout << "Enter the new element: ";
    cin >> value;
    int pos = -1;
    for(int i = 0; i <= top; i++){
        if(s[i].data == key){
            pos = i;
            break;
        }
    }if(pos == -1){
        cout << "Element not found";
        return;
    }for(int i = top; i > pos; i--){
        s[i + 1].data = s[i].data;
    }s[pos + 1].data = value;
    top++;
}
