int arraylist::search(int d){
	if(top == -1){
		cout<<"List is empty.";
		return -1;
	}
	for(int i =0;i<=top;i++){
		if(s[i].data == d){
			return i;
		}
	}
	cout<<"Key not found.";
	return -1;
}
