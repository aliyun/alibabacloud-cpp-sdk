// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/emas_appmonitor_20190611.hpp>
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

using namespace Alibabacloud_Emas-appmonitor20190611;

Alibabacloud_Emas-appmonitor20190611::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("emas-appmonitor"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Emas-appmonitor20190611::Client::getEndpoint(shared_ptr<string> productId,
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

GetErrorResponse Alibabacloud_Emas-appmonitor20190611::Client::getErrorWithOptions(shared_ptr<GetErrorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    body->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizModule)) {
    body->insert(pair<string, string>("BizModule", *request->bizModule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientTime)) {
    body->insert(pair<string, long>("ClientTime", *request->clientTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->did)) {
    body->insert(pair<string, string>("Did", *request->did));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    body->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetError"))},
    {"version", boost::any(string("2019-06-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetErrorResponse(callApi(params, req, runtime));
  }
  else {
    return GetErrorResponse(execute(params, req, runtime));
  }
}

GetErrorResponse Alibabacloud_Emas-appmonitor20190611::Client::getError(shared_ptr<GetErrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getErrorWithOptions(request, runtime);
}

