#include "Executor.h"

void Executor::init(const framework::utility::ExecutorSettings& settings)
{

}

void Executor::doPost(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void Executor::doGet(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void Executor::doHead(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void Executor::doPut(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void Executor::doDelete(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void Executor::doPatch(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}
