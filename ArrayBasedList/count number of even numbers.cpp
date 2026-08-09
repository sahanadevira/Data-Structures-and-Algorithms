int arraylist::times(){
		if(top == -1){
		cout<<"List is empty.";
		return -1;
	}
	int count = 0;
	for(int i = 0;i<=top;i++){
		if((s[i].data)%2 == 0){
			count++;
		}
	}
	return count;
	
}
