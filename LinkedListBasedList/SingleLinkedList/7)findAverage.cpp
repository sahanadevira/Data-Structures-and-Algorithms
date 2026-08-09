void singlelist::findAverage(){
    int sum = 0, count = 0;
    float avg;
    p = head;
    while(p != NULL){
        sum += p->data;
        count++;
        p = p->next;
    }
    avg = (float)sum / count;
    cout << "Average = " << avg << endl;
}
