#include <darabonba/Core.hpp>
#include <alibabacloud/Dbs20190306.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Dbs20190306::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Dbs20190306
{

AlibabaCloud::Dbs20190306::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu" , "dbs-api.cn-chengdu.aliyuncs.com"},
    {"cn-zhangjiakou" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-huhehaote" , "dbs-api.cn-huhehaote.aliyuncs.com"},
    {"cn-hangzhou" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-1" , "dbs-api.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "dbs-api.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3" , "dbs-api.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "dbs-api.ap-southeast-5.aliyuncs.com"},
    {"ap-northeast-1" , "dbs-api.ap-northeast-1.aliyuncs.com"},
    {"us-west-1" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"us-east-1" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"eu-central-1" , "dbs-api.eu-central-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "dbs-api.cn-hangzhou.aliyuncs.com"},
    {"ap-south-1" , "dbs-api.ap-south-1.aliyuncs.com"},
    {"eu-west-1" , "dbs-api.eu-west-1.aliyuncs.com"},
    {"me-east-1" , "dbs-api.me-east-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dbs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Configures a DBS backup schedule.
 *
 * @param request ConfigureBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureBackupPlanResponse
 */
ConfigureBackupPlanResponse Client::configureBackupPlanWithOptions(const ConfigureBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoStartBackup()) {
    query["AutoStartBackup"] = request.autoStartBackup();
  }

  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.backupGatewayId();
  }

  if (!!request.hasBackupLogIntervalSeconds()) {
    query["BackupLogIntervalSeconds"] = request.backupLogIntervalSeconds();
  }

  if (!!request.hasBackupObjects()) {
    query["BackupObjects"] = request.backupObjects();
  }

  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.backupPeriod();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupPlanName()) {
    query["BackupPlanName"] = request.backupPlanName();
  }

  if (!!request.hasBackupRateLimit()) {
    query["BackupRateLimit"] = request.backupRateLimit();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.backupRetentionPeriod();
  }

  if (!!request.hasBackupSpeedLimit()) {
    query["BackupSpeedLimit"] = request.backupSpeedLimit();
  }

  if (!!request.hasBackupStartTime()) {
    query["BackupStartTime"] = request.backupStartTime();
  }

  if (!!request.hasBackupStorageType()) {
    query["BackupStorageType"] = request.backupStorageType();
  }

  if (!!request.hasBackupStrategyType()) {
    query["BackupStrategyType"] = request.backupStrategyType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCrossAliyunId()) {
    query["CrossAliyunId"] = request.crossAliyunId();
  }

  if (!!request.hasCrossRoleName()) {
    query["CrossRoleName"] = request.crossRoleName();
  }

  if (!!request.hasDuplicationArchivePeriod()) {
    query["DuplicationArchivePeriod"] = request.duplicationArchivePeriod();
  }

  if (!!request.hasDuplicationInfrequentAccessPeriod()) {
    query["DuplicationInfrequentAccessPeriod"] = request.duplicationInfrequentAccessPeriod();
  }

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.enableBackupLog();
  }

  if (!!request.hasOSSBucketName()) {
    query["OSSBucketName"] = request.OSSBucketName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.sourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.sourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.sourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.sourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.sourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.sourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.sourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.sourceEndpointUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigureBackupPlan"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureBackupPlanResponse>();
}

/**
 * @summary Configures a DBS backup schedule.
 *
 * @param request ConfigureBackupPlanRequest
 * @return ConfigureBackupPlanResponse
 */
ConfigureBackupPlanResponse Client::configureBackupPlan(const ConfigureBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Creates, configures, and starts a backup schedule.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/70005.html) of Database Backup (DBS).
 *
 * @param request CreateAndStartBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAndStartBackupPlanResponse
 */
CreateAndStartBackupPlanResponse Client::createAndStartBackupPlanWithOptions(const CreateAndStartBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.backupGatewayId();
  }

  if (!!request.hasBackupLogIntervalSeconds()) {
    query["BackupLogIntervalSeconds"] = request.backupLogIntervalSeconds();
  }

  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.backupMethod();
  }

  if (!!request.hasBackupObjects()) {
    query["BackupObjects"] = request.backupObjects();
  }

  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.backupPeriod();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupPlanName()) {
    query["BackupPlanName"] = request.backupPlanName();
  }

  if (!!request.hasBackupRateLimit()) {
    query["BackupRateLimit"] = request.backupRateLimit();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.backupRetentionPeriod();
  }

  if (!!request.hasBackupSpeedLimit()) {
    query["BackupSpeedLimit"] = request.backupSpeedLimit();
  }

  if (!!request.hasBackupStartTime()) {
    query["BackupStartTime"] = request.backupStartTime();
  }

  if (!!request.hasBackupStorageType()) {
    query["BackupStorageType"] = request.backupStorageType();
  }

  if (!!request.hasBackupStrategyType()) {
    query["BackupStrategyType"] = request.backupStrategyType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCrossAliyunId()) {
    query["CrossAliyunId"] = request.crossAliyunId();
  }

  if (!!request.hasCrossRoleName()) {
    query["CrossRoleName"] = request.crossRoleName();
  }

  if (!!request.hasDatabaseRegion()) {
    query["DatabaseRegion"] = request.databaseRegion();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.databaseType();
  }

  if (!!request.hasDuplicationArchivePeriod()) {
    query["DuplicationArchivePeriod"] = request.duplicationArchivePeriod();
  }

  if (!!request.hasDuplicationInfrequentAccessPeriod()) {
    query["DuplicationInfrequentAccessPeriod"] = request.duplicationInfrequentAccessPeriod();
  }

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.enableBackupLog();
  }

  if (!!request.hasFromApp()) {
    query["FromApp"] = request.fromApp();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOSSBucketName()) {
    query["OSSBucketName"] = request.OSSBucketName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.sourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.sourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.sourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.sourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.sourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.sourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.sourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.sourceEndpointUserName();
  }

  if (!!request.hasStorageRegion()) {
    query["StorageRegion"] = request.storageRegion();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAndStartBackupPlan"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAndStartBackupPlanResponse>();
}

