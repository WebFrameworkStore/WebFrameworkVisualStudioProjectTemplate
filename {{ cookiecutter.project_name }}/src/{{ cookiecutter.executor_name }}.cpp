#include "{{ cookiecutter.executor_name }}.h"

void {{ cookiecutter.executor_name }}::init(const framework::utility::ExecutorSettings& settings)
{

}

void {{ cookiecutter.executor_name }}::doPost(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void {{ cookiecutter.executor_name }}::doGet(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void {{ cookiecutter.executor_name }}::doHead(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void {{ cookiecutter.executor_name }}::doPut(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void {{ cookiecutter.executor_name }}::doDelete(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}

void {{ cookiecutter.executor_name }}::doPatch(framework::HttpRequest& request, framework::HttpResponse& response)
{
	request.throwException<framework::exceptions::NotImplementedDoMethodException>(__func__, typeid(*this).name());
}
