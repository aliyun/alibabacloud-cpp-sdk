// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_plugin_20220112.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_PaiPlugin20220112;

Alibabacloud_PaiPlugin20220112::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("paiplugin"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PaiPlugin20220112::Client::getEndpoint(shared_ptr<string> productId,
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

SendMessageResponse Alibabacloud_PaiPlugin20220112::Client::sendMessage(shared_ptr<SendMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendMessageWithOptions(request, headers, runtime);
}

SendMessageResponse Alibabacloud_PaiPlugin20220112::Client::sendMessageWithOptions(shared_ptr<SendMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->outIds)) {
    body->insert(pair<string, vector<string>>("OutIds", *request->outIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->phoneNumbers)) {
    body->insert(pair<string, vector<string>>("PhoneNumbers", *request->phoneNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleId)) {
    body->insert(pair<string, string>("ScheduleId", *request->scheduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signName)) {
    body->insert(pair<string, string>("SignName", *request->signName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureId)) {
    body->insert(pair<string, string>("SignatureId", *request->signatureId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->smsUpExtendCodes)) {
    body->insert(pair<string, vector<string>>("SmsUpExtendCodes", *request->smsUpExtendCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->templateParams)) {
    body->insert(pair<string, vector<string>>("TemplateParams", *request->templateParams));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessage"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/messages"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendMessageResponse(callApi(params, req, runtime));
}

