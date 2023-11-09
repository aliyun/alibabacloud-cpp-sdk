// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ververica_20220718.hpp>
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

using namespace Alibabacloud_Ververica20220718;

Alibabacloud_Ververica20220718::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ververica"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ververica20220718::Client::getEndpoint(shared_ptr<string> productId,
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

CreateDeploymentResponse Alibabacloud_Ververica20220718::Client::createDeploymentWithOptions(shared_ptr<string> namespace_,
                                                                                             shared_ptr<CreateDeploymentRequest> request,
                                                                                             shared_ptr<CreateDeploymentHeaders> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeployment"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeploymentResponse(callApi(params, req, runtime));
}

CreateDeploymentResponse Alibabacloud_Ververica20220718::Client::createDeployment(shared_ptr<string> namespace_, shared_ptr<CreateDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateDeploymentHeaders> headers = make_shared<CreateDeploymentHeaders>();
  return createDeploymentWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

CreateMemberResponse Alibabacloud_Ververica20220718::Client::createMemberWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<CreateMemberRequest> request,
                                                                                     shared_ptr<CreateMemberHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMember"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gateway/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMemberResponse(callApi(params, req, runtime));
}

CreateMemberResponse Alibabacloud_Ververica20220718::Client::createMember(shared_ptr<string> namespace_, shared_ptr<CreateMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateMemberHeaders> headers = make_shared<CreateMemberHeaders>();
  return createMemberWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

CreateSavepointResponse Alibabacloud_Ververica20220718::Client::createSavepointWithOptions(shared_ptr<string> namespace_,
                                                                                           shared_ptr<CreateSavepointRequest> request,
                                                                                           shared_ptr<CreateSavepointHeaders> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentId)) {
    body->insert(pair<string, string>("deploymentId", *request->deploymentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->nativeFormat)) {
    body->insert(pair<string, bool>("nativeFormat", *request->nativeFormat));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSavepoint"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/savepoints"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSavepointResponse(callApi(params, req, runtime));
}

CreateSavepointResponse Alibabacloud_Ververica20220718::Client::createSavepoint(shared_ptr<string> namespace_, shared_ptr<CreateSavepointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSavepointHeaders> headers = make_shared<CreateSavepointHeaders>();
  return createSavepointWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

CreateVariableResponse Alibabacloud_Ververica20220718::Client::createVariableWithOptions(shared_ptr<string> namespace_,
                                                                                         shared_ptr<CreateVariableRequest> request,
                                                                                         shared_ptr<CreateVariableHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVariable"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/variables"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVariableResponse(callApi(params, req, runtime));
}

CreateVariableResponse Alibabacloud_Ververica20220718::Client::createVariable(shared_ptr<string> namespace_, shared_ptr<CreateVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateVariableHeaders> headers = make_shared<CreateVariableHeaders>();
  return createVariableWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

DeleteDeploymentResponse Alibabacloud_Ververica20220718::Client::deleteDeploymentWithOptions(shared_ptr<string> namespace_,
                                                                                             shared_ptr<string> deploymentId,
                                                                                             shared_ptr<DeleteDeploymentHeaders> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeployment"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeploymentResponse(callApi(params, req, runtime));
}

DeleteDeploymentResponse Alibabacloud_Ververica20220718::Client::deleteDeployment(shared_ptr<string> namespace_, shared_ptr<string> deploymentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteDeploymentHeaders> headers = make_shared<DeleteDeploymentHeaders>();
  return deleteDeploymentWithOptions(shared_ptr<string> namespace_, deploymentId, headers, runtime);
}

DeleteJobResponse Alibabacloud_Ververica20220718::Client::deleteJobWithOptions(shared_ptr<string> namespace_,
                                                                               shared_ptr<string> jobId,
                                                                               shared_ptr<DeleteJobHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteJob"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteJobResponse(callApi(params, req, runtime));
}

DeleteJobResponse Alibabacloud_Ververica20220718::Client::deleteJob(shared_ptr<string> namespace_, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteJobHeaders> headers = make_shared<DeleteJobHeaders>();
  return deleteJobWithOptions(shared_ptr<string> namespace_, jobId, headers, runtime);
}

DeleteMemberResponse Alibabacloud_Ververica20220718::Client::deleteMemberWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<string> member,
                                                                                     shared_ptr<DeleteMemberHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMember"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gateway/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(member)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMemberResponse(callApi(params, req, runtime));
}

DeleteMemberResponse Alibabacloud_Ververica20220718::Client::deleteMember(shared_ptr<string> namespace_, shared_ptr<string> member) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteMemberHeaders> headers = make_shared<DeleteMemberHeaders>();
  return deleteMemberWithOptions(shared_ptr<string> namespace_, member, headers, runtime);
}

DeleteSavepointResponse Alibabacloud_Ververica20220718::Client::deleteSavepointWithOptions(shared_ptr<string> namespace_,
                                                                                           shared_ptr<string> savepointId,
                                                                                           shared_ptr<DeleteSavepointHeaders> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSavepoint"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/savepoints/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(savepointId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSavepointResponse(callApi(params, req, runtime));
}

DeleteSavepointResponse Alibabacloud_Ververica20220718::Client::deleteSavepoint(shared_ptr<string> namespace_, shared_ptr<string> savepointId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteSavepointHeaders> headers = make_shared<DeleteSavepointHeaders>();
  return deleteSavepointWithOptions(shared_ptr<string> namespace_, savepointId, headers, runtime);
}

DeleteVariableResponse Alibabacloud_Ververica20220718::Client::deleteVariableWithOptions(shared_ptr<string> namespace_,
                                                                                         shared_ptr<string> name,
                                                                                         shared_ptr<DeleteVariableHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVariable"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/variables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVariableResponse(callApi(params, req, runtime));
}

DeleteVariableResponse Alibabacloud_Ververica20220718::Client::deleteVariable(shared_ptr<string> namespace_, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteVariableHeaders> headers = make_shared<DeleteVariableHeaders>();
  return deleteVariableWithOptions(shared_ptr<string> namespace_, name, headers, runtime);
}

FlinkApiProxyResponse Alibabacloud_Ververica20220718::Client::flinkApiProxyWithOptions(shared_ptr<FlinkApiProxyRequest> request, shared_ptr<FlinkApiProxyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flinkApiPath)) {
    query->insert(pair<string, string>("flinkApiPath", *request->flinkApiPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlinkApiProxy"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/flink-ui/v2/proxy"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlinkApiProxyResponse(callApi(params, req, runtime));
}

FlinkApiProxyResponse Alibabacloud_Ververica20220718::Client::flinkApiProxy(shared_ptr<FlinkApiProxyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlinkApiProxyHeaders> headers = make_shared<FlinkApiProxyHeaders>();
  return flinkApiProxyWithOptions(request, headers, runtime);
}

GenerateResourcePlanWithFlinkConfAsyncResponse Alibabacloud_Ververica20220718::Client::generateResourcePlanWithFlinkConfAsyncWithOptions(shared_ptr<string> namespace_,
                                                                                                                                         shared_ptr<string> deploymentId,
                                                                                                                                         shared_ptr<GenerateResourcePlanWithFlinkConfAsyncRequest> request,
                                                                                                                                         shared_ptr<GenerateResourcePlanWithFlinkConfAsyncHeaders> headers,
                                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateResourcePlanWithFlinkConfAsync"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentId)) + string("/resource-plan%3AasyncGenerate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateResourcePlanWithFlinkConfAsyncResponse(callApi(params, req, runtime));
}

GenerateResourcePlanWithFlinkConfAsyncResponse Alibabacloud_Ververica20220718::Client::generateResourcePlanWithFlinkConfAsync(shared_ptr<string> namespace_, shared_ptr<string> deploymentId, shared_ptr<GenerateResourcePlanWithFlinkConfAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GenerateResourcePlanWithFlinkConfAsyncHeaders> headers = make_shared<GenerateResourcePlanWithFlinkConfAsyncHeaders>();
  return generateResourcePlanWithFlinkConfAsyncWithOptions(shared_ptr<string> namespace_, deploymentId, request, headers, runtime);
}

GetDeploymentResponse Alibabacloud_Ververica20220718::Client::getDeploymentWithOptions(shared_ptr<string> namespace_,
                                                                                       shared_ptr<string> deploymentId,
                                                                                       shared_ptr<GetDeploymentHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeployment"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeploymentResponse(callApi(params, req, runtime));
}

GetDeploymentResponse Alibabacloud_Ververica20220718::Client::getDeployment(shared_ptr<string> namespace_, shared_ptr<string> deploymentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeploymentHeaders> headers = make_shared<GetDeploymentHeaders>();
  return getDeploymentWithOptions(shared_ptr<string> namespace_, deploymentId, headers, runtime);
}

GetGenerateResourcePlanResultResponse Alibabacloud_Ververica20220718::Client::getGenerateResourcePlanResultWithOptions(shared_ptr<string> namespace_,
                                                                                                                       shared_ptr<string> ticketId,
                                                                                                                       shared_ptr<GetGenerateResourcePlanResultHeaders> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGenerateResourcePlanResult"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployments/tickets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ticketId)) + string("/resource-plan%3AasyncGenerate"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGenerateResourcePlanResultResponse(callApi(params, req, runtime));
}

GetGenerateResourcePlanResultResponse Alibabacloud_Ververica20220718::Client::getGenerateResourcePlanResult(shared_ptr<string> namespace_, shared_ptr<string> ticketId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetGenerateResourcePlanResultHeaders> headers = make_shared<GetGenerateResourcePlanResultHeaders>();
  return getGenerateResourcePlanResultWithOptions(shared_ptr<string> namespace_, ticketId, headers, runtime);
}

GetJobResponse Alibabacloud_Ververica20220718::Client::getJobWithOptions(shared_ptr<string> namespace_,
                                                                         shared_ptr<string> jobId,
                                                                         shared_ptr<GetJobHeaders> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJob"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobResponse(callApi(params, req, runtime));
}

GetJobResponse Alibabacloud_Ververica20220718::Client::getJob(shared_ptr<string> namespace_, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetJobHeaders> headers = make_shared<GetJobHeaders>();
  return getJobWithOptions(shared_ptr<string> namespace_, jobId, headers, runtime);
}

GetMemberResponse Alibabacloud_Ververica20220718::Client::getMemberWithOptions(shared_ptr<string> namespace_,
                                                                               shared_ptr<string> member,
                                                                               shared_ptr<GetMemberHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMember"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gateway/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(member)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMemberResponse(callApi(params, req, runtime));
}

GetMemberResponse Alibabacloud_Ververica20220718::Client::getMember(shared_ptr<string> namespace_, shared_ptr<string> member) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetMemberHeaders> headers = make_shared<GetMemberHeaders>();
  return getMemberWithOptions(shared_ptr<string> namespace_, member, headers, runtime);
}

GetSavepointResponse Alibabacloud_Ververica20220718::Client::getSavepointWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<string> savepointId,
                                                                                     shared_ptr<GetSavepointHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSavepoint"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/savepoints/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(savepointId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSavepointResponse(callApi(params, req, runtime));
}

