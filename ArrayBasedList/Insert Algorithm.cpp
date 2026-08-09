void arraylist::insert(int d){
  if(top==max-1){
cout<<"\n List ids full");
return;
  }
++top;
s[top].data = d;
}
