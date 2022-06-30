#include <iostream>
using namespace std;

void VanyaandFence() {
    int n, h; 
    cin >> n >> h; 

    int* arr = new int[n];

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] <= h)
            cnt++;
        else
            cnt += 2;

    }
    cout << cnt << endl;

}

void AntonDaninkChess() {
    int n; 
    cin >> n; 

    int cntAnton = 0;
    int cntDanik = 0;

    for (int i = 0; i < n; i++) {
        char x; 
        cin >> x; 
        if (x == 'D')
            cntDanik++;
        else
            cntAnton++;

    }
    if (cntAnton == cntDanik)
        cout << "Friendship" << endl;
    else if (cntAnton > cntDanik)
        cout << "Anton" << endl;
    else
        cout << "Danik" << endl;
}

void BearAndBigBrother() {
    int a, b; 
    cin >> a >> b;
    int cnt = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        cnt++;
    }

    cout << cnt << endl;
}
int main()
{
    BearAndBigBrother();
}

