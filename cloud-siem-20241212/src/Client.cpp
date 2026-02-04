#include <darabonba/Core.hpp>
#include <alibabacloud/CloudSiem20241212.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::CloudSiem20241212::Models;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{

AlibabaCloud::CloudSiem20241212::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("cloud-siem", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 检查升级项
 *
 * @param request CheckUpgradeItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUpgradeItemResponse
 */
CheckUpgradeItemResponse Client::checkUpgradeItemWithOptions(const CheckUpgradeItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasUpgradeItemId()) {
    body["UpgradeItemId"] = request.getUpgradeItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CheckUpgradeItem"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUpgradeItemResponse>();
}

/**
 * @summary 检查升级项
 *
 * @param request CheckUpgradeItemRequest
 * @return CheckUpgradeItemResponse
 */
CheckUpgradeItemResponse Client::checkUpgradeItem(const CheckUpgradeItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUpgradeItemWithOptions(request, runtime);
}

/**
 * @summary 创建数据源
 *
 * @param request CreateDataIngestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataIngestionResponse
 */
CreateDataIngestionResponse Client::createDataIngestionWithOptions(const CreateDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCapacityCount()) {
    body["CapacityCount"] = request.getCapacityCount();
  }

  if (!!request.hasDataIngestionMode()) {
    body["DataIngestionMode"] = request.getDataIngestionMode();
  }

  if (!!request.hasDataIngestionStateCode()) {
    body["DataIngestionStateCode"] = request.getDataIngestionStateCode();
  }

  if (!!request.hasDataIngestionType()) {
    body["DataIngestionType"] = request.getDataIngestionType();
  }

  if (!!request.hasDataSourceEditable()) {
    body["DataSourceEditable"] = request.getDataSourceEditable();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationRuleEditable()) {
    body["NormalizationRuleEditable"] = request.getNormalizationRuleEditable();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasScanDataSourceId()) {
    body["ScanDataSourceId"] = request.getScanDataSourceId();
  }

  if (!!request.hasStreamJobId()) {
    body["StreamJobId"] = request.getStreamJobId();
  }

  if (!!request.hasUpdateTime()) {
    body["UpdateTime"] = request.getUpdateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataIngestion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataIngestionResponse>();
}

/**
 * @summary 创建数据源
 *
 * @param request CreateDataIngestionRequest
 * @return CreateDataIngestionResponse
 */
CreateDataIngestionResponse Client::createDataIngestion(const CreateDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataIngestionWithOptions(request, runtime);
}

/**
 * @summary 创建数据集
 *
 * @param request CreateDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSetResponse
 */
CreateDataSetResponse Client::createDataSetWithOptions(const CreateDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSetDescription()) {
    body["DataSetDescription"] = request.getDataSetDescription();
  }

  if (!!request.hasDataSetFieldKeyName()) {
    body["DataSetFieldKeyName"] = request.getDataSetFieldKeyName();
  }

  if (!!request.hasDataSetFileName()) {
    body["DataSetFileName"] = request.getDataSetFileName();
  }

  if (!!request.hasDataSetName()) {
    body["DataSetName"] = request.getDataSetName();
  }

  if (!!request.hasDataSetStatus()) {
    body["DataSetStatus"] = request.getDataSetStatus();
  }

  if (!!request.hasDataSetType()) {
    body["DataSetType"] = request.getDataSetType();
  }

  json bodyFlat = {};
  if (!!request.hasIpWhitelistRecognizers()) {
    bodyFlat["IpWhitelistRecognizers"] = request.getIpWhitelistRecognizers();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataSet"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataSetResponse>();
}

/**
 * @summary 创建数据集
 *
 * @param request CreateDataSetRequest
 * @return CreateDataSetResponse
 */
CreateDataSetResponse Client::createDataSet(const CreateDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSetWithOptions(request, runtime);
}

/**
 * @summary 创建数据源
 *
 * @param tmpReq CreateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSourceWithOptions(const CreateDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataSourceShrinkRequest request = CreateDataSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataSourceIds()) {
    request.setDataSourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSourceIds(), "DataSourceIds", "json"));
  }

  if (!!tmpReq.hasDataSourceReferences()) {
    request.setDataSourceReferencesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSourceReferences(), "DataSourceReferences", "json"));
  }

  json body = {};
  if (!!request.hasDataSourceFrom()) {
    body["DataSourceFrom"] = request.getDataSourceFrom();
  }

  if (!!request.hasDataSourceIdsShrink()) {
    body["DataSourceIds"] = request.getDataSourceIdsShrink();
  }

  if (!!request.hasDataSourceName()) {
    body["DataSourceName"] = request.getDataSourceName();
  }

  if (!!request.hasDataSourceRecognizeEnabled()) {
    body["DataSourceRecognizeEnabled"] = request.getDataSourceRecognizeEnabled();
  }

  if (!!request.hasDataSourceRecognizer()) {
    body["DataSourceRecognizer"] = request.getDataSourceRecognizer();
  }

  if (!!request.hasDataSourceReferencesShrink()) {
    body["DataSourceReferences"] = request.getDataSourceReferencesShrink();
  }

  json bodyFlat = {};
  if (!!request.hasDataSourceStores()) {
    bodyFlat["DataSourceStores"] = request.getDataSourceStores();
  }

  if (!!request.hasDataSourceTemplateId()) {
    body["DataSourceTemplateId"] = request.getDataSourceTemplateId();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.getDataSourceType();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectName()) {
    body["LogProjectName"] = request.getLogProjectName();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.getOrder();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataSource"},
    {"version" , "2024-12-12"},
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
 * @summary 创建数据源
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary 创建检测规则
 *
 * @param request CreateDetectionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDetectionRuleResponse
 */
CreateDetectionRuleResponse Client::createDetectionRuleWithOptions(const CreateDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertAttCk()) {
    body["AlertAttCk"] = request.getAlertAttCk();
  }

  if (!!request.hasAlertDescription()) {
    body["AlertDescription"] = request.getAlertDescription();
  }

  if (!!request.hasAlertLevel()) {
    body["AlertLevel"] = request.getAlertLevel();
  }

  if (!!request.hasAlertName()) {
    body["AlertName"] = request.getAlertName();
  }

  if (!!request.hasAlertSchemaId()) {
    body["AlertSchemaId"] = request.getAlertSchemaId();
  }

  if (!!request.hasAlertTacticId()) {
    body["AlertTacticId"] = request.getAlertTacticId();
  }

  if (!!request.hasAlertThresholdCount()) {
    body["AlertThresholdCount"] = request.getAlertThresholdCount();
  }

  if (!!request.hasAlertThresholdGroup()) {
    body["AlertThresholdGroup"] = request.getAlertThresholdGroup();
  }

  if (!!request.hasAlertThresholdPeriod()) {
    body["AlertThresholdPeriod"] = request.getAlertThresholdPeriod();
  }

  if (!!request.hasAlertType()) {
    body["AlertType"] = request.getAlertType();
  }

  if (!!request.hasDetectionExpressionContent()) {
    body["DetectionExpressionContent"] = request.getDetectionExpressionContent();
  }

  if (!!request.hasDetectionExpressionType()) {
    body["DetectionExpressionType"] = request.getDetectionExpressionType();
  }

  if (!!request.hasDetectionRuleDescription()) {
    body["DetectionRuleDescription"] = request.getDetectionRuleDescription();
  }

  if (!!request.hasDetectionRuleName()) {
    body["DetectionRuleName"] = request.getDetectionRuleName();
  }

  if (!!request.hasDetectionRuleStatus()) {
    body["DetectionRuleStatus"] = request.getDetectionRuleStatus();
  }

  if (!!request.hasDetectionRuleTemplateId()) {
    body["DetectionRuleTemplateId"] = request.getDetectionRuleTemplateId();
  }

  if (!!request.hasDetectionRuleTemplateVersion()) {
    body["DetectionRuleTemplateVersion"] = request.getDetectionRuleTemplateVersion();
  }

  if (!!request.hasDetectionRuleType()) {
    body["DetectionRuleType"] = request.getDetectionRuleType();
  }

  if (!!request.hasEntityMappings()) {
    body["EntityMappings"] = request.getEntityMappings();
  }

  if (!!request.hasIncidentAggregationExpression()) {
    body["IncidentAggregationExpression"] = request.getIncidentAggregationExpression();
  }

  if (!!request.hasIncidentAggregationType()) {
    body["IncidentAggregationType"] = request.getIncidentAggregationType();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogCategoryId()) {
    body["LogCategoryId"] = request.getLogCategoryId();
  }

  if (!!request.hasLogSchemaId()) {
    body["LogSchemaId"] = request.getLogSchemaId();
  }

  if (!!request.hasPlaybookParameters()) {
    body["PlaybookParameters"] = request.getPlaybookParameters();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.getPlaybookUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasScheduleBeginTime()) {
    body["ScheduleBeginTime"] = request.getScheduleBeginTime();
  }

  if (!!request.hasScheduleExpression()) {
    body["ScheduleExpression"] = request.getScheduleExpression();
  }

  if (!!request.hasScheduleMaxRetries()) {
    body["ScheduleMaxRetries"] = request.getScheduleMaxRetries();
  }

  if (!!request.hasScheduleMaxTimeout()) {
    body["ScheduleMaxTimeout"] = request.getScheduleMaxTimeout();
  }

  if (!!request.hasScheduleType()) {
    body["ScheduleType"] = request.getScheduleType();
  }

  if (!!request.hasScheduleWindow()) {
    body["ScheduleWindow"] = request.getScheduleWindow();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDetectionRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDetectionRuleResponse>();
}

/**
 * @summary 创建检测规则
 *
 * @param request CreateDetectionRuleRequest
 * @return CreateDetectionRuleResponse
 */
CreateDetectionRuleResponse Client::createDetectionRule(const CreateDetectionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDetectionRuleWithOptions(request, runtime);
}

/**
 * @summary 创建导出任务
 *
 * @param request CreateExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExportTaskResponse
 */
CreateExportTaskResponse Client::createExportTaskWithOptions(const CreateExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExportTaskParameter()) {
    body["ExportTaskParameter"] = request.getExportTaskParameter();
  }

  if (!!request.hasExportTaskType()) {
    body["ExportTaskType"] = request.getExportTaskType();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateExportTask"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExportTaskResponse>();
}

/**
 * @summary 创建导出任务
 *
 * @param request CreateExportTaskRequest
 * @return CreateExportTaskResponse
 */
CreateExportTaskResponse Client::createExportTask(const CreateExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExportTaskWithOptions(request, runtime);
}

/**
 * @summary 创建LogStore
 *
 * @param request CreateLogStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogStoreResponse
 */
CreateLogStoreResponse Client::createLogStoreWithOptions(const CreateLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectName()) {
    body["LogProjectName"] = request.getLogProjectName();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLogStore"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLogStoreResponse>();
}

/**
 * @summary 创建LogStore
 *
 * @param request CreateLogStoreRequest
 * @return CreateLogStoreResponse
 */
CreateLogStoreResponse Client::createLogStore(const CreateLogStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogStoreWithOptions(request, runtime);
}

/**
 * @summary 创建标准化规则
 *
 * @param tmpReq CreateNormalizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNormalizationRuleResponse
 */
CreateNormalizationRuleResponse Client::createNormalizationRuleWithOptions(const CreateNormalizationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNormalizationRuleShrinkRequest request = CreateNormalizationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNormalizationRuleIds()) {
    request.setNormalizationRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNormalizationRuleIds(), "NormalizationRuleIds", "json"));
  }

  json body = {};
  if (!!request.hasExtendContentPacked()) {
    body["ExtendContentPacked"] = request.getExtendContentPacked();
  }

  if (!!request.hasExtendFieldStoreMode()) {
    body["ExtendFieldStoreMode"] = request.getExtendFieldStoreMode();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationCategoryId()) {
    body["NormalizationCategoryId"] = request.getNormalizationCategoryId();
  }

  if (!!request.hasNormalizationRuleDescription()) {
    body["NormalizationRuleDescription"] = request.getNormalizationRuleDescription();
  }

  if (!!request.hasNormalizationRuleExpression()) {
    body["NormalizationRuleExpression"] = request.getNormalizationRuleExpression();
  }

  if (!!request.hasNormalizationRuleFormat()) {
    body["NormalizationRuleFormat"] = request.getNormalizationRuleFormat();
  }

  if (!!request.hasNormalizationRuleIdsShrink()) {
    body["NormalizationRuleIds"] = request.getNormalizationRuleIdsShrink();
  }

  if (!!request.hasNormalizationRuleMode()) {
    body["NormalizationRuleMode"] = request.getNormalizationRuleMode();
  }

  if (!!request.hasNormalizationRuleName()) {
    body["NormalizationRuleName"] = request.getNormalizationRuleName();
  }

  if (!!request.hasNormalizationRuleType()) {
    body["NormalizationRuleType"] = request.getNormalizationRuleType();
  }

  if (!!request.hasNormalizationRuleVersion()) {
    body["NormalizationRuleVersion"] = request.getNormalizationRuleVersion();
  }

  if (!!request.hasNormalizationSchemaId()) {
    body["NormalizationSchemaId"] = request.getNormalizationSchemaId();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.getOrderField();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorId()) {
    body["VendorId"] = request.getVendorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateNormalizationRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNormalizationRuleResponse>();
}

