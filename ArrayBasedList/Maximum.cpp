int arraylist::maxElement()
{
    if(top == -1)
    {
        return -1;
    }

    int max = s[0].data;

    for(int i = 1; i <= top; i++)
    {
        if(s[i].data > max)
        {
            max = s[i].data;
        }
    }
