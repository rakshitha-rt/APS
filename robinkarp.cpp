#include <stdio.h>
#include<iostream>
#define d 256
using namespace std;
    void search(char pat[], char txt[], int q)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int t = 0;
    int h = 1;

    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;

    for (i = 0; i < M; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    for (i = 0; i <= N - M; i++)
    {

        if (p == t)
        {
            for (j = 0; j < M; j++)
            {
                if (txt[i + j] != pat[j])
                    break;
            }

            if (j == M)
                printf("Pattern found at index %d \n", i);
        }

        if (i < N - M)
        {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;

            if (t < 0)
                t = (t + q);
        }
    }
}

int main()
{
  string txt,pat;
  int q;
  cin>>txt>>pat>>q;
    search(pat, txt, q);
    return 0;
}
