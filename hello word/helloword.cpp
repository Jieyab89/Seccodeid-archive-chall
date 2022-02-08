#include <iostream>
#include <unistd.h>
#include <limits.h>
#include <cstdio>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
  string pass;
  char text[255];
  FILE *name;
  char path[255];
  FILE *dir;
  //string text1 = text, path;
  dir = popen("pwd", "r");
  fgets(path, sizeof(path), dir);
  name = popen("whoami", "r");
  fgets(text, sizeof(text), name);
  fstream file;

  menuawal:
  cout <<"[========================================================================================]\n";
  cout <<"[                                       Welcome to chall                                 ]\n";
  cout <<"[========================================================================================]\n";
  cout <<" Login as : " << text;
  #ifdef _WIN32
  cout <<" System   : Windows32" << endl;
  #endif
  #ifdef _WIN64
  cout <<" System   : Windows64" << endl;
  #endif
  #ifdef __linux__
  cout <<" System   : Linux based" << endl;
  #else
	cout <<" Can't detect OS :(" << endl;
  #endif
  
  cout <<" Path     : " << path;
  cout <<" Siganture: 3580c9d59b502e795be314cf8293e6155a1953fc54eb6ff1a1d691d26661269f\n";
  cout <<" Helloword@"  << text;
  //pclose(name);
  cout <<"[========================================================================================]\n\n";
  cout <<"Welcome join this game!\n";
  cout <<"type [-h] for help, [-c] for clue, [-p] for payment and reward, [-t] for task, [-m] for view menu\n";
  cout <<"\n Example Usage : -h \n\n";

  menu:
  //printf(">: %s\n", get_current_dir_name());
  //cout <<"dir"; system("pwd");
  cout <<"Helloword@" << text;

  //printf("Helloword@%s %s", text, path); printf("%s\n", path );
//  pclose(dir);
  cout <<"Password : ";
  cin  >> pass;

  cout <<"\n";

  if(pass=="SCD-GLHF1")
  {
    //cout <<"--- BEGIN BASE64 ---\n\n";
    //cout <<"TXpRMU1Ea3pNRGszTldaaE9UVXpOMlpsWTJWaU4ySmpaRGM1WVRaaU1XVT0= \n\n";
    //cout <<"--- END BASE64 ---\n\n";
    //cout <<"\n";
    file.open("DECODE.txt", ios::out);
	  if (!file)
    {
		  cout << "[+] File has been created!";
	  }
	  else
    {
      cout <<"GOTCHA......\n";
		  cout << "Saved .txt file. Check your folder : ";
      cout << path;
		  file << "--- BEGIN BASE64 ---\n\n";
      file << "TXpRMU1Ea3pNRGszTldaaE9UVXpOMlpsWTJWaU4ySmpaRGM1WVRaaU1XVT0= \n\n";
      file <<"--- END BASE64 ---\n\n";
		  file.close();
	  }
     cout <<"SAVED DECODE.txt\n\n";
	   return 0;
  }

  else if(pass=="-h")
  {
    cout <<"\n";
    cout <<"[Requirement]\n";
    cout <<"1. Exiftool\n";
    cout <<"2. Hashcat or anything tool\n";

    cout <<"\n";
    cout <<"[Task]\n";
    cout <<"1. Find a password to get the base64 file code\n";
    cout <<"2. Decode the hash into plain text \n";
    cout <<"3. Submit your answer:\n";
    cout <<"\n";
    cout <<"Link : https://forum.seccodeid.com/quiz/seccodeid\n";
    cout <<"* Make a report video or pdf file and then upload it on Google drive\n";
    cout <<"\n";

    goto menu;
  }

  else if(pass=="-c")
  {
    cout <<"\n";
    cout <<"[Clue]\n";
    cout <<"1. You can do buffer overflow exploit\n";
    cout <<"2. You can use the" << "dog.jpg" <<"image file as a clue \n";
    cout <<"3. Use exifdata techniques or read metadata on the image file \n";
    cout <<"4. Use seccodeidwordlist.txt to help find plain text\n";
    cout <<"\n";

    goto menu;
  }

  else if(pass=="-p")
  {
    payment:
    cout <<"\n";
    cout <<"Payment and Reward\n\n";
    cout <<"[+] Gopay\n";
    cout <<"[+] Dana\n";
    cout <<"[+] BRI\n";
    cout <<"[+] BCA\n";
    cout <<"[+] Mandiri\n";
    cout <<"[+] Pulsa\n";
    cout <<"[+] Steam Wallet\n";
    cout <<"\n\n";
    cout <<"International payment\n\n";
    cout <<"[+] Steam Wallet\n\n";

    goto menu;
  }

  else if(pass=="-t")
  {
    cout <<"[Task]\n";
    cout <<"1. Find a password to get the base64 file code\n";
    cout <<"2. Decode the hash into plain text \n";
    cout <<"3. Submit your answer:\n";
    cout <<"\n";
    cout <<"Link : https://forum.seccodeid.com/quiz/seccodeid\n";
    cout <<"* Make a report video or pdf file and then upload it on Google drive\n";
    cout <<"\n";

    goto menu;
  }

  else if(pass=="-m")
  {
    goto menuawal;
  }

  else
  {
    cout <<":p\n";
    system("clear");
    goto menu;
  }

}
