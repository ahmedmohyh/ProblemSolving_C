#include <iostream>
using namespace std;
#include <map>

void problem2() {
	int t;
	cin >> t;
	while (t--) {
		int cnt = 0;
		for (int i = 0; i < 7; i++) {
			int x;
			cin >> x;
			cnt += x;
		}
		cout << cnt << endl;

	}
	return;
}

void PrefectSeat() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int chilren;
		cin >> chilren;
		int lastheight = 0;
		bool correct = true;

		for (int j = 0; j < chilren; j++) {
			int x;
			cin >> x;

			if (lastheight == 0) {
				lastheight = x;
				continue;
			}

			else if (x < lastheight) {
				correct = false;
			}

			lastheight = x; 
		}
		if (correct)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return; 
}

void CircleStreets() {

        int n, q;
        cin >> n >> q;


        //for (int i = 0; i < n + 1; i++)
        //    arr[i] = true;

        map<int, bool> mapKeys;


        for (int i = 0; i < q; i++) {
            char oper;
            cin >> oper;



            if (oper == '?') {

                int a, b;
                cin >> a >> b;

                    bool leftPossbile = true;
                    bool rightPossible = true;

                    int big, small;
                    if (a < b) {
                        small = a;
                        big = b;
                    }
                    else {
                        big = a;
                        small = b;

                    }
                    for (const auto& p : mapKeys)
                    {
                        if (!leftPossbile && !rightPossible)
                            break;

                        if (p.first >= small && p.first <= big)
                            rightPossible = false;

                        if ((p.first >= big && p.first <= n) || (p.first <= small))
                            leftPossbile = false;
                    }

                    if (leftPossbile || rightPossible)
                        cout << "possible" << endl;
                    else
                        cout << "impossible" << endl;



                


            }

            else if (oper == '+') {
                int street;
                cin >> street;

                mapKeys.erase(street);

                
            }

            else {
                int street;
                cin >> street;

                mapKeys.insert({ street, false });

                

            }

        }


        return;
    
}


void ShuffleArray() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int* arr = new int[n];
        for (int j = 0; j < n; j++)  
        {
            cin >> arr[j];
        }
        int x =-1;
        for (int j = 0; j < n; j++) {
           
            int xorSum=0;

            for (int k = 0; k < n-1 ; k++) {
                if (k == j)
                    continue;

                //cout <<"the value of arr[j]  "<< arr[j]<< "  " << arr[k] << "  " << "   resutlt " << "The value of xorSum = " << xorSum << "  - " << (arr[k]) << endl;
                xorSum ^=  arr[k];

                //cout << "The new value of xorSum = " << xorSum << endl;

            }

            if (arr[j] == xorSum) {
                x = xorSum;
                break;
            }
        }
        
        cout << x << endl;

    }
}

void SumClosutr() {
    int t, n; 
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int* arr = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        int sum = 0;
        bool casePossible = false;

        for (int j = 0; j < n - 2; j++) {
            int sum = 0;
            sum += arr[j] + arr[j + 1] + arr[j + 2];
            bool sum_3 = false;
            for (int k = 0; j < n; k++) {
                if (arr[k] == sum)
                {
                    cout << "YES" << endl;
                    sum_3 = true;
                    casePossible = true;
                    break;
                }
            }
            if (!sum_3) {
                break;
            }
        }

        if (!casePossible)
            cout << "NO" << endl;


    }

}

int  main()
{
	/*int x;
	cin >> x;

	bool myBoolArray[12] = { true };

	cout <<"the value of the first elemt is " << myBoolArray[3] << endl;
	if (x > 6)
		cout << "Test hello world" << endl;
	else
		cout << "please enter a number that is bigger than 6" << endl;

	return; */
	//problem2();
    SumClosutr();
	return 0;
	
}



