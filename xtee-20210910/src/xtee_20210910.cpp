// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/xtee_20210910.hpp>
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

using namespace Alibabacloud_Xtee20210910;

Alibabacloud_Xtee20210910::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("xtee"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Xtee20210910::Client::getEndpoint(shared_ptr<string> productId,
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

BindVariableResponse Alibabacloud_Xtee20210910::Client::bindVariableWithOptions(shared_ptr<BindVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiRegionId)) {
    query->insert(pair<string, string>("apiRegionId", *request->apiRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("apiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defineId)) {
    query->insert(pair<string, string>("defineId", *request->defineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defineIds)) {
    query->insert(pair<string, string>("defineIds", *request->defineIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exceptionValue)) {
    query->insert(pair<string, string>("exceptionValue", *request->exceptionValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputField)) {
    query->insert(pair<string, string>("outputField", *request->outputField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputType)) {
    query->insert(pair<string, string>("outputType", *request->outputType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramsList)) {
    query->insert(pair<string, string>("paramsList", *request->paramsList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindVariableResponse(callApi(params, req, runtime));
}

BindVariableResponse Alibabacloud_Xtee20210910::Client::bindVariable(shared_ptr<BindVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindVariableWithOptions(request, runtime);
}

CheckCustVariableLimitResponse Alibabacloud_Xtee20210910::Client::checkCustVariableLimitWithOptions(shared_ptr<CheckCustVariableLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckCustVariableLimit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckCustVariableLimitResponse(callApi(params, req, runtime));
}

CheckCustVariableLimitResponse Alibabacloud_Xtee20210910::Client::checkCustVariableLimit(shared_ptr<CheckCustVariableLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCustVariableLimitWithOptions(request, runtime);
}

CheckExpressionVariableLimitResponse Alibabacloud_Xtee20210910::Client::checkExpressionVariableLimitWithOptions(shared_ptr<CheckExpressionVariableLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckExpressionVariableLimit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckExpressionVariableLimitResponse(callApi(params, req, runtime));
}

CheckExpressionVariableLimitResponse Alibabacloud_Xtee20210910::Client::checkExpressionVariableLimit(shared_ptr<CheckExpressionVariableLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkExpressionVariableLimitWithOptions(request, runtime);
}

CheckFieldLimitResponse Alibabacloud_Xtee20210910::Client::checkFieldLimitWithOptions(shared_ptr<CheckFieldLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckFieldLimit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckFieldLimitResponse(callApi(params, req, runtime));
}

CheckFieldLimitResponse Alibabacloud_Xtee20210910::Client::checkFieldLimit(shared_ptr<CheckFieldLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFieldLimitWithOptions(request, runtime);
}

CheckPermissionResponse Alibabacloud_Xtee20210910::Client::checkPermissionWithOptions(shared_ptr<CheckPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckPermission"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckPermissionResponse(callApi(params, req, runtime));
}

CheckPermissionResponse Alibabacloud_Xtee20210910::Client::checkPermission(shared_ptr<CheckPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkPermissionWithOptions(request, runtime);
}

CheckUsageVariableResponse Alibabacloud_Xtee20210910::Client::checkUsageVariableWithOptions(shared_ptr<CheckUsageVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckUsageVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckUsageVariableResponse(callApi(params, req, runtime));
}

CheckUsageVariableResponse Alibabacloud_Xtee20210910::Client::checkUsageVariable(shared_ptr<CheckUsageVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUsageVariableWithOptions(request, runtime);
}

ClearNameListResponse Alibabacloud_Xtee20210910::Client::clearNameListWithOptions(shared_ptr<ClearNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->variableId)) {
    query->insert(pair<string, long>("variableId", *request->variableId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClearNameList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClearNameListResponse(callApi(params, req, runtime));
}

ClearNameListResponse Alibabacloud_Xtee20210910::Client::clearNameList(shared_ptr<ClearNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearNameListWithOptions(request, runtime);
}

CreateAnalysisConditionFavoriteResponse Alibabacloud_Xtee20210910::Client::createAnalysisConditionFavoriteWithOptions(shared_ptr<CreateAnalysisConditionFavoriteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventBeginTime)) {
    query->insert(pair<string, long>("eventBeginTime", *request->eventBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventEndTime)) {
    query->insert(pair<string, long>("eventEndTime", *request->eventEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    query->insert(pair<string, string>("fieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldValue)) {
    query->insert(pair<string, string>("fieldValue", *request->fieldValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAnalysisConditionFavorite"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAnalysisConditionFavoriteResponse(callApi(params, req, runtime));
}

CreateAnalysisConditionFavoriteResponse Alibabacloud_Xtee20210910::Client::createAnalysisConditionFavorite(shared_ptr<CreateAnalysisConditionFavoriteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAnalysisConditionFavoriteWithOptions(request, runtime);
}

CreateAnalysisExportTaskResponse Alibabacloud_Xtee20210910::Client::createAnalysisExportTaskWithOptions(shared_ptr<CreateAnalysisExportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columns)) {
    query->insert(pair<string, string>("columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conditions)) {
    query->insert(pair<string, string>("conditions", *request->conditions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventBeginTime)) {
    query->insert(pair<string, long>("eventBeginTime", *request->eventBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventEndTime)) {
    query->insert(pair<string, long>("eventEndTime", *request->eventEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    query->insert(pair<string, string>("fieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldValue)) {
    query->insert(pair<string, string>("fieldValue", *request->fieldValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileFormat)) {
    query->insert(pair<string, string>("fileFormat", *request->fileFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAnalysisExportTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAnalysisExportTaskResponse(callApi(params, req, runtime));
}

CreateAnalysisExportTaskResponse Alibabacloud_Xtee20210910::Client::createAnalysisExportTask(shared_ptr<CreateAnalysisExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAnalysisExportTaskWithOptions(request, runtime);
}

CreateAppKeyResponse Alibabacloud_Xtee20210910::Client::createAppKeyWithOptions(shared_ptr<CreateAppKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppKey"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppKeyResponse(callApi(params, req, runtime));
}

CreateAppKeyResponse Alibabacloud_Xtee20210910::Client::createAppKey(shared_ptr<CreateAppKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppKeyWithOptions(request, runtime);
}

CreateAuthorizationUserResponse Alibabacloud_Xtee20210910::Client::createAuthorizationUserWithOptions(shared_ptr<CreateAuthorizationUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bindId)) {
    query->insert(pair<string, long>("bindId", *request->bindId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventTemplateId)) {
    query->insert(pair<string, long>("eventTemplateId", *request->eventTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAuthorizationUser"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuthorizationUserResponse(callApi(params, req, runtime));
}

CreateAuthorizationUserResponse Alibabacloud_Xtee20210910::Client::createAuthorizationUser(shared_ptr<CreateAuthorizationUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthorizationUserWithOptions(request, runtime);
}

CreateCustVariableResponse Alibabacloud_Xtee20210910::Client::createCustVariableWithOptions(shared_ptr<CreateCustVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyValueType)) {
    query->insert(pair<string, string>("historyValueType", *request->historyValueType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->object)) {
    query->insert(pair<string, string>("object", *request->object));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    query->insert(pair<string, string>("outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    query->insert(pair<string, string>("subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeType)) {
    query->insert(pair<string, string>("timeType", *request->timeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->twCount)) {
    query->insert(pair<string, long>("twCount", *request->twCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->velocityFC)) {
    query->insert(pair<string, string>("velocityFC", *request->velocityFC));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->velocityTW)) {
    query->insert(pair<string, string>("velocityTW", *request->velocityTW));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustVariableResponse(callApi(params, req, runtime));
}

CreateCustVariableResponse Alibabacloud_Xtee20210910::Client::createCustVariable(shared_ptr<CreateCustVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustVariableWithOptions(request, runtime);
}

CreateDataSourceResponse Alibabacloud_Xtee20210910::Client::createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("ossKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataSource"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataSourceResponse(callApi(params, req, runtime));
}

CreateDataSourceResponse Alibabacloud_Xtee20210910::Client::createDataSource(shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSourceWithOptions(request, runtime);
}

CreateEventResponse Alibabacloud_Xtee20210910::Client::createEventWithOptions(shared_ptr<CreateEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("eventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputFieldsStr)) {
    query->insert(pair<string, string>("inputFieldsStr", *request->inputFieldsStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("templateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("templateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("templateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventResponse(callApi(params, req, runtime));
}

CreateEventResponse Alibabacloud_Xtee20210910::Client::createEvent(shared_ptr<CreateEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventWithOptions(request, runtime);
}

CreateExpressionVariableResponse Alibabacloud_Xtee20210910::Client::createExpressionVariableWithOptions(shared_ptr<CreateExpressionVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionTitle)) {
    query->insert(pair<string, string>("expressionTitle", *request->expressionTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionVariable)) {
    query->insert(pair<string, string>("expressionVariable", *request->expressionVariable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outlier)) {
    query->insert(pair<string, string>("outlier", *request->outlier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    query->insert(pair<string, string>("outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExpressionVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExpressionVariableResponse(callApi(params, req, runtime));
}

CreateExpressionVariableResponse Alibabacloud_Xtee20210910::Client::createExpressionVariable(shared_ptr<CreateExpressionVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExpressionVariableWithOptions(request, runtime);
}

CreateFieldResponse Alibabacloud_Xtee20210910::Client::createFieldWithOptions(shared_ptr<CreateFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classify)) {
    query->insert(pair<string, string>("classify", *request->classify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enumData)) {
    query->insert(pair<string, string>("enumData", *request->enumData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateField"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFieldResponse(callApi(params, req, runtime));
}

CreateFieldResponse Alibabacloud_Xtee20210910::Client::createField(shared_ptr<CreateFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFieldWithOptions(request, runtime);
}

CreateGroupSignResponse Alibabacloud_Xtee20210910::Client::createGroupSignWithOptions(shared_ptr<CreateGroupSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signList)) {
    query->insert(pair<string, string>("SignList", *request->signList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroupSign"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupSignResponse(callApi(params, req, runtime));
}

CreateGroupSignResponse Alibabacloud_Xtee20210910::Client::createGroupSign(shared_ptr<CreateGroupSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupSignWithOptions(request, runtime);
}

CreateMonitorTaskResponse Alibabacloud_Xtee20210910::Client::createMonitorTaskWithOptions(shared_ptr<CreateMonitorTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("bizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cycleType)) {
    query->insert(pair<string, string>("cycleType", *request->cycleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("filePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listdayStr)) {
    query->insert(pair<string, string>("listdayStr", *request->listdayStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMonitorTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMonitorTaskResponse(callApi(params, req, runtime));
}

CreateMonitorTaskResponse Alibabacloud_Xtee20210910::Client::createMonitorTask(shared_ptr<CreateMonitorTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMonitorTaskWithOptions(request, runtime);
}

CreatePocResponse Alibabacloud_Xtee20210910::Client::createPocWithOptions(shared_ptr<CreatePocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configStr)) {
    query->insert(pair<string, string>("configStr", *request->configStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("fileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("serviceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("taskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePoc"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePocResponse(callApi(params, req, runtime));
}

CreatePocResponse Alibabacloud_Xtee20210910::Client::createPoc(shared_ptr<CreatePocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPocWithOptions(request, runtime);
}

CreatePocEvResponse Alibabacloud_Xtee20210910::Client::createPocEvWithOptions(shared_ptr<CreatePocEvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateFormat)) {
    query->insert(pair<string, string>("DateFormat", *request->dateFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("RegId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tab)) {
    query->insert(pair<string, string>("Tab", *request->tab));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePocEv"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePocEvResponse(callApi(params, req, runtime));
}

CreatePocEvResponse Alibabacloud_Xtee20210910::Client::createPocEv(shared_ptr<CreatePocEvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPocEvWithOptions(request, runtime);
}

CreateQueryVariableResponse Alibabacloud_Xtee20210910::Client::createQueryVariableWithOptions(shared_ptr<CreateQueryVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceCode)) {
    query->insert(pair<string, string>("dataSourceCode", *request->dataSourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionTitle)) {
    query->insert(pair<string, string>("expressionTitle", *request->expressionTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionVariable)) {
    query->insert(pair<string, string>("expressionVariable", *request->expressionVariable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outlier)) {
    query->insert(pair<string, string>("outlier", *request->outlier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    query->insert(pair<string, string>("outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQueryVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQueryVariableResponse(callApi(params, req, runtime));
}

CreateQueryVariableResponse Alibabacloud_Xtee20210910::Client::createQueryVariable(shared_ptr<CreateQueryVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQueryVariableWithOptions(request, runtime);
}

CreateRecommendEventRuleResponse Alibabacloud_Xtee20210910::Client::createRecommendEventRuleWithOptions(shared_ptr<CreateRecommendEventRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("eventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recommendRuleIdsStr)) {
    query->insert(pair<string, string>("recommendRuleIdsStr", *request->recommendRuleIdsStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRecommendEventRule"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRecommendEventRuleResponse(callApi(params, req, runtime));
}

CreateRecommendEventRuleResponse Alibabacloud_Xtee20210910::Client::createRecommendEventRule(shared_ptr<CreateRecommendEventRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRecommendEventRuleWithOptions(request, runtime);
}

CreateRecommendTaskResponse Alibabacloud_Xtee20210910::Client::createRecommendTaskWithOptions(shared_ptr<CreateRecommendTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sampleId)) {
    query->insert(pair<string, long>("sampleId", *request->sampleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variablesStr)) {
    query->insert(pair<string, string>("variablesStr", *request->variablesStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->velocitiesStr)) {
    query->insert(pair<string, string>("velocitiesStr", *request->velocitiesStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRecommendTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRecommendTaskResponse(callApi(params, req, runtime));
}

CreateRecommendTaskResponse Alibabacloud_Xtee20210910::Client::createRecommendTask(shared_ptr<CreateRecommendTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRecommendTaskWithOptions(request, runtime);
}

CreateReplenishTaskResponse Alibabacloud_Xtee20210910::Client::createReplenishTaskWithOptions(shared_ptr<CreateReplenishTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientFileName)) {
    query->insert(pair<string, string>("ClientFileName", *request->clientFileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientPath)) {
    query->insert(pair<string, string>("ClientPath", *request->clientPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateReplenishTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateReplenishTaskResponse(callApi(params, req, runtime));
}

CreateReplenishTaskResponse Alibabacloud_Xtee20210910::Client::createReplenishTask(shared_ptr<CreateReplenishTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createReplenishTaskWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Xtee20210910::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("eventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicExpression)) {
    query->insert(pair<string, string>("logicExpression", *request->logicExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleActions)) {
    query->insert(pair<string, string>("ruleActions", *request->ruleActions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleExpressions)) {
    query->insert(pair<string, string>("ruleExpressions", *request->ruleExpressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    query->insert(pair<string, string>("ruleStatus", *request->ruleStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRule"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRuleResponse(callApi(params, req, runtime));
}

CreateRuleResponse Alibabacloud_Xtee20210910::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateSampleResponse Alibabacloud_Xtee20210910::Client::createSampleWithOptions(shared_ptr<CreateSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientFileName)) {
    query->insert(pair<string, string>("clientFileName", *request->clientFileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientPath)) {
    query->insert(pair<string, string>("clientPath", *request->clientPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("fileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleTag)) {
    query->insert(pair<string, string>("sampleTag", *request->sampleTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleType)) {
    query->insert(pair<string, string>("sampleType", *request->sampleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleValues)) {
    query->insert(pair<string, string>("sampleValues", *request->sampleValues));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadType)) {
    query->insert(pair<string, string>("uploadType", *request->uploadType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSample"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSampleResponse(callApi(params, req, runtime));
}

CreateSampleResponse Alibabacloud_Xtee20210910::Client::createSample(shared_ptr<CreateSampleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSampleWithOptions(request, runtime);
}

CreateSampleApiResponse Alibabacloud_Xtee20210910::Client::createSampleApiWithOptions(shared_ptr<CreateSampleApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    query->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataValue)) {
    query->insert(pair<string, string>("DataValue", *request->dataValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("RegId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleBatchType)) {
    query->insert(pair<string, string>("SampleBatchType", *request->sampleBatchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceList)) {
    query->insert(pair<string, string>("ServiceList", *request->serviceList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSampleApi"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSampleApiResponse(callApi(params, req, runtime));
}

CreateSampleApiResponse Alibabacloud_Xtee20210910::Client::createSampleApi(shared_ptr<CreateSampleApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSampleApiWithOptions(request, runtime);
}

CreateSampleDataResponse Alibabacloud_Xtee20210910::Client::createSampleDataWithOptions(shared_ptr<CreateSampleDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptType)) {
    query->insert(pair<string, string>("encryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskValue)) {
    query->insert(pair<string, string>("riskValue", *request->riskValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storePath)) {
    query->insert(pair<string, string>("storePath", *request->storePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeType)) {
    query->insert(pair<string, string>("storeType", *request->storeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSampleData"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSampleDataResponse(callApi(params, req, runtime));
}

CreateSampleDataResponse Alibabacloud_Xtee20210910::Client::createSampleData(shared_ptr<CreateSampleDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSampleDataWithOptions(request, runtime);
}

CreateSimulationTaskResponse Alibabacloud_Xtee20210910::Client::createSimulationTaskWithOptions(shared_ptr<CreateSimulationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceConfig)) {
    query->insert(pair<string, string>("dataSourceConfig", *request->dataSourceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("dataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filtersStr)) {
    query->insert(pair<string, string>("filtersStr", *request->filtersStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesStr)) {
    query->insert(pair<string, string>("rulesStr", *request->rulesStr));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->runTask)) {
    query->insert(pair<string, bool>("runTask", *request->runTask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("taskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSimulationTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSimulationTaskResponse(callApi(params, req, runtime));
}

CreateSimulationTaskResponse Alibabacloud_Xtee20210910::Client::createSimulationTask(shared_ptr<CreateSimulationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSimulationTaskWithOptions(request, runtime);
}

CreateTaskResponse Alibabacloud_Xtee20210910::Client::createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientFileName)) {
    query->insert(pair<string, string>("ClientFileName", *request->clientFileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientPath)) {
    query->insert(pair<string, string>("ClientPath", *request->clientPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->describe)) {
    query->insert(pair<string, string>("Describe", *request->describe));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskResponse(callApi(params, req, runtime));
}

CreateTaskResponse Alibabacloud_Xtee20210910::Client::createTask(shared_ptr<CreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskWithOptions(request, runtime);
}

CreateTemplateResponse Alibabacloud_Xtee20210910::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("eventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicExpression)) {
    query->insert(pair<string, string>("logicExpression", *request->logicExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleActions)) {
    query->insert(pair<string, string>("ruleActions", *request->ruleActions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleExpressions)) {
    query->insert(pair<string, string>("ruleExpressions", *request->ruleExpressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    query->insert(pair<string, string>("ruleStatus", *request->ruleStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplate"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateResponse(callApi(params, req, runtime));
}

CreateTemplateResponse Alibabacloud_Xtee20210910::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTemplateWithOptions(request, runtime);
}

DeleteAnalysisConditionFavoriteResponse Alibabacloud_Xtee20210910::Client::deleteAnalysisConditionFavoriteWithOptions(shared_ptr<DeleteAnalysisConditionFavoriteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAnalysisConditionFavorite"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAnalysisConditionFavoriteResponse(callApi(params, req, runtime));
}

DeleteAnalysisConditionFavoriteResponse Alibabacloud_Xtee20210910::Client::deleteAnalysisConditionFavorite(shared_ptr<DeleteAnalysisConditionFavoriteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAnalysisConditionFavoriteWithOptions(request, runtime);
}

DeleteAuthUserResponse Alibabacloud_Xtee20210910::Client::deleteAuthUserWithOptions(shared_ptr<DeleteAuthUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAuthUser"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAuthUserResponse(callApi(params, req, runtime));
}

DeleteAuthUserResponse Alibabacloud_Xtee20210910::Client::deleteAuthUser(shared_ptr<DeleteAuthUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAuthUserWithOptions(request, runtime);
}

DeleteByPassShuntEventResponse Alibabacloud_Xtee20210910::Client::deleteByPassShuntEventWithOptions(shared_ptr<DeleteByPassShuntEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventId)) {
    query->insert(pair<string, long>("eventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteByPassShuntEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteByPassShuntEventResponse(callApi(params, req, runtime));
}

DeleteByPassShuntEventResponse Alibabacloud_Xtee20210910::Client::deleteByPassShuntEvent(shared_ptr<DeleteByPassShuntEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteByPassShuntEventWithOptions(request, runtime);
}

DeleteCustVariableResponse Alibabacloud_Xtee20210910::Client::deleteCustVariableWithOptions(shared_ptr<DeleteCustVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataVersion)) {
    query->insert(pair<string, long>("dataVersion", *request->dataVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variableId)) {
    query->insert(pair<string, string>("variableId", *request->variableId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustVariableResponse(callApi(params, req, runtime));
}

DeleteCustVariableResponse Alibabacloud_Xtee20210910::Client::deleteCustVariable(shared_ptr<DeleteCustVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustVariableWithOptions(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_Xtee20210910::Client::deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSource"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceResponse(callApi(params, req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Xtee20210910::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceWithOptions(request, runtime);
}

DeleteExpressionVariableResponse Alibabacloud_Xtee20210910::Client::deleteExpressionVariableWithOptions(shared_ptr<DeleteExpressionVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataVersion)) {
    query->insert(pair<string, long>("dataVersion", *request->dataVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExpressionVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExpressionVariableResponse(callApi(params, req, runtime));
}

DeleteExpressionVariableResponse Alibabacloud_Xtee20210910::Client::deleteExpressionVariable(shared_ptr<DeleteExpressionVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExpressionVariableWithOptions(request, runtime);
}

DeleteFieldResponse Alibabacloud_Xtee20210910::Client::deleteFieldWithOptions(shared_ptr<DeleteFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteField"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFieldResponse(callApi(params, req, runtime));
}

DeleteFieldResponse Alibabacloud_Xtee20210910::Client::deleteField(shared_ptr<DeleteFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFieldWithOptions(request, runtime);
}

DeleteNameListResponse Alibabacloud_Xtee20210910::Client::deleteNameListWithOptions(shared_ptr<DeleteNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNameList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNameListResponse(callApi(params, req, runtime));
}

DeleteNameListResponse Alibabacloud_Xtee20210910::Client::deleteNameList(shared_ptr<DeleteNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNameListWithOptions(request, runtime);
}

DeleteNameListDataResponse Alibabacloud_Xtee20210910::Client::deleteNameListDataWithOptions(shared_ptr<DeleteNameListDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variableId)) {
    query->insert(pair<string, string>("variableId", *request->variableId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNameListData"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNameListDataResponse(callApi(params, req, runtime));
}

DeleteNameListDataResponse Alibabacloud_Xtee20210910::Client::deleteNameListData(shared_ptr<DeleteNameListDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNameListDataWithOptions(request, runtime);
}

DeleteQueryVariableResponse Alibabacloud_Xtee20210910::Client::deleteQueryVariableWithOptions(shared_ptr<DeleteQueryVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQueryVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteQueryVariableResponse(callApi(params, req, runtime));
}

DeleteQueryVariableResponse Alibabacloud_Xtee20210910::Client::deleteQueryVariable(shared_ptr<DeleteQueryVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQueryVariableWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Xtee20210910::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleVersionId)) {
    query->insert(pair<string, long>("ruleVersionId", *request->ruleVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRule"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRuleResponse(callApi(params, req, runtime));
}

DeleteRuleResponse Alibabacloud_Xtee20210910::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DeleteSampleBatchResponse Alibabacloud_Xtee20210910::Client::deleteSampleBatchWithOptions(shared_ptr<DeleteSampleBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versions)) {
    query->insert(pair<string, string>("versions", *request->versions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSampleBatch"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSampleBatchResponse(callApi(params, req, runtime));
}

DeleteSampleBatchResponse Alibabacloud_Xtee20210910::Client::deleteSampleBatch(shared_ptr<DeleteSampleBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSampleBatchWithOptions(request, runtime);
}

DeleteSampleDataResponse Alibabacloud_Xtee20210910::Client::deleteSampleDataWithOptions(shared_ptr<DeleteSampleDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSampleData"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSampleDataResponse(callApi(params, req, runtime));
}

DeleteSampleDataResponse Alibabacloud_Xtee20210910::Client::deleteSampleData(shared_ptr<DeleteSampleDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSampleDataWithOptions(request, runtime);
}

DeleteTaskResponse Alibabacloud_Xtee20210910::Client::deleteTaskWithOptions(shared_ptr<DeleteTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTaskResponse(callApi(params, req, runtime));
}

DeleteTaskResponse Alibabacloud_Xtee20210910::Client::deleteTask(shared_ptr<DeleteTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTaskWithOptions(request, runtime);
}

DescribeAdvanceSearchLeftVariableListResponse Alibabacloud_Xtee20210910::Client::describeAdvanceSearchLeftVariableListWithOptions(shared_ptr<DescribeAdvanceSearchLeftVariableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvanceSearchLeftVariableList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdvanceSearchLeftVariableListResponse(callApi(params, req, runtime));
}

DescribeAdvanceSearchLeftVariableListResponse Alibabacloud_Xtee20210910::Client::describeAdvanceSearchLeftVariableList(shared_ptr<DescribeAdvanceSearchLeftVariableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvanceSearchLeftVariableListWithOptions(request, runtime);
}

DescribeAdvanceSearchPageListResponse Alibabacloud_Xtee20210910::Client::describeAdvanceSearchPageListWithOptions(shared_ptr<DescribeAdvanceSearchPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventBeginTime)) {
    query->insert(pair<string, long>("eventBeginTime", *request->eventBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventEndTime)) {
    query->insert(pair<string, long>("eventEndTime", *request->eventEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    query->insert(pair<string, string>("fieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldValue)) {
    query->insert(pair<string, string>("fieldValue", *request->fieldValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvanceSearchPageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdvanceSearchPageListResponse(callApi(params, req, runtime));
}

DescribeAdvanceSearchPageListResponse Alibabacloud_Xtee20210910::Client::describeAdvanceSearchPageList(shared_ptr<DescribeAdvanceSearchPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvanceSearchPageListWithOptions(request, runtime);
}

DescribeAllDataSourceResponse Alibabacloud_Xtee20210910::Client::describeAllDataSourceWithOptions(shared_ptr<DescribeAllDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllDataSource"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllDataSourceResponse(callApi(params, req, runtime));
}

DescribeAllDataSourceResponse Alibabacloud_Xtee20210910::Client::describeAllDataSource(shared_ptr<DescribeAllDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllDataSourceWithOptions(request, runtime);
}

DescribeAllEventNameAndCodeResponse Alibabacloud_Xtee20210910::Client::describeAllEventNameAndCodeWithOptions(shared_ptr<DescribeAllEventNameAndCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllEventNameAndCode"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllEventNameAndCodeResponse(callApi(params, req, runtime));
}

DescribeAllEventNameAndCodeResponse Alibabacloud_Xtee20210910::Client::describeAllEventNameAndCode(shared_ptr<DescribeAllEventNameAndCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllEventNameAndCodeWithOptions(request, runtime);
}

DescribeAllRootVariableResponse Alibabacloud_Xtee20210910::Client::describeAllRootVariableWithOptions(shared_ptr<DescribeAllRootVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceVariableIds)) {
    query->insert(pair<string, string>("deviceVariableIds", *request->deviceVariableIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionVariableIds)) {
    query->insert(pair<string, string>("expressionVariableIds", *request->expressionVariableIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nativeVariableIds)) {
    query->insert(pair<string, string>("nativeVariableIds", *request->nativeVariableIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryVariableIds)) {
    query->insert(pair<string, string>("queryVariableIds", *request->queryVariableIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->velocityVariableIds)) {
    query->insert(pair<string, string>("velocityVariableIds", *request->velocityVariableIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllRootVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllRootVariableResponse(callApi(params, req, runtime));
}

DescribeAllRootVariableResponse Alibabacloud_Xtee20210910::Client::describeAllRootVariable(shared_ptr<DescribeAllRootVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllRootVariableWithOptions(request, runtime);
}

DescribeAnalysisColumnFieldListResponse Alibabacloud_Xtee20210910::Client::describeAnalysisColumnFieldListWithOptions(shared_ptr<DescribeAnalysisColumnFieldListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnalysisColumnFieldList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnalysisColumnFieldListResponse(callApi(params, req, runtime));
}

DescribeAnalysisColumnFieldListResponse Alibabacloud_Xtee20210910::Client::describeAnalysisColumnFieldList(shared_ptr<DescribeAnalysisColumnFieldListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnalysisColumnFieldListWithOptions(request, runtime);
}

DescribeAnalysisColumnListResponse Alibabacloud_Xtee20210910::Client::describeAnalysisColumnListWithOptions(shared_ptr<DescribeAnalysisColumnListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnalysisColumnList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnalysisColumnListResponse(callApi(params, req, runtime));
}

DescribeAnalysisColumnListResponse Alibabacloud_Xtee20210910::Client::describeAnalysisColumnList(shared_ptr<DescribeAnalysisColumnListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnalysisColumnListWithOptions(request, runtime);
}

DescribeAnalysisConditionFavoriteListResponse Alibabacloud_Xtee20210910::Client::describeAnalysisConditionFavoriteListWithOptions(shared_ptr<DescribeAnalysisConditionFavoriteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnalysisConditionFavoriteList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnalysisConditionFavoriteListResponse(callApi(params, req, runtime));
}

DescribeAnalysisConditionFavoriteListResponse Alibabacloud_Xtee20210910::Client::describeAnalysisConditionFavoriteList(shared_ptr<DescribeAnalysisConditionFavoriteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnalysisConditionFavoriteListWithOptions(request, runtime);
}

DescribeAnalysisExportTaskDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeAnalysisExportTaskDownloadUrlWithOptions(shared_ptr<DescribeAnalysisExportTaskDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnalysisExportTaskDownloadUrl"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnalysisExportTaskDownloadUrlResponse(callApi(params, req, runtime));
}

DescribeAnalysisExportTaskDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeAnalysisExportTaskDownloadUrl(shared_ptr<DescribeAnalysisExportTaskDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnalysisExportTaskDownloadUrlWithOptions(request, runtime);
}

DescribeApiResponse Alibabacloud_Xtee20210910::Client::describeApiWithOptions(shared_ptr<DescribeApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("apiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiRegionId)) {
    query->insert(pair<string, string>("apiRegionId", *request->apiRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("apiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApi"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiResponse(callApi(params, req, runtime));
}

DescribeApiResponse Alibabacloud_Xtee20210910::Client::describeApi(shared_ptr<DescribeApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiWithOptions(request, runtime);
}

DescribeApiGroupsResponse Alibabacloud_Xtee20210910::Client::describeApiGroupsWithOptions(shared_ptr<DescribeApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiRegionId)) {
    query->insert(pair<string, string>("apiRegionId", *request->apiRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiGroups"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiGroupsResponse(callApi(params, req, runtime));
}

DescribeApiGroupsResponse Alibabacloud_Xtee20210910::Client::describeApiGroups(shared_ptr<DescribeApiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupsWithOptions(request, runtime);
}

DescribeApiLimitResponse Alibabacloud_Xtee20210910::Client::describeApiLimitWithOptions(shared_ptr<DescribeApiLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiLimit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiLimitResponse(callApi(params, req, runtime));
}

DescribeApiLimitResponse Alibabacloud_Xtee20210910::Client::describeApiLimit(shared_ptr<DescribeApiLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiLimitWithOptions(request, runtime);
}

DescribeApiNameListResponse Alibabacloud_Xtee20210910::Client::describeApiNameListWithOptions(shared_ptr<DescribeApiNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiNameList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiNameListResponse(callApi(params, req, runtime));
}

DescribeApiNameListResponse Alibabacloud_Xtee20210910::Client::describeApiNameList(shared_ptr<DescribeApiNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiNameListWithOptions(request, runtime);
}

DescribeApiVariableResponse Alibabacloud_Xtee20210910::Client::describeApiVariableWithOptions(shared_ptr<DescribeApiVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiVariableResponse(callApi(params, req, runtime));
}

DescribeApiVariableResponse Alibabacloud_Xtee20210910::Client::describeApiVariable(shared_ptr<DescribeApiVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiVariableWithOptions(request, runtime);
}

DescribeApisResponse Alibabacloud_Xtee20210910::Client::describeApisWithOptions(shared_ptr<DescribeApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiGroupId)) {
    query->insert(pair<string, string>("apiGroupId", *request->apiGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiRegionId)) {
    query->insert(pair<string, string>("apiRegionId", *request->apiRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("apiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApis"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisResponse(callApi(params, req, runtime));
}

DescribeApisResponse Alibabacloud_Xtee20210910::Client::describeApis(shared_ptr<DescribeApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisWithOptions(request, runtime);
}

DescribeAppKeyPageResponse Alibabacloud_Xtee20210910::Client::describeAppKeyPageWithOptions(shared_ptr<DescribeAppKeyPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppKeyPage"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppKeyPageResponse(callApi(params, req, runtime));
}

DescribeAppKeyPageResponse Alibabacloud_Xtee20210910::Client::describeAppKeyPage(shared_ptr<DescribeAppKeyPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppKeyPageWithOptions(request, runtime);
}

DescribeAuditConfigResponse Alibabacloud_Xtee20210910::Client::describeAuditConfigWithOptions(shared_ptr<DescribeAuditConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditRelationType)) {
    query->insert(pair<string, string>("auditRelationType", *request->auditRelationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuditConfig"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuditConfigResponse(callApi(params, req, runtime));
}

DescribeAuditConfigResponse Alibabacloud_Xtee20210910::Client::describeAuditConfig(shared_ptr<DescribeAuditConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuditConfigWithOptions(request, runtime);
}

DescribeAuditDetailsResponse Alibabacloud_Xtee20210910::Client::describeAuditDetailsWithOptions(shared_ptr<DescribeAuditDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuditDetails"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuditDetailsResponse(callApi(params, req, runtime));
}

DescribeAuditDetailsResponse Alibabacloud_Xtee20210910::Client::describeAuditDetails(shared_ptr<DescribeAuditDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuditDetailsWithOptions(request, runtime);
}

DescribeAuditPageListResponse Alibabacloud_Xtee20210910::Client::describeAuditPageListWithOptions(shared_ptr<DescribeAuditPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditStatus)) {
    query->insert(pair<string, string>("auditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuditPageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuditPageListResponse(callApi(params, req, runtime));
}

DescribeAuditPageListResponse Alibabacloud_Xtee20210910::Client::describeAuditPageList(shared_ptr<DescribeAuditPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuditPageListWithOptions(request, runtime);
}

DescribeAuthEventNameListResponse Alibabacloud_Xtee20210910::Client::describeAuthEventNameListWithOptions(shared_ptr<DescribeAuthEventNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuthEventNameList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuthEventNameListResponse(callApi(params, req, runtime));
}

DescribeAuthEventNameListResponse Alibabacloud_Xtee20210910::Client::describeAuthEventNameList(shared_ptr<DescribeAuthEventNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthEventNameListWithOptions(request, runtime);
}

DescribeAuthRulePageListResponse Alibabacloud_Xtee20210910::Client::describeAuthRulePageListWithOptions(shared_ptr<DescribeAuthRulePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuthRulePageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuthRulePageListResponse(callApi(params, req, runtime));
}

DescribeAuthRulePageListResponse Alibabacloud_Xtee20210910::Client::describeAuthRulePageList(shared_ptr<DescribeAuthRulePageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthRulePageListWithOptions(request, runtime);
}

DescribeAuthSceneListResponse Alibabacloud_Xtee20210910::Client::describeAuthSceneListWithOptions(shared_ptr<DescribeAuthSceneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuthSceneList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuthSceneListResponse(callApi(params, req, runtime));
}

DescribeAuthSceneListResponse Alibabacloud_Xtee20210910::Client::describeAuthSceneList(shared_ptr<DescribeAuthSceneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthSceneListWithOptions(request, runtime);
}

DescribeAuthScenePageListResponse Alibabacloud_Xtee20210910::Client::describeAuthScenePageListWithOptions(shared_ptr<DescribeAuthScenePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("sceneName", *request->sceneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuthScenePageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuthScenePageListResponse(callApi(params, req, runtime));
}

DescribeAuthScenePageListResponse Alibabacloud_Xtee20210910::Client::describeAuthScenePageList(shared_ptr<DescribeAuthScenePageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthScenePageListWithOptions(request, runtime);
}

DescribeAuthStatusResponse Alibabacloud_Xtee20210910::Client::describeAuthStatusWithOptions(shared_ptr<DescribeAuthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuthStatus"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuthStatusResponse(callApi(params, req, runtime));
}

DescribeAuthStatusResponse Alibabacloud_Xtee20210910::Client::describeAuthStatus(shared_ptr<DescribeAuthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthStatusWithOptions(request, runtime);
}

DescribeAvgExecuteCostReportResponse Alibabacloud_Xtee20210910::Client::describeAvgExecuteCostReportWithOptions(shared_ptr<DescribeAvgExecuteCostReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvgExecuteCostReport"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvgExecuteCostReportResponse(callApi(params, req, runtime));
}

DescribeAvgExecuteCostReportResponse Alibabacloud_Xtee20210910::Client::describeAvgExecuteCostReport(shared_ptr<DescribeAvgExecuteCostReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvgExecuteCostReportWithOptions(request, runtime);
}

DescribeBasicSearchPageListResponse Alibabacloud_Xtee20210910::Client::describeBasicSearchPageListWithOptions(shared_ptr<DescribeBasicSearchPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventBeginTime)) {
    query->insert(pair<string, long>("eventBeginTime", *request->eventBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventEndTime)) {
    query->insert(pair<string, long>("eventEndTime", *request->eventEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    query->insert(pair<string, string>("fieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldValue)) {
    query->insert(pair<string, string>("fieldValue", *request->fieldValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBasicSearchPageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBasicSearchPageListResponse(callApi(params, req, runtime));
}

DescribeBasicSearchPageListResponse Alibabacloud_Xtee20210910::Client::describeBasicSearchPageList(shared_ptr<DescribeBasicSearchPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBasicSearchPageListWithOptions(request, runtime);
}

DescribeBasicStartResponse Alibabacloud_Xtee20210910::Client::describeBasicStartWithOptions(shared_ptr<DescribeBasicStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("appKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDs)) {
    query->insert(pair<string, string>("endDs", *request->endDs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDs)) {
    query->insert(pair<string, string>("startDs", *request->startDs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBasicStart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBasicStartResponse(callApi(params, req, runtime));
}

DescribeBasicStartResponse Alibabacloud_Xtee20210910::Client::describeBasicStart(shared_ptr<DescribeBasicStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBasicStartWithOptions(request, runtime);
}

DescribeByPassShuntEventResponse Alibabacloud_Xtee20210910::Client::describeByPassShuntEventWithOptions(shared_ptr<DescribeByPassShuntEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventId)) {
    query->insert(pair<string, long>("eventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeByPassShuntEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeByPassShuntEventResponse(callApi(params, req, runtime));
}

DescribeByPassShuntEventResponse Alibabacloud_Xtee20210910::Client::describeByPassShuntEvent(shared_ptr<DescribeByPassShuntEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeByPassShuntEventWithOptions(request, runtime);
}

DescribeCustVariableConfigListResponse Alibabacloud_Xtee20210910::Client::describeCustVariableConfigListWithOptions(shared_ptr<DescribeCustVariableConfigListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("bizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeType)) {
    query->insert(pair<string, string>("timeType", *request->timeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustVariableConfigList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustVariableConfigListResponse(callApi(params, req, runtime));
}

DescribeCustVariableConfigListResponse Alibabacloud_Xtee20210910::Client::describeCustVariableConfigList(shared_ptr<DescribeCustVariableConfigListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustVariableConfigListWithOptions(request, runtime);
}

DescribeCustVariableDetailResponse Alibabacloud_Xtee20210910::Client::describeCustVariableDetailWithOptions(shared_ptr<DescribeCustVariableDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustVariableDetail"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustVariableDetailResponse(callApi(params, req, runtime));
}

DescribeCustVariableDetailResponse Alibabacloud_Xtee20210910::Client::describeCustVariableDetail(shared_ptr<DescribeCustVariableDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustVariableDetailWithOptions(request, runtime);
}

DescribeCustVariablePageResponse Alibabacloud_Xtee20210910::Client::describeCustVariablePageWithOptions(shared_ptr<DescribeCustVariablePageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustVariablePage"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCustVariablePageResponse(callApi(params, req, runtime));
}

DescribeCustVariablePageResponse Alibabacloud_Xtee20210910::Client::describeCustVariablePage(shared_ptr<DescribeCustVariablePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustVariablePageWithOptions(request, runtime);
}

DescribeDataSourceDataDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeDataSourceDataDownloadUrlWithOptions(shared_ptr<DescribeDataSourceDataDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("dataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataSourceDataDownloadUrl"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataSourceDataDownloadUrlResponse(callApi(params, req, runtime));
}

DescribeDataSourceDataDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeDataSourceDataDownloadUrl(shared_ptr<DescribeDataSourceDataDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataSourceDataDownloadUrlWithOptions(request, runtime);
}

DescribeDataSourceFieldsResponse Alibabacloud_Xtee20210910::Client::describeDataSourceFieldsWithOptions(shared_ptr<DescribeDataSourceFieldsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceCode)) {
    query->insert(pair<string, string>("dataSourceCode", *request->dataSourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataSourceFields"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataSourceFieldsResponse(callApi(params, req, runtime));
}

DescribeDataSourceFieldsResponse Alibabacloud_Xtee20210910::Client::describeDataSourceFields(shared_ptr<DescribeDataSourceFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataSourceFieldsWithOptions(request, runtime);
}

DescribeDataSourcePageListResponse Alibabacloud_Xtee20210910::Client::describeDataSourcePageListWithOptions(shared_ptr<DescribeDataSourcePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataSourcePageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataSourcePageListResponse(callApi(params, req, runtime));
}

DescribeDataSourcePageListResponse Alibabacloud_Xtee20210910::Client::describeDataSourcePageList(shared_ptr<DescribeDataSourcePageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataSourcePageListWithOptions(request, runtime);
}

DescribeDecisionResultFluctuationResponse Alibabacloud_Xtee20210910::Client::describeDecisionResultFluctuationWithOptions(shared_ptr<DescribeDecisionResultFluctuationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDecisionResultFluctuation"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDecisionResultFluctuationResponse(callApi(params, req, runtime));
}

DescribeDecisionResultFluctuationResponse Alibabacloud_Xtee20210910::Client::describeDecisionResultFluctuation(shared_ptr<DescribeDecisionResultFluctuationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDecisionResultFluctuationWithOptions(request, runtime);
}

DescribeDecisionResultTrendResponse Alibabacloud_Xtee20210910::Client::describeDecisionResultTrendWithOptions(shared_ptr<DescribeDecisionResultTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDecisionResultTrend"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDecisionResultTrendResponse(callApi(params, req, runtime));
}

DescribeDecisionResultTrendResponse Alibabacloud_Xtee20210910::Client::describeDecisionResultTrend(shared_ptr<DescribeDecisionResultTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDecisionResultTrendWithOptions(request, runtime);
}

DescribeDetailStartResponse Alibabacloud_Xtee20210910::Client::describeDetailStartWithOptions(shared_ptr<DescribeDetailStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("appKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDs)) {
    query->insert(pair<string, string>("endDs", *request->endDs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDs)) {
    query->insert(pair<string, string>("startDs", *request->startDs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDetailStart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDetailStartResponse(callApi(params, req, runtime));
}

DescribeDetailStartResponse Alibabacloud_Xtee20210910::Client::describeDetailStart(shared_ptr<DescribeDetailStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDetailStartWithOptions(request, runtime);
}

DescribeDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeDownloadUrlWithOptions(shared_ptr<DescribeDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("RegId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadUrl"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadUrlResponse(callApi(params, req, runtime));
}

DescribeDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeDownloadUrl(shared_ptr<DescribeDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadUrlWithOptions(request, runtime);
}

DescribeEventBaseInfoByEventCodeResponse Alibabacloud_Xtee20210910::Client::describeEventBaseInfoByEventCodeWithOptions(shared_ptr<DescribeEventBaseInfoByEventCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventBaseInfoByEventCode"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventBaseInfoByEventCodeResponse(callApi(params, req, runtime));
}

DescribeEventBaseInfoByEventCodeResponse Alibabacloud_Xtee20210910::Client::describeEventBaseInfoByEventCode(shared_ptr<DescribeEventBaseInfoByEventCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventBaseInfoByEventCodeWithOptions(request, runtime);
}

DescribeEventCountResponse Alibabacloud_Xtee20210910::Client::describeEventCountWithOptions(shared_ptr<DescribeEventCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventCount"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventCountResponse(callApi(params, req, runtime));
}

DescribeEventCountResponse Alibabacloud_Xtee20210910::Client::describeEventCount(shared_ptr<DescribeEventCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventCountWithOptions(request, runtime);
}

DescribeEventDetailByRequestIdResponse Alibabacloud_Xtee20210910::Client::describeEventDetailByRequestIdWithOptions(shared_ptr<DescribeEventDetailByRequestIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventTime)) {
    query->insert(pair<string, long>("eventTime", *request->eventTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sRequestId)) {
    query->insert(pair<string, string>("sRequestId", *request->sRequestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventDetailByRequestId"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventDetailByRequestIdResponse(callApi(params, req, runtime));
}

DescribeEventDetailByRequestIdResponse Alibabacloud_Xtee20210910::Client::describeEventDetailByRequestId(shared_ptr<DescribeEventDetailByRequestIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventDetailByRequestIdWithOptions(request, runtime);
}

DescribeEventLogDetailResponse Alibabacloud_Xtee20210910::Client::describeEventLogDetailWithOptions(shared_ptr<DescribeEventLogDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqIdByLog)) {
    query->insert(pair<string, string>("reqIdByLog", *request->reqIdByLog));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventLogDetail"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventLogDetailResponse(callApi(params, req, runtime));
}

DescribeEventLogDetailResponse Alibabacloud_Xtee20210910::Client::describeEventLogDetail(shared_ptr<DescribeEventLogDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventLogDetailWithOptions(request, runtime);
}

DescribeEventLogPageResponse Alibabacloud_Xtee20210910::Client::describeEventLogPageWithOptions(shared_ptr<DescribeEventLogPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdPRP)) {
    query->insert(pair<string, string>("accountIdPRP", *request->accountIdPRP));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition1AL)) {
    query->insert(pair<string, string>("condition1AL", *request->condition1AL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition2AL)) {
    query->insert(pair<string, string>("condition2AL", *request->condition2AL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition3AL)) {
    query->insert(pair<string, string>("condition3AL", *request->condition3AL));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceTypeLRP)) {
    query->insert(pair<string, string>("deviceTypeLRP", *request->deviceTypeLRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emailPRP)) {
    query->insert(pair<string, string>("emailPRP", *request->emailPRP));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failReasonLRP)) {
    query->insert(pair<string, string>("failReasonLRP", *request->failReasonLRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipPRP)) {
    query->insert(pair<string, string>("ipPRP", *request->ipPRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginResultARP)) {
    query->insert(pair<string, string>("loginResultARP", *request->loginResultARP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginTypeLRP)) {
    query->insert(pair<string, string>("loginTypeLRP", *request->loginTypeLRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->macPRP)) {
    query->insert(pair<string, string>("macPRP", *request->macPRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobilePRP)) {
    query->insert(pair<string, string>("mobilePRP", *request->mobilePRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nickNamePRP)) {
    query->insert(pair<string, string>("nickNamePRP", *request->nickNamePRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateSourceLRP)) {
    query->insert(pair<string, string>("operateSourceLRP", *request->operateSourceLRP));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referPRP)) {
    query->insert(pair<string, string>("referPRP", *request->referPRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerIpPRP)) {
    query->insert(pair<string, string>("registerIpPRP", *request->registerIpPRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqIdPBS)) {
    query->insert(pair<string, string>("reqIdPBS", *request->reqIdPBS));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scoreEBS)) {
    query->insert(pair<string, long>("scoreEBS", *request->scoreEBS));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scoreSBS)) {
    query->insert(pair<string, long>("scoreSBS", *request->scoreSBS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceABS)) {
    query->insert(pair<string, string>("serviceABS", *request->serviceABS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsLBS)) {
    query->insert(pair<string, string>("tagsLBS", *request->tagsLBS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umidPDI)) {
    query->insert(pair<string, string>("umidPDI", *request->umidPDI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAgentPRP)) {
    query->insert(pair<string, string>("userAgentPRP", *request->userAgentPRP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userNameTypeLRP)) {
    query->insert(pair<string, string>("userNameTypeLRP", *request->userNameTypeLRP));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventLogPage"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventLogPageResponse(callApi(params, req, runtime));
}

DescribeEventLogPageResponse Alibabacloud_Xtee20210910::Client::describeEventLogPage(shared_ptr<DescribeEventLogPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventLogPageWithOptions(request, runtime);
}

DescribeEventPageListResponse Alibabacloud_Xtee20210910::Client::describeEventPageListWithOptions(shared_ptr<DescribeEventPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("eventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventStatus)) {
    query->insert(pair<string, string>("eventStatus", *request->eventStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventPageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventPageListResponse(callApi(params, req, runtime));
}

DescribeEventPageListResponse Alibabacloud_Xtee20210910::Client::describeEventPageList(shared_ptr<DescribeEventPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventPageListWithOptions(request, runtime);
}

DescribeEventResultBarChartResponse Alibabacloud_Xtee20210910::Client::describeEventResultBarChartWithOptions(shared_ptr<DescribeEventResultBarChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventResultBarChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventResultBarChartResponse(callApi(params, req, runtime));
}

DescribeEventResultBarChartResponse Alibabacloud_Xtee20210910::Client::describeEventResultBarChart(shared_ptr<DescribeEventResultBarChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventResultBarChartWithOptions(request, runtime);
}

DescribeEventResultListResponse Alibabacloud_Xtee20210910::Client::describeEventResultListWithOptions(shared_ptr<DescribeEventResultListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventResultList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventResultListResponse(callApi(params, req, runtime));
}

DescribeEventResultListResponse Alibabacloud_Xtee20210910::Client::describeEventResultList(shared_ptr<DescribeEventResultListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventResultListWithOptions(request, runtime);
}

DescribeEventTaskHistoryResponse Alibabacloud_Xtee20210910::Client::describeEventTaskHistoryWithOptions(shared_ptr<DescribeEventTaskHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventTaskHistory"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventTaskHistoryResponse(callApi(params, req, runtime));
}

DescribeEventTaskHistoryResponse Alibabacloud_Xtee20210910::Client::describeEventTaskHistory(shared_ptr<DescribeEventTaskHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventTaskHistoryWithOptions(request, runtime);
}

DescribeEventTotalCountReportResponse Alibabacloud_Xtee20210910::Client::describeEventTotalCountReportWithOptions(shared_ptr<DescribeEventTotalCountReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventTotalCountReport"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventTotalCountReportResponse(callApi(params, req, runtime));
}

DescribeEventTotalCountReportResponse Alibabacloud_Xtee20210910::Client::describeEventTotalCountReport(shared_ptr<DescribeEventTotalCountReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventTotalCountReportWithOptions(request, runtime);
}

DescribeEventUploadPolicyResponse Alibabacloud_Xtee20210910::Client::describeEventUploadPolicyWithOptions(shared_ptr<DescribeEventUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventUploadPolicy"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventUploadPolicyResponse(callApi(params, req, runtime));
}

DescribeEventUploadPolicyResponse Alibabacloud_Xtee20210910::Client::describeEventUploadPolicy(shared_ptr<DescribeEventUploadPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventUploadPolicyWithOptions(request, runtime);
}

DescribeEventVariableListResponse Alibabacloud_Xtee20210910::Client::describeEventVariableListWithOptions(shared_ptr<DescribeEventVariableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterDTO)) {
    query->insert(pair<string, string>("filterDTO", *request->filterDTO));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refObjId)) {
    query->insert(pair<string, string>("refObjId", *request->refObjId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refObjType)) {
    query->insert(pair<string, string>("refObjType", *request->refObjType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventVariableList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventVariableListResponse(callApi(params, req, runtime));
}

DescribeEventVariableListResponse Alibabacloud_Xtee20210910::Client::describeEventVariableList(shared_ptr<DescribeEventVariableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventVariableListWithOptions(request, runtime);
}

DescribeEventVariableTemplateBindResponse Alibabacloud_Xtee20210910::Client::describeEventVariableTemplateBindWithOptions(shared_ptr<DescribeEventVariableTemplateBindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputs)) {
    query->insert(pair<string, string>("inputs", *request->inputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("templateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventVariableTemplateBind"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventVariableTemplateBindResponse(callApi(params, req, runtime));
}

DescribeEventVariableTemplateBindResponse Alibabacloud_Xtee20210910::Client::describeEventVariableTemplateBind(shared_ptr<DescribeEventVariableTemplateBindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventVariableTemplateBindWithOptions(request, runtime);
}

DescribeEventVariableTemplateListResponse Alibabacloud_Xtee20210910::Client::describeEventVariableTemplateListWithOptions(shared_ptr<DescribeEventVariableTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputs)) {
    query->insert(pair<string, string>("inputs", *request->inputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("templateCode", *request->templateCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventVariableTemplateList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventVariableTemplateListResponse(callApi(params, req, runtime));
}

DescribeEventVariableTemplateListResponse Alibabacloud_Xtee20210910::Client::describeEventVariableTemplateList(shared_ptr<DescribeEventVariableTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventVariableTemplateListWithOptions(request, runtime);
}

DescribeEventsVariableListResponse Alibabacloud_Xtee20210910::Client::describeEventsVariableListWithOptions(shared_ptr<DescribeEventsVariableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterDTO)) {
    query->insert(pair<string, string>("filterDTO", *request->filterDTO));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventsVariableList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventsVariableListResponse(callApi(params, req, runtime));
}

DescribeEventsVariableListResponse Alibabacloud_Xtee20210910::Client::describeEventsVariableList(shared_ptr<DescribeEventsVariableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventsVariableListWithOptions(request, runtime);
}

DescribeExcuteNumResponse Alibabacloud_Xtee20210910::Client::describeExcuteNumWithOptions(shared_ptr<DescribeExcuteNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->degree)) {
    query->insert(pair<string, string>("Degree", *request->degree));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExcuteNum"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExcuteNumResponse(callApi(params, req, runtime));
}

DescribeExcuteNumResponse Alibabacloud_Xtee20210910::Client::describeExcuteNum(shared_ptr<DescribeExcuteNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExcuteNumWithOptions(request, runtime);
}

DescribeExistNameResponse Alibabacloud_Xtee20210910::Client::describeExistNameWithOptions(shared_ptr<DescribeExistNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExistName"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExistNameResponse(callApi(params, req, runtime));
}

DescribeExistNameResponse Alibabacloud_Xtee20210910::Client::describeExistName(shared_ptr<DescribeExistNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExistNameWithOptions(request, runtime);
}

DescribeExistSceneResponse Alibabacloud_Xtee20210910::Client::describeExistSceneWithOptions(shared_ptr<DescribeExistSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExistScene"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExistSceneResponse(callApi(params, req, runtime));
}

DescribeExistSceneResponse Alibabacloud_Xtee20210910::Client::describeExistScene(shared_ptr<DescribeExistSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExistSceneWithOptions(request, runtime);
}

DescribeExpressionVariableDetailResponse Alibabacloud_Xtee20210910::Client::describeExpressionVariableDetailWithOptions(shared_ptr<DescribeExpressionVariableDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressionVariableDetail"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressionVariableDetailResponse(callApi(params, req, runtime));
}

DescribeExpressionVariableDetailResponse Alibabacloud_Xtee20210910::Client::describeExpressionVariableDetail(shared_ptr<DescribeExpressionVariableDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressionVariableDetailWithOptions(request, runtime);
}

DescribeExpressionVariableFunctionListResponse Alibabacloud_Xtee20210910::Client::describeExpressionVariableFunctionListWithOptions(shared_ptr<DescribeExpressionVariableFunctionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressionVariableFunctionList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressionVariableFunctionListResponse(callApi(params, req, runtime));
}

DescribeExpressionVariableFunctionListResponse Alibabacloud_Xtee20210910::Client::describeExpressionVariableFunctionList(shared_ptr<DescribeExpressionVariableFunctionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressionVariableFunctionListWithOptions(request, runtime);
}

DescribeExpressionVariablePageResponse Alibabacloud_Xtee20210910::Client::describeExpressionVariablePageWithOptions(shared_ptr<DescribeExpressionVariablePageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    query->insert(pair<string, string>("outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressionVariablePage"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressionVariablePageResponse(callApi(params, req, runtime));
}

DescribeExpressionVariablePageResponse Alibabacloud_Xtee20210910::Client::describeExpressionVariablePage(shared_ptr<DescribeExpressionVariablePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressionVariablePageWithOptions(request, runtime);
}

DescribeFieldByIdResponse Alibabacloud_Xtee20210910::Client::describeFieldByIdWithOptions(shared_ptr<DescribeFieldByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFieldById"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFieldByIdResponse(callApi(params, req, runtime));
}

DescribeFieldByIdResponse Alibabacloud_Xtee20210910::Client::describeFieldById(shared_ptr<DescribeFieldByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFieldByIdWithOptions(request, runtime);
}

DescribeFieldListResponse Alibabacloud_Xtee20210910::Client::describeFieldListWithOptions(shared_ptr<DescribeFieldListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputs)) {
    query->insert(pair<string, string>("inputs", *request->inputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFieldList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFieldListResponse(callApi(params, req, runtime));
}

DescribeFieldListResponse Alibabacloud_Xtee20210910::Client::describeFieldList(shared_ptr<DescribeFieldListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFieldListWithOptions(request, runtime);
}

DescribeFieldPageResponse Alibabacloud_Xtee20210910::Client::describeFieldPageWithOptions(shared_ptr<DescribeFieldPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classify)) {
    query->insert(pair<string, string>("classify", *request->classify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFieldPage"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFieldPageResponse(callApi(params, req, runtime));
}

DescribeFieldPageResponse Alibabacloud_Xtee20210910::Client::describeFieldPage(shared_ptr<DescribeFieldPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFieldPageWithOptions(request, runtime);
}

DescribeGroupAccountPageResponse Alibabacloud_Xtee20210910::Client::describeGroupAccountPageWithOptions(shared_ptr<DescribeGroupAccountPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->communityNo)) {
    query->insert(pair<string, string>("communityNo", *request->communityNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldKey)) {
    query->insert(pair<string, string>("fieldKey", *request->fieldKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldVal)) {
    query->insert(pair<string, string>("fieldVal", *request->fieldVal));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isPage)) {
    query->insert(pair<string, bool>("isPage", *request->isPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroupAccountPage"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGroupAccountPageResponse(callApi(params, req, runtime));
}

DescribeGroupAccountPageResponse Alibabacloud_Xtee20210910::Client::describeGroupAccountPage(shared_ptr<DescribeGroupAccountPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupAccountPageWithOptions(request, runtime);
}

DescribeGroupConditionListResponse Alibabacloud_Xtee20210910::Client::describeGroupConditionListWithOptions(shared_ptr<DescribeGroupConditionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroupConditionList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGroupConditionListResponse(callApi(params, req, runtime));
}

DescribeGroupConditionListResponse Alibabacloud_Xtee20210910::Client::describeGroupConditionList(shared_ptr<DescribeGroupConditionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupConditionListWithOptions(request, runtime);
}

DescribeGroupPageResponse Alibabacloud_Xtee20210910::Client::describeGroupPageWithOptions(shared_ptr<DescribeGroupPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeType)) {
    query->insert(pair<string, string>("timeType", *request->timeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroupPage"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGroupPageResponse(callApi(params, req, runtime));
}

DescribeGroupPageResponse Alibabacloud_Xtee20210910::Client::describeGroupPage(shared_ptr<DescribeGroupPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupPageWithOptions(request, runtime);
}

DescribeGroupStatisticsByTodayResponse Alibabacloud_Xtee20210910::Client::describeGroupStatisticsByTodayWithOptions(shared_ptr<DescribeGroupStatisticsByTodayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroupStatisticsByToday"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGroupStatisticsByTodayResponse(callApi(params, req, runtime));
}

DescribeGroupStatisticsByTodayResponse Alibabacloud_Xtee20210910::Client::describeGroupStatisticsByToday(shared_ptr<DescribeGroupStatisticsByTodayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupStatisticsByTodayWithOptions(request, runtime);
}

DescribeGroupTrendResponse Alibabacloud_Xtee20210910::Client::describeGroupTrendWithOptions(shared_ptr<DescribeGroupTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->day)) {
    query->insert(pair<string, string>("day", *request->day));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroupTrend"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGroupTrendResponse(callApi(params, req, runtime));
}

DescribeGroupTrendResponse Alibabacloud_Xtee20210910::Client::describeGroupTrend(shared_ptr<DescribeGroupTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupTrendWithOptions(request, runtime);
}

DescribeHasRuleNameByEventCodeResponse Alibabacloud_Xtee20210910::Client::describeHasRuleNameByEventCodeWithOptions(shared_ptr<DescribeHasRuleNameByEventCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRuleId)) {
    query->insert(pair<string, string>("excludeRuleId", *request->excludeRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHasRuleNameByEventCode"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHasRuleNameByEventCodeResponse(callApi(params, req, runtime));
}

DescribeHasRuleNameByEventCodeResponse Alibabacloud_Xtee20210910::Client::describeHasRuleNameByEventCode(shared_ptr<DescribeHasRuleNameByEventCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHasRuleNameByEventCodeWithOptions(request, runtime);
}

DescribeHighRiskPieChartResponse Alibabacloud_Xtee20210910::Client::describeHighRiskPieChartWithOptions(shared_ptr<DescribeHighRiskPieChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHighRiskPieChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHighRiskPieChartResponse(callApi(params, req, runtime));
}

DescribeHighRiskPieChartResponse Alibabacloud_Xtee20210910::Client::describeHighRiskPieChart(shared_ptr<DescribeHighRiskPieChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHighRiskPieChartWithOptions(request, runtime);
}

DescribeHitRuleFluctuationResponse Alibabacloud_Xtee20210910::Client::describeHitRuleFluctuationWithOptions(shared_ptr<DescribeHitRuleFluctuationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    query->insert(pair<string, string>("ruleStatus", *request->ruleStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHitRuleFluctuation"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHitRuleFluctuationResponse(callApi(params, req, runtime));
}

DescribeHitRuleFluctuationResponse Alibabacloud_Xtee20210910::Client::describeHitRuleFluctuation(shared_ptr<DescribeHitRuleFluctuationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHitRuleFluctuationWithOptions(request, runtime);
}

DescribeHitRuleListResponse Alibabacloud_Xtee20210910::Client::describeHitRuleListWithOptions(shared_ptr<DescribeHitRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("eventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHitRuleList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHitRuleListResponse(callApi(params, req, runtime));
}

DescribeHitRuleListResponse Alibabacloud_Xtee20210910::Client::describeHitRuleList(shared_ptr<DescribeHitRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHitRuleListWithOptions(request, runtime);
}

DescribeHitRuleTrendResponse Alibabacloud_Xtee20210910::Client::describeHitRuleTrendWithOptions(shared_ptr<DescribeHitRuleTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    query->insert(pair<string, string>("ruleStatus", *request->ruleStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHitRuleTrend"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHitRuleTrendResponse(callApi(params, req, runtime));
}

DescribeHitRuleTrendResponse Alibabacloud_Xtee20210910::Client::describeHitRuleTrend(shared_ptr<DescribeHitRuleTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHitRuleTrendWithOptions(request, runtime);
}

DescribeInputFeildCountByEventCodeResponse Alibabacloud_Xtee20210910::Client::describeInputFeildCountByEventCodeWithOptions(shared_ptr<DescribeInputFeildCountByEventCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInputFeildCountByEventCode"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInputFeildCountByEventCodeResponse(callApi(params, req, runtime));
}

DescribeInputFeildCountByEventCodeResponse Alibabacloud_Xtee20210910::Client::describeInputFeildCountByEventCode(shared_ptr<DescribeInputFeildCountByEventCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInputFeildCountByEventCodeWithOptions(request, runtime);
}

DescribeListPocResponse Alibabacloud_Xtee20210910::Client::describeListPocWithOptions(shared_ptr<DescribeListPocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("RegId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeListPoc"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeListPocResponse(callApi(params, req, runtime));
}

DescribeListPocResponse Alibabacloud_Xtee20210910::Client::describeListPoc(shared_ptr<DescribeListPocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeListPocWithOptions(request, runtime);
}

DescribeLoanExecListResponse Alibabacloud_Xtee20210910::Client::describeLoanExecListWithOptions(shared_ptr<DescribeLoanExecListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchNo)) {
    query->insert(pair<string, string>("batchNo", *request->batchNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorObj)) {
    query->insert(pair<string, string>("monitorObj", *request->monitorObj));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorStatus)) {
    query->insert(pair<string, string>("monitorStatus", *request->monitorStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoanExecList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoanExecListResponse(callApi(params, req, runtime));
}

DescribeLoanExecListResponse Alibabacloud_Xtee20210910::Client::describeLoanExecList(shared_ptr<DescribeLoanExecListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoanExecListWithOptions(request, runtime);
}

DescribeLoanTaskListResponse Alibabacloud_Xtee20210910::Client::describeLoanTaskListWithOptions(shared_ptr<DescribeLoanTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchNo)) {
    query->insert(pair<string, string>("batchNo", *request->batchNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorStatus)) {
    query->insert(pair<string, string>("monitorStatus", *request->monitorStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLoanTaskList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLoanTaskListResponse(callApi(params, req, runtime));
}

DescribeLoanTaskListResponse Alibabacloud_Xtee20210910::Client::describeLoanTaskList(shared_ptr<DescribeLoanTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLoanTaskListWithOptions(request, runtime);
}

DescribeMarkPageResponse Alibabacloud_Xtee20210910::Client::describeMarkPageWithOptions(shared_ptr<DescribeMarkPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isPage)) {
    query->insert(pair<string, bool>("isPage", *request->isPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskLogId)) {
    query->insert(pair<string, string>("taskLogId", *request->taskLogId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMarkPage"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMarkPageResponse(callApi(params, req, runtime));
}

DescribeMarkPageResponse Alibabacloud_Xtee20210910::Client::describeMarkPage(shared_ptr<DescribeMarkPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMarkPageWithOptions(request, runtime);
}

DescribeMenuPermissionResponse Alibabacloud_Xtee20210910::Client::describeMenuPermissionWithOptions(shared_ptr<DescribeMenuPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionType)) {
    query->insert(pair<string, string>("permissionType", *request->permissionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMenuPermission"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMenuPermissionResponse(callApi(params, req, runtime));
}

DescribeMenuPermissionResponse Alibabacloud_Xtee20210910::Client::describeMenuPermission(shared_ptr<DescribeMenuPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMenuPermissionWithOptions(request, runtime);
}

DescribeMonitorTaskLimitResponse Alibabacloud_Xtee20210910::Client::describeMonitorTaskLimitWithOptions(shared_ptr<DescribeMonitorTaskLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMonitorTaskLimit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMonitorTaskLimitResponse(callApi(params, req, runtime));
}

DescribeMonitorTaskLimitResponse Alibabacloud_Xtee20210910::Client::describeMonitorTaskLimit(shared_ptr<DescribeMonitorTaskLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMonitorTaskLimitWithOptions(request, runtime);
}

DescribeNameListResponse Alibabacloud_Xtee20210910::Client::describeNameListWithOptions(shared_ptr<DescribeNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("value", *request->value));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variableId)) {
    query->insert(pair<string, string>("variableId", *request->variableId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNameList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNameListResponse(callApi(params, req, runtime));
}

DescribeNameListResponse Alibabacloud_Xtee20210910::Client::describeNameList(shared_ptr<DescribeNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNameListWithOptions(request, runtime);
}

DescribeNameListDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeNameListDownloadUrlWithOptions(shared_ptr<DescribeNameListDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->variableId)) {
    query->insert(pair<string, long>("variableId", *request->variableId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNameListDownloadUrl"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNameListDownloadUrlResponse(callApi(params, req, runtime));
}

DescribeNameListDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeNameListDownloadUrl(shared_ptr<DescribeNameListDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNameListDownloadUrlWithOptions(request, runtime);
}

DescribeNameListLimitResponse Alibabacloud_Xtee20210910::Client::describeNameListLimitWithOptions(shared_ptr<DescribeNameListLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNameListLimit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNameListLimitResponse(callApi(params, req, runtime));
}

DescribeNameListLimitResponse Alibabacloud_Xtee20210910::Client::describeNameListLimit(shared_ptr<DescribeNameListLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNameListLimitWithOptions(request, runtime);
}

DescribeNameListPageListResponse Alibabacloud_Xtee20210910::Client::describeNameListPageListWithOptions(shared_ptr<DescribeNameListPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->updateBeginTime)) {
    query->insert(pair<string, long>("updateBeginTime", *request->updateBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->updateEndTime)) {
    query->insert(pair<string, long>("updateEndTime", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("value", *request->value));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->variableId)) {
    query->insert(pair<string, long>("variableId", *request->variableId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNameListPageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNameListPageListResponse(callApi(params, req, runtime));
}

DescribeNameListPageListResponse Alibabacloud_Xtee20210910::Client::describeNameListPageList(shared_ptr<DescribeNameListPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNameListPageListWithOptions(request, runtime);
}

DescribeNameListTypeListResponse Alibabacloud_Xtee20210910::Client::describeNameListTypeListWithOptions(shared_ptr<DescribeNameListTypeListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNameListTypeList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNameListTypeListResponse(callApi(params, req, runtime));
}

DescribeNameListTypeListResponse Alibabacloud_Xtee20210910::Client::describeNameListTypeList(shared_ptr<DescribeNameListTypeListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNameListTypeListWithOptions(request, runtime);
}

DescribeNameListVariablePageListResponse Alibabacloud_Xtee20210910::Client::describeNameListVariablePageListWithOptions(shared_ptr<DescribeNameListVariablePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameListType)) {
    query->insert(pair<string, string>("nameListType", *request->nameListType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNameListVariablePageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNameListVariablePageListResponse(callApi(params, req, runtime));
}

DescribeNameListVariablePageListResponse Alibabacloud_Xtee20210910::Client::describeNameListVariablePageList(shared_ptr<DescribeNameListVariablePageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNameListVariablePageListWithOptions(request, runtime);
}

DescribeOperationLogPageListResponse Alibabacloud_Xtee20210910::Client::describeOperationLogPageListWithOptions(shared_ptr<DescribeOperationLogPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("startDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOperationLogPageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOperationLogPageListResponse(callApi(params, req, runtime));
}

DescribeOperationLogPageListResponse Alibabacloud_Xtee20210910::Client::describeOperationLogPageList(shared_ptr<DescribeOperationLogPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOperationLogPageListWithOptions(request, runtime);
}

DescribeOperatorListResponse Alibabacloud_Xtee20210910::Client::describeOperatorListWithOptions(shared_ptr<DescribeOperatorListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOperatorList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOperatorListResponse(callApi(params, req, runtime));
}

DescribeOperatorListResponse Alibabacloud_Xtee20210910::Client::describeOperatorList(shared_ptr<DescribeOperatorListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOperatorListWithOptions(request, runtime);
}

DescribeOperatorListBySceneResponse Alibabacloud_Xtee20210910::Client::describeOperatorListBySceneWithOptions(shared_ptr<DescribeOperatorListBySceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOperatorListByScene"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOperatorListBySceneResponse(callApi(params, req, runtime));
}

DescribeOperatorListBySceneResponse Alibabacloud_Xtee20210910::Client::describeOperatorListByScene(shared_ptr<DescribeOperatorListBySceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOperatorListBySceneWithOptions(request, runtime);
}

DescribeOperatorListByTypeResponse Alibabacloud_Xtee20210910::Client::describeOperatorListByTypeWithOptions(shared_ptr<DescribeOperatorListByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOperatorListByType"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOperatorListByTypeResponse(callApi(params, req, runtime));
}

DescribeOperatorListByTypeResponse Alibabacloud_Xtee20210910::Client::describeOperatorListByType(shared_ptr<DescribeOperatorListByTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOperatorListByTypeWithOptions(request, runtime);
}

DescribeOssAuthStatusResponse Alibabacloud_Xtee20210910::Client::describeOssAuthStatusWithOptions(shared_ptr<DescribeOssAuthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssAuthStatus"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssAuthStatusResponse(callApi(params, req, runtime));
}

DescribeOssAuthStatusResponse Alibabacloud_Xtee20210910::Client::describeOssAuthStatus(shared_ptr<DescribeOssAuthStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssAuthStatusWithOptions(request, runtime);
}

DescribeOssPolicyResponse Alibabacloud_Xtee20210910::Client::describeOssPolicyWithOptions(shared_ptr<DescribeOssPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssPolicy"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssPolicyResponse(callApi(params, req, runtime));
}

DescribeOssPolicyResponse Alibabacloud_Xtee20210910::Client::describeOssPolicy(shared_ptr<DescribeOssPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssPolicyWithOptions(request, runtime);
}

DescribeOssTokenResponse Alibabacloud_Xtee20210910::Client::describeOssTokenWithOptions(shared_ptr<DescribeOssTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadType)) {
    query->insert(pair<string, string>("uploadType", *request->uploadType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssToken"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssTokenResponse(callApi(params, req, runtime));
}

DescribeOssTokenResponse Alibabacloud_Xtee20210910::Client::describeOssToken(shared_ptr<DescribeOssTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssTokenWithOptions(request, runtime);
}

DescribeParamByEventCodesResponse Alibabacloud_Xtee20210910::Client::describeParamByEventCodesWithOptions(shared_ptr<DescribeParamByEventCodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parma)) {
    query->insert(pair<string, string>("parma", *request->parma));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParamByEventCodes"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParamByEventCodesResponse(callApi(params, req, runtime));
}

DescribeParamByEventCodesResponse Alibabacloud_Xtee20210910::Client::describeParamByEventCodes(shared_ptr<DescribeParamByEventCodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParamByEventCodesWithOptions(request, runtime);
}

DescribeParamListResponse Alibabacloud_Xtee20210910::Client::describeParamListWithOptions(shared_ptr<DescribeParamListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("serviceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeParamList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeParamListResponse(callApi(params, req, runtime));
}

DescribeParamListResponse Alibabacloud_Xtee20210910::Client::describeParamList(shared_ptr<DescribeParamListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeParamListWithOptions(request, runtime);
}

DescribePocDetailResponse Alibabacloud_Xtee20210910::Client::describePocDetailWithOptions(shared_ptr<DescribePocDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePocDetail"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePocDetailResponse(callApi(params, req, runtime));
}

DescribePocDetailResponse Alibabacloud_Xtee20210910::Client::describePocDetail(shared_ptr<DescribePocDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePocDetailWithOptions(request, runtime);
}

DescribePocOssTokenResponse Alibabacloud_Xtee20210910::Client::describePocOssTokenWithOptions(shared_ptr<DescribePocOssTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePocOssToken"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePocOssTokenResponse(callApi(params, req, runtime));
}

DescribePocOssTokenResponse Alibabacloud_Xtee20210910::Client::describePocOssToken(shared_ptr<DescribePocOssTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePocOssTokenWithOptions(request, runtime);
}

DescribePocTaskListResponse Alibabacloud_Xtee20210910::Client::describePocTaskListWithOptions(shared_ptr<DescribePocTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePocTaskList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePocTaskListResponse(callApi(params, req, runtime));
}

DescribePocTaskListResponse Alibabacloud_Xtee20210910::Client::describePocTaskList(shared_ptr<DescribePocTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePocTaskListWithOptions(request, runtime);
}

DescribePrivateStackResponse Alibabacloud_Xtee20210910::Client::describePrivateStackWithOptions(shared_ptr<DescribePrivateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePrivateStack"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePrivateStackResponse(callApi(params, req, runtime));
}

DescribePrivateStackResponse Alibabacloud_Xtee20210910::Client::describePrivateStack(shared_ptr<DescribePrivateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePrivateStackWithOptions(request, runtime);
}

DescribeQueryVariableDetailResponse Alibabacloud_Xtee20210910::Client::describeQueryVariableDetailWithOptions(shared_ptr<DescribeQueryVariableDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQueryVariableDetail"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQueryVariableDetailResponse(callApi(params, req, runtime));
}

DescribeQueryVariableDetailResponse Alibabacloud_Xtee20210910::Client::describeQueryVariableDetail(shared_ptr<DescribeQueryVariableDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQueryVariableDetailWithOptions(request, runtime);
}

DescribeQueryVariablePageListResponse Alibabacloud_Xtee20210910::Client::describeQueryVariablePageListWithOptions(shared_ptr<DescribeQueryVariablePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceCode)) {
    query->insert(pair<string, string>("dataSourceCode", *request->dataSourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQueryVariablePageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQueryVariablePageListResponse(callApi(params, req, runtime));
}

DescribeQueryVariablePageListResponse Alibabacloud_Xtee20210910::Client::describeQueryVariablePageList(shared_ptr<DescribeQueryVariablePageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQueryVariablePageListWithOptions(request, runtime);
}

DescribeRecommendSceneVariablesResponse Alibabacloud_Xtee20210910::Client::describeRecommendSceneVariablesWithOptions(shared_ptr<DescribeRecommendSceneVariablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sampleId)) {
    query->insert(pair<string, long>("sampleId", *request->sampleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecommendSceneVariables"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecommendSceneVariablesResponse(callApi(params, req, runtime));
}

DescribeRecommendSceneVariablesResponse Alibabacloud_Xtee20210910::Client::describeRecommendSceneVariables(shared_ptr<DescribeRecommendSceneVariablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecommendSceneVariablesWithOptions(request, runtime);
}

DescribeRecommendTaskDetailResponse Alibabacloud_Xtee20210910::Client::describeRecommendTaskDetailWithOptions(shared_ptr<DescribeRecommendTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecommendTaskDetail"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecommendTaskDetailResponse(callApi(params, req, runtime));
}

DescribeRecommendTaskDetailResponse Alibabacloud_Xtee20210910::Client::describeRecommendTaskDetail(shared_ptr<DescribeRecommendTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecommendTaskDetailWithOptions(request, runtime);
}

DescribeRecommendTaskPageListResponse Alibabacloud_Xtee20210910::Client::describeRecommendTaskPageListWithOptions(shared_ptr<DescribeRecommendTaskPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("taskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecommendTaskPageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecommendTaskPageListResponse(callApi(params, req, runtime));
}

DescribeRecommendTaskPageListResponse Alibabacloud_Xtee20210910::Client::describeRecommendTaskPageList(shared_ptr<DescribeRecommendTaskPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecommendTaskPageListWithOptions(request, runtime);
}

DescribeRecommendVariablesVelocityResponse Alibabacloud_Xtee20210910::Client::describeRecommendVariablesVelocityWithOptions(shared_ptr<DescribeRecommendVariablesVelocityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("taskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variableIdsStr)) {
    query->insert(pair<string, string>("variableIdsStr", *request->variableIdsStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecommendVariablesVelocity"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecommendVariablesVelocityResponse(callApi(params, req, runtime));
}

DescribeRecommendVariablesVelocityResponse Alibabacloud_Xtee20210910::Client::describeRecommendVariablesVelocity(shared_ptr<DescribeRecommendVariablesVelocityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecommendVariablesVelocityWithOptions(request, runtime);
}

DescribeRecommendVelocitiesResponse Alibabacloud_Xtee20210910::Client::describeRecommendVelocitiesWithOptions(shared_ptr<DescribeRecommendVelocitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecommendVelocities"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecommendVelocitiesResponse(callApi(params, req, runtime));
}

DescribeRecommendVelocitiesResponse Alibabacloud_Xtee20210910::Client::describeRecommendVelocities(shared_ptr<DescribeRecommendVelocitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecommendVelocitiesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Xtee20210910::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Xtee20210910::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRequestHitResponse Alibabacloud_Xtee20210910::Client::describeRequestHitWithOptions(shared_ptr<DescribeRequestHitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sRequestId)) {
    query->insert(pair<string, string>("sRequestId", *request->sRequestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRequestHit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRequestHitResponse(callApi(params, req, runtime));
}

DescribeRequestHitResponse Alibabacloud_Xtee20210910::Client::describeRequestHit(shared_ptr<DescribeRequestHitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRequestHitWithOptions(request, runtime);
}

DescribeRequestPeakReportResponse Alibabacloud_Xtee20210910::Client::describeRequestPeakReportWithOptions(shared_ptr<DescribeRequestPeakReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRequestPeakReport"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRequestPeakReportResponse(callApi(params, req, runtime));
}

DescribeRequestPeakReportResponse Alibabacloud_Xtee20210910::Client::describeRequestPeakReport(shared_ptr<DescribeRequestPeakReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRequestPeakReportWithOptions(request, runtime);
}

DescribeResultCountResponse Alibabacloud_Xtee20210910::Client::describeResultCountWithOptions(shared_ptr<DescribeResultCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResultCount"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResultCountResponse(callApi(params, req, runtime));
}

DescribeResultCountResponse Alibabacloud_Xtee20210910::Client::describeResultCount(shared_ptr<DescribeResultCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResultCountWithOptions(request, runtime);
}

DescribeRiskLineChartResponse Alibabacloud_Xtee20210910::Client::describeRiskLineChartWithOptions(shared_ptr<DescribeRiskLineChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskLineChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskLineChartResponse(callApi(params, req, runtime));
}

DescribeRiskLineChartResponse Alibabacloud_Xtee20210910::Client::describeRiskLineChart(shared_ptr<DescribeRiskLineChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskLineChartWithOptions(request, runtime);
}

DescribeRuleBarChartResponse Alibabacloud_Xtee20210910::Client::describeRuleBarChartWithOptions(shared_ptr<DescribeRuleBarChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleBarChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleBarChartResponse(callApi(params, req, runtime));
}

DescribeRuleBarChartResponse Alibabacloud_Xtee20210910::Client::describeRuleBarChart(shared_ptr<DescribeRuleBarChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleBarChartWithOptions(request, runtime);
}

DescribeRuleCountByUserIdResponse Alibabacloud_Xtee20210910::Client::describeRuleCountByUserIdWithOptions(shared_ptr<DescribeRuleCountByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleCountByUserId"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleCountByUserIdResponse(callApi(params, req, runtime));
}

DescribeRuleCountByUserIdResponse Alibabacloud_Xtee20210910::Client::describeRuleCountByUserId(shared_ptr<DescribeRuleCountByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleCountByUserIdWithOptions(request, runtime);
}

DescribeRuleDetailByRuleIdResponse Alibabacloud_Xtee20210910::Client::describeRuleDetailByRuleIdWithOptions(shared_ptr<DescribeRuleDetailByRuleIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleVersionId)) {
    query->insert(pair<string, long>("ruleVersionId", *request->ruleVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleDetailByRuleId"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleDetailByRuleIdResponse(callApi(params, req, runtime));
}

DescribeRuleDetailByRuleIdResponse Alibabacloud_Xtee20210910::Client::describeRuleDetailByRuleId(shared_ptr<DescribeRuleDetailByRuleIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleDetailByRuleIdWithOptions(request, runtime);
}

DescribeRuleHitResponse Alibabacloud_Xtee20210910::Client::describeRuleHitWithOptions(shared_ptr<DescribeRuleHitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleSnapshotId)) {
    query->insert(pair<string, string>("ruleSnapshotId", *request->ruleSnapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sRequestId)) {
    query->insert(pair<string, string>("sRequestId", *request->sRequestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleHit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleHitResponse(callApi(params, req, runtime));
}

DescribeRuleHitResponse Alibabacloud_Xtee20210910::Client::describeRuleHit(shared_ptr<DescribeRuleHitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleHitWithOptions(request, runtime);
}

DescribeRuleListByEventCodesListResponse Alibabacloud_Xtee20210910::Client::describeRuleListByEventCodesListWithOptions(shared_ptr<DescribeRuleListByEventCodesListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleListByEventCodesList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleListByEventCodesListResponse(callApi(params, req, runtime));
}

DescribeRuleListByEventCodesListResponse Alibabacloud_Xtee20210910::Client::describeRuleListByEventCodesList(shared_ptr<DescribeRuleListByEventCodesListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleListByEventCodesListWithOptions(request, runtime);
}

DescribeRulePageListResponse Alibabacloud_Xtee20210910::Client::describeRulePageListWithOptions(shared_ptr<DescribeRulePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleAuthType)) {
    query->insert(pair<string, string>("ruleAuthType", *request->ruleAuthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    query->insert(pair<string, string>("ruleStatus", *request->ruleStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRulePageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRulePageListResponse(callApi(params, req, runtime));
}

DescribeRulePageListResponse Alibabacloud_Xtee20210910::Client::describeRulePageList(shared_ptr<DescribeRulePageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRulePageListWithOptions(request, runtime);
}

DescribeRuleSnapshotResponse Alibabacloud_Xtee20210910::Client::describeRuleSnapshotWithOptions(shared_ptr<DescribeRuleSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotVersion)) {
    query->insert(pair<string, string>("snapshotVersion", *request->snapshotVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleSnapshot"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleSnapshotResponse(callApi(params, req, runtime));
}

DescribeRuleSnapshotResponse Alibabacloud_Xtee20210910::Client::describeRuleSnapshot(shared_ptr<DescribeRuleSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleSnapshotWithOptions(request, runtime);
}

DescribeRuleVersionListResponse Alibabacloud_Xtee20210910::Client::describeRuleVersionListWithOptions(shared_ptr<DescribeRuleVersionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRuleVersionList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRuleVersionListResponse(callApi(params, req, runtime));
}

DescribeRuleVersionListResponse Alibabacloud_Xtee20210910::Client::describeRuleVersionList(shared_ptr<DescribeRuleVersionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRuleVersionListWithOptions(request, runtime);
}

DescribeSDKDownloadListResponse Alibabacloud_Xtee20210910::Client::describeSDKDownloadListWithOptions(shared_ptr<DescribeSDKDownloadListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    query->insert(pair<string, string>("deviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listType)) {
    query->insert(pair<string, string>("listType", *request->listType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSDKDownloadList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSDKDownloadListResponse(callApi(params, req, runtime));
}

DescribeSDKDownloadListResponse Alibabacloud_Xtee20210910::Client::describeSDKDownloadList(shared_ptr<DescribeSDKDownloadListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSDKDownloadListWithOptions(request, runtime);
}

DescribeSafConsoleResponse Alibabacloud_Xtee20210910::Client::describeSafConsoleWithOptions(shared_ptr<DescribeSafConsoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("service", *request->service));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSafConsole"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSafConsoleResponse(callApi(params, req, runtime));
}

DescribeSafConsoleResponse Alibabacloud_Xtee20210910::Client::describeSafConsole(shared_ptr<DescribeSafConsoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSafConsoleWithOptions(request, runtime);
}

DescribeSafDeOrderResponse Alibabacloud_Xtee20210910::Client::describeSafDeOrderWithOptions(shared_ptr<DescribeSafDeOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("startDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSafDeOrder"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSafDeOrderResponse(callApi(params, req, runtime));
}

DescribeSafDeOrderResponse Alibabacloud_Xtee20210910::Client::describeSafDeOrder(shared_ptr<DescribeSafDeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSafDeOrderWithOptions(request, runtime);
}

DescribeSafOrderResponse Alibabacloud_Xtee20210910::Client::describeSafOrderWithOptions(shared_ptr<DescribeSafOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exactProductCode)) {
    query->insert(pair<string, string>("exactProductCode", *request->exactProductCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("startDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSafOrder"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSafOrderResponse(callApi(params, req, runtime));
}

DescribeSafOrderResponse Alibabacloud_Xtee20210910::Client::describeSafOrder(shared_ptr<DescribeSafOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSafOrderWithOptions(request, runtime);
}

DescribeSafStartConfigResponse Alibabacloud_Xtee20210910::Client::describeSafStartConfigWithOptions(shared_ptr<DescribeSafStartConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSafStartConfig"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSafStartConfigResponse(callApi(params, req, runtime));
}

DescribeSafStartConfigResponse Alibabacloud_Xtee20210910::Client::describeSafStartConfig(shared_ptr<DescribeSafStartConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSafStartConfigWithOptions(request, runtime);
}

DescribeSafStartStepsResponse Alibabacloud_Xtee20210910::Client::describeSafStartStepsWithOptions(shared_ptr<DescribeSafStartStepsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->aliyunServer)) {
    query->insert(pair<string, bool>("aliyunServer", *request->aliyunServer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceTypesStr)) {
    query->insert(pair<string, string>("deviceTypesStr", *request->deviceTypesStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverRegion)) {
    query->insert(pair<string, string>("serverRegion", *request->serverRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSafStartSteps"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSafStartStepsResponse(callApi(params, req, runtime));
}

DescribeSafStartStepsResponse Alibabacloud_Xtee20210910::Client::describeSafStartSteps(shared_ptr<DescribeSafStartStepsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSafStartStepsWithOptions(request, runtime);
}

DescribeSafTagListResponse Alibabacloud_Xtee20210910::Client::describeSafTagListWithOptions(shared_ptr<DescribeSafTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("apiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSafTagList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSafTagListResponse(callApi(params, req, runtime));
}

DescribeSafTagListResponse Alibabacloud_Xtee20210910::Client::describeSafTagList(shared_ptr<DescribeSafTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSafTagListWithOptions(request, runtime);
}

DescribeSampleDataListResponse Alibabacloud_Xtee20210910::Client::describeSampleDataListWithOptions(shared_ptr<DescribeSampleDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteTag)) {
    query->insert(pair<string, string>("deleteTag", *request->deleteTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryContent)) {
    query->insert(pair<string, string>("queryContent", *request->queryContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sampleId)) {
    query->insert(pair<string, long>("sampleId", *request->sampleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleDataList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleDataListResponse(callApi(params, req, runtime));
}

DescribeSampleDataListResponse Alibabacloud_Xtee20210910::Client::describeSampleDataList(shared_ptr<DescribeSampleDataListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleDataListWithOptions(request, runtime);
}

DescribeSampleDemoDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeSampleDemoDownloadUrlWithOptions(shared_ptr<DescribeSampleDemoDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleDemoDownloadUrl"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleDemoDownloadUrlResponse(callApi(params, req, runtime));
}

DescribeSampleDemoDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeSampleDemoDownloadUrl(shared_ptr<DescribeSampleDemoDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleDemoDownloadUrlWithOptions(request, runtime);
}

DescribeSampleDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeSampleDownloadUrlWithOptions(shared_ptr<DescribeSampleDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sampleId)) {
    query->insert(pair<string, long>("sampleId", *request->sampleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleDownloadUrl"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleDownloadUrlResponse(callApi(params, req, runtime));
}

DescribeSampleDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeSampleDownloadUrl(shared_ptr<DescribeSampleDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleDownloadUrlWithOptions(request, runtime);
}

DescribeSampleInfoResponse Alibabacloud_Xtee20210910::Client::describeSampleInfoWithOptions(shared_ptr<DescribeSampleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->versions)) {
    query->insert(pair<string, long>("versions", *request->versions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleInfo"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleInfoResponse(callApi(params, req, runtime));
}

DescribeSampleInfoResponse Alibabacloud_Xtee20210910::Client::describeSampleInfo(shared_ptr<DescribeSampleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleInfoWithOptions(request, runtime);
}

DescribeSampleListResponse Alibabacloud_Xtee20210910::Client::describeSampleListWithOptions(shared_ptr<DescribeSampleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleType)) {
    query->insert(pair<string, string>("sampleType", *request->sampleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleValue)) {
    query->insert(pair<string, string>("sampleValue", *request->sampleValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleListResponse(callApi(params, req, runtime));
}

DescribeSampleListResponse Alibabacloud_Xtee20210910::Client::describeSampleList(shared_ptr<DescribeSampleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleListWithOptions(request, runtime);
}

DescribeSampleSceneListResponse Alibabacloud_Xtee20210910::Client::describeSampleSceneListWithOptions(shared_ptr<DescribeSampleSceneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleSceneList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleSceneListResponse(callApi(params, req, runtime));
}

DescribeSampleSceneListResponse Alibabacloud_Xtee20210910::Client::describeSampleSceneList(shared_ptr<DescribeSampleSceneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleSceneListWithOptions(request, runtime);
}

DescribeSampleTagListResponse Alibabacloud_Xtee20210910::Client::describeSampleTagListWithOptions(shared_ptr<DescribeSampleTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleTagList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleTagListResponse(callApi(params, req, runtime));
}

DescribeSampleTagListResponse Alibabacloud_Xtee20210910::Client::describeSampleTagList(shared_ptr<DescribeSampleTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleTagListWithOptions(request, runtime);
}

DescribeSampleUploadPolicyResponse Alibabacloud_Xtee20210910::Client::describeSampleUploadPolicyWithOptions(shared_ptr<DescribeSampleUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSampleUploadPolicy"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSampleUploadPolicyResponse(callApi(params, req, runtime));
}

DescribeSampleUploadPolicyResponse Alibabacloud_Xtee20210910::Client::describeSampleUploadPolicy(shared_ptr<DescribeSampleUploadPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSampleUploadPolicyWithOptions(request, runtime);
}

DescribeSceneAllEventNameCodeListResponse Alibabacloud_Xtee20210910::Client::describeSceneAllEventNameCodeListWithOptions(shared_ptr<DescribeSceneAllEventNameCodeListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneAllEventNameCodeList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneAllEventNameCodeListResponse(callApi(params, req, runtime));
}

DescribeSceneAllEventNameCodeListResponse Alibabacloud_Xtee20210910::Client::describeSceneAllEventNameCodeList(shared_ptr<DescribeSceneAllEventNameCodeListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneAllEventNameCodeListWithOptions(request, runtime);
}

DescribeSceneEventPageListResponse Alibabacloud_Xtee20210910::Client::describeSceneEventPageListWithOptions(shared_ptr<DescribeSceneEventPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameOrCode)) {
    query->insert(pair<string, string>("nameOrCode", *request->nameOrCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneEventPageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneEventPageListResponse(callApi(params, req, runtime));
}

DescribeSceneEventPageListResponse Alibabacloud_Xtee20210910::Client::describeSceneEventPageList(shared_ptr<DescribeSceneEventPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneEventPageListWithOptions(request, runtime);
}

DescribeSceneRulePageListResponse Alibabacloud_Xtee20210910::Client::describeSceneRulePageListWithOptions(shared_ptr<DescribeSceneRulePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleAuthType)) {
    query->insert(pair<string, string>("ruleAuthType", *request->ruleAuthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    query->insert(pair<string, string>("ruleStatus", *request->ruleStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneRulePageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneRulePageListResponse(callApi(params, req, runtime));
}

DescribeSceneRulePageListResponse Alibabacloud_Xtee20210910::Client::describeSceneRulePageList(shared_ptr<DescribeSceneRulePageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneRulePageListWithOptions(request, runtime);
}

DescribeScoreSectionNumLineChartResponse Alibabacloud_Xtee20210910::Client::describeScoreSectionNumLineChartWithOptions(shared_ptr<DescribeScoreSectionNumLineChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTime)) {
    query->insert(pair<string, string>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->byPassEventCodes)) {
    query->insert(pair<string, string>("byPassEventCodes", *request->byPassEventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainEventCodes)) {
    query->insert(pair<string, string>("mainEventCodes", *request->mainEventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shuntEventCodes)) {
    query->insert(pair<string, string>("shuntEventCodes", *request->shuntEventCodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScoreSectionNumLineChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScoreSectionNumLineChartResponse(callApi(params, req, runtime));
}

DescribeScoreSectionNumLineChartResponse Alibabacloud_Xtee20210910::Client::describeScoreSectionNumLineChart(shared_ptr<DescribeScoreSectionNumLineChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScoreSectionNumLineChartWithOptions(request, runtime);
}

DescribeScoreSectionPieChartResponse Alibabacloud_Xtee20210910::Client::describeScoreSectionPieChartWithOptions(shared_ptr<DescribeScoreSectionPieChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("eventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScoreSectionPieChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScoreSectionPieChartResponse(callApi(params, req, runtime));
}

DescribeScoreSectionPieChartResponse Alibabacloud_Xtee20210910::Client::describeScoreSectionPieChart(shared_ptr<DescribeScoreSectionPieChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScoreSectionPieChartWithOptions(request, runtime);
}

DescribeScoreSectionRatioLineChartResponse Alibabacloud_Xtee20210910::Client::describeScoreSectionRatioLineChartWithOptions(shared_ptr<DescribeScoreSectionRatioLineChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTime)) {
    query->insert(pair<string, string>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->byPassEventCodes)) {
    query->insert(pair<string, string>("byPassEventCodes", *request->byPassEventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainEventCodes)) {
    query->insert(pair<string, string>("mainEventCodes", *request->mainEventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shuntEventCodes)) {
    query->insert(pair<string, string>("shuntEventCodes", *request->shuntEventCodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScoreSectionRatioLineChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScoreSectionRatioLineChartResponse(callApi(params, req, runtime));
}

DescribeScoreSectionRatioLineChartResponse Alibabacloud_Xtee20210910::Client::describeScoreSectionRatioLineChart(shared_ptr<DescribeScoreSectionRatioLineChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScoreSectionRatioLineChartWithOptions(request, runtime);
}

DescribeSelectItemResponse Alibabacloud_Xtee20210910::Client::describeSelectItemWithOptions(shared_ptr<DescribeSelectItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSelectItem"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSelectItemResponse(callApi(params, req, runtime));
}

DescribeSelectItemResponse Alibabacloud_Xtee20210910::Client::describeSelectItem(shared_ptr<DescribeSelectItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSelectItemWithOptions(request, runtime);
}

DescribeServiceAppKeyResponse Alibabacloud_Xtee20210910::Client::describeServiceAppKeyWithOptions(shared_ptr<DescribeServiceAppKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceAppKey"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceAppKeyResponse(callApi(params, req, runtime));
}

DescribeServiceAppKeyResponse Alibabacloud_Xtee20210910::Client::describeServiceAppKey(shared_ptr<DescribeServiceAppKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceAppKeyWithOptions(request, runtime);
}

DescribeServiceConsumeResponse Alibabacloud_Xtee20210910::Client::describeServiceConsumeWithOptions(shared_ptr<DescribeServiceConsumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("serviceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("startDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceConsume"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceConsumeResponse(callApi(params, req, runtime));
}

DescribeServiceConsumeResponse Alibabacloud_Xtee20210910::Client::describeServiceConsume(shared_ptr<DescribeServiceConsumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceConsumeWithOptions(request, runtime);
}

DescribeServiceConsumeDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeServiceConsumeDownloadUrlWithOptions(shared_ptr<DescribeServiceConsumeDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("serviceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("startDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceConsumeDownloadUrl"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceConsumeDownloadUrlResponse(callApi(params, req, runtime));
}

DescribeServiceConsumeDownloadUrlResponse Alibabacloud_Xtee20210910::Client::describeServiceConsumeDownloadUrl(shared_ptr<DescribeServiceConsumeDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceConsumeDownloadUrlWithOptions(request, runtime);
}

DescribeServiceListResponse Alibabacloud_Xtee20210910::Client::describeServiceListWithOptions(shared_ptr<DescribeServiceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceListResponse(callApi(params, req, runtime));
}

DescribeServiceListResponse Alibabacloud_Xtee20210910::Client::describeServiceList(shared_ptr<DescribeServiceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceListWithOptions(request, runtime);
}

DescribeSimulationPreditInfoResponse Alibabacloud_Xtee20210910::Client::describeSimulationPreditInfoWithOptions(shared_ptr<DescribeSimulationPreditInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesStr)) {
    query->insert(pair<string, string>("rulesStr", *request->rulesStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSimulationPreditInfo"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSimulationPreditInfoResponse(callApi(params, req, runtime));
}

DescribeSimulationPreditInfoResponse Alibabacloud_Xtee20210910::Client::describeSimulationPreditInfo(shared_ptr<DescribeSimulationPreditInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSimulationPreditInfoWithOptions(request, runtime);
}

DescribeSimulationTaskCountResponse Alibabacloud_Xtee20210910::Client::describeSimulationTaskCountWithOptions(shared_ptr<DescribeSimulationTaskCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceConfig)) {
    query->insert(pair<string, string>("dataSourceConfig", *request->dataSourceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("dataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filtersStr)) {
    query->insert(pair<string, string>("filtersStr", *request->filtersStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSimulationTaskCount"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSimulationTaskCountResponse(callApi(params, req, runtime));
}

DescribeSimulationTaskCountResponse Alibabacloud_Xtee20210910::Client::describeSimulationTaskCount(shared_ptr<DescribeSimulationTaskCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSimulationTaskCountWithOptions(request, runtime);
}

DescribeSimulationTaskListResponse Alibabacloud_Xtee20210910::Client::describeSimulationTaskListWithOptions(shared_ptr<DescribeSimulationTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSimulationTaskList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSimulationTaskListResponse(callApi(params, req, runtime));
}

DescribeSimulationTaskListResponse Alibabacloud_Xtee20210910::Client::describeSimulationTaskList(shared_ptr<DescribeSimulationTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSimulationTaskListWithOptions(request, runtime);
}

DescribeSlsUrlConfigResponse Alibabacloud_Xtee20210910::Client::describeSlsUrlConfigWithOptions(shared_ptr<DescribeSlsUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSlsUrlConfig"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSlsUrlConfigResponse(callApi(params, req, runtime));
}

DescribeSlsUrlConfigResponse Alibabacloud_Xtee20210910::Client::describeSlsUrlConfig(shared_ptr<DescribeSlsUrlConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSlsUrlConfigWithOptions(request, runtime);
}

DescribeSupportRuleListResponse Alibabacloud_Xtee20210910::Client::describeSupportRuleListWithOptions(shared_ptr<DescribeSupportRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSupportRuleList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSupportRuleListResponse(callApi(params, req, runtime));
}

DescribeSupportRuleListResponse Alibabacloud_Xtee20210910::Client::describeSupportRuleList(shared_ptr<DescribeSupportRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSupportRuleListWithOptions(request, runtime);
}

DescribeTagListResponse Alibabacloud_Xtee20210910::Client::describeTagListWithOptions(shared_ptr<DescribeTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("RegId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagListResponse(callApi(params, req, runtime));
}

DescribeTagListResponse Alibabacloud_Xtee20210910::Client::describeTagList(shared_ptr<DescribeTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagListWithOptions(request, runtime);
}

DescribeTagsBarChartResponse Alibabacloud_Xtee20210910::Client::describeTagsBarChartWithOptions(shared_ptr<DescribeTagsBarChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->result)) {
    query->insert(pair<string, string>("result", *request->result));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagsBarChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagsBarChartResponse(callApi(params, req, runtime));
}

DescribeTagsBarChartResponse Alibabacloud_Xtee20210910::Client::describeTagsBarChart(shared_ptr<DescribeTagsBarChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsBarChartWithOptions(request, runtime);
}

DescribeTagsFluctuationResponse Alibabacloud_Xtee20210910::Client::describeTagsFluctuationWithOptions(shared_ptr<DescribeTagsFluctuationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagsFluctuation"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagsFluctuationResponse(callApi(params, req, runtime));
}

DescribeTagsFluctuationResponse Alibabacloud_Xtee20210910::Client::describeTagsFluctuation(shared_ptr<DescribeTagsFluctuationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsFluctuationWithOptions(request, runtime);
}

DescribeTagsListResponse Alibabacloud_Xtee20210910::Client::describeTagsListWithOptions(shared_ptr<DescribeTagsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagsList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagsListResponse(callApi(params, req, runtime));
}

DescribeTagsListResponse Alibabacloud_Xtee20210910::Client::describeTagsList(shared_ptr<DescribeTagsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsListWithOptions(request, runtime);
}

DescribeTagsNumLineChartResponse Alibabacloud_Xtee20210910::Client::describeTagsNumLineChartWithOptions(shared_ptr<DescribeTagsNumLineChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTime)) {
    query->insert(pair<string, string>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->byPassEventCodes)) {
    query->insert(pair<string, string>("byPassEventCodes", *request->byPassEventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainEventCodes)) {
    query->insert(pair<string, string>("mainEventCodes", *request->mainEventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shuntEventCodes)) {
    query->insert(pair<string, string>("shuntEventCodes", *request->shuntEventCodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagsNumLineChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagsNumLineChartResponse(callApi(params, req, runtime));
}

DescribeTagsNumLineChartResponse Alibabacloud_Xtee20210910::Client::describeTagsNumLineChart(shared_ptr<DescribeTagsNumLineChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsNumLineChartWithOptions(request, runtime);
}

DescribeTagsRatioLineChartResponse Alibabacloud_Xtee20210910::Client::describeTagsRatioLineChartWithOptions(shared_ptr<DescribeTagsRatioLineChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->byPassEventCodes)) {
    query->insert(pair<string, string>("byPassEventCodes", *request->byPassEventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainEventCodes)) {
    query->insert(pair<string, string>("mainEventCodes", *request->mainEventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shuntEventCodes)) {
    query->insert(pair<string, string>("shuntEventCodes", *request->shuntEventCodes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagsRatioLineChart"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagsRatioLineChartResponse(callApi(params, req, runtime));
}

DescribeTagsRatioLineChartResponse Alibabacloud_Xtee20210910::Client::describeTagsRatioLineChart(shared_ptr<DescribeTagsRatioLineChartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsRatioLineChartWithOptions(request, runtime);
}

DescribeTagsTrendResponse Alibabacloud_Xtee20210910::Client::describeTagsTrendWithOptions(shared_ptr<DescribeTagsTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->result)) {
    query->insert(pair<string, string>("result", *request->result));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagsTrend"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagsTrendResponse(callApi(params, req, runtime));
}

DescribeTagsTrendResponse Alibabacloud_Xtee20210910::Client::describeTagsTrend(shared_ptr<DescribeTagsTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsTrendWithOptions(request, runtime);
}

DescribeTaskListResponse Alibabacloud_Xtee20210910::Client::describeTaskListWithOptions(shared_ptr<DescribeTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isPage)) {
    query->insert(pair<string, bool>("IsPage", *request->isPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTaskList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTaskListResponse(callApi(params, req, runtime));
}

DescribeTaskListResponse Alibabacloud_Xtee20210910::Client::describeTaskList(shared_ptr<DescribeTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTaskListWithOptions(request, runtime);
}

DescribeTaskLogListResponse Alibabacloud_Xtee20210910::Client::describeTaskLogListWithOptions(shared_ptr<DescribeTaskLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isPage)) {
    query->insert(pair<string, bool>("IsPage", *request->isPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskLogId)) {
    query->insert(pair<string, string>("TaskLogId", *request->taskLogId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTaskLogList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTaskLogListResponse(callApi(params, req, runtime));
}

DescribeTaskLogListResponse Alibabacloud_Xtee20210910::Client::describeTaskLogList(shared_ptr<DescribeTaskLogListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTaskLogListWithOptions(request, runtime);
}

DescribeTemplateBaseInfoByTemplateIdResponse Alibabacloud_Xtee20210910::Client::describeTemplateBaseInfoByTemplateIdWithOptions(shared_ptr<DescribeTemplateBaseInfoByTemplateIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("templateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplateBaseInfoByTemplateId"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplateBaseInfoByTemplateIdResponse(callApi(params, req, runtime));
}

DescribeTemplateBaseInfoByTemplateIdResponse Alibabacloud_Xtee20210910::Client::describeTemplateBaseInfoByTemplateId(shared_ptr<DescribeTemplateBaseInfoByTemplateIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplateBaseInfoByTemplateIdWithOptions(request, runtime);
}

DescribeTemplateCountResponse Alibabacloud_Xtee20210910::Client::describeTemplateCountWithOptions(shared_ptr<DescribeTemplateCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplateCount"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplateCountResponse(callApi(params, req, runtime));
}

DescribeTemplateCountResponse Alibabacloud_Xtee20210910::Client::describeTemplateCount(shared_ptr<DescribeTemplateCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplateCountWithOptions(request, runtime);
}

DescribeTemplateDownloadResponse Alibabacloud_Xtee20210910::Client::describeTemplateDownloadWithOptions(shared_ptr<DescribeTemplateDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplateDownload"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplateDownloadResponse(callApi(params, req, runtime));
}

DescribeTemplateDownloadResponse Alibabacloud_Xtee20210910::Client::describeTemplateDownload(shared_ptr<DescribeTemplateDownloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplateDownloadWithOptions(request, runtime);
}

DescribeTemplatePageListResponse Alibabacloud_Xtee20210910::Client::describeTemplatePageListWithOptions(shared_ptr<DescribeTemplatePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("templateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateSearchItem)) {
    query->insert(pair<string, string>("templateSearchItem", *request->templateSearchItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateStatus)) {
    query->insert(pair<string, string>("templateStatus", *request->templateStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("templateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplatePageList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplatePageListResponse(callApi(params, req, runtime));
}

DescribeTemplatePageListResponse Alibabacloud_Xtee20210910::Client::describeTemplatePageList(shared_ptr<DescribeTemplatePageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplatePageListWithOptions(request, runtime);
}

DescribeUsedServiceResponse Alibabacloud_Xtee20210910::Client::describeUsedServiceWithOptions(shared_ptr<DescribeUsedServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsedService"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsedServiceResponse(callApi(params, req, runtime));
}

DescribeUsedServiceResponse Alibabacloud_Xtee20210910::Client::describeUsedService(shared_ptr<DescribeUsedServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsedServiceWithOptions(request, runtime);
}

DescribeUserInfoResponse Alibabacloud_Xtee20210910::Client::describeUserInfoWithOptions(shared_ptr<DescribeUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserInfo"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserInfoResponse(callApi(params, req, runtime));
}

DescribeUserInfoResponse Alibabacloud_Xtee20210910::Client::describeUserInfo(shared_ptr<DescribeUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserInfoWithOptions(request, runtime);
}

DescribeVariableBindDetailResponse Alibabacloud_Xtee20210910::Client::describeVariableBindDetailWithOptions(shared_ptr<DescribeVariableBindDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->defineId)) {
    query->insert(pair<string, long>("defineId", *request->defineId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVariableBindDetail"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVariableBindDetailResponse(callApi(params, req, runtime));
}

DescribeVariableBindDetailResponse Alibabacloud_Xtee20210910::Client::describeVariableBindDetail(shared_ptr<DescribeVariableBindDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVariableBindDetailWithOptions(request, runtime);
}

DescribeVariableDetailResponse Alibabacloud_Xtee20210910::Client::describeVariableDetailWithOptions(shared_ptr<DescribeVariableDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVariableDetail"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVariableDetailResponse(callApi(params, req, runtime));
}

DescribeVariableDetailResponse Alibabacloud_Xtee20210910::Client::describeVariableDetail(shared_ptr<DescribeVariableDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVariableDetailWithOptions(request, runtime);
}

DescribeVariableFeeResponse Alibabacloud_Xtee20210910::Client::describeVariableFeeWithOptions(shared_ptr<DescribeVariableFeeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->ids)) {
    query->insert(pair<string, vector<long>>("ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVariableFee"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVariableFeeResponse(callApi(params, req, runtime));
}

DescribeVariableFeeResponse Alibabacloud_Xtee20210910::Client::describeVariableFee(shared_ptr<DescribeVariableFeeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVariableFeeWithOptions(request, runtime);
}

DescribeVariableListResponse Alibabacloud_Xtee20210910::Client::describeVariableListWithOptions(shared_ptr<DescribeVariableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refObjId)) {
    query->insert(pair<string, string>("refObjId", *request->refObjId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typesStr)) {
    query->insert(pair<string, string>("typesStr", *request->typesStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVariableList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVariableListResponse(callApi(params, req, runtime));
}

DescribeVariableListResponse Alibabacloud_Xtee20210910::Client::describeVariableList(shared_ptr<DescribeVariableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVariableListWithOptions(request, runtime);
}

DescribeVariableMarketListResponse Alibabacloud_Xtee20210910::Client::describeVariableMarketListWithOptions(shared_ptr<DescribeVariableMarketListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargingMode)) {
    query->insert(pair<string, string>("chargingMode", *request->chargingMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paging)) {
    query->insert(pair<string, string>("paging", *request->paging));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryContent)) {
    query->insert(pair<string, string>("queryContent", *request->queryContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenesStr)) {
    query->insert(pair<string, string>("scenesStr", *request->scenesStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVariableMarketList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVariableMarketListResponse(callApi(params, req, runtime));
}

DescribeVariableMarketListResponse Alibabacloud_Xtee20210910::Client::describeVariableMarketList(shared_ptr<DescribeVariableMarketListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVariableMarketListWithOptions(request, runtime);
}

DescribeVariableSceneListResponse Alibabacloud_Xtee20210910::Client::describeVariableSceneListWithOptions(shared_ptr<DescribeVariableSceneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("bizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configKey)) {
    query->insert(pair<string, string>("configKey", *request->configKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("currentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->paging)) {
    query->insert(pair<string, bool>("paging", *request->paging));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVariableSceneList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVariableSceneListResponse(callApi(params, req, runtime));
}

DescribeVariableSceneListResponse Alibabacloud_Xtee20210910::Client::describeVariableSceneList(shared_ptr<DescribeVariableSceneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVariableSceneListWithOptions(request, runtime);
}

ExpressionTestResponse Alibabacloud_Xtee20210910::Client::expressionTestWithOptions(shared_ptr<ExpressionTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionVariable)) {
    query->insert(pair<string, string>("expressionVariable", *request->expressionVariable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionVariableIds)) {
    query->insert(pair<string, string>("expressionVariableIds", *request->expressionVariableIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExpressionTest"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExpressionTestResponse(callApi(params, req, runtime));
}

ExpressionTestResponse Alibabacloud_Xtee20210910::Client::expressionTest(shared_ptr<ExpressionTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return expressionTestWithOptions(request, runtime);
}

FileUploadResponse Alibabacloud_Xtee20210910::Client::fileUploadWithOptions(shared_ptr<FileUploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tab)) {
    query->insert(pair<string, string>("Tab", *request->tab));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FileUpload"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FileUploadResponse(callApi(params, req, runtime));
}

FileUploadResponse Alibabacloud_Xtee20210910::Client::fileUpload(shared_ptr<FileUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fileUploadWithOptions(request, runtime);
}

ImportNameListResponse Alibabacloud_Xtee20210910::Client::importNameListWithOptions(shared_ptr<ImportNameListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importType)) {
    query->insert(pair<string, string>("importType", *request->importType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameListType)) {
    query->insert(pair<string, string>("nameListType", *request->nameListType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->variableId)) {
    query->insert(pair<string, long>("variableId", *request->variableId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportNameList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportNameListResponse(callApi(params, req, runtime));
}

ImportNameListResponse Alibabacloud_Xtee20210910::Client::importNameList(shared_ptr<ImportNameListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importNameListWithOptions(request, runtime);
}

ImportTemplateEventResponse Alibabacloud_Xtee20210910::Client::importTemplateEventWithOptions(shared_ptr<ImportTemplateEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTemplateIds)) {
    query->insert(pair<string, string>("eventTemplateIds", *request->eventTemplateIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportTemplateEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportTemplateEventResponse(callApi(params, req, runtime));
}

ImportTemplateEventResponse Alibabacloud_Xtee20210910::Client::importTemplateEvent(shared_ptr<ImportTemplateEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importTemplateEventWithOptions(request, runtime);
}

ModifyAppKeyResponse Alibabacloud_Xtee20210910::Client::modifyAppKeyWithOptions(shared_ptr<ModifyAppKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("appKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppKey"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppKeyResponse(callApi(params, req, runtime));
}

ModifyAppKeyResponse Alibabacloud_Xtee20210910::Client::modifyAppKey(shared_ptr<ModifyAppKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppKeyWithOptions(request, runtime);
}

ModifyCustVariableResponse Alibabacloud_Xtee20210910::Client::modifyCustVariableWithOptions(shared_ptr<ModifyCustVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataVersion)) {
    query->insert(pair<string, long>("dataVersion", *request->dataVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCodes)) {
    query->insert(pair<string, string>("eventCodes", *request->eventCodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    query->insert(pair<string, string>("outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCustVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCustVariableResponse(callApi(params, req, runtime));
}

ModifyCustVariableResponse Alibabacloud_Xtee20210910::Client::modifyCustVariable(shared_ptr<ModifyCustVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCustVariableWithOptions(request, runtime);
}

ModifyEventResponse Alibabacloud_Xtee20210910::Client::modifyEventWithOptions(shared_ptr<ModifyEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizVersion)) {
    query->insert(pair<string, long>("bizVersion", *request->bizVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputFieldsStr)) {
    query->insert(pair<string, string>("inputFieldsStr", *request->inputFieldsStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("templateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyEventResponse(callApi(params, req, runtime));
}

ModifyEventResponse Alibabacloud_Xtee20210910::Client::modifyEvent(shared_ptr<ModifyEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEventWithOptions(request, runtime);
}

ModifyEventStatusResponse Alibabacloud_Xtee20210910::Client::modifyEventStatusWithOptions(shared_ptr<ModifyEventStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromEventSatus)) {
    query->insert(pair<string, string>("fromEventSatus", *request->fromEventSatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toEventSatus)) {
    query->insert(pair<string, string>("toEventSatus", *request->toEventSatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEventStatus"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyEventStatusResponse(callApi(params, req, runtime));
}

ModifyEventStatusResponse Alibabacloud_Xtee20210910::Client::modifyEventStatus(shared_ptr<ModifyEventStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEventStatusWithOptions(request, runtime);
}

ModifyExpressionVariableResponse Alibabacloud_Xtee20210910::Client::modifyExpressionVariableWithOptions(shared_ptr<ModifyExpressionVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataVersion)) {
    query->insert(pair<string, long>("dataVersion", *request->dataVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionTitle)) {
    query->insert(pair<string, string>("expressionTitle", *request->expressionTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionVariable)) {
    query->insert(pair<string, string>("expressionVariable", *request->expressionVariable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outlier)) {
    query->insert(pair<string, string>("outlier", *request->outlier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    query->insert(pair<string, string>("outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyExpressionVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyExpressionVariableResponse(callApi(params, req, runtime));
}

ModifyExpressionVariableResponse Alibabacloud_Xtee20210910::Client::modifyExpressionVariable(shared_ptr<ModifyExpressionVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyExpressionVariableWithOptions(request, runtime);
}

ModifyFieldResponse Alibabacloud_Xtee20210910::Client::modifyFieldWithOptions(shared_ptr<ModifyFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classify)) {
    query->insert(pair<string, string>("classify", *request->classify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enumData)) {
    query->insert(pair<string, string>("enumData", *request->enumData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyField"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFieldResponse(callApi(params, req, runtime));
}

ModifyFieldResponse Alibabacloud_Xtee20210910::Client::modifyField(shared_ptr<ModifyFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFieldWithOptions(request, runtime);
}

ModifyPocTaskResponse Alibabacloud_Xtee20210910::Client::modifyPocTaskWithOptions(shared_ptr<ModifyPocTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessType)) {
    query->insert(pair<string, string>("accessType", *request->accessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    query->insert(pair<string, string>("config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("fileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    query->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("serviceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("taskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPocTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPocTaskResponse(callApi(params, req, runtime));
}

ModifyPocTaskResponse Alibabacloud_Xtee20210910::Client::modifyPocTask(shared_ptr<ModifyPocTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPocTaskWithOptions(request, runtime);
}

ModifyRulePriorityResponse Alibabacloud_Xtee20210910::Client::modifyRulePriorityWithOptions(shared_ptr<ModifyRulePriorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("ruleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRulePriority"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyRulePriorityResponse(callApi(params, req, runtime));
}

ModifyRulePriorityResponse Alibabacloud_Xtee20210910::Client::modifyRulePriority(shared_ptr<ModifyRulePriorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRulePriorityWithOptions(request, runtime);
}

ModifyRuleStatusResponse Alibabacloud_Xtee20210910::Client::modifyRuleStatusWithOptions(shared_ptr<ModifyRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyUserId)) {
    query->insert(pair<string, string>("applyUserId", *request->applyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyUserName)) {
    query->insert(pair<string, string>("applyUserName", *request->applyUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditRemark)) {
    query->insert(pair<string, string>("auditRemark", *request->auditRemark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditUserId)) {
    query->insert(pair<string, string>("auditUserId", *request->auditUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditUserName)) {
    query->insert(pair<string, string>("auditUserName", *request->auditUserName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("eventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleAuditType)) {
    query->insert(pair<string, string>("ruleAuditType", *request->ruleAuditType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleVersionId)) {
    query->insert(pair<string, long>("ruleVersionId", *request->ruleVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRuleStatus"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyRuleStatusResponse(callApi(params, req, runtime));
}

ModifyRuleStatusResponse Alibabacloud_Xtee20210910::Client::modifyRuleStatus(shared_ptr<ModifyRuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRuleStatusWithOptions(request, runtime);
}

ModifyTemplateResponse Alibabacloud_Xtee20210910::Client::modifyTemplateWithOptions(shared_ptr<ModifyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyTemplateRequestInputFields>(request->inputFields)) {
    query->insert(pair<string, ModifyTemplateRequestInputFields>("inputFields", *request->inputFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("templateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("templateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->version)) {
    query->insert(pair<string, long>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTemplate"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTemplateResponse(callApi(params, req, runtime));
}

ModifyTemplateResponse Alibabacloud_Xtee20210910::Client::modifyTemplate(shared_ptr<ModifyTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTemplateWithOptions(request, runtime);
}

ModifyTemplateStatusResponse Alibabacloud_Xtee20210910::Client::modifyTemplateStatusWithOptions(shared_ptr<ModifyTemplateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromTemplateSatus)) {
    query->insert(pair<string, string>("fromTemplateSatus", *request->fromTemplateSatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("templateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toTemplateSatus)) {
    query->insert(pair<string, string>("toTemplateSatus", *request->toTemplateSatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTemplateStatus"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTemplateStatusResponse(callApi(params, req, runtime));
}

ModifyTemplateStatusResponse Alibabacloud_Xtee20210910::Client::modifyTemplateStatus(shared_ptr<ModifyTemplateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTemplateStatusWithOptions(request, runtime);
}

ModifyVariableResponse Alibabacloud_Xtee20210910::Client::modifyVariableWithOptions(shared_ptr<ModifyVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyVariableResponse(callApi(params, req, runtime));
}

ModifyVariableResponse Alibabacloud_Xtee20210910::Client::modifyVariable(shared_ptr<ModifyVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyVariableWithOptions(request, runtime);
}

OpenConsoleSlsResponse Alibabacloud_Xtee20210910::Client::openConsoleSlsWithOptions(shared_ptr<OpenConsoleSlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenConsoleSls"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenConsoleSlsResponse(callApi(params, req, runtime));
}

OpenConsoleSlsResponse Alibabacloud_Xtee20210910::Client::openConsoleSls(shared_ptr<OpenConsoleSlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openConsoleSlsWithOptions(request, runtime);
}

OperateFavoriteVariableResponse Alibabacloud_Xtee20210910::Client::operateFavoriteVariableWithOptions(shared_ptr<OperateFavoriteVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operate)) {
    query->insert(pair<string, string>("operate", *request->operate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateFavoriteVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateFavoriteVariableResponse(callApi(params, req, runtime));
}

OperateFavoriteVariableResponse Alibabacloud_Xtee20210910::Client::operateFavoriteVariable(shared_ptr<OperateFavoriteVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateFavoriteVariableWithOptions(request, runtime);
}

PermissionCheckResponse Alibabacloud_Xtee20210910::Client::permissionCheckWithOptions(shared_ptr<PermissionCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("RegId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PermissionCheck"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PermissionCheckResponse(callApi(params, req, runtime));
}

PermissionCheckResponse Alibabacloud_Xtee20210910::Client::permissionCheck(shared_ptr<PermissionCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return permissionCheckWithOptions(request, runtime);
}

QueryAuthRuleDetailByRuleIdResponse Alibabacloud_Xtee20210910::Client::queryAuthRuleDetailByRuleIdWithOptions(shared_ptr<QueryAuthRuleDetailByRuleIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleVersionId)) {
    query->insert(pair<string, long>("ruleVersionId", *request->ruleVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAuthRuleDetailByRuleId"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAuthRuleDetailByRuleIdResponse(callApi(params, req, runtime));
}

QueryAuthRuleDetailByRuleIdResponse Alibabacloud_Xtee20210910::Client::queryAuthRuleDetailByRuleId(shared_ptr<QueryAuthRuleDetailByRuleIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAuthRuleDetailByRuleIdWithOptions(request, runtime);
}

QueryAuthUserNameResponse Alibabacloud_Xtee20210910::Client::queryAuthUserNameWithOptions(shared_ptr<QueryAuthUserNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bindId)) {
    query->insert(pair<string, long>("bindId", *request->bindId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAuthUserName"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAuthUserNameResponse(callApi(params, req, runtime));
}

QueryAuthUserNameResponse Alibabacloud_Xtee20210910::Client::queryAuthUserName(shared_ptr<QueryAuthUserNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAuthUserNameWithOptions(request, runtime);
}

QueryAuthorizationUserListResponse Alibabacloud_Xtee20210910::Client::queryAuthorizationUserListWithOptions(shared_ptr<QueryAuthorizationUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAuthorizationUserList"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAuthorizationUserListResponse(callApi(params, req, runtime));
}

QueryAuthorizationUserListResponse Alibabacloud_Xtee20210910::Client::queryAuthorizationUserList(shared_ptr<QueryAuthorizationUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAuthorizationUserListWithOptions(request, runtime);
}

RecallRuleAuditResponse Alibabacloud_Xtee20210910::Client::recallRuleAuditWithOptions(shared_ptr<RecallRuleAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecallRuleAudit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecallRuleAuditResponse(callApi(params, req, runtime));
}

RecallRuleAuditResponse Alibabacloud_Xtee20210910::Client::recallRuleAudit(shared_ptr<RecallRuleAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recallRuleAuditWithOptions(request, runtime);
}

RemoveEventResponse Alibabacloud_Xtee20210910::Client::removeEventWithOptions(shared_ptr<RemoveEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createType)) {
    query->insert(pair<string, string>("createType", *request->createType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateCode)) {
    query->insert(pair<string, string>("templateCode", *request->templateCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveEventResponse(callApi(params, req, runtime));
}

RemoveEventResponse Alibabacloud_Xtee20210910::Client::removeEvent(shared_ptr<RemoveEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeEventWithOptions(request, runtime);
}

RemoveTemplateResponse Alibabacloud_Xtee20210910::Client::removeTemplateWithOptions(shared_ptr<RemoveTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("templateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->version)) {
    query->insert(pair<string, long>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTemplate"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTemplateResponse(callApi(params, req, runtime));
}

RemoveTemplateResponse Alibabacloud_Xtee20210910::Client::removeTemplate(shared_ptr<RemoveTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTemplateWithOptions(request, runtime);
}

SampleFileDownloadResponse Alibabacloud_Xtee20210910::Client::sampleFileDownloadWithOptions(shared_ptr<SampleFileDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("RegId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tab)) {
    query->insert(pair<string, string>("Tab", *request->tab));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SampleFileDownload"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SampleFileDownloadResponse(callApi(params, req, runtime));
}

SampleFileDownloadResponse Alibabacloud_Xtee20210910::Client::sampleFileDownload(shared_ptr<SampleFileDownloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sampleFileDownloadWithOptions(request, runtime);
}

SaveAnalysisColumnResponse Alibabacloud_Xtee20210910::Client::saveAnalysisColumnWithOptions(shared_ptr<SaveAnalysisColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columns)) {
    query->insert(pair<string, string>("columns", *request->columns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveAnalysisColumn"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveAnalysisColumnResponse(callApi(params, req, runtime));
}

SaveAnalysisColumnResponse Alibabacloud_Xtee20210910::Client::saveAnalysisColumn(shared_ptr<SaveAnalysisColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveAnalysisColumnWithOptions(request, runtime);
}

SaveByPassOrShuntEventResponse Alibabacloud_Xtee20210910::Client::saveByPassOrShuntEventWithOptions(shared_ptr<SaveByPassOrShuntEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventId)) {
    query->insert(pair<string, long>("eventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("eventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("eventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveByPassOrShuntEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveByPassOrShuntEventResponse(callApi(params, req, runtime));
}

SaveByPassOrShuntEventResponse Alibabacloud_Xtee20210910::Client::saveByPassOrShuntEvent(shared_ptr<SaveByPassOrShuntEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveByPassOrShuntEventWithOptions(request, runtime);
}

StartOrStopByPassShuntEventResponse Alibabacloud_Xtee20210910::Client::startOrStopByPassShuntEventWithOptions(shared_ptr<StartOrStopByPassShuntEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventId)) {
    query->insert(pair<string, long>("eventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartOrStopByPassShuntEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartOrStopByPassShuntEventResponse(callApi(params, req, runtime));
}

StartOrStopByPassShuntEventResponse Alibabacloud_Xtee20210910::Client::startOrStopByPassShuntEvent(shared_ptr<StartOrStopByPassShuntEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startOrStopByPassShuntEventWithOptions(request, runtime);
}

StartSimulationTaskResponse Alibabacloud_Xtee20210910::Client::startSimulationTaskWithOptions(shared_ptr<StartSimulationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSimulationTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSimulationTaskResponse(callApi(params, req, runtime));
}

StartSimulationTaskResponse Alibabacloud_Xtee20210910::Client::startSimulationTask(shared_ptr<StartSimulationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSimulationTaskWithOptions(request, runtime);
}

StopSimulationTaskResponse Alibabacloud_Xtee20210910::Client::stopSimulationTaskWithOptions(shared_ptr<StopSimulationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopSimulationTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopSimulationTaskResponse(callApi(params, req, runtime));
}

StopSimulationTaskResponse Alibabacloud_Xtee20210910::Client::stopSimulationTask(shared_ptr<StopSimulationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopSimulationTaskWithOptions(request, runtime);
}

SubmitImportTaskResponse Alibabacloud_Xtee20210910::Client::submitImportTaskWithOptions(shared_ptr<SubmitImportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitImportTask"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitImportTaskResponse(callApi(params, req, runtime));
}

SubmitImportTaskResponse Alibabacloud_Xtee20210910::Client::submitImportTask(shared_ptr<SubmitImportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitImportTaskWithOptions(request, runtime);
}

SwitchExpressionVariableResponse Alibabacloud_Xtee20210910::Client::switchExpressionVariableWithOptions(shared_ptr<SwitchExpressionVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataVersion)) {
    query->insert(pair<string, long>("dataVersion", *request->dataVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchExpressionVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchExpressionVariableResponse(callApi(params, req, runtime));
}

SwitchExpressionVariableResponse Alibabacloud_Xtee20210910::Client::switchExpressionVariable(shared_ptr<SwitchExpressionVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchExpressionVariableWithOptions(request, runtime);
}

SwitchFieldResponse Alibabacloud_Xtee20210910::Client::switchFieldWithOptions(shared_ptr<SwitchFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchField"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchFieldResponse(callApi(params, req, runtime));
}

SwitchFieldResponse Alibabacloud_Xtee20210910::Client::switchField(shared_ptr<SwitchFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchFieldWithOptions(request, runtime);
}

SwitchQueryVariableResponse Alibabacloud_Xtee20210910::Client::switchQueryVariableWithOptions(shared_ptr<SwitchQueryVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchQueryVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchQueryVariableResponse(callApi(params, req, runtime));
}

SwitchQueryVariableResponse Alibabacloud_Xtee20210910::Client::switchQueryVariable(shared_ptr<SwitchQueryVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchQueryVariableWithOptions(request, runtime);
}

SwitchToOnlineResponse Alibabacloud_Xtee20210910::Client::switchToOnlineWithOptions(shared_ptr<SwitchToOnlineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventId)) {
    query->insert(pair<string, long>("eventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchToOnline"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchToOnlineResponse(callApi(params, req, runtime));
}

SwitchToOnlineResponse Alibabacloud_Xtee20210910::Client::switchToOnline(shared_ptr<SwitchToOnlineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchToOnlineWithOptions(request, runtime);
}

SwitchVariableResponse Alibabacloud_Xtee20210910::Client::switchVariableWithOptions(shared_ptr<SwitchVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataVersion)) {
    query->insert(pair<string, long>("dataVersion", *request->dataVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchVariableResponse(callApi(params, req, runtime));
}

SwitchVariableResponse Alibabacloud_Xtee20210910::Client::switchVariable(shared_ptr<SwitchVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchVariableWithOptions(request, runtime);
}

TaskNameByUserIdResponse Alibabacloud_Xtee20210910::Client::taskNameByUserIdWithOptions(shared_ptr<TaskNameByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("RegId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TaskNameByUserId"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TaskNameByUserIdResponse(callApi(params, req, runtime));
}

TaskNameByUserIdResponse Alibabacloud_Xtee20210910::Client::taskNameByUserId(shared_ptr<TaskNameByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return taskNameByUserIdWithOptions(request, runtime);
}

UpdateAnalysisConditionFavoriteResponse Alibabacloud_Xtee20210910::Client::updateAnalysisConditionFavoriteWithOptions(shared_ptr<UpdateAnalysisConditionFavoriteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventBeginTime)) {
    query->insert(pair<string, long>("eventBeginTime", *request->eventBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventEndTime)) {
    query->insert(pair<string, long>("eventEndTime", *request->eventEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    query->insert(pair<string, string>("fieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldValue)) {
    query->insert(pair<string, string>("fieldValue", *request->fieldValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAnalysisConditionFavorite"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAnalysisConditionFavoriteResponse(callApi(params, req, runtime));
}

UpdateAnalysisConditionFavoriteResponse Alibabacloud_Xtee20210910::Client::updateAnalysisConditionFavorite(shared_ptr<UpdateAnalysisConditionFavoriteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAnalysisConditionFavoriteWithOptions(request, runtime);
}

UpdateAuditResponse Alibabacloud_Xtee20210910::Client::updateAuditWithOptions(shared_ptr<UpdateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditMsg)) {
    query->insert(pair<string, string>("auditMsg", *request->auditMsg));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditRelationType)) {
    query->insert(pair<string, string>("auditRelationType", *request->auditRelationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditStatus)) {
    query->insert(pair<string, string>("auditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAudit"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuditResponse(callApi(params, req, runtime));
}

UpdateAuditResponse Alibabacloud_Xtee20210910::Client::updateAudit(shared_ptr<UpdateAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuditWithOptions(request, runtime);
}

UpdateAuthRuleResponse Alibabacloud_Xtee20210910::Client::updateAuthRuleWithOptions(shared_ptr<UpdateAuthRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleActions)) {
    query->insert(pair<string, string>("ruleActions", *request->ruleActions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleExpressions)) {
    query->insert(pair<string, string>("ruleExpressions", *request->ruleExpressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleVersionId)) {
    query->insert(pair<string, long>("ruleVersionId", *request->ruleVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAuthRule"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuthRuleResponse(callApi(params, req, runtime));
}

UpdateAuthRuleResponse Alibabacloud_Xtee20210910::Client::updateAuthRule(shared_ptr<UpdateAuthRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthRuleWithOptions(request, runtime);
}

UpdateByPassShuntEventResponse Alibabacloud_Xtee20210910::Client::updateByPassShuntEventWithOptions(shared_ptr<UpdateByPassShuntEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventId)) {
    query->insert(pair<string, long>("eventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("eventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateByPassShuntEvent"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateByPassShuntEventResponse(callApi(params, req, runtime));
}

UpdateByPassShuntEventResponse Alibabacloud_Xtee20210910::Client::updateByPassShuntEvent(shared_ptr<UpdateByPassShuntEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateByPassShuntEventWithOptions(request, runtime);
}

UpdateDataSourceResponse Alibabacloud_Xtee20210910::Client::updateDataSourceWithOptions(shared_ptr<UpdateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("ossKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataSource"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataSourceResponse(callApi(params, req, runtime));
}

UpdateDataSourceResponse Alibabacloud_Xtee20210910::Client::updateDataSource(shared_ptr<UpdateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataSourceWithOptions(request, runtime);
}

UpdateQueryVariableResponse Alibabacloud_Xtee20210910::Client::updateQueryVariableWithOptions(shared_ptr<UpdateQueryVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceCode)) {
    query->insert(pair<string, string>("dataSourceCode", *request->dataSourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionTitle)) {
    query->insert(pair<string, string>("expressionTitle", *request->expressionTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionVariable)) {
    query->insert(pair<string, string>("expressionVariable", *request->expressionVariable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outlier)) {
    query->insert(pair<string, string>("outlier", *request->outlier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputs)) {
    query->insert(pair<string, string>("outputs", *request->outputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQueryVariable"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQueryVariableResponse(callApi(params, req, runtime));
}

UpdateQueryVariableResponse Alibabacloud_Xtee20210910::Client::updateQueryVariable(shared_ptr<UpdateQueryVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQueryVariableWithOptions(request, runtime);
}

UpdateRuleResponse Alibabacloud_Xtee20210910::Client::updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicExpression)) {
    query->insert(pair<string, string>("logicExpression", *request->logicExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleActions)) {
    query->insert(pair<string, string>("ruleActions", *request->ruleActions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleExpressions)) {
    query->insert(pair<string, string>("ruleExpressions", *request->ruleExpressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleStatus)) {
    query->insert(pair<string, string>("ruleStatus", *request->ruleStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleVersionId)) {
    query->insert(pair<string, long>("ruleVersionId", *request->ruleVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRule"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRuleResponse(callApi(params, req, runtime));
}

UpdateRuleResponse Alibabacloud_Xtee20210910::Client::updateRule(shared_ptr<UpdateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleWithOptions(request, runtime);
}

UpdateRuleBaseResponse Alibabacloud_Xtee20210910::Client::updateRuleBaseWithOptions(shared_ptr<UpdateRuleBaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->consoleRuleId)) {
    query->insert(pair<string, long>("consoleRuleId", *request->consoleRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCode)) {
    query->insert(pair<string, string>("eventCode", *request->eventCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("ruleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("ruleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRuleBase"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRuleBaseResponse(callApi(params, req, runtime));
}

UpdateRuleBaseResponse Alibabacloud_Xtee20210910::Client::updateRuleBase(shared_ptr<UpdateRuleBaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleBaseWithOptions(request, runtime);
}

UpdateSampleBatchResponse Alibabacloud_Xtee20210910::Client::updateSampleBatchWithOptions(shared_ptr<UpdateSampleBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regId)) {
    query->insert(pair<string, string>("regId", *request->regId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versions)) {
    query->insert(pair<string, string>("versions", *request->versions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSampleBatch"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSampleBatchResponse(callApi(params, req, runtime));
}

UpdateSampleBatchResponse Alibabacloud_Xtee20210910::Client::updateSampleBatch(shared_ptr<UpdateSampleBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSampleBatchWithOptions(request, runtime);
}

UploadSampleApiResponse Alibabacloud_Xtee20210910::Client::uploadSampleApiWithOptions(shared_ptr<UploadSampleApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    query->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataValue)) {
    query->insert(pair<string, string>("DataValue", *request->dataValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleType)) {
    query->insert(pair<string, string>("SampleType", *request->sampleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("Service", *request->service));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadSampleApi"))},
    {"version", boost::any(string("2021-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadSampleApiResponse(callApi(params, req, runtime));
}

UploadSampleApiResponse Alibabacloud_Xtee20210910::Client::uploadSampleApi(shared_ptr<UploadSampleApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadSampleApiWithOptions(request, runtime);
}

