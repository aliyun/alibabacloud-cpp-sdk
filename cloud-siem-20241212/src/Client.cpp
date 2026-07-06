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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "cloud-siem.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "cloud-siem.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Checks for available version upgrades.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class that includes configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Checks for available version upgrades.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class that includes configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request CheckUpgradeItemRequest
 * @return CheckUpgradeItemResponse
 */
CheckUpgradeItemResponse Client::checkUpgradeItem(const CheckUpgradeItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUpgradeItemWithOptions(request, runtime);
}

/**
 * @summary Creates an auto-dispose configuration.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. Refer to the helper class in the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for configuration examples.
 *
 * @param request CreateAutoDisposeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoDisposeConfigResponse
 */
CreateAutoDisposeConfigResponse Client::createAutoDisposeConfigWithOptions(const CreateAutoDisposeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoDecisionStatus()) {
    body["AutoDecisionStatus"] = request.getAutoDecisionStatus();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAutoDisposeConfig"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoDisposeConfigResponse>();
}

/**
 * @summary Creates an auto-dispose configuration.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. Refer to the helper class in the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for configuration examples.
 *
 * @param request CreateAutoDisposeConfigRequest
 * @return CreateAutoDisposeConfigResponse
 */
CreateAutoDisposeConfigResponse Client::createAutoDisposeConfig(const CreateAutoDisposeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoDisposeConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a data ingestion policy.
 *
 * @description The frequency and timing of notifications are limited. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
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
 * @summary Creates a data ingestion policy.
 *
 * @description The frequency and timing of notifications are limited. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
 *
 * @param request CreateDataIngestionRequest
 * @return CreateDataIngestionResponse
 */
CreateDataIngestionResponse Client::createDataIngestion(const CreateDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataIngestionWithOptions(request, runtime);
}

/**
 * @summary Creates a dataset.
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
 * @summary Creates a dataset.
 *
 * @param request CreateDataSetRequest
 * @return CreateDataSetResponse
 */
CreateDataSetResponse Client::createDataSet(const CreateDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSetWithOptions(request, runtime);
}

/**
 * @summary Creates a data source.
 *
 * @description The JsonConfig input parameter is a complex JSON object. For a configuration example, see the supporting tool class in the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Creates a data source.
 *
 * @description The JsonConfig input parameter is a complex JSON object. For a configuration example, see the supporting tool class in the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary Creates a detection rule.
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

  if (!!request.hasAlertAttCkMapping()) {
    body["AlertAttCkMapping"] = request.getAlertAttCkMapping();
  }

  if (!!request.hasAlertDescription()) {
    body["AlertDescription"] = request.getAlertDescription();
  }

  if (!!request.hasAlertLevel()) {
    body["AlertLevel"] = request.getAlertLevel();
  }

  if (!!request.hasAlertLevelMapping()) {
    body["AlertLevelMapping"] = request.getAlertLevelMapping();
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

  if (!!request.hasAlertTypeMapping()) {
    body["AlertTypeMapping"] = request.getAlertTypeMapping();
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
 * @summary Creates a detection rule.
 *
 * @param request CreateDetectionRuleRequest
 * @return CreateDetectionRuleResponse
 */
CreateDetectionRuleResponse Client::createDetectionRule(const CreateDetectionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDetectionRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an export task.
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
 * @summary Creates an export task.
 *
 * @param request CreateExportTaskRequest
 * @return CreateExportTaskResponse
 */
CreateExportTaskResponse Client::createExportTask(const CreateExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExportTaskWithOptions(request, runtime);
}

/**
 * @summary Configure client-side storage restrictions.
 *
 * @description The JsonConfig input parameter uses a complex JSON structure. A supporting tool class is provided to simplify this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Configure client-side storage restrictions.
 *
 * @description The JsonConfig input parameter uses a complex JSON structure. A supporting tool class is provided to simplify this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request CreateLogStoreRequest
 * @return CreateLogStoreResponse
 */
CreateLogStoreResponse Client::createLogStore(const CreateLogStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogStoreWithOptions(request, runtime);
}

/**
 * @summary Creates a normalization rule.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasNormalizationSecurityDomainId()) {
    body["NormalizationSecurityDomainId"] = request.getNormalizationSecurityDomainId();
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
 * @summary Creates a normalization rule.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request CreateNormalizationRuleRequest
 * @return CreateNormalizationRuleResponse
 */
CreateNormalizationRuleResponse Client::createNormalizationRule(const CreateNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNormalizationRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a data source.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasNormalizationFieldSource()) {
    body["NormalizationFieldSource"] = request.getNormalizationFieldSource();
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

  if (!!request.hasNormalizationSecurityDomainId()) {
    body["NormalizationSecurityDomainId"] = request.getNormalizationSecurityDomainId();
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

  if (!!request.hasTargetLogStore()) {
    body["TargetLogStore"] = request.getTargetLogStore();
  }

  if (!!request.hasVendorId()) {
    body["VendorId"] = request.getVendorId();
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
 * @summary Creates a data source.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request CreateNormalizationSchemaRequest
 * @return CreateNormalizationSchemaResponse
 */
CreateNormalizationSchemaResponse Client::createNormalizationSchema(const CreateNormalizationSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNormalizationSchemaWithOptions(request, runtime);
}

/**
 * @summary Creates a product.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is available and provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Creates a product.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is available and provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request CreateProductRequest
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProduct(const CreateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProductWithOptions(request, runtime);
}

/**
 * @summary Creates an automatic response rule.
 *
 * @description Some parameters require complex JSON configurations. We provide a helper class with configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request CreateResponseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResponseRuleResponse
 */
CreateResponseRuleResponse Client::createResponseRuleWithOptions(const CreateResponseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResponseActionConfig()) {
    body["ResponseActionConfig"] = request.getResponseActionConfig();
  }

  if (!!request.hasResponseActionType()) {
    body["ResponseActionType"] = request.getResponseActionType();
  }

  if (!!request.hasResponseExecutionCondition()) {
    body["ResponseExecutionCondition"] = request.getResponseExecutionCondition();
  }

  if (!!request.hasResponseRuleName()) {
    body["ResponseRuleName"] = request.getResponseRuleName();
  }

  if (!!request.hasResponseRulePriority()) {
    body["ResponseRulePriority"] = request.getResponseRulePriority();
  }

  if (!!request.hasResponseTriggerType()) {
    body["ResponseTriggerType"] = request.getResponseTriggerType();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateResponseRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResponseRuleResponse>();
}

/**
 * @summary Creates an automatic response rule.
 *
 * @description Some parameters require complex JSON configurations. We provide a helper class with configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request CreateResponseRuleRequest
 * @return CreateResponseRuleResponse
 */
CreateResponseRuleResponse Client::createResponseRule(const CreateResponseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResponseRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a vendor.
 *
 * @description Notifications are limited by frequency and time. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time frame.
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
 * @summary Creates a vendor.
 *
 * @description Notifications are limited by frequency and time. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time frame.
 *
 * @param request CreateVendorRequest
 * @return CreateVendorResponse
 */
CreateVendorResponse Client::createVendor(const CreateVendorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVendorWithOptions(request, runtime);
}

/**
 * @summary Deletes a data ingestion policy.
 *
 * @description Notifications are sent only between 08:00 and 20:00. Each user can receive a maximum of two notifications per day.
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
 * @summary Deletes a data ingestion policy.
 *
 * @description Notifications are sent only between 08:00 and 20:00. Each user can receive a maximum of two notifications per day.
 *
 * @param request DeleteDataIngestionRequest
 * @return DeleteDataIngestionResponse
 */
DeleteDataIngestionResponse Client::deleteDataIngestion(const DeleteDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataIngestionWithOptions(request, runtime);
}

/**
 * @summary Deletes a dataset.
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
 * @summary Deletes a dataset.
 *
 * @param request DeleteDataSetRequest
 * @return DeleteDataSetResponse
 */
DeleteDataSetResponse Client::deleteDataSet(const DeleteDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSetWithOptions(request, runtime);
}

/**
 * @summary Deletes dataset records.
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
 * @summary Deletes dataset records.
 *
 * @param request DeleteDataSetRecordRequest
 * @return DeleteDataSetRecordResponse
 */
DeleteDataSetRecordResponse Client::deleteDataSetRecord(const DeleteDataSetRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSetRecordWithOptions(request, runtime);
}

/**
 * @summary Deletes a data source.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Deletes a data source.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a detection rule.
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
 * @summary Deletes a detection rule.
 *
 * @param request DeleteDetectionRuleRequest
 * @return DeleteDetectionRuleResponse
 */
DeleteDetectionRuleResponse Client::deleteDetectionRule(const DeleteDetectionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDetectionRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a Logstore.
 *
 * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class with configuration examples is available. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Deletes a Logstore.
 *
 * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class with configuration examples is available. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request DeleteLogStoreRequest
 * @return DeleteLogStoreResponse
 */
DeleteLogStoreResponse Client::deleteLogStore(const DeleteLogStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogStoreWithOptions(request, runtime);
}

/**
 * @summary Deletes a normalization rule.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class that contains configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Deletes a normalization rule.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class that contains configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request DeleteNormalizationRuleRequest
 * @return DeleteNormalizationRuleResponse
 */
DeleteNormalizationRuleResponse Client::deleteNormalizationRule(const DeleteNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNormalizationRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a normalization rule version.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Deletes a normalization rule version.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request DeleteNormalizationRuleVersionRequest
 * @return DeleteNormalizationRuleVersionResponse
 */
DeleteNormalizationRuleVersionResponse Client::deleteNormalizationRuleVersion(const DeleteNormalizationRuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNormalizationRuleVersionWithOptions(request, runtime);
}

/**
 * @summary Deletes a product.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is provided to help you create the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Deletes a product.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is provided to help you create the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request DeleteProductRequest
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProduct(const DeleteProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProductWithOptions(request, runtime);
}

/**
 * @summary Deletes an automatic response rule.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
 *
 * @param request DeleteResponseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResponseRuleResponse
 */
DeleteResponseRuleResponse Client::deleteResponseRuleWithOptions(const DeleteResponseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResponseRuleId()) {
    body["ResponseRuleId"] = request.getResponseRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteResponseRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResponseRuleResponse>();
}

/**
 * @summary Deletes an automatic response rule.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
 *
 * @param request DeleteResponseRuleRequest
 * @return DeleteResponseRuleResponse
 */
DeleteResponseRuleResponse Client::deleteResponseRule(const DeleteResponseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResponseRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a vendor.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day. These notifications are sent only between 08:00 and 20:00.
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
 * @summary Deletes a vendor.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day. These notifications are sent only between 08:00 and 20:00.
 *
 * @param request DeleteVendorRequest
 * @return DeleteVendorResponse
 */
DeleteVendorResponse Client::deleteVendor(const DeleteVendorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVendorWithOptions(request, runtime);
}

/**
 * @summary Disables a data ingestion policy.
 *
 * @description The frequency and time of notifications are limited. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
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
 * @summary Disables a data ingestion policy.
 *
 * @description The frequency and time of notifications are limited. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
 *
 * @param request DisableDataIngestionRequest
 * @return DisableDataIngestionResponse
 */
DisableDataIngestionResponse Client::disableDataIngestion(const DisableDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDataIngestionWithOptions(request, runtime);
}

/**
 * @summary Enables the data ingestion policy.
 *
 * @description Notification frequency is limited to a maximum of two per user per day. Notifications are sent only between 08:00 and 20:00.
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
 * @summary Enables the data ingestion policy.
 *
 * @description Notification frequency is limited to a maximum of two per user per day. Notifications are sent only between 08:00 and 20:00.
 *
 * @param request EnableDataIngestionRequest
 * @return EnableDataIngestionResponse
 */
EnableDataIngestionResponse Client::enableDataIngestion(const EnableDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDataIngestionWithOptions(request, runtime);
}

/**
 * @summary Manually handles alerts. Batch operations are supported.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ExecuteAutoDisposeRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAutoDisposeRecordsResponse
 */
ExecuteAutoDisposeRecordsResponse Client::executeAutoDisposeRecordsWithOptions(const ExecuteAutoDisposeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  json bodyFlat = {};
  if (!!request.hasSelectedEntityList()) {
    bodyFlat["SelectedEntityList"] = request.getSelectedEntityList();
  }

  if (!!request.hasUnSelectedEntityList()) {
    bodyFlat["UnSelectedEntityList"] = request.getUnSelectedEntityList();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteAutoDisposeRecords"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAutoDisposeRecordsResponse>();
}

/**
 * @summary Manually handles alerts. Batch operations are supported.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ExecuteAutoDisposeRecordsRequest
 * @return ExecuteAutoDisposeRecordsResponse
 */
ExecuteAutoDisposeRecordsResponse Client::executeAutoDisposeRecords(const ExecuteAutoDisposeRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeAutoDisposeRecordsWithOptions(request, runtime);
}

/**
 * @summary Executes a data query.
 *
 * @description The input parameter JsonConfig is a complex JSON Configurations. A utility class is provided to help with specific configuration examples. Refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasLogCondition()) {
    body["LogCondition"] = request.getLogCondition();
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
 * @summary Executes a data query.
 *
 * @description The input parameter JsonConfig is a complex JSON Configurations. A utility class is provided to help with specific configuration examples. Refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ExecuteLogQueryRequest
 * @return ExecuteLogQueryResponse
 */
ExecuteLogQueryResponse Client::executeLogQuery(const ExecuteLogQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeLogQueryWithOptions(request, runtime);
}

/**
 * @summary Performs a version upgrade.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is provided to assist with this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Performs a version upgrade.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is provided to assist with this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ExecuteUpgradeRequest
 * @return ExecuteUpgradeResponse
 */
ExecuteUpgradeResponse Client::executeUpgrade(const ExecuteUpgradeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeUpgradeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an alert.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlertResponse
 */
GetAlertResponse Client::getAlertWithOptions(const GetAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertUuid()) {
    body["AlertUuid"] = request.getAlertUuid();
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

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAlert"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlertResponse>();
}

/**
 * @summary Retrieves the details of an alert.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetAlertRequest
 * @return GetAlertResponse
 */
GetAlertResponse Client::getAlert(const GetAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlertWithOptions(request, runtime);
}

/**
 * @summary Retrieves the automatic response configuration.
 *
 * @description The `JsonConfig` input parameter uses a complex JSON structure. Refer to the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for a helper utility and configuration examples.
 *
 * @param request GetAutoDisposeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoDisposeConfigResponse
 */
GetAutoDisposeConfigResponse Client::getAutoDisposeConfigWithOptions(const GetAutoDisposeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAutoDisposeConfig"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoDisposeConfigResponse>();
}

/**
 * @summary Retrieves the automatic response configuration.
 *
 * @description The `JsonConfig` input parameter uses a complex JSON structure. Refer to the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for a helper utility and configuration examples.
 *
 * @param request GetAutoDisposeConfigRequest
 * @return GetAutoDisposeConfigResponse
 */
GetAutoDisposeConfigResponse Client::getAutoDisposeConfig(const GetAutoDisposeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoDisposeConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a batch data ingestion task.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves the details of a batch data ingestion task.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetDataBatchIngestionRequest
 * @return GetDataBatchIngestionResponse
 */
GetDataBatchIngestionResponse Client::getDataBatchIngestion(const GetDataBatchIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataBatchIngestionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of user logs in log management.
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
 * @summary Retrieves the details of user logs in log management.
 *
 * @param request GetDataStorageRequest
 * @return GetDataStorageResponse
 */
GetDataStorageResponse Client::getDataStorage(const GetDataStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataStorageWithOptions(request, runtime);
}

/**
 * @summary Retrieves the count of detection rules.
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
 * @summary Retrieves the count of detection rules.
 *
 * @param request GetDetectionStatisticRequest
 * @return GetDetectionStatisticResponse
 */
GetDetectionStatisticResponse Client::getDetectionStatistic(const GetDetectionStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDetectionStatisticWithOptions(request, runtime);
}

/**
 * @summary Retrieves the progress of an export task.
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
 * @summary Retrieves the progress of an export task.
 *
 * @param request GetExportTaskRequest
 * @return GetExportTaskResponse
 */
GetExportTaskResponse Client::getExportTask(const GetExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExportTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an event.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration string. A utility class is provided to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves the details of an event.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration string. A utility class is provided to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetIncidentRequest
 * @return GetIncidentResponse
 */
GetIncidentResponse Client::getIncident(const GetIncidentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIncidentWithOptions(request, runtime);
}

/**
 * @summary Retrieves a log ticket.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is provided to assist with the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves a log ticket.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is provided to assist with the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetLogTicketRequest
 * @return GetLogTicketResponse
 */
GetLogTicketResponse Client::getLogTicket(const GetLogTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogTicketWithOptions(request, runtime);
}

/**
 * @summary Retrieves normalization rule information.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration string. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasNormalizationSecurityDomainId()) {
    body["NormalizationSecurityDomainId"] = request.getNormalizationSecurityDomainId();
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
 * @summary Retrieves normalization rule information.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration string. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetNormalizationRuleRequest
 * @return GetNormalizationRuleResponse
 */
GetNormalizationRuleResponse Client::getNormalizationRule(const GetNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNormalizationRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a normalization rule version.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves information about a normalization rule version.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetNormalizationRuleVersionRequest
 * @return GetNormalizationRuleVersionResponse
 */
GetNormalizationRuleVersionResponse Client::getNormalizationRuleVersion(const GetNormalizationRuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNormalizationRuleVersionWithOptions(request, runtime);
}

/**
 * @summary Retrieves a normalization schema.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration string. A supporting tool class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves a normalization schema.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration string. A supporting tool class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetNormalizationSchemaRequest
 * @return GetNormalizationSchemaResponse
 */
GetNormalizationSchemaResponse Client::getNormalizationSchema(const GetNormalizationSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNormalizationSchemaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the count of automated response rules.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
 *
 * @param request GetResponseRuleStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResponseRuleStatisticResponse
 */
GetResponseRuleStatisticResponse Client::getResponseRuleStatisticWithOptions(const GetResponseRuleStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetResponseRuleStatistic"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResponseRuleStatisticResponse>();
}

/**
 * @summary Retrieves the count of automated response rules.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
 *
 * @param request GetResponseRuleStatisticRequest
 * @return GetResponseRuleStatisticResponse
 */
GetResponseRuleStatisticResponse Client::getResponseRuleStatistic(const GetResponseRuleStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResponseRuleStatisticWithOptions(request, runtime);
}

/**
 * @summary Retrieves user information.
 *
 * @description The JsonConfig request parameter is a complex JSON object. A supporting tool class is provided to help you create the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves user information.
 *
 * @description The JsonConfig request parameter is a complex JSON object. A supporting tool class is provided to help you create the configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request GetUserConfigRequest
 * @return GetUserConfigResponse
 */
GetUserConfigResponse Client::getUserConfig(const GetUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of alerts.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class with configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListAlertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertsResponse
 */
ListAlertsResponse Client::listAlertsWithOptions(const ListAlertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertLevel()) {
    body["AlertLevel"] = request.getAlertLevel();
  }

  if (!!request.hasAlertUuid()) {
    body["AlertUuid"] = request.getAlertUuid();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
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

  if (!!request.hasQueryCondition()) {
    body["QueryCondition"] = request.getQueryCondition();
  }

  if (!!request.hasQueryViewId()) {
    body["QueryViewId"] = request.getQueryViewId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAlerts"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertsResponse>();
}

/**
 * @summary Retrieves a list of alerts.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. We provide a utility class with configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListAlertsRequest
 * @return ListAlertsResponse
 */
ListAlertsResponse Client::listAlerts(const ListAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertsWithOptions(request, runtime);
}

/**
 * @summary Get AI-analyzed entity list
 *
 * @description Each user can receive up to two notifications daily, but only between 08:00 and 20:00.
 *
 * @param tmpReq ListAutoDisposeEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoDisposeEntitiesResponse
 */
ListAutoDisposeEntitiesResponse Client::listAutoDisposeEntitiesWithOptions(const ListAutoDisposeEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAutoDisposeEntitiesShrinkRequest request = ListAutoDisposeEntitiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAutoDisposeRecordIds()) {
    request.setAutoDisposeRecordIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAutoDisposeRecordIds(), "AutoDisposeRecordIds", "simple"));
  }

  json body = {};
  if (!!request.hasAutoDisposeRecordIdsShrink()) {
    body["AutoDisposeRecordIds"] = request.getAutoDisposeRecordIdsShrink();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.getDataSourceType();
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

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAutoDisposeEntities"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoDisposeEntitiesResponse>();
}

/**
 * @summary Get AI-analyzed entity list
 *
 * @description Each user can receive up to two notifications daily, but only between 08:00 and 20:00.
 *
 * @param request ListAutoDisposeEntitiesRequest
 * @return ListAutoDisposeEntitiesResponse
 */
ListAutoDisposeEntitiesResponse Client::listAutoDisposeEntities(const ListAutoDisposeEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoDisposeEntitiesWithOptions(request, runtime);
}

/**
 * @summary Queries collectors by paging.
 *
 * @param tmpReq ListDataConnectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataConnectorsResponse
 */
ListDataConnectorsResponse Client::listDataConnectorsWithOptions(const ListDataConnectorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataConnectorsShrinkRequest request = ListDataConnectorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataConnectorIds()) {
    request.setDataConnectorIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataConnectorIds(), "DataConnectorIds", "json"));
  }

  json body = {};
  if (!!request.hasDataConnectorIdsShrink()) {
    body["DataConnectorIds"] = request.getDataConnectorIdsShrink();
  }

  if (!!request.hasDataConnectorName()) {
    body["DataConnectorName"] = request.getDataConnectorName();
  }

  if (!!request.hasDataConnectorStatus()) {
    body["DataConnectorStatus"] = request.getDataConnectorStatus();
  }

  if (!!request.hasDataConnectorType()) {
    body["DataConnectorType"] = request.getDataConnectorType();
  }

  if (!!request.hasDestDataSourceId()) {
    body["DestDataSourceId"] = request.getDestDataSourceId();
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

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasSlsIngestionJobName()) {
    body["SlsIngestionJobName"] = request.getSlsIngestionJobName();
  }

  if (!!request.hasSrcDataType()) {
    body["SrcDataType"] = request.getSrcDataType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataConnectors"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataConnectorsResponse>();
}

/**
 * @summary Queries collectors by paging.
 *
 * @param request ListDataConnectorsRequest
 * @return ListDataConnectorsResponse
 */
ListDataConnectorsResponse Client::listDataConnectors(const ListDataConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataConnectorsWithOptions(request, runtime);
}

/**
 * @summary Queries data ingestion templates.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time frame.
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
 * @summary Queries data ingestion templates.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time frame.
 *
 * @param request ListDataIngestionTemplatesRequest
 * @return ListDataIngestionTemplatesResponse
 */
ListDataIngestionTemplatesResponse Client::listDataIngestionTemplates(const ListDataIngestionTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataIngestionTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of data access policies.
 *
 * @description Each user receives up to two notifications per day, sent only between 08:00 and 20:00.
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

  if (!!tmpReq.hasNormalizationSchemaIds()) {
    request.setNormalizationSchemaIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNormalizationSchemaIds(), "NormalizationSchemaIds", "simple"));
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

  if (!!request.hasNormalizationSchemaIdsShrink()) {
    body["NormalizationSchemaIds"] = request.getNormalizationSchemaIdsShrink();
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
 * @summary Retrieves a list of data access policies.
 *
 * @description Each user receives up to two notifications per day, sent only between 08:00 and 20:00.
 *
 * @param request ListDataIngestionsRequest
 * @return ListDataIngestionsResponse
 */
ListDataIngestionsResponse Client::listDataIngestions(const ListDataIngestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataIngestionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of dataset records.
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

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
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
 * @summary Retrieves a list of dataset records.
 *
 * @param request ListDataSetRecordsRequest
 * @return ListDataSetRecordsResponse
 */
ListDataSetRecordsResponse Client::listDataSetRecords(const ListDataSetRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSetRecordsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of datasets.
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
 * @summary Retrieves a list of datasets.
 *
 * @param request ListDataSetsRequest
 * @return ListDataSetsResponse
 */
ListDataSetsResponse Client::listDataSets(const ListDataSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSetsWithOptions(request, runtime);
}

/**
 * @summary Queries data source templates.
 *
 * @description Notifications are limited by frequency and time. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
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
 * @summary Queries data source templates.
 *
 * @description Notifications are limited by frequency and time. Each user receives a maximum of two notifications per day between 08:00 and 20:00.
 *
 * @param request ListDataSourceTemplatesRequest
 * @return ListDataSourceTemplatesResponse
 */
ListDataSourceTemplatesResponse Client::listDataSourceTemplates(const ListDataSourceTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceTemplatesWithOptions(request, runtime);
}

/**
 * @summary Lists data sources.
 *
 * @description Notifications are subject to frequency and time limits. A maximum of two notifications are sent to each user per day, and only between 08:00 and 20:00.
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
 * @summary Lists data sources.
 *
 * @description Notifications are subject to frequency and time limits. A maximum of two notifications are sent to each user per day, and only between 08:00 and 20:00.
 *
 * @param request ListDataSourcesRequest
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of detection rules.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day. These notifications are sent only between 08:00 and 20:00.
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
 * @summary Retrieves a list of detection rules.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day. These notifications are sent only between 08:00 and 20:00.
 *
 * @param request ListDetectionRulesRequest
 * @return ListDetectionRulesResponse
 */
ListDetectionRulesResponse Client::listDetectionRules(const ListDetectionRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDetectionRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of events.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
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
 * @summary Retrieves a list of events.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
 *
 * @param request ListIncidentsRequest
 * @return ListIncidentsResponse
 */
ListIncidentsResponse Client::listIncidents(const ListIncidentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIncidentsWithOptions(request, runtime);
}

/**
 * @summary Lists log projects.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is available to simplify this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Lists log projects.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is available to simplify this configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListLogProjectsRequest
 * @return ListLogProjectsResponse
 */
ListLogProjectsResponse Client::listLogProjects(const ListLogProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogProjectsWithOptions(request, runtime);
}

/**
 * @summary Retrieves all regions.
 *
 * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves all regions.
 *
 * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListLogRegionsRequest
 * @return ListLogRegionsResponse
 */
ListLogRegionsResponse Client::listLogRegions(const ListLogRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogRegionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of Logstores.
 *
 * @description The notification frequency is limited. Each user can receive up to two notifications per day between 08:00 and 20:00. No notifications are sent outside this time frame.
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
 * @summary Retrieves a list of Logstores.
 *
 * @description The notification frequency is limited. Each user can receive up to two notifications per day between 08:00 and 20:00. No notifications are sent outside this time frame.
 *
 * @param request ListLogStoresRequest
 * @return ListLogStoresResponse
 */
ListLogStoresResponse Client::listLogStores(const ListLogStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLogStoresWithOptions(request, runtime);
}

/**
 * @summary Lists normalization categories.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
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
 * @summary Lists normalization categories.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
 *
 * @param request ListNormalizationCategoriesRequest
 * @return ListNormalizationCategoriesResponse
 */
ListNormalizationCategoriesResponse Client::listNormalizationCategories(const ListNormalizationCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationCategoriesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of normalization fields.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasNormalizationFieldSource()) {
    body["NormalizationFieldSource"] = request.getNormalizationFieldSource();
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
 * @summary Retrieves a list of normalization fields.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, see [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListNormalizationFieldsRequest
 * @return ListNormalizationFieldsResponse
 */
ListNormalizationFieldsResponse Client::listNormalizationFields(const ListNormalizationFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationFieldsWithOptions(request, runtime);
}

/**
 * @summary Lists the security capabilities of normalization rules.
 *
 * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A helper tool class is provided with configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Lists the security capabilities of normalization rules.
 *
 * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A helper tool class is provided with configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListNormalizationRuleCapacitiesRequest
 * @return ListNormalizationRuleCapacitiesResponse
 */
ListNormalizationRuleCapacitiesResponse Client::listNormalizationRuleCapacities(const ListNormalizationRuleCapacitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationRuleCapacitiesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of normalization rule versions.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is available and provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Queries a list of normalization rule versions.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class is available and provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListNormalizationRuleVersionsRequest
 * @return ListNormalizationRuleVersionsResponse
 */
ListNormalizationRuleVersionsResponse Client::listNormalizationRuleVersions(const ListNormalizationRuleVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationRuleVersionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of normalization rules.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
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

  if (!!request.hasNormalizationSecurityDomainId()) {
    body["NormalizationSecurityDomainId"] = request.getNormalizationSecurityDomainId();
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
 * @summary Retrieves a list of normalization rules.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
 *
 * @param request ListNormalizationRulesRequest
 * @return ListNormalizationRulesResponse
 */
ListNormalizationRulesResponse Client::listNormalizationRules(const ListNormalizationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of normalization schemas.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class with specific configuration examples is provided. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasNormalizationFieldSource()) {
    body["NormalizationFieldSource"] = request.getNormalizationFieldSource();
  }

  if (!!request.hasNormalizationSchemaType()) {
    body["NormalizationSchemaType"] = request.getNormalizationSchemaType();
  }

  if (!!request.hasNormalizationSecurityDomainId()) {
    body["NormalizationSecurityDomainId"] = request.getNormalizationSecurityDomainId();
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
 * @summary Retrieves a list of normalization schemas.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class with specific configuration examples is provided. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListNormalizationSchemasRequest
 * @return ListNormalizationSchemasResponse
 */
ListNormalizationSchemasResponse Client::listNormalizationSchemas(const ListNormalizationSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationSchemasWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of security domains.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListNormalizationSecurityDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNormalizationSecurityDomainsResponse
 */
ListNormalizationSecurityDomainsResponse Client::listNormalizationSecurityDomainsWithOptions(const ListNormalizationSecurityDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListNormalizationSecurityDomains"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNormalizationSecurityDomainsResponse>();
}

/**
 * @summary Retrieves a list of security domains.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListNormalizationSecurityDomainsRequest
 * @return ListNormalizationSecurityDomainsResponse
 */
ListNormalizationSecurityDomainsResponse Client::listNormalizationSecurityDomains(const ListNormalizationSecurityDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNormalizationSecurityDomainsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of products.
 *
 * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class is provided that contains configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves a list of products.
 *
 * @description The \\`JsonConfig\\` request parameter is a complex JSON configuration. A supporting tool class is provided that contains configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of query views.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListQueryViewsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueryViewsResponse
 */
ListQueryViewsResponse Client::listQueryViewsWithOptions(const ListQueryViewsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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

  if (!!request.hasQueryViewScene()) {
    body["QueryViewScene"] = request.getQueryViewScene();
  }

  if (!!request.hasQueryViewType()) {
    body["QueryViewType"] = request.getQueryViewType();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListQueryViews"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueryViewsResponse>();
}

/**
 * @summary Retrieves a list of query views.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListQueryViewsRequest
 * @return ListQueryViewsResponse
 */
ListQueryViewsResponse Client::listQueryViews(const ListQueryViewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQueryViewsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the field list of automated response rules.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
 *
 * @param request ListResponseRuleFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResponseRuleFieldsResponse
 */
ListResponseRuleFieldsResponse Client::listResponseRuleFieldsWithOptions(const ListResponseRuleFieldsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListResponseRuleFields"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResponseRuleFieldsResponse>();
}

/**
 * @summary Retrieves the field list of automated response rules.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
 *
 * @param request ListResponseRuleFieldsRequest
 * @return ListResponseRuleFieldsResponse
 */
ListResponseRuleFieldsResponse Client::listResponseRuleFields(const ListResponseRuleFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResponseRuleFieldsWithOptions(request, runtime);
}

/**
 * @summary Paginated query of auto-response rules
 *
 * @description Each user can receive up to two notifications per day between 08:00 and 20:00.
 *
 * @param request ListResponseRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResponseRulesResponse
 */
ListResponseRulesResponse Client::listResponseRulesWithOptions(const ListResponseRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResponseActionType()) {
    body["ResponseActionType"] = request.getResponseActionType();
  }

  if (!!request.hasResponseRuleName()) {
    body["ResponseRuleName"] = request.getResponseRuleName();
  }

  if (!!request.hasResponseRuleStatus()) {
    body["ResponseRuleStatus"] = request.getResponseRuleStatus();
  }

  if (!!request.hasResponseRuleType()) {
    body["ResponseRuleType"] = request.getResponseRuleType();
  }

  if (!!request.hasResponseTriggerType()) {
    body["ResponseTriggerType"] = request.getResponseTriggerType();
  }

  if (!!request.hasRoleFor()) {
    body["RoleFor"] = request.getRoleFor();
  }

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListResponseRules"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResponseRulesResponse>();
}

/**
 * @summary Paginated query of auto-response rules
 *
 * @description Each user can receive up to two notifications per day between 08:00 and 20:00.
 *
 * @param request ListResponseRulesRequest
 * @return ListResponseRulesResponse
 */
ListResponseRulesResponse Client::listResponseRules(const ListResponseRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResponseRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTagsWithOptions(const ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  if (!!request.hasTargetRelation()) {
    body["TargetRelation"] = request.getTargetRelation();
  }

  if (!!request.hasTargetType()) {
    body["TargetType"] = request.getTargetType();
  }

  if (!!request.hasTargetUuid()) {
    body["TargetUuid"] = request.getTargetUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTags"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagsResponse>();
}

/**
 * @summary Queries a list of tags.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListTagsRequest
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTags(const ListTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of traffic statistics.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasTrafficType()) {
    body["TrafficType"] = request.getTrafficType();
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
 * @summary Retrieves a list of traffic statistics.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class with configuration examples is provided. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListTrafficStatisticsRequest
 * @return ListTrafficStatisticsResponse
 */
ListTrafficStatisticsResponse Client::listTrafficStatistics(const ListTrafficStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTrafficStatisticsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of upgrade items.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides examples for this configuration. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Retrieves a list of upgrade items.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class provides examples for this configuration. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ListUpgradeItemsRequest
 * @return ListUpgradeItemsResponse
 */
ListUpgradeItemsResponse Client::listUpgradeItems(const ListUpgradeItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUpgradeItemsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of vendors.
 *
 * @description The frequency and time of notifications are limited. Each user can receive a maximum of two notifications per day, which are sent only between 08:00 and 20:00.
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
 * @summary Retrieves a list of vendors.
 *
 * @description The frequency and time of notifications are limited. Each user can receive a maximum of two notifications per day, which are sent only between 08:00 and 20:00.
 *
 * @param request ListVendorsRequest
 * @return ListVendorsResponse
 */
ListVendorsResponse Client::listVendors(const ListVendorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVendorsWithOptions(request, runtime);
}

/**
 * @summary Refreshes a data source.
 *
 * @description There are limits on the frequency and time of notifications. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside of this time frame.
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
 * @summary Refreshes a data source.
 *
 * @description There are limits on the frequency and time of notifications. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside of this time frame.
 *
 * @param request RefreshDataSourceRequest
 * @return RefreshDataSourceResponse
 */
RefreshDataSourceResponse Client::refreshDataSource(const RefreshDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshDataSourceWithOptions(request, runtime);
}

/**
 * @summary Resets the log storage for a user.
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
 * @summary Resets the log storage for a user.
 *
 * @param request ResetDataStorageRequest
 * @return ResetDataStorageResponse
 */
ResetDataStorageResponse Client::resetDataStorage(const ResetDataStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetDataStorageWithOptions(request, runtime);
}

/**
 * @summary Sets the default version of a normalization rule.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
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
 * @summary Sets the default version of a normalization rule.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user can receive a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time window.
 *
 * @param request SetDefaultNormalizationRuleVersionRequest
 * @return SetDefaultNormalizationRuleVersionResponse
 */
SetDefaultNormalizationRuleVersionResponse Client::setDefaultNormalizationRuleVersion(const SetDefaultNormalizationRuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultNormalizationRuleVersionWithOptions(request, runtime);
}

/**
 * @summary Updates an alert.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
 *
 * @param request UpdateAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertResponse
 */
UpdateAlertResponse Client::updateAlertWithOptions(const UpdateAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertStatus()) {
    body["AlertStatus"] = request.getAlertStatus();
  }

  if (!!request.hasAlertUuid()) {
    body["AlertUuid"] = request.getAlertUuid();
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

  if (!!request.hasRoleType()) {
    body["RoleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAlert"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertResponse>();
}

/**
 * @summary Updates an alert.
 *
 * @description Notifications are subject to frequency and time restrictions.
 * Each user receives a maximum of two notifications per day between 08:00 and 20:00. No notifications are sent outside this time range.
 *
 * @param request UpdateAlertRequest
 * @return UpdateAlertResponse
 */
UpdateAlertResponse Client::updateAlert(const UpdateAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertWithOptions(request, runtime);
}

/**
 * @summary Updates the auto-dispose configuration.
 *
 * @description The `JsonConfig` parameter is a complex JSON configuration. See the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for helper utility classes and configuration examples.
 *
 * @param request UpdateAutoDisposeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoDisposeConfigResponse
 */
UpdateAutoDisposeConfigResponse Client::updateAutoDisposeConfigWithOptions(const UpdateAutoDisposeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoDecisionStatus()) {
    body["AutoDecisionStatus"] = request.getAutoDecisionStatus();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAutoDisposeConfig"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutoDisposeConfigResponse>();
}

/**
 * @summary Updates the auto-dispose configuration.
 *
 * @description The `JsonConfig` parameter is a complex JSON configuration. See the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java) for helper utility classes and configuration examples.
 *
 * @param request UpdateAutoDisposeConfigRequest
 * @return UpdateAutoDisposeConfigResponse
 */
UpdateAutoDisposeConfigResponse Client::updateAutoDisposeConfig(const UpdateAutoDisposeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoDisposeConfigWithOptions(request, runtime);
}

/**
 * @summary Updates an automatic alert analysis record.
 *
 * @description The AutoDecisionEntityList parameter is a JSON-formatted string. A helper class is available to simplify its creation. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateAutoDisposeRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoDisposeRecordResponse
 */
UpdateAutoDisposeRecordResponse Client::updateAutoDisposeRecordWithOptions(const UpdateAutoDisposeRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoDecisionConclusion()) {
    body["AutoDecisionConclusion"] = request.getAutoDecisionConclusion();
  }

  if (!!request.hasAutoDecisionEntityList()) {
    body["AutoDecisionEntityList"] = request.getAutoDecisionEntityList();
  }

  if (!!request.hasAutoDecisionResult()) {
    body["AutoDecisionResult"] = request.getAutoDecisionResult();
  }

  if (!!request.hasAutoDisposeRecordId()) {
    body["AutoDisposeRecordId"] = request.getAutoDisposeRecordId();
  }

  if (!!request.hasLang()) {
    body["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAutoDisposeRecord"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutoDisposeRecordResponse>();
}

/**
 * @summary Updates an automatic alert analysis record.
 *
 * @description The AutoDecisionEntityList parameter is a JSON-formatted string. A helper class is available to simplify its creation. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateAutoDisposeRecordRequest
 * @return UpdateAutoDisposeRecordResponse
 */
UpdateAutoDisposeRecordResponse Client::updateAutoDisposeRecord(const UpdateAutoDisposeRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoDisposeRecordWithOptions(request, runtime);
}

/**
 * @summary Updates a batch data ingestion task.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class that contains configuration examples is provided to help you. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Updates a batch data ingestion task.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class that contains configuration examples is provided to help you. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateDataBatchIngestionRequest
 * @return UpdateDataBatchIngestionResponse
 */
UpdateDataBatchIngestionResponse Client::updateDataBatchIngestion(const UpdateDataBatchIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataBatchIngestionWithOptions(request, runtime);
}

/**
 * @summary Updates a data ingestion policy.
 *
 * @description Notifications are subject to frequency and time limits. A maximum of two notifications are sent to each user per day between 08:00 and 20:00.
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
 * @summary Updates a data ingestion policy.
 *
 * @description Notifications are subject to frequency and time limits. A maximum of two notifications are sent to each user per day between 08:00 and 20:00.
 *
 * @param request UpdateDataIngestionRequest
 * @return UpdateDataIngestionResponse
 */
UpdateDataIngestionResponse Client::updateDataIngestion(const UpdateDataIngestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataIngestionWithOptions(request, runtime);
}

/**
 * @summary Updates a data ingestion template.
 *
 * @description Frequency and time limits apply to notifications. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside of this time period.
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
 * @summary Updates a data ingestion template.
 *
 * @description Frequency and time limits apply to notifications. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside of this time period.
 *
 * @param request UpdateDataIngestionTemplateRequest
 * @return UpdateDataIngestionTemplateResponse
 */
UpdateDataIngestionTemplateResponse Client::updateDataIngestionTemplate(const UpdateDataIngestionTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataIngestionTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a dataset.
 *
 * @description Notifications are limited by frequency and time. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time range.
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
 * @summary Updates a dataset.
 *
 * @description Notifications are limited by frequency and time. Each user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time range.
 *
 * @param request UpdateDataSetRequest
 * @return UpdateDataSetResponse
 */
UpdateDataSetResponse Client::updateDataSet(const UpdateDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSetWithOptions(request, runtime);
}

/**
 * @summary Updates dataset records.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
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
 * @summary Updates dataset records.
 *
 * @description Notifications are subject to frequency and time limits. Each user can receive a maximum of two notifications per day between 08:00 and 20:00.
 *
 * @param request UpdateDataSetRecordRequest
 * @return UpdateDataSetRecordResponse
 */
UpdateDataSetRecordResponse Client::updateDataSetRecord(const UpdateDataSetRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSetRecordWithOptions(request, runtime);
}

/**
 * @summary Updates a data source.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Updates a data source.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateDataSourceRequest
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSource(const UpdateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceWithOptions(request, runtime);
}

/**
 * @summary Modifies a data source template.
 *
 * @description The JsonConfig input parameter accepts a complex JSON configuration. To simplify this process, a supporting tool class is available. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Modifies a data source template.
 *
 * @description The JsonConfig input parameter accepts a complex JSON configuration. To simplify this process, a supporting tool class is available. For more information, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateDataSourceTemplateRequest
 * @return UpdateDataSourceTemplateResponse
 */
UpdateDataSourceTemplateResponse Client::updateDataSourceTemplate(const UpdateDataSourceTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceTemplateWithOptions(request, runtime);
}

/**
 * @summary Changes the log storage region for Log Management.
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
 * @summary Changes the log storage region for Log Management.
 *
 * @param request UpdateDataStorageRequest
 * @return UpdateDataStorageResponse
 */
UpdateDataStorageResponse Client::updateDataStorage(const UpdateDataStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataStorageWithOptions(request, runtime);
}

/**
 * @summary Updates the status of log delivery.
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
 * @summary Updates the status of log delivery.
 *
 * @param request UpdateDataStorageDeliveryRequest
 * @return UpdateDataStorageDeliveryResponse
 */
UpdateDataStorageDeliveryResponse Client::updateDataStorageDelivery(const UpdateDataStorageDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataStorageDeliveryWithOptions(request, runtime);
}

/**
 * @summary Modifies the storage duration for logs.
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
 * @summary Modifies the storage duration for logs.
 *
 * @param request UpdateDataStorageTtlRequest
 * @return UpdateDataStorageTtlResponse
 */
UpdateDataStorageTtlResponse Client::updateDataStorageTtl(const UpdateDataStorageTtlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataStorageTtlWithOptions(request, runtime);
}

/**
 * @summary Updates a detection rule.
 *
 * @description Because this operation uses complex request parameters, a supporting tool class is provided to assist with the JSON configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasAlertAttCkMapping()) {
    body["AlertAttCkMapping"] = request.getAlertAttCkMapping();
  }

  if (!!request.hasAlertDescription()) {
    body["AlertDescription"] = request.getAlertDescription();
  }

  if (!!request.hasAlertLevel()) {
    body["AlertLevel"] = request.getAlertLevel();
  }

  if (!!request.hasAlertLevelMapping()) {
    body["AlertLevelMapping"] = request.getAlertLevelMapping();
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

  if (!!request.hasAlertTypeMapping()) {
    body["AlertTypeMapping"] = request.getAlertTypeMapping();
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
 * @summary Updates a detection rule.
 *
 * @description Because this operation uses complex request parameters, a supporting tool class is provided to assist with the JSON configuration. For an example, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateDetectionRuleRequest
 * @return UpdateDetectionRuleResponse
 */
UpdateDetectionRuleResponse Client::updateDetectionRule(const UpdateDetectionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDetectionRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a normalization rule.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. For configuration examples, see the supporting tool class in the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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

  if (!!request.hasNormalizationSecurityDomainId()) {
    body["NormalizationSecurityDomainId"] = request.getNormalizationSecurityDomainId();
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
 * @summary Updates a normalization rule.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. For configuration examples, see the supporting tool class in the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateNormalizationRuleRequest
 * @return UpdateNormalizationRuleResponse
 */
UpdateNormalizationRuleResponse Client::updateNormalizationRule(const UpdateNormalizationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNormalizationRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a normalization schema.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Updates a normalization schema.
 *
 * @description The input parameter JsonConfig is a complex JSON configuration. A utility class is provided to help with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateNormalizationSchemaRequest
 * @return UpdateNormalizationSchemaResponse
 */
UpdateNormalizationSchemaResponse Client::updateNormalizationSchema(const UpdateNormalizationSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNormalizationSchemaWithOptions(request, runtime);
}

/**
 * @summary Updates a product.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. For an example of a supporting tool class with configuration examples, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Updates a product.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. For an example of a supporting tool class with configuration examples, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request UpdateProductRequest
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProduct(const UpdateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProductWithOptions(request, runtime);
}

/**
 * @summary Updates an automatic response rule.
 *
 * @description Some request parameters require complex JSON configurations. We provide a helper utility class with configuration examples.
 *
 * @param request UpdateResponseRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResponseRuleResponse
 */
UpdateResponseRuleResponse Client::updateResponseRuleWithOptions(const UpdateResponseRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasResponseActionConfig()) {
    body["ResponseActionConfig"] = request.getResponseActionConfig();
  }

  if (!!request.hasResponseActionType()) {
    body["ResponseActionType"] = request.getResponseActionType();
  }

  if (!!request.hasResponseExecutionCondition()) {
    body["ResponseExecutionCondition"] = request.getResponseExecutionCondition();
  }

  if (!!request.hasResponseRuleId()) {
    body["ResponseRuleId"] = request.getResponseRuleId();
  }

  if (!!request.hasResponseRuleName()) {
    body["ResponseRuleName"] = request.getResponseRuleName();
  }

  if (!!request.hasResponseRulePriority()) {
    body["ResponseRulePriority"] = request.getResponseRulePriority();
  }

  if (!!request.hasResponseRuleStatus()) {
    body["ResponseRuleStatus"] = request.getResponseRuleStatus();
  }

  if (!!request.hasResponseTriggerType()) {
    body["ResponseTriggerType"] = request.getResponseTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateResponseRule"},
    {"version" , "2024-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResponseRuleResponse>();
}

/**
 * @summary Updates an automatic response rule.
 *
 * @description Some request parameters require complex JSON configurations. We provide a helper utility class with configuration examples.
 *
 * @param request UpdateResponseRuleRequest
 * @return UpdateResponseRuleResponse
 */
UpdateResponseRuleResponse Client::updateResponseRule(const UpdateResponseRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResponseRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a vendor.
 *
 * @description The delivery of notifications is limited by frequency and time. A user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time period.
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
 * @summary Updates a vendor.
 *
 * @description The delivery of notifications is limited by frequency and time. A user can receive a maximum of two notifications per day between 08:00 and 20:00. Notifications are not sent outside this time period.
 *
 * @param request UpdateVendorRequest
 * @return UpdateVendorResponse
 */
UpdateVendorResponse Client::updateVendor(const UpdateVendorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVendorWithOptions(request, runtime);
}

/**
 * @summary Verify log storage.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is provided to help you create the configuration. For a code sample, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Verify log storage.
 *
 * @description The JsonConfig request parameter is a complex JSON configuration. A supporting tool class is provided to help you create the configuration. For a code sample, see the [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
 *
 * @param request ValidateLogStoreRequest
 * @return ValidateLogStoreResponse
 */
ValidateLogStoreResponse Client::validateLogStore(const ValidateLogStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateLogStoreWithOptions(request, runtime);
}

/**
 * @summary Validates a normalization rule.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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
 * @summary Validates a normalization rule.
 *
 * @description The JsonConfig input parameter is a complex JSON configuration. A supporting tool class provides configuration examples. For more information, see the [demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
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