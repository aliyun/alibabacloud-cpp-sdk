// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/qianzhou_20211111.hpp>
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

using namespace Alibabacloud_Qianzhou20211111;

Alibabacloud_Qianzhou20211111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("qianzhou"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Qianzhou20211111::Client::getEndpoint(shared_ptr<string> productId,
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

AICreateSessionMessageResponse Alibabacloud_Qianzhou20211111::Client::aICreateSessionMessageWithOptions(shared_ptr<AICreateSessionMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->employeeId)) {
    query->insert(pair<string, string>("employee_id", *request->employeeId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<AICreateSessionMessageRequestContext>(request->context)) {
    body->insert(pair<string, AICreateSessionMessageRequestContext>("context", *request->context));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    body->insert(pair<string, string>("message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("session_id", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AICreateSessionMessage"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/AICreateSessionMessage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AICreateSessionMessageResponse(callApi(params, req, runtime));
}

AICreateSessionMessageResponse Alibabacloud_Qianzhou20211111::Client::aICreateSessionMessage(shared_ptr<AICreateSessionMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aICreateSessionMessageWithOptions(request, headers, runtime);
}

CreateDiagnosisResponse Alibabacloud_Qianzhou20211111::Client::createDiagnosisWithOptions(shared_ptr<CreateDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterID)) {
    query->insert(pair<string, string>("clusterID", *request->clusterID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diagnosisType)) {
    query->insert(pair<string, string>("diagnosisType", *request->diagnosisType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDiagnosis"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/createDiagnosis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDiagnosisResponse(callApi(params, req, runtime));
}

CreateDiagnosisResponse Alibabacloud_Qianzhou20211111::Client::createDiagnosis(shared_ptr<CreateDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDiagnosisWithOptions(request, headers, runtime);
}

GetClusterResponse Alibabacloud_Qianzhou20211111::Client::getClusterWithOptions(shared_ptr<GetClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterID)) {
    query->insert(pair<string, string>("clusterID", *request->clusterID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCluster"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/getCluster"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterResponse(callApi(params, req, runtime));
}

GetClusterResponse Alibabacloud_Qianzhou20211111::Client::getCluster(shared_ptr<GetClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterWithOptions(request, headers, runtime);
}

GetClusterWarningResponse Alibabacloud_Qianzhou20211111::Client::getClusterWarningWithOptions(shared_ptr<GetClusterWarningRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterID)) {
    query->insert(pair<string, string>("clusterID", *request->clusterID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterWarning"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/getKeyClusterWarningList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterWarningResponse(callApi(params, req, runtime));
}

GetClusterWarningResponse Alibabacloud_Qianzhou20211111::Client::getClusterWarning(shared_ptr<GetClusterWarningRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterWarningWithOptions(request, headers, runtime);
}

GetDiagnosisResultResponse Alibabacloud_Qianzhou20211111::Client::getDiagnosisResultWithOptions(shared_ptr<GetDiagnosisResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->diagnosisId)) {
    query->insert(pair<string, string>("diagnosisId", *request->diagnosisId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerUid)) {
    query->insert(pair<string, string>("ownerUid", *request->ownerUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiagnosisResult"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/GetDiagnosisResult"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiagnosisResultResponse(callApi(params, req, runtime));
}

GetDiagnosisResultResponse Alibabacloud_Qianzhou20211111::Client::getDiagnosisResult(shared_ptr<GetDiagnosisResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDiagnosisResultWithOptions(request, headers, runtime);
}

GetUserClusterWarningResponse Alibabacloud_Qianzhou20211111::Client::getUserClusterWarningWithOptions(shared_ptr<GetUserClusterWarningRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userID)) {
    query->insert(pair<string, string>("userID", *request->userID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserClusterWarning"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/listUserKeyClusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserClusterWarningResponse(callApi(params, req, runtime));
}

GetUserClusterWarningResponse Alibabacloud_Qianzhou20211111::Client::getUserClusterWarning(shared_ptr<GetUserClusterWarningRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserClusterWarningWithOptions(request, headers, runtime);
}

GetWebshellTokenResponse Alibabacloud_Qianzhou20211111::Client::getWebshellTokenWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebshellToken"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/getChorusToken"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebshellTokenResponse(callApi(params, req, runtime));
}

GetWebshellTokenResponse Alibabacloud_Qianzhou20211111::Client::getWebshellToken() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWebshellTokenWithOptions(headers, runtime);
}

HelloResponse Alibabacloud_Qianzhou20211111::Client::helloWithOptions(shared_ptr<HelloRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->user)) {
    query->insert(pair<string, string>("user", *request->user));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Hello"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/hello"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HelloResponse(callApi(params, req, runtime));
}

HelloResponse Alibabacloud_Qianzhou20211111::Client::hello(shared_ptr<HelloRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return helloWithOptions(request, headers, runtime);
}

ListClusterDeprecatedAPIResponse Alibabacloud_Qianzhou20211111::Client::listClusterDeprecatedAPIWithOptions(shared_ptr<ListClusterDeprecatedAPIRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetVersion)) {
    query->insert(pair<string, string>("target_version", *request->targetVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterDeprecatedAPI"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/listDeprecatedK8sAPI"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterDeprecatedAPIResponse(callApi(params, req, runtime));
}

ListClusterDeprecatedAPIResponse Alibabacloud_Qianzhou20211111::Client::listClusterDeprecatedAPI(shared_ptr<ListClusterDeprecatedAPIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterDeprecatedAPIWithOptions(request, headers, runtime);
}

ListClusterImagesResponse Alibabacloud_Qianzhou20211111::Client::listClusterImagesWithOptions(shared_ptr<ListClusterImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageHash)) {
    query->insert(pair<string, string>("image_hash", *request->imageHash));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageName)) {
    query->insert(pair<string, string>("image_name", *request->imageName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterImages"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/listClusterPodImages"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterImagesResponse(callApi(params, req, runtime));
}

ListClusterImagesResponse Alibabacloud_Qianzhou20211111::Client::listClusterImages(shared_ptr<ListClusterImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterImagesWithOptions(request, headers, runtime);
}

ListUserClustersResponse Alibabacloud_Qianzhou20211111::Client::listUserClustersWithOptions(shared_ptr<ListUserClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->current)) {
    query->insert(pair<string, string>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userID)) {
    query->insert(pair<string, string>("userID", *request->userID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserClusters"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/listUserClusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserClustersResponse(callApi(params, req, runtime));
}

ListUserClustersResponse Alibabacloud_Qianzhou20211111::Client::listUserClusters(shared_ptr<ListUserClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUserClustersWithOptions(request, headers, runtime);
}

QueryByInstanceInfoResponse Alibabacloud_Qianzhou20211111::Client::queryByInstanceInfoWithOptions(shared_ptr<QueryByInstanceInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceId)) {
    body->insert(pair<string, vector<string>>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryByInstanceInfo"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/queryByInstanceInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryByInstanceInfoResponse(callApi(params, req, runtime));
}

QueryByInstanceInfoResponse Alibabacloud_Qianzhou20211111::Client::queryByInstanceInfo(shared_ptr<QueryByInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryByInstanceInfoWithOptions(request, headers, runtime);
}

QueryNodeInfoResponse Alibabacloud_Qianzhou20211111::Client::queryNodeInfoWithOptions(shared_ptr<QueryNodeInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryNodeInfo"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/popapi/queryByInstanceId"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryNodeInfoResponse(callApi(params, req, runtime));
}

QueryNodeInfoResponse Alibabacloud_Qianzhou20211111::Client::queryNodeInfo(shared_ptr<QueryNodeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryNodeInfoWithOptions(request, headers, runtime);
}

