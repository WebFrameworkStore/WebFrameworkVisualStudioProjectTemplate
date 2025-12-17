#pragma once

#include <Executors/{{ cookiecutter.executor_type }}.hpp>

class {{ cookiecutter.executor_name }} : public framework::{{ cookiecutter.executor_type }}
{
public:
	void init(const framework::utility::ExecutorSettings& settings) override;

	void doPost(framework::HttpRequest& request, framework::HttpResponse& response) override;

	void doGet(framework::HttpRequest& request, framework::HttpResponse& response) override;

	void doHead(framework::HttpRequest& request, framework::HttpResponse& response) override;

	void doPut(framework::HttpRequest& request, framework::HttpResponse& response) override;

	void doDelete(framework::HttpRequest& request, framework::HttpResponse& response) override;

	void doPatch(framework::HttpRequest& request, framework::HttpResponse& response) override;
};
