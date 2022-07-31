#pragma once

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::InteropServices;

#using "./ClassLibrary1.dll"

using namespace ClassLibrary1;

extern "C" __declspec(dllexport) int MyAdd(int a, int b)
{
	ClassLibrary1::Class1 obj;
	return obj.myAdd(a, b);
}
extern "C" __declspec(dllexport) void MySub(int a, int b, int* c)
{
	ClassLibrary1::Class1 obj;
	return obj.mySub(a, b, *c);
}

extern "C" __declspec(dllexport) void MySetText(char* text)
{
	ClassLibrary1::Class1 obj;
	String^ str = gcnew String(text);
	obj.mySetText(str);
}

extern "C" __declspec(dllexport) void MyGetText(char** text)
{
	ClassLibrary1::Class1 obj;
	String^ str = gcnew String("");
	obj.myGetText(str);
	*text = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
}

namespace ClassLibrary2 {
	public ref class Class1
	{
		// TODO: 在此处为此类添加方法。
	};
}
