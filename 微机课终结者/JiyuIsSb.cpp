#include <windows.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <tchar.h>
#include <iostream>
using namespace std;
int a;
int main()
{
	system("title 极域是SB工具(微机课终结者)");
	system("color FA");
	printf("软件版本:v1.0.3\n");
	printf("Pstool版本:2.48\n");
	printf("HeHe!欢迎使用极域是SB工具(微机课终结者)\n请选择功能:\n1.弟弟极域的进程(可能需要密码:mythware_super_password)\n2.最小化极域窗口(请把光标移到左上角)\n3.退出软件\n4.删除极域电子教室(可能需要密码:mythware_super_password)\n5.挂起极域电子教室的进程(P.S.:可以把光标移到左上角,取消挂起)\n6.打开用户协议\n");
	scanf("%d",&a);
	if(a==1)
	{
		while(1)
		{
			system("pskill.exe StudentMain.exe");
			system("sc stop TDFileFilter");
			system("sc delete TDFileFilter");
		}
	}
	else if(a==2)
	{
		while(1)
		{
			POINT p;
			GetCursorPos(&p);
			LONG x=p.x;
			LONG y=p.y;
			if(x==0&&y==0)
			{
				HWND h=GetForegroundWindow();
				if(h!=NULL)
				{
					ShowWindow(h,SW_SHOWMINIMIZED);
				}
			}
			Sleep(10);
		}
	}
	else if(a==3)
	{
		return 0;
	}
	else if(a==4)
	{
		string a;
		system("cls");
		printf("请输入路径\n");	
		cin >> a;
		system(string("del "+ a +" /Q").c_str());
	}
	else if(a==5)
	{
		system("pssuspend.exe StudentMain.exe"); 
		while(1)
		{
			POINT p;
			GetCursorPos(&p);
			LONG x=p.x;
			LONG y=p.y;
			if(x==0&&y==0)
			{
				system("pssuspend.exe -r StudentMain.exe");
			}
			Sleep(10);
		}
	}
	else if(a==6)
	{
		system("start /max eula.html");
	}
	return 0;
}