/**
 * @summary 创建标准化规则
 *
 * @param request CreateNormalizationRuleRequest
 * @return CreateNormalizationRuleResponse
 */
CreateNormalizationRuleResponse Client::createNormalizationRule(const CreateNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNormalizationRuleWithOptions(request, runtime);
}

/**
 * @summary 创建标准化结构
 *
 * @param request CreateNormalizationSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNormalizationSchemaResponse
 */
CreateNormalizationSchemaResponse Client::createNormalizationSchemaWithOptions(const CreateNormalizationSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationCategoryId()) {
    body["NormalizationCategoryId"] = request.getNormalizationCategoryId();
  }

  if (!!request.hasNormalizationFields()) {
    body["NormalizationFields"] = request.getNormalizationFields();
  }

  if (!!request.hasNormalizationSchemaDescription()) {
    body["NormalizationSchemaDescription"] = request.getNormalizationSchemaDescription();
  }

  if (!!request.hasNormalizationSchemaId()) {
    body["NormalizationSchemaId"] = request.getNormalizationSchemaId();
  }

  if (!!request.hasNormalizationSchemaName()) {
    body["NormalizationSchemaName"] = request.getNormalizationSchemaName();
  }

  if (!!request.hasNormalizationSchemaType()) {
    body["NormalizationSchemaType"] = request.getNormalizationSchemaType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasTargetLogStore()) {
    body["TargetLogStore"] = request.getTargetLogStore();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateNormalizationSchema"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNormalizationSchemaResponse>();
}

/**
 * @summary 创建标准化结构
 *
 * @param request CreateNormalizationSchemaRequest
 * @return CreateNormalizationSchemaResponse
 */
CreateNormalizationSchemaResponse Client::createNormalizationSchema(const CreateNormalizationSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNormalizationSchemaWithOptions(request, runtime);
}

/**
 * @summary 创建产品
 *
 * @param request CreateProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProductWithOptions(const CreateProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasProductName()) {
    body["ProductName"] = request.getProductName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorName()) {
    body["VendorName"] = request.getVendorName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProduct"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProductResponse>();
}

/**
 * @summary 创建产品
 *
 * @param request CreateProductRequest
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProduct(const CreateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProductWithOptions(request, runtime);
}

/**
 * @summary 创建厂商
 *
 * @param request CreateVendorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVendorResponse
 */
CreateVendorResponse Client::createVendorWithOptions(const CreateVendorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorName()) {
    body["VendorName"] = request.getVendorName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVendor"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVendorResponse>();
}

/**
 * @summary 创建厂商
 *
 * @param request CreateVendorRequest
 * @return CreateVendorResponse
 */
CreateVendorResponse Client::createVendor(const CreateVendorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVendorWithOptions(request, runtime);
}

/**
 * @summary 删除数据接入
 *
 * @param request DeleteDataIngestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataIngestionResponse
 */
DeleteDataIngestionResponse Client::deleteDataIngestionWithOptions(const DeleteDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataIngestionId()) {
    body["DataIngestionId"] = request.getDataIngestionId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataIngestion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataIngestionResponse>();
}

/**
 * @summary 删除数据接入
 *
 * @param request DeleteDataIngestionRequest
 * @return DeleteDataIngestionResponse
 */
DeleteDataIngestionResponse Client::deleteDataIngestion(const DeleteDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataIngestionWithOptions(request, runtime);
}

/**
 * @summary 删除数据集
 *
 * @param request DeleteDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSetResponse
 */
DeleteDataSetResponse Client::deleteDataSetWithOptions(const DeleteDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSetId()) {
    body["DataSetId"] = request.getDataSetId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataSet"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSetResponse>();
}

/**
 * @summary 删除数据集
 *
 * @param request DeleteDataSetRequest
 * @return DeleteDataSetResponse
 */
DeleteDataSetResponse Client::deleteDataSet(const DeleteDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSetWithOptions(request, runtime);
}

/**
 * @summary 删除数据集记录
 *
 * @param request DeleteDataSetRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSetRecordResponse
 */
DeleteDataSetRecordResponse Client::deleteDataSetRecordWithOptions(const DeleteDataSetRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSetId()) {
    body["DataSetId"] = request.getDataSetId();
  }

  if (!!request.hasDataSetRecordIds()) {
    body["DataSetRecordIds"] = request.getDataSetRecordIds();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataSetRecord"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSetRecordResponse>();
}

/**
 * @summary 删除数据集记录
 *
 * @param request DeleteDataSetRecordRequest
 * @return DeleteDataSetRecordResponse
 */
DeleteDataSetRecordResponse Client::deleteDataSetRecord(const DeleteDataSetRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSetRecordWithOptions(request, runtime);
}

/**
 * @summary 删除数据源
 *
 * @param request DeleteDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSourceWithOptions(const DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataSource"},
    {"version" , "2024-12-12"},
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
 * @summary 删除数据源
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary 删除检测规则
 *
 * @param request DeleteDetectionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDetectionRuleResponse
 */
DeleteDetectionRuleResponse Client::deleteDetectionRuleWithOptions(const DeleteDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDetectionRuleId()) {
    body["DetectionRuleId"] = request.getDetectionRuleId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDetectionRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDetectionRuleResponse>();
}

/**
 * @summary 删除检测规则
 *
 * @param request DeleteDetectionRuleRequest
 * @return DeleteDetectionRuleResponse
 */
DeleteDetectionRuleResponse Client::deleteDetectionRule(const DeleteDetectionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDetectionRuleWithOptions(request, runtime);
}

/**
 * @summary 删除LogStore
 *
 * @param request DeleteLogStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogStoreResponse
 */
DeleteLogStoreResponse Client::deleteLogStoreWithOptions(const DeleteLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectName()) {
    body["LogProjectName"] = request.getLogProjectName();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteLogStore"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogStoreResponse>();
}

