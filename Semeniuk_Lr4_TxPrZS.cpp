#include <iostream>
#include <fstream>
#include "windows.h"
#include <ctype.h>
#include <vector>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main()
{


    // Variant 25
    // Zavdanya 1

    char slovo[10], red[20];
    int k = 0;
    cout << "Enter word: ";
    cin >> slovo;

    for (int i = 0; i < 10; i++) {

        if (slovo[i] == 98 || slovo[i] == 66) {
            red[k] = slovo[i];
            red[k + 1] = NULL;
            k++;
        }
        else {
            red[k] = slovo[i];
        }
        k++;

    }

    for (int i = 0; i < 20; i++) {
        if (red[i] == 98 || red[i] == 66) {
            red[i] = 107;
            red[i + 1] = 121;
        }
        if (red[i] != 0) {
            cout << red[i];
        }
        else {
            break;
        }
    }
    

    /*int n = 0;
    char y;
    char b[100];
   
    cout << "Enter number of elements: ";
    cin >> n;
    

    ofstream mytext("e:\\Технології програмування зах систем\\Lab 4\\Text.txt");

    for (int i = 0; i < n; i++) {

        y = rand() % 100 + 1;
        cout << y << " ";
        b[i] = y;
        mytext << b[i] << " ";
    }

    mytext.close();
    

    // Zavdanya 2 
    fstream text("e:\\Технології програмування зах систем\\Lab 4\\Text.txt");

    int m[100],k=0, min = 110;
    text >> b;

    for (int i = 0; i < 2*n; i++) {

        if (b[i] != 32) {
            if (b[i] == 0) { continue; }
            m[k] = (int)b[i];
            if (m[k] < 0) {
                break;
            }
            cout << "\n" << m[k];
            k++;
        }

    }

    for (int i = 0; i < k; i++) {
        if (min > m[i]) {
           if (m[i] != 0) {
                min = m[i];
            }
        }
    }

    cout << "\nMin: " << min << " - " << char(min);

    text.close();*/

    // Zavdanya 3

    /*srand(time(0));

    int n = rand() % 100 + 1;
    int y, o = 0;
    char c[100];
    int b[100];
    if (n % 10==0) {
        n = n+1;
    }


    cout << "Key: " << n << "\n";
    cout << "Enter sentence: ";
    cin.get(c,100);

    ofstream mytext("e:\\Технології програмування зах систем\\Lab 4\\Code.txt");

    for (int i = 0; i < 100; i++) {
        if (c[i] == 0) {
            break;
        }
        else {
            y = int(c[i]);

            if (n > 16) {
                b[i] = (y * n);
            }
            else {
                b[i] = y * n + n * 2;
            }
            o++;
            mytext << b[i] << "\n";
        }
        
    }
    mytext.close();

    ifstream text("e:\\Технології програмування зах систем\\Lab 4\\Code.txt");

    int k = 0;
    int m[100], h[6];
    char d[100],g[6];
    for (int i = 0; i < o; i++) {
        text.getline(g, 6);

        h[0] = (int(g[0]) - 48);
        h[1] = (int(g[1]) - 48);
        h[2] = (int(g[2]) - 48);
        h[3] = (int(g[3]) - 48);
        h[4] = (int(g[4]) - 48);
        h[5] = (int(g[5]) - 48);

        if (h[5] <0) {
            m[i] = h[0] * 10000 + h[1] * 1000 + h[2] * 100 + h[3] * 10 + h[4];
            if (h[4] <0) {
                m[i] = h[0] * 1000 + h[1] * 100 + h[2] * 10 + h[3];
                if (h[3]<0) {
                    m[i] = h[0] * 100 + h[1] * 10 + h[2];
                    if (h[2] <0) {
                        m[i] = h[0] * 10 + h[1];
                        if (h[1] <0) {
                            if(h[0] < 0) {
                                m[i] = 0;
                            }
                            else {
                                m[i] = h[0];
                            }
                        }
                    }
                }
            }
        }
        else {
            m[i] = h[0] * 100000 + h[1] * 10000 + h[2] * 1000 + h[3] * 100 + h[4]*10 + h[5];
        }
        for (int k = 0; k < 6; k++) {
            if (m[i] % 10 == 0) {
                m[i] = m[i] / 10;
            }
        }
        g[0] = 0, g[1] = 0, g[2] = 0, g[3] = 0, g[4] = 0, g[5] = 0;
    }
    

    cout << "Uncoded message: ";

    for (int i = 0; i < o; i++) {
         if (m[i] == NULL || m[i] == 0) {
             break;
         }
         else {
             if (n > 16) {
                 d[i] = char(m[i] / n);
             }
             else {
                 d[i] = char((m[i] - (n * 2)) / n);
             }
             if (d[i] != 0 || d[i]!=NULL) { cout << d[i]; }
             else { break; }
         }
         
    }

    text.close();*/
    
    return 0;
}

