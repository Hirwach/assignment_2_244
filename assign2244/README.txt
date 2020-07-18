How to compile and execute your program
1.Create a folder
2.Put all the files in the newly created folder
3.Open Command Prompt or Powershell
4.Use the cd command to change directory to the folder holding the files
6.Compile the .cpp files using the g++* compiler by typing: "g++ Account.cpp SavingAccount.cpp CheckingAccount.cpp themain.cpp" (this will create a file called a.exe) 
or "g++ Account.cpp SavingAccount.cpp CheckingAccount.cpp themain.cpp -o account.exe". The only difference is that you can name your .exe file (ex: rational.exe)
7.Once a new .exe file is created, type ".\a.exe" (or ".\" followed by the name of your .exe file)

*You can install mingw and add C:\MinGW\bin; to the PATH environment variable manually if you do not have the g++ compiler installed
(You can modify the code by using your)
