// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/data_analysis_gbi20240823.hpp>
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

using namespace Alibabacloud_DataAnalysisGBI20240823;

Alibabacloud_DataAnalysisGBI20240823::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dataanalysisgbi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_DataAnalysisGBI20240823::Client::getEndpoint(shared_ptr<string> productId,
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

BatchDeleteSynonymsResponse Alibabacloud_DataAnalysisGBI20240823::Client::batchDeleteSynonymsWithOptions(shared_ptr<BatchDeleteSynonymsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->synonymIdKeys)) {
    body->insert(pair<string, vector<string>>("synonymIdKeys", *request->synonymIdKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteSynonyms"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/batchDelete/synonyms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchDeleteSynonymsResponse(callApi(params, req, runtime));
  }
  else {
    return BatchDeleteSynonymsResponse(execute(params, req, runtime));
  }
}

BatchDeleteSynonymsResponse Alibabacloud_DataAnalysisGBI20240823::Client::batchDeleteSynonyms(shared_ptr<BatchDeleteSynonymsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchDeleteSynonymsWithOptions(request, headers, runtime);
}

CancelDatasourceAuthorizationResponse Alibabacloud_DataAnalysisGBI20240823::Client::cancelDatasourceAuthorizationWithOptions(shared_ptr<CancelDatasourceAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelDatasourceAuthorization"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/cancel/datasource"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelDatasourceAuthorizationResponse(callApi(params, req, runtime));
  }
  else {
    return CancelDatasourceAuthorizationResponse(execute(params, req, runtime));
  }
}

CancelDatasourceAuthorizationResponse Alibabacloud_DataAnalysisGBI20240823::Client::cancelDatasourceAuthorization(shared_ptr<CancelDatasourceAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelDatasourceAuthorizationWithOptions(request, headers, runtime);
}

CreateBusinessLogicResponse Alibabacloud_DataAnalysisGBI20240823::Client::createBusinessLogicWithOptions(shared_ptr<CreateBusinessLogicRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBusinessLogic"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/create/logic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateBusinessLogicResponse(callApi(params, req, runtime));
  }
  else {
    return CreateBusinessLogicResponse(execute(params, req, runtime));
  }
}

CreateBusinessLogicResponse Alibabacloud_DataAnalysisGBI20240823::Client::createBusinessLogic(shared_ptr<CreateBusinessLogicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createBusinessLogicWithOptions(request, headers, runtime);
}

CreateDatasourceAuthorizationResponse Alibabacloud_DataAnalysisGBI20240823::Client::createDatasourceAuthorizationWithOptions(shared_ptr<CreateDatasourceAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("userName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vdbId)) {
    body->insert(pair<string, string>("vdbId", *request->vdbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDatasourceAuthorization"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/create/datasource"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDatasourceAuthorizationResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDatasourceAuthorizationResponse(execute(params, req, runtime));
  }
}

CreateDatasourceAuthorizationResponse Alibabacloud_DataAnalysisGBI20240823::Client::createDatasourceAuthorization(shared_ptr<CreateDatasourceAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDatasourceAuthorizationWithOptions(request, headers, runtime);
}

CreateSynonymsResponse Alibabacloud_DataAnalysisGBI20240823::Client::createSynonymsWithOptions(shared_ptr<CreateSynonymsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->columns)) {
    body->insert(pair<string, vector<string>>("columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->word)) {
    body->insert(pair<string, string>("word", *request->word));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->wordSynonyms)) {
    body->insert(pair<string, vector<string>>("wordSynonyms", *request->wordSynonyms));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSynonyms"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/create/synonyms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSynonymsResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSynonymsResponse(execute(params, req, runtime));
  }
}

CreateSynonymsResponse Alibabacloud_DataAnalysisGBI20240823::Client::createSynonyms(shared_ptr<CreateSynonymsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSynonymsWithOptions(request, headers, runtime);
}

CreateVirtualDatasourceInstanceResponse Alibabacloud_DataAnalysisGBI20240823::Client::createVirtualDatasourceInstanceWithOptions(shared_ptr<CreateVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVirtualDatasourceInstance"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/virtualDatasource/createVirtualDatasourceInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateVirtualDatasourceInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateVirtualDatasourceInstanceResponse(execute(params, req, runtime));
  }
}

