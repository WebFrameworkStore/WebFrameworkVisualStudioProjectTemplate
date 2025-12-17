#pragma once

#include <Executors/Executor.hpp>

class Executor : public framework::Executor
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
