#include <windows.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <tchar.h>
#include <iostream>
using namespace std;
int a;
int main()
{
	system("title ������SB����(΢�����ս���)");
	system("color FA");
	printf("����汾:v1.0.3\n");
	printf("Pstool�汾:2.48\n");
	printf("HeHe!��ӭʹ�ü�����SB����(΢�����ս���)\n��ѡ����:\n1.�ܼܵ���Ľ���(������Ҫ����:mythware_super_password)\n2.��С�����򴰿�(��ѹ���Ƶ����Ͻ�)\n3.�˳����\n4.ɾ��������ӽ���(������Ҫ����:mythware_super_password)\n5.��������ӽ��ҵĽ���(P.S.:���԰ѹ���Ƶ����Ͻ�,ȡ������)\n6.���û�Э��\n");
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
		printf("������·��\n");	
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