CreateVirtualDatasourceInstanceResponse Alibabacloud_DataAnalysisGBI20240823::Client::createVirtualDatasourceInstance(shared_ptr<CreateVirtualDatasourceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVirtualDatasourceInstanceWithOptions(request, headers, runtime);
}

DeleteBusinessLogicResponse Alibabacloud_DataAnalysisGBI20240823::Client::deleteBusinessLogicWithOptions(shared_ptr<DeleteBusinessLogicRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->businessLogicIdKeys)) {
    body->insert(pair<string, vector<string>>("businessLogicIdKeys", *request->businessLogicIdKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBusinessLogic"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/delete/logic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteBusinessLogicResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteBusinessLogicResponse(execute(params, req, runtime));
  }
}

DeleteBusinessLogicResponse Alibabacloud_DataAnalysisGBI20240823::Client::deleteBusinessLogic(shared_ptr<DeleteBusinessLogicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteBusinessLogicWithOptions(request, headers, runtime);
}

DeleteColumnResponse Alibabacloud_DataAnalysisGBI20240823::Client::deleteColumnWithOptions(shared_ptr<DeleteColumnRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnIdKey)) {
    body->insert(pair<string, string>("columnIdKey", *request->columnIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteColumn"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/delete/column"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteColumnResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteColumnResponse(execute(params, req, runtime));
  }
}

DeleteColumnResponse Alibabacloud_DataAnalysisGBI20240823::Client::deleteColumn(shared_ptr<DeleteColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteColumnWithOptions(request, headers, runtime);
}

DeleteSelectedTableResponse Alibabacloud_DataAnalysisGBI20240823::Client::deleteSelectedTableWithOptions(shared_ptr<DeleteSelectedTableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdKey)) {
    body->insert(pair<string, string>("tableIdKey", *request->tableIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSelectedTable"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/delete/table"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSelectedTableResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSelectedTableResponse(execute(params, req, runtime));
  }
}

DeleteSelectedTableResponse Alibabacloud_DataAnalysisGBI20240823::Client::deleteSelectedTable(shared_ptr<DeleteSelectedTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSelectedTableWithOptions(request, headers, runtime);
}

DeleteVirtualDatasourceInstanceResponse Alibabacloud_DataAnalysisGBI20240823::Client::deleteVirtualDatasourceInstanceWithOptions(shared_ptr<DeleteVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vdbId)) {
    body->insert(pair<string, string>("vdbId", *request->vdbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVirtualDatasourceInstance"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/virtualDatasource/deleteVirtualDatasourceInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteVirtualDatasourceInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteVirtualDatasourceInstanceResponse(execute(params, req, runtime));
  }
}

DeleteVirtualDatasourceInstanceResponse Alibabacloud_DataAnalysisGBI20240823::Client::deleteVirtualDatasourceInstance(shared_ptr<DeleteVirtualDatasourceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVirtualDatasourceInstanceWithOptions(request, headers, runtime);
}

ListBusinessLogicResponse Alibabacloud_DataAnalysisGBI20240823::Client::listBusinessLogicWithOptions(shared_ptr<ListBusinessLogicRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBusinessLogic"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/list/logic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListBusinessLogicResponse(callApi(params, req, runtime));
  }
  else {
    return ListBusinessLogicResponse(execute(params, req, runtime));
  }
}

ListBusinessLogicResponse Alibabacloud_DataAnalysisGBI20240823::Client::listBusinessLogic(shared_ptr<ListBusinessLogicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listBusinessLogicWithOptions(request, headers, runtime);
}

