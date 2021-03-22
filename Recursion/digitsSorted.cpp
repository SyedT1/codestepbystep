bool digitsSorted(int x)
{
    if (x < 0)
    {
        return digitsSorted(-x);
    }
    else if (x < 10)
    {
        return true;
    }
    int rem = (x / 10) % 10;
    bool ver = digitsSorted(x / 10);
    if (ver == false)
    {
        return ver;
    }
    else
    {
        return (rem <= x % 10);
    }
}
