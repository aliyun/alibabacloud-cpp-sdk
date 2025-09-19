#include <darabonba/Core.hpp>
#include <alibabacloud/Xtee20210910.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Xtee20210910::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Xtee20210910
{

AlibabaCloud::Xtee20210910::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("xtee", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Add Sample Data via CSV
 *
 * @param request AddSampleDataByCsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSampleDataByCsvResponse
 */
AddSampleDataByCsvResponse Client::addSampleDataByCsvWithOptions(const AddSampleDataByCsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOssFileName()) {
    query["ossFileName"] = request.ossFileName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleBatchUuid()) {
    query["sampleBatchUuid"] = request.sampleBatchUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSampleDataByCsv"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSampleDataByCsvResponse>();
}

/**
 * @summary Add Sample Data via CSV
 *
 * @param request AddSampleDataByCsvRequest
 * @return AddSampleDataByCsvResponse
 */
AddSampleDataByCsvResponse Client::addSampleDataByCsv(const AddSampleDataByCsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSampleDataByCsvWithOptions(request, runtime);
}

/**
 * @summary Add list data through a text box for samples
 *
 * @param request AddSampleDataByTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSampleDataByTextResponse
 */
AddSampleDataByTextResponse Client::addSampleDataByTextWithOptions(const AddSampleDataByTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.dataValue();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleBatchUuid()) {
    query["sampleBatchUuid"] = request.sampleBatchUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSampleDataByText"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSampleDataByTextResponse>();
}

/**
 * @summary Add list data through a text box for samples
 *
 * @param request AddSampleDataByTextRequest
 * @return AddSampleDataByTextResponse
 */
AddSampleDataByTextResponse Client::addSampleDataByText(const AddSampleDataByTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSampleDataByTextWithOptions(request, runtime);
}

/**
 * @summary Batch Delete Sample List Data
 *
 * @param request BatchDeleteSampleDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteSampleDataResponse
 */
BatchDeleteSampleDataResponse Client::batchDeleteSampleDataWithOptions(const BatchDeleteSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasUuids()) {
    query["uuids"] = request.uuids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteSampleData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteSampleDataResponse>();
}

/**
 * @summary Batch Delete Sample List Data
 *
 * @param request BatchDeleteSampleDataRequest
 * @return BatchDeleteSampleDataResponse
 */
BatchDeleteSampleDataResponse Client::batchDeleteSampleData(const BatchDeleteSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteSampleDataWithOptions(request, runtime);
}

/**
 * @summary Variable binding operation
 *
 * @param request BindVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindVariableResponse
 */
BindVariableResponse Client::bindVariableWithOptions(const BindVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasApiRegionId()) {
    query["apiRegionId"] = request.apiRegionId();
  }

  if (!!request.hasApiType()) {
    query["apiType"] = request.apiType();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasDefineId()) {
    query["defineId"] = request.defineId();
  }

  if (!!request.hasDefineIds()) {
    query["defineIds"] = request.defineIds();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasExceptionValue()) {
    query["exceptionValue"] = request.exceptionValue();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasOutputField()) {
    query["outputField"] = request.outputField();
  }

  if (!!request.hasOutputType()) {
    query["outputType"] = request.outputType();
  }

  if (!!request.hasParams()) {
    query["params"] = request.params();
  }

  if (!!request.hasParamsList()) {
    query["paramsList"] = request.paramsList();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.sourceType();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindVariableResponse>();
}

/**
 * @summary Variable binding operation
 *
 * @param request BindVariableRequest
 * @return BindVariableResponse
 */
BindVariableResponse Client::bindVariable(const BindVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindVariableWithOptions(request, runtime);
}

/**
 * @summary Policy Replication Lineage Check
 *
 * @param request CheckCopyRuleVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCopyRuleVariableResponse
 */
CheckCopyRuleVariableResponse Client::checkCopyRuleVariableWithOptions(const CheckCopyRuleVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateType()) {
    query["CreateType"] = request.createType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasSourceRuleId()) {
    query["SourceRuleId"] = request.sourceRuleId();
  }

  if (!!request.hasSourceRuleIds()) {
    query["SourceRuleIds"] = request.sourceRuleIds();
  }

  if (!!request.hasTargetEventCode()) {
    query["TargetEventCode"] = request.targetEventCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCopyRuleVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCopyRuleVariableResponse>();
}

/**
 * @summary Policy Replication Lineage Check
 *
 * @param request CheckCopyRuleVariableRequest
 * @return CheckCopyRuleVariableResponse
 */
CheckCopyRuleVariableResponse Client::checkCopyRuleVariable(const CheckCopyRuleVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCopyRuleVariableWithOptions(request, runtime);
}

/**
 * @summary Check if the cumulative number of variables exceeds the limit
 *
 * @param request CheckCustVariableLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCustVariableLimitResponse
 */
CheckCustVariableLimitResponse Client::checkCustVariableLimitWithOptions(const CheckCustVariableLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCustVariableLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCustVariableLimitResponse>();
}

/**
 * @summary Check if the cumulative number of variables exceeds the limit
 *
 * @param request CheckCustVariableLimitRequest
 * @return CheckCustVariableLimitResponse
 */
CheckCustVariableLimitResponse Client::checkCustVariableLimit(const CheckCustVariableLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCustVariableLimitWithOptions(request, runtime);
}

/**
 * @summary Check if Creating Variables Exceeds the Limit
 *
 * @param request CheckExpressionVariableLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckExpressionVariableLimitResponse
 */
CheckExpressionVariableLimitResponse Client::checkExpressionVariableLimitWithOptions(const CheckExpressionVariableLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckExpressionVariableLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckExpressionVariableLimitResponse>();
}

/**
 * @summary Check if Creating Variables Exceeds the Limit
 *
 * @param request CheckExpressionVariableLimitRequest
 * @return CheckExpressionVariableLimitResponse
 */
CheckExpressionVariableLimitResponse Client::checkExpressionVariableLimit(const CheckExpressionVariableLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkExpressionVariableLimitWithOptions(request, runtime);
}

/**
 * @summary Check if the number of fields exceeds the limit
 *
 * @param request CheckFieldLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckFieldLimitResponse
 */
CheckFieldLimitResponse Client::checkFieldLimitWithOptions(const CheckFieldLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckFieldLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckFieldLimitResponse>();
}

/**
 * @summary Check if the number of fields exceeds the limit
 *
 * @param request CheckFieldLimitRequest
 * @return CheckFieldLimitResponse
 */
CheckFieldLimitResponse Client::checkFieldLimit(const CheckFieldLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkFieldLimitWithOptions(request, runtime);
}

/**
 * @summary Validate Variable Reference
 *
 * @param request CheckUsageVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUsageVariableResponse
 */
CheckUsageVariableResponse Client::checkUsageVariableWithOptions(const CheckUsageVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckUsageVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUsageVariableResponse>();
}

/**
 * @summary Validate Variable Reference
 *
 * @param request CheckUsageVariableRequest
 * @return CheckUsageVariableResponse
 */
CheckUsageVariableResponse Client::checkUsageVariable(const CheckUsageVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUsageVariableWithOptions(request, runtime);
}

/**
 * @summary Policy Comparison
 *
 * @param request CompareCopyRuleVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareCopyRuleVariableResponse
 */
CompareCopyRuleVariableResponse Client::compareCopyRuleVariableWithOptions(const CompareCopyRuleVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateType()) {
    query["CreateType"] = request.createType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasSourceRuleId()) {
    query["SourceRuleId"] = request.sourceRuleId();
  }

  if (!!request.hasSourceRuleIds()) {
    query["SourceRuleIds"] = request.sourceRuleIds();
  }

  if (!!request.hasTargetEventCode()) {
    query["TargetEventCode"] = request.targetEventCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompareCopyRuleVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareCopyRuleVariableResponse>();
}

/**
 * @summary Policy Comparison
 *
 * @param request CompareCopyRuleVariableRequest
 * @return CompareCopyRuleVariableResponse
 */
CompareCopyRuleVariableResponse Client::compareCopyRuleVariable(const CompareCopyRuleVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareCopyRuleVariableWithOptions(request, runtime);
}

/**
 * @summary Add Query Conditions
 *
 * @param request CreateAnalysisConditionFavoriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnalysisConditionFavoriteResponse
 */
CreateAnalysisConditionFavoriteResponse Client::createAnalysisConditionFavoriteWithOptions(const CreateAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.condition();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.eventBeginTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.eventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.fieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.fieldValue();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAnalysisConditionFavorite"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnalysisConditionFavoriteResponse>();
}

/**
 * @summary Add Query Conditions
 *
 * @param request CreateAnalysisConditionFavoriteRequest
 * @return CreateAnalysisConditionFavoriteResponse
 */
CreateAnalysisConditionFavoriteResponse Client::createAnalysisConditionFavorite(const CreateAnalysisConditionFavoriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAnalysisConditionFavoriteWithOptions(request, runtime);
}

/**
 * @summary Create Export Task
 *
 * @param request CreateAnalysisExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnalysisExportTaskResponse
 */
CreateAnalysisExportTaskResponse Client::createAnalysisExportTaskWithOptions(const CreateAnalysisExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasColumns()) {
    query["columns"] = request.columns();
  }

  if (!!request.hasConditions()) {
    query["conditions"] = request.conditions();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.eventBeginTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.eventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.fieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.fieldValue();
  }

  if (!!request.hasFileFormat()) {
    query["fileFormat"] = request.fileFormat();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScope()) {
    query["scope"] = request.scope();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAnalysisExportTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnalysisExportTaskResponse>();
}

/**
 * @summary Create Export Task
 *
 * @param request CreateAnalysisExportTaskRequest
 * @return CreateAnalysisExportTaskResponse
 */
CreateAnalysisExportTaskResponse Client::createAnalysisExportTask(const CreateAnalysisExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAnalysisExportTaskWithOptions(request, runtime);
}

/**
 * @summary Create AppKey
 *
 * @param request CreateAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppKeyResponse
 */
CreateAppKeyResponse Client::createAppKeyWithOptions(const CreateAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppKey"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppKeyResponse>();
}

/**
 * @summary Create AppKey
 *
 * @param request CreateAppKeyRequest
 * @return CreateAppKeyResponse
 */
CreateAppKeyResponse Client::createAppKey(const CreateAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppKeyWithOptions(request, runtime);
}

/**
 * @summary Create Accumulative Variable
 *
 * @param request CreateCustVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustVariableResponse
 */
CreateCustVariableResponse Client::createCustVariableWithOptions(const CreateCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.condition();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasHistoryValueType()) {
    query["historyValueType"] = request.historyValueType();
  }

  if (!!request.hasObject()) {
    query["object"] = request.object();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.outputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSubject()) {
    query["subject"] = request.subject();
  }

  if (!!request.hasTimeType()) {
    query["timeType"] = request.timeType();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  if (!!request.hasTwCount()) {
    query["twCount"] = request.twCount();
  }

  if (!!request.hasVelocityFC()) {
    query["velocityFC"] = request.velocityFC();
  }

  if (!!request.hasVelocityTW()) {
    query["velocityTW"] = request.velocityTW();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustVariableResponse>();
}

/**
 * @summary Create Accumulative Variable
 *
 * @param request CreateCustVariableRequest
 * @return CreateCustVariableResponse
 */
CreateCustVariableResponse Client::createCustVariable(const CreateCustVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustVariableWithOptions(request, runtime);
}

/**
 * @summary Add Data Source
 *
 * @param request CreateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSourceWithOptions(const CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasOssKey()) {
    query["ossKey"] = request.ossKey();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataSource"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataSourceResponse>();
}

/**
 * @summary Add Data Source
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary Create Event
 *
 * @param request CreateEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventResponse
 */
CreateEventResponse Client::createEventWithOptions(const CreateEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.eventName();
  }

  if (!!request.hasInputFieldsStr()) {
    query["inputFieldsStr"] = request.inputFieldsStr();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.memo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateName()) {
    query["templateName"] = request.templateName();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEventResponse>();
}

/**
 * @summary Create Event
 *
 * @param request CreateEventRequest
 * @return CreateEventResponse
 */
CreateEventResponse Client::createEvent(const CreateEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventWithOptions(request, runtime);
}

/**
 * @summary Create Custom Variable
 *
 * @param request CreateExpressionVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExpressionVariableResponse
 */
CreateExpressionVariableResponse Client::createExpressionVariableWithOptions(const CreateExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.expression();
  }

  if (!!request.hasExpressionTitle()) {
    query["expressionTitle"] = request.expressionTitle();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.expressionVariable();
  }

  if (!!request.hasOutlier()) {
    query["outlier"] = request.outlier();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.outputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExpressionVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExpressionVariableResponse>();
}

/**
 * @summary Create Custom Variable
 *
 * @param request CreateExpressionVariableRequest
 * @return CreateExpressionVariableResponse
 */
CreateExpressionVariableResponse Client::createExpressionVariable(const CreateExpressionVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExpressionVariableWithOptions(request, runtime);
}

/**
 * @summary Add New Field
 *
 * @param request CreateFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFieldResponse
 */
CreateFieldResponse Client::createFieldWithOptions(const CreateFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasClassify()) {
    query["classify"] = request.classify();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEnumData()) {
    query["enumData"] = request.enumData();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFieldResponse>();
}

/**
 * @summary Add New Field
 *
 * @param request CreateFieldRequest
 * @return CreateFieldResponse
 */
CreateFieldResponse Client::createField(const CreateFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFieldWithOptions(request, runtime);
}

/**
 * @summary Submit Task
 *
 * @param request CreateModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModelWithOptions(const CreateModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucId()) {
    query["BucId"] = request.bucId();
  }

  if (!!request.hasCounts()) {
    query["Counts"] = request.counts();
  }

  if (!!request.hasFileMD5()) {
    query["FileMD5"] = request.fileMD5();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.filePath();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.modelName();
  }

  if (!!request.hasModelScene()) {
    query["ModelScene"] = request.modelScene();
  }

  if (!!request.hasParameterNum()) {
    query["ParameterNum"] = request.parameterNum();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasUserLocalFileName()) {
    query["UserLocalFileName"] = request.userLocalFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModel"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelResponse>();
}

/**
 * @summary Submit Task
 *
 * @param request CreateModelRequest
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModel(const CreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelWithOptions(request, runtime);
}

/**
 * @summary Create POC
 *
 * @param request CreatePocEvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePocEvResponse
 */
CreatePocEvResponse Client::createPocEvWithOptions(const CreatePocEvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDateFormat()) {
    query["DateFormat"] = request.dateFormat();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.fileType();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.tab();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePocEv"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePocEvResponse>();
}

/**
 * @summary Create POC
 *
 * @param request CreatePocEvRequest
 * @return CreatePocEvResponse
 */
CreatePocEvResponse Client::createPocEv(const CreatePocEvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPocEvWithOptions(request, runtime);
}

/**
 * @summary Add New Custom Query Variable
 *
 * @param request CreateQueryVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueryVariableResponse
 */
CreateQueryVariableResponse Client::createQueryVariableWithOptions(const CreateQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataSourceCode()) {
    query["dataSourceCode"] = request.dataSourceCode();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.expression();
  }

  if (!!request.hasExpressionTitle()) {
    query["expressionTitle"] = request.expressionTitle();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.expressionVariable();
  }

  if (!!request.hasOutlier()) {
    query["outlier"] = request.outlier();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.outputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQueryVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQueryVariableResponse>();
}

/**
 * @summary Add New Custom Query Variable
 *
 * @param request CreateQueryVariableRequest
 * @return CreateQueryVariableResponse
 */
CreateQueryVariableResponse Client::createQueryVariable(const CreateQueryVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQueryVariableWithOptions(request, runtime);
}

/**
 * @summary Create Recommended Event Strategy
 *
 * @param request CreateRecommendEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecommendEventRuleResponse
 */
CreateRecommendEventRuleResponse Client::createRecommendEventRuleWithOptions(const CreateRecommendEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.eventName();
  }

  if (!!request.hasRecommendRuleIdsStr()) {
    query["recommendRuleIdsStr"] = request.recommendRuleIdsStr();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecommendEventRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecommendEventRuleResponse>();
}

/**
 * @summary Create Recommended Event Strategy
 *
 * @param request CreateRecommendEventRuleRequest
 * @return CreateRecommendEventRuleResponse
 */
CreateRecommendEventRuleResponse Client::createRecommendEventRule(const CreateRecommendEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecommendEventRuleWithOptions(request, runtime);
}

/**
 * @summary Create Recommendation Task
 *
 * @param request CreateRecommendTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecommendTaskResponse
 */
CreateRecommendTaskResponse Client::createRecommendTaskWithOptions(const CreateRecommendTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleId()) {
    query["sampleId"] = request.sampleId();
  }

  if (!!request.hasVariablesStr()) {
    query["variablesStr"] = request.variablesStr();
  }

  if (!!request.hasVelocitiesStr()) {
    query["velocitiesStr"] = request.velocitiesStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecommendTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecommendTaskResponse>();
}

/**
 * @summary Create Recommendation Task
 *
 * @param request CreateRecommendTaskRequest
 * @return CreateRecommendTaskResponse
 */
CreateRecommendTaskResponse Client::createRecommendTask(const CreateRecommendTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecommendTaskWithOptions(request, runtime);
}

/**
 * @summary Create Policy & Version
 *
 * @param request CreateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRuleWithOptions(const CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.eventName();
  }

  if (!!request.hasLogicExpression()) {
    query["logicExpression"] = request.logicExpression();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.memo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleActions()) {
    query["ruleActions"] = request.ruleActions();
  }

  if (!!request.hasRuleBody()) {
    query["ruleBody"] = request.ruleBody();
  }

  if (!!request.hasRuleExpressions()) {
    query["ruleExpressions"] = request.ruleExpressions();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.ruleName();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.ruleStatus();
  }

  if (!!request.hasRuleType()) {
    query["ruleType"] = request.ruleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRuleResponse>();
}

/**
 * @summary Create Policy & Version
 *
 * @param request CreateRuleRequest
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRule(const CreateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRuleWithOptions(request, runtime);
}

/**
 * @summary Add Sample
 *
 * @param request CreateSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleResponse
 */
CreateSampleResponse Client::createSampleWithOptions(const CreateSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasClientFileName()) {
    query["clientFileName"] = request.clientFileName();
  }

  if (!!request.hasClientPath()) {
    query["clientPath"] = request.clientPath();
  }

  if (!!request.hasFileType()) {
    query["fileType"] = request.fileType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleTag()) {
    query["sampleTag"] = request.sampleTag();
  }

  if (!!request.hasSampleType()) {
    query["sampleType"] = request.sampleType();
  }

  if (!!request.hasSampleValues()) {
    query["sampleValues"] = request.sampleValues();
  }

  if (!!request.hasUploadType()) {
    query["uploadType"] = request.uploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSample"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleResponse>();
}

/**
 * @summary Add Sample
 *
 * @param request CreateSampleRequest
 * @return CreateSampleResponse
 */
CreateSampleResponse Client::createSample(const CreateSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleWithOptions(request, runtime);
}

/**
 * @summary User-level Single API to Create Sample Batches
 *
 * @param request CreateSampleApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleApiResponse
 */
CreateSampleApiResponse Client::createSampleApiWithOptions(const CreateSampleApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasDataValue()) {
    query["DataValue"] = request.dataValue();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasSampleBatchType()) {
    query["SampleBatchType"] = request.sampleBatchType();
  }

  if (!!request.hasServiceList()) {
    query["ServiceList"] = request.serviceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSampleApi"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleApiResponse>();
}

/**
 * @summary User-level Single API to Create Sample Batches
 *
 * @param request CreateSampleApiRequest
 * @return CreateSampleApiResponse
 */
CreateSampleApiResponse Client::createSampleApi(const CreateSampleApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleApiWithOptions(request, runtime);
}

/**
 * @summary Create Sample Batch
 *
 * @param request CreateSampleBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleBatchResponse
 */
CreateSampleBatchResponse Client::createSampleBatchWithOptions(const CreateSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBatchName()) {
    query["batchName"] = request.batchName();
  }

  if (!!request.hasDataType()) {
    query["dataType"] = request.dataType();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.dataValue();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasOssFileName()) {
    query["ossFileName"] = request.ossFileName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleBatchType()) {
    query["sampleBatchType"] = request.sampleBatchType();
  }

  if (!!request.hasServiceList()) {
    query["serviceList"] = request.serviceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSampleBatch"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleBatchResponse>();
}

/**
 * @summary Create Sample Batch
 *
 * @param request CreateSampleBatchRequest
 * @return CreateSampleBatchResponse
 */
CreateSampleBatchResponse Client::createSampleBatch(const CreateSampleBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleBatchWithOptions(request, runtime);
}

/**
 * @summary Create Sample Data
 *
 * @param request CreateSampleDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleDataResponse
 */
CreateSampleDataResponse Client::createSampleDataWithOptions(const CreateSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEncryptType()) {
    query["encryptType"] = request.encryptType();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRiskValue()) {
    query["riskValue"] = request.riskValue();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  if (!!request.hasStorePath()) {
    query["storePath"] = request.storePath();
  }

  if (!!request.hasStoreType()) {
    query["storeType"] = request.storeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSampleData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleDataResponse>();
}

/**
 * @summary Create Sample Data
 *
 * @param request CreateSampleDataRequest
 * @return CreateSampleDataResponse
 */
CreateSampleDataResponse Client::createSampleData(const CreateSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleDataWithOptions(request, runtime);
}

/**
 * @summary Create Task
 *
 * @param request CreateSimulationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSimulationTaskResponse
 */
CreateSimulationTaskResponse Client::createSimulationTaskWithOptions(const CreateSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataSourceConfig()) {
    query["dataSourceConfig"] = request.dataSourceConfig();
  }

  if (!!request.hasDataSourceType()) {
    query["dataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasFiltersStr()) {
    query["filtersStr"] = request.filtersStr();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRulesStr()) {
    query["rulesStr"] = request.rulesStr();
  }

  if (!!request.hasRunTask()) {
    query["runTask"] = request.runTask();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasTaskName()) {
    query["taskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSimulationTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSimulationTaskResponse>();
}

/**
 * @summary Create Task
 *
 * @param request CreateSimulationTaskRequest
 * @return CreateSimulationTaskResponse
 */
CreateSimulationTaskResponse Client::createSimulationTask(const CreateSimulationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSimulationTaskWithOptions(request, runtime);
}

/**
 * @summary Policy Replication
 *
 * @param request DeepCopyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeepCopyRuleResponse
 */
DeepCopyRuleResponse Client::deepCopyRuleWithOptions(const DeepCopyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateType()) {
    query["CreateType"] = request.createType();
  }

  if (!!request.hasCustInsertInfo()) {
    query["CustInsertInfo"] = request.custInsertInfo();
  }

  if (!!request.hasCustWriteInfo()) {
    query["CustWriteInfo"] = request.custWriteInfo();
  }

  if (!!request.hasExpressionVariableInfo()) {
    query["ExpressionVariableInfo"] = request.expressionVariableInfo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasQueryExpressionVariableInfo()) {
    query["QueryExpressionVariableInfo"] = request.queryExpressionVariableInfo();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasSourceRuleId()) {
    query["SourceRuleId"] = request.sourceRuleId();
  }

  if (!!request.hasSourceRuleIds()) {
    query["SourceRuleIds"] = request.sourceRuleIds();
  }

  if (!!request.hasTargetEventCode()) {
    query["TargetEventCode"] = request.targetEventCode();
  }

  if (!!request.hasTargetEventName()) {
    query["TargetEventName"] = request.targetEventName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeepCopyRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeepCopyRuleResponse>();
}

/**
 * @summary Policy Replication
 *
 * @param request DeepCopyRuleRequest
 * @return DeepCopyRuleResponse
 */
DeepCopyRuleResponse Client::deepCopyRule(const DeepCopyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deepCopyRuleWithOptions(request, runtime);
}

/**
 * @summary Delete Query Condition
 *
 * @param request DeleteAnalysisConditionFavoriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAnalysisConditionFavoriteResponse
 */
DeleteAnalysisConditionFavoriteResponse Client::deleteAnalysisConditionFavoriteWithOptions(const DeleteAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAnalysisConditionFavorite"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAnalysisConditionFavoriteResponse>();
}

/**
 * @summary Delete Query Condition
 *
 * @param request DeleteAnalysisConditionFavoriteRequest
 * @return DeleteAnalysisConditionFavoriteResponse
 */
DeleteAnalysisConditionFavoriteResponse Client::deleteAnalysisConditionFavorite(const DeleteAnalysisConditionFavoriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAnalysisConditionFavoriteWithOptions(request, runtime);
}

/**
 * @summary Delete Bypass Event
 *
 * @param request DeleteByPassShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteByPassShuntEventResponse
 */
DeleteByPassShuntEventResponse Client::deleteByPassShuntEventWithOptions(const DeleteByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.eventId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteByPassShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteByPassShuntEventResponse>();
}

/**
 * @summary Delete Bypass Event
 *
 * @param request DeleteByPassShuntEventRequest
 * @return DeleteByPassShuntEventResponse
 */
DeleteByPassShuntEventResponse Client::deleteByPassShuntEvent(const DeleteByPassShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteByPassShuntEventWithOptions(request, runtime);
}

/**
 * @summary Delete Accumulated Variable
 *
 * @param request DeleteCustVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustVariableResponse
 */
DeleteCustVariableResponse Client::deleteCustVariableWithOptions(const DeleteCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.dataVersion();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.variableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustVariableResponse>();
}

/**
 * @summary Delete Accumulated Variable
 *
 * @param request DeleteCustVariableRequest
 * @return DeleteCustVariableResponse
 */
DeleteCustVariableResponse Client::deleteCustVariable(const DeleteCustVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustVariableWithOptions(request, runtime);
}

/**
 * @summary Delete Data Source
 *
 * @param request DeleteDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSourceWithOptions(const DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataSource"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSourceResponse>();
}

/**
 * @summary Delete Data Source
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary Delete Event Field
 *
 * @param request DeleteEventFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventFieldResponse
 */
DeleteEventFieldResponse Client::deleteEventFieldWithOptions(const DeleteEventFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.fieldName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventFieldResponse>();
}

/**
 * @summary Delete Event Field
 *
 * @param request DeleteEventFieldRequest
 * @return DeleteEventFieldResponse
 */
DeleteEventFieldResponse Client::deleteEventField(const DeleteEventFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventFieldWithOptions(request, runtime);
}

/**
 * @summary Delete Custom Variable
 *
 * @param request DeleteExpressionVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExpressionVariableResponse
 */
DeleteExpressionVariableResponse Client::deleteExpressionVariableWithOptions(const DeleteExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.dataVersion();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExpressionVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExpressionVariableResponse>();
}

/**
 * @summary Delete Custom Variable
 *
 * @param request DeleteExpressionVariableRequest
 * @return DeleteExpressionVariableResponse
 */
DeleteExpressionVariableResponse Client::deleteExpressionVariable(const DeleteExpressionVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExpressionVariableWithOptions(request, runtime);
}

/**
 * @summary 删除字段
 *
 * @param request DeleteFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFieldResponse
 */
DeleteFieldResponse Client::deleteFieldWithOptions(const DeleteFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFieldResponse>();
}

/**
 * @summary 删除字段
 *
 * @param request DeleteFieldRequest
 * @return DeleteFieldResponse
 */
DeleteFieldResponse Client::deleteField(const DeleteFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFieldWithOptions(request, runtime);
}

/**
 * @summary Delete Name List
 *
 * @param request DeleteNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNameListResponse
 */
DeleteNameListResponse Client::deleteNameListWithOptions(const DeleteNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.ids();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNameListResponse>();
}

/**
 * @summary Delete Name List
 *
 * @param request DeleteNameListRequest
 * @return DeleteNameListResponse
 */
DeleteNameListResponse Client::deleteNameList(const DeleteNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNameListWithOptions(request, runtime);
}

/**
 * @summary Delete (pseudo) name list variable data
 *
 * @param request DeleteNameListDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNameListDataResponse
 */
DeleteNameListDataResponse Client::deleteNameListDataWithOptions(const DeleteNameListDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.variableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNameListData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNameListDataResponse>();
}

/**
 * @summary Delete (pseudo) name list variable data
 *
 * @param request DeleteNameListDataRequest
 * @return DeleteNameListDataResponse
 */
DeleteNameListDataResponse Client::deleteNameListData(const DeleteNameListDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNameListDataWithOptions(request, runtime);
}

/**
 * @summary Delete Query Variable
 *
 * @param request DeleteQueryVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQueryVariableResponse
 */
DeleteQueryVariableResponse Client::deleteQueryVariableWithOptions(const DeleteQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQueryVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQueryVariableResponse>();
}

/**
 * @summary Delete Query Variable
 *
 * @param request DeleteQueryVariableRequest
 * @return DeleteQueryVariableResponse
 */
DeleteQueryVariableResponse Client::deleteQueryVariable(const DeleteQueryVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQueryVariableWithOptions(request, runtime);
}

/**
 * @summary Delete Policy Version
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.ruleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuleResponse>();
}

/**
 * @summary Delete Policy Version
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary Batch Delete Samples
 *
 * @param request DeleteSampleBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleBatchResponse
 */
DeleteSampleBatchResponse Client::deleteSampleBatchWithOptions(const DeleteSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.ids();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasVersions()) {
    query["versions"] = request.versions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSampleBatch"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleBatchResponse>();
}

/**
 * @summary Batch Delete Samples
 *
 * @param request DeleteSampleBatchRequest
 * @return DeleteSampleBatchResponse
 */
DeleteSampleBatchResponse Client::deleteSampleBatch(const DeleteSampleBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSampleBatchWithOptions(request, runtime);
}

/**
 * @summary Sample Deletion
 *
 * @param request DeleteSampleBatchMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleBatchMetaResponse
 */
DeleteSampleBatchMetaResponse Client::deleteSampleBatchMetaWithOptions(const DeleteSampleBatchMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBatchUuid()) {
    query["batchUuid"] = request.batchUuid();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSampleBatchMeta"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleBatchMetaResponse>();
}

/**
 * @summary Sample Deletion
 *
 * @param request DeleteSampleBatchMetaRequest
 * @return DeleteSampleBatchMetaResponse
 */
DeleteSampleBatchMetaResponse Client::deleteSampleBatchMeta(const DeleteSampleBatchMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSampleBatchMetaWithOptions(request, runtime);
}

/**
 * @summary Delete Sample Data
 *
 * @param request DeleteSampleDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleDataResponse
 */
DeleteSampleDataResponse Client::deleteSampleDataWithOptions(const DeleteSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSampleData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleDataResponse>();
}

/**
 * @summary Delete Sample Data
 *
 * @param request DeleteSampleDataRequest
 * @return DeleteSampleDataResponse
 */
DeleteSampleDataResponse Client::deleteSampleData(const DeleteSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSampleDataWithOptions(request, runtime);
}

/**
 * @summary Delete Custom System Variable
 *
 * @param request DeleteSelfBindVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSelfBindVariableResponse
 */
DeleteSelfBindVariableResponse Client::deleteSelfBindVariableWithOptions(const DeleteSelfBindVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSelfBindVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSelfBindVariableResponse>();
}

/**
 * @summary Delete Custom System Variable
 *
 * @param request DeleteSelfBindVariableRequest
 * @return DeleteSelfBindVariableResponse
 */
DeleteSelfBindVariableResponse Client::deleteSelfBindVariable(const DeleteSelfBindVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSelfBindVariableWithOptions(request, runtime);
}

/**
 * @summary 高级查询获取左变量接口
 *
 * @param request DescribeAdvanceSearchLeftVariableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvanceSearchLeftVariableListResponse
 */
DescribeAdvanceSearchLeftVariableListResponse Client::describeAdvanceSearchLeftVariableListWithOptions(const DescribeAdvanceSearchLeftVariableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvanceSearchLeftVariableList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvanceSearchLeftVariableListResponse>();
}

/**
 * @summary 高级查询获取左变量接口
 *
 * @param request DescribeAdvanceSearchLeftVariableListRequest
 * @return DescribeAdvanceSearchLeftVariableListResponse
 */
DescribeAdvanceSearchLeftVariableListResponse Client::describeAdvanceSearchLeftVariableList(const DescribeAdvanceSearchLeftVariableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvanceSearchLeftVariableListWithOptions(request, runtime);
}

/**
 * @summary Advanced Query
 *
 * @param request DescribeAdvanceSearchPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvanceSearchPageListResponse
 */
DescribeAdvanceSearchPageListResponse Client::describeAdvanceSearchPageListWithOptions(const DescribeAdvanceSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.condition();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.eventBeginTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.eventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.fieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.fieldValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvanceSearchPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvanceSearchPageListResponse>();
}

/**
 * @summary Advanced Query
 *
 * @param request DescribeAdvanceSearchPageListRequest
 * @return DescribeAdvanceSearchPageListResponse
 */
DescribeAdvanceSearchPageListResponse Client::describeAdvanceSearchPageList(const DescribeAdvanceSearchPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvanceSearchPageListWithOptions(request, runtime);
}

/**
 * @summary 数据源列表
 *
 * @param request DescribeAllDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSourceWithOptions(const DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllDataSource"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllDataSourceResponse>();
}

/**
 * @summary 数据源列表
 *
 * @param request DescribeAllDataSourceRequest
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSource(const DescribeAllDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllDataSourceWithOptions(request, runtime);
}

/**
 * @summary Event List Query
 *
 * @param request DescribeAllEventNameAndCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllEventNameAndCodeResponse
 */
DescribeAllEventNameAndCodeResponse Client::describeAllEventNameAndCodeWithOptions(const DescribeAllEventNameAndCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllEventNameAndCode"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllEventNameAndCodeResponse>();
}

/**
 * @summary Event List Query
 *
 * @param request DescribeAllEventNameAndCodeRequest
 * @return DescribeAllEventNameAndCodeResponse
 */
DescribeAllEventNameAndCodeResponse Client::describeAllEventNameAndCode(const DescribeAllEventNameAndCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllEventNameAndCodeWithOptions(request, runtime);
}

/**
 * @summary Display all root variables when testing custom expressions
 *
 * @param request DescribeAllRootVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllRootVariableResponse
 */
DescribeAllRootVariableResponse Client::describeAllRootVariableWithOptions(const DescribeAllRootVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasDeviceVariableIds()) {
    query["deviceVariableIds"] = request.deviceVariableIds();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasExpressionVariableIds()) {
    query["expressionVariableIds"] = request.expressionVariableIds();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasNativeVariableIds()) {
    query["nativeVariableIds"] = request.nativeVariableIds();
  }

  if (!!request.hasQueryVariableIds()) {
    query["queryVariableIds"] = request.queryVariableIds();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasVelocityVariableIds()) {
    query["velocityVariableIds"] = request.velocityVariableIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllRootVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllRootVariableResponse>();
}

/**
 * @summary Display all root variables when testing custom expressions
 *
 * @param request DescribeAllRootVariableRequest
 * @return DescribeAllRootVariableResponse
 */
DescribeAllRootVariableResponse Client::describeAllRootVariable(const DescribeAllRootVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllRootVariableWithOptions(request, runtime);
}

/**
 * @summary Display All Fields
 *
 * @param request DescribeAnalysisColumnFieldListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalysisColumnFieldListResponse
 */
DescribeAnalysisColumnFieldListResponse Client::describeAnalysisColumnFieldListWithOptions(const DescribeAnalysisColumnFieldListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalysisColumnFieldList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalysisColumnFieldListResponse>();
}

/**
 * @summary Display All Fields
 *
 * @param request DescribeAnalysisColumnFieldListRequest
 * @return DescribeAnalysisColumnFieldListResponse
 */
DescribeAnalysisColumnFieldListResponse Client::describeAnalysisColumnFieldList(const DescribeAnalysisColumnFieldListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalysisColumnFieldListWithOptions(request, runtime);
}

/**
 * @summary Query Custom Columns
 *
 * @param request DescribeAnalysisColumnListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalysisColumnListResponse
 */
DescribeAnalysisColumnListResponse Client::describeAnalysisColumnListWithOptions(const DescribeAnalysisColumnListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalysisColumnList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalysisColumnListResponse>();
}

/**
 * @summary Query Custom Columns
 *
 * @param request DescribeAnalysisColumnListRequest
 * @return DescribeAnalysisColumnListResponse
 */
DescribeAnalysisColumnListResponse Client::describeAnalysisColumnList(const DescribeAnalysisColumnListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalysisColumnListWithOptions(request, runtime);
}

/**
 * @summary Query Condition List
 *
 * @param request DescribeAnalysisConditionFavoriteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalysisConditionFavoriteListResponse
 */
DescribeAnalysisConditionFavoriteListResponse Client::describeAnalysisConditionFavoriteListWithOptions(const DescribeAnalysisConditionFavoriteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalysisConditionFavoriteList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalysisConditionFavoriteListResponse>();
}

/**
 * @summary Query Condition List
 *
 * @param request DescribeAnalysisConditionFavoriteListRequest
 * @return DescribeAnalysisConditionFavoriteListResponse
 */
DescribeAnalysisConditionFavoriteListResponse Client::describeAnalysisConditionFavoriteList(const DescribeAnalysisConditionFavoriteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalysisConditionFavoriteListWithOptions(request, runtime);
}

/**
 * @summary Download Query Results
 *
 * @param request DescribeAnalysisExportTaskDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalysisExportTaskDownloadUrlResponse
 */
DescribeAnalysisExportTaskDownloadUrlResponse Client::describeAnalysisExportTaskDownloadUrlWithOptions(const DescribeAnalysisExportTaskDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalysisExportTaskDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalysisExportTaskDownloadUrlResponse>();
}

/**
 * @summary Download Query Results
 *
 * @param request DescribeAnalysisExportTaskDownloadUrlRequest
 * @return DescribeAnalysisExportTaskDownloadUrlResponse
 */
DescribeAnalysisExportTaskDownloadUrlResponse Client::describeAnalysisExportTaskDownloadUrl(const DescribeAnalysisExportTaskDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalysisExportTaskDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Get API Details
 *
 * @param request DescribeApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiResponse
 */
DescribeApiResponse Client::describeApiWithOptions(const DescribeApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasApiId()) {
    query["apiId"] = request.apiId();
  }

  if (!!request.hasApiRegionId()) {
    query["apiRegionId"] = request.apiRegionId();
  }

  if (!!request.hasApiType()) {
    query["apiType"] = request.apiType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApi"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiResponse>();
}

/**
 * @summary Get API Details
 *
 * @param request DescribeApiRequest
 * @return DescribeApiResponse
 */
DescribeApiResponse Client::describeApi(const DescribeApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiWithOptions(request, runtime);
}

/**
 * @summary Get API groups including those purchased by the user and custom ones
 *
 * @param request DescribeApiGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiGroupsResponse
 */
DescribeApiGroupsResponse Client::describeApiGroupsWithOptions(const DescribeApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasApiRegionId()) {
    query["apiRegionId"] = request.apiRegionId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiGroups"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiGroupsResponse>();
}

/**
 * @summary Get API groups including those purchased by the user and custom ones
 *
 * @param request DescribeApiGroupsRequest
 * @return DescribeApiGroupsResponse
 */
DescribeApiGroupsResponse Client::describeApiGroups(const DescribeApiGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiGroupsWithOptions(request, runtime);
}

/**
 * @summary Query the limit information for creating API tasks
 *
 * @param request DescribeApiLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiLimitResponse
 */
DescribeApiLimitResponse Client::describeApiLimitWithOptions(const DescribeApiLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiLimitResponse>();
}

/**
 * @summary Query the limit information for creating API tasks
 *
 * @param request DescribeApiLimitRequest
 * @return DescribeApiLimitResponse
 */
DescribeApiLimitResponse Client::describeApiLimit(const DescribeApiLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiLimitWithOptions(request, runtime);
}

/**
 * @summary Get API Service Name
 *
 * @param request DescribeApiNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiNameListResponse
 */
DescribeApiNameListResponse Client::describeApiNameListWithOptions(const DescribeApiNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiNameListResponse>();
}

/**
 * @summary Get API Service Name
 *
 * @param request DescribeApiNameListRequest
 * @return DescribeApiNameListResponse
 */
DescribeApiNameListResponse Client::describeApiNameList(const DescribeApiNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiNameListWithOptions(request, runtime);
}

/**
 * @summary Query Variable Details
 *
 * @param request DescribeApiVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiVariableResponse
 */
DescribeApiVariableResponse Client::describeApiVariableWithOptions(const DescribeApiVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiVariableResponse>();
}

/**
 * @summary Query Variable Details
 *
 * @param request DescribeApiVariableRequest
 * @return DescribeApiVariableResponse
 */
DescribeApiVariableResponse Client::describeApiVariable(const DescribeApiVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiVariableWithOptions(request, runtime);
}

/**
 * @summary Get API list including purchased and customized APIs
 *
 * @param request DescribeApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisResponse
 */
DescribeApisResponse Client::describeApisWithOptions(const DescribeApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasApiGroupId()) {
    query["apiGroupId"] = request.apiGroupId();
  }

  if (!!request.hasApiRegionId()) {
    query["apiRegionId"] = request.apiRegionId();
  }

  if (!!request.hasApiType()) {
    query["apiType"] = request.apiType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApis"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisResponse>();
}

/**
 * @summary Get API list including purchased and customized APIs
 *
 * @param request DescribeApisRequest
 * @return DescribeApisResponse
 */
DescribeApisResponse Client::describeApis(const DescribeApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisWithOptions(request, runtime);
}

/**
 * @summary Query appKey List
 *
 * @param request DescribeAppKeyPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppKeyPageResponse
 */
DescribeAppKeyPageResponse Client::describeAppKeyPageWithOptions(const DescribeAppKeyPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppKeyPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppKeyPageResponse>();
}

/**
 * @summary Query appKey List
 *
 * @param request DescribeAppKeyPageRequest
 * @return DescribeAppKeyPageResponse
 */
DescribeAppKeyPageResponse Client::describeAppKeyPage(const DescribeAppKeyPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppKeyPageWithOptions(request, runtime);
}

/**
 * @summary Approval Switch
 *
 * @param request DescribeAuditConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditConfigResponse
 */
DescribeAuditConfigResponse Client::describeAuditConfigWithOptions(const DescribeAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasAuditRelationType()) {
    query["auditRelationType"] = request.auditRelationType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditConfig"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditConfigResponse>();
}

/**
 * @summary Approval Switch
 *
 * @param request DescribeAuditConfigRequest
 * @return DescribeAuditConfigResponse
 */
DescribeAuditConfigResponse Client::describeAuditConfig(const DescribeAuditConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditConfigWithOptions(request, runtime);
}

/**
 * @summary Approval Details
 *
 * @param request DescribeAuditDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditDetailsResponse
 */
DescribeAuditDetailsResponse Client::describeAuditDetailsWithOptions(const DescribeAuditDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditDetails"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditDetailsResponse>();
}

/**
 * @summary Approval Details
 *
 * @param request DescribeAuditDetailsRequest
 * @return DescribeAuditDetailsResponse
 */
DescribeAuditDetailsResponse Client::describeAuditDetails(const DescribeAuditDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditDetailsWithOptions(request, runtime);
}

/**
 * @summary Display and Query of Audit List
 *
 * @param request DescribeAuditPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditPageListResponse
 */
DescribeAuditPageListResponse Client::describeAuditPageListWithOptions(const DescribeAuditPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasAuditStatus()) {
    query["auditStatus"] = request.auditStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditPageListResponse>();
}

/**
 * @summary Display and Query of Audit List
 *
 * @param request DescribeAuditPageListRequest
 * @return DescribeAuditPageListResponse
 */
DescribeAuditPageListResponse Client::describeAuditPageList(const DescribeAuditPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditPageListWithOptions(request, runtime);
}

/**
 * @summary Query the list of event names for the current user
 *
 * @param request DescribeAuthEventNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthEventNameListResponse
 */
DescribeAuthEventNameListResponse Client::describeAuthEventNameListWithOptions(const DescribeAuthEventNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthEventNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthEventNameListResponse>();
}

/**
 * @summary Query the list of event names for the current user
 *
 * @param request DescribeAuthEventNameListRequest
 * @return DescribeAuthEventNameListResponse
 */
DescribeAuthEventNameListResponse Client::describeAuthEventNameList(const DescribeAuthEventNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthEventNameListWithOptions(request, runtime);
}

/**
 * @summary 策略列表
 *
 * @param request DescribeAuthRulePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthRulePageListResponse
 */
DescribeAuthRulePageListResponse Client::describeAuthRulePageListWithOptions(const DescribeAuthRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.ruleName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthRulePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthRulePageListResponse>();
}

/**
 * @summary 策略列表
 *
 * @param request DescribeAuthRulePageListRequest
 * @return DescribeAuthRulePageListResponse
 */
DescribeAuthRulePageListResponse Client::describeAuthRulePageList(const DescribeAuthRulePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthRulePageListWithOptions(request, runtime);
}

/**
 * @summary 场景列表
 *
 * @param request DescribeAuthSceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthSceneListResponse
 */
DescribeAuthSceneListResponse Client::describeAuthSceneListWithOptions(const DescribeAuthSceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthSceneList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthSceneListResponse>();
}

/**
 * @summary 场景列表
 *
 * @param request DescribeAuthSceneListRequest
 * @return DescribeAuthSceneListResponse
 */
DescribeAuthSceneListResponse Client::describeAuthSceneList(const DescribeAuthSceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthSceneListWithOptions(request, runtime);
}

/**
 * @summary Scene List
 *
 * @param request DescribeAuthScenePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthScenePageListResponse
 */
DescribeAuthScenePageListResponse Client::describeAuthScenePageListWithOptions(const DescribeAuthScenePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSceneName()) {
    query["sceneName"] = request.sceneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthScenePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthScenePageListResponse>();
}

/**
 * @summary Scene List
 *
 * @param request DescribeAuthScenePageListRequest
 * @return DescribeAuthScenePageListResponse
 */
DescribeAuthScenePageListResponse Client::describeAuthScenePageList(const DescribeAuthScenePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthScenePageListWithOptions(request, runtime);
}

/**
 * @summary Check Authorization
 *
 * @param request DescribeAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthStatusResponse
 */
DescribeAuthStatusResponse Client::describeAuthStatusWithOptions(const DescribeAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthStatus"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthStatusResponse>();
}

/**
 * @summary Check Authorization
 *
 * @param request DescribeAuthStatusRequest
 * @return DescribeAuthStatusResponse
 */
DescribeAuthStatusResponse Client::describeAuthStatus(const DescribeAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Average Execution Time
 *
 * @param request DescribeAvgExecuteCostReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvgExecuteCostReportResponse
 */
DescribeAvgExecuteCostReportResponse Client::describeAvgExecuteCostReportWithOptions(const DescribeAvgExecuteCostReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvgExecuteCostReport"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvgExecuteCostReportResponse>();
}

/**
 * @summary Average Execution Time
 *
 * @param request DescribeAvgExecuteCostReportRequest
 * @return DescribeAvgExecuteCostReportResponse
 */
DescribeAvgExecuteCostReportResponse Client::describeAvgExecuteCostReport(const DescribeAvgExecuteCostReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvgExecuteCostReportWithOptions(request, runtime);
}

/**
 * @summary Basic Query
 *
 * @param request DescribeBasicSearchPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBasicSearchPageListResponse
 */
DescribeBasicSearchPageListResponse Client::describeBasicSearchPageListWithOptions(const DescribeBasicSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.eventBeginTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.eventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.fieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.fieldValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBasicSearchPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBasicSearchPageListResponse>();
}

/**
 * @summary Basic Query
 *
 * @param request DescribeBasicSearchPageListRequest
 * @return DescribeBasicSearchPageListResponse
 */
DescribeBasicSearchPageListResponse Client::describeBasicSearchPageList(const DescribeBasicSearchPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBasicSearchPageListWithOptions(request, runtime);
}

/**
 * @summary 基础统计
 *
 * @param request DescribeBasicStartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBasicStartResponse
 */
DescribeBasicStartResponse Client::describeBasicStartWithOptions(const DescribeBasicStartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["appKey"] = request.appKey();
  }

  if (!!request.hasEndDs()) {
    query["endDs"] = request.endDs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasService()) {
    query["service"] = request.service();
  }

  if (!!request.hasStartDs()) {
    query["startDs"] = request.startDs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBasicStart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBasicStartResponse>();
}

/**
 * @summary 基础统计
 *
 * @param request DescribeBasicStartRequest
 * @return DescribeBasicStartResponse
 */
DescribeBasicStartResponse Client::describeBasicStart(const DescribeBasicStartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBasicStartWithOptions(request, runtime);
}

/**
 * @summary View Bypass Event
 *
 * @param request DescribeByPassShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeByPassShuntEventResponse
 */
DescribeByPassShuntEventResponse Client::describeByPassShuntEventWithOptions(const DescribeByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.eventId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeByPassShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeByPassShuntEventResponse>();
}

/**
 * @summary View Bypass Event
 *
 * @param request DescribeByPassShuntEventRequest
 * @return DescribeByPassShuntEventResponse
 */
DescribeByPassShuntEventResponse Client::describeByPassShuntEvent(const DescribeByPassShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeByPassShuntEventWithOptions(request, runtime);
}

/**
 * @summary Query the type configuration of custom accumulated variables
 *
 * @param request DescribeCustVariableConfigListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustVariableConfigListResponse
 */
DescribeCustVariableConfigListResponse Client::describeCustVariableConfigListWithOptions(const DescribeCustVariableConfigListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBizType()) {
    query["bizType"] = request.bizType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTimeType()) {
    query["timeType"] = request.timeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustVariableConfigList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustVariableConfigListResponse>();
}

/**
 * @summary Query the type configuration of custom accumulated variables
 *
 * @param request DescribeCustVariableConfigListRequest
 * @return DescribeCustVariableConfigListResponse
 */
DescribeCustVariableConfigListResponse Client::describeCustVariableConfigList(const DescribeCustVariableConfigListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustVariableConfigListWithOptions(request, runtime);
}

/**
 * @summary Cumulative Variable Details
 *
 * @param request DescribeCustVariableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustVariableDetailResponse
 */
DescribeCustVariableDetailResponse Client::describeCustVariableDetailWithOptions(const DescribeCustVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustVariableDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustVariableDetailResponse>();
}

/**
 * @summary Cumulative Variable Details
 *
 * @param request DescribeCustVariableDetailRequest
 * @return DescribeCustVariableDetailResponse
 */
DescribeCustVariableDetailResponse Client::describeCustVariableDetail(const DescribeCustVariableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustVariableDetailWithOptions(request, runtime);
}

/**
 * @summary Query Custom Accumulated Variable List
 *
 * @description List Query of Accumulated Variables
 *
 * @param request DescribeCustVariablePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustVariablePageResponse
 */
DescribeCustVariablePageResponse Client::describeCustVariablePageWithOptions(const DescribeCustVariablePageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustVariablePage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustVariablePageResponse>();
}

/**
 * @summary Query Custom Accumulated Variable List
 *
 * @description List Query of Accumulated Variables
 *
 * @param request DescribeCustVariablePageRequest
 * @return DescribeCustVariablePageResponse
 */
DescribeCustVariablePageResponse Client::describeCustVariablePage(const DescribeCustVariablePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustVariablePageWithOptions(request, runtime);
}

/**
 * @summary Get Data Source Data Download Link
 *
 * @param request DescribeDataSourceDataDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataSourceDataDownloadUrlResponse
 */
DescribeDataSourceDataDownloadUrlResponse Client::describeDataSourceDataDownloadUrlWithOptions(const DescribeDataSourceDataDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataSourceId()) {
    query["dataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataSourceDataDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSourceDataDownloadUrlResponse>();
}

/**
 * @summary Get Data Source Data Download Link
 *
 * @param request DescribeDataSourceDataDownloadUrlRequest
 * @return DescribeDataSourceDataDownloadUrlResponse
 */
DescribeDataSourceDataDownloadUrlResponse Client::describeDataSourceDataDownloadUrl(const DescribeDataSourceDataDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSourceDataDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieve all fields of a data source
 *
 * @param request DescribeDataSourceFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataSourceFieldsResponse
 */
DescribeDataSourceFieldsResponse Client::describeDataSourceFieldsWithOptions(const DescribeDataSourceFieldsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataSourceCode()) {
    query["dataSourceCode"] = request.dataSourceCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataSourceFields"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSourceFieldsResponse>();
}

/**
 * @summary Retrieve all fields of a data source
 *
 * @param request DescribeDataSourceFieldsRequest
 * @return DescribeDataSourceFieldsResponse
 */
DescribeDataSourceFieldsResponse Client::describeDataSourceFields(const DescribeDataSourceFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSourceFieldsWithOptions(request, runtime);
}

/**
 * @summary Data Source List Interface
 *
 * @param request DescribeDataSourcePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataSourcePageListResponse
 */
DescribeDataSourcePageListResponse Client::describeDataSourcePageListWithOptions(const DescribeDataSourcePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataSourcePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSourcePageListResponse>();
}

/**
 * @summary Data Source List Interface
 *
 * @param request DescribeDataSourcePageListRequest
 * @return DescribeDataSourcePageListResponse
 */
DescribeDataSourcePageListResponse Client::describeDataSourcePageList(const DescribeDataSourcePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSourcePageListWithOptions(request, runtime);
}

/**
 * @summary Decision Result Fluctuation Detection
 *
 * @param request DescribeDecisionResultFluctuationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDecisionResultFluctuationResponse
 */
DescribeDecisionResultFluctuationResponse Client::describeDecisionResultFluctuationWithOptions(const DescribeDecisionResultFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDecisionResultFluctuation"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDecisionResultFluctuationResponse>();
}

/**
 * @summary Decision Result Fluctuation Detection
 *
 * @param request DescribeDecisionResultFluctuationRequest
 * @return DescribeDecisionResultFluctuationResponse
 */
DescribeDecisionResultFluctuationResponse Client::describeDecisionResultFluctuation(const DescribeDecisionResultFluctuationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDecisionResultFluctuationWithOptions(request, runtime);
}

/**
 * @summary Decision Result Fluctuation Trend
 *
 * @param request DescribeDecisionResultTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDecisionResultTrendResponse
 */
DescribeDecisionResultTrendResponse Client::describeDecisionResultTrendWithOptions(const DescribeDecisionResultTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDecisionResultTrend"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDecisionResultTrendResponse>();
}

/**
 * @summary Decision Result Fluctuation Trend
 *
 * @param request DescribeDecisionResultTrendRequest
 * @return DescribeDecisionResultTrendResponse
 */
DescribeDecisionResultTrendResponse Client::describeDecisionResultTrend(const DescribeDecisionResultTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDecisionResultTrendWithOptions(request, runtime);
}

/**
 * @summary Detailed Statistics
 *
 * @param request DescribeDetailStartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDetailStartResponse
 */
DescribeDetailStartResponse Client::describeDetailStartWithOptions(const DescribeDetailStartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["appKey"] = request.appKey();
  }

  if (!!request.hasEndDs()) {
    query["endDs"] = request.endDs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasService()) {
    query["service"] = request.service();
  }

  if (!!request.hasStartDs()) {
    query["startDs"] = request.startDs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDetailStart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDetailStartResponse>();
}

/**
 * @summary Detailed Statistics
 *
 * @param request DescribeDetailStartRequest
 * @return DescribeDetailStartResponse
 */
DescribeDetailStartResponse Client::describeDetailStart(const DescribeDetailStartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDetailStartWithOptions(request, runtime);
}

/**
 * @summary Download
 *
 * @param request DescribeDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadUrlResponse
 */
DescribeDownloadUrlResponse Client::describeDownloadUrlWithOptions(const DescribeDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileType()) {
    query["FileType"] = request.fileType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadUrlResponse>();
}

/**
 * @summary Download
 *
 * @param request DescribeDownloadUrlRequest
 * @return DescribeDownloadUrlResponse
 */
DescribeDownloadUrlResponse Client::describeDownloadUrl(const DescribeDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Query Event Details
 *
 * @param request DescribeEventBaseInfoByEventCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventBaseInfoByEventCodeResponse
 */
DescribeEventBaseInfoByEventCodeResponse Client::describeEventBaseInfoByEventCodeWithOptions(const DescribeEventBaseInfoByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventBaseInfoByEventCode"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventBaseInfoByEventCodeResponse>();
}

/**
 * @summary Query Event Details
 *
 * @param request DescribeEventBaseInfoByEventCodeRequest
 * @return DescribeEventBaseInfoByEventCodeResponse
 */
DescribeEventBaseInfoByEventCodeResponse Client::describeEventBaseInfoByEventCode(const DescribeEventBaseInfoByEventCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventBaseInfoByEventCodeWithOptions(request, runtime);
}

/**
 * @summary Query Total Event Count
 *
 * @param request DescribeEventCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventCountResponse
 */
DescribeEventCountResponse Client::describeEventCountWithOptions(const DescribeEventCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventCount"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventCountResponse>();
}

/**
 * @summary Query Total Event Count
 *
 * @param request DescribeEventCountRequest
 * @return DescribeEventCountResponse
 */
DescribeEventCountResponse Client::describeEventCount(const DescribeEventCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventCountWithOptions(request, runtime);
}

/**
 * @summary Query event details based on the request ID
 *
 * @param request DescribeEventDetailByRequestIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventDetailByRequestIdResponse
 */
DescribeEventDetailByRequestIdResponse Client::describeEventDetailByRequestIdWithOptions(const DescribeEventDetailByRequestIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasEventTime()) {
    query["eventTime"] = request.eventTime();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSRequestId()) {
    query["sRequestId"] = request.sRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventDetailByRequestId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventDetailByRequestIdResponse>();
}

/**
 * @summary Query event details based on the request ID
 *
 * @param request DescribeEventDetailByRequestIdRequest
 * @return DescribeEventDetailByRequestIdResponse
 */
DescribeEventDetailByRequestIdResponse Client::describeEventDetailByRequestId(const DescribeEventDetailByRequestIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventDetailByRequestIdWithOptions(request, runtime);
}

/**
 * @summary Query Event History Details
 *
 * @param request DescribeEventLogDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventLogDetailResponse
 */
DescribeEventLogDetailResponse Client::describeEventLogDetailWithOptions(const DescribeEventLogDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasReqIdByLog()) {
    query["reqIdByLog"] = request.reqIdByLog();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventLogDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventLogDetailResponse>();
}

/**
 * @summary Query Event History Details
 *
 * @param request DescribeEventLogDetailRequest
 * @return DescribeEventLogDetailResponse
 */
DescribeEventLogDetailResponse Client::describeEventLogDetail(const DescribeEventLogDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventLogDetailWithOptions(request, runtime);
}

/**
 * @summary Query Event History List
 *
 * @param request DescribeEventLogPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventLogPageResponse
 */
DescribeEventLogPageResponse Client::describeEventLogPageWithOptions(const DescribeEventLogPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasAccountIdPRP()) {
    query["accountIdPRP"] = request.accountIdPRP();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasCondition1AL()) {
    query["condition1AL"] = request.condition1AL();
  }

  if (!!request.hasCondition2AL()) {
    query["condition2AL"] = request.condition2AL();
  }

  if (!!request.hasCondition3AL()) {
    query["condition3AL"] = request.condition3AL();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDeviceTypeLRP()) {
    query["deviceTypeLRP"] = request.deviceTypeLRP();
  }

  if (!!request.hasEmailPRP()) {
    query["emailPRP"] = request.emailPRP();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasFailReasonLRP()) {
    query["failReasonLRP"] = request.failReasonLRP();
  }

  if (!!request.hasIpPRP()) {
    query["ipPRP"] = request.ipPRP();
  }

  if (!!request.hasLoginResultARP()) {
    query["loginResultARP"] = request.loginResultARP();
  }

  if (!!request.hasLoginTypeLRP()) {
    query["loginTypeLRP"] = request.loginTypeLRP();
  }

  if (!!request.hasMacPRP()) {
    query["macPRP"] = request.macPRP();
  }

  if (!!request.hasMobilePRP()) {
    query["mobilePRP"] = request.mobilePRP();
  }

  if (!!request.hasNickNamePRP()) {
    query["nickNamePRP"] = request.nickNamePRP();
  }

  if (!!request.hasOperateSourceLRP()) {
    query["operateSourceLRP"] = request.operateSourceLRP();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasReferPRP()) {
    query["referPRP"] = request.referPRP();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRegisterIpPRP()) {
    query["registerIpPRP"] = request.registerIpPRP();
  }

  if (!!request.hasReqIdPBS()) {
    query["reqIdPBS"] = request.reqIdPBS();
  }

  if (!!request.hasScoreEBS()) {
    query["scoreEBS"] = request.scoreEBS();
  }

  if (!!request.hasScoreSBS()) {
    query["scoreSBS"] = request.scoreSBS();
  }

  if (!!request.hasServiceABS()) {
    query["serviceABS"] = request.serviceABS();
  }

  if (!!request.hasTagsLBS()) {
    query["tagsLBS"] = request.tagsLBS();
  }

  if (!!request.hasUmidPDI()) {
    query["umidPDI"] = request.umidPDI();
  }

  if (!!request.hasUserAgentPRP()) {
    query["userAgentPRP"] = request.userAgentPRP();
  }

  if (!!request.hasUserNameTypeLRP()) {
    query["userNameTypeLRP"] = request.userNameTypeLRP();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventLogPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventLogPageResponse>();
}

/**
 * @summary Query Event History List
 *
 * @param request DescribeEventLogPageRequest
 * @return DescribeEventLogPageResponse
 */
DescribeEventLogPageResponse Client::describeEventLogPage(const DescribeEventLogPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventLogPageWithOptions(request, runtime);
}

/**
 * @summary Paged Query for Events
 *
 * @param request DescribeEventPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventPageListResponse
 */
DescribeEventPageListResponse Client::describeEventPageListWithOptions(const DescribeEventPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.eventName();
  }

  if (!!request.hasEventStatus()) {
    query["eventStatus"] = request.eventStatus();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventPageListResponse>();
}

/**
 * @summary Paged Query for Events
 *
 * @param request DescribeEventPageListRequest
 * @return DescribeEventPageListResponse
 */
DescribeEventPageListResponse Client::describeEventPageList(const DescribeEventPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventPageListWithOptions(request, runtime);
}

/**
 * @summary Risk Dashboard
 *
 * @param request DescribeEventResultBarChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventResultBarChartResponse
 */
DescribeEventResultBarChartResponse Client::describeEventResultBarChartWithOptions(const DescribeEventResultBarChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventResultBarChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventResultBarChartResponse>();
}

/**
 * @summary Risk Dashboard
 *
 * @param request DescribeEventResultBarChartRequest
 * @return DescribeEventResultBarChartResponse
 */
DescribeEventResultBarChartResponse Client::describeEventResultBarChart(const DescribeEventResultBarChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventResultBarChartWithOptions(request, runtime);
}

/**
 * @summary Event Overview List
 *
 * @param request DescribeEventResultListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventResultListResponse
 */
DescribeEventResultListResponse Client::describeEventResultListWithOptions(const DescribeEventResultListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventResultList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventResultListResponse>();
}

/**
 * @summary Event Overview List
 *
 * @param request DescribeEventResultListRequest
 * @return DescribeEventResultListResponse
 */
DescribeEventResultListResponse Client::describeEventResultList(const DescribeEventResultListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventResultListWithOptions(request, runtime);
}

/**
 * @summary Query Policy Download List
 *
 * @param request DescribeEventTaskHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventTaskHistoryResponse
 */
DescribeEventTaskHistoryResponse Client::describeEventTaskHistoryWithOptions(const DescribeEventTaskHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventTaskHistory"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventTaskHistoryResponse>();
}

/**
 * @summary Query Policy Download List
 *
 * @param request DescribeEventTaskHistoryRequest
 * @return DescribeEventTaskHistoryResponse
 */
DescribeEventTaskHistoryResponse Client::describeEventTaskHistory(const DescribeEventTaskHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventTaskHistoryWithOptions(request, runtime);
}

/**
 * @summary Event Invocation Count
 *
 * @param request DescribeEventTotalCountReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventTotalCountReportResponse
 */
DescribeEventTotalCountReportResponse Client::describeEventTotalCountReportWithOptions(const DescribeEventTotalCountReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventTotalCountReport"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventTotalCountReportResponse>();
}

/**
 * @summary Event Invocation Count
 *
 * @param request DescribeEventTotalCountReportRequest
 * @return DescribeEventTotalCountReportResponse
 */
DescribeEventTotalCountReportResponse Client::describeEventTotalCountReport(const DescribeEventTotalCountReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventTotalCountReportWithOptions(request, runtime);
}

/**
 * @summary Batch Import Policy
 *
 * @param request DescribeEventUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventUploadPolicyResponse
 */
DescribeEventUploadPolicyResponse Client::describeEventUploadPolicyWithOptions(const DescribeEventUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventUploadPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventUploadPolicyResponse>();
}

/**
 * @summary Batch Import Policy
 *
 * @param request DescribeEventUploadPolicyRequest
 * @return DescribeEventUploadPolicyResponse
 */
DescribeEventUploadPolicyResponse Client::describeEventUploadPolicy(const DescribeEventUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary Query event variables
 *
 * @description Cumulative Variable List Query
 *
 * @param request DescribeEventVariableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventVariableListResponse
 */
DescribeEventVariableListResponse Client::describeEventVariableListWithOptions(const DescribeEventVariableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasFilterDTO()) {
    query["filterDTO"] = request.filterDTO();
  }

  if (!!request.hasRefObjId()) {
    query["refObjId"] = request.refObjId();
  }

  if (!!request.hasRefObjType()) {
    query["refObjType"] = request.refObjType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventVariableList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventVariableListResponse>();
}

/**
 * @summary Query event variables
 *
 * @description Cumulative Variable List Query
 *
 * @param request DescribeEventVariableListRequest
 * @return DescribeEventVariableListResponse
 */
DescribeEventVariableListResponse Client::describeEventVariableList(const DescribeEventVariableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventVariableListWithOptions(request, runtime);
}

/**
 * @summary Query Event Template
 *
 * @param request DescribeEventVariableTemplateBindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventVariableTemplateBindResponse
 */
DescribeEventVariableTemplateBindResponse Client::describeEventVariableTemplateBindWithOptions(const DescribeEventVariableTemplateBindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasInputs()) {
    query["inputs"] = request.inputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.templateCode();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventVariableTemplateBind"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventVariableTemplateBindResponse>();
}

/**
 * @summary Query Event Template
 *
 * @param request DescribeEventVariableTemplateBindRequest
 * @return DescribeEventVariableTemplateBindResponse
 */
DescribeEventVariableTemplateBindResponse Client::describeEventVariableTemplateBind(const DescribeEventVariableTemplateBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventVariableTemplateBindWithOptions(request, runtime);
}

/**
 * @summary Query Event Template
 *
 * @param request DescribeEventVariableTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventVariableTemplateListResponse
 */
DescribeEventVariableTemplateListResponse Client::describeEventVariableTemplateListWithOptions(const DescribeEventVariableTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasInputs()) {
    query["inputs"] = request.inputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.templateCode();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventVariableTemplateList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventVariableTemplateListResponse>();
}

/**
 * @summary Query Event Template
 *
 * @param request DescribeEventVariableTemplateListRequest
 * @return DescribeEventVariableTemplateListResponse
 */
DescribeEventVariableTemplateListResponse Client::describeEventVariableTemplateList(const DescribeEventVariableTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventVariableTemplateListWithOptions(request, runtime);
}

/**
 * @summary Query Event Variables
 *
 * @param request DescribeEventsVariableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsVariableListResponse
 */
DescribeEventsVariableListResponse Client::describeEventsVariableListWithOptions(const DescribeEventsVariableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasFilterDTO()) {
    query["filterDTO"] = request.filterDTO();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventsVariableList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventsVariableListResponse>();
}

/**
 * @summary Query Event Variables
 *
 * @param request DescribeEventsVariableListRequest
 * @return DescribeEventsVariableListResponse
 */
DescribeEventsVariableListResponse Client::describeEventsVariableList(const DescribeEventsVariableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsVariableListWithOptions(request, runtime);
}

/**
 * @summary Self-service call list.
 *
 * @param request DescribeExcuteNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExcuteNumResponse
 */
DescribeExcuteNumResponse Client::describeExcuteNumWithOptions(const DescribeExcuteNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasDegree()) {
    query["Degree"] = request.degree();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExcuteNum"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExcuteNumResponse>();
}

/**
 * @summary Self-service call list.
 *
 * @param request DescribeExcuteNumRequest
 * @return DescribeExcuteNumResponse
 */
DescribeExcuteNumResponse Client::describeExcuteNum(const DescribeExcuteNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExcuteNumWithOptions(request, runtime);
}

/**
 * @summary Validate if the field name is duplicated (based on user\\"s organization)
 *
 * @param request DescribeExistNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExistNameResponse
 */
DescribeExistNameResponse Client::describeExistNameWithOptions(const DescribeExistNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExistName"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExistNameResponse>();
}

/**
 * @summary Validate if the field name is duplicated (based on user\\"s organization)
 *
 * @param request DescribeExistNameRequest
 * @return DescribeExistNameResponse
 */
DescribeExistNameResponse Client::describeExistName(const DescribeExistNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExistNameWithOptions(request, runtime);
}

/**
 * @summary Check if Scene Exists
 *
 * @param request DescribeExistSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExistSceneResponse
 */
DescribeExistSceneResponse Client::describeExistSceneWithOptions(const DescribeExistSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExistScene"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExistSceneResponse>();
}

/**
 * @summary Check if Scene Exists
 *
 * @param request DescribeExistSceneRequest
 * @return DescribeExistSceneResponse
 */
DescribeExistSceneResponse Client::describeExistScene(const DescribeExistSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExistSceneWithOptions(request, runtime);
}

/**
 * @summary Custom Variable Details
 *
 * @param request DescribeExpressionVariableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressionVariableDetailResponse
 */
DescribeExpressionVariableDetailResponse Client::describeExpressionVariableDetailWithOptions(const DescribeExpressionVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExpressionVariableDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressionVariableDetailResponse>();
}

/**
 * @summary Custom Variable Details
 *
 * @param request DescribeExpressionVariableDetailRequest
 * @return DescribeExpressionVariableDetailResponse
 */
DescribeExpressionVariableDetailResponse Client::describeExpressionVariableDetail(const DescribeExpressionVariableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressionVariableDetailWithOptions(request, runtime);
}

/**
 * @summary Function List
 *
 * @param request DescribeExpressionVariableFunctionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressionVariableFunctionListResponse
 */
DescribeExpressionVariableFunctionListResponse Client::describeExpressionVariableFunctionListWithOptions(const DescribeExpressionVariableFunctionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExpressionVariableFunctionList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressionVariableFunctionListResponse>();
}

/**
 * @summary Function List
 *
 * @param request DescribeExpressionVariableFunctionListRequest
 * @return DescribeExpressionVariableFunctionListResponse
 */
DescribeExpressionVariableFunctionListResponse Client::describeExpressionVariableFunctionList(const DescribeExpressionVariableFunctionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressionVariableFunctionListWithOptions(request, runtime);
}

/**
 * @summary Paged Query for Custom Variables.
 *
 * @param request DescribeExpressionVariablePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressionVariablePageResponse
 */
DescribeExpressionVariablePageResponse Client::describeExpressionVariablePageWithOptions(const DescribeExpressionVariablePageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.outputs();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasValue()) {
    query["value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExpressionVariablePage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressionVariablePageResponse>();
}

/**
 * @summary Paged Query for Custom Variables.
 *
 * @param request DescribeExpressionVariablePageRequest
 * @return DescribeExpressionVariablePageResponse
 */
DescribeExpressionVariablePageResponse Client::describeExpressionVariablePage(const DescribeExpressionVariablePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressionVariablePageWithOptions(request, runtime);
}

/**
 * @summary Get Field Details
 *
 * @param request DescribeFieldByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFieldByIdResponse
 */
DescribeFieldByIdResponse Client::describeFieldByIdWithOptions(const DescribeFieldByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFieldById"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFieldByIdResponse>();
}

/**
 * @summary Get Field Details
 *
 * @param request DescribeFieldByIdRequest
 * @return DescribeFieldByIdResponse
 */
DescribeFieldByIdResponse Client::describeFieldById(const DescribeFieldByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFieldByIdWithOptions(request, runtime);
}

/**
 * @summary Query Field List
 *
 * @param request DescribeFieldListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFieldListResponse
 */
DescribeFieldListResponse Client::describeFieldListWithOptions(const DescribeFieldListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.condition();
  }

  if (!!request.hasInputs()) {
    query["inputs"] = request.inputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFieldList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFieldListResponse>();
}

/**
 * @summary Query Field List
 *
 * @param request DescribeFieldListRequest
 * @return DescribeFieldListResponse
 */
DescribeFieldListResponse Client::describeFieldList(const DescribeFieldListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFieldListWithOptions(request, runtime);
}

/**
 * @summary Query paged list of fields
 *
 * @param request DescribeFieldPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFieldPageResponse
 */
DescribeFieldPageResponse Client::describeFieldPageWithOptions(const DescribeFieldPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasClassify()) {
    query["classify"] = request.classify();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.condition();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFieldPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFieldPageResponse>();
}

/**
 * @summary Query paged list of fields
 *
 * @param request DescribeFieldPageRequest
 * @return DescribeFieldPageResponse
 */
DescribeFieldPageResponse Client::describeFieldPage(const DescribeFieldPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFieldPageWithOptions(request, runtime);
}

/**
 * @summary Community Account List
 *
 * @param request DescribeGroupAccountPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupAccountPageResponse
 */
DescribeGroupAccountPageResponse Client::describeGroupAccountPageWithOptions(const DescribeGroupAccountPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCommunityNo()) {
    query["communityNo"] = request.communityNo();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.direction();
  }

  if (!!request.hasFieldKey()) {
    query["fieldKey"] = request.fieldKey();
  }

  if (!!request.hasFieldVal()) {
    query["fieldVal"] = request.fieldVal();
  }

  if (!!request.hasIsPage()) {
    query["isPage"] = request.isPage();
  }

  if (!!request.hasOrder()) {
    query["order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupAccountPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupAccountPageResponse>();
}

/**
 * @summary Community Account List
 *
 * @param request DescribeGroupAccountPageRequest
 * @return DescribeGroupAccountPageResponse
 */
DescribeGroupAccountPageResponse Client::describeGroupAccountPage(const DescribeGroupAccountPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupAccountPageWithOptions(request, runtime);
}

/**
 * @summary Community List Query Conditions
 *
 * @param request DescribeGroupConditionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupConditionListResponse
 */
DescribeGroupConditionListResponse Client::describeGroupConditionListWithOptions(const DescribeGroupConditionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupConditionList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupConditionListResponse>();
}

/**
 * @summary Community List Query Conditions
 *
 * @param request DescribeGroupConditionListRequest
 * @return DescribeGroupConditionListResponse
 */
DescribeGroupConditionListResponse Client::describeGroupConditionList(const DescribeGroupConditionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupConditionListWithOptions(request, runtime);
}

/**
 * @summary Community List
 *
 * @param request DescribeGroupPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupPageResponse
 */
DescribeGroupPageResponse Client::describeGroupPageWithOptions(const DescribeGroupPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.direction();
  }

  if (!!request.hasOrder()) {
    query["order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  if (!!request.hasTimeType()) {
    query["timeType"] = request.timeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupPageResponse>();
}

/**
 * @summary Community List
 *
 * @param request DescribeGroupPageRequest
 * @return DescribeGroupPageResponse
 */
DescribeGroupPageResponse Client::describeGroupPage(const DescribeGroupPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupPageWithOptions(request, runtime);
}

/**
 * @summary Risk Communities Discovered Today
 *
 * @param request DescribeGroupStatisticsByTodayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupStatisticsByTodayResponse
 */
DescribeGroupStatisticsByTodayResponse Client::describeGroupStatisticsByTodayWithOptions(const DescribeGroupStatisticsByTodayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupStatisticsByToday"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupStatisticsByTodayResponse>();
}

/**
 * @summary Risk Communities Discovered Today
 *
 * @param request DescribeGroupStatisticsByTodayRequest
 * @return DescribeGroupStatisticsByTodayResponse
 */
DescribeGroupStatisticsByTodayResponse Client::describeGroupStatisticsByToday(const DescribeGroupStatisticsByTodayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupStatisticsByTodayWithOptions(request, runtime);
}

/**
 * @summary Recent Trends in Risk Communities
 *
 * @param request DescribeGroupTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupTrendResponse
 */
DescribeGroupTrendResponse Client::describeGroupTrendWithOptions(const DescribeGroupTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDay()) {
    query["day"] = request.day();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupTrend"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupTrendResponse>();
}

/**
 * @summary Recent Trends in Risk Communities
 *
 * @param request DescribeGroupTrendRequest
 * @return DescribeGroupTrendResponse
 */
DescribeGroupTrendResponse Client::describeGroupTrend(const DescribeGroupTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupTrendWithOptions(request, runtime);
}

/**
 * @summary Check if the policy name under the event name exists
 *
 * @param request DescribeHasRuleNameByEventCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHasRuleNameByEventCodeResponse
 */
DescribeHasRuleNameByEventCodeResponse Client::describeHasRuleNameByEventCodeWithOptions(const DescribeHasRuleNameByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasExcludeRuleId()) {
    query["excludeRuleId"] = request.excludeRuleId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHasRuleNameByEventCode"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHasRuleNameByEventCodeResponse>();
}

/**
 * @summary Check if the policy name under the event name exists
 *
 * @param request DescribeHasRuleNameByEventCodeRequest
 * @return DescribeHasRuleNameByEventCodeResponse
 */
DescribeHasRuleNameByEventCodeResponse Client::describeHasRuleNameByEventCode(const DescribeHasRuleNameByEventCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHasRuleNameByEventCodeWithOptions(request, runtime);
}

/**
 * @summary Risk Map Overview Chart (Pie Chart)
 *
 * @param request DescribeHighRiskPieChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHighRiskPieChartResponse
 */
DescribeHighRiskPieChartResponse Client::describeHighRiskPieChartWithOptions(const DescribeHighRiskPieChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHighRiskPieChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHighRiskPieChartResponse>();
}

/**
 * @summary Risk Map Overview Chart (Pie Chart)
 *
 * @param request DescribeHighRiskPieChartRequest
 * @return DescribeHighRiskPieChartResponse
 */
DescribeHighRiskPieChartResponse Client::describeHighRiskPieChart(const DescribeHighRiskPieChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHighRiskPieChartWithOptions(request, runtime);
}

/**
 * @summary Policy Hit Fluctuation Detection
 *
 * @param request DescribeHitRuleFluctuationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHitRuleFluctuationResponse
 */
DescribeHitRuleFluctuationResponse Client::describeHitRuleFluctuationWithOptions(const DescribeHitRuleFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.ruleStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHitRuleFluctuation"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHitRuleFluctuationResponse>();
}

/**
 * @summary Policy Hit Fluctuation Detection
 *
 * @param request DescribeHitRuleFluctuationRequest
 * @return DescribeHitRuleFluctuationResponse
 */
DescribeHitRuleFluctuationResponse Client::describeHitRuleFluctuation(const DescribeHitRuleFluctuationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHitRuleFluctuationWithOptions(request, runtime);
}

/**
 * @summary Top 20 Hits for Main Events/Bypass/Diversion Strategies
 *
 * @param request DescribeHitRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHitRuleListResponse
 */
DescribeHitRuleListResponse Client::describeHitRuleListWithOptions(const DescribeHitRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasEventType()) {
    query["eventType"] = request.eventType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHitRuleList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHitRuleListResponse>();
}

/**
 * @summary Top 20 Hits for Main Events/Bypass/Diversion Strategies
 *
 * @param request DescribeHitRuleListRequest
 * @return DescribeHitRuleListResponse
 */
DescribeHitRuleListResponse Client::describeHitRuleList(const DescribeHitRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHitRuleListWithOptions(request, runtime);
}

/**
 * @summary Hit Rule Trend
 *
 * @param request DescribeHitRuleTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHitRuleTrendResponse
 */
DescribeHitRuleTrendResponse Client::describeHitRuleTrendWithOptions(const DescribeHitRuleTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.ruleStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHitRuleTrend"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHitRuleTrendResponse>();
}

/**
 * @summary Hit Rule Trend
 *
 * @param request DescribeHitRuleTrendRequest
 * @return DescribeHitRuleTrendResponse
 */
DescribeHitRuleTrendResponse Client::describeHitRuleTrend(const DescribeHitRuleTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHitRuleTrendWithOptions(request, runtime);
}

/**
 * @summary Initialization Popup Information
 *
 * @description Add prompt information in BOPS, POC new page initialization popup prompts this information
 *
 * @param request DescribeInitDigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInitDigResponse
 */
DescribeInitDigResponse Client::describeInitDigWithOptions(const DescribeInitDigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInitDig"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInitDigResponse>();
}

/**
 * @summary Initialization Popup Information
 *
 * @description Add prompt information in BOPS, POC new page initialization popup prompts this information
 *
 * @param request DescribeInitDigRequest
 * @return DescribeInitDigResponse
 */
DescribeInitDigResponse Client::describeInitDig(const DescribeInitDigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInitDigWithOptions(request, runtime);
}

/**
 * @summary Query Total Number of Events
 *
 * @param request DescribeInputFeildCountByEventCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInputFeildCountByEventCodeResponse
 */
DescribeInputFeildCountByEventCodeResponse Client::describeInputFeildCountByEventCodeWithOptions(const DescribeInputFeildCountByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInputFeildCountByEventCode"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInputFeildCountByEventCodeResponse>();
}

/**
 * @summary Query Total Number of Events
 *
 * @param request DescribeInputFeildCountByEventCodeRequest
 * @return DescribeInputFeildCountByEventCodeResponse
 */
DescribeInputFeildCountByEventCodeResponse Client::describeInputFeildCountByEventCode(const DescribeInputFeildCountByEventCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInputFeildCountByEventCodeWithOptions(request, runtime);
}

/**
 * @summary Display of Model List
 *
 * @param request DescribeListModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListModelResponse
 */
DescribeListModelResponse Client::describeListModelWithOptions(const DescribeListModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeListModel"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListModelResponse>();
}

/**
 * @summary Display of Model List
 *
 * @param request DescribeListModelRequest
 * @return DescribeListModelResponse
 */
DescribeListModelResponse Client::describeListModel(const DescribeListModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListModelWithOptions(request, runtime);
}

/**
 * @summary Task List
 *
 * @param request DescribeListPocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListPocResponse
 */
DescribeListPocResponse Client::describeListPocWithOptions(const DescribeListPocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeListPoc"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListPocResponse>();
}

/**
 * @summary Task List
 *
 * @param request DescribeListPocRequest
 * @return DescribeListPocResponse
 */
DescribeListPocResponse Client::describeListPoc(const DescribeListPocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListPocWithOptions(request, runtime);
}

/**
 * @summary Get Monitoring Object List
 *
 * @param request DescribeLoanExecListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoanExecListResponse
 */
DescribeLoanExecListResponse Client::describeLoanExecListWithOptions(const DescribeLoanExecListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBatchNo()) {
    query["batchNo"] = request.batchNo();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasMonitorObj()) {
    query["monitorObj"] = request.monitorObj();
  }

  if (!!request.hasMonitorStatus()) {
    query["monitorStatus"] = request.monitorStatus();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoanExecList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoanExecListResponse>();
}

/**
 * @summary Get Monitoring Object List
 *
 * @param request DescribeLoanExecListRequest
 * @return DescribeLoanExecListResponse
 */
DescribeLoanExecListResponse Client::describeLoanExecList(const DescribeLoanExecListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoanExecListWithOptions(request, runtime);
}

/**
 * @summary Get Loan Monitoring Task List
 *
 * @param request DescribeLoanTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoanTaskListResponse
 */
DescribeLoanTaskListResponse Client::describeLoanTaskListWithOptions(const DescribeLoanTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBatchNo()) {
    query["batchNo"] = request.batchNo();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasMonitorStatus()) {
    query["monitorStatus"] = request.monitorStatus();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoanTaskList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoanTaskListResponse>();
}

/**
 * @summary Get Loan Monitoring Task List
 *
 * @param request DescribeLoanTaskListRequest
 * @return DescribeLoanTaskListResponse
 */
DescribeLoanTaskListResponse Client::describeLoanTaskList(const DescribeLoanTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoanTaskListWithOptions(request, runtime);
}

/**
 * @summary Mark List
 *
 * @param request DescribeMarkPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMarkPageResponse
 */
DescribeMarkPageResponse Client::describeMarkPageWithOptions(const DescribeMarkPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.direction();
  }

  if (!!request.hasIsPage()) {
    query["isPage"] = request.isPage();
  }

  if (!!request.hasOrder()) {
    query["order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTaskLogId()) {
    query["taskLogId"] = request.taskLogId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMarkPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMarkPageResponse>();
}

/**
 * @summary Mark List
 *
 * @param request DescribeMarkPageRequest
 * @return DescribeMarkPageResponse
 */
DescribeMarkPageResponse Client::describeMarkPage(const DescribeMarkPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMarkPageWithOptions(request, runtime);
}

/**
 * @summary Check Permission
 *
 * @param request DescribeMenuPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMenuPermissionResponse
 */
DescribeMenuPermissionResponse Client::describeMenuPermissionWithOptions(const DescribeMenuPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPermissionType()) {
    query["permissionType"] = request.permissionType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMenuPermission"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMenuPermissionResponse>();
}

/**
 * @summary Check Permission
 *
 * @param request DescribeMenuPermissionRequest
 * @return DescribeMenuPermissionResponse
 */
DescribeMenuPermissionResponse Client::describeMenuPermission(const DescribeMenuPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMenuPermissionWithOptions(request, runtime);
}

/**
 * @summary View Result
 *
 * @param request DescribeModelDetailsByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelDetailsByIdResponse
 */
DescribeModelDetailsByIdResponse Client::describeModelDetailsByIdWithOptions(const DescribeModelDetailsByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelId()) {
    query["ModelId"] = request.modelId();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelDetailsById"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelDetailsByIdResponse>();
}

/**
 * @summary View Result
 *
 * @param request DescribeModelDetailsByIdRequest
 * @return DescribeModelDetailsByIdResponse
 */
DescribeModelDetailsByIdResponse Client::describeModelDetailsById(const DescribeModelDetailsByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelDetailsByIdWithOptions(request, runtime);
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeModelOssPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelOssPolicyResponse
 */
DescribeModelOssPolicyResponse Client::describeModelOssPolicyWithOptions(const DescribeModelOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelOssPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelOssPolicyResponse>();
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeModelOssPolicyRequest
 * @return DescribeModelOssPolicyResponse
 */
DescribeModelOssPolicyResponse Client::describeModelOssPolicy(const DescribeModelOssPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelOssPolicyWithOptions(request, runtime);
}

/**
 * @summary Query Task Limit
 *
 * @param request DescribeMonitorTaskLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorTaskLimitResponse
 */
DescribeMonitorTaskLimitResponse Client::describeMonitorTaskLimitWithOptions(const DescribeMonitorTaskLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorTaskLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorTaskLimitResponse>();
}

/**
 * @summary Query Task Limit
 *
 * @param request DescribeMonitorTaskLimitRequest
 * @return DescribeMonitorTaskLimitResponse
 */
DescribeMonitorTaskLimitResponse Client::describeMonitorTaskLimit(const DescribeMonitorTaskLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorTaskLimitWithOptions(request, runtime);
}

/**
 * @summary Query Name List Pagination
 *
 * @param request DescribeNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListResponse
 */
DescribeNameListResponse Client::describeNameListWithOptions(const DescribeNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasValue()) {
    query["value"] = request.value();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.variableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListResponse>();
}

/**
 * @summary Query Name List Pagination
 *
 * @param request DescribeNameListRequest
 * @return DescribeNameListResponse
 */
DescribeNameListResponse Client::describeNameList(const DescribeNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListWithOptions(request, runtime);
}

/**
 * @summary Download Name List
 *
 * @param request DescribeNameListDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListDownloadUrlResponse
 */
DescribeNameListDownloadUrlResponse Client::describeNameListDownloadUrlWithOptions(const DescribeNameListDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.variableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListDownloadUrlResponse>();
}

/**
 * @summary Download Name List
 *
 * @param request DescribeNameListDownloadUrlRequest
 * @return DescribeNameListDownloadUrlResponse
 */
DescribeNameListDownloadUrlResponse Client::describeNameListDownloadUrl(const DescribeNameListDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Query Name List Limit
 *
 * @param request DescribeNameListLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListLimitResponse
 */
DescribeNameListLimitResponse Client::describeNameListLimitWithOptions(const DescribeNameListLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListLimitResponse>();
}

/**
 * @summary Query Name List Limit
 *
 * @param request DescribeNameListLimitRequest
 * @return DescribeNameListLimitResponse
 */
DescribeNameListLimitResponse Client::describeNameListLimit(const DescribeNameListLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListLimitWithOptions(request, runtime);
}

/**
 * @summary Query the content of the list
 *
 * @param request DescribeNameListPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListPageListResponse
 */
DescribeNameListPageListResponse Client::describeNameListPageListWithOptions(const DescribeNameListPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasUpdateBeginTime()) {
    query["updateBeginTime"] = request.updateBeginTime();
  }

  if (!!request.hasUpdateEndTime()) {
    query["updateEndTime"] = request.updateEndTime();
  }

  if (!!request.hasValue()) {
    query["value"] = request.value();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.variableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListPageListResponse>();
}

/**
 * @summary Query the content of the list
 *
 * @param request DescribeNameListPageListRequest
 * @return DescribeNameListPageListResponse
 */
DescribeNameListPageListResponse Client::describeNameListPageList(const DescribeNameListPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListPageListWithOptions(request, runtime);
}

/**
 * @summary List of Name Types
 *
 * @param request DescribeNameListTypeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListTypeListResponse
 */
DescribeNameListTypeListResponse Client::describeNameListTypeListWithOptions(const DescribeNameListTypeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListTypeList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListTypeListResponse>();
}

/**
 * @summary List of Name Types
 *
 * @param request DescribeNameListTypeListRequest
 * @return DescribeNameListTypeListResponse
 */
DescribeNameListTypeListResponse Client::describeNameListTypeList(const DescribeNameListTypeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListTypeListWithOptions(request, runtime);
}

/**
 * @summary Name List
 *
 * @param request DescribeNameListVariablePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListVariablePageListResponse
 */
DescribeNameListVariablePageListResponse Client::describeNameListVariablePageListWithOptions(const DescribeNameListVariablePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasNameListType()) {
    query["nameListType"] = request.nameListType();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasValue()) {
    query["value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListVariablePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListVariablePageListResponse>();
}

/**
 * @summary Name List
 *
 * @param request DescribeNameListVariablePageListRequest
 * @return DescribeNameListVariablePageListResponse
 */
DescribeNameListVariablePageListResponse Client::describeNameListVariablePageList(const DescribeNameListVariablePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListVariablePageListWithOptions(request, runtime);
}

/**
 * @summary Query Operation Log Monitoring Statistics
 *
 * @param request DescribeOperationLogMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperationLogMonitoringResponse
 */
DescribeOperationLogMonitoringResponse Client::describeOperationLogMonitoringWithOptions(const DescribeOperationLogMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.endDate();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.startDate();
  }

  if (!!request.hasUserNameSearch()) {
    query["userNameSearch"] = request.userNameSearch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperationLogMonitoring"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperationLogMonitoringResponse>();
}

/**
 * @summary Query Operation Log Monitoring Statistics
 *
 * @param request DescribeOperationLogMonitoringRequest
 * @return DescribeOperationLogMonitoringResponse
 */
DescribeOperationLogMonitoringResponse Client::describeOperationLogMonitoring(const DescribeOperationLogMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperationLogMonitoringWithOptions(request, runtime);
}

/**
 * @summary Query event list by event name
 *
 * @param request DescribeOperationLogPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperationLogPageListResponse
 */
DescribeOperationLogPageListResponse Client::describeOperationLogPageListWithOptions(const DescribeOperationLogPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.endDate();
  }

  if (!!request.hasOperationSummary()) {
    query["operationSummary"] = request.operationSummary();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.startDate();
  }

  if (!!request.hasUserNameSearch()) {
    query["userNameSearch"] = request.userNameSearch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperationLogPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperationLogPageListResponse>();
}

/**
 * @summary Query event list by event name
 *
 * @param request DescribeOperationLogPageListRequest
 * @return DescribeOperationLogPageListResponse
 */
DescribeOperationLogPageListResponse Client::describeOperationLogPageList(const DescribeOperationLogPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperationLogPageListWithOptions(request, runtime);
}

/**
 * @summary Query the operator mapping list based on customer ID
 *
 * @param request DescribeOperatorListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorListResponse
 */
DescribeOperatorListResponse Client::describeOperatorListWithOptions(const DescribeOperatorListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperatorList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorListResponse>();
}

/**
 * @summary Query the operator mapping list based on customer ID
 *
 * @param request DescribeOperatorListRequest
 * @return DescribeOperatorListResponse
 */
DescribeOperatorListResponse Client::describeOperatorList(const DescribeOperatorListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorListWithOptions(request, runtime);
}

/**
 * @summary Query Operator Mapping List
 *
 * @param request DescribeOperatorListBySceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorListBySceneResponse
 */
DescribeOperatorListBySceneResponse Client::describeOperatorListBySceneWithOptions(const DescribeOperatorListBySceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperatorListByScene"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorListBySceneResponse>();
}

/**
 * @summary Query Operator Mapping List
 *
 * @param request DescribeOperatorListBySceneRequest
 * @return DescribeOperatorListBySceneResponse
 */
DescribeOperatorListBySceneResponse Client::describeOperatorListByScene(const DescribeOperatorListBySceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorListBySceneWithOptions(request, runtime);
}

/**
 * @summary Query Operator Mapping List
 *
 * @param request DescribeOperatorListByTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorListByTypeResponse
 */
DescribeOperatorListByTypeResponse Client::describeOperatorListByTypeWithOptions(const DescribeOperatorListByTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperatorListByType"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorListByTypeResponse>();
}

/**
 * @summary Query Operator Mapping List
 *
 * @param request DescribeOperatorListByTypeRequest
 * @return DescribeOperatorListByTypeResponse
 */
DescribeOperatorListByTypeResponse Client::describeOperatorListByType(const DescribeOperatorListByTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorListByTypeWithOptions(request, runtime);
}

/**
 * @summary Check Oss Authorization
 *
 * @param request DescribeOssAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssAuthStatusResponse
 */
DescribeOssAuthStatusResponse Client::describeOssAuthStatusWithOptions(const DescribeOssAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssAuthStatus"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssAuthStatusResponse>();
}

/**
 * @summary Check Oss Authorization
 *
 * @param request DescribeOssAuthStatusRequest
 * @return DescribeOssAuthStatusResponse
 */
DescribeOssAuthStatusResponse Client::describeOssAuthStatus(const DescribeOssAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Get OSS Policy
 *
 * @param request DescribeOssPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssPolicyResponse
 */
DescribeOssPolicyResponse Client::describeOssPolicyWithOptions(const DescribeOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssPolicyResponse>();
}

/**
 * @summary Get OSS Policy
 *
 * @param request DescribeOssPolicyRequest
 * @return DescribeOssPolicyResponse
 */
DescribeOssPolicyResponse Client::describeOssPolicy(const DescribeOssPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssPolicyWithOptions(request, runtime);
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeOssTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssTokenResponse
 */
DescribeOssTokenResponse Client::describeOssTokenWithOptions(const DescribeOssTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasUploadType()) {
    query["uploadType"] = request.uploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssToken"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssTokenResponse>();
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeOssTokenRequest
 * @return DescribeOssTokenResponse
 */
DescribeOssTokenResponse Client::describeOssToken(const DescribeOssTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssTokenWithOptions(request, runtime);
}

/**
 * @summary Query Event Property List
 *
 * @param request DescribeParamByEventCodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParamByEventCodesResponse
 */
DescribeParamByEventCodesResponse Client::describeParamByEventCodesWithOptions(const DescribeParamByEventCodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasParma()) {
    query["parma"] = request.parma();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParamByEventCodes"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParamByEventCodesResponse>();
}

/**
 * @summary Query Event Property List
 *
 * @param request DescribeParamByEventCodesRequest
 * @return DescribeParamByEventCodesResponse
 */
DescribeParamByEventCodesResponse Client::describeParamByEventCodes(const DescribeParamByEventCodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParamByEventCodesWithOptions(request, runtime);
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribePocOssTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePocOssTokenResponse
 */
DescribePocOssTokenResponse Client::describePocOssTokenWithOptions(const DescribePocOssTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePocOssToken"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePocOssTokenResponse>();
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribePocOssTokenRequest
 * @return DescribePocOssTokenResponse
 */
DescribePocOssTokenResponse Client::describePocOssToken(const DescribePocOssTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePocOssTokenWithOptions(request, runtime);
}

/**
 * @summary Get POC Task List
 *
 * @param request DescribePocTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePocTaskListResponse
 */
DescribePocTaskListResponse Client::describePocTaskListWithOptions(const DescribePocTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePocTaskList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePocTaskListResponse>();
}

/**
 * @summary Get POC Task List
 *
 * @param request DescribePocTaskListRequest
 * @return DescribePocTaskListResponse
 */
DescribePocTaskListResponse Client::describePocTaskList(const DescribePocTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePocTaskListWithOptions(request, runtime);
}

/**
 * @summary Determine if Stack Private Domain Mode is Enabled
 *
 * @param request DescribePrivateStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrivateStackResponse
 */
DescribePrivateStackResponse Client::describePrivateStackWithOptions(const DescribePrivateStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrivateStack"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrivateStackResponse>();
}

/**
 * @summary Determine if Stack Private Domain Mode is Enabled
 *
 * @param request DescribePrivateStackRequest
 * @return DescribePrivateStackResponse
 */
DescribePrivateStackResponse Client::describePrivateStack(const DescribePrivateStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateStackWithOptions(request, runtime);
}

/**
 * @summary Query Variable Detail Query
 *
 * @param request DescribeQueryVariableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQueryVariableDetailResponse
 */
DescribeQueryVariableDetailResponse Client::describeQueryVariableDetailWithOptions(const DescribeQueryVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQueryVariableDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQueryVariableDetailResponse>();
}

/**
 * @summary Query Variable Detail Query
 *
 * @param request DescribeQueryVariableDetailRequest
 * @return DescribeQueryVariableDetailResponse
 */
DescribeQueryVariableDetailResponse Client::describeQueryVariableDetail(const DescribeQueryVariableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQueryVariableDetailWithOptions(request, runtime);
}

/**
 * @summary 查询变量列表查询
 *
 * @param request DescribeQueryVariablePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQueryVariablePageListResponse
 */
DescribeQueryVariablePageListResponse Client::describeQueryVariablePageListWithOptions(const DescribeQueryVariablePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDataSourceCode()) {
    query["dataSourceCode"] = request.dataSourceCode();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQueryVariablePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQueryVariablePageListResponse>();
}

/**
 * @summary 查询变量列表查询
 *
 * @param request DescribeQueryVariablePageListRequest
 * @return DescribeQueryVariablePageListResponse
 */
DescribeQueryVariablePageListResponse Client::describeQueryVariablePageList(const DescribeQueryVariablePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQueryVariablePageListWithOptions(request, runtime);
}

/**
 * @summary Query Variable List under Sample & Scenario
 *
 * @param request DescribeRecommendSceneVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendSceneVariablesResponse
 */
DescribeRecommendSceneVariablesResponse Client::describeRecommendSceneVariablesWithOptions(const DescribeRecommendSceneVariablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleId()) {
    query["sampleId"] = request.sampleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendSceneVariables"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendSceneVariablesResponse>();
}

/**
 * @summary Query Variable List under Sample & Scenario
 *
 * @param request DescribeRecommendSceneVariablesRequest
 * @return DescribeRecommendSceneVariablesResponse
 */
DescribeRecommendSceneVariablesResponse Client::describeRecommendSceneVariables(const DescribeRecommendSceneVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendSceneVariablesWithOptions(request, runtime);
}

/**
 * @summary Variable Recommendation Details Query Interface
 *
 * @param request DescribeRecommendTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendTaskDetailResponse
 */
DescribeRecommendTaskDetailResponse Client::describeRecommendTaskDetailWithOptions(const DescribeRecommendTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendTaskDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendTaskDetailResponse>();
}

/**
 * @summary Variable Recommendation Details Query Interface
 *
 * @param request DescribeRecommendTaskDetailRequest
 * @return DescribeRecommendTaskDetailResponse
 */
DescribeRecommendTaskDetailResponse Client::describeRecommendTaskDetail(const DescribeRecommendTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Variable Recommendation List Query Interface
 *
 * @param request DescribeRecommendTaskPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendTaskPageListResponse
 */
DescribeRecommendTaskPageListResponse Client::describeRecommendTaskPageListWithOptions(const DescribeRecommendTaskPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTaskName()) {
    query["taskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendTaskPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendTaskPageListResponse>();
}

/**
 * @summary Variable Recommendation List Query Interface
 *
 * @param request DescribeRecommendTaskPageListRequest
 * @return DescribeRecommendTaskPageListResponse
 */
DescribeRecommendTaskPageListResponse Client::describeRecommendTaskPageList(const DescribeRecommendTaskPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendTaskPageListWithOptions(request, runtime);
}

/**
 * @summary Query Indicators Information under Variables
 *
 * @param request DescribeRecommendVariablesVelocityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendVariablesVelocityResponse
 */
DescribeRecommendVariablesVelocityResponse Client::describeRecommendVariablesVelocityWithOptions(const DescribeRecommendVariablesVelocityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  if (!!request.hasVariableIdsStr()) {
    query["variableIdsStr"] = request.variableIdsStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendVariablesVelocity"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendVariablesVelocityResponse>();
}

/**
 * @summary Query Indicators Information under Variables
 *
 * @param request DescribeRecommendVariablesVelocityRequest
 * @return DescribeRecommendVariablesVelocityResponse
 */
DescribeRecommendVariablesVelocityResponse Client::describeRecommendVariablesVelocity(const DescribeRecommendVariablesVelocityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendVariablesVelocityWithOptions(request, runtime);
}

/**
 * @summary Query Supported Metrics List
 *
 * @param request DescribeRecommendVelocitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendVelocitiesResponse
 */
DescribeRecommendVelocitiesResponse Client::describeRecommendVelocitiesWithOptions(const DescribeRecommendVelocitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCode()) {
    query["code"] = request.code();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendVelocities"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendVelocitiesResponse>();
}

/**
 * @summary Query Supported Metrics List
 *
 * @param request DescribeRecommendVelocitiesRequest
 * @return DescribeRecommendVelocitiesResponse
 */
DescribeRecommendVelocitiesResponse Client::describeRecommendVelocities(const DescribeRecommendVelocitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendVelocitiesWithOptions(request, runtime);
}

/**
 * @summary Query the list of regions supported by ApiGateway
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Query the list of regions supported by ApiGateway
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Query Request Hit Details
 *
 * @param request DescribeRequestHitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRequestHitResponse
 */
DescribeRequestHitResponse Client::describeRequestHitWithOptions(const DescribeRequestHitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSRequestId()) {
    query["sRequestId"] = request.sRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRequestHit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRequestHitResponse>();
}

/**
 * @summary Query Request Hit Details
 *
 * @param request DescribeRequestHitRequest
 * @return DescribeRequestHitResponse
 */
DescribeRequestHitResponse Client::describeRequestHit(const DescribeRequestHitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRequestHitWithOptions(request, runtime);
}

/**
 * @summary Request Peak
 *
 * @param request DescribeRequestPeakReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRequestPeakReportResponse
 */
DescribeRequestPeakReportResponse Client::describeRequestPeakReportWithOptions(const DescribeRequestPeakReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRequestPeakReport"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRequestPeakReportResponse>();
}

/**
 * @summary Request Peak
 *
 * @param request DescribeRequestPeakReportRequest
 * @return DescribeRequestPeakReportResponse
 */
DescribeRequestPeakReportResponse Client::describeRequestPeakReport(const DescribeRequestPeakReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRequestPeakReportWithOptions(request, runtime);
}

/**
 * @summary Drill-down Analysis
 *
 * @param request DescribeResultCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResultCountResponse
 */
DescribeResultCountResponse Client::describeResultCountWithOptions(const DescribeResultCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResultCount"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResultCountResponse>();
}

/**
 * @summary Drill-down Analysis
 *
 * @param request DescribeResultCountRequest
 * @return DescribeResultCountResponse
 */
DescribeResultCountResponse Client::describeResultCount(const DescribeResultCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResultCountWithOptions(request, runtime);
}

/**
 * @summary Risk map overview chart (line chart)
 *
 * @param request DescribeRiskLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskLineChartResponse
 */
DescribeRiskLineChartResponse Client::describeRiskLineChartWithOptions(const DescribeRiskLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskLineChartResponse>();
}

/**
 * @summary Risk map overview chart (line chart)
 *
 * @param request DescribeRiskLineChartRequest
 * @return DescribeRiskLineChartResponse
 */
DescribeRiskLineChartResponse Client::describeRiskLineChart(const DescribeRiskLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskLineChartWithOptions(request, runtime);
}

/**
 * @summary Tag Hit Rate Tag Hit Dimension
 *
 * @param request DescribeRiskTagsLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskTagsLineChartResponse
 */
DescribeRiskTagsLineChartResponse Client::describeRiskTagsLineChartWithOptions(const DescribeRiskTagsLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["EventCodes"] = request.eventCodes();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskTagsLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskTagsLineChartResponse>();
}

/**
 * @summary Tag Hit Rate Tag Hit Dimension
 *
 * @param request DescribeRiskTagsLineChartRequest
 * @return DescribeRiskTagsLineChartResponse
 */
DescribeRiskTagsLineChartResponse Client::describeRiskTagsLineChart(const DescribeRiskTagsLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskTagsLineChartWithOptions(request, runtime);
}

/**
 * @summary Policy Overview List
 *
 * @param request DescribeRuleBarChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleBarChartResponse
 */
DescribeRuleBarChartResponse Client::describeRuleBarChartWithOptions(const DescribeRuleBarChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleBarChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleBarChartResponse>();
}

/**
 * @summary Policy Overview List
 *
 * @param request DescribeRuleBarChartRequest
 * @return DescribeRuleBarChartResponse
 */
DescribeRuleBarChartResponse Client::describeRuleBarChart(const DescribeRuleBarChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleBarChartWithOptions(request, runtime);
}

/**
 * @summary Query Policy Count by User ID
 *
 * @param request DescribeRuleCountByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleCountByUserIdResponse
 */
DescribeRuleCountByUserIdResponse Client::describeRuleCountByUserIdWithOptions(const DescribeRuleCountByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleCountByUserId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleCountByUserIdResponse>();
}

/**
 * @summary Query Policy Count by User ID
 *
 * @param request DescribeRuleCountByUserIdRequest
 * @return DescribeRuleCountByUserIdResponse
 */
DescribeRuleCountByUserIdResponse Client::describeRuleCountByUserId(const DescribeRuleCountByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleCountByUserIdWithOptions(request, runtime);
}

/**
 * @summary Query policy/version details
 *
 * @param request DescribeRuleDetailByRuleIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleDetailByRuleIdResponse
 */
DescribeRuleDetailByRuleIdResponse Client::describeRuleDetailByRuleIdWithOptions(const DescribeRuleDetailByRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.ruleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleDetailByRuleId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleDetailByRuleIdResponse>();
}

/**
 * @summary Query policy/version details
 *
 * @param request DescribeRuleDetailByRuleIdRequest
 * @return DescribeRuleDetailByRuleIdResponse
 */
DescribeRuleDetailByRuleIdResponse Client::describeRuleDetailByRuleId(const DescribeRuleDetailByRuleIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleDetailByRuleIdWithOptions(request, runtime);
}

/**
 * @summary Query rule hit details
 *
 * @param request DescribeRuleHitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitResponse
 */
DescribeRuleHitResponse Client::describeRuleHitWithOptions(const DescribeRuleHitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRequestTime()) {
    query["requestTime"] = request.requestTime();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasRuleSnapshotId()) {
    query["ruleSnapshotId"] = request.ruleSnapshotId();
  }

  if (!!request.hasSRequestId()) {
    query["sRequestId"] = request.sRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleHit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleHitResponse>();
}

/**
 * @summary Query rule hit details
 *
 * @param request DescribeRuleHitRequest
 * @return DescribeRuleHitResponse
 */
DescribeRuleHitResponse Client::describeRuleHit(const DescribeRuleHitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitWithOptions(request, runtime);
}

/**
 * @summary Query policy list
 *
 * @param request DescribeRuleListByEventCodesListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleListByEventCodesListResponse
 */
DescribeRuleListByEventCodesListResponse Client::describeRuleListByEventCodesListWithOptions(const DescribeRuleListByEventCodesListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleListByEventCodesList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleListByEventCodesListResponse>();
}

/**
 * @summary Query policy list
 *
 * @param request DescribeRuleListByEventCodesListRequest
 * @return DescribeRuleListByEventCodesListResponse
 */
DescribeRuleListByEventCodesListResponse Client::describeRuleListByEventCodesList(const DescribeRuleListByEventCodesListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleListByEventCodesListWithOptions(request, runtime);
}

/**
 * @summary Query the list of policies
 *
 * @param request DescribeRulePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRulePageListResponse
 */
DescribeRulePageListResponse Client::describeRulePageListWithOptions(const DescribeRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleAuthType()) {
    query["ruleAuthType"] = request.ruleAuthType();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.ruleName();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.ruleStatus();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRulePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRulePageListResponse>();
}

/**
 * @summary Query the list of policies
 *
 * @param request DescribeRulePageListRequest
 * @return DescribeRulePageListResponse
 */
DescribeRulePageListResponse Client::describeRulePageList(const DescribeRulePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRulePageListWithOptions(request, runtime);
}

/**
 * @summary Query historical snapshots based on ruleId and version
 *
 * @param request DescribeRuleSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleSnapshotResponse
 */
DescribeRuleSnapshotResponse Client::describeRuleSnapshotWithOptions(const DescribeRuleSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasSnapshotVersion()) {
    query["snapshotVersion"] = request.snapshotVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleSnapshot"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleSnapshotResponse>();
}

/**
 * @summary Query historical snapshots based on ruleId and version
 *
 * @param request DescribeRuleSnapshotRequest
 * @return DescribeRuleSnapshotResponse
 */
DescribeRuleSnapshotResponse Client::describeRuleSnapshot(const DescribeRuleSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleSnapshotWithOptions(request, runtime);
}

/**
 * @summary Query Policy Version List
 *
 * @param request DescribeRuleVersionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleVersionListResponse
 */
DescribeRuleVersionListResponse Client::describeRuleVersionListWithOptions(const DescribeRuleVersionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleVersionList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleVersionListResponse>();
}

/**
 * @summary Query Policy Version List
 *
 * @param request DescribeRuleVersionListRequest
 * @return DescribeRuleVersionListResponse
 */
DescribeRuleVersionListResponse Client::describeRuleVersionList(const DescribeRuleVersionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleVersionListWithOptions(request, runtime);
}

/**
 * @summary SDK Download List
 *
 * @param request DescribeSDKDownloadListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSDKDownloadListResponse
 */
DescribeSDKDownloadListResponse Client::describeSDKDownloadListWithOptions(const DescribeSDKDownloadListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDeviceType()) {
    query["deviceType"] = request.deviceType();
  }

  if (!!request.hasListType()) {
    query["listType"] = request.listType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSDKDownloadList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSDKDownloadListResponse>();
}

/**
 * @summary SDK Download List
 *
 * @param request DescribeSDKDownloadListRequest
 * @return DescribeSDKDownloadListResponse
 */
DescribeSDKDownloadListResponse Client::describeSDKDownloadList(const DescribeSDKDownloadListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSDKDownloadListWithOptions(request, runtime);
}

/**
 * @summary Query SAF permissions.
 *
 * @param request DescribeSafConsoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafConsoleResponse
 */
DescribeSafConsoleResponse Client::describeSafConsoleWithOptions(const DescribeSafConsoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasContent()) {
    query["content"] = request.content();
  }

  if (!!request.hasService()) {
    query["service"] = request.service();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafConsole"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafConsoleResponse>();
}

/**
 * @summary Query SAF permissions.
 *
 * @param request DescribeSafConsoleRequest
 * @return DescribeSafConsoleResponse
 */
DescribeSafConsoleResponse Client::describeSafConsole(const DescribeSafConsoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafConsoleWithOptions(request, runtime);
}

/**
 * @summary Query saf_de Order
 *
 * @param request DescribeSafDeOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafDeOrderResponse
 */
DescribeSafDeOrderResponse Client::describeSafDeOrderWithOptions(const DescribeSafDeOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.endDate();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafDeOrder"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafDeOrderResponse>();
}

/**
 * @summary Query saf_de Order
 *
 * @param request DescribeSafDeOrderRequest
 * @return DescribeSafDeOrderResponse
 */
DescribeSafDeOrderResponse Client::describeSafDeOrder(const DescribeSafDeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafDeOrderWithOptions(request, runtime);
}

/**
 * @summary Query Order Information
 *
 * @param request DescribeSafOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafOrderResponse
 */
DescribeSafOrderResponse Client::describeSafOrderWithOptions(const DescribeSafOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.endDate();
  }

  if (!!request.hasExactProductCode()) {
    query["exactProductCode"] = request.exactProductCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafOrder"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafOrderResponse>();
}

/**
 * @summary Query Order Information
 *
 * @param request DescribeSafOrderRequest
 * @return DescribeSafOrderResponse
 */
DescribeSafOrderResponse Client::describeSafOrder(const DescribeSafOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafOrderWithOptions(request, runtime);
}

/**
 * @summary Query Access Configuration
 *
 * @param request DescribeSafStartConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafStartConfigResponse
 */
DescribeSafStartConfigResponse Client::describeSafStartConfigWithOptions(const DescribeSafStartConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafStartConfig"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafStartConfigResponse>();
}

/**
 * @summary Query Access Configuration
 *
 * @param request DescribeSafStartConfigRequest
 * @return DescribeSafStartConfigResponse
 */
DescribeSafStartConfigResponse Client::describeSafStartConfig(const DescribeSafStartConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafStartConfigWithOptions(request, runtime);
}

/**
 * @summary Query Access Configuration
 *
 * @param request DescribeSafStartStepsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafStartStepsResponse
 */
DescribeSafStartStepsResponse Client::describeSafStartStepsWithOptions(const DescribeSafStartStepsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasAliyunServer()) {
    query["aliyunServer"] = request.aliyunServer();
  }

  if (!!request.hasDeviceTypesStr()) {
    query["deviceTypesStr"] = request.deviceTypesStr();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.language();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasServerRegion()) {
    query["serverRegion"] = request.serverRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafStartSteps"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafStartStepsResponse>();
}

/**
 * @summary Query Access Configuration
 *
 * @param request DescribeSafStartStepsRequest
 * @return DescribeSafStartStepsResponse
 */
DescribeSafStartStepsResponse Client::describeSafStartSteps(const DescribeSafStartStepsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafStartStepsWithOptions(request, runtime);
}

/**
 * @summary Get Risk Tag List
 *
 * @param request DescribeSafTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafTagListResponse
 */
DescribeSafTagListResponse Client::describeSafTagListWithOptions(const DescribeSafTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  if (!!request.hasApiId()) {
    query["apiId"] = request.apiId();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafTagList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafTagListResponse>();
}

/**
 * @summary Get Risk Tag List
 *
 * @param request DescribeSafTagListRequest
 * @return DescribeSafTagListResponse
 */
DescribeSafTagListResponse Client::describeSafTagList(const DescribeSafTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafTagListWithOptions(request, runtime);
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeSampleBatchOssPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleBatchOssPolicyResponse
 */
DescribeSampleBatchOssPolicyResponse Client::describeSampleBatchOssPolicyWithOptions(const DescribeSampleBatchOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBatchName()) {
    query["batchName"] = request.batchName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleBatchOssPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleBatchOssPolicyResponse>();
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeSampleBatchOssPolicyRequest
 * @return DescribeSampleBatchOssPolicyResponse
 */
DescribeSampleBatchOssPolicyResponse Client::describeSampleBatchOssPolicy(const DescribeSampleBatchOssPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleBatchOssPolicyWithOptions(request, runtime);
}

/**
 * @summary Sample List
 *
 * @param request DescribeSampleDataByBatchUUidPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDataByBatchUUidPageResponse
 */
DescribeSampleDataByBatchUUidPageResponse Client::describeSampleDataByBatchUUidPageWithOptions(const DescribeSampleDataByBatchUUidPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBatchUuid()) {
    query["batchUuid"] = request.batchUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.dataValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasUpdateBeginTime()) {
    query["updateBeginTime"] = request.updateBeginTime();
  }

  if (!!request.hasUpdateEndTime()) {
    query["updateEndTime"] = request.updateEndTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDataByBatchUUidPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDataByBatchUUidPageResponse>();
}

/**
 * @summary Sample List
 *
 * @param request DescribeSampleDataByBatchUUidPageRequest
 * @return DescribeSampleDataByBatchUUidPageResponse
 */
DescribeSampleDataByBatchUUidPageResponse Client::describeSampleDataByBatchUUidPage(const DescribeSampleDataByBatchUUidPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDataByBatchUUidPageWithOptions(request, runtime);
}

/**
 * @summary Paged Query of Sample List
 *
 * @param request DescribeSampleDataListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDataListResponse
 */
DescribeSampleDataListResponse Client::describeSampleDataListWithOptions(const DescribeSampleDataListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDeleteTag()) {
    query["deleteTag"] = request.deleteTag();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasQueryContent()) {
    query["queryContent"] = request.queryContent();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleId()) {
    query["sampleId"] = request.sampleId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDataList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDataListResponse>();
}

/**
 * @summary Paged Query of Sample List
 *
 * @param request DescribeSampleDataListRequest
 * @return DescribeSampleDataListResponse
 */
DescribeSampleDataListResponse Client::describeSampleDataList(const DescribeSampleDataListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDataListWithOptions(request, runtime);
}

/**
 * @summary Sample List
 *
 * @param request DescribeSampleDataPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDataPageResponse
 */
DescribeSampleDataPageResponse Client::describeSampleDataPageWithOptions(const DescribeSampleDataPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.dataValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasUpdateBeginTime()) {
    query["updateBeginTime"] = request.updateBeginTime();
  }

  if (!!request.hasUpdateEndTime()) {
    query["updateEndTime"] = request.updateEndTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDataPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDataPageResponse>();
}

/**
 * @summary Sample List
 *
 * @param request DescribeSampleDataPageRequest
 * @return DescribeSampleDataPageResponse
 */
DescribeSampleDataPageResponse Client::describeSampleDataPage(const DescribeSampleDataPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDataPageWithOptions(request, runtime);
}

/**
 * @summary Query Sample Example Authorization
 *
 * @param request DescribeSampleDemoDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDemoDownloadUrlResponse
 */
DescribeSampleDemoDownloadUrlResponse Client::describeSampleDemoDownloadUrlWithOptions(const DescribeSampleDemoDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDemoDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDemoDownloadUrlResponse>();
}

/**
 * @summary Query Sample Example Authorization
 *
 * @param request DescribeSampleDemoDownloadUrlRequest
 * @return DescribeSampleDemoDownloadUrlResponse
 */
DescribeSampleDemoDownloadUrlResponse Client::describeSampleDemoDownloadUrl(const DescribeSampleDemoDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDemoDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Query Sample Download Authorization Information
 *
 * @param request DescribeSampleDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDownloadUrlResponse
 */
DescribeSampleDownloadUrlResponse Client::describeSampleDownloadUrlWithOptions(const DescribeSampleDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleId()) {
    query["sampleId"] = request.sampleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDownloadUrlResponse>();
}

/**
 * @summary Query Sample Download Authorization Information
 *
 * @param request DescribeSampleDownloadUrlRequest
 * @return DescribeSampleDownloadUrlResponse
 */
DescribeSampleDownloadUrlResponse Client::describeSampleDownloadUrl(const DescribeSampleDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Query Sample Details
 *
 * @param request DescribeSampleInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleInfoResponse
 */
DescribeSampleInfoResponse Client::describeSampleInfoWithOptions(const DescribeSampleInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasVersions()) {
    query["versions"] = request.versions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleInfo"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleInfoResponse>();
}

/**
 * @summary Query Sample Details
 *
 * @param request DescribeSampleInfoRequest
 * @return DescribeSampleInfoResponse
 */
DescribeSampleInfoResponse Client::describeSampleInfo(const DescribeSampleInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleInfoWithOptions(request, runtime);
}

/**
 * @summary Query Sample List
 *
 * @param request DescribeSampleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleListResponse
 */
DescribeSampleListResponse Client::describeSampleListWithOptions(const DescribeSampleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleType()) {
    query["sampleType"] = request.sampleType();
  }

  if (!!request.hasSampleValue()) {
    query["sampleValue"] = request.sampleValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleListResponse>();
}

/**
 * @summary Query Sample List
 *
 * @param request DescribeSampleListRequest
 * @return DescribeSampleListResponse
 */
DescribeSampleListResponse Client::describeSampleList(const DescribeSampleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleListWithOptions(request, runtime);
}

/**
 * @summary Query Scene List
 *
 * @param request DescribeSampleSceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleSceneListResponse
 */
DescribeSampleSceneListResponse Client::describeSampleSceneListWithOptions(const DescribeSampleSceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleSceneList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleSceneListResponse>();
}

/**
 * @summary Query Scene List
 *
 * @param request DescribeSampleSceneListRequest
 * @return DescribeSampleSceneListResponse
 */
DescribeSampleSceneListResponse Client::describeSampleSceneList(const DescribeSampleSceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleSceneListWithOptions(request, runtime);
}

/**
 * @summary Get Tag List
 *
 * @param request DescribeSampleTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleTagListResponse
 */
DescribeSampleTagListResponse Client::describeSampleTagListWithOptions(const DescribeSampleTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleTagList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleTagListResponse>();
}

/**
 * @summary Get Tag List
 *
 * @param request DescribeSampleTagListRequest
 * @return DescribeSampleTagListResponse
 */
DescribeSampleTagListResponse Client::describeSampleTagList(const DescribeSampleTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleTagListWithOptions(request, runtime);
}

/**
 * @summary Query Sample Upload Authorization Information
 *
 * @param request DescribeSampleUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleUploadPolicyResponse
 */
DescribeSampleUploadPolicyResponse Client::describeSampleUploadPolicyWithOptions(const DescribeSampleUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleUploadPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleUploadPolicyResponse>();
}

/**
 * @summary Query Sample Upload Authorization Information
 *
 * @param request DescribeSampleUploadPolicyRequest
 * @return DescribeSampleUploadPolicyResponse
 */
DescribeSampleUploadPolicyResponse Client::describeSampleUploadPolicy(const DescribeSampleUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary Sample Batch List
 *
 * @param request DescribeSamplebatchPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSamplebatchPageResponse
 */
DescribeSamplebatchPageResponse Client::describeSamplebatchPageWithOptions(const DescribeSamplebatchPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.dataValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSamplebatchPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSamplebatchPageResponse>();
}

/**
 * @summary Sample Batch List
 *
 * @param request DescribeSamplebatchPageRequest
 * @return DescribeSamplebatchPageResponse
 */
DescribeSamplebatchPageResponse Client::describeSamplebatchPage(const DescribeSamplebatchPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSamplebatchPageWithOptions(request, runtime);
}

/**
 * @summary Dropdown list for scenario-based service events
 *
 * @description Dropdown list for scenario-based risk control events
 *
 * @param request DescribeSceneAllEventNameCodeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneAllEventNameCodeListResponse
 */
DescribeSceneAllEventNameCodeListResponse Client::describeSceneAllEventNameCodeListWithOptions(const DescribeSceneAllEventNameCodeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSceneAllEventNameCodeList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSceneAllEventNameCodeListResponse>();
}

/**
 * @summary Dropdown list for scenario-based service events
 *
 * @description Dropdown list for scenario-based risk control events
 *
 * @param request DescribeSceneAllEventNameCodeListRequest
 * @return DescribeSceneAllEventNameCodeListResponse
 */
DescribeSceneAllEventNameCodeListResponse Client::describeSceneAllEventNameCodeList(const DescribeSceneAllEventNameCodeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneAllEventNameCodeListWithOptions(request, runtime);
}

/**
 * @summary List of Scenario-based Risk Control Events
 *
 * @param request DescribeSceneEventPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneEventPageListResponse
 */
DescribeSceneEventPageListResponse Client::describeSceneEventPageListWithOptions(const DescribeSceneEventPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasNameOrCode()) {
    query["nameOrCode"] = request.nameOrCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSceneEventPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSceneEventPageListResponse>();
}

/**
 * @summary List of Scenario-based Risk Control Events
 *
 * @param request DescribeSceneEventPageListRequest
 * @return DescribeSceneEventPageListResponse
 */
DescribeSceneEventPageListResponse Client::describeSceneEventPageList(const DescribeSceneEventPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneEventPageListWithOptions(request, runtime);
}

/**
 * @summary White-boxed strategy list for risk control services
 *
 * @description Query the list of scenarized risk control event strategies
 *
 * @param request DescribeSceneRulePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneRulePageListResponse
 */
DescribeSceneRulePageListResponse Client::describeSceneRulePageListWithOptions(const DescribeSceneRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleAuthType()) {
    query["ruleAuthType"] = request.ruleAuthType();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.ruleName();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.ruleStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSceneRulePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSceneRulePageListResponse>();
}

/**
 * @summary White-boxed strategy list for risk control services
 *
 * @description Query the list of scenarized risk control event strategies
 *
 * @param request DescribeSceneRulePageListRequest
 * @return DescribeSceneRulePageListResponse
 */
DescribeSceneRulePageListResponse Client::describeSceneRulePageList(const DescribeSceneRulePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneRulePageListWithOptions(request, runtime);
}

/**
 * @summary Score Distribution
 *
 * @param request DescribeScoreListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScoreListResponse
 */
DescribeScoreListResponse Client::describeScoreListWithOptions(const DescribeScoreListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScoreList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScoreListResponse>();
}

/**
 * @summary Score Distribution
 *
 * @param request DescribeScoreListRequest
 * @return DescribeScoreListResponse
 */
DescribeScoreListResponse Client::describeScoreList(const DescribeScoreListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScoreListWithOptions(request, runtime);
}

/**
 * @summary Score Range Quantity Analysis
 *
 * @param request DescribeScoreSectionNumLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScoreSectionNumLineChartResponse
 */
DescribeScoreSectionNumLineChartResponse Client::describeScoreSectionNumLineChartWithOptions(const DescribeScoreSectionNumLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasByPassEventCodes()) {
    query["byPassEventCodes"] = request.byPassEventCodes();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasMainEventCodes()) {
    query["mainEventCodes"] = request.mainEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasShuntEventCodes()) {
    query["shuntEventCodes"] = request.shuntEventCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScoreSectionNumLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScoreSectionNumLineChartResponse>();
}

/**
 * @summary Score Range Quantity Analysis
 *
 * @param request DescribeScoreSectionNumLineChartRequest
 * @return DescribeScoreSectionNumLineChartResponse
 */
DescribeScoreSectionNumLineChartResponse Client::describeScoreSectionNumLineChart(const DescribeScoreSectionNumLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScoreSectionNumLineChartWithOptions(request, runtime);
}

/**
 * @summary Proportion of Score Ranges for Main Events/Bypass Events/Diversion Events
 *
 * @param request DescribeScoreSectionPieChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScoreSectionPieChartResponse
 */
DescribeScoreSectionPieChartResponse Client::describeScoreSectionPieChartWithOptions(const DescribeScoreSectionPieChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasEventType()) {
    query["eventType"] = request.eventType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScoreSectionPieChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScoreSectionPieChartResponse>();
}

/**
 * @summary Proportion of Score Ranges for Main Events/Bypass Events/Diversion Events
 *
 * @param request DescribeScoreSectionPieChartRequest
 * @return DescribeScoreSectionPieChartResponse
 */
DescribeScoreSectionPieChartResponse Client::describeScoreSectionPieChart(const DescribeScoreSectionPieChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScoreSectionPieChartWithOptions(request, runtime);
}

/**
 * @summary Score Section Ratio Analysis
 *
 * @param request DescribeScoreSectionRatioLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScoreSectionRatioLineChartResponse
 */
DescribeScoreSectionRatioLineChartResponse Client::describeScoreSectionRatioLineChartWithOptions(const DescribeScoreSectionRatioLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasByPassEventCodes()) {
    query["byPassEventCodes"] = request.byPassEventCodes();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasMainEventCodes()) {
    query["mainEventCodes"] = request.mainEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasShuntEventCodes()) {
    query["shuntEventCodes"] = request.shuntEventCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScoreSectionRatioLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScoreSectionRatioLineChartResponse>();
}

/**
 * @summary Score Section Ratio Analysis
 *
 * @param request DescribeScoreSectionRatioLineChartRequest
 * @return DescribeScoreSectionRatioLineChartResponse
 */
DescribeScoreSectionRatioLineChartResponse Client::describeScoreSectionRatioLineChart(const DescribeScoreSectionRatioLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScoreSectionRatioLineChartWithOptions(request, runtime);
}

/**
 * @summary Query Task ID List
 *
 * @param request DescribeSelectItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSelectItemResponse
 */
DescribeSelectItemResponse Client::describeSelectItemWithOptions(const DescribeSelectItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSelectItem"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSelectItemResponse>();
}

/**
 * @summary Query Task ID List
 *
 * @param request DescribeSelectItemRequest
 * @return DescribeSelectItemResponse
 */
DescribeSelectItemResponse Client::describeSelectItem(const DescribeSelectItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSelectItemWithOptions(request, runtime);
}

/**
 * @summary ServiceAppkey dropdown
 *
 * @param request DescribeServiceAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceAppKeyResponse
 */
DescribeServiceAppKeyResponse Client::describeServiceAppKeyWithOptions(const DescribeServiceAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceAppKey"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceAppKeyResponse>();
}

/**
 * @summary ServiceAppkey dropdown
 *
 * @param request DescribeServiceAppKeyRequest
 * @return DescribeServiceAppKeyResponse
 */
DescribeServiceAppKeyResponse Client::describeServiceAppKey(const DescribeServiceAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceAppKeyWithOptions(request, runtime);
}

/**
 * @summary ServiceCodeName Information
 *
 * @param request DescribeServiceCodeNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceCodeNameResponse
 */
DescribeServiceCodeNameResponse Client::describeServiceCodeNameWithOptions(const DescribeServiceCodeNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.tab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceCodeName"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceCodeNameResponse>();
}

/**
 * @summary ServiceCodeName Information
 *
 * @param request DescribeServiceCodeNameRequest
 * @return DescribeServiceCodeNameResponse
 */
DescribeServiceCodeNameResponse Client::describeServiceCodeName(const DescribeServiceCodeNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceCodeNameWithOptions(request, runtime);
}

/**
 * @summary Get Service List
 *
 * @param request DescribeServiceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceListResponse
 */
DescribeServiceListResponse Client::describeServiceListWithOptions(const DescribeServiceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceListResponse>();
}

/**
 * @summary Get Service List
 *
 * @param request DescribeServiceListRequest
 * @return DescribeServiceListResponse
 */
DescribeServiceListResponse Client::describeServiceList(const DescribeServiceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceListWithOptions(request, runtime);
}

/**
 * @summary Estimate Call Information
 *
 * @param request DescribeSimulationPreditInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimulationPreditInfoResponse
 */
DescribeSimulationPreditInfoResponse Client::describeSimulationPreditInfoWithOptions(const DescribeSimulationPreditInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRulesStr()) {
    query["rulesStr"] = request.rulesStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimulationPreditInfo"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimulationPreditInfoResponse>();
}

/**
 * @summary Estimate Call Information
 *
 * @param request DescribeSimulationPreditInfoRequest
 * @return DescribeSimulationPreditInfoResponse
 */
DescribeSimulationPreditInfoResponse Client::describeSimulationPreditInfo(const DescribeSimulationPreditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimulationPreditInfoWithOptions(request, runtime);
}

/**
 * @summary Query Task Record Count
 *
 * @param request DescribeSimulationTaskCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimulationTaskCountResponse
 */
DescribeSimulationTaskCountResponse Client::describeSimulationTaskCountWithOptions(const DescribeSimulationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataSourceConfig()) {
    query["dataSourceConfig"] = request.dataSourceConfig();
  }

  if (!!request.hasDataSourceType()) {
    query["dataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasFiltersStr()) {
    query["filtersStr"] = request.filtersStr();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimulationTaskCount"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimulationTaskCountResponse>();
}

/**
 * @summary Query Task Record Count
 *
 * @param request DescribeSimulationTaskCountRequest
 * @return DescribeSimulationTaskCountResponse
 */
DescribeSimulationTaskCountResponse Client::describeSimulationTaskCount(const DescribeSimulationTaskCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimulationTaskCountWithOptions(request, runtime);
}

/**
 * @summary Task List
 *
 * @param request DescribeSimulationTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimulationTaskListResponse
 */
DescribeSimulationTaskListResponse Client::describeSimulationTaskListWithOptions(const DescribeSimulationTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimulationTaskList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimulationTaskListResponse>();
}

/**
 * @summary Task List
 *
 * @param request DescribeSimulationTaskListRequest
 * @return DescribeSimulationTaskListResponse
 */
DescribeSimulationTaskListResponse Client::describeSimulationTaskList(const DescribeSimulationTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimulationTaskListWithOptions(request, runtime);
}

/**
 * @summary Get Project Configuration
 *
 * @param request DescribeSlsUrlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsUrlConfigResponse
 */
DescribeSlsUrlConfigResponse Client::describeSlsUrlConfigWithOptions(const DescribeSlsUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsUrlConfig"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsUrlConfigResponse>();
}

/**
 * @summary Get Project Configuration
 *
 * @param request DescribeSlsUrlConfigRequest
 * @return DescribeSlsUrlConfigResponse
 */
DescribeSlsUrlConfigResponse Client::describeSlsUrlConfig(const DescribeSlsUrlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsUrlConfigWithOptions(request, runtime);
}

/**
 * @summary Query List of Policies Supporting Simulation
 *
 * @param request DescribeSupportRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupportRuleListResponse
 */
DescribeSupportRuleListResponse Client::describeSupportRuleListWithOptions(const DescribeSupportRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupportRuleList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupportRuleListResponse>();
}

/**
 * @summary Query List of Policies Supporting Simulation
 *
 * @param request DescribeSupportRuleListRequest
 * @return DescribeSupportRuleListResponse
 */
DescribeSupportRuleListResponse Client::describeSupportRuleList(const DescribeSupportRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportRuleListWithOptions(request, runtime);
}

/**
 * @summary Tag List
 *
 * @param request DescribeTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagListResponse
 */
DescribeTagListResponse Client::describeTagListWithOptions(const DescribeTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagListResponse>();
}

/**
 * @summary Tag List
 *
 * @param request DescribeTagListRequest
 * @return DescribeTagListResponse
 */
DescribeTagListResponse Client::describeTagList(const DescribeTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagListWithOptions(request, runtime);
}

/**
 * @summary Tag Overview List
 *
 * @param request DescribeTagsBarChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsBarChartResponse
 */
DescribeTagsBarChartResponse Client::describeTagsBarChartWithOptions(const DescribeTagsBarChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasResult()) {
    query["result"] = request.result();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsBarChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsBarChartResponse>();
}

/**
 * @summary Tag Overview List
 *
 * @param request DescribeTagsBarChartRequest
 * @return DescribeTagsBarChartResponse
 */
DescribeTagsBarChartResponse Client::describeTagsBarChart(const DescribeTagsBarChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsBarChartWithOptions(request, runtime);
}

/**
 * @summary Tag Fluctuation Detection
 *
 * @param request DescribeTagsFluctuationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsFluctuationResponse
 */
DescribeTagsFluctuationResponse Client::describeTagsFluctuationWithOptions(const DescribeTagsFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsFluctuation"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsFluctuationResponse>();
}

/**
 * @summary Tag Fluctuation Detection
 *
 * @param request DescribeTagsFluctuationRequest
 * @return DescribeTagsFluctuationResponse
 */
DescribeTagsFluctuationResponse Client::describeTagsFluctuation(const DescribeTagsFluctuationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsFluctuationWithOptions(request, runtime);
}

/**
 * @summary Get Tag List
 *
 * @param request DescribeTagsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsListResponse
 */
DescribeTagsListResponse Client::describeTagsListWithOptions(const DescribeTagsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsListResponse>();
}

/**
 * @summary Get Tag List
 *
 * @param request DescribeTagsListRequest
 * @return DescribeTagsListResponse
 */
DescribeTagsListResponse Client::describeTagsList(const DescribeTagsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsListWithOptions(request, runtime);
}

/**
 * @summary Tag Hit Count Analysis
 *
 * @param request DescribeTagsNumLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsNumLineChartResponse
 */
DescribeTagsNumLineChartResponse Client::describeTagsNumLineChartWithOptions(const DescribeTagsNumLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasByPassEventCodes()) {
    query["byPassEventCodes"] = request.byPassEventCodes();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasMainEventCodes()) {
    query["mainEventCodes"] = request.mainEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasShuntEventCodes()) {
    query["shuntEventCodes"] = request.shuntEventCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsNumLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsNumLineChartResponse>();
}

/**
 * @summary Tag Hit Count Analysis
 *
 * @param request DescribeTagsNumLineChartRequest
 * @return DescribeTagsNumLineChartResponse
 */
DescribeTagsNumLineChartResponse Client::describeTagsNumLineChart(const DescribeTagsNumLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsNumLineChartWithOptions(request, runtime);
}

/**
 * @summary Tag Hit Ratio Analysis
 *
 * @param request DescribeTagsRatioLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsRatioLineChartResponse
 */
DescribeTagsRatioLineChartResponse Client::describeTagsRatioLineChartWithOptions(const DescribeTagsRatioLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasByPassEventCodes()) {
    query["byPassEventCodes"] = request.byPassEventCodes();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasMainEventCodes()) {
    query["mainEventCodes"] = request.mainEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasShuntEventCodes()) {
    query["shuntEventCodes"] = request.shuntEventCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsRatioLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsRatioLineChartResponse>();
}

/**
 * @summary Tag Hit Ratio Analysis
 *
 * @param request DescribeTagsRatioLineChartRequest
 * @return DescribeTagsRatioLineChartResponse
 */
DescribeTagsRatioLineChartResponse Client::describeTagsRatioLineChart(const DescribeTagsRatioLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsRatioLineChartWithOptions(request, runtime);
}

/**
 * @summary Tag Hit Trend
 *
 * @param request DescribeTagsTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsTrendResponse
 */
DescribeTagsTrendResponse Client::describeTagsTrendWithOptions(const DescribeTagsTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasResult()) {
    query["result"] = request.result();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsTrend"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsTrendResponse>();
}

/**
 * @summary Tag Hit Trend
 *
 * @param request DescribeTagsTrendRequest
 * @return DescribeTagsTrendResponse
 */
DescribeTagsTrendResponse Client::describeTagsTrend(const DescribeTagsTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsTrendWithOptions(request, runtime);
}

/**
 * @summary Task List
 *
 * @param request DescribeTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskListResponse
 */
DescribeTaskListResponse Client::describeTaskListWithOptions(const DescribeTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasIsPage()) {
    query["IsPage"] = request.isPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskListResponse>();
}

/**
 * @summary Task List
 *
 * @param request DescribeTaskListRequest
 * @return DescribeTaskListResponse
 */
DescribeTaskListResponse Client::describeTaskList(const DescribeTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskListWithOptions(request, runtime);
}

/**
 * @summary Task Log List
 *
 * @param request DescribeTaskLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskLogListResponse
 */
DescribeTaskLogListResponse Client::describeTaskLogListWithOptions(const DescribeTaskLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasIsPage()) {
    query["IsPage"] = request.isPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskLogId()) {
    query["TaskLogId"] = request.taskLogId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskLogList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskLogListResponse>();
}

/**
 * @summary Task Log List
 *
 * @param request DescribeTaskLogListRequest
 * @return DescribeTaskLogListResponse
 */
DescribeTaskLogListResponse Client::describeTaskLogList(const DescribeTaskLogListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskLogListWithOptions(request, runtime);
}

/**
 * @summary Query Total Event Count
 *
 * @param request DescribeTemplateCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateCountResponse
 */
DescribeTemplateCountResponse Client::describeTemplateCountWithOptions(const DescribeTemplateCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateCount"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateCountResponse>();
}

/**
 * @summary Query Total Event Count
 *
 * @param request DescribeTemplateCountRequest
 * @return DescribeTemplateCountResponse
 */
DescribeTemplateCountResponse Client::describeTemplateCount(const DescribeTemplateCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateCountWithOptions(request, runtime);
}

/**
 * @summary Template Download
 *
 * @param request DescribeTemplateDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateDownloadResponse
 */
DescribeTemplateDownloadResponse Client::describeTemplateDownloadWithOptions(const DescribeTemplateDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateDownload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateDownloadResponse>();
}

/**
 * @summary Template Download
 *
 * @param request DescribeTemplateDownloadRequest
 * @return DescribeTemplateDownloadResponse
 */
DescribeTemplateDownloadResponse Client::describeTemplateDownload(const DescribeTemplateDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateDownloadWithOptions(request, runtime);
}

/**
 * @summary Query Event List by Event Name
 *
 * @param request DescribeTemplatePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplatePageListResponse
 */
DescribeTemplatePageListResponse Client::describeTemplatePageListWithOptions(const DescribeTemplatePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTemplateName()) {
    query["templateName"] = request.templateName();
  }

  if (!!request.hasTemplateSearchItem()) {
    query["templateSearchItem"] = request.templateSearchItem();
  }

  if (!!request.hasTemplateStatus()) {
    query["templateStatus"] = request.templateStatus();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplatePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplatePageListResponse>();
}

/**
 * @summary Query Event List by Event Name
 *
 * @param request DescribeTemplatePageListRequest
 * @return DescribeTemplatePageListResponse
 */
DescribeTemplatePageListResponse Client::describeTemplatePageList(const DescribeTemplatePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplatePageListWithOptions(request, runtime);
}

/**
 * @summary Get List of Services Used by User
 *
 * @param request DescribeUsedServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsedServiceResponse
 */
DescribeUsedServiceResponse Client::describeUsedServiceWithOptions(const DescribeUsedServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUsedService"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsedServiceResponse>();
}

/**
 * @summary Get List of Services Used by User
 *
 * @param request DescribeUsedServiceRequest
 * @return DescribeUsedServiceResponse
 */
DescribeUsedServiceResponse Client::describeUsedService(const DescribeUsedServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsedServiceWithOptions(request, runtime);
}

/**
 * @summary Get Current Logged-in User Information
 *
 * @param request DescribeUserInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserInfoResponse
 */
DescribeUserInfoResponse Client::describeUserInfoWithOptions(const DescribeUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserInfo"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserInfoResponse>();
}

/**
 * @summary Get Current Logged-in User Information
 *
 * @param request DescribeUserInfoRequest
 * @return DescribeUserInfoResponse
 */
DescribeUserInfoResponse Client::describeUserInfo(const DescribeUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserInfoWithOptions(request, runtime);
}

/**
 * @summary Query Variable Binding Information
 *
 * @param request DescribeVariableBindDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableBindDetailResponse
 */
DescribeVariableBindDetailResponse Client::describeVariableBindDetailWithOptions(const DescribeVariableBindDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDefineId()) {
    query["defineId"] = request.defineId();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableBindDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableBindDetailResponse>();
}

/**
 * @summary Query Variable Binding Information
 *
 * @param request DescribeVariableBindDetailRequest
 * @return DescribeVariableBindDetailResponse
 */
DescribeVariableBindDetailResponse Client::describeVariableBindDetail(const DescribeVariableBindDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableBindDetailWithOptions(request, runtime);
}

/**
 * @summary Query variable details
 *
 * @param request DescribeVariableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableDetailResponse
 */
DescribeVariableDetailResponse Client::describeVariableDetailWithOptions(const DescribeVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableDetailResponse>();
}

/**
 * @summary Query variable details
 *
 * @param request DescribeVariableDetailRequest
 * @return DescribeVariableDetailResponse
 */
DescribeVariableDetailResponse Client::describeVariableDetail(const DescribeVariableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableDetailWithOptions(request, runtime);
}

/**
 * @summary Query Variable Fee Information
 *
 * @param request DescribeVariableFeeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableFeeResponse
 */
DescribeVariableFeeResponse Client::describeVariableFeeWithOptions(const DescribeVariableFeeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.ids();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableFee"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableFeeResponse>();
}

/**
 * @summary Query Variable Fee Information
 *
 * @param request DescribeVariableFeeRequest
 * @return DescribeVariableFeeResponse
 */
DescribeVariableFeeResponse Client::describeVariableFee(const DescribeVariableFeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableFeeWithOptions(request, runtime);
}

/**
 * @summary Query Variable Details
 *
 * @param request DescribeVariableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableListResponse
 */
DescribeVariableListResponse Client::describeVariableListWithOptions(const DescribeVariableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRefObjId()) {
    query["refObjId"] = request.refObjId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.sourceType();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  if (!!request.hasTypesStr()) {
    query["typesStr"] = request.typesStr();
  }

  if (!!request.hasValue()) {
    query["value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableListResponse>();
}

/**
 * @summary Query Variable Details
 *
 * @param request DescribeVariableListRequest
 * @return DescribeVariableListResponse
 */
DescribeVariableListResponse Client::describeVariableList(const DescribeVariableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableListWithOptions(request, runtime);
}

/**
 * @summary Query Variable Definitions
 *
 * @param request DescribeVariableMarketListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableMarketListResponse
 */
DescribeVariableMarketListResponse Client::describeVariableMarketListWithOptions(const DescribeVariableMarketListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasChargingMode()) {
    query["chargingMode"] = request.chargingMode();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPaging()) {
    query["paging"] = request.paging();
  }

  if (!!request.hasQueryContent()) {
    query["queryContent"] = request.queryContent();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScenesStr()) {
    query["scenesStr"] = request.scenesStr();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableMarketList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableMarketListResponse>();
}

/**
 * @summary Query Variable Definitions
 *
 * @param request DescribeVariableMarketListRequest
 * @return DescribeVariableMarketListResponse
 */
DescribeVariableMarketListResponse Client::describeVariableMarketList(const DescribeVariableMarketListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableMarketListWithOptions(request, runtime);
}

/**
 * @summary Query Configuration Information
 *
 * @param request DescribeVariableSceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableSceneListResponse
 */
DescribeVariableSceneListResponse Client::describeVariableSceneListWithOptions(const DescribeVariableSceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBizType()) {
    query["bizType"] = request.bizType();
  }

  if (!!request.hasConfigKey()) {
    query["configKey"] = request.configKey();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPaging()) {
    query["paging"] = request.paging();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableSceneList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableSceneListResponse>();
}

/**
 * @summary Query Configuration Information
 *
 * @param request DescribeVariableSceneListRequest
 * @return DescribeVariableSceneListResponse
 */
DescribeVariableSceneListResponse Client::describeVariableSceneList(const DescribeVariableSceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableSceneListWithOptions(request, runtime);
}

/**
 * @summary Variable Version List Query
 *
 * @param request DescribeVersionPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVersionPageListResponse
 */
DescribeVersionPageListResponse Client::describeVersionPageListWithOptions(const DescribeVersionPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasObjectCode()) {
    query["objectCode"] = request.objectCode();
  }

  if (!!request.hasObjectId()) {
    query["objectId"] = request.objectId();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPaging()) {
    query["paging"] = request.paging();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVersionPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVersionPageListResponse>();
}

/**
 * @summary Variable Version List Query
 *
 * @param request DescribeVersionPageListRequest
 * @return DescribeVersionPageListResponse
 */
DescribeVersionPageListResponse Client::describeVersionPageList(const DescribeVersionPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVersionPageListWithOptions(request, runtime);
}

/**
 * @summary Sample List Data Download
 *
 * @param request DownloadSmapleBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadSmapleBatchResponse
 */
DownloadSmapleBatchResponse Client::downloadSmapleBatchWithOptions(const DownloadSmapleBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBatchUuid()) {
    query["batchUuid"] = request.batchUuid();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadSmapleBatch"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadSmapleBatchResponse>();
}

/**
 * @summary Sample List Data Download
 *
 * @param request DownloadSmapleBatchRequest
 * @return DownloadSmapleBatchResponse
 */
DownloadSmapleBatchResponse Client::downloadSmapleBatch(const DownloadSmapleBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadSmapleBatchWithOptions(request, runtime);
}

/**
 * @summary Custom Variable Test
 *
 * @param request ExpressionTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExpressionTestResponse
 */
ExpressionTestResponse Client::expressionTestWithOptions(const ExpressionTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.expression();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.expressionVariable();
  }

  if (!!request.hasExpressionVariableIds()) {
    query["expressionVariableIds"] = request.expressionVariableIds();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExpressionTest"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExpressionTestResponse>();
}

/**
 * @summary Custom Variable Test
 *
 * @param request ExpressionTestRequest
 * @return ExpressionTestResponse
 */
ExpressionTestResponse Client::expressionTest(const ExpressionTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return expressionTestWithOptions(request, runtime);
}

/**
 * @summary File Upload
 *
 * @param request FileUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FileUploadResponse
 */
FileUploadResponse Client::fileUploadWithOptions(const FileUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.tab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FileUpload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FileUploadResponse>();
}

/**
 * @summary File Upload
 *
 * @param request FileUploadRequest
 * @return FileUploadResponse
 */
FileUploadResponse Client::fileUpload(const FileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fileUploadWithOptions(request, runtime);
}

/**
 * @summary Batch Import
 *
 * @param request ImportFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportFieldResponse
 */
ImportFieldResponse Client::importFieldWithOptions(const ImportFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportFieldResponse>();
}

/**
 * @summary Batch Import
 *
 * @param request ImportFieldRequest
 * @return ImportFieldResponse
 */
ImportFieldResponse Client::importField(const ImportFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importFieldWithOptions(request, runtime);
}

/**
 * @summary Create or Import Name List
 *
 * @param request ImportNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportNameListResponse
 */
ImportNameListResponse Client::importNameListWithOptions(const ImportNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasData()) {
    query["data"] = request.data();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasImportType()) {
    query["importType"] = request.importType();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.memo();
  }

  if (!!request.hasNameListType()) {
    query["nameListType"] = request.nameListType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.variableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportNameListResponse>();
}

/**
 * @summary Create or Import Name List
 *
 * @param request ImportNameListRequest
 * @return ImportNameListResponse
 */
ImportNameListResponse Client::importNameList(const ImportNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importNameListWithOptions(request, runtime);
}

/**
 * @summary Import Template Event
 *
 * @param request ImportTemplateEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportTemplateEventResponse
 */
ImportTemplateEventResponse Client::importTemplateEventWithOptions(const ImportTemplateEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventTemplateIds()) {
    query["eventTemplateIds"] = request.eventTemplateIds();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportTemplateEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportTemplateEventResponse>();
}

/**
 * @summary Import Template Event
 *
 * @param request ImportTemplateEventRequest
 * @return ImportTemplateEventResponse
 */
ImportTemplateEventResponse Client::importTemplateEvent(const ImportTemplateEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importTemplateEventWithOptions(request, runtime);
}

/**
 * @summary Query Variable Definition
 *
 * @param request ListVariableDefineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVariableDefineResponse
 */
ListVariableDefineResponse Client::listVariableDefineWithOptions(const ListVariableDefineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasAllowBind()) {
    query["allowBind"] = request.allowBind();
  }

  if (!!request.hasChargingMode()) {
    query["chargingMode"] = request.chargingMode();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasPaging()) {
    query["paging"] = request.paging();
  }

  if (!!request.hasQueryContent()) {
    query["queryContent"] = request.queryContent();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRoleType()) {
    query["roleType"] = request.roleType();
  }

  if (!!request.hasScenesStr()) {
    query["scenesStr"] = request.scenesStr();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  if (!!request.hasTypesStr()) {
    query["typesStr"] = request.typesStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVariableDefine"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVariableDefineResponse>();
}

/**
 * @summary Query Variable Definition
 *
 * @param request ListVariableDefineRequest
 * @return ListVariableDefineResponse
 */
ListVariableDefineResponse Client::listVariableDefine(const ListVariableDefineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVariableDefineWithOptions(request, runtime);
}

/**
 * @summary Delete
 *
 * @param request ModelDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelDeleteResponse
 */
ModelDeleteResponse Client::modelDeleteWithOptions(const ModelDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelName()) {
    query["ModelName"] = request.modelName();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelDelete"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelDeleteResponse>();
}

/**
 * @summary Delete
 *
 * @param request ModelDeleteRequest
 * @return ModelDeleteResponse
 */
ModelDeleteResponse Client::modelDelete(const ModelDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelDeleteWithOptions(request, runtime);
}

/**
 * @summary File Upload
 *
 * @param request ModelFileUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelFileUploadResponse
 */
ModelFileUploadResponse Client::modelFileUploadWithOptions(const ModelFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasObjectName()) {
    query["ObjectName"] = request.objectName();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelFileUpload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelFileUploadResponse>();
}

/**
 * @summary File Upload
 *
 * @param request ModelFileUploadRequest
 * @return ModelFileUploadResponse
 */
ModelFileUploadResponse Client::modelFileUpload(const ModelFileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelFileUploadWithOptions(request, runtime);
}

/**
 * @summary Enable, Disable
 *
 * @param request ModelIsUsingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelIsUsingResponse
 */
ModelIsUsingResponse Client::modelIsUsingWithOptions(const ModelIsUsingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelCode()) {
    query["ModelCode"] = request.modelCode();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.modelId();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.modelName();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelIsUsing"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelIsUsingResponse>();
}

/**
 * @summary Enable, Disable
 *
 * @param request ModelIsUsingRequest
 * @return ModelIsUsingResponse
 */
ModelIsUsingResponse Client::modelIsUsing(const ModelIsUsingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelIsUsingWithOptions(request, runtime);
}

/**
 * @summary Is Model Name Duplicated
 *
 * @param request ModelNameIsDuplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelNameIsDuplicationResponse
 */
ModelNameIsDuplicationResponse Client::modelNameIsDuplicationWithOptions(const ModelNameIsDuplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelName()) {
    query["ModelName"] = request.modelName();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelNameIsDuplication"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelNameIsDuplicationResponse>();
}

/**
 * @summary Is Model Name Duplicated
 *
 * @param request ModelNameIsDuplicationRequest
 * @return ModelNameIsDuplicationResponse
 */
ModelNameIsDuplicationResponse Client::modelNameIsDuplication(const ModelNameIsDuplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelNameIsDuplicationWithOptions(request, runtime);
}

/**
 * @summary Template Download
 *
 * @param request ModelSampleDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelSampleDownloadResponse
 */
ModelSampleDownloadResponse Client::modelSampleDownloadWithOptions(const ModelSampleDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelSampleDownload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelSampleDownloadResponse>();
}

/**
 * @summary Template Download
 *
 * @param request ModelSampleDownloadRequest
 * @return ModelSampleDownloadResponse
 */
ModelSampleDownloadResponse Client::modelSampleDownload(const ModelSampleDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelSampleDownloadWithOptions(request, runtime);
}

/**
 * @summary Update Memo
 *
 * @param request ModifyAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppKeyResponse
 */
ModifyAppKeyResponse Client::modifyAppKeyWithOptions(const ModifyAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasAppKey()) {
    query["appKey"] = request.appKey();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.memo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppKey"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppKeyResponse>();
}

/**
 * @summary Update Memo
 *
 * @param request ModifyAppKeyRequest
 * @return ModifyAppKeyResponse
 */
ModifyAppKeyResponse Client::modifyAppKey(const ModifyAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppKeyWithOptions(request, runtime);
}

/**
 * @summary Edit Accumulated Variable
 *
 * @param request ModifyCustVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustVariableResponse
 */
ModifyCustVariableResponse Client::modifyCustVariableWithOptions(const ModifyCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.condition();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.dataVersion();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.eventCodes();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.outputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustVariableResponse>();
}

/**
 * @summary Edit Accumulated Variable
 *
 * @param request ModifyCustVariableRequest
 * @return ModifyCustVariableResponse
 */
ModifyCustVariableResponse Client::modifyCustVariable(const ModifyCustVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustVariableWithOptions(request, runtime);
}

/**
 * @summary Edit Event
 *
 * @param request ModifyEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventResponse
 */
ModifyEventResponse Client::modifyEventWithOptions(const ModifyEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBizVersion()) {
    query["bizVersion"] = request.bizVersion();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.eventName();
  }

  if (!!request.hasInputFieldsStr()) {
    query["inputFieldsStr"] = request.inputFieldsStr();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.memo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEventResponse>();
}

/**
 * @summary Edit Event
 *
 * @param request ModifyEventRequest
 * @return ModifyEventResponse
 */
ModifyEventResponse Client::modifyEvent(const ModifyEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventWithOptions(request, runtime);
}

/**
 * @summary Modify Event Status
 *
 * @param request ModifyEventStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventStatusResponse
 */
ModifyEventStatusResponse Client::modifyEventStatusWithOptions(const ModifyEventStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasFromEventSatus()) {
    query["fromEventSatus"] = request.fromEventSatus();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasToEventSatus()) {
    query["toEventSatus"] = request.toEventSatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEventStatus"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEventStatusResponse>();
}

/**
 * @summary Modify Event Status
 *
 * @param request ModifyEventStatusRequest
 * @return ModifyEventStatusResponse
 */
ModifyEventStatusResponse Client::modifyEventStatus(const ModifyEventStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventStatusWithOptions(request, runtime);
}

/**
 * @summary Edit Custom Variable
 *
 * @param request ModifyExpressionVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressionVariableResponse
 */
ModifyExpressionVariableResponse Client::modifyExpressionVariableWithOptions(const ModifyExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.dataVersion();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.expression();
  }

  if (!!request.hasExpressionTitle()) {
    query["expressionTitle"] = request.expressionTitle();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.expressionVariable();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasOutlier()) {
    query["outlier"] = request.outlier();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.outputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyExpressionVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyExpressionVariableResponse>();
}

/**
 * @summary Edit Custom Variable
 *
 * @param request ModifyExpressionVariableRequest
 * @return ModifyExpressionVariableResponse
 */
ModifyExpressionVariableResponse Client::modifyExpressionVariable(const ModifyExpressionVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressionVariableWithOptions(request, runtime);
}

/**
 * @summary Modify Field
 *
 * @param request ModifyFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFieldResponse
 */
ModifyFieldResponse Client::modifyFieldWithOptions(const ModifyFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasClassify()) {
    query["classify"] = request.classify();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEnumData()) {
    query["enumData"] = request.enumData();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFieldResponse>();
}

/**
 * @summary Modify Field
 *
 * @param request ModifyFieldRequest
 * @return ModifyFieldResponse
 */
ModifyFieldResponse Client::modifyField(const ModifyFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFieldWithOptions(request, runtime);
}

/**
 * @summary Modify Policy Priority
 *
 * @param request ModifyRulePriorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRulePriorityResponse
 */
ModifyRulePriorityResponse Client::modifyRulePriorityWithOptions(const ModifyRulePriorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasPriority()) {
    query["priority"] = request.priority();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRulePriority"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRulePriorityResponse>();
}

/**
 * @summary Modify Policy Priority
 *
 * @param request ModifyRulePriorityRequest
 * @return ModifyRulePriorityResponse
 */
ModifyRulePriorityResponse Client::modifyRulePriority(const ModifyRulePriorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRulePriorityWithOptions(request, runtime);
}

/**
 * @summary Change the status of a policy version application
 *
 * @param request ModifyRuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRuleStatusResponse
 */
ModifyRuleStatusResponse Client::modifyRuleStatusWithOptions(const ModifyRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasApplyUserId()) {
    query["applyUserId"] = request.applyUserId();
  }

  if (!!request.hasApplyUserName()) {
    query["applyUserName"] = request.applyUserName();
  }

  if (!!request.hasAuditRemark()) {
    query["auditRemark"] = request.auditRemark();
  }

  if (!!request.hasAuditUserId()) {
    query["auditUserId"] = request.auditUserId();
  }

  if (!!request.hasAuditUserName()) {
    query["auditUserName"] = request.auditUserName();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasEventType()) {
    query["eventType"] = request.eventType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleAuditType()) {
    query["ruleAuditType"] = request.ruleAuditType();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.ruleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRuleStatus"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRuleStatusResponse>();
}

/**
 * @summary Change the status of a policy version application
 *
 * @param request ModifyRuleStatusRequest
 * @return ModifyRuleStatusResponse
 */
ModifyRuleStatusResponse Client::modifyRuleStatus(const ModifyRuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRuleStatusWithOptions(request, runtime);
}

/**
 * @summary Activate Service
 *
 * @param request OpenConsoleSlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenConsoleSlsResponse
 */
OpenConsoleSlsResponse Client::openConsoleSlsWithOptions(const OpenConsoleSlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenConsoleSls"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenConsoleSlsResponse>();
}

/**
 * @summary Activate Service
 *
 * @param request OpenConsoleSlsRequest
 * @return OpenConsoleSlsResponse
 */
OpenConsoleSlsResponse Client::openConsoleSls(const OpenConsoleSlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openConsoleSlsWithOptions(request, runtime);
}

/**
 * @summary Operate Favorites
 *
 * @param request OperateFavoriteVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateFavoriteVariableResponse
 */
OperateFavoriteVariableResponse Client::operateFavoriteVariableWithOptions(const OperateFavoriteVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasOperate()) {
    query["operate"] = request.operate();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateFavoriteVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateFavoriteVariableResponse>();
}

/**
 * @summary Operate Favorites
 *
 * @param request OperateFavoriteVariableRequest
 * @return OperateFavoriteVariableResponse
 */
OperateFavoriteVariableResponse Client::operateFavoriteVariable(const OperateFavoriteVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateFavoriteVariableWithOptions(request, runtime);
}

/**
 * @summary Enterprise Verification
 *
 * @param request PermissionCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PermissionCheckResponse
 */
PermissionCheckResponse Client::permissionCheckWithOptions(const PermissionCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PermissionCheck"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PermissionCheckResponse>();
}

/**
 * @summary Enterprise Verification
 *
 * @param request PermissionCheckRequest
 * @return PermissionCheckResponse
 */
PermissionCheckResponse Client::permissionCheck(const PermissionCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return permissionCheckWithOptions(request, runtime);
}

/**
 * @summary createTask
 *
 * @param request PocCreateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PocCreateTaskResponse
 */
PocCreateTaskResponse Client::pocCreateTaskWithOptions(const PocCreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDateFormat()) {
    query["DateFormat"] = request.dateFormat();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PocCreateTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PocCreateTaskResponse>();
}

/**
 * @summary createTask
 *
 * @param request PocCreateTaskRequest
 * @return PocCreateTaskResponse
 */
PocCreateTaskResponse Client::pocCreateTask(const PocCreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pocCreateTaskWithOptions(request, runtime);
}

/**
 * @summary PocGetDownloadUrl
 *
 * @param request PocGetDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PocGetDownloadUrlResponse
 */
PocGetDownloadUrlResponse Client::pocGetDownloadUrlWithOptions(const PocGetDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PocGetDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PocGetDownloadUrlResponse>();
}

/**
 * @summary PocGetDownloadUrl
 *
 * @param request PocGetDownloadUrlRequest
 * @return PocGetDownloadUrlResponse
 */
PocGetDownloadUrlResponse Client::pocGetDownloadUrl(const PocGetDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pocGetDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary getToken
 *
 * @param request PocGetTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PocGetTokenResponse
 */
PocGetTokenResponse Client::pocGetTokenWithOptions(const PocGetTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.serviceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PocGetToken"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PocGetTokenResponse>();
}

/**
 * @summary getToken
 *
 * @param request PocGetTokenRequest
 * @return PocGetTokenResponse
 */
PocGetTokenResponse Client::pocGetToken(const PocGetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pocGetTokenWithOptions(request, runtime);
}

/**
 * @summary sendData
 *
 * @param request PocSendDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PocSendDataResponse
 */
PocSendDataResponse Client::pocSendDataWithOptions(const PocSendDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchNo()) {
    query["BatchNo"] = request.batchNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasParamsList()) {
    query["ParamsList"] = request.paramsList();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PocSendData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PocSendDataResponse>();
}

/**
 * @summary sendData
 *
 * @param request PocSendDataRequest
 * @return PocSendDataResponse
 */
PocSendDataResponse Client::pocSendData(const PocSendDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pocSendDataWithOptions(request, runtime);
}

/**
 * @summary Query White-box Strategy Details
 *
 * @param request QueryAuthRuleDetailByRuleIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAuthRuleDetailByRuleIdResponse
 */
QueryAuthRuleDetailByRuleIdResponse Client::queryAuthRuleDetailByRuleIdWithOptions(const QueryAuthRuleDetailByRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.ruleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAuthRuleDetailByRuleId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAuthRuleDetailByRuleIdResponse>();
}

/**
 * @summary Query White-box Strategy Details
 *
 * @param request QueryAuthRuleDetailByRuleIdRequest
 * @return QueryAuthRuleDetailByRuleIdResponse
 */
QueryAuthRuleDetailByRuleIdResponse Client::queryAuthRuleDetailByRuleId(const QueryAuthRuleDetailByRuleIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAuthRuleDetailByRuleIdWithOptions(request, runtime);
}

/**
 * @summary Recall.
 *
 * @param request RecallRuleAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecallRuleAuditResponse
 */
RecallRuleAuditResponse Client::recallRuleAuditWithOptions(const RecallRuleAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecallRuleAudit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecallRuleAuditResponse>();
}

/**
 * @summary Recall.
 *
 * @param request RecallRuleAuditRequest
 * @return RecallRuleAuditResponse
 */
RecallRuleAuditResponse Client::recallRuleAudit(const RecallRuleAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recallRuleAuditWithOptions(request, runtime);
}

/**
 * @summary Delete Event
 *
 * @param request RemoveEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveEventResponse
 */
RemoveEventResponse Client::removeEventWithOptions(const RemoveEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.createType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.templateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveEventResponse>();
}

/**
 * @summary Delete Event
 *
 * @param request RemoveEventRequest
 * @return RemoveEventResponse
 */
RemoveEventResponse Client::removeEvent(const RemoveEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeEventWithOptions(request, runtime);
}

/**
 * @summary Template Download
 *
 * @param request SampleFileDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SampleFileDownloadResponse
 */
SampleFileDownloadResponse Client::sampleFileDownloadWithOptions(const SampleFileDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.tab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SampleFileDownload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SampleFileDownloadResponse>();
}

/**
 * @summary Template Download
 *
 * @param request SampleFileDownloadRequest
 * @return SampleFileDownloadResponse
 */
SampleFileDownloadResponse Client::sampleFileDownload(const SampleFileDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sampleFileDownloadWithOptions(request, runtime);
}

/**
 * @summary Save Custom Columns
 *
 * @param request SaveAnalysisColumnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAnalysisColumnResponse
 */
SaveAnalysisColumnResponse Client::saveAnalysisColumnWithOptions(const SaveAnalysisColumnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasColumns()) {
    query["columns"] = request.columns();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveAnalysisColumn"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveAnalysisColumnResponse>();
}

/**
 * @summary Save Custom Columns
 *
 * @param request SaveAnalysisColumnRequest
 * @return SaveAnalysisColumnResponse
 */
SaveAnalysisColumnResponse Client::saveAnalysisColumn(const SaveAnalysisColumnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAnalysisColumnWithOptions(request, runtime);
}

/**
 * @summary Bypass/Shunt Configuration
 *
 * @param request SaveByPassOrShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveByPassOrShuntEventResponse
 */
SaveByPassOrShuntEventResponse Client::saveByPassOrShuntEventWithOptions(const SaveByPassOrShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.eventId();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.eventName();
  }

  if (!!request.hasEventType()) {
    query["eventType"] = request.eventType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveByPassOrShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveByPassOrShuntEventResponse>();
}

/**
 * @summary Bypass/Shunt Configuration
 *
 * @param request SaveByPassOrShuntEventRequest
 * @return SaveByPassOrShuntEventResponse
 */
SaveByPassOrShuntEventResponse Client::saveByPassOrShuntEvent(const SaveByPassOrShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveByPassOrShuntEventWithOptions(request, runtime);
}

/**
 * @summary Start/Stop Bypass Event
 *
 * @param request StartOrStopByPassShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartOrStopByPassShuntEventResponse
 */
StartOrStopByPassShuntEventResponse Client::startOrStopByPassShuntEventWithOptions(const StartOrStopByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.eventId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartOrStopByPassShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartOrStopByPassShuntEventResponse>();
}

/**
 * @summary Start/Stop Bypass Event
 *
 * @param request StartOrStopByPassShuntEventRequest
 * @return StartOrStopByPassShuntEventResponse
 */
StartOrStopByPassShuntEventResponse Client::startOrStopByPassShuntEvent(const StartOrStopByPassShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startOrStopByPassShuntEventWithOptions(request, runtime);
}

/**
 * @summary Start Task Execution
 *
 * @param request StartSimulationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSimulationTaskResponse
 */
StartSimulationTaskResponse Client::startSimulationTaskWithOptions(const StartSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartSimulationTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSimulationTaskResponse>();
}

/**
 * @summary Start Task Execution
 *
 * @param request StartSimulationTaskRequest
 * @return StartSimulationTaskResponse
 */
StartSimulationTaskResponse Client::startSimulationTask(const StartSimulationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSimulationTaskWithOptions(request, runtime);
}

/**
 * @summary Stop Task
 *
 * @param request StopSimulationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSimulationTaskResponse
 */
StopSimulationTaskResponse Client::stopSimulationTaskWithOptions(const StopSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopSimulationTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSimulationTaskResponse>();
}

/**
 * @summary Stop Task
 *
 * @param request StopSimulationTaskRequest
 * @return StopSimulationTaskResponse
 */
StopSimulationTaskResponse Client::stopSimulationTask(const StopSimulationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopSimulationTaskWithOptions(request, runtime);
}

/**
 * @summary Custom Variable Switch
 *
 * @param request SwitchExpressionVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchExpressionVariableResponse
 */
SwitchExpressionVariableResponse Client::switchExpressionVariableWithOptions(const SwitchExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.dataVersion();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchExpressionVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchExpressionVariableResponse>();
}

/**
 * @summary Custom Variable Switch
 *
 * @param request SwitchExpressionVariableRequest
 * @return SwitchExpressionVariableResponse
 */
SwitchExpressionVariableResponse Client::switchExpressionVariable(const SwitchExpressionVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchExpressionVariableWithOptions(request, runtime);
}

/**
 * @summary Field Switch
 *
 * @param request SwitchFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchFieldResponse
 */
SwitchFieldResponse Client::switchFieldWithOptions(const SwitchFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.source();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchFieldResponse>();
}

/**
 * @summary Field Switch
 *
 * @param request SwitchFieldRequest
 * @return SwitchFieldResponse
 */
SwitchFieldResponse Client::switchField(const SwitchFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchFieldWithOptions(request, runtime);
}

/**
 * @summary Query Variable Enable/Disable
 *
 * @param request SwitchQueryVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchQueryVariableResponse
 */
SwitchQueryVariableResponse Client::switchQueryVariableWithOptions(const SwitchQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchQueryVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchQueryVariableResponse>();
}

/**
 * @summary Query Variable Enable/Disable
 *
 * @param request SwitchQueryVariableRequest
 * @return SwitchQueryVariableResponse
 */
SwitchQueryVariableResponse Client::switchQueryVariable(const SwitchQueryVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchQueryVariableWithOptions(request, runtime);
}

/**
 * @summary One-click switch online
 *
 * @param request SwitchToOnlineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchToOnlineResponse
 */
SwitchToOnlineResponse Client::switchToOnlineWithOptions(const SwitchToOnlineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.eventId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchToOnline"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchToOnlineResponse>();
}

/**
 * @summary One-click switch online
 *
 * @param request SwitchToOnlineRequest
 * @return SwitchToOnlineResponse
 */
SwitchToOnlineResponse Client::switchToOnline(const SwitchToOnlineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchToOnlineWithOptions(request, runtime);
}

/**
 * @summary Cumulative Variable Switch
 *
 * @param request SwitchVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchVariableResponse
 */
SwitchVariableResponse Client::switchVariableWithOptions(const SwitchVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.dataVersion();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchVariableResponse>();
}

/**
 * @summary Cumulative Variable Switch
 *
 * @param request SwitchVariableRequest
 * @return SwitchVariableResponse
 */
SwitchVariableResponse Client::switchVariable(const SwitchVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchVariableWithOptions(request, runtime);
}

/**
 * @summary Determine if the task name is duplicated
 *
 * @param request TaskNameByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskNameByUserIdResponse
 */
TaskNameByUserIdResponse Client::taskNameByUserIdWithOptions(const TaskNameByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.regId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TaskNameByUserId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskNameByUserIdResponse>();
}

/**
 * @summary Determine if the task name is duplicated
 *
 * @param request TaskNameByUserIdRequest
 * @return TaskNameByUserIdResponse
 */
TaskNameByUserIdResponse Client::taskNameByUserId(const TaskNameByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskNameByUserIdWithOptions(request, runtime);
}

/**
 * @summary Modify Query Conditions
 *
 * @param request UpdateAnalysisConditionFavoriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAnalysisConditionFavoriteResponse
 */
UpdateAnalysisConditionFavoriteResponse Client::updateAnalysisConditionFavoriteWithOptions(const UpdateAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.condition();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.eventBeginTime();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.eventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.fieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.fieldValue();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAnalysisConditionFavorite"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAnalysisConditionFavoriteResponse>();
}

/**
 * @summary Modify Query Conditions
 *
 * @param request UpdateAnalysisConditionFavoriteRequest
 * @return UpdateAnalysisConditionFavoriteResponse
 */
UpdateAnalysisConditionFavoriteResponse Client::updateAnalysisConditionFavorite(const UpdateAnalysisConditionFavoriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAnalysisConditionFavoriteWithOptions(request, runtime);
}

/**
 * @summary Approval
 *
 * @param request UpdateAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuditResponse
 */
UpdateAuditResponse Client::updateAuditWithOptions(const UpdateAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasAuditMsg()) {
    query["auditMsg"] = request.auditMsg();
  }

  if (!!request.hasAuditRelationType()) {
    query["auditRelationType"] = request.auditRelationType();
  }

  if (!!request.hasAuditStatus()) {
    query["auditStatus"] = request.auditStatus();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAudit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuditResponse>();
}

/**
 * @summary Approval
 *
 * @param request UpdateAuditRequest
 * @return UpdateAuditResponse
 */
UpdateAuditResponse Client::updateAudit(const UpdateAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuditWithOptions(request, runtime);
}

/**
 * @summary Modify Authorization Policy
 *
 * @param request UpdateAuthRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthRuleResponse
 */
UpdateAuthRuleResponse Client::updateAuthRuleWithOptions(const UpdateAuthRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleActions()) {
    query["ruleActions"] = request.ruleActions();
  }

  if (!!request.hasRuleExpressions()) {
    query["ruleExpressions"] = request.ruleExpressions();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.ruleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAuthRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthRuleResponse>();
}

/**
 * @summary Modify Authorization Policy
 *
 * @param request UpdateAuthRuleRequest
 * @return UpdateAuthRuleResponse
 */
UpdateAuthRuleResponse Client::updateAuthRule(const UpdateAuthRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthRuleWithOptions(request, runtime);
}

/**
 * @summary Edit Bypass Event
 *
 * @param request UpdateByPassShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateByPassShuntEventResponse
 */
UpdateByPassShuntEventResponse Client::updateByPassShuntEventWithOptions(const UpdateByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.eventId();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.eventName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateByPassShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateByPassShuntEventResponse>();
}

/**
 * @summary Edit Bypass Event
 *
 * @param request UpdateByPassShuntEventRequest
 * @return UpdateByPassShuntEventResponse
 */
UpdateByPassShuntEventResponse Client::updateByPassShuntEvent(const UpdateByPassShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateByPassShuntEventWithOptions(request, runtime);
}

/**
 * @summary Modify Data Source
 *
 * @param request UpdateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSourceWithOptions(const UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasOssKey()) {
    query["ossKey"] = request.ossKey();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataSource"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSourceResponse>();
}

/**
 * @summary Modify Data Source
 *
 * @param request UpdateDataSourceRequest
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSource(const UpdateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceWithOptions(request, runtime);
}

/**
 * @summary Modify Custom Query Variable
 *
 * @param request UpdateQueryVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQueryVariableResponse
 */
UpdateQueryVariableResponse Client::updateQueryVariableWithOptions(const UpdateQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasDataSourceCode()) {
    query["dataSourceCode"] = request.dataSourceCode();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.expression();
  }

  if (!!request.hasExpressionTitle()) {
    query["expressionTitle"] = request.expressionTitle();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.expressionVariable();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasOutlier()) {
    query["outlier"] = request.outlier();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.outputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateQueryVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQueryVariableResponse>();
}

/**
 * @summary Modify Custom Query Variable
 *
 * @param request UpdateQueryVariableRequest
 * @return UpdateQueryVariableResponse
 */
UpdateQueryVariableResponse Client::updateQueryVariable(const UpdateQueryVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQueryVariableWithOptions(request, runtime);
}

/**
 * @summary Update Policy
 *
 * @param request UpdateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRuleWithOptions(const UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasLogicExpression()) {
    query["logicExpression"] = request.logicExpression();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.memo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleActions()) {
    query["ruleActions"] = request.ruleActions();
  }

  if (!!request.hasRuleBody()) {
    query["ruleBody"] = request.ruleBody();
  }

  if (!!request.hasRuleExpressions()) {
    query["ruleExpressions"] = request.ruleExpressions();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.ruleName();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.ruleStatus();
  }

  if (!!request.hasRuleType()) {
    query["ruleType"] = request.ruleType();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.ruleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleResponse>();
}

/**
 * @summary Update Policy
 *
 * @param request UpdateRuleRequest
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRule(const UpdateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleWithOptions(request, runtime);
}

/**
 * @summary Update Basic Policy Information
 *
 * @param request UpdateRuleBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleBaseResponse
 */
UpdateRuleBaseResponse Client::updateRuleBaseWithOptions(const UpdateRuleBaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.consoleRuleId();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.eventCode();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.memo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRuleBase"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleBaseResponse>();
}

/**
 * @summary Update Basic Policy Information
 *
 * @param request UpdateRuleBaseRequest
 * @return UpdateRuleBaseResponse
 */
UpdateRuleBaseResponse Client::updateRuleBase(const UpdateRuleBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleBaseWithOptions(request, runtime);
}

/**
 * @summary Batch Update Samples
 *
 * @param request UpdateSampleBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSampleBatchResponse
 */
UpdateSampleBatchResponse Client::updateSampleBatchWithOptions(const UpdateSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.ids();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.tags();
  }

  if (!!request.hasVersions()) {
    query["versions"] = request.versions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSampleBatch"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSampleBatchResponse>();
}

/**
 * @summary Batch Update Samples
 *
 * @param request UpdateSampleBatchRequest
 * @return UpdateSampleBatchResponse
 */
UpdateSampleBatchResponse Client::updateSampleBatch(const UpdateSampleBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSampleBatchWithOptions(request, runtime);
}

/**
 * @summary Sample Inspection
 *
 * @param request UploadFileCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadFileCheckResponse
 */
UploadFileCheckResponse Client::uploadFileCheckWithOptions(const UploadFileCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasBatchName()) {
    query["batchName"] = request.batchName();
  }

  if (!!request.hasDataType()) {
    query["dataType"] = request.dataType();
  }

  if (!!request.hasOssFileName()) {
    query["ossFileName"] = request.ossFileName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.regId();
  }

  if (!!request.hasSampleTagType()) {
    query["sampleTagType"] = request.sampleTagType();
  }

  if (!!request.hasServiceList()) {
    query["serviceList"] = request.serviceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadFileCheck"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadFileCheckResponse>();
}

/**
 * @summary Sample Inspection
 *
 * @param request UploadFileCheckRequest
 * @return UploadFileCheckResponse
 */
UploadFileCheckResponse Client::uploadFileCheck(const UploadFileCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadFileCheckWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Xtee20210910