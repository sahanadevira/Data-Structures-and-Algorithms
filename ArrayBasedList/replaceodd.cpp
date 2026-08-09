int arraylist::replaceodd(){
	if(top == -1){
		cout<<"List is empty.";
		return -1;
	}
		for(int i = 0;i<=top;i++){
		if((s[i].data)%2 != 0){
			s[i].data=100;
		}
	}
	int i;
	return s[i].data;
}