GetSavepointResponse Alibabacloud_Ververica20220718::Client::getSavepoint(shared_ptr<string> namespace_, shared_ptr<string> savepointId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetSavepointHeaders> headers = make_shared<GetSavepointHeaders>();
  return getSavepointWithOptions(shared_ptr<string> namespace_, savepointId, headers, runtime);
}

ListDeploymentTargetsResponse Alibabacloud_Ververica20220718::Client::listDeploymentTargetsWithOptions(shared_ptr<string> namespace_,
                                                                                                       shared_ptr<ListDeploymentTargetsRequest> request,
                                                                                                       shared_ptr<ListDeploymentTargetsHeaders> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeploymentTargets"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-targets"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeploymentTargetsResponse(callApi(params, req, runtime));
}

ListDeploymentTargetsResponse Alibabacloud_Ververica20220718::Client::listDeploymentTargets(shared_ptr<string> namespace_, shared_ptr<ListDeploymentTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDeploymentTargetsHeaders> headers = make_shared<ListDeploymentTargetsHeaders>();
  return listDeploymentTargetsWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

ListDeploymentsResponse Alibabacloud_Ververica20220718::Client::listDeploymentsWithOptions(shared_ptr<string> namespace_,
                                                                                           shared_ptr<ListDeploymentsRequest> request,
                                                                                           shared_ptr<ListDeploymentsHeaders> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->executionMode)) {
    query->insert(pair<string, string>("executionMode", *request->executionMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeployments"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeploymentsResponse(callApi(params, req, runtime));
}

ListDeploymentsResponse Alibabacloud_Ververica20220718::Client::listDeployments(shared_ptr<string> namespace_, shared_ptr<ListDeploymentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDeploymentsHeaders> headers = make_shared<ListDeploymentsHeaders>();
  return listDeploymentsWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

ListEngineVersionMetadataResponse Alibabacloud_Ververica20220718::Client::listEngineVersionMetadataWithOptions(shared_ptr<ListEngineVersionMetadataHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEngineVersionMetadata"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/engine-version-meta.json"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEngineVersionMetadataResponse(callApi(params, req, runtime));
}

ListEngineVersionMetadataResponse Alibabacloud_Ververica20220718::Client::listEngineVersionMetadata() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListEngineVersionMetadataHeaders> headers = make_shared<ListEngineVersionMetadataHeaders>();
  return listEngineVersionMetadataWithOptions(headers, runtime);
}

ListJobsResponse Alibabacloud_Ververica20220718::Client::listJobsWithOptions(shared_ptr<string> namespace_,
                                                                             shared_ptr<ListJobsRequest> request,
                                                                             shared_ptr<ListJobsHeaders> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentId)) {
    query->insert(pair<string, string>("deploymentId", *request->deploymentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_Ververica20220718::Client::listJobs(shared_ptr<string> namespace_, shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListJobsHeaders> headers = make_shared<ListJobsHeaders>();
  return listJobsWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

ListMembersResponse Alibabacloud_Ververica20220718::Client::listMembersWithOptions(shared_ptr<string> namespace_,
                                                                                   shared_ptr<ListMembersRequest> request,
                                                                                   shared_ptr<ListMembersHeaders> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMembers"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gateway/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMembersResponse(callApi(params, req, runtime));
}

ListMembersResponse Alibabacloud_Ververica20220718::Client::listMembers(shared_ptr<string> namespace_, shared_ptr<ListMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListMembersHeaders> headers = make_shared<ListMembersHeaders>();
  return listMembersWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

ListSavepointsResponse Alibabacloud_Ververica20220718::Client::listSavepointsWithOptions(shared_ptr<string> namespace_,
                                                                                         shared_ptr<ListSavepointsRequest> request,
                                                                                         shared_ptr<ListSavepointsHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentId)) {
    query->insert(pair<string, string>("deploymentId", *request->deploymentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("jobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSavepoints"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/savepoints"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSavepointsResponse(callApi(params, req, runtime));
}

ListSavepointsResponse Alibabacloud_Ververica20220718::Client::listSavepoints(shared_ptr<string> namespace_, shared_ptr<ListSavepointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListSavepointsHeaders> headers = make_shared<ListSavepointsHeaders>();
  return listSavepointsWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

ListVariablesResponse Alibabacloud_Ververica20220718::Client::listVariablesWithOptions(shared_ptr<string> namespace_,
                                                                                       shared_ptr<ListVariablesRequest> request,
                                                                                       shared_ptr<ListVariablesHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVariables"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/variables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVariablesResponse(callApi(params, req, runtime));
}

ListVariablesResponse Alibabacloud_Ververica20220718::Client::listVariables(shared_ptr<string> namespace_, shared_ptr<ListVariablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListVariablesHeaders> headers = make_shared<ListVariablesHeaders>();
  return listVariablesWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

StartJobResponse Alibabacloud_Ververica20220718::Client::startJobWithOptions(shared_ptr<string> namespace_,
                                                                             shared_ptr<StartJobRequest> request,
                                                                             shared_ptr<StartJobHeaders> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartJob"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartJobResponse(callApi(params, req, runtime));
}

StartJobResponse Alibabacloud_Ververica20220718::Client::startJob(shared_ptr<string> namespace_, shared_ptr<StartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StartJobHeaders> headers = make_shared<StartJobHeaders>();
  return startJobWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

StartJobWithParamsResponse Alibabacloud_Ververica20220718::Client::startJobWithParamsWithOptions(shared_ptr<string> namespace_,
                                                                                                 shared_ptr<StartJobWithParamsRequest> request,
                                                                                                 shared_ptr<StartJobWithParamsHeaders> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartJobWithParams"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/jobs%3Astart"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartJobWithParamsResponse(callApi(params, req, runtime));
}

StartJobWithParamsResponse Alibabacloud_Ververica20220718::Client::startJobWithParams(shared_ptr<string> namespace_, shared_ptr<StartJobWithParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StartJobWithParamsHeaders> headers = make_shared<StartJobWithParamsHeaders>();
  return startJobWithParamsWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

StopJobResponse Alibabacloud_Ververica20220718::Client::stopJobWithOptions(shared_ptr<string> namespace_,
                                                                           shared_ptr<string> jobId,
                                                                           shared_ptr<StopJobRequest> request,
                                                                           shared_ptr<StopJobHeaders> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopJob"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("%3Astop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopJobResponse(callApi(params, req, runtime));
}

StopJobResponse Alibabacloud_Ververica20220718::Client::stopJob(shared_ptr<string> namespace_, shared_ptr<string> jobId, shared_ptr<StopJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StopJobHeaders> headers = make_shared<StopJobHeaders>();
  return stopJobWithOptions(shared_ptr<string> namespace_, jobId, request, headers, runtime);
}

UpdateDeploymentResponse Alibabacloud_Ververica20220718::Client::updateDeploymentWithOptions(shared_ptr<string> namespace_,
                                                                                             shared_ptr<string> deploymentId,
                                                                                             shared_ptr<UpdateDeploymentRequest> request,
                                                                                             shared_ptr<UpdateDeploymentHeaders> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeployment"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeploymentResponse(callApi(params, req, runtime));
}

UpdateDeploymentResponse Alibabacloud_Ververica20220718::Client::updateDeployment(shared_ptr<string> namespace_, shared_ptr<string> deploymentId, shared_ptr<UpdateDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateDeploymentHeaders> headers = make_shared<UpdateDeploymentHeaders>();
  return updateDeploymentWithOptions(shared_ptr<string> namespace_, deploymentId, request, headers, runtime);
}

UpdateMemberResponse Alibabacloud_Ververica20220718::Client::updateMemberWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<UpdateMemberRequest> request,
                                                                                     shared_ptr<UpdateMemberHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->workspace)) {
    realHeaders->insert(pair<string, string>("workspace", Darabonba_Util::Client::toJSONString(headers->workspace)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMember"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gateway/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/members"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMemberResponse(callApi(params, req, runtime));
}

UpdateMemberResponse Alibabacloud_Ververica20220718::Client::updateMember(shared_ptr<string> namespace_, shared_ptr<UpdateMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateMemberHeaders> headers = make_shared<UpdateMemberHeaders>();
  return updateMemberWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

