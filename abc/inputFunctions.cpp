/*
Input functions
Author: kma
Date: Jan 22, 2024
*/

# include <iostream>
using namespace std;

int main(){
        // We declared variables.
        int x_i, y_i;
        double z_d;
        char p_c, q_c, r_c, s_c, t_c;

        //cin>> p_c >> x_i >> z_d ;
        //cout << p_c << " " << x_i << " " << z_d;

        // ignore next m characters or until 
        // 'c' (whichever happens first)
        /*
        cin.ignore(5, 'w');
        cin >> y_i;
        cout << y_i;
        */
        // ab cd
        /*
        cin.ignore(2, 'y');
        cin.get(q_c); // get reads one character at a time and does not ignore space
        cout << q_c;
        */

        // peek() : It will help you read one char from the stream, but will not remove it from the stream.
        r_c = cin.peek();
        cin >> s_c;
        cout << r_c << " " << s_c;

        // putback() : Puts the character 'c' back to the input stream so the next extracted character will be 'c'
        cin.putback('m');
        cin >> t_c;
        cout << t_c;
        
        // myz


        return 0;
}