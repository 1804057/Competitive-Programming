const ll mx = 1000006;
vector<ll> prime;
bool isp[mx];
void sieve()
{
    memset(isp, true, sizeof(isp));
    isp[0] = isp[1] = false;
    for (int i = 4; i < mx; i += 2)
    {
        isp[i] = false;
    }
    for (int i = 3; i * i <= mx; i += 2)
    {
        if (isp[i])
        {
            for (int j = i * i; j < mx; j += i)
            {
                isp[j] = false;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i < mx; i += 2)
    {
        if (isp[i])
        {
            prime.push_back(i);
        }
    }
}