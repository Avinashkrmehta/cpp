#include<bits/stdc++.h>
using namespace std;

void pattern1(){
    /*

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

    */
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<< "* ";
        }
        cout << endl;
    }

}

void pattern2(){
    /*

    * 
    * *
    * * *
    * * * *
    * * * * *

    */
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<< "* ";
        }
        cout << endl;
    }

}

void pattern3(){
  
    /*

    1
    1 2 
    1 2 3
    1 2 3 4
    1 2 3 4 5

    */
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<< j << " ";
        }
        cout << endl;
    }

}

void pattern4(){
  
    /*

    1
    2 2 
    3 3 3
    4 4 4 4
    5 5 5 5 5

    */
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<< i << " ";
        }
        cout << endl;
    }

}

void pattern5(){
  
    /*

    * * * * *
    * * * *
    * * *
    * *
    *

    */
    for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            cout << "* ";
        }
        cout << endl;
    }

}

void pattern6(int num){
  
    /*

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

    */
    for(int i=1; i<=num; i++){
        for(int j=num; j>=i; j--){
            cout << num-j+1 << " ";
        }
        cout << endl;
    }

}

void pattern7(int num){
  
    /*

       *
      ***
     *****
    *******
   *********

    */
    for(int i=0; i<num; i++){
        for(int j=0; j<num-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        for(int j=0; j<num-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }

}

void pattern8(int num){
  
    /*

  *********
   *******
    *****
     ***
      *

    */
    for(int i=0; i<num; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<2*num -(2*i+1); j++){
            cout << "*";
        }
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int num){
  /*
  
    *
   ***
  *****
 *******
 *******
  *****
   ***
    *
  
  */

 pattern7(num);
 pattern8(num);
}

void pattern10(int num){
  /*
  
  *
  **
  ***
  ****
  ***
  **
  *
  
  */
 for(int i=1; i<=2*num-1; i++){
  int stars = i;
  if(i > num) stars = 2*num-i;
  for(int j=1; j<=stars; j++){
    cout << "*";
  }
  cout << endl;
 }
}

void pattern11(int num){
  /*
  
  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1
  
  */
  int start = 1;
  for(int i=0; i<num; i++){
      if(i%2 ==0) start = 1;
      else start = 0;
    for(int j=0; j<=i; j++){
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }

}

void pattern12(int num){
  /*
  
  1         1
  1 2     2 1
  1 2 3 3 2 1
  
  */
  int spaces = 2*(num -1);
  for(int i=1; i<=num; i++){
   
    for(int j=1; j<=i; j++){
      cout << j;
    }

    for (int j = 1; j <= spaces; j++){
      cout << " ";
    }

    for(int j=i; j>=1; j--){
      cout << j;
    }
    cout << endl;

    spaces-=2;
    
  }

}

void pattern13(int num){
  /*
  
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 12 14 15
  
  */
  int print = 1;
  for(int i=1; i<=num; i++){
    for(int j=1; j<=i; j++){
      cout << print << " ";
          print+=1;
    }

    cout << endl;

    
  }

}

void pattern14(int num){
  /*
  
  A
  A B
  A B C
  A B C D
  A B C D E
  
  */

 // logic 1
  // char print = 65;
  // for(int i=1; i<=num; i++){
  //   for(int j=1; j<=i; j++){
  //     cout << print << " ";
  //         print+=1;
  //   }
  //    print = 65;
  //   cout << endl;

// logic 2
  for(int i=0; i<=num; i++){
    for(char ch='A'; ch<='A'+i; ch++){
      cout << ch << " ";
    }
    cout << endl;

    
  }

}

void pattern15(int num){
  /*
    A B C D
    A B C
    A B
    A
  
  */

 // logic 1
  // char print = 65;
  // for(int i=1; i<=num; i++){
  //   for(int j=num; j>=i; j--){
  //     cout << print << " ";
  //         print+=1;
  //   }
  //    print = 65;
  //   cout << endl;

// logic 2
  for(int i=num; i>=1; i--){
    for(char ch='A'; ch<='A'+i; ch++){
      cout << ch << " ";
    }
    cout << endl;

    
  }

}

void pattern17(int num){
  /*
A
B B
C C C
  
  */

 // logic 1
  char print = 65;
  for(int i=1; i<=num; i++){
    for(int j=1; j<=i; j++){
      cout << print << " ";
    }
    print+=1;
    cout << endl;
  }
// logic 2
  // for(int i=num; i>=1; i--){
  //   for(char ch='A'; ch<='A'+i; ch++){
  //     cout << ch << " ";
  //   }
  //   cout << endl;

    
  // }

}




int main(){
  int num;
  cin >> num;
  pattern17(num);
//  cout << "-----------------------";
  // pattern16(num);
//  cout << "-----------------------";
  // pattern15(num);
//  cout << "-----------------------";
  // pattern14(num);
//  cout << "-----------------------";
  // pattern13(num);
//  cout << "-----------------------";
  // pattern12(num);
//  cout << "-----------------------";
  // pattern11(num);
//  cout << "-----------------------";
  // pattern10(num);
//  cout << "-----------------------";
  // pattern9(num);
//  cout << "-----------------------";
    // pattern8(num);
//  cout << "-----------------------";
    // pattern7(num);
//  cout << "-----------------------";
    // pattern6(num);
//  cout << "-----------------------";
    // pattern5();
//  cout << "-----------------------";
  // pattern4();
//  cout << "-----------------------";
// pattern3();
//  cout << "-----------------------";
//  pattern2();
//  cout << "-----------------------";
//  pattern1();
 
 return 0;
}