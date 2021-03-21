int rev(stack<int> &lo)
{
    if (lo.empty())
    {
        return 0;
    }
    int n = lo.top();
    lo.pop();
    int f = rev(lo);
    if (lo.size() == 0)
    {
        lo.push(n);
        return f;
    }
    else
    {
        if (lo.top() == n)
        {
            lo.push(n);
            return f + 1;
        }
        else
        {
            lo.push(n);
            return f;
        }
    }
}
