// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aiwork_space_20210204.hpp>
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

using namespace Alibabacloud_AIWorkSpace20210204;

Alibabacloud_AIWorkSpace20210204::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aiworkspace"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AIWorkSpace20210204::Client::getEndpoint(shared_ptr<string> productId,
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

AddImageResponse Alibabacloud_AIWorkSpace20210204::Client::addImageWithOptions(shared_ptr<AddImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    body->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddImageRequestLabels>>(request->labels)) {
    body->insert(pair<string, vector<AddImageRequestLabels>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddImage"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/images"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddImageResponse(callApi(params, req, runtime));
}

AddImageResponse Alibabacloud_AIWorkSpace20210204::Client::addImage(shared_ptr<AddImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addImageWithOptions(request, headers, runtime);
}

AddImageLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::addImageLabelsWithOptions(shared_ptr<string> ImageId,
                                                                                           shared_ptr<AddImageLabelsRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AddImageLabelsRequestLabels>>(request->labels)) {
    body->insert(pair<string, vector<AddImageLabelsRequestLabels>>("Labels", *request->labels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddImageLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/images/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ImageId)) + string("/labels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddImageLabelsResponse(callApi(params, req, runtime));
}

AddImageLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::addImageLabels(shared_ptr<string> ImageId, shared_ptr<AddImageLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addImageLabelsWithOptions(ImageId, request, headers, runtime);
}

AddMemberRoleResponse Alibabacloud_AIWorkSpace20210204::Client::addMemberRoleWithOptions(shared_ptr<string> WorkspaceId,
                                                                                         shared_ptr<string> MemberId,
                                                                                         shared_ptr<string> RoleName,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMemberRole"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MemberId)) + string("/roles/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RoleName)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMemberRoleResponse(callApi(params, req, runtime));
}

AddMemberRoleResponse Alibabacloud_AIWorkSpace20210204::Client::addMemberRole(shared_ptr<string> WorkspaceId, shared_ptr<string> MemberId, shared_ptr<string> RoleName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addMemberRoleWithOptions(WorkspaceId, MemberId, RoleName, headers, runtime);
}

CreateCodeSourceResponse Alibabacloud_AIWorkSpace20210204::Client::createCodeSourceWithOptions(shared_ptr<CreateCodeSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeBranch)) {
    body->insert(pair<string, string>("CodeBranch", *request->codeBranch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepo)) {
    body->insert(pair<string, string>("CodeRepo", *request->codeRepo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoAccessToken)) {
    body->insert(pair<string, string>("CodeRepoAccessToken", *request->codeRepoAccessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoUserName)) {
    body->insert(pair<string, string>("CodeRepoUserName", *request->codeRepoUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountPath)) {
    body->insert(pair<string, string>("MountPath", *request->mountPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCodeSource"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/codesources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCodeSourceResponse(callApi(params, req, runtime));
}

CreateCodeSourceResponse Alibabacloud_AIWorkSpace20210204::Client::createCodeSource(shared_ptr<CreateCodeSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCodeSourceWithOptions(request, headers, runtime);
}

CreateDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::createDatasetWithOptions(shared_ptr<CreateDatasetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    body->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Label>>(request->labels)) {
    body->insert(pair<string, vector<Label>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->property)) {
    body->insert(pair<string, string>("Property", *request->property));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provider)) {
    body->insert(pair<string, string>("Provider", *request->provider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->providerType)) {
    body->insert(pair<string, string>("ProviderType", *request->providerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    body->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataset"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/datasets"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatasetResponse(callApi(params, req, runtime));
}

CreateDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::createDataset(shared_ptr<CreateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDatasetWithOptions(request, headers, runtime);
}

CreateDatasetLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::createDatasetLabelsWithOptions(shared_ptr<string> DatasetId,
                                                                                                     shared_ptr<CreateDatasetLabelsRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<Label>>(request->labels)) {
    body->insert(pair<string, vector<Label>>("Labels", *request->labels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDatasetLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/datasets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasetId)) + string("/labels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatasetLabelsResponse(callApi(params, req, runtime));
}

CreateDatasetLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::createDatasetLabels(shared_ptr<string> DatasetId, shared_ptr<CreateDatasetLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDatasetLabelsWithOptions(DatasetId, request, headers, runtime);
}

CreateMemberResponse Alibabacloud_AIWorkSpace20210204::Client::createMemberWithOptions(shared_ptr<string> WorkspaceId,
                                                                                       shared_ptr<CreateMemberRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateMemberRequestMembers>>(request->members)) {
    body->insert(pair<string, vector<CreateMemberRequestMembers>>("Members", *request->members));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMember"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/members"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMemberResponse(callApi(params, req, runtime));
}

CreateMemberResponse Alibabacloud_AIWorkSpace20210204::Client::createMember(shared_ptr<string> WorkspaceId, shared_ptr<CreateMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMemberWithOptions(WorkspaceId, request, headers, runtime);
}

CreateModelResponse Alibabacloud_AIWorkSpace20210204::Client::createModelWithOptions(shared_ptr<CreateModelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->extraInfo)) {
    body->insert(pair<string, map<string, boost::any>>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Label>>(request->labels)) {
    body->insert(pair<string, vector<Label>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelDescription)) {
    body->insert(pair<string, string>("ModelDescription", *request->modelDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelDoc)) {
    body->insert(pair<string, string>("ModelDoc", *request->modelDoc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    body->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelType)) {
    body->insert(pair<string, string>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNumber)) {
    body->insert(pair<string, long>("OrderNumber", *request->orderNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    body->insert(pair<string, string>("Origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->task)) {
    body->insert(pair<string, string>("Task", *request->task));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModel"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModelResponse(callApi(params, req, runtime));
}

CreateModelResponse Alibabacloud_AIWorkSpace20210204::Client::createModel(shared_ptr<CreateModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModelWithOptions(request, headers, runtime);
}

CreateModelLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::createModelLabelsWithOptions(shared_ptr<string> ModelId,
                                                                                                 shared_ptr<CreateModelLabelsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<Label>>(request->labels)) {
    body->insert(pair<string, vector<Label>>("Labels", *request->labels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModelLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/labels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModelLabelsResponse(callApi(params, req, runtime));
}

CreateModelLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::createModelLabels(shared_ptr<string> ModelId, shared_ptr<CreateModelLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModelLabelsWithOptions(ModelId, request, headers, runtime);
}

CreateModelVersionResponse Alibabacloud_AIWorkSpace20210204::Client::createModelVersionWithOptions(shared_ptr<string> ModelId,
                                                                                                   shared_ptr<CreateModelVersionRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalStatus)) {
    body->insert(pair<string, string>("ApprovalStatus", *request->approvalStatus));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->evaluationSpec)) {
    body->insert(pair<string, map<string, boost::any>>("EvaluationSpec", *request->evaluationSpec));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->extraInfo)) {
    body->insert(pair<string, map<string, boost::any>>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    body->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->frameworkType)) {
    body->insert(pair<string, string>("FrameworkType", *request->frameworkType));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->inferenceSpec)) {
    body->insert(pair<string, map<string, boost::any>>("InferenceSpec", *request->inferenceSpec));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Label>>(request->labels)) {
    body->insert(pair<string, vector<Label>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->metrics)) {
    body->insert(pair<string, map<string, boost::any>>("Metrics", *request->metrics));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    body->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->trainingSpec)) {
    body->insert(pair<string, map<string, boost::any>>("TrainingSpec", *request->trainingSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionDescription)) {
    body->insert(pair<string, string>("VersionDescription", *request->versionDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    body->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModelVersion"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModelVersionResponse(callApi(params, req, runtime));
}

CreateModelVersionResponse Alibabacloud_AIWorkSpace20210204::Client::createModelVersion(shared_ptr<string> ModelId, shared_ptr<CreateModelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModelVersionWithOptions(ModelId, request, headers, runtime);
}

CreateModelVersionLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::createModelVersionLabelsWithOptions(shared_ptr<string> ModelId,
                                                                                                               shared_ptr<string> VersionName,
                                                                                                               shared_ptr<CreateModelVersionLabelsRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<Label>>(request->labels)) {
    body->insert(pair<string, vector<Label>>("Labels", *request->labels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModelVersionLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VersionName)) + string("/labels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModelVersionLabelsResponse(callApi(params, req, runtime));
}

CreateModelVersionLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::createModelVersionLabels(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<CreateModelVersionLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModelVersionLabelsWithOptions(ModelId, VersionName, request, headers, runtime);
}

CreateProductOrdersResponse Alibabacloud_AIWorkSpace20210204::Client::createProductOrdersWithOptions(shared_ptr<CreateProductOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    body->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateProductOrdersRequestProducts>>(request->products)) {
    body->insert(pair<string, vector<CreateProductOrdersRequestProducts>>("Products", *request->products));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProductOrders"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/productorders"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductOrdersResponse(callApi(params, req, runtime));
}

CreateProductOrdersResponse Alibabacloud_AIWorkSpace20210204::Client::createProductOrders(shared_ptr<CreateProductOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProductOrdersWithOptions(request, headers, runtime);
}

CreateWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->envTypes)) {
    body->insert(pair<string, vector<string>>("EnvTypes", *request->envTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceName)) {
    body->insert(pair<string, string>("WorkspaceName", *request->workspaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspace"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceResponse(callApi(params, req, runtime));
}

CreateWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::createWorkspace(shared_ptr<CreateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkspaceWithOptions(request, headers, runtime);
}

CreateWorkspaceResourceResponse Alibabacloud_AIWorkSpace20210204::Client::createWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                             shared_ptr<CreateWorkspaceResourceRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->option)) {
    body->insert(pair<string, string>("Option", *request->option));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateWorkspaceResourceRequestResources>>(request->resources)) {
    body->insert(pair<string, vector<CreateWorkspaceResourceRequestResources>>("Resources", *request->resources));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspaceResource"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/resources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceResourceResponse(callApi(params, req, runtime));
}

CreateWorkspaceResourceResponse Alibabacloud_AIWorkSpace20210204::Client::createWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<CreateWorkspaceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWorkspaceResourceWithOptions(WorkspaceId, request, headers, runtime);
}

DeleteCodeSourceResponse Alibabacloud_AIWorkSpace20210204::Client::deleteCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCodeSource"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/codesources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CodeSourceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCodeSourceResponse(callApi(params, req, runtime));
}

DeleteCodeSourceResponse Alibabacloud_AIWorkSpace20210204::Client::deleteCodeSource(shared_ptr<string> CodeSourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCodeSourceWithOptions(CodeSourceId, headers, runtime);
}

DeleteDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::deleteDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataset"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/datasets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasetId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatasetResponse(callApi(params, req, runtime));
}

DeleteDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::deleteDataset(shared_ptr<string> DatasetId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDatasetWithOptions(DatasetId, headers, runtime);
}

DeleteDatasetLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::deleteDatasetLabelsWithOptions(shared_ptr<string> DatasetId,
                                                                                                     shared_ptr<DeleteDatasetLabelsRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelKeys)) {
    query->insert(pair<string, string>("LabelKeys", *request->labelKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDatasetLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/datasets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasetId)) + string("/labels"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatasetLabelsResponse(callApi(params, req, runtime));
}

DeleteDatasetLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::deleteDatasetLabels(shared_ptr<string> DatasetId, shared_ptr<DeleteDatasetLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDatasetLabelsWithOptions(DatasetId, request, headers, runtime);
}

DeleteMembersResponse Alibabacloud_AIWorkSpace20210204::Client::deleteMembersWithOptions(shared_ptr<string> WorkspaceId,
                                                                                         shared_ptr<DeleteMembersRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->memberIds)) {
    query->insert(pair<string, string>("MemberIds", *request->memberIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMembers"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/members"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMembersResponse(callApi(params, req, runtime));
}

DeleteMembersResponse Alibabacloud_AIWorkSpace20210204::Client::deleteMembers(shared_ptr<string> WorkspaceId, shared_ptr<DeleteMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteMembersWithOptions(WorkspaceId, request, headers, runtime);
}

DeleteModelResponse Alibabacloud_AIWorkSpace20210204::Client::deleteModelWithOptions(shared_ptr<string> ModelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteModel"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteModelResponse(callApi(params, req, runtime));
}

DeleteModelResponse Alibabacloud_AIWorkSpace20210204::Client::deleteModel(shared_ptr<string> ModelId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteModelWithOptions(ModelId, headers, runtime);
}

DeleteModelLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::deleteModelLabelsWithOptions(shared_ptr<string> ModelId,
                                                                                                 shared_ptr<DeleteModelLabelsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelKeys)) {
    query->insert(pair<string, string>("LabelKeys", *request->labelKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteModelLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/labels"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteModelLabelsResponse(callApi(params, req, runtime));
}

DeleteModelLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::deleteModelLabels(shared_ptr<string> ModelId, shared_ptr<DeleteModelLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteModelLabelsWithOptions(ModelId, request, headers, runtime);
}

DeleteModelVersionResponse Alibabacloud_AIWorkSpace20210204::Client::deleteModelVersionWithOptions(shared_ptr<string> ModelId,
                                                                                                   shared_ptr<string> VersionName,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteModelVersion"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VersionName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteModelVersionResponse(callApi(params, req, runtime));
}

DeleteModelVersionResponse Alibabacloud_AIWorkSpace20210204::Client::deleteModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteModelVersionWithOptions(ModelId, VersionName, headers, runtime);
}

DeleteModelVersionLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::deleteModelVersionLabelsWithOptions(shared_ptr<string> ModelId,
                                                                                                               shared_ptr<string> VersionName,
                                                                                                               shared_ptr<DeleteModelVersionLabelsRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelKeys)) {
    query->insert(pair<string, string>("LabelKeys", *request->labelKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteModelVersionLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VersionName)) + string("/labels"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteModelVersionLabelsResponse(callApi(params, req, runtime));
}

DeleteModelVersionLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::deleteModelVersionLabels(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<DeleteModelVersionLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteModelVersionLabelsWithOptions(ModelId, VersionName, request, headers, runtime);
}

DeleteWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::deleteWorkspaceWithOptions(shared_ptr<string> WorkspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkspace"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkspaceResponse(callApi(params, req, runtime));
}

DeleteWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::deleteWorkspace(shared_ptr<string> WorkspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWorkspaceWithOptions(WorkspaceId, headers, runtime);
}

DeleteWorkspaceResourceResponse Alibabacloud_AIWorkSpace20210204::Client::deleteWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                             shared_ptr<DeleteWorkspaceResourceRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->option)) {
    query->insert(pair<string, string>("Option", *request->option));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkspaceResource"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/resources"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkspaceResourceResponse(callApi(params, req, runtime));
}

DeleteWorkspaceResourceResponse Alibabacloud_AIWorkSpace20210204::Client::deleteWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<DeleteWorkspaceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWorkspaceResourceWithOptions(WorkspaceId, request, headers, runtime);
}

GetCodeSourceResponse Alibabacloud_AIWorkSpace20210204::Client::getCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCodeSource"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/codesources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CodeSourceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCodeSourceResponse(callApi(params, req, runtime));
}

GetCodeSourceResponse Alibabacloud_AIWorkSpace20210204::Client::getCodeSource(shared_ptr<string> CodeSourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCodeSourceWithOptions(CodeSourceId, headers, runtime);
}

GetDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::getDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataset"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/datasets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasetId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatasetResponse(callApi(params, req, runtime));
}

GetDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::getDataset(shared_ptr<string> DatasetId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDatasetWithOptions(DatasetId, headers, runtime);
}

GetDefaultWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::getDefaultWorkspaceWithOptions(shared_ptr<GetDefaultWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDefaultWorkspace"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/defaultWorkspaces"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDefaultWorkspaceResponse(callApi(params, req, runtime));
}

GetDefaultWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::getDefaultWorkspace(shared_ptr<GetDefaultWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDefaultWorkspaceWithOptions(request, headers, runtime);
}

GetImageResponse Alibabacloud_AIWorkSpace20210204::Client::getImageWithOptions(shared_ptr<string> ImageId,
                                                                               shared_ptr<GetImageRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImage"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/images/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ImageId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageResponse(callApi(params, req, runtime));
}

GetImageResponse Alibabacloud_AIWorkSpace20210204::Client::getImage(shared_ptr<string> ImageId, shared_ptr<GetImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getImageWithOptions(ImageId, request, headers, runtime);
}

GetMemberResponse Alibabacloud_AIWorkSpace20210204::Client::getMemberWithOptions(shared_ptr<string> WorkspaceId,
                                                                                 shared_ptr<GetMemberRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->memberId)) {
    query->insert(pair<string, string>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMember"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/member"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMemberResponse(callApi(params, req, runtime));
}

GetMemberResponse Alibabacloud_AIWorkSpace20210204::Client::getMember(shared_ptr<string> WorkspaceId, shared_ptr<GetMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMemberWithOptions(WorkspaceId, request, headers, runtime);
}

GetModelResponse Alibabacloud_AIWorkSpace20210204::Client::getModelWithOptions(shared_ptr<string> ModelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModel"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetModelResponse(callApi(params, req, runtime));
}

GetModelResponse Alibabacloud_AIWorkSpace20210204::Client::getModel(shared_ptr<string> ModelId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getModelWithOptions(ModelId, headers, runtime);
}

GetModelVersionResponse Alibabacloud_AIWorkSpace20210204::Client::getModelVersionWithOptions(shared_ptr<string> ModelId,
                                                                                             shared_ptr<string> VersionName,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModelVersion"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VersionName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetModelVersionResponse(callApi(params, req, runtime));
}

GetModelVersionResponse Alibabacloud_AIWorkSpace20210204::Client::getModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getModelVersionWithOptions(ModelId, VersionName, headers, runtime);
}

GetPermissionResponse Alibabacloud_AIWorkSpace20210204::Client::getPermissionWithOptions(shared_ptr<string> WorkspaceId,
                                                                                         shared_ptr<string> PermissionCode,
                                                                                         shared_ptr<GetPermissionRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    query->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->option)) {
    query->insert(pair<string, string>("Option", *request->option));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPermission"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/permissions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PermissionCode)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPermissionResponse(callApi(params, req, runtime));
}

GetPermissionResponse Alibabacloud_AIWorkSpace20210204::Client::getPermission(shared_ptr<string> WorkspaceId, shared_ptr<string> PermissionCode, shared_ptr<GetPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPermissionWithOptions(WorkspaceId, PermissionCode, request, headers, runtime);
}

GetServiceTemplateResponse Alibabacloud_AIWorkSpace20210204::Client::getServiceTemplateWithOptions(shared_ptr<string> ServiceTemplateId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceTemplate"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/servicetemplates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceTemplateId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceTemplateResponse(callApi(params, req, runtime));
}

GetServiceTemplateResponse Alibabacloud_AIWorkSpace20210204::Client::getServiceTemplate(shared_ptr<string> ServiceTemplateId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceTemplateWithOptions(ServiceTemplateId, headers, runtime);
}

GetWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::getWorkspaceWithOptions(shared_ptr<string> WorkspaceId,
                                                                                       shared_ptr<GetWorkspaceRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkspace"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkspaceResponse(callApi(params, req, runtime));
}

GetWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::getWorkspace(shared_ptr<string> WorkspaceId, shared_ptr<GetWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkspaceWithOptions(WorkspaceId, request, headers, runtime);
}

ListCodeSourcesResponse Alibabacloud_AIWorkSpace20210204::Client::listCodeSourcesWithOptions(shared_ptr<ListCodeSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCodeSources"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/codesources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCodeSourcesResponse(callApi(params, req, runtime));
}

ListCodeSourcesResponse Alibabacloud_AIWorkSpace20210204::Client::listCodeSources(shared_ptr<ListCodeSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCodeSourcesWithOptions(request, headers, runtime);
}

ListDatasetsResponse Alibabacloud_AIWorkSpace20210204::Client::listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceTypes)) {
    query->insert(pair<string, string>("DataSourceTypes", *request->dataSourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataTypes)) {
    query->insert(pair<string, string>("DataTypes", *request->dataTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->properties)) {
    query->insert(pair<string, string>("Properties", *request->properties));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provider)) {
    query->insert(pair<string, string>("Provider", *request->provider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    query->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceTypes)) {
    query->insert(pair<string, string>("SourceTypes", *request->sourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatasets"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/datasets"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatasetsResponse(callApi(params, req, runtime));
}

ListDatasetsResponse Alibabacloud_AIWorkSpace20210204::Client::listDatasets(shared_ptr<ListDatasetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDatasetsWithOptions(request, headers, runtime);
}

ListImageLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::listImageLabelsWithOptions(shared_ptr<ListImageLabelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelFilter)) {
    query->insert(pair<string, string>("LabelFilter", *request->labelFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelKeys)) {
    query->insert(pair<string, string>("LabelKeys", *request->labelKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListImageLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/image/labels"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListImageLabelsResponse(callApi(params, req, runtime));
}

ListImageLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::listImageLabels(shared_ptr<ListImageLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listImageLabelsWithOptions(request, headers, runtime);
}

ListImagesResponse Alibabacloud_AIWorkSpace20210204::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    query->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentUserId)) {
    query->insert(pair<string, string>("ParentUserId", *request->parentUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListImages"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/images"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListImagesResponse(callApi(params, req, runtime));
}

ListImagesResponse Alibabacloud_AIWorkSpace20210204::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listImagesWithOptions(request, headers, runtime);
}

ListMembersResponse Alibabacloud_AIWorkSpace20210204::Client::listMembersWithOptions(shared_ptr<string> WorkspaceId,
                                                                                     shared_ptr<ListMembersRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->memberName)) {
    query->insert(pair<string, string>("MemberName", *request->memberName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roles)) {
    query->insert(pair<string, string>("Roles", *request->roles));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMembers"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/members"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMembersResponse(callApi(params, req, runtime));
}

ListMembersResponse Alibabacloud_AIWorkSpace20210204::Client::listMembers(shared_ptr<string> WorkspaceId, shared_ptr<ListMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMembersWithOptions(WorkspaceId, request, headers, runtime);
}

ListModelVersionsResponse Alibabacloud_AIWorkSpace20210204::Client::listModelVersionsWithOptions(shared_ptr<string> ModelId,
                                                                                                 shared_ptr<ListModelVersionsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalStatus)) {
    query->insert(pair<string, string>("ApprovalStatus", *request->approvalStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    query->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->frameworkType)) {
    query->insert(pair<string, string>("FrameworkType", *request->frameworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    query->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    query->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListModelVersions"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListModelVersionsResponse(callApi(params, req, runtime));
}

ListModelVersionsResponse Alibabacloud_AIWorkSpace20210204::Client::listModelVersions(shared_ptr<string> ModelId, shared_ptr<ListModelVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listModelVersionsWithOptions(ModelId, request, headers, runtime);
}

ListModelsResponse Alibabacloud_AIWorkSpace20210204::Client::listModelsWithOptions(shared_ptr<ListModelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collections)) {
    query->insert(pair<string, string>("Collections", *request->collections));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    query->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelType)) {
    query->insert(pair<string, string>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    query->insert(pair<string, string>("Origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provider)) {
    query->insert(pair<string, string>("Provider", *request->provider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->task)) {
    query->insert(pair<string, string>("Task", *request->task));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListModels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListModelsResponse(callApi(params, req, runtime));
}

ListModelsResponse Alibabacloud_AIWorkSpace20210204::Client::listModels(shared_ptr<ListModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listModelsWithOptions(request, headers, runtime);
}

ListPermissionsResponse Alibabacloud_AIWorkSpace20210204::Client::listPermissionsWithOptions(shared_ptr<string> WorkspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPermissions"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/permissions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPermissionsResponse(callApi(params, req, runtime));
}

ListPermissionsResponse Alibabacloud_AIWorkSpace20210204::Client::listPermissions(shared_ptr<string> WorkspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPermissionsWithOptions(WorkspaceId, headers, runtime);
}

ListProductsResponse Alibabacloud_AIWorkSpace20210204::Client::listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCodes)) {
    query->insert(pair<string, string>("ProductCodes", *request->productCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCodes)) {
    query->insert(pair<string, string>("ServiceCodes", *request->serviceCodes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProducts"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/products"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductsResponse(callApi(params, req, runtime));
}

ListProductsResponse Alibabacloud_AIWorkSpace20210204::Client::listProducts(shared_ptr<ListProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductsWithOptions(request, headers, runtime);
}

ListQuotasResponse Alibabacloud_AIWorkSpace20210204::Client::listQuotasWithOptions(shared_ptr<ListQuotasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotas"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQuotasResponse(callApi(params, req, runtime));
}

ListQuotasResponse Alibabacloud_AIWorkSpace20210204::Client::listQuotas(shared_ptr<ListQuotasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQuotasWithOptions(request, headers, runtime);
}

ListResourcesResponse Alibabacloud_AIWorkSpace20210204::Client::listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->option)) {
    query->insert(pair<string, string>("Option", *request->option));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productTypes)) {
    query->insert(pair<string, string>("ProductTypes", *request->productTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaIds)) {
    query->insert(pair<string, string>("QuotaIds", *request->quotaIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceTypes)) {
    query->insert(pair<string, string>("ResourceTypes", *request->resourceTypes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verboseFields)) {
    query->insert(pair<string, string>("VerboseFields", *request->verboseFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResources"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcesResponse(callApi(params, req, runtime));
}

ListResourcesResponse Alibabacloud_AIWorkSpace20210204::Client::listResources(shared_ptr<ListResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourcesWithOptions(request, headers, runtime);
}

ListServiceTemplatesResponse Alibabacloud_AIWorkSpace20210204::Client::listServiceTemplatesWithOptions(shared_ptr<ListServiceTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provider)) {
    query->insert(pair<string, string>("Provider", *request->provider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceTemplateName)) {
    query->insert(pair<string, string>("ServiceTemplateName", *request->serviceTemplateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceTemplates"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/servicetemplates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceTemplatesResponse(callApi(params, req, runtime));
}

ListServiceTemplatesResponse Alibabacloud_AIWorkSpace20210204::Client::listServiceTemplates(shared_ptr<ListServiceTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceTemplatesWithOptions(request, headers, runtime);
}

ListWorkspaceUsersResponse Alibabacloud_AIWorkSpace20210204::Client::listWorkspaceUsersWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                   shared_ptr<ListWorkspaceUsersRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaceUsers"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/users"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspaceUsersResponse(callApi(params, req, runtime));
}

ListWorkspaceUsersResponse Alibabacloud_AIWorkSpace20210204::Client::listWorkspaceUsers(shared_ptr<string> WorkspaceId, shared_ptr<ListWorkspaceUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkspaceUsersWithOptions(WorkspaceId, request, headers, runtime);
}

ListWorkspacesResponse Alibabacloud_AIWorkSpace20210204::Client::listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fields)) {
    query->insert(pair<string, string>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleList)) {
    query->insert(pair<string, string>("ModuleList", *request->moduleList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->option)) {
    query->insert(pair<string, string>("Option", *request->option));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIds)) {
    query->insert(pair<string, string>("WorkspaceIds", *request->workspaceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceName)) {
    query->insert(pair<string, string>("WorkspaceName", *request->workspaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaces"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspacesResponse(callApi(params, req, runtime));
}

ListWorkspacesResponse Alibabacloud_AIWorkSpace20210204::Client::listWorkspaces(shared_ptr<ListWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkspacesWithOptions(request, headers, runtime);
}

PublishCodeSourceResponse Alibabacloud_AIWorkSpace20210204::Client::publishCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishCodeSource"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/codesources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CodeSourceId)) + string("/publish"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishCodeSourceResponse(callApi(params, req, runtime));
}

PublishCodeSourceResponse Alibabacloud_AIWorkSpace20210204::Client::publishCodeSource(shared_ptr<string> CodeSourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishCodeSourceWithOptions(CodeSourceId, headers, runtime);
}

PublishDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::publishDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishDataset"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/datasets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasetId)) + string("/publish"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishDatasetResponse(callApi(params, req, runtime));
}

PublishDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::publishDataset(shared_ptr<string> DatasetId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishDatasetWithOptions(DatasetId, headers, runtime);
}

PublishImageResponse Alibabacloud_AIWorkSpace20210204::Client::publishImageWithOptions(shared_ptr<string> ImageId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishImage"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/images/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ImageId)) + string("/publish"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishImageResponse(callApi(params, req, runtime));
}

PublishImageResponse Alibabacloud_AIWorkSpace20210204::Client::publishImage(shared_ptr<string> ImageId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishImageWithOptions(ImageId, headers, runtime);
}

RemoveImageResponse Alibabacloud_AIWorkSpace20210204::Client::removeImageWithOptions(shared_ptr<string> ImageId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveImage"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/images/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ImageId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveImageResponse(callApi(params, req, runtime));
}

RemoveImageResponse Alibabacloud_AIWorkSpace20210204::Client::removeImage(shared_ptr<string> ImageId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeImageWithOptions(ImageId, headers, runtime);
}

RemoveImageLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::removeImageLabelsWithOptions(shared_ptr<string> ImageId,
                                                                                                 shared_ptr<string> LabelKey,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveImageLabels"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/images/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ImageId)) + string("/labels/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LabelKey)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveImageLabelsResponse(callApi(params, req, runtime));
}

RemoveImageLabelsResponse Alibabacloud_AIWorkSpace20210204::Client::removeImageLabels(shared_ptr<string> ImageId, shared_ptr<string> LabelKey) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeImageLabelsWithOptions(ImageId, LabelKey, headers, runtime);
}

RemoveMemberRoleResponse Alibabacloud_AIWorkSpace20210204::Client::removeMemberRoleWithOptions(shared_ptr<string> WorkspaceId,
                                                                                               shared_ptr<string> MemberId,
                                                                                               shared_ptr<string> RoleName,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveMemberRole"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/members/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MemberId)) + string("/roles/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RoleName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveMemberRoleResponse(callApi(params, req, runtime));
}

RemoveMemberRoleResponse Alibabacloud_AIWorkSpace20210204::Client::removeMemberRole(shared_ptr<string> WorkspaceId, shared_ptr<string> MemberId, shared_ptr<string> RoleName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeMemberRoleWithOptions(WorkspaceId, MemberId, RoleName, headers, runtime);
}

UpdateDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::updateDatasetWithOptions(shared_ptr<string> DatasetId,
                                                                                         shared_ptr<UpdateDatasetRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataset"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/datasets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasetId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDatasetResponse(callApi(params, req, runtime));
}

UpdateDatasetResponse Alibabacloud_AIWorkSpace20210204::Client::updateDataset(shared_ptr<string> DatasetId, shared_ptr<UpdateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDatasetWithOptions(DatasetId, request, headers, runtime);
}

UpdateDefaultWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::updateDefaultWorkspaceWithOptions(shared_ptr<UpdateDefaultWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDefaultWorkspace"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/defaultWorkspaces"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDefaultWorkspaceResponse(callApi(params, req, runtime));
}

UpdateDefaultWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::updateDefaultWorkspace(shared_ptr<UpdateDefaultWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDefaultWorkspaceWithOptions(request, headers, runtime);
}

UpdateModelResponse Alibabacloud_AIWorkSpace20210204::Client::updateModelWithOptions(shared_ptr<string> ModelId,
                                                                                     shared_ptr<UpdateModelRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessibility)) {
    body->insert(pair<string, string>("Accessibility", *request->accessibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->extraInfo)) {
    body->insert(pair<string, map<string, boost::any>>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelDescription)) {
    body->insert(pair<string, string>("ModelDescription", *request->modelDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelDoc)) {
    body->insert(pair<string, string>("ModelDoc", *request->modelDoc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    body->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelType)) {
    body->insert(pair<string, string>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderNumber)) {
    body->insert(pair<string, long>("OrderNumber", *request->orderNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    body->insert(pair<string, string>("Origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->task)) {
    body->insert(pair<string, string>("Task", *request->task));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateModel"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateModelResponse(callApi(params, req, runtime));
}

UpdateModelResponse Alibabacloud_AIWorkSpace20210204::Client::updateModel(shared_ptr<string> ModelId, shared_ptr<UpdateModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateModelWithOptions(ModelId, request, headers, runtime);
}

UpdateModelVersionResponse Alibabacloud_AIWorkSpace20210204::Client::updateModelVersionWithOptions(shared_ptr<string> ModelId,
                                                                                                   shared_ptr<string> VersionName,
                                                                                                   shared_ptr<UpdateModelVersionRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->approvalStatus)) {
    body->insert(pair<string, string>("ApprovalStatus", *request->approvalStatus));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->evaluationSpec)) {
    body->insert(pair<string, map<string, boost::any>>("EvaluationSpec", *request->evaluationSpec));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->extraInfo)) {
    body->insert(pair<string, map<string, boost::any>>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->inferenceSpec)) {
    body->insert(pair<string, map<string, boost::any>>("InferenceSpec", *request->inferenceSpec));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->metrics)) {
    body->insert(pair<string, map<string, boost::any>>("Metrics", *request->metrics));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    body->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->trainingSpec)) {
    body->insert(pair<string, map<string, boost::any>>("TrainingSpec", *request->trainingSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionDescription)) {
    body->insert(pair<string, string>("VersionDescription", *request->versionDescription));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateModelVersion"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/models/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VersionName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateModelVersionResponse(callApi(params, req, runtime));
}

UpdateModelVersionResponse Alibabacloud_AIWorkSpace20210204::Client::updateModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<UpdateModelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateModelVersionWithOptions(ModelId, VersionName, request, headers, runtime);
}

UpdateWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::updateWorkspaceWithOptions(shared_ptr<string> WorkspaceId,
                                                                                             shared_ptr<UpdateWorkspaceRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspace"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceResponse(callApi(params, req, runtime));
}

UpdateWorkspaceResponse Alibabacloud_AIWorkSpace20210204::Client::updateWorkspace(shared_ptr<string> WorkspaceId, shared_ptr<UpdateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWorkspaceWithOptions(WorkspaceId, request, headers, runtime);
}

UpdateWorkspaceResourceResponse Alibabacloud_AIWorkSpace20210204::Client::updateWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                                                             shared_ptr<UpdateWorkspaceResourceRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDefault)) {
    body->insert(pair<string, bool>("IsDefault", *request->isDefault));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkspaceResourceRequestLabels>>(request->labels)) {
    body->insert(pair<string, vector<UpdateWorkspaceResourceRequestLabels>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    body->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->spec)) {
    body->insert(pair<string, map<string, boost::any>>("Spec", *request->spec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspaceResource"))},
    {"version", boost::any(string("2021-02-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/workspaces/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WorkspaceId)) + string("/resources"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceResourceResponse(callApi(params, req, runtime));
}

UpdateWorkspaceResourceResponse Alibabacloud_AIWorkSpace20210204::Client::updateWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<UpdateWorkspaceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWorkspaceResourceWithOptions(WorkspaceId, request, headers, runtime);
}