/**
 * @summary 删除LogStore
 *
 * @param request DeleteLogStoreRequest
 * @return DeleteLogStoreResponse
 */
DeleteLogStoreResponse Client::deleteLogStore(const DeleteLogStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogStoreWithOptions(request, runtime);
}

/**
 * @summary 删除标准化规则
 *
 * @param request DeleteNormalizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNormalizationRuleResponse
 */
DeleteNormalizationRuleResponse Client::deleteNormalizationRuleWithOptions(const DeleteNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteNormalizationRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNormalizationRuleResponse>();
}

/**
 * @summary 删除标准化规则
 *
 * @param request DeleteNormalizationRuleRequest
 * @return DeleteNormalizationRuleResponse
 */
DeleteNormalizationRuleResponse Client::deleteNormalizationRule(const DeleteNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNormalizationRuleWithOptions(request, runtime);
}

/**
 * @summary 删除标准化规则版本
 *
 * @param request DeleteNormalizationRuleVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNormalizationRuleVersionResponse
 */
DeleteNormalizationRuleVersionResponse Client::deleteNormalizationRuleVersionWithOptions(const DeleteNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasNormalizationRuleVersion()) {
    body["NormalizationRuleVersion"] = request.getNormalizationRuleVersion();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteNormalizationRuleVersion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNormalizationRuleVersionResponse>();
}

/**
 * @summary 删除标准化规则版本
 *
 * @param request DeleteNormalizationRuleVersionRequest
 * @return DeleteNormalizationRuleVersionResponse
 */
DeleteNormalizationRuleVersionResponse Client::deleteNormalizationRuleVersion(const DeleteNormalizationRuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNormalizationRuleVersionWithOptions(request, runtime);
}

/**
 * @summary 删除产品
 *
 * @param request DeleteProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProductWithOptions(const DeleteProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteProduct"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProductResponse>();
}

/**
 * @summary 删除产品
 *
 * @param request DeleteProductRequest
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProduct(const DeleteProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProductWithOptions(request, runtime);
}

/**
 * @summary 删除厂商
 *
 * @param request DeleteVendorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVendorResponse
 */
DeleteVendorResponse Client::deleteVendorWithOptions(const DeleteVendorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorId()) {
    body["VendorId"] = request.getVendorId();
  }

  if (!!request.hasVendorName()) {
    body["VendorName"] = request.getVendorName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVendor"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVendorResponse>();
}

/**
 * @summary 删除厂商
 *
 * @param request DeleteVendorRequest
 * @return DeleteVendorResponse
 */
DeleteVendorResponse Client::deleteVendor(const DeleteVendorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVendorWithOptions(request, runtime);
}

/**
 * @summary 停止数据接入
 *
 * @param request DisableDataIngestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDataIngestionResponse
 */
DisableDataIngestionResponse Client::disableDataIngestionWithOptions(const DisableDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataIngestionId()) {
    body["DataIngestionId"] = request.getDataIngestionId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisableDataIngestion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDataIngestionResponse>();
}

/**
 * @summary 停止数据接入
 *
 * @param request DisableDataIngestionRequest
 * @return DisableDataIngestionResponse
 */
DisableDataIngestionResponse Client::disableDataIngestion(const DisableDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDataIngestionWithOptions(request, runtime);
}

/**
 * @summary 启动数据接入
 *
 * @param request EnableDataIngestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDataIngestionResponse
 */
EnableDataIngestionResponse Client::enableDataIngestionWithOptions(const EnableDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataIngestionId()) {
    body["DataIngestionId"] = request.getDataIngestionId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnableDataIngestion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDataIngestionResponse>();
}

/**
 * @summary 启动数据接入
 *
 * @param request EnableDataIngestionRequest
 * @return EnableDataIngestionResponse
 */
EnableDataIngestionResponse Client::enableDataIngestion(const EnableDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDataIngestionWithOptions(request, runtime);
}

/**
 * @summary 查看LogStore
 *
 * @param request ExecuteLogQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteLogQueryResponse
 */
ExecuteLogQueryResponse Client::executeLogQueryWithOptions(const ExecuteLogQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExtendContentPacked()) {
    body["ExtendContentPacked"] = request.getExtendContentPacked();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectName()) {
    body["LogProjectName"] = request.getLogProjectName();
  }

  if (!!request.hasLogQuery()) {
    body["LogQuery"] = request.getLogQuery();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasNormalizationSchemaId()) {
    body["NormalizationSchemaId"] = request.getNormalizationSchemaId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteLogQuery"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteLogQueryResponse>();
}

/**
 * @summary 查看LogStore
 *
 * @param request ExecuteLogQueryRequest
 * @return ExecuteLogQueryResponse
 */
ExecuteLogQueryResponse Client::executeLogQuery(const ExecuteLogQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeLogQueryWithOptions(request, runtime);
}

/**
 * @summary 执行升级
 *
 * @param request ExecuteUpgradeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteUpgradeResponse
 */
ExecuteUpgradeResponse Client::executeUpgradeWithOptions(const ExecuteUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteUpgrade"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteUpgradeResponse>();
}

/**
 * @summary 执行升级
 *
 * @param request ExecuteUpgradeRequest
 * @return ExecuteUpgradeResponse
 */
ExecuteUpgradeResponse Client::executeUpgrade(const ExecuteUpgradeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeUpgradeWithOptions(request, runtime);
}

/**
 * @summary 获取数据批量接入
 *
 * @param request GetDataBatchIngestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataBatchIngestionResponse
 */
GetDataBatchIngestionResponse Client::getDataBatchIngestionWithOptions(const GetDataBatchIngestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDataBatchIngestion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataBatchIngestionResponse>();
}

/**
 * @summary 获取数据批量接入
 *
 * @param request GetDataBatchIngestionRequest
 * @return GetDataBatchIngestionResponse
 */
GetDataBatchIngestionResponse Client::getDataBatchIngestion(const GetDataBatchIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataBatchIngestionWithOptions(request, runtime);
}

/**
 * @summary 获取日志管理页面里用户数据存储的详情。
 *
 * @param request GetDataStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataStorageResponse
 */
GetDataStorageResponse Client::getDataStorageWithOptions(const GetDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDataStorage"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataStorageResponse>();
}

/**
 * @summary 获取日志管理页面里用户数据存储的详情。
 *
 * @param request GetDataStorageRequest
 * @return GetDataStorageResponse
 */
GetDataStorageResponse Client::getDataStorage(const GetDataStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataStorageWithOptions(request, runtime);
}

/**
 * @summary 更新检测规则
 *
 * @param request GetDetectionStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDetectionStatisticResponse
 */
GetDetectionStatisticResponse Client::getDetectionStatisticWithOptions(const GetDetectionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDetectionStatistic"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDetectionStatisticResponse>();
}

/**
 * @summary 更新检测规则
 *
 * @param request GetDetectionStatisticRequest
 * @return GetDetectionStatisticResponse
 */
GetDetectionStatisticResponse Client::getDetectionStatistic(const GetDetectionStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDetectionStatisticWithOptions(request, runtime);
}

/**
 * @summary 获取导出任务进度
 *
 * @param request GetExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExportTaskResponse
 */
GetExportTaskResponse Client::getExportTaskWithOptions(const GetExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExportId()) {
    body["ExportId"] = request.getExportId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetExportTask"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExportTaskResponse>();
}

/**
 * @summary 获取导出任务进度
 *
 * @param request GetExportTaskRequest
 * @return GetExportTaskResponse
 */
GetExportTaskResponse Client::getExportTask(const GetExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExportTaskWithOptions(request, runtime);
}

/**
 * @summary 获取事件列表
 *
 * @param request GetIncidentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIncidentResponse
 */
GetIncidentResponse Client::getIncidentWithOptions(const GetIncidentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIncidentUuid()) {
    body["IncidentUuid"] = request.getIncidentUuid();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetIncident"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIncidentResponse>();
}

/**
 * @summary 获取事件列表
 *
 * @param request GetIncidentRequest
 * @return GetIncidentResponse
 */
GetIncidentResponse Client::getIncident(const GetIncidentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIncidentWithOptions(request, runtime);
}

/**
 * @summary 查看LogStore
 *
 * @param request GetLogTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogTicketResponse
 */
GetLogTicketResponse Client::getLogTicketWithOptions(const GetLogTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLogTicket"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogTicketResponse>();
}

/**
 * @summary 查看LogStore
 *
 * @param request GetLogTicketRequest
 * @return GetLogTicketResponse
 */
GetLogTicketResponse Client::getLogTicket(const GetLogTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogTicketWithOptions(request, runtime);
}

/**
 * @summary 获取标准化规则
 *
 * @param request GetNormalizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNormalizationRuleResponse
 */
GetNormalizationRuleResponse Client::getNormalizationRuleWithOptions(const GetNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNormalizationRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNormalizationRuleResponse>();
}

/**
 * @summary 获取标准化规则
 *
 * @param request GetNormalizationRuleRequest
 * @return GetNormalizationRuleResponse
 */
GetNormalizationRuleResponse Client::getNormalizationRule(const GetNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNormalizationRuleWithOptions(request, runtime);
}

/**
 * @summary 获取标准化规则指定版本信息
 *
 * @param request GetNormalizationRuleVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNormalizationRuleVersionResponse
 */
GetNormalizationRuleVersionResponse Client::getNormalizationRuleVersionWithOptions(const GetNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasNormalizationRuleVersion()) {
    body["NormalizationRuleVersion"] = request.getNormalizationRuleVersion();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNormalizationRuleVersion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNormalizationRuleVersionResponse>();
}

