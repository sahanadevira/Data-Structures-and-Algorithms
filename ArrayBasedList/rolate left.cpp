void arraylist::rotateLeft(){
    if(top == -1){
        cout << "List is empty";
        return;
    }node temp = s[0];
	for(int i = 0; i < top; i++){
        s[i] = s[i + 1];
    }
	s[top] = temp;
}
