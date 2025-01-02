// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ai_miao_bi_20230801.hpp>
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

using namespace Alibabacloud_AiMiaoBi20230801;

Alibabacloud_AiMiaoBi20230801::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aimiaobi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AiMiaoBi20230801::Client::getEndpoint(shared_ptr<string> productId,
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

AddDatasetDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::addDatasetDocumentWithOptions(shared_ptr<AddDatasetDocumentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddDatasetDocumentShrinkRequest> request = make_shared<AddDatasetDocumentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddDatasetDocumentRequestDocument>(tmpReq->document)) {
    request->documentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->document, make_shared<string>("Document"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentShrink)) {
    body->insert(pair<string, string>("Document", *request->documentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDatasetDocument"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDatasetDocumentResponse(callApi(params, req, runtime));
}

AddDatasetDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::addDatasetDocument(shared_ptr<AddDatasetDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDatasetDocumentWithOptions(request, runtime);
}

CancelAsyncTaskResponse Alibabacloud_AiMiaoBi20230801::Client::cancelAsyncTaskWithOptions(shared_ptr<CancelAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelAsyncTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelAsyncTaskResponse(callApi(params, req, runtime));
}

CancelAsyncTaskResponse Alibabacloud_AiMiaoBi20230801::Client::cancelAsyncTask(shared_ptr<CancelAsyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelAsyncTaskWithOptions(request, runtime);
}

ClearIntervenesResponse Alibabacloud_AiMiaoBi20230801::Client::clearIntervenesWithOptions(shared_ptr<ClearIntervenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClearIntervenes"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClearIntervenesResponse(callApi(params, req, runtime));
}

ClearIntervenesResponse Alibabacloud_AiMiaoBi20230801::Client::clearIntervenes(shared_ptr<ClearIntervenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearIntervenesWithOptions(request, runtime);
}

CreateDatasetResponse Alibabacloud_AiMiaoBi20230801::Client::createDatasetWithOptions(shared_ptr<CreateDatasetRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDatasetShrinkRequest> request = make_shared<CreateDatasetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateDatasetRequestDatasetConfig>(tmpReq->datasetConfig)) {
    request->datasetConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->datasetConfig, make_shared<string>("DatasetConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDatasetRequestDocumentHandleConfig>(tmpReq->documentHandleConfig)) {
    request->documentHandleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documentHandleConfig, make_shared<string>("DocumentHandleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetConfigShrink)) {
    body->insert(pair<string, string>("DatasetConfig", *request->datasetConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetDescription)) {
    body->insert(pair<string, string>("DatasetDescription", *request->datasetDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetType)) {
    body->insert(pair<string, string>("DatasetType", *request->datasetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentHandleConfigShrink)) {
    body->insert(pair<string, string>("DocumentHandleConfig", *request->documentHandleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchDatasetEnable)) {
    body->insert(pair<string, long>("SearchDatasetEnable", *request->searchDatasetEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataset"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatasetResponse(callApi(params, req, runtime));
}

CreateDatasetResponse Alibabacloud_AiMiaoBi20230801::Client::createDataset(shared_ptr<CreateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDatasetWithOptions(request, runtime);
}

CreateGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::createGeneratedContentWithOptions(shared_ptr<CreateGeneratedContentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateGeneratedContentShrinkRequest> request = make_shared<CreateGeneratedContentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keywords)) {
    request->keywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keywords, make_shared<string>("Keywords"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentDomain)) {
    body->insert(pair<string, string>("ContentDomain", *request->contentDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentText)) {
    body->insert(pair<string, string>("ContentText", *request->contentText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywordsShrink)) {
    body->insert(pair<string, string>("Keywords", *request->keywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGeneratedContent"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGeneratedContentResponse(callApi(params, req, runtime));
}

CreateGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::createGeneratedContent(shared_ptr<CreateGeneratedContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGeneratedContentWithOptions(request, runtime);
}

CreateTokenResponse Alibabacloud_AiMiaoBi20230801::Client::createTokenWithOptions(shared_ptr<CreateTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateToken"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTokenResponse(callApi(params, req, runtime));
}

CreateTokenResponse Alibabacloud_AiMiaoBi20230801::Client::createToken(shared_ptr<CreateTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTokenWithOptions(request, runtime);
}

DeleteCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::deleteCustomTextWithOptions(shared_ptr<DeleteCustomTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    body->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomText"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomTextResponse(callApi(params, req, runtime));
}

DeleteCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::deleteCustomText(shared_ptr<DeleteCustomTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomTextWithOptions(request, runtime);
}

DeleteCustomTopicByTopicResponse Alibabacloud_AiMiaoBi20230801::Client::deleteCustomTopicByTopicWithOptions(shared_ptr<DeleteCustomTopicByTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomTopicByTopic"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomTopicByTopicResponse(callApi(params, req, runtime));
}

DeleteCustomTopicByTopicResponse Alibabacloud_AiMiaoBi20230801::Client::deleteCustomTopicByTopic(shared_ptr<DeleteCustomTopicByTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomTopicByTopicWithOptions(request, runtime);
}

DeleteCustomTopicViewPointByIdResponse Alibabacloud_AiMiaoBi20230801::Client::deleteCustomTopicViewPointByIdWithOptions(shared_ptr<DeleteCustomTopicViewPointByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customViewPointId)) {
    body->insert(pair<string, string>("CustomViewPointId", *request->customViewPointId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomTopicViewPointById"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomTopicViewPointByIdResponse(callApi(params, req, runtime));
}

DeleteCustomTopicViewPointByIdResponse Alibabacloud_AiMiaoBi20230801::Client::deleteCustomTopicViewPointById(shared_ptr<DeleteCustomTopicViewPointByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomTopicViewPointByIdWithOptions(request, runtime);
}

DeleteDatasetResponse Alibabacloud_AiMiaoBi20230801::Client::deleteDatasetWithOptions(shared_ptr<DeleteDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataset"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatasetResponse(callApi(params, req, runtime));
}

DeleteDatasetResponse Alibabacloud_AiMiaoBi20230801::Client::deleteDataset(shared_ptr<DeleteDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatasetWithOptions(request, runtime);
}

DeleteDatasetDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::deleteDatasetDocumentWithOptions(shared_ptr<DeleteDatasetDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docUuid)) {
    body->insert(pair<string, string>("DocUuid", *request->docUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDatasetDocument"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatasetDocumentResponse(callApi(params, req, runtime));
}

DeleteDatasetDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::deleteDatasetDocument(shared_ptr<DeleteDatasetDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatasetDocumentWithOptions(request, runtime);
}

DeleteDocsResponse Alibabacloud_AiMiaoBi20230801::Client::deleteDocsWithOptions(shared_ptr<DeleteDocsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteDocsShrinkRequest> request = make_shared<DeleteDocsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->docIds)) {
    request->docIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->docIds, make_shared<string>("DocIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docIdsShrink)) {
    body->insert(pair<string, string>("DocIds", *request->docIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDocs"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDocsResponse(callApi(params, req, runtime));
}

DeleteDocsResponse Alibabacloud_AiMiaoBi20230801::Client::deleteDocs(shared_ptr<DeleteDocsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDocsWithOptions(request, runtime);
}

DeleteGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::deleteGeneratedContentWithOptions(shared_ptr<DeleteGeneratedContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGeneratedContent"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGeneratedContentResponse(callApi(params, req, runtime));
}

DeleteGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::deleteGeneratedContent(shared_ptr<DeleteGeneratedContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGeneratedContentWithOptions(request, runtime);
}

DeleteInterveneRuleResponse Alibabacloud_AiMiaoBi20230801::Client::deleteInterveneRuleWithOptions(shared_ptr<DeleteInterveneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInterveneRule"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInterveneRuleResponse(callApi(params, req, runtime));
}

DeleteInterveneRuleResponse Alibabacloud_AiMiaoBi20230801::Client::deleteInterveneRule(shared_ptr<DeleteInterveneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInterveneRuleWithOptions(request, runtime);
}

DeleteMaterialByIdResponse Alibabacloud_AiMiaoBi20230801::Client::deleteMaterialByIdWithOptions(shared_ptr<DeleteMaterialByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMaterialById"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMaterialByIdResponse(callApi(params, req, runtime));
}

DeleteMaterialByIdResponse Alibabacloud_AiMiaoBi20230801::Client::deleteMaterialById(shared_ptr<DeleteMaterialByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMaterialByIdWithOptions(request, runtime);
}

DocumentExtractionResponse Alibabacloud_AiMiaoBi20230801::Client::documentExtractionWithOptions(shared_ptr<DocumentExtractionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DocumentExtractionShrinkRequest> request = make_shared<DocumentExtractionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->urls)) {
    request->urlsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->urls, make_shared<string>("Urls"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->urlsShrink)) {
    body->insert(pair<string, string>("Urls", *request->urlsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DocumentExtraction"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DocumentExtractionResponse(callApi(params, req, runtime));
}

DocumentExtractionResponse Alibabacloud_AiMiaoBi20230801::Client::documentExtraction(shared_ptr<DocumentExtractionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return documentExtractionWithOptions(request, runtime);
}

ExportAnalysisTagDetailByTaskIdResponse Alibabacloud_AiMiaoBi20230801::Client::exportAnalysisTagDetailByTaskIdWithOptions(shared_ptr<ExportAnalysisTagDetailByTaskIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExportAnalysisTagDetailByTaskIdShrinkRequest> request = make_shared<ExportAnalysisTagDetailByTaskIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->categories)) {
    request->categoriesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->categories, make_shared<string>("Categories"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoriesShrink)) {
    body->insert(pair<string, string>("Categories", *request->categoriesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportAnalysisTagDetailByTaskId"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportAnalysisTagDetailByTaskIdResponse(callApi(params, req, runtime));
}

ExportAnalysisTagDetailByTaskIdResponse Alibabacloud_AiMiaoBi20230801::Client::exportAnalysisTagDetailByTaskId(shared_ptr<ExportAnalysisTagDetailByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportAnalysisTagDetailByTaskIdWithOptions(request, runtime);
}

ExportGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::exportGeneratedContentWithOptions(shared_ptr<ExportGeneratedContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportGeneratedContent"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportGeneratedContentResponse(callApi(params, req, runtime));
}

ExportGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::exportGeneratedContent(shared_ptr<ExportGeneratedContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportGeneratedContentWithOptions(request, runtime);
}

ExportHotTopicPlanningProposalsResponse Alibabacloud_AiMiaoBi20230801::Client::exportHotTopicPlanningProposalsWithOptions(shared_ptr<ExportHotTopicPlanningProposalsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExportHotTopicPlanningProposalsShrinkRequest> request = make_shared<ExportHotTopicPlanningProposalsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->customViewPointIds)) {
    request->customViewPointIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customViewPointIds, make_shared<string>("CustomViewPointIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->titles)) {
    request->titlesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->titles, make_shared<string>("Titles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customViewPointIdsShrink)) {
    body->insert(pair<string, string>("CustomViewPointIds", *request->customViewPointIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exportType)) {
    body->insert(pair<string, string>("ExportType", *request->exportType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->titlesShrink)) {
    body->insert(pair<string, string>("Titles", *request->titlesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicSource)) {
    body->insert(pair<string, string>("TopicSource", *request->topicSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewPointType)) {
    body->insert(pair<string, string>("ViewPointType", *request->viewPointType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportHotTopicPlanningProposals"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportHotTopicPlanningProposalsResponse(callApi(params, req, runtime));
}

ExportHotTopicPlanningProposalsResponse Alibabacloud_AiMiaoBi20230801::Client::exportHotTopicPlanningProposals(shared_ptr<ExportHotTopicPlanningProposalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportHotTopicPlanningProposalsWithOptions(request, runtime);
}

ExportIntervenesResponse Alibabacloud_AiMiaoBi20230801::Client::exportIntervenesWithOptions(shared_ptr<ExportIntervenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportIntervenes"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportIntervenesResponse(callApi(params, req, runtime));
}

ExportIntervenesResponse Alibabacloud_AiMiaoBi20230801::Client::exportIntervenes(shared_ptr<ExportIntervenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportIntervenesWithOptions(request, runtime);
}

FeedbackDialogueResponse Alibabacloud_AiMiaoBi20230801::Client::feedbackDialogueWithOptions(shared_ptr<FeedbackDialogueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FeedbackDialogueShrinkRequest> request = make_shared<FeedbackDialogueShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ratingTags)) {
    request->ratingTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ratingTags, make_shared<string>("RatingTags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customerResponse)) {
    body->insert(pair<string, string>("CustomerResponse", *request->customerResponse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->goodText)) {
    body->insert(pair<string, string>("GoodText", *request->goodText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedResponse)) {
    body->insert(pair<string, string>("ModifiedResponse", *request->modifiedResponse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rating)) {
    body->insert(pair<string, string>("Rating", *request->rating));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ratingTagsShrink)) {
    body->insert(pair<string, string>("RatingTags", *request->ratingTagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FeedbackDialogue"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FeedbackDialogueResponse(callApi(params, req, runtime));
}

FeedbackDialogueResponse Alibabacloud_AiMiaoBi20230801::Client::feedbackDialogue(shared_ptr<FeedbackDialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return feedbackDialogueWithOptions(request, runtime);
}

FetchImageTaskResponse Alibabacloud_AiMiaoBi20230801::Client::fetchImageTaskWithOptions(shared_ptr<FetchImageTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FetchImageTaskShrinkRequest> request = make_shared<FetchImageTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->taskIdList)) {
    request->taskIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskIdList, make_shared<string>("TaskIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->articleTaskId)) {
    body->insert(pair<string, string>("ArticleTaskId", *request->articleTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdListShrink)) {
    body->insert(pair<string, string>("TaskIdList", *request->taskIdListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FetchImageTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FetchImageTaskResponse(callApi(params, req, runtime));
}

FetchImageTaskResponse Alibabacloud_AiMiaoBi20230801::Client::fetchImageTask(shared_ptr<FetchImageTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fetchImageTaskWithOptions(request, runtime);
}

GenerateFileUrlByKeyResponse Alibabacloud_AiMiaoBi20230801::Client::generateFileUrlByKeyWithOptions(shared_ptr<GenerateFileUrlByKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("FileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateFileUrlByKey"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateFileUrlByKeyResponse(callApi(params, req, runtime));
}

GenerateFileUrlByKeyResponse Alibabacloud_AiMiaoBi20230801::Client::generateFileUrlByKey(shared_ptr<GenerateFileUrlByKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateFileUrlByKeyWithOptions(request, runtime);
}

GenerateImageTaskResponse Alibabacloud_AiMiaoBi20230801::Client::generateImageTaskWithOptions(shared_ptr<GenerateImageTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateImageTaskShrinkRequest> request = make_shared<GenerateImageTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GenerateImageTaskRequestParagraphList>>(tmpReq->paragraphList)) {
    request->paragraphListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->paragraphList, make_shared<string>("ParagraphList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->articleTaskId)) {
    body->insert(pair<string, string>("ArticleTaskId", *request->articleTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paragraphListShrink)) {
    body->insert(pair<string, string>("ParagraphList", *request->paragraphListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    body->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->style)) {
    body->insert(pair<string, string>("Style", *request->style));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateImageTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateImageTaskResponse(callApi(params, req, runtime));
}

GenerateImageTaskResponse Alibabacloud_AiMiaoBi20230801::Client::generateImageTask(shared_ptr<GenerateImageTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateImageTaskWithOptions(request, runtime);
}

GenerateUploadConfigResponse Alibabacloud_AiMiaoBi20230801::Client::generateUploadConfigWithOptions(shared_ptr<GenerateUploadConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentDir)) {
    body->insert(pair<string, string>("ParentDir", *request->parentDir));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateUploadConfig"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateUploadConfigResponse(callApi(params, req, runtime));
}

GenerateUploadConfigResponse Alibabacloud_AiMiaoBi20230801::Client::generateUploadConfig(shared_ptr<GenerateUploadConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateUploadConfigWithOptions(request, runtime);
}

GenerateViewPointResponse Alibabacloud_AiMiaoBi20230801::Client::generateViewPointWithOptions(shared_ptr<GenerateViewPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateViewPointShrinkRequest> request = make_shared<GenerateViewPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GenerateViewPointRequestReferenceData>(tmpReq->referenceData)) {
    request->referenceDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceData, make_shared<string>("ReferenceData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceDataShrink)) {
    body->insert(pair<string, string>("ReferenceData", *request->referenceDataShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateViewPoint"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateViewPointResponse(callApi(params, req, runtime));
}

GenerateViewPointResponse Alibabacloud_AiMiaoBi20230801::Client::generateViewPoint(shared_ptr<GenerateViewPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateViewPointWithOptions(request, runtime);
}

GetCategoriesByTaskIdResponse Alibabacloud_AiMiaoBi20230801::Client::getCategoriesByTaskIdWithOptions(shared_ptr<GetCategoriesByTaskIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCategoriesByTaskId"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCategoriesByTaskIdResponse(callApi(params, req, runtime));
}

GetCategoriesByTaskIdResponse Alibabacloud_AiMiaoBi20230801::Client::getCategoriesByTaskId(shared_ptr<GetCategoriesByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoriesByTaskIdWithOptions(request, runtime);
}

GetCustomHotTopicBroadcastJobResponse Alibabacloud_AiMiaoBi20230801::Client::getCustomHotTopicBroadcastJobWithOptions(shared_ptr<GetCustomHotTopicBroadcastJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomHotTopicBroadcastJob"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomHotTopicBroadcastJobResponse(callApi(params, req, runtime));
}

GetCustomHotTopicBroadcastJobResponse Alibabacloud_AiMiaoBi20230801::Client::getCustomHotTopicBroadcastJob(shared_ptr<GetCustomHotTopicBroadcastJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomHotTopicBroadcastJobWithOptions(request, runtime);
}

GetCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::getCustomTextWithOptions(shared_ptr<GetCustomTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    body->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomText"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomTextResponse(callApi(params, req, runtime));
}

GetCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::getCustomText(shared_ptr<GetCustomTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomTextWithOptions(request, runtime);
}

GetCustomTopicSelectionPerspectiveAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(shared_ptr<GetCustomTopicSelectionPerspectiveAnalysisTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomTopicSelectionPerspectiveAnalysisTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomTopicSelectionPerspectiveAnalysisTaskResponse(callApi(params, req, runtime));
}

GetCustomTopicSelectionPerspectiveAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getCustomTopicSelectionPerspectiveAnalysisTask(shared_ptr<GetCustomTopicSelectionPerspectiveAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

GetDataSourceOrderConfigResponse Alibabacloud_AiMiaoBi20230801::Client::getDataSourceOrderConfigWithOptions(shared_ptr<GetDataSourceOrderConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSourceOrderConfig"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceOrderConfigResponse(callApi(params, req, runtime));
}

GetDataSourceOrderConfigResponse Alibabacloud_AiMiaoBi20230801::Client::getDataSourceOrderConfig(shared_ptr<GetDataSourceOrderConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceOrderConfigWithOptions(request, runtime);
}

GetDatasetResponse Alibabacloud_AiMiaoBi20230801::Client::getDatasetWithOptions(shared_ptr<GetDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataset"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatasetResponse(callApi(params, req, runtime));
}

GetDatasetResponse Alibabacloud_AiMiaoBi20230801::Client::getDataset(shared_ptr<GetDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatasetWithOptions(request, runtime);
}

GetDatasetDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::getDatasetDocumentWithOptions(shared_ptr<GetDatasetDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docUuid)) {
    body->insert(pair<string, string>("DocUuid", *request->docUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDatasetDocument"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatasetDocumentResponse(callApi(params, req, runtime));
}

GetDatasetDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::getDatasetDocument(shared_ptr<GetDatasetDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDatasetDocumentWithOptions(request, runtime);
}

GetDocClusterTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getDocClusterTaskWithOptions(shared_ptr<GetDocClusterTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocClusterTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocClusterTaskResponse(callApi(params, req, runtime));
}

GetDocClusterTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getDocClusterTask(shared_ptr<GetDocClusterTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDocClusterTaskWithOptions(request, runtime);
}

GetDocInfoResponse Alibabacloud_AiMiaoBi20230801::Client::getDocInfoWithOptions(shared_ptr<GetDocInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocInfo"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocInfoResponse(callApi(params, req, runtime));
}

GetDocInfoResponse Alibabacloud_AiMiaoBi20230801::Client::getDocInfo(shared_ptr<GetDocInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDocInfoWithOptions(request, runtime);
}

GetEnterpriseVocAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getEnterpriseVocAnalysisTaskWithOptions(shared_ptr<GetEnterpriseVocAnalysisTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseVocAnalysisTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseVocAnalysisTaskResponse(callApi(params, req, runtime));
}

GetEnterpriseVocAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getEnterpriseVocAnalysisTask(shared_ptr<GetEnterpriseVocAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEnterpriseVocAnalysisTaskWithOptions(request, runtime);
}

GetGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::getGeneratedContentWithOptions(shared_ptr<GetGeneratedContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGeneratedContent"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGeneratedContentResponse(callApi(params, req, runtime));
}

GetGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::getGeneratedContent(shared_ptr<GetGeneratedContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGeneratedContentWithOptions(request, runtime);
}

GetHotTopicBroadcastResponse Alibabacloud_AiMiaoBi20230801::Client::getHotTopicBroadcastWithOptions(shared_ptr<GetHotTopicBroadcastRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotTopicBroadcastShrinkRequest> request = make_shared<GetHotTopicBroadcastShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotTopicBroadcastRequestStepForCustomSummaryStyleConfig>(tmpReq->stepForCustomSummaryStyleConfig)) {
    request->stepForCustomSummaryStyleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->stepForCustomSummaryStyleConfig, make_shared<string>("StepForCustomSummaryStyleConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetHotTopicBroadcastRequestStepForNewsBroadcastContentConfig>(tmpReq->stepForNewsBroadcastContentConfig)) {
    request->stepForNewsBroadcastContentConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->stepForNewsBroadcastContentConfig, make_shared<string>("StepForNewsBroadcastContentConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->topics)) {
    request->topicsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->topics, make_shared<string>("Topics"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->calcTotalToken)) {
    body->insert(pair<string, bool>("CalcTotalToken", *request->calcTotalToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotTopicVersion)) {
    body->insert(pair<string, string>("HotTopicVersion", *request->hotTopicVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stepForCustomSummaryStyleConfigShrink)) {
    body->insert(pair<string, string>("StepForCustomSummaryStyleConfig", *request->stepForCustomSummaryStyleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stepForNewsBroadcastContentConfigShrink)) {
    body->insert(pair<string, string>("StepForNewsBroadcastContentConfig", *request->stepForNewsBroadcastContentConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicsShrink)) {
    body->insert(pair<string, string>("Topics", *request->topicsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotTopicBroadcast"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotTopicBroadcastResponse(callApi(params, req, runtime));
}

GetHotTopicBroadcastResponse Alibabacloud_AiMiaoBi20230801::Client::getHotTopicBroadcast(shared_ptr<GetHotTopicBroadcastRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotTopicBroadcastWithOptions(request, runtime);
}

GetInterveneGlobalReplyResponse Alibabacloud_AiMiaoBi20230801::Client::getInterveneGlobalReplyWithOptions(shared_ptr<GetInterveneGlobalReplyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInterveneGlobalReply"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInterveneGlobalReplyResponse(callApi(params, req, runtime));
}

GetInterveneGlobalReplyResponse Alibabacloud_AiMiaoBi20230801::Client::getInterveneGlobalReply(shared_ptr<GetInterveneGlobalReplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInterveneGlobalReplyWithOptions(request, runtime);
}

GetInterveneImportTaskInfoResponse Alibabacloud_AiMiaoBi20230801::Client::getInterveneImportTaskInfoWithOptions(shared_ptr<GetInterveneImportTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInterveneImportTaskInfo"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInterveneImportTaskInfoResponse(callApi(params, req, runtime));
}

GetInterveneImportTaskInfoResponse Alibabacloud_AiMiaoBi20230801::Client::getInterveneImportTaskInfo(shared_ptr<GetInterveneImportTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInterveneImportTaskInfoWithOptions(request, runtime);
}

GetInterveneRuleDetailResponse Alibabacloud_AiMiaoBi20230801::Client::getInterveneRuleDetailWithOptions(shared_ptr<GetInterveneRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInterveneRuleDetail"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInterveneRuleDetailResponse(callApi(params, req, runtime));
}

GetInterveneRuleDetailResponse Alibabacloud_AiMiaoBi20230801::Client::getInterveneRuleDetail(shared_ptr<GetInterveneRuleDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInterveneRuleDetailWithOptions(request, runtime);
}

GetInterveneTemplateFileUrlResponse Alibabacloud_AiMiaoBi20230801::Client::getInterveneTemplateFileUrlWithOptions(shared_ptr<GetInterveneTemplateFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInterveneTemplateFileUrl"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInterveneTemplateFileUrlResponse(callApi(params, req, runtime));
}

GetInterveneTemplateFileUrlResponse Alibabacloud_AiMiaoBi20230801::Client::getInterveneTemplateFileUrl(shared_ptr<GetInterveneTemplateFileUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInterveneTemplateFileUrlWithOptions(request, runtime);
}

GetMaterialByIdResponse Alibabacloud_AiMiaoBi20230801::Client::getMaterialByIdWithOptions(shared_ptr<GetMaterialByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMaterialById"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMaterialByIdResponse(callApi(params, req, runtime));
}

GetMaterialByIdResponse Alibabacloud_AiMiaoBi20230801::Client::getMaterialById(shared_ptr<GetMaterialByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMaterialByIdWithOptions(request, runtime);
}

GetPropertiesResponse Alibabacloud_AiMiaoBi20230801::Client::getPropertiesWithOptions(shared_ptr<GetPropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProperties"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPropertiesResponse(callApi(params, req, runtime));
}

GetPropertiesResponse Alibabacloud_AiMiaoBi20230801::Client::getProperties(shared_ptr<GetPropertiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPropertiesWithOptions(request, runtime);
}

GetSmartClipTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getSmartClipTaskWithOptions(shared_ptr<GetSmartClipTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSmartClipTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSmartClipTaskResponse(callApi(params, req, runtime));
}

GetSmartClipTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getSmartClipTask(shared_ptr<GetSmartClipTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmartClipTaskWithOptions(request, runtime);
}

GetTopicByIdResponse Alibabacloud_AiMiaoBi20230801::Client::getTopicByIdWithOptions(shared_ptr<GetTopicByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTopicById"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTopicByIdResponse(callApi(params, req, runtime));
}

GetTopicByIdResponse Alibabacloud_AiMiaoBi20230801::Client::getTopicById(shared_ptr<GetTopicByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicByIdWithOptions(request, runtime);
}

GetTopicSelectionPerspectiveAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getTopicSelectionPerspectiveAnalysisTaskWithOptions(shared_ptr<GetTopicSelectionPerspectiveAnalysisTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTopicSelectionPerspectiveAnalysisTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTopicSelectionPerspectiveAnalysisTaskResponse(callApi(params, req, runtime));
}

GetTopicSelectionPerspectiveAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::getTopicSelectionPerspectiveAnalysisTask(shared_ptr<GetTopicSelectionPerspectiveAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

ImportInterveneFileResponse Alibabacloud_AiMiaoBi20230801::Client::importInterveneFileWithOptions(shared_ptr<ImportInterveneFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docName)) {
    body->insert(pair<string, string>("DocName", *request->docName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("FileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportInterveneFile"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportInterveneFileResponse(callApi(params, req, runtime));
}

ImportInterveneFileResponse Alibabacloud_AiMiaoBi20230801::Client::importInterveneFile(shared_ptr<ImportInterveneFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importInterveneFileWithOptions(request, runtime);
}

ImportInterveneFileAsyncResponse Alibabacloud_AiMiaoBi20230801::Client::importInterveneFileAsyncWithOptions(shared_ptr<ImportInterveneFileAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docName)) {
    body->insert(pair<string, string>("DocName", *request->docName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("FileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportInterveneFileAsync"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportInterveneFileAsyncResponse(callApi(params, req, runtime));
}

ImportInterveneFileAsyncResponse Alibabacloud_AiMiaoBi20230801::Client::importInterveneFileAsync(shared_ptr<ImportInterveneFileAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importInterveneFileAsyncWithOptions(request, runtime);
}

InsertInterveneGlobalReplyResponse Alibabacloud_AiMiaoBi20230801::Client::insertInterveneGlobalReplyWithOptions(shared_ptr<InsertInterveneGlobalReplyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertInterveneGlobalReplyShrinkRequest> request = make_shared<InsertInterveneGlobalReplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InsertInterveneGlobalReplyRequestReplyMessagList>>(tmpReq->replyMessagList)) {
    request->replyMessagListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->replyMessagList, make_shared<string>("ReplyMessagList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->replyMessagListShrink)) {
    body->insert(pair<string, string>("ReplyMessagList", *request->replyMessagListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertInterveneGlobalReply"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertInterveneGlobalReplyResponse(callApi(params, req, runtime));
}

InsertInterveneGlobalReplyResponse Alibabacloud_AiMiaoBi20230801::Client::insertInterveneGlobalReply(shared_ptr<InsertInterveneGlobalReplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertInterveneGlobalReplyWithOptions(request, runtime);
}

InsertInterveneRuleResponse Alibabacloud_AiMiaoBi20230801::Client::insertInterveneRuleWithOptions(shared_ptr<InsertInterveneRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertInterveneRuleShrinkRequest> request = make_shared<InsertInterveneRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<InsertInterveneRuleRequestInterveneRuleConfig>(tmpReq->interveneRuleConfig)) {
    request->interveneRuleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->interveneRuleConfig, make_shared<string>("InterveneRuleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->interveneRuleConfigShrink)) {
    body->insert(pair<string, string>("InterveneRuleConfig", *request->interveneRuleConfigShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertInterveneRule"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertInterveneRuleResponse(callApi(params, req, runtime));
}

InsertInterveneRuleResponse Alibabacloud_AiMiaoBi20230801::Client::insertInterveneRule(shared_ptr<InsertInterveneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertInterveneRuleWithOptions(request, runtime);
}

ListAnalysisTagDetailByTaskIdResponse Alibabacloud_AiMiaoBi20230801::Client::listAnalysisTagDetailByTaskIdWithOptions(shared_ptr<ListAnalysisTagDetailByTaskIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAnalysisTagDetailByTaskIdShrinkRequest> request = make_shared<ListAnalysisTagDetailByTaskIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->categories)) {
    request->categoriesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->categories, make_shared<string>("Categories"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoriesShrink)) {
    body->insert(pair<string, string>("Categories", *request->categoriesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnalysisTagDetailByTaskId"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnalysisTagDetailByTaskIdResponse(callApi(params, req, runtime));
}

ListAnalysisTagDetailByTaskIdResponse Alibabacloud_AiMiaoBi20230801::Client::listAnalysisTagDetailByTaskId(shared_ptr<ListAnalysisTagDetailByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnalysisTagDetailByTaskIdWithOptions(request, runtime);
}

ListAsyncTasksResponse Alibabacloud_AiMiaoBi20230801::Client::listAsyncTasksWithOptions(shared_ptr<ListAsyncTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAsyncTasksShrinkRequest> request = make_shared<ListAsyncTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->taskStatusList)) {
    request->taskStatusListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskStatusList, make_shared<string>("TaskStatusList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->taskTypeList)) {
    request->taskTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskTypeList, make_shared<string>("TaskTypeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeEnd)) {
    body->insert(pair<string, string>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    body->insert(pair<string, string>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskCode)) {
    body->insert(pair<string, string>("TaskCode", *request->taskCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskStatus)) {
    body->insert(pair<string, long>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatusListShrink)) {
    body->insert(pair<string, string>("TaskStatusList", *request->taskStatusListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskTypeListShrink)) {
    body->insert(pair<string, string>("TaskTypeList", *request->taskTypeListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAsyncTasks"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAsyncTasksResponse(callApi(params, req, runtime));
}

ListAsyncTasksResponse Alibabacloud_AiMiaoBi20230801::Client::listAsyncTasks(shared_ptr<ListAsyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAsyncTasksWithOptions(request, runtime);
}

ListBuildConfigsResponse Alibabacloud_AiMiaoBi20230801::Client::listBuildConfigsWithOptions(shared_ptr<ListBuildConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBuildConfigs"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBuildConfigsResponse(callApi(params, req, runtime));
}

ListBuildConfigsResponse Alibabacloud_AiMiaoBi20230801::Client::listBuildConfigs(shared_ptr<ListBuildConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBuildConfigsWithOptions(request, runtime);
}

ListCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::listCustomTextWithOptions(shared_ptr<ListCustomTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    body->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomText"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomTextResponse(callApi(params, req, runtime));
}

ListCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::listCustomText(shared_ptr<ListCustomTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomTextWithOptions(request, runtime);
}

ListCustomViewPointsResponse Alibabacloud_AiMiaoBi20230801::Client::listCustomViewPointsWithOptions(shared_ptr<ListCustomViewPointsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCustomViewPointsShrinkRequest> request = make_shared<ListCustomViewPointsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->attitudes)) {
    request->attitudesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attitudes, make_shared<string>("Attitudes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->customViewPointIds)) {
    request->customViewPointIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customViewPointIds, make_shared<string>("CustomViewPointIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attitude)) {
    body->insert(pair<string, string>("Attitude", *request->attitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attitudesShrink)) {
    body->insert(pair<string, string>("Attitudes", *request->attitudesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customViewPointId)) {
    body->insert(pair<string, string>("CustomViewPointId", *request->customViewPointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customViewPointIdsShrink)) {
    body->insert(pair<string, string>("CustomViewPointIds", *request->customViewPointIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicId)) {
    body->insert(pair<string, string>("TopicId", *request->topicId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomViewPoints"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomViewPointsResponse(callApi(params, req, runtime));
}

ListCustomViewPointsResponse Alibabacloud_AiMiaoBi20230801::Client::listCustomViewPoints(shared_ptr<ListCustomViewPointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomViewPointsWithOptions(request, runtime);
}

ListDatasetDocumentsResponse Alibabacloud_AiMiaoBi20230801::Client::listDatasetDocumentsWithOptions(shared_ptr<ListDatasetDocumentsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDatasetDocumentsShrinkRequest> request = make_shared<ListDatasetDocumentsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->excludeFields)) {
    request->excludeFieldsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->excludeFields, make_shared<string>("ExcludeFields"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->includeFields)) {
    request->includeFieldsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->includeFields, make_shared<string>("IncludeFields"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetDescription)) {
    body->insert(pair<string, string>("DatasetDescription", *request->datasetDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    body->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeFieldsShrink)) {
    body->insert(pair<string, string>("ExcludeFields", *request->excludeFieldsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeFieldsShrink)) {
    body->insert(pair<string, string>("IncludeFields", *request->includeFieldsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatasetDocuments"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatasetDocumentsResponse(callApi(params, req, runtime));
}

ListDatasetDocumentsResponse Alibabacloud_AiMiaoBi20230801::Client::listDatasetDocuments(shared_ptr<ListDatasetDocumentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatasetDocumentsWithOptions(request, runtime);
}

ListDatasetsResponse Alibabacloud_AiMiaoBi20230801::Client::listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetType)) {
    body->insert(pair<string, string>("DatasetType", *request->datasetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    body->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchDatasetEnable)) {
    body->insert(pair<string, long>("SearchDatasetEnable", *request->searchDatasetEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatasets"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatasetsResponse(callApi(params, req, runtime));
}

ListDatasetsResponse Alibabacloud_AiMiaoBi20230801::Client::listDatasets(shared_ptr<ListDatasetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatasetsWithOptions(request, runtime);
}

ListDialoguesResponse Alibabacloud_AiMiaoBi20230801::Client::listDialoguesWithOptions(shared_ptr<ListDialoguesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogueType)) {
    body->insert(pair<string, long>("DialogueType", *request->dialogueType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDialogues"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDialoguesResponse(callApi(params, req, runtime));
}

ListDialoguesResponse Alibabacloud_AiMiaoBi20230801::Client::listDialogues(shared_ptr<ListDialoguesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDialoguesWithOptions(request, runtime);
}

ListDocsResponse Alibabacloud_AiMiaoBi20230801::Client::listDocsWithOptions(shared_ptr<ListDocsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDocsShrinkRequest> request = make_shared<ListDocsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->statuses)) {
    request->statusesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->statuses, make_shared<string>("Statuses"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docName)) {
    body->insert(pair<string, string>("DocName", *request->docName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    body->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skip)) {
    body->insert(pair<string, long>("Skip", *request->skip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusesShrink)) {
    body->insert(pair<string, string>("Statuses", *request->statusesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDocs"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDocsResponse(callApi(params, req, runtime));
}

ListDocsResponse Alibabacloud_AiMiaoBi20230801::Client::listDocs(shared_ptr<ListDocsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDocsWithOptions(request, runtime);
}

ListFreshViewPointsResponse Alibabacloud_AiMiaoBi20230801::Client::listFreshViewPointsWithOptions(shared_ptr<ListFreshViewPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicSource)) {
    body->insert(pair<string, string>("TopicSource", *request->topicSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFreshViewPoints"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFreshViewPointsResponse(callApi(params, req, runtime));
}

ListFreshViewPointsResponse Alibabacloud_AiMiaoBi20230801::Client::listFreshViewPoints(shared_ptr<ListFreshViewPointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFreshViewPointsWithOptions(request, runtime);
}

ListGeneratedContentsResponse Alibabacloud_AiMiaoBi20230801::Client::listGeneratedContentsWithOptions(shared_ptr<ListGeneratedContentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentDomain)) {
    body->insert(pair<string, string>("ContentDomain", *request->contentDomain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGeneratedContents"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGeneratedContentsResponse(callApi(params, req, runtime));
}

ListGeneratedContentsResponse Alibabacloud_AiMiaoBi20230801::Client::listGeneratedContents(shared_ptr<ListGeneratedContentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGeneratedContentsWithOptions(request, runtime);
}

ListHotNewsWithTypeResponse Alibabacloud_AiMiaoBi20230801::Client::listHotNewsWithTypeWithOptions(shared_ptr<ListHotNewsWithTypeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotNewsWithTypeShrinkRequest> request = make_shared<ListHotNewsWithTypeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->newsTypes)) {
    request->newsTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->newsTypes, make_shared<string>("NewsTypes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newsType)) {
    body->insert(pair<string, string>("NewsType", *request->newsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newsTypesShrink)) {
    body->insert(pair<string, string>("NewsTypes", *request->newsTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotNewsWithType"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotNewsWithTypeResponse(callApi(params, req, runtime));
}

ListHotNewsWithTypeResponse Alibabacloud_AiMiaoBi20230801::Client::listHotNewsWithType(shared_ptr<ListHotNewsWithTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotNewsWithTypeWithOptions(request, runtime);
}

ListHotSourcesResponse Alibabacloud_AiMiaoBi20230801::Client::listHotSourcesWithOptions(shared_ptr<ListHotSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotSources"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotSourcesResponse(callApi(params, req, runtime));
}

ListHotSourcesResponse Alibabacloud_AiMiaoBi20230801::Client::listHotSources(shared_ptr<ListHotSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotSourcesWithOptions(request, runtime);
}

ListHotTopicsResponse Alibabacloud_AiMiaoBi20230801::Client::listHotTopicsWithOptions(shared_ptr<ListHotTopicsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotTopicsShrinkRequest> request = make_shared<ListHotTopicsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->topicIds)) {
    request->topicIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->topicIds, make_shared<string>("TopicIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->topics)) {
    request->topicsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->topics, make_shared<string>("Topics"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicIdsShrink)) {
    body->insert(pair<string, string>("TopicIds", *request->topicIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicQuery)) {
    body->insert(pair<string, string>("TopicQuery", *request->topicQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicSource)) {
    body->insert(pair<string, string>("TopicSource", *request->topicSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicVersion)) {
    body->insert(pair<string, string>("TopicVersion", *request->topicVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicsShrink)) {
    body->insert(pair<string, string>("Topics", *request->topicsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withNews)) {
    body->insert(pair<string, bool>("WithNews", *request->withNews));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotTopics"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotTopicsResponse(callApi(params, req, runtime));
}

ListHotTopicsResponse Alibabacloud_AiMiaoBi20230801::Client::listHotTopics(shared_ptr<ListHotTopicsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotTopicsWithOptions(request, runtime);
}

ListHotViewPointsResponse Alibabacloud_AiMiaoBi20230801::Client::listHotViewPointsWithOptions(shared_ptr<ListHotViewPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicSource)) {
    body->insert(pair<string, string>("TopicSource", *request->topicSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotViewPoints"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotViewPointsResponse(callApi(params, req, runtime));
}

ListHotViewPointsResponse Alibabacloud_AiMiaoBi20230801::Client::listHotViewPoints(shared_ptr<ListHotViewPointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotViewPointsWithOptions(request, runtime);
}

ListInterveneCntResponse Alibabacloud_AiMiaoBi20230801::Client::listInterveneCntWithOptions(shared_ptr<ListInterveneCntRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInterveneCnt"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterveneCntResponse(callApi(params, req, runtime));
}

ListInterveneCntResponse Alibabacloud_AiMiaoBi20230801::Client::listInterveneCnt(shared_ptr<ListInterveneCntRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInterveneCntWithOptions(request, runtime);
}

ListInterveneImportTasksResponse Alibabacloud_AiMiaoBi20230801::Client::listInterveneImportTasksWithOptions(shared_ptr<ListInterveneImportTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInterveneImportTasks"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterveneImportTasksResponse(callApi(params, req, runtime));
}

ListInterveneImportTasksResponse Alibabacloud_AiMiaoBi20230801::Client::listInterveneImportTasks(shared_ptr<ListInterveneImportTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInterveneImportTasksWithOptions(request, runtime);
}

ListInterveneRulesResponse Alibabacloud_AiMiaoBi20230801::Client::listInterveneRulesWithOptions(shared_ptr<ListInterveneRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInterveneRules"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInterveneRulesResponse(callApi(params, req, runtime));
}

ListInterveneRulesResponse Alibabacloud_AiMiaoBi20230801::Client::listInterveneRules(shared_ptr<ListInterveneRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInterveneRulesWithOptions(request, runtime);
}

ListIntervenesResponse Alibabacloud_AiMiaoBi20230801::Client::listIntervenesWithOptions(shared_ptr<ListIntervenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->interveneType)) {
    body->insert(pair<string, long>("InterveneType", *request->interveneType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    body->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    body->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIntervenes"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIntervenesResponse(callApi(params, req, runtime));
}

ListIntervenesResponse Alibabacloud_AiMiaoBi20230801::Client::listIntervenes(shared_ptr<ListIntervenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIntervenesWithOptions(request, runtime);
}

ListMaterialDocumentsResponse Alibabacloud_AiMiaoBi20230801::Client::listMaterialDocumentsWithOptions(shared_ptr<ListMaterialDocumentsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListMaterialDocumentsShrinkRequest> request = make_shared<ListMaterialDocumentsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->docTypeList)) {
    request->docTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->docTypeList, make_shared<string>("DocTypeList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keywords)) {
    request->keywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keywords, make_shared<string>("Keywords"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeEnd)) {
    body->insert(pair<string, string>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    body->insert(pair<string, string>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    body->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docTypeListShrink)) {
    body->insert(pair<string, string>("DocTypeList", *request->docTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->generatePublicUrl)) {
    body->insert(pair<string, bool>("GeneratePublicUrl", *request->generatePublicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywordsShrink)) {
    body->insert(pair<string, string>("Keywords", *request->keywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shareAttr)) {
    body->insert(pair<string, long>("ShareAttr", *request->shareAttr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateTimeEnd)) {
    body->insert(pair<string, string>("UpdateTimeEnd", *request->updateTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateTimeStart)) {
    body->insert(pair<string, string>("UpdateTimeStart", *request->updateTimeStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMaterialDocuments"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMaterialDocumentsResponse(callApi(params, req, runtime));
}

ListMaterialDocumentsResponse Alibabacloud_AiMiaoBi20230801::Client::listMaterialDocuments(shared_ptr<ListMaterialDocumentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMaterialDocumentsWithOptions(request, runtime);
}

ListPlanningProposalResponse Alibabacloud_AiMiaoBi20230801::Client::listPlanningProposalWithOptions(shared_ptr<ListPlanningProposalRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListPlanningProposalShrinkRequest> request = make_shared<ListPlanningProposalShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->customViewPointIds)) {
    request->customViewPointIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customViewPointIds, make_shared<string>("CustomViewPointIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->titles)) {
    request->titlesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->titles, make_shared<string>("Titles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customViewPointId)) {
    body->insert(pair<string, string>("CustomViewPointId", *request->customViewPointId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customViewPointIdsShrink)) {
    body->insert(pair<string, string>("CustomViewPointIds", *request->customViewPointIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->titlesShrink)) {
    body->insert(pair<string, string>("Titles", *request->titlesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicSource)) {
    body->insert(pair<string, string>("TopicSource", *request->topicSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicVersion)) {
    body->insert(pair<string, string>("TopicVersion", *request->topicVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewPointType)) {
    body->insert(pair<string, string>("ViewPointType", *request->viewPointType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPlanningProposal"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPlanningProposalResponse(callApi(params, req, runtime));
}

ListPlanningProposalResponse Alibabacloud_AiMiaoBi20230801::Client::listPlanningProposal(shared_ptr<ListPlanningProposalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPlanningProposalWithOptions(request, runtime);
}

ListSearchTaskDialogueDatasResponse Alibabacloud_AiMiaoBi20230801::Client::listSearchTaskDialogueDatasWithOptions(shared_ptr<ListSearchTaskDialogueDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeContent)) {
    body->insert(pair<string, bool>("IncludeContent", *request->includeContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multimodalSearchType)) {
    body->insert(pair<string, string>("MultimodalSearchType", *request->multimodalSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalSessionId)) {
    body->insert(pair<string, string>("OriginalSessionId", *request->originalSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchModel)) {
    body->insert(pair<string, string>("SearchModel", *request->searchModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchModelDataValue)) {
    body->insert(pair<string, string>("SearchModelDataValue", *request->searchModelDataValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchTaskDialogueDatas"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSearchTaskDialogueDatasResponse(callApi(params, req, runtime));
}

ListSearchTaskDialogueDatasResponse Alibabacloud_AiMiaoBi20230801::Client::listSearchTaskDialogueDatas(shared_ptr<ListSearchTaskDialogueDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSearchTaskDialogueDatasWithOptions(request, runtime);
}

ListSearchTaskDialoguesResponse Alibabacloud_AiMiaoBi20230801::Client::listSearchTaskDialoguesWithOptions(shared_ptr<ListSearchTaskDialoguesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchTaskDialogues"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSearchTaskDialoguesResponse(callApi(params, req, runtime));
}

ListSearchTaskDialoguesResponse Alibabacloud_AiMiaoBi20230801::Client::listSearchTaskDialogues(shared_ptr<ListSearchTaskDialoguesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSearchTaskDialoguesWithOptions(request, runtime);
}

ListSearchTasksResponse Alibabacloud_AiMiaoBi20230801::Client::listSearchTasksWithOptions(shared_ptr<ListSearchTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSearchTasksShrinkRequest> request = make_shared<ListSearchTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->dialogueTypes)) {
    request->dialogueTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dialogueTypes, make_shared<string>("DialogueTypes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogueTypesShrink)) {
    body->insert(pair<string, string>("DialogueTypes", *request->dialogueTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchTasks"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSearchTasksResponse(callApi(params, req, runtime));
}

ListSearchTasksResponse Alibabacloud_AiMiaoBi20230801::Client::listSearchTasks(shared_ptr<ListSearchTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSearchTasksWithOptions(request, runtime);
}

ListTimedViewAttitudeResponse Alibabacloud_AiMiaoBi20230801::Client::listTimedViewAttitudeWithOptions(shared_ptr<ListTimedViewAttitudeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicSource)) {
    body->insert(pair<string, string>("TopicSource", *request->topicSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTimedViewAttitude"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTimedViewAttitudeResponse(callApi(params, req, runtime));
}

ListTimedViewAttitudeResponse Alibabacloud_AiMiaoBi20230801::Client::listTimedViewAttitude(shared_ptr<ListTimedViewAttitudeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTimedViewAttitudeWithOptions(request, runtime);
}

ListTopicRecommendEventListResponse Alibabacloud_AiMiaoBi20230801::Client::listTopicRecommendEventListWithOptions(shared_ptr<ListTopicRecommendEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTopicRecommendEventList"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTopicRecommendEventListResponse(callApi(params, req, runtime));
}

ListTopicRecommendEventListResponse Alibabacloud_AiMiaoBi20230801::Client::listTopicRecommendEventList(shared_ptr<ListTopicRecommendEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTopicRecommendEventListWithOptions(request, runtime);
}

ListTopicViewPointRecommendEventListResponse Alibabacloud_AiMiaoBi20230801::Client::listTopicViewPointRecommendEventListWithOptions(shared_ptr<ListTopicViewPointRecommendEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTopicViewPointRecommendEventList"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTopicViewPointRecommendEventListResponse(callApi(params, req, runtime));
}

ListTopicViewPointRecommendEventListResponse Alibabacloud_AiMiaoBi20230801::Client::listTopicViewPointRecommendEventList(shared_ptr<ListTopicViewPointRecommendEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTopicViewPointRecommendEventListWithOptions(request, runtime);
}

ListVersionsResponse Alibabacloud_AiMiaoBi20230801::Client::listVersionsWithOptions(shared_ptr<ListVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVersions"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVersionsResponse(callApi(params, req, runtime));
}

ListVersionsResponse Alibabacloud_AiMiaoBi20230801::Client::listVersions(shared_ptr<ListVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVersionsWithOptions(request, runtime);
}

ListWebReviewPointsResponse Alibabacloud_AiMiaoBi20230801::Client::listWebReviewPointsWithOptions(shared_ptr<ListWebReviewPointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicSource)) {
    body->insert(pair<string, string>("TopicSource", *request->topicSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWebReviewPoints"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWebReviewPointsResponse(callApi(params, req, runtime));
}

ListWebReviewPointsResponse Alibabacloud_AiMiaoBi20230801::Client::listWebReviewPoints(shared_ptr<ListWebReviewPointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWebReviewPointsWithOptions(request, runtime);
}

QueryAsyncTaskResponse Alibabacloud_AiMiaoBi20230801::Client::queryAsyncTaskWithOptions(shared_ptr<QueryAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAsyncTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAsyncTaskResponse(callApi(params, req, runtime));
}

QueryAsyncTaskResponse Alibabacloud_AiMiaoBi20230801::Client::queryAsyncTask(shared_ptr<QueryAsyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAsyncTaskWithOptions(request, runtime);
}

RunAbbreviationContentResponse Alibabacloud_AiMiaoBi20230801::Client::runAbbreviationContentWithOptions(shared_ptr<RunAbbreviationContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunAbbreviationContent"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunAbbreviationContentResponse(callApi(params, req, runtime));
}

RunAbbreviationContentResponse Alibabacloud_AiMiaoBi20230801::Client::runAbbreviationContent(shared_ptr<RunAbbreviationContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runAbbreviationContentWithOptions(request, runtime);
}

RunBookIntroductionResponse Alibabacloud_AiMiaoBi20230801::Client::runBookIntroductionWithOptions(shared_ptr<RunBookIntroductionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunBookIntroduction"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunBookIntroductionResponse(callApi(params, req, runtime));
}

RunBookIntroductionResponse Alibabacloud_AiMiaoBi20230801::Client::runBookIntroduction(shared_ptr<RunBookIntroductionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runBookIntroductionWithOptions(request, runtime);
}

RunBookSmartCardResponse Alibabacloud_AiMiaoBi20230801::Client::runBookSmartCardWithOptions(shared_ptr<RunBookSmartCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunBookSmartCard"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunBookSmartCardResponse(callApi(params, req, runtime));
}

RunBookSmartCardResponse Alibabacloud_AiMiaoBi20230801::Client::runBookSmartCard(shared_ptr<RunBookSmartCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runBookSmartCardWithOptions(request, runtime);
}

RunContinueContentResponse Alibabacloud_AiMiaoBi20230801::Client::runContinueContentWithOptions(shared_ptr<RunContinueContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunContinueContent"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunContinueContentResponse(callApi(params, req, runtime));
}

RunContinueContentResponse Alibabacloud_AiMiaoBi20230801::Client::runContinueContent(shared_ptr<RunContinueContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runContinueContentWithOptions(request, runtime);
}

RunCustomHotTopicAnalysisResponse Alibabacloud_AiMiaoBi20230801::Client::runCustomHotTopicAnalysisWithOptions(shared_ptr<RunCustomHotTopicAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->askUser)) {
    body->insert(pair<string, string>("AskUser", *request->askUser));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceAnalysisExistsTopic)) {
    body->insert(pair<string, bool>("ForceAnalysisExistsTopic", *request->forceAnalysisExistsTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBack)) {
    body->insert(pair<string, string>("UserBack", *request->userBack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCustomHotTopicAnalysis"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCustomHotTopicAnalysisResponse(callApi(params, req, runtime));
}

RunCustomHotTopicAnalysisResponse Alibabacloud_AiMiaoBi20230801::Client::runCustomHotTopicAnalysis(shared_ptr<RunCustomHotTopicAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCustomHotTopicAnalysisWithOptions(request, runtime);
}

RunCustomHotTopicViewPointAnalysisResponse Alibabacloud_AiMiaoBi20230801::Client::runCustomHotTopicViewPointAnalysisWithOptions(shared_ptr<RunCustomHotTopicViewPointAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->askUser)) {
    body->insert(pair<string, string>("AskUser", *request->askUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchQuery)) {
    body->insert(pair<string, string>("SearchQuery", *request->searchQuery));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipAskUser)) {
    body->insert(pair<string, bool>("SkipAskUser", *request->skipAskUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicId)) {
    body->insert(pair<string, string>("TopicId", *request->topicId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicSource)) {
    body->insert(pair<string, string>("TopicSource", *request->topicSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicVersion)) {
    body->insert(pair<string, string>("TopicVersion", *request->topicVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBack)) {
    body->insert(pair<string, string>("UserBack", *request->userBack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCustomHotTopicViewPointAnalysis"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCustomHotTopicViewPointAnalysisResponse(callApi(params, req, runtime));
}

RunCustomHotTopicViewPointAnalysisResponse Alibabacloud_AiMiaoBi20230801::Client::runCustomHotTopicViewPointAnalysis(shared_ptr<RunCustomHotTopicViewPointAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCustomHotTopicViewPointAnalysisWithOptions(request, runtime);
}

RunDocBrainmapResponse Alibabacloud_AiMiaoBi20230801::Client::runDocBrainmapWithOptions(shared_ptr<RunDocBrainmapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDocBrainmap"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunDocBrainmapResponse(callApi(params, req, runtime));
}

RunDocBrainmapResponse Alibabacloud_AiMiaoBi20230801::Client::runDocBrainmap(shared_ptr<RunDocBrainmapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDocBrainmapWithOptions(request, runtime);
}

RunDocIntroductionResponse Alibabacloud_AiMiaoBi20230801::Client::runDocIntroductionWithOptions(shared_ptr<RunDocIntroductionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDocIntroduction"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunDocIntroductionResponse(callApi(params, req, runtime));
}

RunDocIntroductionResponse Alibabacloud_AiMiaoBi20230801::Client::runDocIntroduction(shared_ptr<RunDocIntroductionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDocIntroductionWithOptions(request, runtime);
}

RunDocQaResponse Alibabacloud_AiMiaoBi20230801::Client::runDocQaWithOptions(shared_ptr<RunDocQaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunDocQaShrinkRequest> request = make_shared<RunDocQaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->categoryIds)) {
    request->categoryIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->categoryIds, make_shared<string>("CategoryIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunDocQaRequestConversationContexts>>(tmpReq->conversationContexts)) {
    request->conversationContextsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->conversationContexts, make_shared<string>("ConversationContexts"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->docIds)) {
    request->docIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->docIds, make_shared<string>("DocIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryIdsShrink)) {
    body->insert(pair<string, string>("CategoryIds", *request->categoryIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conversationContextsShrink)) {
    body->insert(pair<string, string>("ConversationContexts", *request->conversationContextsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docIdsShrink)) {
    body->insert(pair<string, string>("DocIds", *request->docIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceContent)) {
    body->insert(pair<string, string>("ReferenceContent", *request->referenceContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchSource)) {
    body->insert(pair<string, string>("SearchSource", *request->searchSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDocQa"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunDocQaResponse(callApi(params, req, runtime));
}

RunDocQaResponse Alibabacloud_AiMiaoBi20230801::Client::runDocQa(shared_ptr<RunDocQaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDocQaWithOptions(request, runtime);
}

RunDocSmartCardResponse Alibabacloud_AiMiaoBi20230801::Client::runDocSmartCardWithOptions(shared_ptr<RunDocSmartCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDocSmartCard"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunDocSmartCardResponse(callApi(params, req, runtime));
}

RunDocSmartCardResponse Alibabacloud_AiMiaoBi20230801::Client::runDocSmartCard(shared_ptr<RunDocSmartCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDocSmartCardWithOptions(request, runtime);
}

RunDocSummaryResponse Alibabacloud_AiMiaoBi20230801::Client::runDocSummaryWithOptions(shared_ptr<RunDocSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recommendContent)) {
    body->insert(pair<string, string>("RecommendContent", *request->recommendContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDocSummary"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunDocSummaryResponse(callApi(params, req, runtime));
}

RunDocSummaryResponse Alibabacloud_AiMiaoBi20230801::Client::runDocSummary(shared_ptr<RunDocSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDocSummaryWithOptions(request, runtime);
}

RunDocTranslationResponse Alibabacloud_AiMiaoBi20230801::Client::runDocTranslationWithOptions(shared_ptr<RunDocTranslationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("DocId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recommendContent)) {
    body->insert(pair<string, string>("RecommendContent", *request->recommendContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transType)) {
    body->insert(pair<string, string>("TransType", *request->transType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDocTranslation"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunDocTranslationResponse(callApi(params, req, runtime));
}

RunDocTranslationResponse Alibabacloud_AiMiaoBi20230801::Client::runDocTranslation(shared_ptr<RunDocTranslationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDocTranslationWithOptions(request, runtime);
}

RunExpandContentResponse Alibabacloud_AiMiaoBi20230801::Client::runExpandContentWithOptions(shared_ptr<RunExpandContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunExpandContent"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunExpandContentResponse(callApi(params, req, runtime));
}

RunExpandContentResponse Alibabacloud_AiMiaoBi20230801::Client::runExpandContent(shared_ptr<RunExpandContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runExpandContentWithOptions(request, runtime);
}

RunKeywordsExtractionGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runKeywordsExtractionGenerationWithOptions(shared_ptr<RunKeywordsExtractionGenerationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunKeywordsExtractionGenerationShrinkRequest> request = make_shared<RunKeywordsExtractionGenerationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunKeywordsExtractionGenerationRequestReferenceData>(tmpReq->referenceData)) {
    request->referenceDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceData, make_shared<string>("ReferenceData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceDataShrink)) {
    body->insert(pair<string, string>("ReferenceData", *request->referenceDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunKeywordsExtractionGeneration"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunKeywordsExtractionGenerationResponse(callApi(params, req, runtime));
}

RunKeywordsExtractionGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runKeywordsExtractionGeneration(shared_ptr<RunKeywordsExtractionGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runKeywordsExtractionGenerationWithOptions(request, runtime);
}

RunSearchGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runSearchGenerationWithOptions(shared_ptr<RunSearchGenerationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunSearchGenerationShrinkRequest> request = make_shared<RunSearchGenerationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunSearchGenerationRequestAgentContext>(tmpReq->agentContext)) {
    request->agentContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentContext, make_shared<string>("AgentContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunSearchGenerationRequestChatConfig>(tmpReq->chatConfig)) {
    request->chatConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->chatConfig, make_shared<string>("ChatConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentContextShrink)) {
    body->insert(pair<string, string>("AgentContext", *request->agentContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatConfigShrink)) {
    body->insert(pair<string, string>("ChatConfig", *request->chatConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalSessionId)) {
    body->insert(pair<string, string>("OriginalSessionId", *request->originalSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunSearchGeneration"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunSearchGenerationResponse(callApi(params, req, runtime));
}

RunSearchGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runSearchGeneration(shared_ptr<RunSearchGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runSearchGenerationWithOptions(request, runtime);
}

RunStepByStepWritingResponse Alibabacloud_AiMiaoBi20230801::Client::runStepByStepWritingWithOptions(shared_ptr<RunStepByStepWritingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunStepByStepWritingShrinkRequest> request = make_shared<RunStepByStepWritingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunStepByStepWritingRequestReferenceData>(tmpReq->referenceData)) {
    request->referenceDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceData, make_shared<string>("ReferenceData"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunStepByStepWritingRequestWritingConfig>(tmpReq->writingConfig)) {
    request->writingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->writingConfig, make_shared<string>("WritingConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->originSessionId)) {
    body->insert(pair<string, string>("OriginSessionId", *request->originSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceDataShrink)) {
    body->insert(pair<string, string>("ReferenceData", *request->referenceDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->writingConfigShrink)) {
    body->insert(pair<string, string>("WritingConfig", *request->writingConfigShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunStepByStepWriting"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunStepByStepWritingResponse(callApi(params, req, runtime));
}

RunStepByStepWritingResponse Alibabacloud_AiMiaoBi20230801::Client::runStepByStepWriting(shared_ptr<RunStepByStepWritingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runStepByStepWritingWithOptions(request, runtime);
}

RunStyleFeatureAnalysisResponse Alibabacloud_AiMiaoBi20230801::Client::runStyleFeatureAnalysisWithOptions(shared_ptr<RunStyleFeatureAnalysisRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunStyleFeatureAnalysisShrinkRequest> request = make_shared<RunStyleFeatureAnalysisShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->contents)) {
    request->contentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contents, make_shared<string>("Contents"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->materialIds)) {
    request->materialIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->materialIds, make_shared<string>("MaterialIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentsShrink)) {
    body->insert(pair<string, string>("Contents", *request->contentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialIdsShrink)) {
    body->insert(pair<string, string>("MaterialIds", *request->materialIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunStyleFeatureAnalysis"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunStyleFeatureAnalysisResponse(callApi(params, req, runtime));
}

RunStyleFeatureAnalysisResponse Alibabacloud_AiMiaoBi20230801::Client::runStyleFeatureAnalysis(shared_ptr<RunStyleFeatureAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runStyleFeatureAnalysisWithOptions(request, runtime);
}

RunSummaryGenerateResponse Alibabacloud_AiMiaoBi20230801::Client::runSummaryGenerateWithOptions(shared_ptr<RunSummaryGenerateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunSummaryGenerate"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunSummaryGenerateResponse(callApi(params, req, runtime));
}

RunSummaryGenerateResponse Alibabacloud_AiMiaoBi20230801::Client::runSummaryGenerate(shared_ptr<RunSummaryGenerateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runSummaryGenerateWithOptions(request, runtime);
}

RunTextPolishingResponse Alibabacloud_AiMiaoBi20230801::Client::runTextPolishingWithOptions(shared_ptr<RunTextPolishingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunTextPolishing"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunTextPolishingResponse(callApi(params, req, runtime));
}

RunTextPolishingResponse Alibabacloud_AiMiaoBi20230801::Client::runTextPolishing(shared_ptr<RunTextPolishingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runTextPolishingWithOptions(request, runtime);
}

RunTitleGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runTitleGenerationWithOptions(shared_ptr<RunTitleGenerationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunTitleGenerationShrinkRequest> request = make_shared<RunTitleGenerationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunTitleGenerationRequestReferenceData>(tmpReq->referenceData)) {
    request->referenceDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceData, make_shared<string>("ReferenceData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceDataShrink)) {
    body->insert(pair<string, string>("ReferenceData", *request->referenceDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunTitleGeneration"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunTitleGenerationResponse(callApi(params, req, runtime));
}

RunTitleGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runTitleGeneration(shared_ptr<RunTitleGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runTitleGenerationWithOptions(request, runtime);
}

RunTranslateGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runTranslateGenerationWithOptions(shared_ptr<RunTranslateGenerationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunTranslateGenerationShrinkRequest> request = make_shared<RunTranslateGenerationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunTranslateGenerationRequestReferenceData>(tmpReq->referenceData)) {
    request->referenceDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceData, make_shared<string>("ReferenceData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceDataShrink)) {
    body->insert(pair<string, string>("ReferenceData", *request->referenceDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunTranslateGeneration"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunTranslateGenerationResponse(callApi(params, req, runtime));
}

RunTranslateGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runTranslateGeneration(shared_ptr<RunTranslateGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runTranslateGenerationWithOptions(request, runtime);
}

RunWriteToneGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runWriteToneGenerationWithOptions(shared_ptr<RunWriteToneGenerationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunWriteToneGenerationShrinkRequest> request = make_shared<RunWriteToneGenerationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunWriteToneGenerationRequestReferenceData>(tmpReq->referenceData)) {
    request->referenceDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceData, make_shared<string>("ReferenceData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceDataShrink)) {
    body->insert(pair<string, string>("ReferenceData", *request->referenceDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunWriteToneGeneration"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunWriteToneGenerationResponse(callApi(params, req, runtime));
}

RunWriteToneGenerationResponse Alibabacloud_AiMiaoBi20230801::Client::runWriteToneGeneration(shared_ptr<RunWriteToneGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runWriteToneGenerationWithOptions(request, runtime);
}

RunWritingResponse Alibabacloud_AiMiaoBi20230801::Client::runWritingWithOptions(shared_ptr<RunWritingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunWritingShrinkRequest> request = make_shared<RunWritingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunWritingRequestReferenceData>(tmpReq->referenceData)) {
    request->referenceDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceData, make_shared<string>("ReferenceData"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunWritingRequestWritingConfig>(tmpReq->writingConfig)) {
    request->writingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->writingConfig, make_shared<string>("WritingConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->originSessionId)) {
    body->insert(pair<string, string>("OriginSessionId", *request->originSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceDataShrink)) {
    body->insert(pair<string, string>("ReferenceData", *request->referenceDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->writingConfigShrink)) {
    body->insert(pair<string, string>("WritingConfig", *request->writingConfigShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunWriting"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunWritingResponse(callApi(params, req, runtime));
}

RunWritingResponse Alibabacloud_AiMiaoBi20230801::Client::runWriting(shared_ptr<RunWritingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runWritingWithOptions(request, runtime);
}

SaveCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::saveCustomTextWithOptions(shared_ptr<SaveCustomTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    body->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveCustomText"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveCustomTextResponse(callApi(params, req, runtime));
}

SaveCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::saveCustomText(shared_ptr<SaveCustomTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveCustomTextWithOptions(request, runtime);
}

SaveDataSourceOrderConfigResponse Alibabacloud_AiMiaoBi20230801::Client::saveDataSourceOrderConfigWithOptions(shared_ptr<SaveDataSourceOrderConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SaveDataSourceOrderConfigShrinkRequest> request = make_shared<SaveDataSourceOrderConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList>>(tmpReq->userConfigDataSourceList)) {
    request->userConfigDataSourceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userConfigDataSourceList, make_shared<string>("UserConfigDataSourceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConfigDataSourceListShrink)) {
    body->insert(pair<string, string>("UserConfigDataSourceList", *request->userConfigDataSourceListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveDataSourceOrderConfig"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveDataSourceOrderConfigResponse(callApi(params, req, runtime));
}

SaveDataSourceOrderConfigResponse Alibabacloud_AiMiaoBi20230801::Client::saveDataSourceOrderConfig(shared_ptr<SaveDataSourceOrderConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveDataSourceOrderConfigWithOptions(request, runtime);
}

SaveMaterialDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::saveMaterialDocumentWithOptions(shared_ptr<SaveMaterialDocumentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SaveMaterialDocumentShrinkRequest> request = make_shared<SaveMaterialDocumentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->docKeywords)) {
    request->docKeywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->docKeywords, make_shared<string>("DocKeywords"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->author)) {
    body->insert(pair<string, string>("Author", *request->author));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->bothSavePrivateAndShare)) {
    body->insert(pair<string, bool>("BothSavePrivateAndShare", *request->bothSavePrivateAndShare));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docKeywordsShrink)) {
    body->insert(pair<string, string>("DocKeywords", *request->docKeywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    body->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalUrl)) {
    body->insert(pair<string, string>("ExternalUrl", *request->externalUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->htmlContent)) {
    body->insert(pair<string, string>("HtmlContent", *request->htmlContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubTime)) {
    body->insert(pair<string, string>("PubTime", *request->pubTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shareAttr)) {
    body->insert(pair<string, long>("ShareAttr", *request->shareAttr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcFrom)) {
    body->insert(pair<string, string>("SrcFrom", *request->srcFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summary)) {
    body->insert(pair<string, string>("Summary", *request->summary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textContent)) {
    body->insert(pair<string, string>("TextContent", *request->textContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveMaterialDocument"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveMaterialDocumentResponse(callApi(params, req, runtime));
}

SaveMaterialDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::saveMaterialDocument(shared_ptr<SaveMaterialDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveMaterialDocumentWithOptions(request, runtime);
}

SearchDatasetDocumentsResponse Alibabacloud_AiMiaoBi20230801::Client::searchDatasetDocumentsWithOptions(shared_ptr<SearchDatasetDocumentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extend1)) {
    body->insert(pair<string, string>("Extend1", *request->extend1));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeContent)) {
    body->insert(pair<string, bool>("IncludeContent", *request->includeContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    body->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchDatasetDocuments"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchDatasetDocumentsResponse(callApi(params, req, runtime));
}

SearchDatasetDocumentsResponse Alibabacloud_AiMiaoBi20230801::Client::searchDatasetDocuments(shared_ptr<SearchDatasetDocumentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchDatasetDocumentsWithOptions(request, runtime);
}

SearchNewsResponse Alibabacloud_AiMiaoBi20230801::Client::searchNewsWithOptions(shared_ptr<SearchNewsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchNewsShrinkRequest> request = make_shared<SearchNewsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->searchSources)) {
    request->searchSourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchSources, make_shared<string>("SearchSources"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->filterNotNull)) {
    body->insert(pair<string, bool>("FilterNotNull", *request->filterNotNull));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeContent)) {
    body->insert(pair<string, bool>("IncludeContent", *request->includeContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchSourcesShrink)) {
    body->insert(pair<string, string>("SearchSources", *request->searchSourcesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchNews"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchNewsResponse(callApi(params, req, runtime));
}

SearchNewsResponse Alibabacloud_AiMiaoBi20230801::Client::searchNews(shared_ptr<SearchNewsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchNewsWithOptions(request, runtime);
}

SubmitAsyncTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitAsyncTaskWithOptions(shared_ptr<SubmitAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskCode)) {
    body->insert(pair<string, string>("TaskCode", *request->taskCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskExecuteTime)) {
    body->insert(pair<string, string>("TaskExecuteTime", *request->taskExecuteTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskParam)) {
    body->insert(pair<string, string>("TaskParam", *request->taskParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAsyncTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAsyncTaskResponse(callApi(params, req, runtime));
}

SubmitAsyncTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitAsyncTask(shared_ptr<SubmitAsyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAsyncTaskWithOptions(request, runtime);
}

SubmitCustomHotTopicBroadcastJobResponse Alibabacloud_AiMiaoBi20230801::Client::submitCustomHotTopicBroadcastJobWithOptions(shared_ptr<SubmitCustomHotTopicBroadcastJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitCustomHotTopicBroadcastJobShrinkRequest> request = make_shared<SubmitCustomHotTopicBroadcastJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig>(tmpReq->hotTopicBroadcastConfig)) {
    request->hotTopicBroadcastConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotTopicBroadcastConfig, make_shared<string>("HotTopicBroadcastConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->topics)) {
    request->topicsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->topics, make_shared<string>("Topics"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotTopicBroadcastConfigShrink)) {
    body->insert(pair<string, string>("HotTopicBroadcastConfig", *request->hotTopicBroadcastConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotTopicVersion)) {
    body->insert(pair<string, string>("HotTopicVersion", *request->hotTopicVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicsShrink)) {
    body->insert(pair<string, string>("Topics", *request->topicsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCustomHotTopicBroadcastJob"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitCustomHotTopicBroadcastJobResponse(callApi(params, req, runtime));
}

SubmitCustomHotTopicBroadcastJobResponse Alibabacloud_AiMiaoBi20230801::Client::submitCustomHotTopicBroadcastJob(shared_ptr<SubmitCustomHotTopicBroadcastJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCustomHotTopicBroadcastJobWithOptions(request, runtime);
}

SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(shared_ptr<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest> request = make_shared<SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments>>(tmpReq->documents)) {
    request->documentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documents, make_shared<string>("Documents"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentsShrink)) {
    body->insert(pair<string, string>("Documents", *request->documentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCustomTopicSelectionPerspectiveAnalysisTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse(callApi(params, req, runtime));
}

SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitCustomTopicSelectionPerspectiveAnalysisTask(shared_ptr<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

SubmitDocClusterTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitDocClusterTaskWithOptions(shared_ptr<SubmitDocClusterTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitDocClusterTaskShrinkRequest> request = make_shared<SubmitDocClusterTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitDocClusterTaskRequestDocuments>>(tmpReq->documents)) {
    request->documentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documents, make_shared<string>("Documents"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentsShrink)) {
    body->insert(pair<string, string>("Documents", *request->documentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->summaryLength)) {
    body->insert(pair<string, long>("SummaryLength", *request->summaryLength));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->titleLength)) {
    body->insert(pair<string, long>("TitleLength", *request->titleLength));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topicCount)) {
    body->insert(pair<string, long>("TopicCount", *request->topicCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDocClusterTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDocClusterTaskResponse(callApi(params, req, runtime));
}

SubmitDocClusterTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitDocClusterTask(shared_ptr<SubmitDocClusterTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDocClusterTaskWithOptions(request, runtime);
}

SubmitEnterpriseVocAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitEnterpriseVocAnalysisTaskWithOptions(shared_ptr<SubmitEnterpriseVocAnalysisTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitEnterpriseVocAnalysisTaskShrinkRequest> request = make_shared<SubmitEnterpriseVocAnalysisTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitEnterpriseVocAnalysisTaskRequestContentTags>>(tmpReq->contentTags)) {
    request->contentTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contentTags, make_shared<string>("ContentTags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitEnterpriseVocAnalysisTaskRequestContents>>(tmpReq->contents)) {
    request->contentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contents, make_shared<string>("Contents"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>>(tmpReq->filterTags)) {
    request->filterTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterTags, make_shared<string>("FilterTags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentTagsShrink)) {
    body->insert(pair<string, string>("ContentTags", *request->contentTagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentsShrink)) {
    body->insert(pair<string, string>("Contents", *request->contentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("FileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTagsShrink)) {
    body->insert(pair<string, string>("FilterTags", *request->filterTagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialType)) {
    body->insert(pair<string, string>("MaterialType", *request->materialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->positiveSample)) {
    body->insert(pair<string, string>("PositiveSample", *request->positiveSample));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->positiveSampleFileKey)) {
    body->insert(pair<string, string>("PositiveSampleFileKey", *request->positiveSampleFileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitEnterpriseVocAnalysisTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitEnterpriseVocAnalysisTaskResponse(callApi(params, req, runtime));
}

SubmitEnterpriseVocAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitEnterpriseVocAnalysisTask(shared_ptr<SubmitEnterpriseVocAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitEnterpriseVocAnalysisTaskWithOptions(request, runtime);
}

SubmitSmartClipTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitSmartClipTaskWithOptions(shared_ptr<SubmitSmartClipTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSmartClipTaskShrinkRequest> request = make_shared<SubmitSmartClipTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSmartClipTaskRequestEditingConfig>(tmpReq->editingConfig)) {
    request->editingConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->editingConfig, make_shared<string>("EditingConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSmartClipTaskRequestInputConfig>(tmpReq->inputConfig)) {
    request->inputConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputConfig, make_shared<string>("InputConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSmartClipTaskRequestOutputConfig>(tmpReq->outputConfig)) {
    request->outputConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputConfig, make_shared<string>("OutputConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfigShrink)) {
    body->insert(pair<string, string>("EditingConfig", *request->editingConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendParam)) {
    body->insert(pair<string, string>("ExtendParam", *request->extendParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfigShrink)) {
    body->insert(pair<string, string>("InputConfig", *request->inputConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfigShrink)) {
    body->insert(pair<string, string>("OutputConfig", *request->outputConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSmartClipTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSmartClipTaskResponse(callApi(params, req, runtime));
}

SubmitSmartClipTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitSmartClipTask(shared_ptr<SubmitSmartClipTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmartClipTaskWithOptions(request, runtime);
}

SubmitTopicSelectionPerspectiveAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitTopicSelectionPerspectiveAnalysisTaskWithOptions(shared_ptr<SubmitTopicSelectionPerspectiveAnalysisTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest> request = make_shared<SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments>>(tmpReq->documents)) {
    request->documentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->documents, make_shared<string>("Documents"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->perspectiveTypes)) {
    request->perspectiveTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->perspectiveTypes, make_shared<string>("PerspectiveTypes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentsShrink)) {
    body->insert(pair<string, string>("Documents", *request->documentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->perspectiveTypesShrink)) {
    body->insert(pair<string, string>("PerspectiveTypes", *request->perspectiveTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTopicSelectionPerspectiveAnalysisTask"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTopicSelectionPerspectiveAnalysisTaskResponse(callApi(params, req, runtime));
}

SubmitTopicSelectionPerspectiveAnalysisTaskResponse Alibabacloud_AiMiaoBi20230801::Client::submitTopicSelectionPerspectiveAnalysisTask(shared_ptr<SubmitTopicSelectionPerspectiveAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTopicSelectionPerspectiveAnalysisTaskWithOptions(request, runtime);
}

UpdateCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::updateCustomTextWithOptions(shared_ptr<UpdateCustomTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    body->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomText"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomTextResponse(callApi(params, req, runtime));
}

UpdateCustomTextResponse Alibabacloud_AiMiaoBi20230801::Client::updateCustomText(shared_ptr<UpdateCustomTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomTextWithOptions(request, runtime);
}

UpdateDatasetResponse Alibabacloud_AiMiaoBi20230801::Client::updateDatasetWithOptions(shared_ptr<UpdateDatasetRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDatasetShrinkRequest> request = make_shared<UpdateDatasetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDatasetRequestDatasetConfig>(tmpReq->datasetConfig)) {
    request->datasetConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->datasetConfig, make_shared<string>("DatasetConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetConfigShrink)) {
    body->insert(pair<string, string>("DatasetConfig", *request->datasetConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetDescription)) {
    body->insert(pair<string, string>("DatasetDescription", *request->datasetDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchDatasetEnable)) {
    body->insert(pair<string, long>("SearchDatasetEnable", *request->searchDatasetEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataset"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDatasetResponse(callApi(params, req, runtime));
}

UpdateDatasetResponse Alibabacloud_AiMiaoBi20230801::Client::updateDataset(shared_ptr<UpdateDatasetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDatasetWithOptions(request, runtime);
}

UpdateDatasetDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::updateDatasetDocumentWithOptions(shared_ptr<UpdateDatasetDocumentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDatasetDocumentShrinkRequest> request = make_shared<UpdateDatasetDocumentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateDatasetDocumentRequestDocument>(tmpReq->document)) {
    request->documentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->document, make_shared<string>("Document"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentShrink)) {
    body->insert(pair<string, string>("Document", *request->documentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDatasetDocument"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDatasetDocumentResponse(callApi(params, req, runtime));
}

UpdateDatasetDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::updateDatasetDocument(shared_ptr<UpdateDatasetDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDatasetDocumentWithOptions(request, runtime);
}

UpdateGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::updateGeneratedContentWithOptions(shared_ptr<UpdateGeneratedContentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGeneratedContentShrinkRequest> request = make_shared<UpdateGeneratedContentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keywords)) {
    request->keywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keywords, make_shared<string>("Keywords"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentText)) {
    body->insert(pair<string, string>("ContentText", *request->contentText));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywordsShrink)) {
    body->insert(pair<string, string>("Keywords", *request->keywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGeneratedContent"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGeneratedContentResponse(callApi(params, req, runtime));
}

UpdateGeneratedContentResponse Alibabacloud_AiMiaoBi20230801::Client::updateGeneratedContent(shared_ptr<UpdateGeneratedContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGeneratedContentWithOptions(request, runtime);
}

UpdateMaterialDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::updateMaterialDocumentWithOptions(shared_ptr<UpdateMaterialDocumentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMaterialDocumentShrinkRequest> request = make_shared<UpdateMaterialDocumentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->docKeywords)) {
    request->docKeywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->docKeywords, make_shared<string>("DocKeywords"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->author)) {
    body->insert(pair<string, string>("Author", *request->author));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docKeywordsShrink)) {
    body->insert(pair<string, string>("DocKeywords", *request->docKeywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    body->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalUrl)) {
    body->insert(pair<string, string>("ExternalUrl", *request->externalUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->htmlContent)) {
    body->insert(pair<string, string>("HtmlContent", *request->htmlContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubTime)) {
    body->insert(pair<string, string>("PubTime", *request->pubTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shareAttr)) {
    body->insert(pair<string, long>("ShareAttr", *request->shareAttr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcFrom)) {
    body->insert(pair<string, string>("SrcFrom", *request->srcFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summary)) {
    body->insert(pair<string, string>("Summary", *request->summary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textContent)) {
    body->insert(pair<string, string>("TextContent", *request->textContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMaterialDocument"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMaterialDocumentResponse(callApi(params, req, runtime));
}

UpdateMaterialDocumentResponse Alibabacloud_AiMiaoBi20230801::Client::updateMaterialDocument(shared_ptr<UpdateMaterialDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMaterialDocumentWithOptions(request, runtime);
}

UploadBookResponse Alibabacloud_AiMiaoBi20230801::Client::uploadBookWithOptions(shared_ptr<UploadBookRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UploadBookShrinkRequest> request = make_shared<UploadBookShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UploadBookRequestDocs>>(tmpReq->docs)) {
    request->docsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->docs, make_shared<string>("Docs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docsShrink)) {
    body->insert(pair<string, string>("Docs", *request->docsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadBook"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadBookResponse(callApi(params, req, runtime));
}

UploadBookResponse Alibabacloud_AiMiaoBi20230801::Client::uploadBook(shared_ptr<UploadBookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadBookWithOptions(request, runtime);
}

UploadDocResponse Alibabacloud_AiMiaoBi20230801::Client::uploadDocWithOptions(shared_ptr<UploadDocRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UploadDocShrinkRequest> request = make_shared<UploadDocShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UploadDocRequestDocs>>(tmpReq->docs)) {
    request->docsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->docs, make_shared<string>("Docs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryId)) {
    body->insert(pair<string, string>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docsShrink)) {
    body->insert(pair<string, string>("Docs", *request->docsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadDoc"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadDocResponse(callApi(params, req, runtime));
}

UploadDocResponse Alibabacloud_AiMiaoBi20230801::Client::uploadDoc(shared_ptr<UploadDocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadDocWithOptions(request, runtime);
}

ValidateUploadTemplateResponse Alibabacloud_AiMiaoBi20230801::Client::validateUploadTemplateWithOptions(shared_ptr<ValidateUploadTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("FileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateUploadTemplate"))},
    {"version", boost::any(string("2023-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateUploadTemplateResponse(callApi(params, req, runtime));
}

ValidateUploadTemplateResponse Alibabacloud_AiMiaoBi20230801::Client::validateUploadTemplate(shared_ptr<ValidateUploadTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateUploadTemplateWithOptions(request, runtime);
}

