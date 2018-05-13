// Middle_Component.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Poco/Delegate.h"
#include "Poco/BasicEvent.h"
//#include "Poco/"


//#pragma comment(lib,"PocoFoundation.lib")
#pragma comment(lib,"PocoFoundationd.lib")

//TODO:1.下来先搞一个http转化的服务器; [重要]
//hack:整体上使用poco的这种委托来实现消息映射管理处理;
//

using Poco::BasicEvent;
using Poco::Delegate;

class Source
{
public:
	BasicEvent<int> theEvent;

	void fireEvent(int n)
	{
		theEvent(this, n);
		theEvent(this, n + 123);
	}
};

class Target
{
public:
	void onEvent(const void* pSender, int& arg)
	{
		std::cout << "onEvent: " << arg << std::endl;
	}
	void OnEvent1(const void* pSender, int& arg)
	{
		std::cout << " on"<<arg << std::endl;
	}
};

int main(int argc, char** argv)
{
	Source source;
	Target target;

	source.theEvent += Delegate<Target, int>(
		&target, &Target::onEvent);

	source.fireEvent(42);

	source.theEvent -= Delegate<Target, int>(
		&target, &Target::onEvent);

	//没写完:童凯2018.5.13
	/*
	Server svr;




		*/


	return 0;
}
 