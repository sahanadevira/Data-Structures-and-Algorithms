void arraylist::create(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if(n > MAX){
        cout << "List overflow";
        return;
    }top = n - 1;
    cout << "Enter the elements: ";
    for(int i = 0; i <= top; i++){
        cin >> s[i].data;
    }
}
