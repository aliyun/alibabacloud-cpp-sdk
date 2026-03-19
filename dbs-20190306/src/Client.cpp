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
 * @summary This API is used to configure a DBS backup plan.
 *
 * @param request ConfigureBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureBackupPlanResponse
 */
ConfigureBackupPlanResponse Client::configureBackupPlanWithOptions(const ConfigureBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoStartBackup()) {
    query["AutoStartBackup"] = request.getAutoStartBackup();
  }

  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.getBackupGatewayId();
  }

  if (!!request.hasBackupLogIntervalSeconds()) {
    query["BackupLogIntervalSeconds"] = request.getBackupLogIntervalSeconds();
  }

  if (!!request.hasBackupObjects()) {
    query["BackupObjects"] = request.getBackupObjects();
  }

  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.getBackupPeriod();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupPlanName()) {
    query["BackupPlanName"] = request.getBackupPlanName();
  }

  if (!!request.hasBackupRateLimit()) {
    query["BackupRateLimit"] = request.getBackupRateLimit();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasBackupSpeedLimit()) {
    query["BackupSpeedLimit"] = request.getBackupSpeedLimit();
  }

  if (!!request.hasBackupStartTime()) {
    query["BackupStartTime"] = request.getBackupStartTime();
  }

  if (!!request.hasBackupStorageEncryptMethod()) {
    query["BackupStorageEncryptMethod"] = request.getBackupStorageEncryptMethod();
  }

  if (!!request.hasBackupStorageType()) {
    query["BackupStorageType"] = request.getBackupStorageType();
  }

  if (!!request.hasBackupStrategyType()) {
    query["BackupStrategyType"] = request.getBackupStrategyType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCrossAliyunId()) {
    query["CrossAliyunId"] = request.getCrossAliyunId();
  }

  if (!!request.hasCrossRoleName()) {
    query["CrossRoleName"] = request.getCrossRoleName();
  }

  if (!!request.hasDuplicationArchivePeriod()) {
    query["DuplicationArchivePeriod"] = request.getDuplicationArchivePeriod();
  }

  if (!!request.hasDuplicationInfrequentAccessPeriod()) {
    query["DuplicationInfrequentAccessPeriod"] = request.getDuplicationInfrequentAccessPeriod();
  }

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.getEnableBackupLog();
  }

  if (!!request.hasEnableMysqlPhysicalBackupBinlog()) {
    query["EnableMysqlPhysicalBackupBinlog"] = request.getEnableMysqlPhysicalBackupBinlog();
  }

  if (!!request.hasEnableSourceEndpointSsl()) {
    query["EnableSourceEndpointSsl"] = request.getEnableSourceEndpointSsl();
  }

  if (!!request.hasOSSBucketName()) {
    query["OSSBucketName"] = request.getOSSBucketName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.getSourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.getSourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.getSourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.getSourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleHome()) {
    query["SourceEndpointOracleHome"] = request.getSourceEndpointOracleHome();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.getSourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.getSourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.getSourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.getSourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.getSourceEndpointUserName();
  }

  if (!!request.hasSslCaPem()) {
    query["SslCaPem"] = request.getSslCaPem();
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
 * @summary This API is used to configure a DBS backup plan.
 *
 * @param request ConfigureBackupPlanRequest
 * @return ConfigureBackupPlanResponse
 */
ConfigureBackupPlanResponse Client::configureBackupPlan(const ConfigureBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Creates, configures, and starts a backup plan.
 *
 * @description Before you call this operation, ensure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/70005.html) of Database Backup (DBS).
 *
 * @param request CreateAndStartBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAndStartBackupPlanResponse
 */
CreateAndStartBackupPlanResponse Client::createAndStartBackupPlanWithOptions(const CreateAndStartBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.getBackupGatewayId();
  }

  if (!!request.hasBackupLogIntervalSeconds()) {
    query["BackupLogIntervalSeconds"] = request.getBackupLogIntervalSeconds();
  }

  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasBackupObjects()) {
    query["BackupObjects"] = request.getBackupObjects();
  }

  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.getBackupPeriod();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupPlanName()) {
    query["BackupPlanName"] = request.getBackupPlanName();
  }

  if (!!request.hasBackupRateLimit()) {
    query["BackupRateLimit"] = request.getBackupRateLimit();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasBackupSpeedLimit()) {
    query["BackupSpeedLimit"] = request.getBackupSpeedLimit();
  }

  if (!!request.hasBackupStartTime()) {
    query["BackupStartTime"] = request.getBackupStartTime();
  }

  if (!!request.hasBackupStorageType()) {
    query["BackupStorageType"] = request.getBackupStorageType();
  }

  if (!!request.hasBackupStrategyType()) {
    query["BackupStrategyType"] = request.getBackupStrategyType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCrossAliyunId()) {
    query["CrossAliyunId"] = request.getCrossAliyunId();
  }

  if (!!request.hasCrossRoleName()) {
    query["CrossRoleName"] = request.getCrossRoleName();
  }

  if (!!request.hasDatabaseRegion()) {
    query["DatabaseRegion"] = request.getDatabaseRegion();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasDuplicationArchivePeriod()) {
    query["DuplicationArchivePeriod"] = request.getDuplicationArchivePeriod();
  }

  if (!!request.hasDuplicationInfrequentAccessPeriod()) {
    query["DuplicationInfrequentAccessPeriod"] = request.getDuplicationInfrequentAccessPeriod();
  }

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.getEnableBackupLog();
  }

  if (!!request.hasFromApp()) {
    query["FromApp"] = request.getFromApp();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOSSBucketName()) {
    query["OSSBucketName"] = request.getOSSBucketName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.getSourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.getSourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.getSourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.getSourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.getSourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.getSourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.getSourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.getSourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.getSourceEndpointUserName();
  }

  if (!!request.hasStorageRegion()) {
    query["StorageRegion"] = request.getStorageRegion();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
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
 * @summary Creates, configures, and starts a backup plan.
 *
 * @description Before you call this operation, ensure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/70005.html) of Database Backup (DBS).
 *
 * @param request CreateAndStartBackupPlanRequest
 * @return CreateAndStartBackupPlanResponse
 */
