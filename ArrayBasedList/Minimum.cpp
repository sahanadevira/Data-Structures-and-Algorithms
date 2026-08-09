int arraylist::minElement()
{
    if(top == -1)
    {
        return -1;
    }

    int min = s[0].data;

    for(int i = 1; i <= top; i++)
    {
        if(s[i].data < min)
        {
            min = s[i].data;
        }
    }

    return min;
}
