// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/umeng_finplus_20211125.hpp>
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

using namespace Alibabacloud_Umeng-finplus20211125;

Alibabacloud_Umeng-finplus20211125::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("umeng-finplus"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Umeng-finplus20211125::Client::getEndpoint(shared_ptr<string> productId,
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

GetMessageStatusResponse Alibabacloud_Umeng-finplus20211125::Client::getMessageStatusWithOptions(shared_ptr<GetMessageStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMessageStatus"))},
    {"version", boost::any(string("2021-11-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sms/message/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMessageStatusResponse(callApi(params, req, runtime));
}

GetMessageStatusResponse Alibabacloud_Umeng-finplus20211125::Client::getMessageStatus(shared_ptr<GetMessageStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMessageStatusWithOptions(request, headers, runtime);
}

SendBatchMessageResponse Alibabacloud_Umeng-finplus20211125::Client::sendBatchMessageWithOptions(shared_ptr<SendBatchMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchFlag)) {
    body->insert(pair<string, string>("BatchFlag", *request->batchFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendInfo)) {
    body->insert(pair<string, string>("ExtendInfo", *request->extendInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idType)) {
    body->insert(pair<string, string>("IdType", *request->idType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumberJson)) {
    body->insert(pair<string, string>("PhoneNumberJson", *request->phoneNumberJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signNameJson)) {
    body->insert(pair<string, string>("SignNameJson", *request->signNameJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificChannel)) {
    body->insert(pair<string, string>("SpecificChannel", *request->specificChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    body->insert(pair<string, string>("TemplateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateParamJson)) {
    body->insert(pair<string, string>("TemplateParamJson", *request->templateParamJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendBatchMessage"))},
    {"version", boost::any(string("2021-11-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sms/message/send"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendBatchMessageResponse(callApi(params, req, runtime));
}

SendBatchMessageResponse Alibabacloud_Umeng-finplus20211125::Client::sendBatchMessage(shared_ptr<SendBatchMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendBatchMessageWithOptions(request, headers, runtime);
}

