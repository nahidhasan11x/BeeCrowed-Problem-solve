#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    if (h2 > h1)
    {
        int dh = h2 - h1;
        int dm;

        if (m2 >= m1)
        {
            dm = m2 - m1;
        }
        else
        {
            dm = (60 + m2) - m1;
            dh--;
        }

        cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S) " << endl;
    }
    else if (h2 == h1)
    {
        if (m2 > m1)
        {
            cout << "O JOGO DUROU " << 0 << " HORA(S) E " << m2 - m1 << " MINUTO(S)" << endl;
        }
        else
        {
            int dh = (h2 + 24) - h1;
            int dm;
            if (m1 == m2)
                dm = 0;
            else
            {
                dm = (m2 + 60) - m1;
                dh--;
            }
            cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)" << endl;
        }
    }
    else
    {
        int dh = (h2 + 24) - h1;
        int dm;
        if (m2 >= m1)
            dm = m2 - m1;
        else
        {
            dm = (m2 + 60) - m1;
        }
        cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)" << endl;
    }
}