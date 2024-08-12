// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ververica_20220718.hpp>
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

CreateDeploymentDraftResponse Alibabacloud_Ververica20220718::Client::createDeploymentDraftWithOptions(shared_ptr<string> namespace_,
                                                                                                       shared_ptr<CreateDeploymentDraftRequest> request,
                                                                                                       shared_ptr<CreateDeploymentDraftHeaders> headers,
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
    {"action", boost::any(string("CreateDeploymentDraft"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-drafts"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeploymentDraftResponse(callApi(params, req, runtime));
}

CreateDeploymentDraftResponse Alibabacloud_Ververica20220718::Client::createDeploymentDraft(shared_ptr<string> namespace_, shared_ptr<CreateDeploymentDraftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateDeploymentDraftHeaders> headers = make_shared<CreateDeploymentDraftHeaders>();
  return createDeploymentDraftWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

CreateFolderResponse Alibabacloud_Ververica20220718::Client::createFolderWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<CreateFolderRequest> request,
                                                                                     shared_ptr<CreateFolderHeaders> headers,
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
    {"action", boost::any(string("CreateFolder"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/folder"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFolderResponse(callApi(params, req, runtime));
}

CreateFolderResponse Alibabacloud_Ververica20220718::Client::createFolder(shared_ptr<string> namespace_, shared_ptr<CreateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateFolderHeaders> headers = make_shared<CreateFolderHeaders>();
  return createFolderWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
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

CreateUdfArtifactResponse Alibabacloud_Ververica20220718::Client::createUdfArtifactWithOptions(shared_ptr<string> namespace_,
                                                                                               shared_ptr<CreateUdfArtifactRequest> request,
                                                                                               shared_ptr<CreateUdfArtifactHeaders> headers,
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
    {"action", boost::any(string("CreateUdfArtifact"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/udfartifacts"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUdfArtifactResponse(callApi(params, req, runtime));
}

CreateUdfArtifactResponse Alibabacloud_Ververica20220718::Client::createUdfArtifact(shared_ptr<string> namespace_, shared_ptr<CreateUdfArtifactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateUdfArtifactHeaders> headers = make_shared<CreateUdfArtifactHeaders>();
  return createUdfArtifactWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
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

DeleteCustomConnectorResponse Alibabacloud_Ververica20220718::Client::deleteCustomConnectorWithOptions(shared_ptr<string> namespace_,
                                                                                                       shared_ptr<string> connectorName,
                                                                                                       shared_ptr<DeleteCustomConnectorHeaders> headers,
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
    {"action", boost::any(string("DeleteCustomConnector"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/connectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(connectorName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomConnectorResponse(callApi(params, req, runtime));
}

DeleteCustomConnectorResponse Alibabacloud_Ververica20220718::Client::deleteCustomConnector(shared_ptr<string> namespace_, shared_ptr<string> connectorName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteCustomConnectorHeaders> headers = make_shared<DeleteCustomConnectorHeaders>();
  return deleteCustomConnectorWithOptions(shared_ptr<string> namespace_, connectorName, headers, runtime);
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

DeleteDeploymentDraftResponse Alibabacloud_Ververica20220718::Client::deleteDeploymentDraftWithOptions(shared_ptr<string> namespace_,
                                                                                                       shared_ptr<string> deploymentDraftId,
                                                                                                       shared_ptr<DeleteDeploymentDraftHeaders> headers,
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
    {"action", boost::any(string("DeleteDeploymentDraft"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-drafts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentDraftId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeploymentDraftResponse(callApi(params, req, runtime));
}

DeleteDeploymentDraftResponse Alibabacloud_Ververica20220718::Client::deleteDeploymentDraft(shared_ptr<string> namespace_, shared_ptr<string> deploymentDraftId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteDeploymentDraftHeaders> headers = make_shared<DeleteDeploymentDraftHeaders>();
  return deleteDeploymentDraftWithOptions(shared_ptr<string> namespace_, deploymentDraftId, headers, runtime);
}

DeleteFolderResponse Alibabacloud_Ververica20220718::Client::deleteFolderWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<string> folderId,
                                                                                     shared_ptr<DeleteFolderHeaders> headers,
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
    {"action", boost::any(string("DeleteFolder"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/folder/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(folderId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFolderResponse(callApi(params, req, runtime));
}

DeleteFolderResponse Alibabacloud_Ververica20220718::Client::deleteFolder(shared_ptr<string> namespace_, shared_ptr<string> folderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteFolderHeaders> headers = make_shared<DeleteFolderHeaders>();
  return deleteFolderWithOptions(shared_ptr<string> namespace_, folderId, headers, runtime);
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

DeleteUdfArtifactResponse Alibabacloud_Ververica20220718::Client::deleteUdfArtifactWithOptions(shared_ptr<string> namespace_,
                                                                                               shared_ptr<string> udfArtifactName,
                                                                                               shared_ptr<DeleteUdfArtifactHeaders> headers,
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
    {"action", boost::any(string("DeleteUdfArtifact"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/udfartifacts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(udfArtifactName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUdfArtifactResponse(callApi(params, req, runtime));
}

DeleteUdfArtifactResponse Alibabacloud_Ververica20220718::Client::deleteUdfArtifact(shared_ptr<string> namespace_, shared_ptr<string> udfArtifactName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteUdfArtifactHeaders> headers = make_shared<DeleteUdfArtifactHeaders>();
  return deleteUdfArtifactWithOptions(shared_ptr<string> namespace_, udfArtifactName, headers, runtime);
}

DeleteUdfFunctionResponse Alibabacloud_Ververica20220718::Client::deleteUdfFunctionWithOptions(shared_ptr<string> namespace_,
                                                                                               shared_ptr<string> functionName,
                                                                                               shared_ptr<DeleteUdfFunctionRequest> request,
                                                                                               shared_ptr<DeleteUdfFunctionHeaders> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->className)) {
    query->insert(pair<string, string>("className", *request->className));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udfArtifactName)) {
    query->insert(pair<string, string>("udfArtifactName", *request->udfArtifactName));
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
    {"action", boost::any(string("DeleteUdfFunction"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/udfartifacts/function/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUdfFunctionResponse(callApi(params, req, runtime));
}

DeleteUdfFunctionResponse Alibabacloud_Ververica20220718::Client::deleteUdfFunction(shared_ptr<string> namespace_, shared_ptr<string> functionName, shared_ptr<DeleteUdfFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteUdfFunctionHeaders> headers = make_shared<DeleteUdfFunctionHeaders>();
  return deleteUdfFunctionWithOptions(shared_ptr<string> namespace_, functionName, request, headers, runtime);
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

DeployDeploymentDraftAsyncResponse Alibabacloud_Ververica20220718::Client::deployDeploymentDraftAsyncWithOptions(shared_ptr<string> namespace_,
                                                                                                                 shared_ptr<DeployDeploymentDraftAsyncRequest> request,
                                                                                                                 shared_ptr<DeployDeploymentDraftAsyncHeaders> headers,
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
    {"action", boost::any(string("DeployDeploymentDraftAsync"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-drafts/async-deploy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployDeploymentDraftAsyncResponse(callApi(params, req, runtime));
}

DeployDeploymentDraftAsyncResponse Alibabacloud_Ververica20220718::Client::deployDeploymentDraftAsync(shared_ptr<string> namespace_, shared_ptr<DeployDeploymentDraftAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeployDeploymentDraftAsyncHeaders> headers = make_shared<DeployDeploymentDraftAsyncHeaders>();
  return deployDeploymentDraftAsyncWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

ExecuteSqlStatementResponse Alibabacloud_Ververica20220718::Client::executeSqlStatementWithOptions(shared_ptr<string> namespace_,
                                                                                                   shared_ptr<ExecuteSqlStatementRequest> request,
                                                                                                   shared_ptr<ExecuteSqlStatementHeaders> headers,
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
    {"action", boost::any(string("ExecuteSqlStatement"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/sql-statement/execute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteSqlStatementResponse(callApi(params, req, runtime));
}

ExecuteSqlStatementResponse Alibabacloud_Ververica20220718::Client::executeSqlStatement(shared_ptr<string> namespace_, shared_ptr<ExecuteSqlStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExecuteSqlStatementHeaders> headers = make_shared<ExecuteSqlStatementHeaders>();
  return executeSqlStatementWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
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

GetCatalogsResponse Alibabacloud_Ververica20220718::Client::getCatalogsWithOptions(shared_ptr<string> namespace_,
                                                                                   shared_ptr<GetCatalogsRequest> request,
                                                                                   shared_ptr<GetCatalogsHeaders> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->catalogName)) {
    query->insert(pair<string, string>("catalogName", *request->catalogName));
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
    {"action", boost::any(string("GetCatalogs"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/catalogs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCatalogsResponse(callApi(params, req, runtime));
}

GetCatalogsResponse Alibabacloud_Ververica20220718::Client::getCatalogs(shared_ptr<string> namespace_, shared_ptr<GetCatalogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetCatalogsHeaders> headers = make_shared<GetCatalogsHeaders>();
  return getCatalogsWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

GetDatabasesResponse Alibabacloud_Ververica20220718::Client::getDatabasesWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<string> catalogName,
                                                                                     shared_ptr<GetDatabasesRequest> request,
                                                                                     shared_ptr<GetDatabasesHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("databaseName", *request->databaseName));
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
    {"action", boost::any(string("GetDatabases"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/catalogs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(catalogName)) + string("/databases"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatabasesResponse(callApi(params, req, runtime));
}

GetDatabasesResponse Alibabacloud_Ververica20220718::Client::getDatabases(shared_ptr<string> namespace_, shared_ptr<string> catalogName, shared_ptr<GetDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDatabasesHeaders> headers = make_shared<GetDatabasesHeaders>();
  return getDatabasesWithOptions(shared_ptr<string> namespace_, catalogName, request, headers, runtime);
}

GetDeployDeploymentDraftResultResponse Alibabacloud_Ververica20220718::Client::getDeployDeploymentDraftResultWithOptions(shared_ptr<string> namespace_,
                                                                                                                         shared_ptr<string> ticketId,
                                                                                                                         shared_ptr<GetDeployDeploymentDraftResultHeaders> headers,
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
    {"action", boost::any(string("GetDeployDeploymentDraftResult"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-drafts/tickets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ticketId)) + string("/async-deploy"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeployDeploymentDraftResultResponse(callApi(params, req, runtime));
}

GetDeployDeploymentDraftResultResponse Alibabacloud_Ververica20220718::Client::getDeployDeploymentDraftResult(shared_ptr<string> namespace_, shared_ptr<string> ticketId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeployDeploymentDraftResultHeaders> headers = make_shared<GetDeployDeploymentDraftResultHeaders>();
  return getDeployDeploymentDraftResultWithOptions(shared_ptr<string> namespace_, ticketId, headers, runtime);
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

GetDeploymentDraftResponse Alibabacloud_Ververica20220718::Client::getDeploymentDraftWithOptions(shared_ptr<string> namespace_,
                                                                                                 shared_ptr<string> deploymentDraftId,
                                                                                                 shared_ptr<GetDeploymentDraftHeaders> headers,
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
    {"action", boost::any(string("GetDeploymentDraft"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-drafts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentDraftId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeploymentDraftResponse(callApi(params, req, runtime));
}

GetDeploymentDraftResponse Alibabacloud_Ververica20220718::Client::getDeploymentDraft(shared_ptr<string> namespace_, shared_ptr<string> deploymentDraftId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeploymentDraftHeaders> headers = make_shared<GetDeploymentDraftHeaders>();
  return getDeploymentDraftWithOptions(shared_ptr<string> namespace_, deploymentDraftId, headers, runtime);
}

GetDeploymentDraftLockResponse Alibabacloud_Ververica20220718::Client::getDeploymentDraftLockWithOptions(shared_ptr<string> namespace_,
                                                                                                         shared_ptr<GetDeploymentDraftLockRequest> request,
                                                                                                         shared_ptr<GetDeploymentDraftLockHeaders> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentDraftId)) {
    query->insert(pair<string, string>("deploymentDraftId", *request->deploymentDraftId));
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
    {"action", boost::any(string("GetDeploymentDraftLock"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-drafts/getLock"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeploymentDraftLockResponse(callApi(params, req, runtime));
}

GetDeploymentDraftLockResponse Alibabacloud_Ververica20220718::Client::getDeploymentDraftLock(shared_ptr<string> namespace_, shared_ptr<GetDeploymentDraftLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeploymentDraftLockHeaders> headers = make_shared<GetDeploymentDraftLockHeaders>();
  return getDeploymentDraftLockWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

GetFolderResponse Alibabacloud_Ververica20220718::Client::getFolderWithOptions(shared_ptr<string> namespace_,
                                                                               shared_ptr<GetFolderRequest> request,
                                                                               shared_ptr<GetFolderHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("folderId", *request->folderId));
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
    {"action", boost::any(string("GetFolder"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/folder"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFolderResponse(callApi(params, req, runtime));
}

GetFolderResponse Alibabacloud_Ververica20220718::Client::getFolder(shared_ptr<string> namespace_, shared_ptr<GetFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetFolderHeaders> headers = make_shared<GetFolderHeaders>();
  return getFolderWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
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

GetHotUpdateJobResultResponse Alibabacloud_Ververica20220718::Client::getHotUpdateJobResultWithOptions(shared_ptr<string> namespace_,
                                                                                                       shared_ptr<string> jobHotUpdateId,
                                                                                                       shared_ptr<GetHotUpdateJobResultHeaders> headers,
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
    {"action", boost::any(string("GetHotUpdateJobResult"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/jobs/hot-updates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobHotUpdateId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotUpdateJobResultResponse(callApi(params, req, runtime));
}

GetHotUpdateJobResultResponse Alibabacloud_Ververica20220718::Client::getHotUpdateJobResult(shared_ptr<string> namespace_, shared_ptr<string> jobHotUpdateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotUpdateJobResultHeaders> headers = make_shared<GetHotUpdateJobResultHeaders>();
  return getHotUpdateJobResultWithOptions(shared_ptr<string> namespace_, jobHotUpdateId, headers, runtime);
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

GetLatestJobStartLogResponse Alibabacloud_Ververica20220718::Client::getLatestJobStartLogWithOptions(shared_ptr<string> namespace_,
                                                                                                     shared_ptr<string> deploymentId,
                                                                                                     shared_ptr<GetLatestJobStartLogHeaders> headers,
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
    {"action", boost::any(string("GetLatestJobStartLog"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentId)) + string("/latest_jobmanager_start_log"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLatestJobStartLogResponse(callApi(params, req, runtime));
}

GetLatestJobStartLogResponse Alibabacloud_Ververica20220718::Client::getLatestJobStartLog(shared_ptr<string> namespace_, shared_ptr<string> deploymentId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetLatestJobStartLogHeaders> headers = make_shared<GetLatestJobStartLogHeaders>();
  return getLatestJobStartLogWithOptions(shared_ptr<string> namespace_, deploymentId, headers, runtime);
}

GetLineageInfoResponse Alibabacloud_Ververica20220718::Client::getLineageInfoWithOptions(shared_ptr<GetLineageInfoRequest> request, shared_ptr<GetLineageInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetLineageInfo"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/meta/v2/lineage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLineageInfoResponse(callApi(params, req, runtime));
}

GetLineageInfoResponse Alibabacloud_Ververica20220718::Client::getLineageInfo(shared_ptr<GetLineageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetLineageInfoHeaders> headers = make_shared<GetLineageInfoHeaders>();
  return getLineageInfoWithOptions(request, headers, runtime);
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

GetTablesResponse Alibabacloud_Ververica20220718::Client::getTablesWithOptions(shared_ptr<string> namespace_,
                                                                               shared_ptr<string> catalogName,
                                                                               shared_ptr<string> databaseName,
                                                                               shared_ptr<GetTablesRequest> request,
                                                                               shared_ptr<GetTablesHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("tableName", *request->tableName));
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
    {"action", boost::any(string("GetTables"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/catalogs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(catalogName)) + string("/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(databaseName)) + string("/tables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTablesResponse(callApi(params, req, runtime));
}

GetTablesResponse Alibabacloud_Ververica20220718::Client::getTables(shared_ptr<string> namespace_,
                                                                    shared_ptr<string> catalogName,
                                                                    shared_ptr<string> databaseName,
                                                                    shared_ptr<GetTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetTablesHeaders> headers = make_shared<GetTablesHeaders>();
  return getTablesWithOptions(shared_ptr<string> namespace_, catalogName, databaseName, request, headers, runtime);
}

GetUdfArtifactsResponse Alibabacloud_Ververica20220718::Client::getUdfArtifactsWithOptions(shared_ptr<string> namespace_,
                                                                                           shared_ptr<GetUdfArtifactsRequest> request,
                                                                                           shared_ptr<GetUdfArtifactsHeaders> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->udfArtifactName)) {
    query->insert(pair<string, string>("udfArtifactName", *request->udfArtifactName));
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
    {"action", boost::any(string("GetUdfArtifacts"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/udfartifacts"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUdfArtifactsResponse(callApi(params, req, runtime));
}

GetUdfArtifactsResponse Alibabacloud_Ververica20220718::Client::getUdfArtifacts(shared_ptr<string> namespace_, shared_ptr<GetUdfArtifactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUdfArtifactsHeaders> headers = make_shared<GetUdfArtifactsHeaders>();
  return getUdfArtifactsWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

HotUpdateJobResponse Alibabacloud_Ververica20220718::Client::hotUpdateJobWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<string> jobId,
                                                                                     shared_ptr<HotUpdateJobHeaders> headers,
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
    {"action", boost::any(string("HotUpdateJob"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(jobId)) + string("%3AhotUpdate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotUpdateJobResponse(callApi(params, req, runtime));
}

HotUpdateJobResponse Alibabacloud_Ververica20220718::Client::hotUpdateJob(shared_ptr<string> namespace_, shared_ptr<string> jobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotUpdateJobHeaders> headers = make_shared<HotUpdateJobHeaders>();
  return hotUpdateJobWithOptions(shared_ptr<string> namespace_, jobId, headers, runtime);
}

ListCustomConnectorsResponse Alibabacloud_Ververica20220718::Client::listCustomConnectorsWithOptions(shared_ptr<string> namespace_, shared_ptr<ListCustomConnectorsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListCustomConnectors"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/connectors"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomConnectorsResponse(callApi(params, req, runtime));
}

ListCustomConnectorsResponse Alibabacloud_Ververica20220718::Client::listCustomConnectors(shared_ptr<string> namespace_) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListCustomConnectorsHeaders> headers = make_shared<ListCustomConnectorsHeaders>();
  return listCustomConnectorsWithOptions(shared_ptr<string> namespace_, headers, runtime);
}

ListDeploymentDraftsResponse Alibabacloud_Ververica20220718::Client::listDeploymentDraftsWithOptions(shared_ptr<string> namespace_,
                                                                                                     shared_ptr<ListDeploymentDraftsRequest> request,
                                                                                                     shared_ptr<ListDeploymentDraftsHeaders> headers,
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
    {"action", boost::any(string("ListDeploymentDrafts"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-drafts"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeploymentDraftsResponse(callApi(params, req, runtime));
}

ListDeploymentDraftsResponse Alibabacloud_Ververica20220718::Client::listDeploymentDrafts(shared_ptr<string> namespace_, shared_ptr<ListDeploymentDraftsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDeploymentDraftsHeaders> headers = make_shared<ListDeploymentDraftsHeaders>();
  return listDeploymentDraftsWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionMode)) {
    query->insert(pair<string, string>("executionMode", *request->executionMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelKey)) {
    query->insert(pair<string, string>("labelKey", *request->labelKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelValueArray)) {
    query->insert(pair<string, string>("labelValueArray", *request->labelValueArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifier)) {
    query->insert(pair<string, string>("modifier", *request->modifier));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
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

ListEditableNamespaceResponse Alibabacloud_Ververica20220718::Client::listEditableNamespaceWithOptions(shared_ptr<ListEditableNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageIndex)) {
    query->insert(pair<string, string>("pageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEditableNamespace"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gateway/v2/namespaces/editable"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEditableNamespaceResponse(callApi(params, req, runtime));
}

ListEditableNamespaceResponse Alibabacloud_Ververica20220718::Client::listEditableNamespace(shared_ptr<ListEditableNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEditableNamespaceWithOptions(request, headers, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->sortName)) {
    query->insert(pair<string, string>("sortName", *request->sortName));
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

RegisterCustomConnectorResponse Alibabacloud_Ververica20220718::Client::registerCustomConnectorWithOptions(shared_ptr<string> namespace_,
                                                                                                           shared_ptr<RegisterCustomConnectorRequest> request,
                                                                                                           shared_ptr<RegisterCustomConnectorHeaders> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jarUrl)) {
    query->insert(pair<string, string>("jarUrl", *request->jarUrl));
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
    {"action", boost::any(string("RegisterCustomConnector"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/connectors%3Aregister"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterCustomConnectorResponse(callApi(params, req, runtime));
}

RegisterCustomConnectorResponse Alibabacloud_Ververica20220718::Client::registerCustomConnector(shared_ptr<string> namespace_, shared_ptr<RegisterCustomConnectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RegisterCustomConnectorHeaders> headers = make_shared<RegisterCustomConnectorHeaders>();
  return registerCustomConnectorWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

RegisterUdfFunctionResponse Alibabacloud_Ververica20220718::Client::registerUdfFunctionWithOptions(shared_ptr<string> namespace_,
                                                                                                   shared_ptr<RegisterUdfFunctionRequest> request,
                                                                                                   shared_ptr<RegisterUdfFunctionHeaders> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->className)) {
    query->insert(pair<string, string>("className", *request->className));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("functionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udfArtifactName)) {
    query->insert(pair<string, string>("udfArtifactName", *request->udfArtifactName));
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
    {"action", boost::any(string("RegisterUdfFunction"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/udfartifacts/function%3AregisterUdfFunction"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterUdfFunctionResponse(callApi(params, req, runtime));
}

RegisterUdfFunctionResponse Alibabacloud_Ververica20220718::Client::registerUdfFunction(shared_ptr<string> namespace_, shared_ptr<RegisterUdfFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RegisterUdfFunctionHeaders> headers = make_shared<RegisterUdfFunctionHeaders>();
  return registerUdfFunctionWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
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

UpdateDeploymentDraftResponse Alibabacloud_Ververica20220718::Client::updateDeploymentDraftWithOptions(shared_ptr<string> namespace_,
                                                                                                       shared_ptr<string> deploymentDraftId,
                                                                                                       shared_ptr<UpdateDeploymentDraftRequest> request,
                                                                                                       shared_ptr<UpdateDeploymentDraftHeaders> headers,
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
    {"action", boost::any(string("UpdateDeploymentDraft"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/deployment-drafts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentDraftId)))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeploymentDraftResponse(callApi(params, req, runtime));
}

UpdateDeploymentDraftResponse Alibabacloud_Ververica20220718::Client::updateDeploymentDraft(shared_ptr<string> namespace_, shared_ptr<string> deploymentDraftId, shared_ptr<UpdateDeploymentDraftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateDeploymentDraftHeaders> headers = make_shared<UpdateDeploymentDraftHeaders>();
  return updateDeploymentDraftWithOptions(shared_ptr<string> namespace_, deploymentDraftId, request, headers, runtime);
}

UpdateFolderResponse Alibabacloud_Ververica20220718::Client::updateFolderWithOptions(shared_ptr<string> namespace_,
                                                                                     shared_ptr<string> folderId,
                                                                                     shared_ptr<UpdateFolderRequest> request,
                                                                                     shared_ptr<UpdateFolderHeaders> headers,
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
    {"action", boost::any(string("UpdateFolder"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/folder/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(folderId)))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFolderResponse(callApi(params, req, runtime));
}

UpdateFolderResponse Alibabacloud_Ververica20220718::Client::updateFolder(shared_ptr<string> namespace_, shared_ptr<string> folderId, shared_ptr<UpdateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateFolderHeaders> headers = make_shared<UpdateFolderHeaders>();
  return updateFolderWithOptions(shared_ptr<string> namespace_, folderId, request, headers, runtime);
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

UpdateUdfArtifactResponse Alibabacloud_Ververica20220718::Client::updateUdfArtifactWithOptions(shared_ptr<string> namespace_,
                                                                                               shared_ptr<string> udfArtifactName,
                                                                                               shared_ptr<UpdateUdfArtifactRequest> request,
                                                                                               shared_ptr<UpdateUdfArtifactHeaders> headers,
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
    {"action", boost::any(string("UpdateUdfArtifact"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/udfartifacts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(udfArtifactName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUdfArtifactResponse(callApi(params, req, runtime));
}

UpdateUdfArtifactResponse Alibabacloud_Ververica20220718::Client::updateUdfArtifact(shared_ptr<string> namespace_, shared_ptr<string> udfArtifactName, shared_ptr<UpdateUdfArtifactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateUdfArtifactHeaders> headers = make_shared<UpdateUdfArtifactHeaders>();
  return updateUdfArtifactWithOptions(shared_ptr<string> namespace_, udfArtifactName, request, headers, runtime);
}

ValidateSqlStatementResponse Alibabacloud_Ververica20220718::Client::validateSqlStatementWithOptions(shared_ptr<string> namespace_,
                                                                                                     shared_ptr<ValidateSqlStatementRequest> request,
                                                                                                     shared_ptr<ValidateSqlStatementHeaders> headers,
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
    {"action", boost::any(string("ValidateSqlStatement"))},
    {"version", boost::any(string("2022-07-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/namespaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shared_ptr<string> namespace_)) + string("/sql-statement/validate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateSqlStatementResponse(callApi(params, req, runtime));
}

ValidateSqlStatementResponse Alibabacloud_Ververica20220718::Client::validateSqlStatement(shared_ptr<string> namespace_, shared_ptr<ValidateSqlStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ValidateSqlStatementHeaders> headers = make_shared<ValidateSqlStatementHeaders>();
  return validateSqlStatementWithOptions(shared_ptr<string> namespace_, request, headers, runtime);
}

