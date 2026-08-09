int arraylist::square(){
	if(top== -1){
		cout<<"List id empty.";
		return -1;
	}
	
	for(int i = 0;i<=top;i++){
		s[i].data=s[i].data*s[i].data;
	}
	int i;
	return s[i].data;
}
