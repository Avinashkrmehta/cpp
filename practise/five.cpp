// program to finding the Greatest Common Divisor (GCD), or Greatest Common Factor (GCF), of two integers.
#include<bits/stdc++.h>
using namespace std;

// BRUTE FORCE SOLUTION
int gcd(int a, int b){
	int gcd = 1;
	for(int i=min(a,b); i>=1; i--){
		if(a%i == 0 && b%i == 0){
			gcd = i;
			break;
		}
	}
	return gcd;
}


// BETTER SOLUTIONS
int better_gcd(int a, int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

// OPTIMAL SOLUTIONS -->  Euclid’s Algorithm

int optimal_gcd(int a, int b){
	if (b == 0) return a;
	return optimal_gcd(b, a % b);

}

int main()
{
	int x = 10;
	int y = 20;
    // cout << "GCD of number " << x << " and " << y << " is " <<  gcd(x,y) << endl;
    // cout << "Better GCD of number " << x << " and " << y << " is " <<  better_gcd(x,y) << endl;
    cout << "Optimal GCD of number " << x << " and " << y << " is " <<  optimal_gcd(x,y) << endl;
	return 0;
}
