// Important Header File
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;


class Assistant
{

// needed method
public:
    void greet();
    void command();
    int random();
};

void Assistant :: greet()
{

    cout<<"\t\t\t\t\t _______________________________________________________\n";
    cout<<"\t\t\t\t\t|                                                       | \n";
    cout<<"\t\t\t\t\t|                SPEAKING ASSISTANT PROJECT             |\n";
    cout<<"\t\t\t\t\t|_______________________________________________________|\n";

    int ran; 

    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour >= 4 && time->tm_hour < 12)
    {
        cout << "Good Morning Shashwat Sir!\n";
            string phrase = "Good Morning Shashwat Sir";
            string command = "espeak \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
    }

    else if (time->tm_hour >= 12 && time->tm_hour <= 18) // 6PM
    {
        cout << "Good Afternoon Shashwat Sir!\n";
            string phrase = "Good Afternoon Shashwat Sir";
            string command = "espeak \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
    }

    else
    {
        cout<<"Good Evening Shashwat Sir\n";
            string phrase = "Good Evening Shashwat Sir";
            string command = "espeak -v +f2 -p7 -s150 -g1  \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
    }

    // Using Random function to ask every time differently
    // example :: Today How can i help you, Hello Boss, I'm always there for you 

    ran = random();

    if(ran>=0 && ran <=20)
    {
        cout<<"Today, How can I help you Sir?";
            string phrase = "Today, How can I help you Sir?";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
    }


    else if(ran>20 && ran<=40)
    {
        cout<<"I'm Always there for you!";
            string phrase = "I'm Always there for you!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
    }

    else if(ran>40 && ran<=60)
    {
        cout<<"Nice to see you Again!";
            string phrase = "Nice to see you Again!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
    }

    else if(ran>60 && ran<=80)
    {
        cout<<"Hope you are doing Great!";
            string phrase = "Hope you are doing Great!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
    }

    else
    {
        cout<<"How are you? How can I help you out Today?";
            string phrase = "How are you? How can I help you out Today?";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
    }

};

void Assistant :: command()
{
    string cmd;

    STARTUPINFO si;  // si is an Object
    PROCESS_INFORMATION pi; // needed for start a Process  pi is an Object

    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );

    do
    {

        cout<<"\n\n\nEnter the Task :: ";
        getline(cin, cmd);

// What Assistant can do?
        if(cmd == "what can you do")
        {
            cout<<"\n\n\nThese are the task that I can Perform :: \n";
            string phrase = "These are the task that I can Perform";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);

            // Tasks List
            cout<<"1. I can Open Notepad.\n";
            cout<<"2. I can Open Chrome.\n";
            cout<<"3. I can Open Brave.\n";
            cout<<"4. I can Open Ms Word.\n";
            cout<<"5. I can Open Vs Code.\n";
            cout<<"6. I can Open Steam.\n";
            cout<<"7. I can Open Google on Browser.\n";
            cout<<"8. I can Open Youtube on Browser. \n";
            cout<<"9. I can Open LeetCode on Browser.\n";
            cout<<"10. I can tell the time and date\n\n";
            cout<<"____Note :: All Command should in LowerCase___";
        }

// Command Notepad
        else if(cmd == "open notepad")
        {
            cout<<"Sure Sir!";
            string phrase = "Sure Sir!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
        }

// Command Chrome
        else if(cmd == "open chrome")
        {
            cout<<"Opening Chrome!";
            string phrase = "Opening Chrome!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
        }

// Command Brave
        else if(cmd == "open brave")
        {
            cout<<"Sure Sir!";
            string phrase = "Sure Sir!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files\\BraveSoftware\\Brave-Browser\\Application\\brave.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
        }

// Command Ms-Word
        else if(cmd == "open msword")
        {
            cout<<"Opening Microsoft Word...";
            string phrase = "Opening Microsoft Word";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
        }

//Command Vs-Code
        else if(cmd == "open vscode")
        {
            cout<<"Opening Visual Studio Code";
            string phrase = "Opening Visual Studio Code";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Users\\Shashwat\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
        }

// Command Steam
        else if(cmd == "open steam")
        {
            cout<<"Sure!";
            string phrase = "Sure!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            CreateProcess(TEXT("C:\\Program Files (x86)\\Steam\\steam.exe"), NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
        }

// Command Google
        else if(cmd == "open google")
        {
            cout<<"Opening Google Baba!";
            string phrase = "Opening Google BaBa!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            system("start https://www.google.com");
        }

// Command YouTube
        else if(cmd == "open youtube")
        {
            cout<<"Opening Youtube!";
            string phrase = "Opening Youtube!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com");
        }

// Command LeetCode
        else if(cmd == "open leetcode")
        {
            cout<<"Opening LeetCode!";
            string phrase = "Opening LeetCode!";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
            system("start https://leetcode.com/");
        }

// Command for Date and Time
        else if(cmd == "date" || cmd == "time")
        {
            struct tm* ptr;
            time_t t;
            t = time(NULL);
            ptr = gmtime(&t); 
            cout<<asctime(ptr);

            string phrase = asctime(ptr);
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
        }

// Close Assistant
        else if(cmd == "bye")
        {
            cout<<"Bye Shashwat Sir!";
            string phrase = "Bye Shashwat Sir";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);

            exit(0);
        }

        else if(cmd == "shutdown")
        {
            cout<<"Bye Shashwat Sir!";
            string phrase = "Bye Shashwat Sir";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system("shutdown -P now");
        }

        else
        {
            cout<<"Sorry! Didn't Understand that.";
            string phrase = "Sorry! Didn't Understand that.";
            string command = "espeak -v +f2 -p7 -s150 -g1 \""+phrase+"\"";
            const char* charCommand = command.c_str();
            system(charCommand);
        }

    }while(true);
}
// Random Number Generator
int Assistant :: random()
{
    int rand_num;
    srand(time(0));
    rand_num = rand() %100 + 1;

    return (rand_num);
}

int main()
{

    Assistant obj;
    obj.greet();
    obj.command();
    return (0);
}