/**
 * @summary 获取标准化规则指定版本信息
 *
 * @param request GetNormalizationRuleVersionRequest
 * @return GetNormalizationRuleVersionResponse
 */
GetNormalizationRuleVersionResponse Client::getNormalizationRuleVersion(const GetNormalizationRuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNormalizationRuleVersionWithOptions(request, runtime);
}

/**
 * @summary 获取Schema信息以及字段
 *
 * @param request GetNormalizationSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNormalizationSchemaResponse
 */
GetNormalizationSchemaResponse Client::getNormalizationSchemaWithOptions(const GetNormalizationSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationSchemaId()) {
    body["NormalizationSchemaId"] = request.getNormalizationSchemaId();
  }

  if (!!request.hasNormalizationSchemaType()) {
    body["NormalizationSchemaType"] = request.getNormalizationSchemaType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNormalizationSchema"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNormalizationSchemaResponse>();
}

/**
 * @summary 获取Schema信息以及字段
 *
 * @param request GetNormalizationSchemaRequest
 * @return GetNormalizationSchemaResponse
 */
GetNormalizationSchemaResponse Client::getNormalizationSchema(const GetNormalizationSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNormalizationSchemaWithOptions(request, runtime);
}

/**
 * @summary 获取用户配置信息
 *
 * @param request GetUserConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserConfigResponse
 */
GetUserConfigResponse Client::getUserConfigWithOptions(const GetUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetUserConfig"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserConfigResponse>();
}

/**
 * @summary 获取用户配置信息
 *
 * @param request GetUserConfigRequest
 * @return GetUserConfigResponse
 */
GetUserConfigResponse Client::getUserConfig(const GetUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserConfigWithOptions(request, runtime);
}

/**
 * @summary 查询接入模板
 *
 * @param request ListDataIngestionTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataIngestionTemplatesResponse
 */
ListDataIngestionTemplatesResponse Client::listDataIngestionTemplatesWithOptions(const ListDataIngestionTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataIngestionTemplateStatus()) {
    body["DataIngestionTemplateStatus"] = request.getDataIngestionTemplateStatus();
  }

  if (!!request.hasDataSourceTemplateIds()) {
    body["DataSourceTemplateIds"] = request.getDataSourceTemplateIds();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataIngestionTemplates"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataIngestionTemplatesResponse>();
}

/**
 * @summary 查询接入模板
 *
 * @param request ListDataIngestionTemplatesRequest
 * @return ListDataIngestionTemplatesResponse
 */
ListDataIngestionTemplatesResponse Client::listDataIngestionTemplates(const ListDataIngestionTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataIngestionTemplatesWithOptions(request, runtime);
}

/**
 * @summary 获取数据接入任务列表
 *
 * @param tmpReq ListDataIngestionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataIngestionsResponse
 */
ListDataIngestionsResponse Client::listDataIngestionsWithOptions(const ListDataIngestionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataIngestionsShrinkRequest request = ListDataIngestionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataIngestionIds()) {
    request.setDataIngestionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataIngestionIds(), "DataIngestionIds", "simple"));
  }

  if (!!tmpReq.hasDataIngestionTemplateIds()) {
    request.setDataIngestionTemplateIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataIngestionTemplateIds(), "DataIngestionTemplateIds", "simple"));
  }

  json body = {};
  if (!!request.hasDataIngestionIdsShrink()) {
    body["DataIngestionIds"] = request.getDataIngestionIdsShrink();
  }

  if (!!request.hasDataIngestionStatus()) {
    body["DataIngestionStatus"] = request.getDataIngestionStatus();
  }

  if (!!request.hasDataIngestionTemplateIdsShrink()) {
    body["DataIngestionTemplateIds"] = request.getDataIngestionTemplateIdsShrink();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataIngestions"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataIngestionsResponse>();
}

/**
 * @summary 获取数据接入任务列表
 *
 * @param request ListDataIngestionsRequest
 * @return ListDataIngestionsResponse
 */
ListDataIngestionsResponse Client::listDataIngestions(const ListDataIngestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataIngestionsWithOptions(request, runtime);
}

/**
 * @summary 获取数据集记录列表
 *
 * @param request ListDataSetRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSetRecordsResponse
 */
ListDataSetRecordsResponse Client::listDataSetRecordsWithOptions(const ListDataSetRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSetId()) {
    body["DataSetId"] = request.getDataSetId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataSetRecords"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSetRecordsResponse>();
}

/**
 * @summary 获取数据集记录列表
 *
 * @param request ListDataSetRecordsRequest
 * @return ListDataSetRecordsResponse
 */
ListDataSetRecordsResponse Client::listDataSetRecords(const ListDataSetRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSetRecordsWithOptions(request, runtime);
}

/**
 * @summary 获取数据集列表
 *
 * @param tmpReq ListDataSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSetsResponse
 */
ListDataSetsResponse Client::listDataSetsWithOptions(const ListDataSetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataSetsShrinkRequest request = ListDataSetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataSetIds()) {
    request.setDataSetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSetIds(), "DataSetIds", "simple"));
  }

  json body = {};
  if (!!request.hasDataSetId()) {
    body["DataSetId"] = request.getDataSetId();
  }

  if (!!request.hasDataSetIdsShrink()) {
    body["DataSetIds"] = request.getDataSetIdsShrink();
  }

  if (!!request.hasDataSetName()) {
    body["DataSetName"] = request.getDataSetName();
  }

  if (!!request.hasDataSetStatus()) {
    body["DataSetStatus"] = request.getDataSetStatus();
  }

  if (!!request.hasDataSetType()) {
    body["DataSetType"] = request.getDataSetType();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderDirection()) {
    body["OrderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasOrderFieldName()) {
    body["OrderFieldName"] = request.getOrderFieldName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataSets"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSetsResponse>();
}

/**
 * @summary 获取数据集列表
 *
 * @param request ListDataSetsRequest
 * @return ListDataSetsResponse
 */
ListDataSetsResponse Client::listDataSets(const ListDataSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSetsWithOptions(request, runtime);
}

/**
 * @summary 查询数据源模板
 *
 * @param tmpReq ListDataSourceTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceTemplatesResponse
 */
ListDataSourceTemplatesResponse Client::listDataSourceTemplatesWithOptions(const ListDataSourceTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataSourceTemplatesShrinkRequest request = ListDataSourceTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataSourceTemplateIds()) {
    request.setDataSourceTemplateIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSourceTemplateIds(), "DataSourceTemplateIds", "simple"));
  }

  json body = {};
  if (!!request.hasDataSourceTemplateIdsShrink()) {
    body["DataSourceTemplateIds"] = request.getDataSourceTemplateIdsShrink();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataSourceTemplates"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceTemplatesResponse>();
}

/**
 * @summary 查询数据源模板
 *
 * @param request ListDataSourceTemplatesRequest
 * @return ListDataSourceTemplatesResponse
 */
ListDataSourceTemplatesResponse Client::listDataSourceTemplates(const ListDataSourceTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceTemplatesWithOptions(request, runtime);
}

/**
 * @summary 获取厂商列表
 *
 * @param tmpReq ListDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSourcesWithOptions(const ListDataSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataSourcesShrinkRequest request = ListDataSourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataSourceIds()) {
    request.setDataSourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSourceIds(), "DataSourceIds", "simple"));
  }

  if (!!tmpReq.hasDataSourceTemplateIds()) {
    request.setDataSourceTemplateIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSourceTemplateIds(), "DataSourceTemplateIds", "simple"));
  }

  if (!!tmpReq.hasLogUserIds()) {
    request.setLogUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLogUserIds(), "LogUserIds", "simple"));
  }

  json body = {};
  if (!!request.hasDataSourceFrom()) {
    body["DataSourceFrom"] = request.getDataSourceFrom();
  }

  if (!!request.hasDataSourceIdsShrink()) {
    body["DataSourceIds"] = request.getDataSourceIdsShrink();
  }

  if (!!request.hasDataSourceName()) {
    body["DataSourceName"] = request.getDataSourceName();
  }

  if (!!request.hasDataSourceStatus()) {
    body["DataSourceStatus"] = request.getDataSourceStatus();
  }

  if (!!request.hasDataSourceStoreStatus()) {
    body["DataSourceStoreStatus"] = request.getDataSourceStoreStatus();
  }

  if (!!request.hasDataSourceTemplateIdsShrink()) {
    body["DataSourceTemplateIds"] = request.getDataSourceTemplateIdsShrink();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.getDataSourceType();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectName()) {
    body["LogProjectName"] = request.getLogProjectName();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasLogUserIdsShrink()) {
    body["LogUserIds"] = request.getLogUserIdsShrink();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.getOrder();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.getOrderField();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataSources"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourcesResponse>();
}

/**
 * @summary 获取厂商列表
 *
 * @param request ListDataSourcesRequest
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourcesWithOptions(request, runtime);
}

/**
 * @summary 获取检测规则列表
 *
 * @param tmpReq ListDetectionRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDetectionRulesResponse
 */
