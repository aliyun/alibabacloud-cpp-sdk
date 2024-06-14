// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/contact_center_ai20240603.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_ContactCenterAI20240603;

Alibabacloud_ContactCenterAI20240603::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("contactcenterai"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ContactCenterAI20240603::Client::getEndpoint(shared_ptr<string> productId,
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

RunCompletionResponse Alibabacloud_ContactCenterAI20240603::Client::runCompletionWithOptions(shared_ptr<string> workspaceId,
                                                                                             shared_ptr<string> appId,
                                                                                             shared_ptr<RunCompletionRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<RunCompletionRequestDialogue>(request->dialogue)) {
    body->insert(pair<string, RunCompletionRequestDialogue>("Dialogue", *request->dialogue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunCompletionRequestDimensions>>(request->dimensions)) {
    body->insert(pair<string, vector<RunCompletionRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunCompletionRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<RunCompletionRequestFields>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCode)) {
    body->insert(pair<string, string>("ModelCode", *request->modelCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("Stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->templateIds)) {
    body->insert(pair<string, vector<long>>("TemplateIds", *request->templateIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCompletion"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/completion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCompletionResponse(callApi(params, req, runtime));
}

RunCompletionResponse Alibabacloud_ContactCenterAI20240603::Client::runCompletion(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<RunCompletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runCompletionWithOptions(workspaceId, appId, request, headers, runtime);
}

RunCompletionMessageResponse Alibabacloud_ContactCenterAI20240603::Client::runCompletionMessageWithOptions(shared_ptr<string> workspaceId,
                                                                                                           shared_ptr<string> appId,
                                                                                                           shared_ptr<RunCompletionMessageRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<RunCompletionMessageRequestMessages>>(request->messages)) {
    body->insert(pair<string, vector<RunCompletionMessageRequestMessages>>("Messages", *request->messages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCode)) {
    body->insert(pair<string, string>("ModelCode", *request->modelCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("Stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCompletionMessage"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/completion_message"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCompletionMessageResponse(callApi(params, req, runtime));
}

RunCompletionMessageResponse Alibabacloud_ContactCenterAI20240603::Client::runCompletionMessage(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<RunCompletionMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runCompletionMessageWithOptions(workspaceId, appId, request, headers, runtime);
}

