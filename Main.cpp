//Muqarib T. Anwar || craftdiamonds -- 12/12/19 -- Two Way Encryption 

/*
<><><> How to use <><><>
Encryption:
1. Type any desired message (with the exeption of spaces)
2. Choose to Encrypt your message by typing  "1" and pressing "Enter"
3. Finally, follow the on screen instructions to input another message!

Decryption:
1. Type a previously Encrypted message (with the exeption of spaces)
2. Choose to Decrypt your message by typing  "2" and pressing "Enter"
3. Finally, follow the on screen instructions of to input another message!

Key: 3
*/

//Start of Program
#include <iostream> 
using namespace std;

int main()
{
   char again;
   int a, x;
   int b, y;
   char str[100];
   
   do {
   cout << "Type message:\t";
   cin >> str;

   cout << "\nChoose an Option:\n";
   cout << "1 = Encrypt\n";
   cout << "2 = Decrypt\n";
   cin >> x;
   
   switch(x)
   {
      //Encrypt
      case 1:
         for(a = 0; (a < 100 && str[a] != '\0'); a++)
         str[a] = str[a] + 3; 
         cout << "\nEncrypted message: " << str << endl;
         cout << "\nPress 1 and Enter to return\n";

      
       break;

      //Decrypt
      case 2:
         for(a = 0; (a < 100 && str[a] != '\0'); a++)
         str[a] = str[a] - 3; 

      cout << "\nDecrypted message: " << str << endl;
      cout << "\nPress 1 and Enter to return\n";

      break;

      default:
         cout << "\nInvalid Message - Encryption/Decryption Not Possible\n";

   
   } 
   cin>>again;
}while(toupper(again) == '1');
   return 0;
}
//End of Program