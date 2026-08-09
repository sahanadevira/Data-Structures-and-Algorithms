void arraylist::reverseList(){
    if(top == -1){
        cout << "List is empty";
        return;
    }
    node temp;
    int i = 0;
    int j = top;
    while(i < j){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
