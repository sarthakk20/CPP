#include <iostream>
using namespace std;

int main(){
    // Nesting Patterns

    // Basic - print start
    // int count = 5;
    // for (int i = 1; i <= count; i++)
    // {
    //     cout<< "*";
    // }
    // output:
    //             *****


    // Basic - print square pattern from *

    // int m = 5;
    // int n = 5;

    // for(int i = 1; i <= m; i++)  //outer
    // {
    //     for (int j = 1; j <= n; j++)   //inner
    //     {
    //         cout<< "*";
    //     }
    //         cout<<endl;
    // }
    // output:
    //             *****
    //             *****
    //             *****
    //             *****
    //             *****

    // Basic - square pattern using 1 2 3 4
    // int m = 5;
    // int n = 5;

    // for(int i = 1; i <= m; i++)  //outer
    // {
    //     for (int j = 1; j <= n; j++)  //inner
    //     {
    //         cout<< j << " ";
    //     }
    //         cout<<endl;
    // }
    // // output:
    //             1 2 3 4 5
    //             1 2 3 4 5
    //             1 2 3 4 5
    //             1 2 3 4 5
    //             1 2 3 4 5
    
    // Basic - square pattern using A B C D E
    // int m = 5;
    // int n = 5;

    // for(int i = 1; i <= m; i++)  //outer
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++)  //inner
    //     {
    //         cout<< ch << "";
    //         ch++;
    //     }
    //         cout<<endl;
    // }
    // output:
    //             A B C D E 
    //             A B C D E 
    //             A B C D E 
    //             A B C D E 

    // Basic - print num 

    // int num = 1;
    // int m = 3;
    // int n = 3;

    // for(int i = 1; i <= m; i++)  //outer
    // {
    //     for (int j = 1; j <= n; j++)  //inner
    //     {
    //         cout<< num << " ";
    //         num++;
    //     }
    //         cout<<endl;
    // }
    // output:
    //                   1 2 3 
    //                   4 5 6
    //                   7 8 9

    // Basic - print ABC... 

    // char ch = 'A';
    // int m = 3;
    // int n = 3;

    // for(int i = 1; i <= m; i++)  //outer
    // {
    //     for (int j = 1; j <= n; j++)  //inner
    //     {
    //         cout<< ch << " ";
    //         ch++;
    //     }
    //         cout<<endl;
    // }
    // output:
    //               A B C
    //               D E F
    //               G H I

    // Basic - flip pyramid pattern
    // int m = 5;
    // int n = 5;

    // for(int i = 0; i <= m-1; i++)  //outer
    // {
    //     for (int j = 1; j <= n-i; j++)  //inner
    //     {
    //         cout<< j << " ";
    //     }
    //         cout<<endl;
    // }
    // output:
    //             1 2 3 4 5
    //             1 2 3 4 
    //             1 2 3 
    //             1 2
    //             1
    
    // Basic - pyramid pattern
    // int m = 5;

    // for(int i = 1; i <= m; i++)  //outer
    // {
    //     for (int j = 1; j <= i; j++)  //inner
    //     {
    //         cout<< j << " ";
    //     }
    //         cout<<endl;
    // }
    // output:
    //          1 
    //          1 2 
    //          1 2 3 
    //          1 2 3 4 

    // Basic - pyramid pattern for A BB CCC DDD..
    // int m = 5;
    // char ch = 'A';
    
    // for(int i = 0; i <= m-1; i++){  //outer
    //     for (int j = 1; j <= i+1; j++)  //inner
    //     {
    //         cout<< ch << " ";
    //     }
    //         ch++;
    //         cout<<endl;
    // }
    // output:
    //              A 
    //              B B
    //              C C C
    //              D D D D
    //              E E E E E

    // Basic - pyramid pattern for A BB CCC DDD..
    // int m = 5;
    
    // for(int i = 0; i <= m-1; i++){  //outer
    //     char ch = 'A';
    //     for (int j = 1; j <= i+1; j++)  //inner
    //     {
    //         cout<< ch << " ";
    //         ch++;
    //     }
    //         cout<<endl;
    // }
    // output:
    //              A 
    //              A B
    //              A B C
    //              A B C D
    //              A B C D E

    // Basic - reverse triangle pattern
    // int m = 5;
    
    // for(int i = 1; i <= m; i++){  //outer
    
    //     for (int j = i; j > 0 ; j--)  //inner
    //     {
    //         cout<< j << " ";
    //     }
    //         cout<<endl;
    // }
    // output:
    //          1 
    //          2 1
    //          3 2 1
    //          4 3 2 1
    //          5 4 3 2 1  

    // Basic
    // int m = 5;
    
    //     for(int i=0; i<=m; i++){  //outer
    
    //     for (int j=m-i; j>0; j--)  //inner
    //     {
    //         cout<< j << " ";
    //     }
    //         cout<<endl;
    // }
    // output:
    //          5 4 3 2 1 
    //          4 3 2 1 
    //          3 2 1 
    //          2 1
    //          1

    // Basic
    int m = 5;
    
        for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    // output:
    //          5 5 5 5 5  
    //          4 4 4 4
    //          3 3 3
    //          2 2
    //          1

    // Basic
    // int m = 5;
    
    //     for(int i=0; i<=m; i++){  //outer
    
    //     for (int j=m; j>i; j--)  //inner
    //     {
    //         cout<< j << " ";
    //     }
    //         cout<<endl;
    // }
    // output:
    //          5 4 3 2 1 
    //          5 4 3 2
    //          5 4 3 
    //          5 4
    //          5
    return 0;

}               