// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/tingwu_20230930.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Tingwu20230930;

Alibabacloud_Tingwu20230930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("tingwu"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Tingwu20230930::Client::getEndpoint(shared_ptr<string> productId,
                                                        shared_ptr<string> regionId,
                                                        shared_ptr<string> endpointRule,
                                                        shared_ptr<string> network,
                                                        shared_ptr<string> suffix,
                                                        shared_ptr<map<string, string>> endpointMap,
                                                        shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateTaskResponse Alibabacloud_Tingwu20230930::Client::createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    query->insert(pair<string, string>("operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTaskRequestInput>(request->input)) {
    body->insert(pair<string, CreateTaskRequestInput>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTaskRequestParameters>(request->parameters)) {
    body->insert(pair<string, CreateTaskRequestParameters>("Parameters", *request->parameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTask"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/tingwu/v2/tasks"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskResponse(callApi(params, req, runtime));
}

CreateTaskResponse Alibabacloud_Tingwu20230930::Client::createTask(shared_ptr<CreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTaskWithOptions(request, headers, runtime);
}

GetTaskInfoResponse Alibabacloud_Tingwu20230930::Client::getTaskInfoWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskInfo"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/tingwu/v2/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskInfoResponse(callApi(params, req, runtime));
}

GetTaskInfoResponse Alibabacloud_Tingwu20230930::Client::getTaskInfo(shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskInfoWithOptions(TaskId, headers, runtime);
}