ListDetectionRulesResponse Client::listDetectionRulesWithOptions(const ListDetectionRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDetectionRulesShrinkRequest request = ListDetectionRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDetectionRuleIds()) {
    request.setDetectionRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDetectionRuleIds(), "DetectionRuleIds", "simple"));
  }

  json body = {};
  if (!!request.hasAlertAttCk()) {
    body["AlertAttCk"] = request.getAlertAttCk();
  }

  if (!!request.hasAlertLevel()) {
    body["AlertLevel"] = request.getAlertLevel();
  }

  if (!!request.hasAlertTacticId()) {
    body["AlertTacticId"] = request.getAlertTacticId();
  }

  if (!!request.hasAlertType()) {
    body["AlertType"] = request.getAlertType();
  }

  if (!!request.hasDetectionExpressionType()) {
    body["DetectionExpressionType"] = request.getDetectionExpressionType();
  }

  if (!!request.hasDetectionRuleId()) {
    body["DetectionRuleId"] = request.getDetectionRuleId();
  }

  if (!!request.hasDetectionRuleIdsShrink()) {
    body["DetectionRuleIds"] = request.getDetectionRuleIdsShrink();
  }

  if (!!request.hasDetectionRuleName()) {
    body["DetectionRuleName"] = request.getDetectionRuleName();
  }

  if (!!request.hasDetectionRuleStatus()) {
    body["DetectionRuleStatus"] = request.getDetectionRuleStatus();
  }

  if (!!request.hasDetectionRuleType()) {
    body["DetectionRuleType"] = request.getDetectionRuleType();
  }

  if (!!request.hasIncidentAggregationType()) {
    body["IncidentAggregationType"] = request.getIncidentAggregationType();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogCategoryId()) {
    body["LogCategoryId"] = request.getLogCategoryId();
  }

  if (!!request.hasLogSchemaId()) {
    body["LogSchemaId"] = request.getLogSchemaId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderDirection()) {
    body["OrderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasOrderFieldName()) {
    body["OrderFieldName"] = request.getOrderFieldName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDetectionRules"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDetectionRulesResponse>();
}

/**
 * @summary 获取检测规则列表
 *
 * @param request ListDetectionRulesRequest
 * @return ListDetectionRulesResponse
 */
ListDetectionRulesResponse Client::listDetectionRules(const ListDetectionRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDetectionRulesWithOptions(request, runtime);
}

/**
 * @summary 获取事件列表
 *
 * @param tmpReq ListIncidentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIncidentsResponse
 */
ListIncidentsResponse Client::listIncidentsWithOptions(const ListIncidentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListIncidentsShrinkRequest request = ListIncidentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIncidentUuids()) {
    request.setIncidentUuidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIncidentUuids(), "IncidentUuids", "simple"));
  }

  json query = {};
  if (!!request.hasIncidentName()) {
    query["IncidentName"] = request.getIncidentName();
  }

  if (!!request.hasIncidentUuidsShrink()) {
    query["IncidentUuids"] = request.getIncidentUuidsShrink();
  }

  json body = {};
  if (!!request.hasAlertUuid()) {
    body["AlertUuid"] = request.getAlertUuid();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIncidentStatus()) {
    body["IncidentStatus"] = request.getIncidentStatus();
  }

  if (!!request.hasIncidentTags()) {
    body["IncidentTags"] = request.getIncidentTags();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderDirection()) {
    body["OrderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasOrderFieldName()) {
    body["OrderFieldName"] = request.getOrderFieldName();
  }

  if (!!request.hasOwners()) {
    body["Owners"] = request.getOwners();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRelateAssetId()) {
    body["RelateAssetId"] = request.getRelateAssetId();
  }

  if (!!request.hasRelateEntityId()) {
    body["RelateEntityId"] = request.getRelateEntityId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasThreatLevel()) {
    body["ThreatLevel"] = request.getThreatLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListIncidents"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIncidentsResponse>();
}

/**
 * @summary 获取事件列表
 *
 * @param request ListIncidentsRequest
 * @return ListIncidentsResponse
 */
ListIncidentsResponse Client::listIncidents(const ListIncidentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIncidentsWithOptions(request, runtime);
}

/**
 * @summary 获取日志Project列表
 *
 * @param request ListLogProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogProjectsResponse
 */
ListLogProjectsResponse Client::listLogProjectsWithOptions(const ListLogProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLogProjects"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogProjectsResponse>();
}

/**
 * @summary 获取日志Project列表
 *
 * @param request ListLogProjectsRequest
 * @return ListLogProjectsResponse
 */
ListLogProjectsResponse Client::listLogProjects(const ListLogProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogProjectsWithOptions(request, runtime);
}

/**
 * @summary 获取所有的区域
 *
 * @param request ListLogRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogRegionsResponse
 */
ListLogRegionsResponse Client::listLogRegionsWithOptions(const ListLogRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLogRegions"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogRegionsResponse>();
}

/**
 * @summary 获取所有的区域
 *
 * @param request ListLogRegionsRequest
 * @return ListLogRegionsResponse
 */
ListLogRegionsResponse Client::listLogRegions(const ListLogRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogRegionsWithOptions(request, runtime);
}

/**
 * @summary 获取日志store列表
 *
 * @param request ListLogStoresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogStoresResponse
 */
ListLogStoresResponse Client::listLogStoresWithOptions(const ListLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectName()) {
    body["LogProjectName"] = request.getLogProjectName();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLogStores"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogStoresResponse>();
}

/**
 * @summary 获取日志store列表
 *
 * @param request ListLogStoresRequest
 * @return ListLogStoresResponse
 */
ListLogStoresResponse Client::listLogStores(const ListLogStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogStoresWithOptions(request, runtime);
}

/**
 * @summary 获取标准化目录
 *
 * @param request ListNormalizationCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNormalizationCategoriesResponse
 */
ListNormalizationCategoriesResponse Client::listNormalizationCategoriesWithOptions(const ListNormalizationCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNormalizationCategoryType()) {
    body["NormalizationCategoryType"] = request.getNormalizationCategoryType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNormalizationCategories"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNormalizationCategoriesResponse>();
}

/**
 * @summary 获取标准化目录
 *
 * @param request ListNormalizationCategoriesRequest
 * @return ListNormalizationCategoriesResponse
 */
ListNormalizationCategoriesResponse Client::listNormalizationCategories(const ListNormalizationCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationCategoriesWithOptions(request, runtime);
}

/**
 * @summary 获取标准化日志所有字段
 *
 * @param request ListNormalizationFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNormalizationFieldsResponse
 */
ListNormalizationFieldsResponse Client::listNormalizationFieldsWithOptions(const ListNormalizationFieldsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNormalizationFields"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNormalizationFieldsResponse>();
}

/**
 * @summary 获取标准化日志所有字段
 *
 * @param request ListNormalizationFieldsRequest
 * @return ListNormalizationFieldsResponse
 */
ListNormalizationFieldsResponse Client::listNormalizationFields(const ListNormalizationFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationFieldsWithOptions(request, runtime);
}

/**
 * @summary 获取规则的安全能力
 *
 * @param tmpReq ListNormalizationRuleCapacitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNormalizationRuleCapacitiesResponse
 */
ListNormalizationRuleCapacitiesResponse Client::listNormalizationRuleCapacitiesWithOptions(const ListNormalizationRuleCapacitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListNormalizationRuleCapacitiesShrinkRequest request = ListNormalizationRuleCapacitiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNormalizationRuleIds()) {
    request.setNormalizationRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNormalizationRuleIds(), "NormalizationRuleIds", "simple"));
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasNormalizationRuleIdsShrink()) {
    body["NormalizationRuleIds"] = request.getNormalizationRuleIdsShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNormalizationRuleCapacities"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNormalizationRuleCapacitiesResponse>();
}

/**
 * @summary 获取规则的安全能力
 *
 * @param request ListNormalizationRuleCapacitiesRequest
 * @return ListNormalizationRuleCapacitiesResponse
 */
ListNormalizationRuleCapacitiesResponse Client::listNormalizationRuleCapacities(const ListNormalizationRuleCapacitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationRuleCapacitiesWithOptions(request, runtime);
}

/**
 * @summary 获取标准化规则版本列表
 *
 * @param request ListNormalizationRuleVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNormalizationRuleVersionsResponse
 */
ListNormalizationRuleVersionsResponse Client::listNormalizationRuleVersionsWithOptions(const ListNormalizationRuleVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNormalizationRuleVersions"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNormalizationRuleVersionsResponse>();
}

/**
 * @summary 获取标准化规则版本列表
 *
 * @param request ListNormalizationRuleVersionsRequest
 * @return ListNormalizationRuleVersionsResponse
 */
ListNormalizationRuleVersionsResponse Client::listNormalizationRuleVersions(const ListNormalizationRuleVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationRuleVersionsWithOptions(request, runtime);
}

/**
 * @summary 获取标准化规则列表
 *
 * @param tmpReq ListNormalizationRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNormalizationRulesResponse
 */
