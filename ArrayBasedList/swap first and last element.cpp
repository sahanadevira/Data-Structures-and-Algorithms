void arraylist::first_last(){
		if(top == -1){
		cout<<"List is empty.";
		return;
	}
	else{
	
	int temp;
	temp=s[0].data;
	s[0].data = s[top].data;
	s[top].data = temp;
}
