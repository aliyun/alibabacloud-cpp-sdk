// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/facebody_20200910.hpp>
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

using namespace Alibabacloud_Facebody20200910;

Alibabacloud_Facebody20200910::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("facebody"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Facebody20200910::Client::getEndpoint(shared_ptr<string> productId,
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

DetectIPCPedestrianOptimizedResponse Alibabacloud_Facebody20200910::Client::detectIPCPedestrianOptimizedWithOptions(shared_ptr<DetectIPCPedestrianOptimizedRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    body->insert(pair<string, long>("height", *request->height));
  }
  if (!Darabonba_Util::Client::isUnset<vector<uint8_t>>(request->imageData)) {
    body->insert(pair<string, vector<uint8_t>>("imageData", *request->imageData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->width)) {
    body->insert(pair<string, long>("width", *request->width));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectIPCPedestrianOptimized"))},
    {"version", boost::any(string("2020-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/viapi/k8s/facebody/detect-ipc-pedestrian-optimized"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectIPCPedestrianOptimizedResponse(callApi(params, req, runtime));
}

DetectIPCPedestrianOptimizedResponse Alibabacloud_Facebody20200910::Client::detectIPCPedestrianOptimized(shared_ptr<DetectIPCPedestrianOptimizedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return detectIPCPedestrianOptimizedWithOptions(request, headers, runtime);
}

ExecuteServerSideVerificationResponse Alibabacloud_Facebody20200910::Client::executeServerSideVerificationWithOptions(shared_ptr<ExecuteServerSideVerificationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateName)) {
    body->insert(pair<string, string>("certificateName", *request->certificateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateNumber)) {
    body->insert(pair<string, string>("certificateNumber", *request->certificateNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facialPictureData)) {
    body->insert(pair<string, string>("facialPictureData", *request->facialPictureData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facialPictureUrl)) {
    body->insert(pair<string, string>("facialPictureUrl", *request->facialPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneType)) {
    body->insert(pair<string, string>("sceneType", *request->sceneType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteServerSideVerification"))},
    {"version", boost::any(string("2020-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/viapi/thirdparty/realperson/execServerSideVerification"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteServerSideVerificationResponse(callApi(params, req, runtime));
}

ExecuteServerSideVerificationResponse Alibabacloud_Facebody20200910::Client::executeServerSideVerification(shared_ptr<ExecuteServerSideVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeServerSideVerificationWithOptions(request, headers, runtime);
}