ListNormalizationRulesResponse Client::listNormalizationRulesWithOptions(const ListNormalizationRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListNormalizationRulesShrinkRequest request = ListNormalizationRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNormalizationRuleIds()) {
    request.setNormalizationRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNormalizationRuleIds(), "NormalizationRuleIds", "simple"));
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNormalizationCategoryId()) {
    body["NormalizationCategoryId"] = request.getNormalizationCategoryId();
  }

  if (!!request.hasNormalizationRuleIdsShrink()) {
    body["NormalizationRuleIds"] = request.getNormalizationRuleIdsShrink();
  }

  if (!!request.hasNormalizationRuleName()) {
    body["NormalizationRuleName"] = request.getNormalizationRuleName();
  }

  if (!!request.hasNormalizationRuleType()) {
    body["NormalizationRuleType"] = request.getNormalizationRuleType();
  }

  if (!!request.hasNormalizationSchemaId()) {
    body["NormalizationSchemaId"] = request.getNormalizationSchemaId();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.getOrderField();
  }

  if (!!request.hasOrderType()) {
    body["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorId()) {
    body["VendorId"] = request.getVendorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNormalizationRules"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNormalizationRulesResponse>();
}

/**
 * @summary 获取标准化规则列表
 *
 * @param request ListNormalizationRulesRequest
 * @return ListNormalizationRulesResponse
 */
ListNormalizationRulesResponse Client::listNormalizationRules(const ListNormalizationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationRulesWithOptions(request, runtime);
}

/**
 * @summary 获取标准化类目
 *
 * @param request ListNormalizationSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNormalizationSchemasResponse
 */
ListNormalizationSchemasResponse Client::listNormalizationSchemasWithOptions(const ListNormalizationSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNormalizationCategoryId()) {
    body["NormalizationCategoryId"] = request.getNormalizationCategoryId();
  }

  if (!!request.hasNormalizationSchemaType()) {
    body["NormalizationSchemaType"] = request.getNormalizationSchemaType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNormalizationSchemas"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNormalizationSchemasResponse>();
}

/**
 * @summary 获取标准化类目
 *
 * @param request ListNormalizationSchemasRequest
 * @return ListNormalizationSchemasResponse
 */
ListNormalizationSchemasResponse Client::listNormalizationSchemas(const ListNormalizationSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationSchemasWithOptions(request, runtime);
}

/**
 * @summary 获取产品列表
 *
 * @param tmpReq ListProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProductsShrinkRequest request = ListProductsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProductIds()) {
    request.setProductIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProductIds(), "ProductIds", "simple"));
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductIdsShrink()) {
    body["ProductIds"] = request.getProductIdsShrink();
  }

  if (!!request.hasProductName()) {
    body["ProductName"] = request.getProductName();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorId()) {
    body["VendorId"] = request.getVendorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsResponse>();
}

/**
 * @summary 获取产品列表
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsWithOptions(request, runtime);
}

/**
 * @summary 获取接入流量统计
 *
 * @param tmpReq ListTrafficStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrafficStatisticsResponse
 */
ListTrafficStatisticsResponse Client::listTrafficStatisticsWithOptions(const ListTrafficStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTrafficStatisticsShrinkRequest request = ListTrafficStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLogUserIds()) {
    request.setLogUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLogUserIds(), "LogUserIds", "simple"));
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogUserIdsShrink()) {
    body["LogUserIds"] = request.getLogUserIdsShrink();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionTag()) {
    body["RegionTag"] = request.getRegionTag();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasTrafficStatisticPeriod()) {
    body["TrafficStatisticPeriod"] = request.getTrafficStatisticPeriod();
  }

  if (!!request.hasTrafficStatisticPeriodType()) {
    body["TrafficStatisticPeriodType"] = request.getTrafficStatisticPeriodType();
  }

  if (!!request.hasTrafficStatisticType()) {
    body["TrafficStatisticType"] = request.getTrafficStatisticType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTrafficStatistics"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrafficStatisticsResponse>();
}

/**
 * @summary 获取接入流量统计
 *
 * @param request ListTrafficStatisticsRequest
 * @return ListTrafficStatisticsResponse
 */
ListTrafficStatisticsResponse Client::listTrafficStatistics(const ListTrafficStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTrafficStatisticsWithOptions(request, runtime);
}

/**
 * @summary 获取升级项列表
 *
 * @param request ListUpgradeItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUpgradeItemsResponse
 */
ListUpgradeItemsResponse Client::listUpgradeItemsWithOptions(const ListUpgradeItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListUpgradeItems"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUpgradeItemsResponse>();
}

/**
 * @summary 获取升级项列表
 *
 * @param request ListUpgradeItemsRequest
 * @return ListUpgradeItemsResponse
 */
ListUpgradeItemsResponse Client::listUpgradeItems(const ListUpgradeItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUpgradeItemsWithOptions(request, runtime);
}

/**
 * @summary 获取厂商列表
 *
 * @param tmpReq ListVendorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVendorsResponse
 */
ListVendorsResponse Client::listVendorsWithOptions(const ListVendorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListVendorsShrinkRequest request = ListVendorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVendorIds()) {
    request.setVendorIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVendorIds(), "VendorIds", "simple"));
  }

  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorIdsShrink()) {
    body["VendorIds"] = request.getVendorIdsShrink();
  }

  if (!!request.hasVendorName()) {
    body["VendorName"] = request.getVendorName();
  }

  if (!!request.hasVendorType()) {
    body["VendorType"] = request.getVendorType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVendors"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVendorsResponse>();
}

/**
 * @summary 获取厂商列表
 *
 * @param request ListVendorsRequest
 * @return ListVendorsResponse
 */
ListVendorsResponse Client::listVendors(const ListVendorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVendorsWithOptions(request, runtime);
}

/**
 * @summary 刷新数据源
 *
 * @param request RefreshDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshDataSourceResponse
 */
RefreshDataSourceResponse Client::refreshDataSourceWithOptions(const RefreshDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RefreshDataSource"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshDataSourceResponse>();
}

/**
 * @summary 刷新数据源
 *
 * @param request RefreshDataSourceRequest
 * @return RefreshDataSourceResponse
 */
RefreshDataSourceResponse Client::refreshDataSource(const RefreshDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshDataSourceWithOptions(request, runtime);
}

/**
 * @summary 数据存储的清空操作，该动作会删除已有的数据，重新初始化物理存储。
 *
 * @param request ResetDataStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetDataStorageResponse
 */
ResetDataStorageResponse Client::resetDataStorageWithOptions(const ResetDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResetDataStorage"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetDataStorageResponse>();
}

/**
 * @summary 数据存储的清空操作，该动作会删除已有的数据，重新初始化物理存储。
 *
 * @param request ResetDataStorageRequest
 * @return ResetDataStorageResponse
 */
ResetDataStorageResponse Client::resetDataStorage(const ResetDataStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetDataStorageWithOptions(request, runtime);
}

/**
 * @summary 设置标准化规则默认版本
 *
 * @param request SetDefaultNormalizationRuleVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultNormalizationRuleVersionResponse
 */
SetDefaultNormalizationRuleVersionResponse Client::setDefaultNormalizationRuleVersionWithOptions(const SetDefaultNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasNormalizationRuleVersion()) {
    body["NormalizationRuleVersion"] = request.getNormalizationRuleVersion();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetDefaultNormalizationRuleVersion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultNormalizationRuleVersionResponse>();
}

/**
 * @summary 设置标准化规则默认版本
 *
 * @param request SetDefaultNormalizationRuleVersionRequest
 * @return SetDefaultNormalizationRuleVersionResponse
 */
SetDefaultNormalizationRuleVersionResponse Client::setDefaultNormalizationRuleVersion(const SetDefaultNormalizationRuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultNormalizationRuleVersionWithOptions(request, runtime);
}

/**
 * @summary 更新数据批量接入
 *
 * @param tmpReq UpdateDataBatchIngestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataBatchIngestionResponse
 */
UpdateDataBatchIngestionResponse Client::updateDataBatchIngestionWithOptions(const UpdateDataBatchIngestionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataBatchIngestionShrinkRequest request = UpdateDataBatchIngestionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataIngestionIds()) {
    request.setDataIngestionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataIngestionIds(), "DataIngestionIds", "simple"));
  }

  if (!!tmpReq.hasLogUserIds()) {
    request.setLogUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLogUserIds(), "LogUserIds", "simple"));
  }

  json body = {};
  if (!!request.hasAutoScanNew()) {
    body["AutoScanNew"] = request.getAutoScanNew();
  }

  if (!!request.hasDataBatchIngestionMode()) {
    body["DataBatchIngestionMode"] = request.getDataBatchIngestionMode();
  }

  if (!!request.hasDataIngestionIdsShrink()) {
    body["DataIngestionIds"] = request.getDataIngestionIdsShrink();
  }

  if (!!request.hasDataSourceRecognizeEnabled()) {
    body["DataSourceRecognizeEnabled"] = request.getDataSourceRecognizeEnabled();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogUserIdsShrink()) {
    body["LogUserIds"] = request.getLogUserIdsShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataBatchIngestion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataBatchIngestionResponse>();
}

/**
 * @summary 更新数据批量接入
 *
 * @param request UpdateDataBatchIngestionRequest
 * @return UpdateDataBatchIngestionResponse
 */
UpdateDataBatchIngestionResponse Client::updateDataBatchIngestion(const UpdateDataBatchIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataBatchIngestionWithOptions(request, runtime);
}

/**
 * @summary 更新数据接入信息
 *
 * @param request UpdateDataIngestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataIngestionResponse
 */
UpdateDataIngestionResponse Client::updateDataIngestionWithOptions(const UpdateDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataIngestionId()) {
    body["DataIngestionId"] = request.getDataIngestionId();
  }

  if (!!request.hasDataIngestionMode()) {
    body["DataIngestionMode"] = request.getDataIngestionMode();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataIngestion"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataIngestionResponse>();
}

/**
 * @summary 更新数据接入信息
 *
 * @param request UpdateDataIngestionRequest
 * @return UpdateDataIngestionResponse
 */
UpdateDataIngestionResponse Client::updateDataIngestion(const UpdateDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataIngestionWithOptions(request, runtime);
}

/**
 * @summary 更新接入模板
 *
 * @param request UpdateDataIngestionTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataIngestionTemplateResponse
 */
UpdateDataIngestionTemplateResponse Client::updateDataIngestionTemplateWithOptions(const UpdateDataIngestionTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataIngestionStatus()) {
    body["DataIngestionStatus"] = request.getDataIngestionStatus();
  }

  if (!!request.hasDataIngestionTemplateId()) {
    body["DataIngestionTemplateId"] = request.getDataIngestionTemplateId();
  }

  if (!!request.hasDataIngestionTemplateName()) {
    body["DataIngestionTemplateName"] = request.getDataIngestionTemplateName();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataIngestionTemplate"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataIngestionTemplateResponse>();
}