CreateAndStartBackupPlanResponse Client::createAndStartBackupPlan(const CreateAndStartBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAndStartBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Creates a Database Backup Service (DBS) backup plan.
 *
 * @description To perform this operation in the console, see [Purchase a backup plan](https://help.aliyun.com/document_detail/65909.html).
 *
 * @param request CreateBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupPlanResponse
 */
CreateBackupPlanResponse Client::createBackupPlanWithOptions(const CreateBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseRegion()) {
    query["DatabaseRegion"] = request.getDatabaseRegion();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasFromApp()) {
    query["FromApp"] = request.getFromApp();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStorageRegion()) {
    query["StorageRegion"] = request.getStorageRegion();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
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
 * @summary Creates a Database Backup Service (DBS) backup plan.
 *
 * @description To perform this operation in the console, see [Purchase a backup plan](https://help.aliyun.com/document_detail/65909.html).
 *
 * @param request CreateBackupPlanRequest
 * @return CreateBackupPlanResponse
 */
CreateBackupPlanResponse Client::createBackupPlan(const CreateBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupPlanWithOptions(request, runtime);
}

/**
 * @summary This operation creates a task to download a full backup set.
 *
 * @param request CreateFullBackupSetDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFullBackupSetDownloadResponse
 */
CreateFullBackupSetDownloadResponse Client::createFullBackupSetDownloadWithOptions(const CreateFullBackupSetDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetDataFormat()) {
    query["BackupSetDataFormat"] = request.getBackupSetDataFormat();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary This operation creates a task to download a full backup set.
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
    query["BackupGatewayId"] = request.getBackupGatewayId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.getSourceEndpointIP();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.getSourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.getSourceEndpointRegion();
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
    query["BackupSetDataFormat"] = request.getBackupSetDataFormat();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasBackupSetName()) {
    query["BackupSetName"] = request.getBackupSetName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary This interface creates DBS restore jobs.
 *
 * @description ### Related operations
 * - [Recover databases](https://help.aliyun.com/document_detail/85543.html)
 * - [Tutorials for various database restore configurations](https://help.aliyun.com/document_detail/197144.html)
 *
 * @param request CreateRestoreTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRestoreTaskResponse
 */
CreateRestoreTaskResponse Client::createRestoreTaskWithOptions(const CreateRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoOpenDatabase()) {
    query["AutoOpenDatabase"] = request.getAutoOpenDatabase();
  }

  if (!!request.hasAutoShutdownDatabase()) {
    query["AutoShutdownDatabase"] = request.getAutoShutdownDatabase();
  }

  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.getBackupGatewayId();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCrossAliyunId()) {
    query["CrossAliyunId"] = request.getCrossAliyunId();
  }

  if (!!request.hasCrossRoleName()) {
    query["CrossRoleName"] = request.getCrossRoleName();
  }

  if (!!request.hasDestDatabaseInstanceClass()) {
    query["DestDatabaseInstanceClass"] = request.getDestDatabaseInstanceClass();
  }

  if (!!request.hasDestDatabaseInstanceDatabaseVersion()) {
    query["DestDatabaseInstanceDatabaseVersion"] = request.getDestDatabaseInstanceDatabaseVersion();
  }

  if (!!request.hasDestDatabaseInstanceRegion()) {
    query["DestDatabaseInstanceRegion"] = request.getDestDatabaseInstanceRegion();
  }

  if (!!request.hasDestDatabaseInstanceStorageSize()) {
    query["DestDatabaseInstanceStorageSize"] = request.getDestDatabaseInstanceStorageSize();
  }

  if (!!request.hasDestDatabaseInstanceType()) {
    query["DestDatabaseInstanceType"] = request.getDestDatabaseInstanceType();
  }

  if (!!request.hasDestDatabaseInstanceVSwitch()) {
    query["DestDatabaseInstanceVSwitch"] = request.getDestDatabaseInstanceVSwitch();
  }

  if (!!request.hasDestDatabaseInstanceVpc()) {
    query["DestDatabaseInstanceVpc"] = request.getDestDatabaseInstanceVpc();
  }

  if (!!request.hasDestinationEndpointDatabaseName()) {
    query["DestinationEndpointDatabaseName"] = request.getDestinationEndpointDatabaseName();
  }

  if (!!request.hasDestinationEndpointIP()) {
    query["DestinationEndpointIP"] = request.getDestinationEndpointIP();
  }

  if (!!request.hasDestinationEndpointInstanceID()) {
    query["DestinationEndpointInstanceID"] = request.getDestinationEndpointInstanceID();
  }

  if (!!request.hasDestinationEndpointInstanceType()) {
    query["DestinationEndpointInstanceType"] = request.getDestinationEndpointInstanceType();
  }

  if (!!request.hasDestinationEndpointOracleSID()) {
    query["DestinationEndpointOracleSID"] = request.getDestinationEndpointOracleSID();
  }

  if (!!request.hasDestinationEndpointPassword()) {
    query["DestinationEndpointPassword"] = request.getDestinationEndpointPassword();
  }

  if (!!request.hasDestinationEndpointPort()) {
    query["DestinationEndpointPort"] = request.getDestinationEndpointPort();
  }

  if (!!request.hasDestinationEndpointRegion()) {
    query["DestinationEndpointRegion"] = request.getDestinationEndpointRegion();
  }

  if (!!request.hasDestinationEndpointUserName()) {
    query["DestinationEndpointUserName"] = request.getDestinationEndpointUserName();
  }

  if (!!request.hasDuplicateConflict()) {
    query["DuplicateConflict"] = request.getDuplicateConflict();
  }

  if (!!request.hasEnableDestinationEndpointSsl()) {
    query["EnableDestinationEndpointSsl"] = request.getEnableDestinationEndpointSsl();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRestoreDestinationMode()) {
    query["RestoreDestinationMode"] = request.getRestoreDestinationMode();
  }

  if (!!request.hasRestoreDir()) {
    query["RestoreDir"] = request.getRestoreDir();
  }

  if (!!request.hasRestoreHome()) {
    query["RestoreHome"] = request.getRestoreHome();
  }

  if (!!request.hasRestoreObjects()) {
    query["RestoreObjects"] = request.getRestoreObjects();
  }

  if (!!request.hasRestoreTaskName()) {
    query["RestoreTaskName"] = request.getRestoreTaskName();
  }

  if (!!request.hasRestoreTime()) {
    query["RestoreTime"] = request.getRestoreTime();
  }

  if (!!request.hasSslCaPem()) {
    query["SslCaPem"] = request.getSslCaPem();
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
 * @summary This interface creates DBS restore jobs.
 *
 * @description ### Related operations
 * - [Recover databases](https://help.aliyun.com/document_detail/85543.html)
 * - [Tutorials for various database restore configurations](https://help.aliyun.com/document_detail/197144.html)
 *
 * @param request CreateRestoreTaskRequest
 * @return CreateRestoreTaskResponse
 */
CreateRestoreTaskResponse Client::createRestoreTask(const CreateRestoreTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRestoreTaskWithOptions(request, runtime);
}

/**
 * @summary Queries a list of backup gateways in Database Backup Service (DBS).
 *
 * @param request DescribeBackupGatewayListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupGatewayListResponse
 */
DescribeBackupGatewayListResponse Client::describeBackupGatewayListWithOptions(const DescribeBackupGatewayListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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
 * @summary Queries a list of backup gateways in Database Backup Service (DBS).
 *
 * @param request DescribeBackupGatewayListRequest
 * @return DescribeBackupGatewayListResponse
 */
DescribeBackupGatewayListResponse Client::describeBackupGatewayList(const DescribeBackupGatewayListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupGatewayListWithOptions(request, runtime);
}

/**
 * @summary This operation queries the billing information of a backup plan.
 *
 * @param request DescribeBackupPlanBillingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPlanBillingResponse
 */
DescribeBackupPlanBillingResponse Client::describeBackupPlanBillingWithOptions(const DescribeBackupPlanBillingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasShowStorageType()) {
    query["ShowStorageType"] = request.getShowStorageType();
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
 * @summary This operation queries the billing information of a backup plan.
 *
 * @param request DescribeBackupPlanBillingRequest
 * @return DescribeBackupPlanBillingResponse
 */
DescribeBackupPlanBillingResponse Client::describeBackupPlanBilling(const DescribeBackupPlanBillingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPlanBillingWithOptions(request, runtime);
}

/**
 * @summary This operation lets you view a DBS backup plan.
 *
 * @description Before you use this operation, ensure that Object Storage Service (OSS) is enabled. For more information, see [Object Storage Service](https://help.aliyun.com/document_detail/31817.html).
 *
 * @param request DescribeBackupPlanListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPlanListResponse
 */
DescribeBackupPlanListResponse Client::describeBackupPlanListWithOptions(const DescribeBackupPlanListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupMethod()) {
    query["BackupMethod"] = request.getBackupMethod();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupPlanName()) {
    query["BackupPlanName"] = request.getBackupPlanName();
  }

  if (!!request.hasBackupPlanStatus()) {
    query["BackupPlanStatus"] = request.getBackupPlanStatus();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasShowBackupStrategyInfo()) {
    query["ShowBackupStrategyInfo"] = request.getShowBackupStrategyInfo();
  }

  if (!!request.hasShowRecoverTimeRange()) {
    query["ShowRecoverTimeRange"] = request.getShowRecoverTimeRange();
  }

  if (!!request.hasShowStorageStrategyInfo()) {
    query["ShowStorageStrategyInfo"] = request.getShowStorageStrategyInfo();
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
 * @summary This operation lets you view a DBS backup plan.
 *
 * @description Before you use this operation, ensure that Object Storage Service (OSS) is enabled. For more information, see [Object Storage Service](https://help.aliyun.com/document_detail/31817.html).
 *
 * @param request DescribeBackupPlanListRequest
 * @return DescribeBackupPlanListResponse
 */
DescribeBackupPlanListResponse Client::describeBackupPlanList(const DescribeBackupPlanListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPlanListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of download tasks for backup sets in Database Backup Service (DBS).
 *
 * @param request DescribeBackupSetDownloadTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupSetDownloadTaskListResponse
 */
DescribeBackupSetDownloadTaskListResponse Client::describeBackupSetDownloadTaskListWithOptions(const DescribeBackupSetDownloadTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupSetDownloadTaskId()) {
    query["BackupSetDownloadTaskId"] = request.getBackupSetDownloadTaskId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the list of download tasks for backup sets in Database Backup Service (DBS).
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
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary You can call this operation to list full backup jobs in Database Backup Service (DBS).
 *
 * @param request DescribeFullBackupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFullBackupListResponse
 */
DescribeFullBackupListResponse Client::describeFullBackupListWithOptions(const DescribeFullBackupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasBackupSetStatus()) {
    query["BackupSetStatus"] = request.getBackupSetStatus();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasShowProgress()) {
    query["ShowProgress"] = request.getShowProgress();
  }

  if (!!request.hasShowStorageType()) {
    query["ShowStorageType"] = request.getShowStorageType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary You can call this operation to list full backup jobs in Database Backup Service (DBS).
 *
 * @param request DescribeFullBackupListRequest
 * @return DescribeFullBackupListResponse
 */
DescribeFullBackupListResponse Client::describeFullBackupList(const DescribeFullBackupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFullBackupListWithOptions(request, runtime);
}

/**
 * @summary This operation queries the list of incremental backup tasks for DBS.
 *
 * @param request DescribeIncrementBackupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIncrementBackupListResponse
 */
DescribeIncrementBackupListResponse Client::describeIncrementBackupListWithOptions(const DescribeIncrementBackupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasShowStorageType()) {
    query["ShowStorageType"] = request.getShowStorageType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary This operation queries the list of incremental backup tasks for DBS.
 *
 * @param request DescribeIncrementBackupListRequest
 * @return DescribeIncrementBackupListResponse
 */
DescribeIncrementBackupListResponse Client::describeIncrementBackupList(const DescribeIncrementBackupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIncrementBackupListWithOptions(request, runtime);
}

/**
 * @summary Queries the error code of a Database Backup Service (DBS) job.
 *
 * @param request DescribeJobErrorCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobErrorCodeResponse
 */
DescribeJobErrorCodeResponse Client::describeJobErrorCodeWithOptions(const DescribeJobErrorCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Queries the error code of a Database Backup Service (DBS) job.
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
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
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
 * @summary This operation queries the precheck progress for a backup plan or a restore job.
 *
 * @param request DescribePreCheckProgressListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePreCheckProgressListResponse
 */
DescribePreCheckProgressListResponse Client::describePreCheckProgressListWithOptions(const DescribePreCheckProgressListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRestoreTaskId()) {
    query["RestoreTaskId"] = request.getRestoreTaskId();
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
 * @summary This operation queries the precheck progress for a backup plan or a restore job.
 *
 * @param request DescribePreCheckProgressListRequest
 * @return DescribePreCheckProgressListResponse
 */
DescribePreCheckProgressListResponse Client::describePreCheckProgressList(const DescribePreCheckProgressListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePreCheckProgressListWithOptions(request, runtime);
}

/**
 * @summary Queries the regions where DBS is available.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the regions where DBS is available.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary This operation returns the time ranges available for restoring data from a backup plan.
 *
 * @param request DescribeRestoreRangeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreRangeInfoResponse
 */
DescribeRestoreRangeInfoResponse Client::describeRestoreRangeInfoWithOptions(const DescribeRestoreRangeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBeginTimestampForRestore()) {
    query["BeginTimestampForRestore"] = request.getBeginTimestampForRestore();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndTimestampForRestore()) {
    query["EndTimestampForRestore"] = request.getEndTimestampForRestore();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRecentlyRestore()) {
    query["RecentlyRestore"] = request.getRecentlyRestore();
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
 * @summary This operation returns the time ranges available for restoring data from a backup plan.
 *
 * @param request DescribeRestoreRangeInfoRequest
 * @return DescribeRestoreRangeInfoResponse
 */
DescribeRestoreRangeInfoResponse Client::describeRestoreRangeInfo(const DescribeRestoreRangeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreRangeInfoWithOptions(request, runtime);
}

/**
 * @summary Queries restore jobs in Database Backup Service (DBS).
 *
 * @param request DescribeRestoreTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRestoreTaskListResponse
 */
DescribeRestoreTaskListResponse Client::describeRestoreTaskListWithOptions(const DescribeRestoreTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRestoreTaskId()) {
    query["RestoreTaskId"] = request.getRestoreTaskId();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
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
 * @summary Queries restore jobs in Database Backup Service (DBS).
 *
 * @param request DescribeRestoreTaskListRequest
 * @return DescribeRestoreTaskListResponse
 */
DescribeRestoreTaskListResponse Client::describeRestoreTaskList(const DescribeRestoreTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRestoreTaskListWithOptions(request, runtime);
}

/**
 * @summary Disable incremental backup for a backup plan.
 *
 * @description ## Impact
 * After you disable incremental backup, the backup plan no longer performs incremental backups.
 *
 * @param request DisableBackupLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableBackupLogResponse
 */
DisableBackupLogResponse Client::disableBackupLogWithOptions(const DisableBackupLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDisableMysqlPhysicalBackupBinlogOnly()) {
    query["DisableMysqlPhysicalBackupBinlogOnly"] = request.getDisableMysqlPhysicalBackupBinlogOnly();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Disable incremental backup for a backup plan.
 *
 * @description ## Impact
 * After you disable incremental backup, the backup plan no longer performs incremental backups.
 *
 * @param request DisableBackupLogRequest
 * @return DisableBackupLogResponse
 */
DisableBackupLogResponse Client::disableBackupLog(const DisableBackupLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableBackupLogWithOptions(request, runtime);
}

/**
 * @summary This operation enables incremental backup for a backup plan.
 *
 * @description ## Impact
 * Enabling incremental backup incurs no additional charge. However, this operation generates backup traffic and consumes storage space. The fees for the traffic and storage are the same as those for a full backup. You can use the free quota from a backup plan or a storage plan to cover these costs.
 *
 * @param request EnableBackupLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableBackupLogResponse
 */
EnableBackupLogResponse Client::enableBackupLogWithOptions(const EnableBackupLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableMysqlPhysicalBackupBinlog()) {
    query["EnableMysqlPhysicalBackupBinlog"] = request.getEnableMysqlPhysicalBackupBinlog();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary This operation enables incremental backup for a backup plan.
 *
 * @description ## Impact
 * Enabling incremental backup incurs no additional charge. However, this operation generates backup traffic and consumes storage space. The fees for the traffic and storage are the same as those for a full backup. You can use the free quota from a backup plan or a storage plan to cover these costs.
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
 * @description 您需要调用 [CreateGetDBListFromAgentTask](https://help.aliyun.com/document_detail/2869847.html) 接口创建一个异步任务获取 TaskId（异步任务 ID）。将 TaskId 传入 GetDBListFromAgent 接口后，即可获取物理备份库表数据。
 *
 * @param request GetDBListFromAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDBListFromAgentResponse
 */
GetDBListFromAgentResponse Client::getDBListFromAgentWithOptions(const GetDBListFromAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.getBackupGatewayId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.getSourceEndpointRegion();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @description 您需要调用 [CreateGetDBListFromAgentTask](https://help.aliyun.com/document_detail/2869847.html) 接口创建一个异步任务获取 TaskId（异步任务 ID）。将 TaskId 传入 GetDBListFromAgent 接口后，即可获取物理备份库表数据。
 *
 * @param request GetDBListFromAgentRequest
 * @return GetDBListFromAgentResponse
 */
GetDBListFromAgentResponse Client::getDBListFromAgent(const GetDBListFromAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDBListFromAgentWithOptions(request, runtime);
}

/**
 * @summary Grants the service-linked role (AliyunServiceRoleForDBS) to Database Backup (DBS).
 *
 * @description DBS uses the service-linked role (AliyunServiceRoleForDBS) to obtain the required access permissions to connect to ApsaraDB databases, such as RDS, MongoDB, Redis, and PolarDB, or self-managed databases on ECS instances. For more information, see [Activate the Database Backup service](https://help.aliyun.com/document_detail/162603.html).
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
 * @summary Grants the service-linked role (AliyunServiceRoleForDBS) to Database Backup (DBS).
 *
 * @description DBS uses the service-linked role (AliyunServiceRoleForDBS) to obtain the required access permissions to connect to ApsaraDB databases, such as RDS, MongoDB, Redis, and PolarDB, or self-managed databases on ECS instances. For more information, see [Activate the Database Backup service](https://help.aliyun.com/document_detail/162603.html).
 *
 * @return InitializeDbsServiceLinkedRoleResponse
 */
InitializeDbsServiceLinkedRoleResponse Client::initializeDbsServiceLinkedRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initializeDbsServiceLinkedRoleWithOptions(runtime);
}

/**
 * @summary Modifies the objects included in a Database Backup Service (DBS) backup plan.
 *
 * @param request ModifyBackupObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupObjectsResponse
 */
ModifyBackupObjectsResponse Client::modifyBackupObjectsWithOptions(const ModifyBackupObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupObjects()) {
    query["BackupObjects"] = request.getBackupObjects();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Modifies the objects included in a Database Backup Service (DBS) backup plan.
 *
 * @param request ModifyBackupObjectsRequest
 * @return ModifyBackupObjectsResponse
 */
ModifyBackupObjectsResponse Client::modifyBackupObjects(const ModifyBackupObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupObjectsWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a backup plan.
 *
 * @param request ModifyBackupPlanNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPlanNameResponse
 */
ModifyBackupPlanNameResponse Client::modifyBackupPlanNameWithOptions(const ModifyBackupPlanNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupPlanName()) {
    query["BackupPlanName"] = request.getBackupPlanName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Modifies the name of a backup plan.
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
 * @description 使用本接口前请先确认备份数据是否存储在 DBS 的内置 OSS 上，您可通过调用 [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) 接口查看 BackupStorageType 取值情况。
 *
 * @param request ModifyBackupSetDownloadRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupSetDownloadRulesResponse
 */
ModifyBackupSetDownloadRulesResponse Client::modifyBackupSetDownloadRulesWithOptions(const ModifyBackupSetDownloadRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.getBackupGatewayId();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupSetDownloadDir()) {
    query["BackupSetDownloadDir"] = request.getBackupSetDownloadDir();
  }

  if (!!request.hasBackupSetDownloadTargetType()) {
    query["BackupSetDownloadTargetType"] = request.getBackupSetDownloadTargetType();
  }

  if (!!request.hasBackupSetDownloadTargetTypeLocation()) {
    query["BackupSetDownloadTargetTypeLocation"] = request.getBackupSetDownloadTargetTypeLocation();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFullDataFormat()) {
    query["FullDataFormat"] = request.getFullDataFormat();
  }

  if (!!request.hasIncrementDataFormat()) {
    query["IncrementDataFormat"] = request.getIncrementDataFormat();
  }

  if (!!request.hasOpenAutoDownload()) {
    query["OpenAutoDownload"] = request.getOpenAutoDownload();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @description 使用本接口前请先确认备份数据是否存储在 DBS 的内置 OSS 上，您可通过调用 [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) 接口查看 BackupStorageType 取值情况。
 *
 * @param request ModifyBackupSetDownloadRulesRequest
 * @return ModifyBackupSetDownloadRulesResponse
 */
ModifyBackupSetDownloadRulesResponse Client::modifyBackupSetDownloadRules(const ModifyBackupSetDownloadRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupSetDownloadRulesWithOptions(request, runtime);
}

/**
 * @summary This operation modifies a Database Backup source endpoint.
 *
 * @param request ModifyBackupSourceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupSourceEndpointResponse
 */
ModifyBackupSourceEndpointResponse Client::modifyBackupSourceEndpointWithOptions(const ModifyBackupSourceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupGatewayId()) {
    query["BackupGatewayId"] = request.getBackupGatewayId();
  }

  if (!!request.hasBackupObjects()) {
    query["BackupObjects"] = request.getBackupObjects();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCrossAliyunId()) {
    query["CrossAliyunId"] = request.getCrossAliyunId();
  }

  if (!!request.hasCrossRoleName()) {
    query["CrossRoleName"] = request.getCrossRoleName();
  }

  if (!!request.hasEnableSourceEndpointSsl()) {
    query["EnableSourceEndpointSsl"] = request.getEnableSourceEndpointSsl();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.getSourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.getSourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.getSourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.getSourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleHome()) {
    query["SourceEndpointOracleHome"] = request.getSourceEndpointOracleHome();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.getSourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.getSourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.getSourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.getSourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.getSourceEndpointUserName();
  }

  if (!!request.hasSslCaPem()) {
    query["SslCaPem"] = request.getSslCaPem();
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
 * @summary This operation modifies a Database Backup source endpoint.
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
    query["BackupLogIntervalSeconds"] = request.getBackupLogIntervalSeconds();
  }

  if (!!request.hasBackupPeriod()) {
    query["BackupPeriod"] = request.getBackupPeriod();
  }

  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupStartTime()) {
    query["BackupStartTime"] = request.getBackupStartTime();
  }

  if (!!request.hasBackupStrategyType()) {
    query["BackupStrategyType"] = request.getBackupStrategyType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Modify the lifecycle of stored data in a backup plan.
 *
 * @param request ModifyStorageStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyStorageStrategyResponse
 */
ModifyStorageStrategyResponse Client::modifyStorageStrategyWithOptions(const ModifyStorageStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasBackupStorageEncryptMethod()) {
    query["BackupStorageEncryptMethod"] = request.getBackupStorageEncryptMethod();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDuplicationArchivePeriod()) {
    query["DuplicationArchivePeriod"] = request.getDuplicationArchivePeriod();
  }

  if (!!request.hasDuplicationInfrequentAccessPeriod()) {
    query["DuplicationInfrequentAccessPeriod"] = request.getDuplicationInfrequentAccessPeriod();
  }

  if (!!request.hasIncrementBackupRetentionPeriod()) {
    query["IncrementBackupRetentionPeriod"] = request.getIncrementBackupRetentionPeriod();
  }

  if (!!request.hasIncrementDuplicationArchivePeriod()) {
    query["IncrementDuplicationArchivePeriod"] = request.getIncrementDuplicationArchivePeriod();
  }

  if (!!request.hasIncrementDuplicationInfrequentAccessPeriod()) {
    query["IncrementDuplicationInfrequentAccessPeriod"] = request.getIncrementDuplicationInfrequentAccessPeriod();
  }

  if (!!request.hasLogBackupRetentionPeriod()) {
    query["LogBackupRetentionPeriod"] = request.getLogBackupRetentionPeriod();
  }

  if (!!request.hasLogDuplicationArchivePeriod()) {
    query["LogDuplicationArchivePeriod"] = request.getLogDuplicationArchivePeriod();
  }

  if (!!request.hasLogDuplicationInfrequentAccessPeriod()) {
    query["LogDuplicationInfrequentAccessPeriod"] = request.getLogDuplicationInfrequentAccessPeriod();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Modify the lifecycle of stored data in a backup plan.
 *
 * @param request ModifyStorageStrategyRequest
 * @return ModifyStorageStrategyResponse
 */
ModifyStorageStrategyResponse Client::modifyStorageStrategy(const ModifyStorageStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyStorageStrategyWithOptions(request, runtime);
}

/**
 * @summary This operation releases a pay-as-you-go backup plan.
 *
 * @description ## Impact
 * After you release a backup plan, the service for the backup instance is stopped and you are no longer charged for the instance.
 *
 * @param request ReleaseBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseBackupPlanResponse
 */
ReleaseBackupPlanResponse Client::releaseBackupPlanWithOptions(const ReleaseBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary This operation releases a pay-as-you-go backup plan.
 *
 * @description ## Impact
 * After you release a backup plan, the service for the backup instance is stopped and you are no longer charged for the instance.
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
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.getUsedTime();
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
 * @summary This operation starts a DBS backup plan.
 *
 * @param request StartBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartBackupPlanResponse
 */
StartBackupPlanResponse Client::startBackupPlanWithOptions(const StartBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary This operation starts a DBS backup plan.
 *
 * @param request StartBackupPlanRequest
 * @return StartBackupPlanResponse
 */
StartBackupPlanResponse Client::startBackupPlan(const StartBackupPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startBackupPlanWithOptions(request, runtime);
}

/**
 * @summary Starts a DBS restore job.
 *
 * @param request StartRestoreTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRestoreTaskResponse
 */
StartRestoreTaskResponse Client::startRestoreTaskWithOptions(const StartRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRestoreTaskId()) {
    query["RestoreTaskId"] = request.getRestoreTaskId();
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
 * @summary Starts a DBS restore job.
 *
 * @param request StartRestoreTaskRequest
 * @return StartRestoreTaskResponse
 */
StartRestoreTaskResponse Client::startRestoreTask(const StartRestoreTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRestoreTaskWithOptions(request, runtime);
}

/**
 * @summary This operation pauses a DBS backup plan.
 *
 * @param request StopBackupPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopBackupPlanResponse
 */
StopBackupPlanResponse Client::stopBackupPlanWithOptions(const StopBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupPlanId()) {
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStopMethod()) {
    query["StopMethod"] = request.getStopMethod();
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
 * @summary This operation pauses a DBS backup plan.
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
    query["BackupPlanId"] = request.getBackupPlanId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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