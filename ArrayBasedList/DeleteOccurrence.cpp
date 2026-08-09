void arraylist::deleteOccurrence(){
    if(top == -1){
        cout << "List is empty";
        return;
    }
    int d;
    cout << "Enter the element to delete: ";
    cin >> d;
    for(int i = 0; i <= top; i++){
        if(s[i].data == d){
            for(int j = i; j < top; j++){
                s[j] = s[j + 1];
            }
            top--;
            i--;
        }
    }
}