/**
 * @summary 更新接入模板
 *
 * @param request UpdateDataIngestionTemplateRequest
 * @return UpdateDataIngestionTemplateResponse
 */
UpdateDataIngestionTemplateResponse Client::updateDataIngestionTemplate(const UpdateDataIngestionTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataIngestionTemplateWithOptions(request, runtime);
}

/**
 * @summary 更新数据集
 *
 * @param request UpdateDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSetResponse
 */
UpdateDataSetResponse Client::updateDataSetWithOptions(const UpdateDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSetDescription()) {
    body["DataSetDescription"] = request.getDataSetDescription();
  }

  if (!!request.hasDataSetFileName()) {
    body["DataSetFileName"] = request.getDataSetFileName();
  }

  if (!!request.hasDataSetId()) {
    body["DataSetId"] = request.getDataSetId();
  }

  if (!!request.hasDataSetName()) {
    body["DataSetName"] = request.getDataSetName();
  }

  if (!!request.hasDataSetStatus()) {
    body["DataSetStatus"] = request.getDataSetStatus();
  }

  json bodyFlat = {};
  if (!!request.hasIpWhitelistRecognizers()) {
    bodyFlat["IpWhitelistRecognizers"] = request.getIpWhitelistRecognizers();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataSet"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSetResponse>();
}

/**
 * @summary 更新数据集
 *
 * @param request UpdateDataSetRequest
 * @return UpdateDataSetResponse
 */
UpdateDataSetResponse Client::updateDataSet(const UpdateDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSetWithOptions(request, runtime);
}

/**
 * @summary 更新数据集记录
 *
 * @param request UpdateDataSetRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSetRecordResponse
 */
UpdateDataSetRecordResponse Client::updateDataSetRecordWithOptions(const UpdateDataSetRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSetFileName()) {
    body["DataSetFileName"] = request.getDataSetFileName();
  }

  if (!!request.hasDataSetId()) {
    body["DataSetId"] = request.getDataSetId();
  }

  if (!!request.hasDataSetRecords()) {
    body["DataSetRecords"] = request.getDataSetRecords();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataSetRecord"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSetRecordResponse>();
}

/**
 * @summary 更新数据集记录
 *
 * @param request UpdateDataSetRecordRequest
 * @return UpdateDataSetRecordResponse
 */
UpdateDataSetRecordResponse Client::updateDataSetRecord(const UpdateDataSetRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSetRecordWithOptions(request, runtime);
}

/**
 * @summary 更新数据源
 *
 * @param request UpdateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSourceWithOptions(const UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSourceFrom()) {
    body["DataSourceFrom"] = request.getDataSourceFrom();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasDataSourceName()) {
    body["DataSourceName"] = request.getDataSourceName();
  }

  if (!!request.hasDataSourceRecognizeEnabled()) {
    body["DataSourceRecognizeEnabled"] = request.getDataSourceRecognizeEnabled();
  }

  json bodyFlat = {};
  if (!!request.hasDataSourceStores()) {
    bodyFlat["DataSourceStores"] = request.getDataSourceStores();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectName()) {
    body["LogProjectName"] = request.getLogProjectName();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.getOrderField();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataSource"},
    {"version" , "2024-12-12"},
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
 * @summary 更新数据源
 *
 * @param request UpdateDataSourceRequest
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSource(const UpdateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceWithOptions(request, runtime);
}

/**
 * @summary 修改数据源模板
 *
 * @param tmpReq UpdateDataSourceTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceTemplateResponse
 */
UpdateDataSourceTemplateResponse Client::updateDataSourceTemplateWithOptions(const UpdateDataSourceTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataSourceTemplateShrinkRequest request = UpdateDataSourceTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLogUserIds()) {
    request.setLogUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLogUserIds(), "LogUserIds", "simple"));
  }

  json query = {};
  if (!!request.hasDataSourceRecognizeEnabled()) {
    query["DataSourceRecognizeEnabled"] = request.getDataSourceRecognizeEnabled();
  }

  json body = {};
  if (!!request.hasAutoScanNew()) {
    body["AutoScanNew"] = request.getAutoScanNew();
  }

  if (!!request.hasDataSourceTemplateId()) {
    body["DataSourceTemplateId"] = request.getDataSourceTemplateId();
  }

  if (!!request.hasDataSourceTemplateName()) {
    body["DataSourceTemplateName"] = request.getDataSourceTemplateName();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectPattern()) {
    body["LogProjectPattern"] = request.getLogProjectPattern();
  }

  if (!!request.hasLogRegionIds()) {
    body["LogRegionIds"] = request.getLogRegionIds();
  }

  if (!!request.hasLogStorePattern()) {
    body["LogStorePattern"] = request.getLogStorePattern();
  }

  if (!!request.hasLogUserIdsShrink()) {
    body["LogUserIds"] = request.getLogUserIdsShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataSourceTemplate"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSourceTemplateResponse>();
}

/**
 * @summary 修改数据源模板
 *
 * @param request UpdateDataSourceTemplateRequest
 * @return UpdateDataSourceTemplateResponse
 */
UpdateDataSourceTemplateResponse Client::updateDataSourceTemplate(const UpdateDataSourceTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceTemplateWithOptions(request, runtime);
}

/**
 * @summary 获取日志管理页面里用户数据存储的详情。
 *
 * @param request UpdateDataStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataStorageResponse
 */
UpdateDataStorageResponse Client::updateDataStorageWithOptions(const UpdateDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataStorageRegionId()) {
    body["DataStorageRegionId"] = request.getDataStorageRegionId();
  }

  if (!!request.hasDeliveryStatus()) {
    body["DeliveryStatus"] = request.getDeliveryStatus();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataStorage"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataStorageResponse>();
}

/**
 * @summary 获取日志管理页面里用户数据存储的详情。
 *
 * @param request UpdateDataStorageRequest
 * @return UpdateDataStorageResponse
 */
UpdateDataStorageResponse Client::updateDataStorage(const UpdateDataStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataStorageWithOptions(request, runtime);
}

/**
 * @summary 操作日志投递.
 *
 * @param request UpdateDataStorageDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataStorageDeliveryResponse
 */
UpdateDataStorageDeliveryResponse Client::updateDataStorageDeliveryWithOptions(const UpdateDataStorageDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogCode()) {
    body["LogCode"] = request.getLogCode();
  }

  if (!!request.hasLogDeliveryStatus()) {
    body["LogDeliveryStatus"] = request.getLogDeliveryStatus();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataStorageDelivery"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataStorageDeliveryResponse>();
}

/**
 * @summary 操作日志投递.
 *
 * @param request UpdateDataStorageDeliveryRequest
 * @return UpdateDataStorageDeliveryResponse
 */
UpdateDataStorageDeliveryResponse Client::updateDataStorageDelivery(const UpdateDataStorageDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataStorageDeliveryWithOptions(request, runtime);
}

/**
 * @summary 更新数据存储中日志的数据保存天数。
 *
 * @param request UpdateDataStorageTtlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataStorageTtlResponse
 */
UpdateDataStorageTtlResponse Client::updateDataStorageTtlWithOptions(const UpdateDataStorageTtlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogStoreColdTtl()) {
    body["LogStoreColdTtl"] = request.getLogStoreColdTtl();
  }

  if (!!request.hasLogStoreHotTtl()) {
    body["LogStoreHotTtl"] = request.getLogStoreHotTtl();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasLogStoreTtl()) {
    body["LogStoreTtl"] = request.getLogStoreTtl();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataStorageTtl"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataStorageTtlResponse>();
}

/**
 * @summary 更新数据存储中日志的数据保存天数。
 *
 * @param request UpdateDataStorageTtlRequest
 * @return UpdateDataStorageTtlResponse
 */
UpdateDataStorageTtlResponse Client::updateDataStorageTtl(const UpdateDataStorageTtlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataStorageTtlWithOptions(request, runtime);
}

/**
 * @summary 更新检测规则
 *
 * @param request UpdateDetectionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDetectionRuleResponse
 */