ListColumnResponse Alibabacloud_DataAnalysisGBI20240823::Client::listColumnWithOptions(shared_ptr<ListColumnRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nextToken)) {
    body->insert(pair<string, long>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdKey)) {
    body->insert(pair<string, string>("tableIdKey", *request->tableIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListColumn"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/list/column"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListColumnResponse(callApi(params, req, runtime));
  }
  else {
    return ListColumnResponse(execute(params, req, runtime));
  }
}

ListColumnResponse Alibabacloud_DataAnalysisGBI20240823::Client::listColumn(shared_ptr<ListColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listColumnWithOptions(request, headers, runtime);
}

ListEnumMappingResponse Alibabacloud_DataAnalysisGBI20240823::Client::listEnumMappingWithOptions(shared_ptr<ListEnumMappingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnIdKey)) {
    body->insert(pair<string, string>("columnIdKey", *request->columnIdKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdKey)) {
    body->insert(pair<string, string>("tableIdKey", *request->tableIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnumMapping"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/list/mapping"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEnumMappingResponse(callApi(params, req, runtime));
  }
  else {
    return ListEnumMappingResponse(execute(params, req, runtime));
  }
}

ListEnumMappingResponse Alibabacloud_DataAnalysisGBI20240823::Client::listEnumMapping(shared_ptr<ListEnumMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEnumMappingWithOptions(request, headers, runtime);
}

ListSelectedTablesResponse Alibabacloud_DataAnalysisGBI20240823::Client::listSelectedTablesWithOptions(shared_ptr<ListSelectedTablesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSelectedTables"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/list/datasource/table"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSelectedTablesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSelectedTablesResponse(execute(params, req, runtime));
  }
}

ListSelectedTablesResponse Alibabacloud_DataAnalysisGBI20240823::Client::listSelectedTables(shared_ptr<ListSelectedTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSelectedTablesWithOptions(request, headers, runtime);
}

ListSynonymsResponse Alibabacloud_DataAnalysisGBI20240823::Client::listSynonymsWithOptions(shared_ptr<ListSynonymsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSynonyms"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/list/synonyms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSynonymsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSynonymsResponse(execute(params, req, runtime));
  }
}

ListSynonymsResponse Alibabacloud_DataAnalysisGBI20240823::Client::listSynonyms(shared_ptr<ListSynonymsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSynonymsWithOptions(request, headers, runtime);
}

ListVirtualDatasourceInstanceResponse Alibabacloud_DataAnalysisGBI20240823::Client::listVirtualDatasourceInstanceWithOptions(shared_ptr<ListVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVirtualDatasourceInstance"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/virtualDatasource/listVirtualDatasourceInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListVirtualDatasourceInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ListVirtualDatasourceInstanceResponse(execute(params, req, runtime));
  }
}

ListVirtualDatasourceInstanceResponse Alibabacloud_DataAnalysisGBI20240823::Client::listVirtualDatasourceInstance(shared_ptr<ListVirtualDatasourceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVirtualDatasourceInstanceWithOptions(request, headers, runtime);
}

RecoverColumnResponse Alibabacloud_DataAnalysisGBI20240823::Client::recoverColumnWithOptions(shared_ptr<RecoverColumnRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnIdKey)) {
    body->insert(pair<string, string>("columnIdKey", *request->columnIdKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdKey)) {
    body->insert(pair<string, string>("tableIdKey", *request->tableIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoverColumn"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/recover/column"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RecoverColumnResponse(callApi(params, req, runtime));
  }
  else {
    return RecoverColumnResponse(execute(params, req, runtime));
  }
}

RecoverColumnResponse Alibabacloud_DataAnalysisGBI20240823::Client::recoverColumn(shared_ptr<RecoverColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recoverColumnWithOptions(request, headers, runtime);
}

ResyncTableResponse Alibabacloud_DataAnalysisGBI20240823::Client::resyncTableWithOptions(shared_ptr<ResyncTableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->keep)) {
    body->insert(pair<string, bool>("keep", *request->keep));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdKey)) {
    body->insert(pair<string, string>("tableIdKey", *request->tableIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResyncTable"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/refresh/table"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResyncTableResponse(callApi(params, req, runtime));
  }
  else {
    return ResyncTableResponse(execute(params, req, runtime));
  }
}

ResyncTableResponse Alibabacloud_DataAnalysisGBI20240823::Client::resyncTable(shared_ptr<ResyncTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resyncTableWithOptions(request, headers, runtime);
}

RunDataAnalysisResponse Alibabacloud_DataAnalysisGBI20240823::Client::runDataAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                                                                 shared_ptr<RunDataAnalysisRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->agentCtrlParams)) {
    body->insert(pair<string, boost::any>("agentCtrlParams", *request->agentCtrlParams));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dataRole)) {
    body->insert(pair<string, vector<string>>("dataRole", *request->dataRole));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->generateSqlOnly)) {
    body->insert(pair<string, bool>("generateSqlOnly", *request->generateSqlOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationType)) {
    body->insert(pair<string, string>("specificationType", *request->specificationType));
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->userParams)) {
    body->insert(pair<string, boost::any>("userParams", *request->userParams));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDataAnalysis"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/gbi/runDataAnalysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunDataAnalysisResponse(callApi(params, req, runtime));
  }
  else {
    return RunDataAnalysisResponse(execute(params, req, runtime));
  }
}