/**
 * @summary Creates, configures, and starts a backup schedule.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/70005.html) of Database Backup (DBS).
 *
 * @param request CreateAndStartBackupPlanRequest
 * @return CreateAndStartBackupPlanResponse
 */
CreateAndStartBackupPlanResponse Client::createAndStartBackupPlan(const CreateAndStartBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAndStartBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Creates a backup schedule.
 *
 * @description For more information about how to create a backup schedule in the Database Backup (DBS) console, see [Purchase a backup schedule](https://help.aliyun.com/document_detail/65909.html).
 *
 * @param request CreateBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupPlanResponse
 */
CreateBackupPlanResponse Client::createBackupPlanWithOptions(const CreateBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.backupMethod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDatabaseRegion()) {
    query["DatabaseRegion"] = request.databaseRegion();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.databaseType();
  }

  if (!!request.hasFromApp()) {
    query["FromApp"] = request.fromApp();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStorageRegion()) {
    query["StorageRegion"] = request.storageRegion();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackupPlan"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupPlanResponse>();
}

/**
 * @summary Creates a backup schedule.
 *
 * @description For more information about how to create a backup schedule in the Database Backup (DBS) console, see [Purchase a backup schedule](https://help.aliyun.com/document_detail/65909.html).
 *
 * @param request CreateBackupPlanRequest
 * @return CreateBackupPlanResponse
 */
CreateBackupPlanResponse Client::createBackupPlan(const CreateBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Creates and starts a full backup set download task.
 *
 * @param request CreateFullBackupSetDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFullBackupSetDownloadResponse
 */
CreateFullBackupSetDownloadResponse Client::createFullBackupSetDownloadWithOptions(const CreateFullBackupSetDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetDataFormat()) {
    query["BackupSetDataFormat"] = request.backupSetDataFormat();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.backupSetId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFullBackupSetDownload"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFullBackupSetDownloadResponse>();
}

/**
 * @summary Creates and starts a full backup set download task.
 *
 * @param request CreateFullBackupSetDownloadRequest
 * @return CreateFullBackupSetDownloadResponse
 */
CreateFullBackupSetDownloadResponse Client::createFullBackupSetDownload(const CreateFullBackupSetDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFullBackupSetDownloadWithOptions(request, runtime);
}

/**
 * @summary Creates a task to obtain a database list by using a backup gateway.
 *
 * @description This API operation returns a task ID. You can call the [GetDBListFromAgent](https://help.aliyun.com/document_detail/2869852.html) operation to query the task result based on the task ID.
 *
 * @param request CreateGetDBListFromAgentTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGetDBListFromAgentTaskResponse
 */
CreateGetDBListFromAgentTaskResponse Client::createGetDBListFromAgentTaskWithOptions(const CreateGetDBListFromAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.backupGatewayId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.databaseType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.sourceEndpointIP();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.sourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGetDBListFromAgentTask"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGetDBListFromAgentTaskResponse>();
}

/**
 * @summary Creates a task to obtain a database list by using a backup gateway.
 *
 * @description This API operation returns a task ID. You can call the [GetDBListFromAgent](https://help.aliyun.com/document_detail/2869852.html) operation to query the task result based on the task ID.
 *
 * @param request CreateGetDBListFromAgentTaskRequest
 * @return CreateGetDBListFromAgentTaskResponse
 */
CreateGetDBListFromAgentTaskResponse Client::createGetDBListFromAgentTask(const CreateGetDBListFromAgentTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGetDBListFromAgentTaskWithOptions(request, runtime);
}

/**
 * @summary Creates and starts an incremental backup set download task.
 *
 * @param request CreateIncrementBackupSetDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIncrementBackupSetDownloadResponse
 */
CreateIncrementBackupSetDownloadResponse Client::createIncrementBackupSetDownloadWithOptions(const CreateIncrementBackupSetDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetDataFormat()) {
    query["BackupSetDataFormat"] = request.backupSetDataFormat();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.backupSetId();
  }

  if (!!request.hasBackupSetName()) {
    query["BackupSetName"] = request.backupSetName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIncrementBackupSetDownload"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIncrementBackupSetDownloadResponse>();
}

/**
 * @summary Creates and starts an incremental backup set download task.
 *
 * @param request CreateIncrementBackupSetDownloadRequest
 * @return CreateIncrementBackupSetDownloadResponse
 */
CreateIncrementBackupSetDownloadResponse Client::createIncrementBackupSetDownload(const CreateIncrementBackupSetDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIncrementBackupSetDownloadWithOptions(request, runtime);
}

/**
 * @summary Creates a restoration task.
 *
 * @param request CreateRestoreTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRestoreTaskResponse
 */
CreateRestoreTaskResponse Client::createRestoreTaskWithOptions(const CreateRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.backupGatewayId();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.backupSetId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCrossAliyunId()) {
    query["CrossAliyunId"] = request.crossAliyunId();
  }

  if (!!request.hasCrossRoleName()) {
    query["CrossRoleName"] = request.crossRoleName();
  }

  if (!!request.hasDestinationEndpointDatabaseName()) {
    query["DestinationEndpointDatabaseName"] = request.destinationEndpointDatabaseName();
  }

  if (!!request.hasDestinationEndpointIP()) {
    query["DestinationEndpointIP"] = request.destinationEndpointIP();
  }

  if (!!request.hasDestinationEndpointInstanceID()) {
    query["DestinationEndpointInstanceID"] = request.destinationEndpointInstanceID();
  }

  if (!!request.hasDestinationEndpointInstanceType()) {
    query["DestinationEndpointInstanceType"] = request.destinationEndpointInstanceType();
  }

  if (!!request.hasDestinationEndpointOracleSID()) {
    query["DestinationEndpointOracleSID"] = request.destinationEndpointOracleSID();
  }

  if (!!request.hasDestinationEndpointPassword()) {
    query["DestinationEndpointPassword"] = request.destinationEndpointPassword();
  }

  if (!!request.hasDestinationEndpointPort()) {
    query["DestinationEndpointPort"] = request.destinationEndpointPort();
  }

  if (!!request.hasDestinationEndpointRegion()) {
    query["DestinationEndpointRegion"] = request.destinationEndpointRegion();
  }

  if (!!request.hasDestinationEndpointUserName()) {
    query["DestinationEndpointUserName"] = request.destinationEndpointUserName();
  }

  if (!!request.hasDuplicateConflict()) {
    query["DuplicateConflict"] = request.duplicateConflict();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRestoreDir()) {
    query["RestoreDir"] = request.restoreDir();
  }

  if (!!request.hasRestoreHome()) {
    query["RestoreHome"] = request.restoreHome();
  }

  if (!!request.hasRestoreObjects()) {
    query["RestoreObjects"] = request.restoreObjects();
  }

  if (!!request.hasRestoreTaskName()) {
    query["RestoreTaskName"] = request.restoreTaskName();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.restoreTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRestoreTask"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRestoreTaskResponse>();
}

/**
 * @summary Creates a restoration task.
 *
 * @param request CreateRestoreTaskRequest
 * @return CreateRestoreTaskResponse
 */
CreateRestoreTaskResponse Client::createRestoreTask(const CreateRestoreTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRestoreTaskWithOptions(request, runtime);
}

/**
 * @summary Queries backup gateways.
 *
 * @param request DescribeBackupGatewayListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupGatewayListResponse
 */
DescribeBackupGatewayListResponse Client::describeBackupGatewayListWithOptions(const DescribeBackupGatewayListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupGatewayList"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupGatewayListResponse>();
}

/**
 * @summary Queries backup gateways.
 *
 * @param request DescribeBackupGatewayListRequest
 * @return DescribeBackupGatewayListResponse
 */
DescribeBackupGatewayListResponse Client::describeBackupGatewayList(const DescribeBackupGatewayListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupGatewayListWithOptions(request, runtime);
}

/**
 * @summary Queries the billing information of a backup schedule.
 *
 * @param request DescribeBackupPlanBillingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPlanBillingResponse
 */
DescribeBackupPlanBillingResponse Client::describeBackupPlanBillingWithOptions(const DescribeBackupPlanBillingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasShowStorageType()) {
    query["ShowStorageType"] = request.showStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPlanBilling"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPlanBillingResponse>();
}

/**
 * @summary Queries the billing information of a backup schedule.
 *
 * @param request DescribeBackupPlanBillingRequest
 * @return DescribeBackupPlanBillingResponse
 */
DescribeBackupPlanBillingResponse Client::describeBackupPlanBilling(const DescribeBackupPlanBillingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPlanBillingWithOptions(request, runtime);
}

/**
 * @summary Query the list of backup plans
 *
 * @description Before using this interface, please activate the OSS service in advance. For more information, see [Object Storage Service (OSS)](https://help.aliyun.com/document_detail/31817.html).
 *
 * @param request DescribeBackupPlanListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPlanListResponse
 */
DescribeBackupPlanListResponse Client::describeBackupPlanListWithOptions(const DescribeBackupPlanListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupPlanName()) {
    query["BackupPlanName"] = request.backupPlanName();
  }

  if (!!request.hasBackupPlanStatus()) {
    query["BackupPlanStatus"] = request.backupPlanStatus();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPlanList"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPlanListResponse>();
}

/**
 * @summary Query the list of backup plans
 *
 * @description Before using this interface, please activate the OSS service in advance. For more information, see [Object Storage Service (OSS)](https://help.aliyun.com/document_detail/31817.html).
 *
 * @param request DescribeBackupPlanListRequest
 * @return DescribeBackupPlanListResponse
 */
DescribeBackupPlanListResponse Client::describeBackupPlanList(const DescribeBackupPlanListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPlanListWithOptions(request, runtime);
}

/**
 * @summary Queries backup set download tasks.
 *
 * @param request DescribeBackupSetDownloadTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupSetDownloadTaskListResponse
 */
DescribeBackupSetDownloadTaskListResponse Client::describeBackupSetDownloadTaskListWithOptions(const DescribeBackupSetDownloadTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupSetDownloadTaskId()) {
    query["BackupSetDownloadTaskId"] = request.backupSetDownloadTaskId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupSetDownloadTaskList"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupSetDownloadTaskListResponse>();
}

/**
 * @summary Queries backup set download tasks.
 *
 * @param request DescribeBackupSetDownloadTaskListRequest
 * @return DescribeBackupSetDownloadTaskListResponse
 */
DescribeBackupSetDownloadTaskListResponse Client::describeBackupSetDownloadTaskList(const DescribeBackupSetDownloadTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupSetDownloadTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Data Lake Analytics (DLA) service for a backup schedule.
 *
 * @param request DescribeDLAServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDLAServiceResponse
 */
DescribeDLAServiceResponse Client::describeDLAServiceWithOptions(const DescribeDLAServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDLAService"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDLAServiceResponse>();
}

/**
 * @summary Queries the status of the Data Lake Analytics (DLA) service for a backup schedule.
 *
 * @param request DescribeDLAServiceRequest
 * @return DescribeDLAServiceResponse
 */
DescribeDLAServiceResponse Client::describeDLAService(const DescribeDLAServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDLAServiceWithOptions(request, runtime);
}

/**
 * @summary cn-hangzhou
 *
 * @param request DescribeFullBackupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFullBackupListResponse
 */
DescribeFullBackupListResponse Client::describeFullBackupListWithOptions(const DescribeFullBackupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.backupSetId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasShowStorageType()) {
    query["ShowStorageType"] = request.showStorageType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFullBackupList"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFullBackupListResponse>();
}

/**
 * @summary cn-hangzhou
 *
 * @param request DescribeFullBackupListRequest
 * @return DescribeFullBackupListResponse
 */
DescribeFullBackupListResponse Client::describeFullBackupList(const DescribeFullBackupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFullBackupListWithOptions(request, runtime);
}

/**
 * @summary Queries incremental backup tasks.
 *
 * @param request DescribeIncrementBackupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIncrementBackupListResponse
 */
DescribeIncrementBackupListResponse Client::describeIncrementBackupListWithOptions(const DescribeIncrementBackupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasShowStorageType()) {
    query["ShowStorageType"] = request.showStorageType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIncrementBackupList"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIncrementBackupListResponse>();
}

/**
 * @summary Queries incremental backup tasks.
 *
 * @param request DescribeIncrementBackupListRequest
 * @return DescribeIncrementBackupListResponse
 */
DescribeIncrementBackupListResponse Client::describeIncrementBackupList(const DescribeIncrementBackupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIncrementBackupListWithOptions(request, runtime);
}

/**
 * @summary Queries the error information of a Database Backup (DBS) task.
 *
 * @param request DescribeJobErrorCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobErrorCodeResponse
 */
DescribeJobErrorCodeResponse Client::describeJobErrorCodeWithOptions(const DescribeJobErrorCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobErrorCode"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobErrorCodeResponse>();
}

/**
 * @summary Queries the error information of a Database Backup (DBS) task.
 *
 * @param request DescribeJobErrorCodeRequest
 * @return DescribeJobErrorCodeResponse
 */
DescribeJobErrorCodeResponse Client::describeJobErrorCode(const DescribeJobErrorCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobErrorCodeWithOptions(request, runtime);
}

/**
 * @summary Queries the CIDR blocks of nodes on which Database Backup (DBS) is running.
 *
 * @param request DescribeNodeCidrListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNodeCidrListResponse
 */
DescribeNodeCidrListResponse Client::describeNodeCidrListWithOptions(const DescribeNodeCidrListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNodeCidrList"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNodeCidrListResponse>();
}

/**
 * @summary Queries the CIDR blocks of nodes on which Database Backup (DBS) is running.
 *
 * @param request DescribeNodeCidrListRequest
 * @return DescribeNodeCidrListResponse
 */
DescribeNodeCidrListResponse Client::describeNodeCidrList(const DescribeNodeCidrListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNodeCidrListWithOptions(request, runtime);
}

/**
 * @summary Queries the precheck progress of a backup schedule or a restore task.
 *
 * @param request DescribePreCheckProgressListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePreCheckProgressListResponse
 */
DescribePreCheckProgressListResponse Client::describePreCheckProgressListWithOptions(const DescribePreCheckProgressListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRestoreTaskId()) {
    query["RestoreTaskId"] = request.restoreTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePreCheckProgressList"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePreCheckProgressListResponse>();
}

/**
 * @summary Queries the precheck progress of a backup schedule or a restore task.
 *
 * @param request DescribePreCheckProgressListRequest
 * @return DescribePreCheckProgressListResponse
 */
DescribePreCheckProgressListResponse Client::describePreCheckProgressList(const DescribePreCheckProgressListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePreCheckProgressListWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that Database Backup (DBS) supports.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-03-06"},
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
 * @summary Queries the regions that Database Backup (DBS) supports.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the range of time to which you can restore data in a backup schedule.
 *
 * @param request DescribeRestoreRangeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreRangeInfoResponse
 */
DescribeRestoreRangeInfoResponse Client::describeRestoreRangeInfoWithOptions(const DescribeRestoreRangeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBeginTimestampForRestore()) {
    query["BeginTimestampForRestore"] = request.beginTimestampForRestore();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEndTimestampForRestore()) {
    query["EndTimestampForRestore"] = request.endTimestampForRestore();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRecentlyRestore()) {
    query["RecentlyRestore"] = request.recentlyRestore();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreRangeInfo"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreRangeInfoResponse>();
}

/**
 * @summary Queries the range of time to which you can restore data in a backup schedule.
 *
 * @param request DescribeRestoreRangeInfoRequest
 * @return DescribeRestoreRangeInfoResponse
 */
DescribeRestoreRangeInfoResponse Client::describeRestoreRangeInfo(const DescribeRestoreRangeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreRangeInfoWithOptions(request, runtime);
}

/**
 * @summary Queries restore tasks.
 *
 * @param request DescribeRestoreTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreTaskListResponse
 */
DescribeRestoreTaskListResponse Client::describeRestoreTaskListWithOptions(const DescribeRestoreTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.endTimestamp();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRestoreTaskId()) {
    query["RestoreTaskId"] = request.restoreTaskId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.startTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRestoreTaskList"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRestoreTaskListResponse>();
}

/**
 * @summary Queries restore tasks.
 *
 * @param request DescribeRestoreTaskListRequest
 * @return DescribeRestoreTaskListResponse
 */
DescribeRestoreTaskListResponse Client::describeRestoreTaskList(const DescribeRestoreTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreTaskListWithOptions(request, runtime);
}

/**
 * @summary Disables incremental backup for a backup schedule.
 *
 * @description ### Impact
 * After you disable the incremental log backup feature, your backup schedule no longer performs incremental log backups.
 *
 * @param request DisableBackupLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableBackupLogResponse
 */
DisableBackupLogResponse Client::disableBackupLogWithOptions(const DisableBackupLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableBackupLog"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableBackupLogResponse>();
}

/**
 * @summary Disables incremental backup for a backup schedule.
 *
 * @description ### Impact
 * After you disable the incremental log backup feature, your backup schedule no longer performs incremental log backups.
 *
 * @param request DisableBackupLogRequest
 * @return DisableBackupLogResponse
 */
DisableBackupLogResponse Client::disableBackupLog(const DisableBackupLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableBackupLogWithOptions(request, runtime);
}

/**
 * @summary Enables incremental backup for a backup schedule.
 *
 * @description ## Impact
 * It is free to enable the incremental log backup feature. However, the backup traffic and storage capacity generated by the feature are billed in the same way as the full backup feature, and can be offset by the free quota of backup schedules or storage plans.
 *
 * @param request EnableBackupLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableBackupLogResponse
 */
EnableBackupLogResponse Client::enableBackupLogWithOptions(const EnableBackupLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableBackupLog"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableBackupLogResponse>();
}

/**
 * @summary Enables incremental backup for a backup schedule.
 *
 * @description ## Impact
 * It is free to enable the incremental log backup feature. However, the backup traffic and storage capacity generated by the feature are billed in the same way as the full backup feature, and can be offset by the free quota of backup schedules or storage plans.
 *
 * @param request EnableBackupLogRequest
 * @return EnableBackupLogResponse
 */
EnableBackupLogResponse Client::enableBackupLog(const EnableBackupLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableBackupLogWithOptions(request, runtime);
}

/**
 * @summary Queries the result of a task that is used to query a database list by using a backup gateway based on the ID of the task.
 *
 * @param request GetDBListFromAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDBListFromAgentResponse
 */
GetDBListFromAgentResponse Client::getDBListFromAgentWithOptions(const GetDBListFromAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.backupGatewayId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDBListFromAgent"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDBListFromAgentResponse>();
}

/**
 * @summary Queries the result of a task that is used to query a database list by using a backup gateway based on the ID of the task.
 *
 * @param request GetDBListFromAgentRequest
 * @return GetDBListFromAgentResponse
 */
GetDBListFromAgentResponse Client::getDBListFromAgent(const GetDBListFromAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDBListFromAgentWithOptions(request, runtime);
}

/**
 * @summary Grants the AliyunServiceRoleForDBS role to Database Backup (DBS).
 *
 * @param request InitializeDbsServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitializeDbsServiceLinkedRoleResponse
 */
InitializeDbsServiceLinkedRoleResponse Client::initializeDbsServiceLinkedRoleWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "InitializeDbsServiceLinkedRole"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitializeDbsServiceLinkedRoleResponse>();
}

/**
 * @summary Grants the AliyunServiceRoleForDBS role to Database Backup (DBS).
 *
 * @return InitializeDbsServiceLinkedRoleResponse
 */
InitializeDbsServiceLinkedRoleResponse Client::initializeDbsServiceLinkedRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeDbsServiceLinkedRoleWithOptions(runtime);
}

/**
 * @summary Modifies backup objects of a backup schedule in Database Backup (DBS).
 *
 * @param request ModifyBackupObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupObjectsResponse
 */
ModifyBackupObjectsResponse Client::modifyBackupObjectsWithOptions(const ModifyBackupObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupObjects()) {
    query["BackupObjects"] = request.backupObjects();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupObjects"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupObjectsResponse>();
}

/**
 * @summary Modifies backup objects of a backup schedule in Database Backup (DBS).
 *
 * @param request ModifyBackupObjectsRequest
 * @return ModifyBackupObjectsResponse
 */
ModifyBackupObjectsResponse Client::modifyBackupObjects(const ModifyBackupObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupObjectsWithOptions(request, runtime);
}

/**
 * @summary Changes the name of a backup schedule.
 *
 * @param request ModifyBackupPlanNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPlanNameResponse
 */
ModifyBackupPlanNameResponse Client::modifyBackupPlanNameWithOptions(const ModifyBackupPlanNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupPlanName()) {
    query["BackupPlanName"] = request.backupPlanName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPlanName"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupPlanNameResponse>();
}

/**
 * @summary Changes the name of a backup schedule.
 *
 * @param request ModifyBackupPlanNameRequest
 * @return ModifyBackupPlanNameResponse
 */
ModifyBackupPlanNameResponse Client::modifyBackupPlanName(const ModifyBackupPlanNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPlanNameWithOptions(request, runtime);
}

/**
 * @summary Enables, configures, or disables the automatic download feature.
 *
 * @param request ModifyBackupSetDownloadRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupSetDownloadRulesResponse
 */
ModifyBackupSetDownloadRulesResponse Client::modifyBackupSetDownloadRulesWithOptions(const ModifyBackupSetDownloadRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.backupGatewayId();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupSetDownloadDir()) {
    query["BackupSetDownloadDir"] = request.backupSetDownloadDir();
  }

  if (!!request.hasBackupSetDownloadTargetType()) {
    query["BackupSetDownloadTargetType"] = request.backupSetDownloadTargetType();
  }

  if (!!request.hasBackupSetDownloadTargetTypeLocation()) {
    query["BackupSetDownloadTargetTypeLocation"] = request.backupSetDownloadTargetTypeLocation();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasFullDataFormat()) {
    query["FullDataFormat"] = request.fullDataFormat();
  }

  if (!!request.hasIncrementDataFormat()) {
    query["IncrementDataFormat"] = request.incrementDataFormat();
  }

  if (!!request.hasOpenAutoDownload()) {
    query["OpenAutoDownload"] = request.openAutoDownload();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupSetDownloadRules"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupSetDownloadRulesResponse>();
}

/**
 * @summary Enables, configures, or disables the automatic download feature.
 *
 * @param request ModifyBackupSetDownloadRulesRequest
 * @return ModifyBackupSetDownloadRulesResponse
 */
ModifyBackupSetDownloadRulesResponse Client::modifyBackupSetDownloadRules(const ModifyBackupSetDownloadRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupSetDownloadRulesWithOptions(request, runtime);
}

/**
 * @summary Modifies the data source of a backup schedule.
 *
 * @param request ModifyBackupSourceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupSourceEndpointResponse
 */
ModifyBackupSourceEndpointResponse Client::modifyBackupSourceEndpointWithOptions(const ModifyBackupSourceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.backupGatewayId();
  }

  if (!!request.hasBackupObjects()) {
    query["BackupObjects"] = request.backupObjects();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCrossAliyunId()) {
    query["CrossAliyunId"] = request.crossAliyunId();
  }

  if (!!request.hasCrossRoleName()) {
    query["CrossRoleName"] = request.crossRoleName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.sourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.sourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.sourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.sourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.sourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.sourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.sourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.sourceEndpointUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupSourceEndpoint"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupSourceEndpointResponse>();
}

/**
 * @summary Modifies the data source of a backup schedule.
 *
 * @param request ModifyBackupSourceEndpointRequest
 * @return ModifyBackupSourceEndpointResponse
 */
ModifyBackupSourceEndpointResponse Client::modifyBackupSourceEndpoint(const ModifyBackupSourceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupSourceEndpointWithOptions(request, runtime);
}

/**
 * @summary Modifies the backup time of a backup schedule.
 *
 * @param request ModifyBackupStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupStrategyResponse
 */
ModifyBackupStrategyResponse Client::modifyBackupStrategyWithOptions(const ModifyBackupStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupLogIntervalSeconds()) {
    query["BackupLogIntervalSeconds"] = request.backupLogIntervalSeconds();
  }

  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.backupPeriod();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupStartTime()) {
    query["BackupStartTime"] = request.backupStartTime();
  }

  if (!!request.hasBackupStrategyType()) {
    query["BackupStrategyType"] = request.backupStrategyType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupStrategy"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupStrategyResponse>();
}

/**
 * @summary Modifies the backup time of a backup schedule.
 *
 * @param request ModifyBackupStrategyRequest
 * @return ModifyBackupStrategyResponse
 */
ModifyBackupStrategyResponse Client::modifyBackupStrategy(const ModifyBackupStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupStrategyWithOptions(request, runtime);
}

/**
 * @summary Modifies the lifecycle of data that is backed up based on a backup schedule.
 *
 * @param request ModifyStorageStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyStorageStrategyResponse
 */
ModifyStorageStrategyResponse Client::modifyStorageStrategyWithOptions(const ModifyStorageStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.backupRetentionPeriod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDuplicationArchivePeriod()) {
    query["DuplicationArchivePeriod"] = request.duplicationArchivePeriod();
  }

  if (!!request.hasDuplicationInfrequentAccessPeriod()) {
    query["DuplicationInfrequentAccessPeriod"] = request.duplicationInfrequentAccessPeriod();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyStorageStrategy"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyStorageStrategyResponse>();
}

/**
 * @summary Modifies the lifecycle of data that is backed up based on a backup schedule.
 *
 * @param request ModifyStorageStrategyRequest
 * @return ModifyStorageStrategyResponse
 */
ModifyStorageStrategyResponse Client::modifyStorageStrategy(const ModifyStorageStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyStorageStrategyWithOptions(request, runtime);
}

/**
 * @summary Releases a pay-as-you-go backup schedule.
 *
 * @description ## Impacts
 * After a pay-as-you-go backup schedule is released, it stops providing services. Database Backup (DBS) no longer charges you fees for this backup schedule.
 *
 * @param request ReleaseBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseBackupPlanResponse
 */
ReleaseBackupPlanResponse Client::releaseBackupPlanWithOptions(const ReleaseBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseBackupPlan"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseBackupPlanResponse>();
}

/**
 * @summary Releases a pay-as-you-go backup schedule.
 *
 * @description ## Impacts
 * After a pay-as-you-go backup schedule is released, it stops providing services. Database Backup (DBS) no longer charges you fees for this backup schedule.
 *
 * @param request ReleaseBackupPlanRequest
 * @return ReleaseBackupPlanResponse
 */
ReleaseBackupPlanResponse Client::releaseBackupPlan(const ReleaseBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Renews a backup schedule.
 *
 * @param request RenewBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewBackupPlanResponse
 */
RenewBackupPlanResponse Client::renewBackupPlanWithOptions(const RenewBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewBackupPlan"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewBackupPlanResponse>();
}

/**
 * @summary Renews a backup schedule.
 *
 * @param request RenewBackupPlanRequest
 * @return RenewBackupPlanResponse
 */
RenewBackupPlanResponse Client::renewBackupPlan(const RenewBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Starts a backup schedule.
 *
 * @param request StartBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartBackupPlanResponse
 */
StartBackupPlanResponse Client::startBackupPlanWithOptions(const StartBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartBackupPlan"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartBackupPlanResponse>();
}

/**
 * @summary Starts a backup schedule.
 *
 * @param request StartBackupPlanRequest
 * @return StartBackupPlanResponse
 */
StartBackupPlanResponse Client::startBackupPlan(const StartBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Starts a restore task.
 *
 * @param request StartRestoreTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRestoreTaskResponse
 */
StartRestoreTaskResponse Client::startRestoreTaskWithOptions(const StartRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRestoreTaskId()) {
    query["RestoreTaskId"] = request.restoreTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRestoreTask"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRestoreTaskResponse>();
}

/**
 * @summary Starts a restore task.
 *
 * @param request StartRestoreTaskRequest
 * @return StartRestoreTaskResponse
 */
StartRestoreTaskResponse Client::startRestoreTask(const StartRestoreTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRestoreTaskWithOptions(request, runtime);
}

/**
 * @summary Stops a backup schedule.
 *
 * @param request StopBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopBackupPlanResponse
 */
StopBackupPlanResponse Client::stopBackupPlanWithOptions(const StopBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStopMethod()) {
    query["StopMethod"] = request.stopMethod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopBackupPlan"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopBackupPlanResponse>();
}

/**
 * @summary Stops a backup schedule.
 *
 * @param request StopBackupPlanRequest
 * @return StopBackupPlanResponse
 */
StopBackupPlanResponse Client::stopBackupPlan(const StopBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Upgrades a backup schedule.
 *
 * @param request UpgradeBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeBackupPlanResponse
 */
UpgradeBackupPlanResponse Client::upgradeBackupPlanWithOptions(const UpgradeBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.backupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeBackupPlan"},
    {"version" , "2019-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeBackupPlanResponse>();
}

/**
 * @summary Upgrades a backup schedule.
 *
 * @param request UpgradeBackupPlanRequest
 * @return UpgradeBackupPlanResponse
 */
UpgradeBackupPlanResponse Client::upgradeBackupPlan(const UpgradeBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeBackupPlanWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dbs20190306