UpdateDetectionRuleResponse Client::updateDetectionRuleWithOptions(const UpdateDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertAttCk()) {
    body["AlertAttCk"] = request.getAlertAttCk();
  }

  if (!!request.hasAlertDescription()) {
    body["AlertDescription"] = request.getAlertDescription();
  }

  if (!!request.hasAlertLevel()) {
    body["AlertLevel"] = request.getAlertLevel();
  }

  if (!!request.hasAlertName()) {
    body["AlertName"] = request.getAlertName();
  }

  if (!!request.hasAlertSchemaId()) {
    body["AlertSchemaId"] = request.getAlertSchemaId();
  }

  if (!!request.hasAlertTacticId()) {
    body["AlertTacticId"] = request.getAlertTacticId();
  }

  if (!!request.hasAlertThresholdCount()) {
    body["AlertThresholdCount"] = request.getAlertThresholdCount();
  }

  if (!!request.hasAlertThresholdGroup()) {
    body["AlertThresholdGroup"] = request.getAlertThresholdGroup();
  }

  if (!!request.hasAlertThresholdPeriod()) {
    body["AlertThresholdPeriod"] = request.getAlertThresholdPeriod();
  }

  if (!!request.hasAlertType()) {
    body["AlertType"] = request.getAlertType();
  }

  if (!!request.hasDetectionExpressionContent()) {
    body["DetectionExpressionContent"] = request.getDetectionExpressionContent();
  }

  if (!!request.hasDetectionExpressionType()) {
    body["DetectionExpressionType"] = request.getDetectionExpressionType();
  }

  if (!!request.hasDetectionRuleDescription()) {
    body["DetectionRuleDescription"] = request.getDetectionRuleDescription();
  }

  if (!!request.hasDetectionRuleId()) {
    body["DetectionRuleId"] = request.getDetectionRuleId();
  }

  if (!!request.hasDetectionRuleName()) {
    body["DetectionRuleName"] = request.getDetectionRuleName();
  }

  if (!!request.hasDetectionRuleStatus()) {
    body["DetectionRuleStatus"] = request.getDetectionRuleStatus();
  }

  if (!!request.hasDetectionRuleType()) {
    body["DetectionRuleType"] = request.getDetectionRuleType();
  }

  if (!!request.hasEntityMappings()) {
    body["EntityMappings"] = request.getEntityMappings();
  }

  if (!!request.hasIncidentAggregationExpression()) {
    body["IncidentAggregationExpression"] = request.getIncidentAggregationExpression();
  }

  if (!!request.hasIncidentAggregationType()) {
    body["IncidentAggregationType"] = request.getIncidentAggregationType();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogCategoryId()) {
    body["LogCategoryId"] = request.getLogCategoryId();
  }

  if (!!request.hasLogSchemaId()) {
    body["LogSchemaId"] = request.getLogSchemaId();
  }

  if (!!request.hasPlaybookParameters()) {
    body["PlaybookParameters"] = request.getPlaybookParameters();
  }

  if (!!request.hasPlaybookUuid()) {
    body["PlaybookUuid"] = request.getPlaybookUuid();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScheduleBeginTime()) {
    body["ScheduleBeginTime"] = request.getScheduleBeginTime();
  }

  if (!!request.hasScheduleExpression()) {
    body["ScheduleExpression"] = request.getScheduleExpression();
  }

  if (!!request.hasScheduleMaxRetries()) {
    body["ScheduleMaxRetries"] = request.getScheduleMaxRetries();
  }

  if (!!request.hasScheduleMaxTimeout()) {
    body["ScheduleMaxTimeout"] = request.getScheduleMaxTimeout();
  }

  if (!!request.hasScheduleType()) {
    body["ScheduleType"] = request.getScheduleType();
  }

  if (!!request.hasScheduleWindow()) {
    body["ScheduleWindow"] = request.getScheduleWindow();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDetectionRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDetectionRuleResponse>();
}

/**
 * @summary 更新检测规则
 *
 * @param request UpdateDetectionRuleRequest
 * @return UpdateDetectionRuleResponse
 */
UpdateDetectionRuleResponse Client::updateDetectionRule(const UpdateDetectionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDetectionRuleWithOptions(request, runtime);
}

/**
 * @summary 更新标准化规则
 *
 * @param tmpReq UpdateNormalizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNormalizationRuleResponse
 */
UpdateNormalizationRuleResponse Client::updateNormalizationRuleWithOptions(const UpdateNormalizationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateNormalizationRuleShrinkRequest request = UpdateNormalizationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNormalizationRuleIds()) {
    request.setNormalizationRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNormalizationRuleIds(), "NormalizationRuleIds", "json"));
  }

  json body = {};
  if (!!request.hasExtendContentPacked()) {
    body["ExtendContentPacked"] = request.getExtendContentPacked();
  }

  if (!!request.hasExtendFieldStoreMode()) {
    body["ExtendFieldStoreMode"] = request.getExtendFieldStoreMode();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationCategoryId()) {
    body["NormalizationCategoryId"] = request.getNormalizationCategoryId();
  }

  if (!!request.hasNormalizationRuleDescription()) {
    body["NormalizationRuleDescription"] = request.getNormalizationRuleDescription();
  }

  if (!!request.hasNormalizationRuleExpression()) {
    body["NormalizationRuleExpression"] = request.getNormalizationRuleExpression();
  }

  if (!!request.hasNormalizationRuleFormat()) {
    body["NormalizationRuleFormat"] = request.getNormalizationRuleFormat();
  }

  if (!!request.hasNormalizationRuleId()) {
    body["NormalizationRuleId"] = request.getNormalizationRuleId();
  }

  if (!!request.hasNormalizationRuleIdsShrink()) {
    body["NormalizationRuleIds"] = request.getNormalizationRuleIdsShrink();
  }

  if (!!request.hasNormalizationRuleMode()) {
    body["NormalizationRuleMode"] = request.getNormalizationRuleMode();
  }

  if (!!request.hasNormalizationRuleName()) {
    body["NormalizationRuleName"] = request.getNormalizationRuleName();
  }

  if (!!request.hasNormalizationRuleType()) {
    body["NormalizationRuleType"] = request.getNormalizationRuleType();
  }

  if (!!request.hasNormalizationSchemaId()) {
    body["NormalizationSchemaId"] = request.getNormalizationSchemaId();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.getOrderField();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorId()) {
    body["VendorId"] = request.getVendorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNormalizationRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNormalizationRuleResponse>();
}

/**
 * @summary 更新标准化规则
 *
 * @param request UpdateNormalizationRuleRequest
 * @return UpdateNormalizationRuleResponse
 */
UpdateNormalizationRuleResponse Client::updateNormalizationRule(const UpdateNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNormalizationRuleWithOptions(request, runtime);
}

/**
 * @summary 更新标准化结构
 *
 * @param request UpdateNormalizationSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNormalizationSchemaResponse
 */
UpdateNormalizationSchemaResponse Client::updateNormalizationSchemaWithOptions(const UpdateNormalizationSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasNormalizationFields()) {
    body["NormalizationFields"] = request.getNormalizationFields();
  }

  if (!!request.hasNormalizationSchemaDescription()) {
    body["NormalizationSchemaDescription"] = request.getNormalizationSchemaDescription();
  }

  if (!!request.hasNormalizationSchemaId()) {
    body["NormalizationSchemaId"] = request.getNormalizationSchemaId();
  }

  if (!!request.hasNormalizationSchemaName()) {
    body["NormalizationSchemaName"] = request.getNormalizationSchemaName();
  }

  if (!!request.hasNormalizationSchemaType()) {
    body["NormalizationSchemaType"] = request.getNormalizationSchemaType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNormalizationSchema"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNormalizationSchemaResponse>();
}

/**
 * @summary 更新标准化结构
 *
 * @param request UpdateNormalizationSchemaRequest
 * @return UpdateNormalizationSchemaResponse
 */
UpdateNormalizationSchemaResponse Client::updateNormalizationSchema(const UpdateNormalizationSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNormalizationSchemaWithOptions(request, runtime);
}

/**
 * @summary 更新产品品
 *
 * @param request UpdateProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProductWithOptions(const UpdateProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductName()) {
    body["ProductName"] = request.getProductName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorName()) {
    body["VendorName"] = request.getVendorName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateProduct"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProductResponse>();
}

/**
 * @summary 更新产品品
 *
 * @param request UpdateProductRequest
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProduct(const UpdateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProductWithOptions(request, runtime);
}

/**
 * @summary 更新厂商
 *
 * @param request UpdateVendorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVendorResponse
 */
UpdateVendorResponse Client::updateVendorWithOptions(const UpdateVendorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorId()) {
    body["VendorId"] = request.getVendorId();
  }

  if (!!request.hasVendorName()) {
    body["VendorName"] = request.getVendorName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVendor"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVendorResponse>();
}

/**
 * @summary 更新厂商
 *
 * @param request UpdateVendorRequest
 * @return UpdateVendorResponse
 */
UpdateVendorResponse Client::updateVendor(const UpdateVendorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVendorWithOptions(request, runtime);
}

/**
 * @summary 校验LogStore
 *
 * @param request ValidateLogStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateLogStoreResponse
 */
ValidateLogStoreResponse Client::validateLogStoreWithOptions(const ValidateLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogProjectName()) {
    body["LogProjectName"] = request.getLogProjectName();
  }

  if (!!request.hasLogRegionId()) {
    body["LogRegionId"] = request.getLogRegionId();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ValidateLogStore"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateLogStoreResponse>();
}

/**
 * @summary 校验LogStore
 *
 * @param request ValidateLogStoreRequest
 * @return ValidateLogStoreResponse
 */
ValidateLogStoreResponse Client::validateLogStore(const ValidateLogStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateLogStoreWithOptions(request, runtime);
}

/**
 * @summary 校验规则和数据
 *
 * @param request ValidateNormalizationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateNormalizationRuleResponse
 */
ValidateNormalizationRuleResponse Client::validateNormalizationRuleWithOptions(const ValidateNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasExtendFieldStoreMode()) {
    body["ExtendFieldStoreMode"] = request.getExtendFieldStoreMode();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasLogSample()) {
    body["LogSample"] = request.getLogSample();
  }

  if (!!request.hasNormalizationCategoryId()) {
    body["NormalizationCategoryId"] = request.getNormalizationCategoryId();
  }

  if (!!request.hasNormalizationRuleExpression()) {
    body["NormalizationRuleExpression"] = request.getNormalizationRuleExpression();
  }

  if (!!request.hasNormalizationRuleMode()) {
    body["NormalizationRuleMode"] = request.getNormalizationRuleMode();
  }

  if (!!request.hasNormalizationSchemaId()) {
    body["NormalizationSchemaId"] = request.getNormalizationSchemaId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasVendorId()) {
    body["VendorId"] = request.getVendorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ValidateNormalizationRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateNormalizationRuleResponse>();
}

/**
 * @summary 校验规则和数据
 *
 * @param request ValidateNormalizationRuleRequest
 * @return ValidateNormalizationRuleResponse
 */
ValidateNormalizationRuleResponse Client::validateNormalizationRule(const ValidateNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateNormalizationRuleWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CloudSiem20241212