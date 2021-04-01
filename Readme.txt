Prerequisites:

1. For MySql server:

- My SQl workbench 8.0 CE
- Microsoft .NET framework 4.6 or higher.
- Hostname- localhost
- Port-3306
- username- root
- Password- setup by you.

2. Visual Studio 2019 community edition: 
- Make sure to download worloads like .NET Desktop development and Desktop Development with C++ while installation.
- Once installed, Go to Extensions-> Manage Extensions and download these:-
 	# MySQl for Visual Studio.
	# C++/CLR windows forms for Visual studio 2019. 

- Add Reference of MySQl.data in solution explorer window: DemoRecord ->References.
- In Form1.h, find the following code and replace with password setup by you and do it everywhere.

String^ constring = L"datasource= localhost;port=3306;username=root;password= your password";

3. To create database and table look for Sql queries in DemoRecord.sql file. Please use code present in it otherwise application wont work.
thats it you are good to go now......Thanks