RunDataAnalysisResponse Alibabacloud_DataAnalysisGBI20240823::Client::runDataAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunDataAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runDataAnalysisWithOptions(workspaceId, request, headers, runtime);
}

RunDataResultAnalysisResponse Alibabacloud_DataAnalysisGBI20240823::Client::runDataResultAnalysisWithOptions(shared_ptr<RunDataResultAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analysisMode)) {
    body->insert(pair<string, string>("analysisMode", *request->analysisMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<RunDataResultAnalysisRequestSqlData>(request->sqlData)) {
    body->insert(pair<string, RunDataResultAnalysisRequestSqlData>("sqlData", *request->sqlData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDataResultAnalysis"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/runDataResultAnalysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunDataResultAnalysisResponse(callApi(params, req, runtime));
  }
  else {
    return RunDataResultAnalysisResponse(execute(params, req, runtime));
  }
}

RunDataResultAnalysisResponse Alibabacloud_DataAnalysisGBI20240823::Client::runDataResultAnalysis(shared_ptr<RunDataResultAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runDataResultAnalysisWithOptions(request, headers, runtime);
}

RunSqlGenerationResponse Alibabacloud_DataAnalysisGBI20240823::Client::runSqlGenerationWithOptions(shared_ptr<RunSqlGenerationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationType)) {
    body->insert(pair<string, string>("specificationType", *request->specificationType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunSqlGeneration"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/runSqlGeneration"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunSqlGenerationResponse(callApi(params, req, runtime));
  }
  else {
    return RunSqlGenerationResponse(execute(params, req, runtime));
  }
}

RunSqlGenerationResponse Alibabacloud_DataAnalysisGBI20240823::Client::runSqlGeneration(shared_ptr<RunSqlGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runSqlGenerationWithOptions(request, headers, runtime);
}

SaveVirtualDatasourceDdlResponse Alibabacloud_DataAnalysisGBI20240823::Client::saveVirtualDatasourceDdlWithOptions(shared_ptr<SaveVirtualDatasourceDdlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ddl)) {
    body->insert(pair<string, string>("ddl", *request->ddl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vdbId)) {
    body->insert(pair<string, string>("vdbId", *request->vdbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveVirtualDatasourceDdl"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/virtualDatasource/addDdl2VirtualInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveVirtualDatasourceDdlResponse(callApi(params, req, runtime));
  }
  else {
    return SaveVirtualDatasourceDdlResponse(execute(params, req, runtime));
  }
}

SaveVirtualDatasourceDdlResponse Alibabacloud_DataAnalysisGBI20240823::Client::saveVirtualDatasourceDdl(shared_ptr<SaveVirtualDatasourceDdlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return saveVirtualDatasourceDdlWithOptions(request, headers, runtime);
}

SyncRemoteTablesResponse Alibabacloud_DataAnalysisGBI20240823::Client::syncRemoteTablesWithOptions(shared_ptr<SyncRemoteTablesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keepTableNames)) {
    body->insert(pair<string, vector<string>>("keepTableNames", *request->keepTableNames));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->noModifiedTableNames)) {
    body->insert(pair<string, vector<string>>("noModifiedTableNames", *request->noModifiedTableNames));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pullSamples)) {
    body->insert(pair<string, bool>("pullSamples", *request->pullSamples));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tableNames)) {
    body->insert(pair<string, vector<string>>("tableNames", *request->tableNames));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncRemoteTables"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/update/datasource/tables"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SyncRemoteTablesResponse(callApi(params, req, runtime));
  }
  else {
    return SyncRemoteTablesResponse(execute(params, req, runtime));
  }
}

SyncRemoteTablesResponse Alibabacloud_DataAnalysisGBI20240823::Client::syncRemoteTables(shared_ptr<SyncRemoteTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return syncRemoteTablesWithOptions(request, headers, runtime);
}

UpdateBusinessLogicResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateBusinessLogicWithOptions(shared_ptr<UpdateBusinessLogicRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessLogicIdKey)) {
    body->insert(pair<string, string>("businessLogicIdKey", *request->businessLogicIdKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBusinessLogic"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/update/logic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateBusinessLogicResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateBusinessLogicResponse(execute(params, req, runtime));
  }
}

UpdateBusinessLogicResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateBusinessLogic(shared_ptr<UpdateBusinessLogicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateBusinessLogicWithOptions(request, headers, runtime);
}

UpdateColumnResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateColumnWithOptions(shared_ptr<UpdateColumnRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chineseName)) {
    body->insert(pair<string, string>("chineseName", *request->chineseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columnIdKey)) {
    body->insert(pair<string, string>("columnIdKey", *request->columnIdKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enumType)) {
    body->insert(pair<string, long>("enumType", *request->enumType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->enumValues)) {
    body->insert(pair<string, vector<string>>("enumValues", *request->enumValues));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rangeMax)) {
    body->insert(pair<string, long>("rangeMax", *request->rangeMax));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rangeMin)) {
    body->insert(pair<string, long>("rangeMin", *request->rangeMin));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->samples)) {
    body->insert(pair<string, vector<string>>("samples", *request->samples));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdKey)) {
    body->insert(pair<string, string>("tableIdKey", *request->tableIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateColumn"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/update/column"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateColumnResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateColumnResponse(execute(params, req, runtime));
  }
}

UpdateColumnResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateColumn(shared_ptr<UpdateColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateColumnWithOptions(request, headers, runtime);
}

UpdateEnumMappingResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateEnumMappingWithOptions(shared_ptr<UpdateEnumMappingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->columnIdKey)) {
    body->insert(pair<string, string>("columnIdKey", *request->columnIdKey));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, vector<string>>>(request->enumMapping)) {
    body->insert(pair<string, map<string, vector<string>>>("enumMapping", *request->enumMapping));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdKey)) {
    body->insert(pair<string, string>("tableIdKey", *request->tableIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnumMapping"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/update/mapping"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateEnumMappingResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateEnumMappingResponse(execute(params, req, runtime));
  }
}

UpdateEnumMappingResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateEnumMapping(shared_ptr<UpdateEnumMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEnumMappingWithOptions(request, headers, runtime);
}

UpdateSynonymsResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateSynonymsWithOptions(shared_ptr<UpdateSynonymsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->columns)) {
    body->insert(pair<string, vector<string>>("columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synonymIdKey)) {
    body->insert(pair<string, string>("synonymIdKey", *request->synonymIdKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->word)) {
    body->insert(pair<string, string>("word", *request->word));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->wordSynonyms)) {
    body->insert(pair<string, vector<string>>("wordSynonyms", *request->wordSynonyms));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSynonyms"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/update/synonyms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSynonymsResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSynonymsResponse(execute(params, req, runtime));
  }
}

UpdateSynonymsResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateSynonyms(shared_ptr<UpdateSynonymsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSynonymsWithOptions(request, headers, runtime);
}

UpdateTableInfoResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateTableInfoWithOptions(shared_ptr<UpdateTableInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->foreignKeys)) {
    body->insert(pair<string, vector<string>>("foreignKeys", *request->foreignKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryKey)) {
    body->insert(pair<string, string>("primaryKey", *request->primaryKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableIdKey)) {
    body->insert(pair<string, string>("tableIdKey", *request->tableIdKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTableInfo"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/update/table"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateTableInfoResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateTableInfoResponse(execute(params, req, runtime));
  }
}

UpdateTableInfoResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateTableInfo(shared_ptr<UpdateTableInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTableInfoWithOptions(request, headers, runtime);
}

UpdateVirtualDatasourceInstanceResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateVirtualDatasourceInstanceWithOptions(shared_ptr<UpdateVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vdbId)) {
    body->insert(pair<string, string>("vdbId", *request->vdbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVirtualDatasourceInstance"))},
    {"version", boost::any(string("2024-08-23"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/gbi/virtualDatasource/updateVirtualDatasourceInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateVirtualDatasourceInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateVirtualDatasourceInstanceResponse(execute(params, req, runtime));
  }
}

UpdateVirtualDatasourceInstanceResponse Alibabacloud_DataAnalysisGBI20240823::Client::updateVirtualDatasourceInstance(shared_ptr<UpdateVirtualDatasourceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateVirtualDatasourceInstanceWithOptions(request, headers, runtime);
}

