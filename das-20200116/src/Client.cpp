#include <darabonba/Core.hpp>
#include <alibabacloud/DAS20200116.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::DAS20200116::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace DAS20200116
{

AlibabaCloud::DAS20200116::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"cn-shanghai" , "das.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("das", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a database instance to Database Autonomy Service (DAS).
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call DAS, you must set the region to cn-shanghai.
 *
 * @param request AddHDMInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddHDMInstanceResponse
 */
AddHDMInstanceResponse Client::addHDMInstanceWithOptions(const AddHDMInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasFlushAccount()) {
    query["FlushAccount"] = request.flushAccount();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.instanceAlias();
  }

  if (!!request.hasInstanceArea()) {
    query["InstanceArea"] = request.instanceArea();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.networkType();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.context();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddHDMInstance"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddHDMInstanceResponse>();
}

/**
 * @summary Adds a database instance to Database Autonomy Service (DAS).
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call DAS, you must set the region to cn-shanghai.
 *
 * @param request AddHDMInstanceRequest
 * @return AddHDMInstanceResponse
 */
AddHDMInstanceResponse Client::addHDMInstance(const AddHDMInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addHDMInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a cache analysis task.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   You can call this operation to analyze the data structures of ApsaraDB for Redis and the following self-developed data structures of Tair: TairString, TairHash, TairGIS, TairBloom, TairDoc, TairCpc, and TairZset. Other self-developed Tair data structures are not supported.
 * *   If the specifications of the database instance that you want to analyze are changed, the backup file generated before the specification change cannot be analyzed.
 * *   Tair ESSD/SSD-based instances are not supported.
 *
 * @param request CreateCacheAnalysisJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCacheAnalysisJobResponse
 */
CreateCacheAnalysisJobResponse Client::createCacheAnalysisJobWithOptions(const CreateCacheAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.backupSetId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSeparators()) {
    query["Separators"] = request.separators();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCacheAnalysisJob"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCacheAnalysisJobResponse>();
}

/**
 * @summary Creates a cache analysis task.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   You can call this operation to analyze the data structures of ApsaraDB for Redis and the following self-developed data structures of Tair: TairString, TairHash, TairGIS, TairBloom, TairDoc, TairCpc, and TairZset. Other self-developed Tair data structures are not supported.
 * *   If the specifications of the database instance that you want to analyze are changed, the backup file generated before the specification change cannot be analyzed.
 * *   Tair ESSD/SSD-based instances are not supported.
 *
 * @param request CreateCacheAnalysisJobRequest
 * @return CreateCacheAnalysisJobResponse
 */
CreateCacheAnalysisJobResponse Client::createCacheAnalysisJob(const CreateCacheAnalysisJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCacheAnalysisJobWithOptions(request, runtime);
}

/**
 * @summary Creates stress testing tasks.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html). Before you call this API operation, make sure that your database instances meet the following requirements:
 * *   The source database instance is an ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition instance, or a PolarDB for MySQL Cluster Edition cluster.
 * *   The destination database instance is an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster.
 * *   The source and destination database instances are connected to DAS. For information about how to connect database instances to DAS, see [Connect an Alibaba Cloud database instance to DAS](https://help.aliyun.com/document_detail/65405.html).
 * *   DAS Enterprise Edition is enabled for the source and destination database instances. For more information, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 *
 * @param request CreateCloudBenchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudBenchTasksResponse
 */
CreateCloudBenchTasksResponse Client::createCloudBenchTasksWithOptions(const CreateCloudBenchTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.amount();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasBackupTime()) {
    query["BackupTime"] = request.backupTime();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDstConnectionString()) {
    query["DstConnectionString"] = request.dstConnectionString();
  }

  if (!!request.hasDstInstanceId()) {
    query["DstInstanceId"] = request.dstInstanceId();
  }

  if (!!request.hasDstPort()) {
    query["DstPort"] = request.dstPort();
  }

  if (!!request.hasDstSuperAccount()) {
    query["DstSuperAccount"] = request.dstSuperAccount();
  }

  if (!!request.hasDstSuperPassword()) {
    query["DstSuperPassword"] = request.dstSuperPassword();
  }

  if (!!request.hasDstType()) {
    query["DstType"] = request.dstType();
  }

  if (!!request.hasDtsJobClass()) {
    query["DtsJobClass"] = request.dtsJobClass();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasEndState()) {
    query["EndState"] = request.endState();
  }

  if (!!request.hasGatewayVpcId()) {
    query["GatewayVpcId"] = request.gatewayVpcId();
  }

  if (!!request.hasGatewayVpcIp()) {
    query["GatewayVpcIp"] = request.gatewayVpcIp();
  }

  if (!!request.hasRate()) {
    query["Rate"] = request.rate();
  }

  if (!!request.hasRequestDuration()) {
    query["RequestDuration"] = request.requestDuration();
  }

  if (!!request.hasRequestEndTime()) {
    query["RequestEndTime"] = request.requestEndTime();
  }

  if (!!request.hasRequestStartTime()) {
    query["RequestStartTime"] = request.requestStartTime();
  }

  if (!!request.hasSmartPressureTime()) {
    query["SmartPressureTime"] = request.smartPressureTime();
  }

  if (!!request.hasSrcInstanceId()) {
    query["SrcInstanceId"] = request.srcInstanceId();
  }

  if (!!request.hasSrcPublicIp()) {
    query["SrcPublicIp"] = request.srcPublicIp();
  }

  if (!!request.hasSrcSuperAccount()) {
    query["SrcSuperAccount"] = request.srcSuperAccount();
  }

  if (!!request.hasSrcSuperPassword()) {
    query["SrcSuperPassword"] = request.srcSuperPassword();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasWorkDir()) {
    query["WorkDir"] = request.workDir();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudBenchTasks"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudBenchTasksResponse>();
}

/**
 * @summary Creates stress testing tasks.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html). Before you call this API operation, make sure that your database instances meet the following requirements:
 * *   The source database instance is an ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition instance, or a PolarDB for MySQL Cluster Edition cluster.
 * *   The destination database instance is an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster.
 * *   The source and destination database instances are connected to DAS. For information about how to connect database instances to DAS, see [Connect an Alibaba Cloud database instance to DAS](https://help.aliyun.com/document_detail/65405.html).
 * *   DAS Enterprise Edition is enabled for the source and destination database instances. For more information, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 *
 * @param request CreateCloudBenchTasksRequest
 * @return CreateCloudBenchTasksResponse
 */
CreateCloudBenchTasksResponse Client::createCloudBenchTasks(const CreateCloudBenchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudBenchTasksWithOptions(request, runtime);
}

/**
 * @summary Creates a diagnostic report.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * *   The version of Database Autonomy Service (DAS) SDK must be 1.0.3 or later.
 * *   If you use an SDK to call DAS, you must set the region to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   RDS MySQL
 *     *   PolarDB for MySQL
 *     *   Redis
 *
 * @param request CreateDiagnosticReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiagnosticReportResponse
 */
CreateDiagnosticReportResponse Client::createDiagnosticReportWithOptions(const CreateDiagnosticReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDiagnosticReport"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiagnosticReportResponse>();
}

/**
 * @summary Creates a diagnostic report.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * *   The version of Database Autonomy Service (DAS) SDK must be 1.0.3 or later.
 * *   If you use an SDK to call DAS, you must set the region to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   RDS MySQL
 *     *   PolarDB for MySQL
 *     *   Redis
 *
 * @param request CreateDiagnosticReportRequest
 * @return CreateDiagnosticReportResponse
 */
CreateDiagnosticReportResponse Client::createDiagnosticReport(const CreateDiagnosticReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiagnosticReportWithOptions(request, runtime);
}

/**
 * @summary Creates a task that terminates sessions.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request CreateKillInstanceSessionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKillInstanceSessionTaskResponse
 */
CreateKillInstanceSessionTaskResponse Client::createKillInstanceSessionTaskWithOptions(const CreateKillInstanceSessionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbUser()) {
    query["DbUser"] = request.dbUser();
  }

  if (!!request.hasDbUserPassword()) {
    query["DbUserPassword"] = request.dbUserPassword();
  }

  if (!!request.hasIgnoredUsers()) {
    query["IgnoredUsers"] = request.ignoredUsers();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKillAllSessions()) {
    query["KillAllSessions"] = request.killAllSessions();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSessionIds()) {
    query["SessionIds"] = request.sessionIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateKillInstanceSessionTask"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKillInstanceSessionTaskResponse>();
}

/**
 * @summary Creates a task that terminates sessions.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request CreateKillInstanceSessionTaskRequest
 * @return CreateKillInstanceSessionTaskResponse
 */
CreateKillInstanceSessionTaskResponse Client::createKillInstanceSessionTask(const CreateKillInstanceSessionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKillInstanceSessionTaskWithOptions(request, runtime);
}

/**
 * @summary 创建结束会话的任务
 *
 * @param request CreateKillInstanceSessionTaskWithMaintainUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKillInstanceSessionTaskWithMaintainUserResponse
 */
CreateKillInstanceSessionTaskWithMaintainUserResponse Client::createKillInstanceSessionTaskWithMaintainUserWithOptions(const CreateKillInstanceSessionTaskWithMaintainUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIgnoredUsers()) {
    query["IgnoredUsers"] = request.ignoredUsers();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKillAllSessions()) {
    query["KillAllSessions"] = request.killAllSessions();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSessionIds()) {
    query["SessionIds"] = request.sessionIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateKillInstanceSessionTaskWithMaintainUser"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKillInstanceSessionTaskWithMaintainUserResponse>();
}

/**
 * @summary 创建结束会话的任务
 *
 * @param request CreateKillInstanceSessionTaskWithMaintainUserRequest
 * @return CreateKillInstanceSessionTaskWithMaintainUserResponse
 */
CreateKillInstanceSessionTaskWithMaintainUserResponse Client::createKillInstanceSessionTaskWithMaintainUser(const CreateKillInstanceSessionTaskWithMaintainUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKillInstanceSessionTaskWithMaintainUserWithOptions(request, runtime);
}

/**
 * @summary 创建最近死锁分析任务
 *
 * @param request CreateLatestDeadLockAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLatestDeadLockAnalysisResponse
 */
CreateLatestDeadLockAnalysisResponse Client::createLatestDeadLockAnalysisWithOptions(const CreateLatestDeadLockAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLatestDeadLockAnalysis"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLatestDeadLockAnalysisResponse>();
}

/**
 * @summary 创建最近死锁分析任务
 *
 * @param request CreateLatestDeadLockAnalysisRequest
 * @return CreateLatestDeadLockAnalysisResponse
 */
CreateLatestDeadLockAnalysisResponse Client::createLatestDeadLockAnalysis(const CreateLatestDeadLockAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLatestDeadLockAnalysisWithOptions(request, runtime);
}

/**
 * @summary Adds a tag to a SQL template.
 *
 * @description *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request CreateQueryOptimizeTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueryOptimizeTagResponse
 */
CreateQueryOptimizeTagResponse Client::createQueryOptimizeTagWithOptions(const CreateQueryOptimizeTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComments()) {
    query["Comments"] = request.comments();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSqlIds()) {
    query["SqlIds"] = request.sqlIds();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQueryOptimizeTag"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQueryOptimizeTagResponse>();
}

/**
 * @summary Adds a tag to a SQL template.
 *
 * @description *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request CreateQueryOptimizeTagRequest
 * @return CreateQueryOptimizeTagResponse
 */
CreateQueryOptimizeTagResponse Client::createQueryOptimizeTag(const CreateQueryOptimizeTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQueryOptimizeTagWithOptions(request, runtime);
}

/**
 * @summary Initiates an SQL statement diagnostics request.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call Database Autonomy Service (DAS), you must set the region to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *     *   ApsaraDB RDS for SQL Server
 *     *   PolarDB for MySQL
 *     *   PolarDB for PostgreSQL (compatible with Oracle)
 *     *   ApsaraDB for MongoDB
 * >  The minor engine version of ApsaraDB RDS for PostgreSQL instances must be 20221230 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request CreateRequestDiagnosisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRequestDiagnosisResponse
 */
CreateRequestDiagnosisResponse Client::createRequestDiagnosisWithOptions(const CreateRequestDiagnosisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSql()) {
    query["Sql"] = request.sql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRequestDiagnosis"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRequestDiagnosisResponse>();
}

/**
 * @summary Initiates an SQL statement diagnostics request.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call Database Autonomy Service (DAS), you must set the region to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *     *   ApsaraDB RDS for SQL Server
 *     *   PolarDB for MySQL
 *     *   PolarDB for PostgreSQL (compatible with Oracle)
 *     *   ApsaraDB for MongoDB
 * >  The minor engine version of ApsaraDB RDS for PostgreSQL instances must be 20221230 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request CreateRequestDiagnosisRequest
 * @return CreateRequestDiagnosisResponse
 */
CreateRequestDiagnosisResponse Client::createRequestDiagnosis(const CreateRequestDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRequestDiagnosisWithOptions(request, runtime);
}

/**
 * @summary 创建用户跨产品白名单模板
 *
 * @param request CreateSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityIPGroupResponse
 */
CreateSecurityIPGroupResponse Client::createSecurityIPGroupWithOptions(const CreateSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGIpList()) {
    query["GIpList"] = request.GIpList();
  }

  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.globalIgName();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.regionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecurityIPGroup"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityIPGroupResponse>();
}

/**
 * @summary 创建用户跨产品白名单模板
 *
 * @param request CreateSecurityIPGroupRequest
 * @return CreateSecurityIPGroupResponse
 */
CreateSecurityIPGroupResponse Client::createSecurityIPGroup(const CreateSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an offline task for Database Autonomy Service (DAS) Enterprise Edition.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   You can create an offline task only for database instances for which DAS Enterprise Edition V2 or V3 is enabled. For more information about the databases and regions that are supported by various versions of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request CreateSqlLogTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSqlLogTaskResponse
 */
CreateSqlLogTaskResponse Client::createSqlLogTaskWithOptions(const CreateSqlLogTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSqlLogTask"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSqlLogTaskResponse>();
}

/**
 * @summary Creates an offline task for Database Autonomy Service (DAS) Enterprise Edition.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   You can create an offline task only for database instances for which DAS Enterprise Edition V2 or V3 is enabled. For more information about the databases and regions that are supported by various versions of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request CreateSqlLogTaskRequest
 * @return CreateSqlLogTaskResponse
 */
CreateSqlLogTaskResponse Client::createSqlLogTask(const CreateSqlLogTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSqlLogTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a storage analysis task to query the usage details of one or more databases and tables.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and ApsaraDB for MongoDB instances.
 * *   For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this operation works the same as the storage analysis feature of the previous version. Tasks generated by this operation cannot be viewed on the Storage Analysis page of the new version in the Database Autonomy Service (DAS) console. If you want to view the tasks and results, call the related API operation to obtain data and save data to your computer.
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request CreateStorageAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStorageAnalysisTaskResponse
 */
CreateStorageAnalysisTaskResponse Client::createStorageAnalysisTaskWithOptions(const CreateStorageAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStorageAnalysisTask"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStorageAnalysisTaskResponse>();
}

/**
 * @summary Creates a storage analysis task to query the usage details of one or more databases and tables.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and ApsaraDB for MongoDB instances.
 * *   For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this operation works the same as the storage analysis feature of the previous version. Tasks generated by this operation cannot be viewed on the Storage Analysis page of the new version in the Database Autonomy Service (DAS) console. If you want to view the tasks and results, call the related API operation to obtain data and save data to your computer.
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request CreateStorageAnalysisTaskRequest
 * @return CreateStorageAnalysisTaskResponse
 */
CreateStorageAnalysisTaskResponse Client::createStorageAnalysisTask(const CreateStorageAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStorageAnalysisTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to handle traffic spikes in an effective manner. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DeleteCloudBenchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudBenchTaskResponse
 */
DeleteCloudBenchTaskResponse Client::deleteCloudBenchTaskWithOptions(const DeleteCloudBenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudBenchTask"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudBenchTaskResponse>();
}

/**
 * @summary Deletes a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to handle traffic spikes in an effective manner. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DeleteCloudBenchTaskRequest
 * @return DeleteCloudBenchTaskResponse
 */
DeleteCloudBenchTaskResponse Client::deleteCloudBenchTask(const DeleteCloudBenchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudBenchTaskWithOptions(request, runtime);
}

/**
 * @summary 删除用户跨产品白名单模板
 *
 * @param request DeleteSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityIPGroupResponse
 */
DeleteSecurityIPGroupResponse Client::deleteSecurityIPGroupWithOptions(const DeleteSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.globalSecurityGroupId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.regionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityIPGroup"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityIPGroupResponse>();
}

/**
 * @summary 删除用户跨产品白名单模板
 *
 * @param request DeleteSecurityIPGroupRequest
 * @return DeleteSecurityIPGroupResponse
 */
DeleteSecurityIPGroupResponse Client::deleteSecurityIPGroup(const DeleteSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the metadata of a stopped DBGateway.
 *
 * @description *   This operation is used to delete the metadata of a DBGateway that is released in a stress testing task created by calling the [CreateCloudBenchTasks](https://help.aliyun.com/document_detail/230665.html) operation.
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * >  If the heartbeat is lost between a DBGateway and the access point for more than 20 seconds, the DBGateway is considered stopped.
 *
 * @param request DeleteStopGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStopGatewayResponse
 */
DeleteStopGatewayResponse Client::deleteStopGatewayWithOptions(const DeleteStopGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.gatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStopGateway"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStopGatewayResponse>();
}

/**
 * @summary Deletes the metadata of a stopped DBGateway.
 *
 * @description *   This operation is used to delete the metadata of a DBGateway that is released in a stress testing task created by calling the [CreateCloudBenchTasks](https://help.aliyun.com/document_detail/230665.html) operation.
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * >  If the heartbeat is lost between a DBGateway and the access point for more than 20 seconds, the DBGateway is considered stopped.
 *
 * @param request DeleteStopGatewayRequest
 * @return DeleteStopGatewayResponse
 */
DeleteStopGatewayResponse Client::deleteStopGateway(const DeleteStopGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStopGatewayWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of the auto scaling feature for an instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeAutoScalingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoScalingConfigResponse
 */
DescribeAutoScalingConfigResponse Client::describeAutoScalingConfigWithOptions(const DescribeAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoScalingConfig"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoScalingConfigResponse>();
}

/**
 * @summary Queries the configurations of the auto scaling feature for an instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeAutoScalingConfigRequest
 * @return DescribeAutoScalingConfigResponse
 */
DescribeAutoScalingConfigResponse Client::describeAutoScalingConfig(const DescribeAutoScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoScalingConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the auto scaling history of an instance.
 *
 * @description *   You can call this operation to query the history information about the automatic performance scaling only of ApsaraDB RDS for MySQL High-availability Edition instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeAutoScalingHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoScalingHistoryResponse
 */
DescribeAutoScalingHistoryResponse Client::describeAutoScalingHistoryWithOptions(const DescribeAutoScalingHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoScalingHistory"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoScalingHistoryResponse>();
}

/**
 * @summary Queries the auto scaling history of an instance.
 *
 * @description *   You can call this operation to query the history information about the automatic performance scaling only of ApsaraDB RDS for MySQL High-availability Edition instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeAutoScalingHistoryRequest
 * @return DescribeAutoScalingHistoryResponse
 */
DescribeAutoScalingHistoryResponse Client::describeAutoScalingHistory(const DescribeAutoScalingHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoScalingHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a cache analysis task.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to ApsaraDB for Redis.
 * >  You can call this operation to query the top 500 keys in a cache analysis task.
 *
 * @param request DescribeCacheAnalysisJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCacheAnalysisJobResponse
 */
DescribeCacheAnalysisJobResponse Client::describeCacheAnalysisJobWithOptions(const DescribeCacheAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCacheAnalysisJob"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCacheAnalysisJobResponse>();
}

/**
 * @summary Queries the details of a cache analysis task.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to ApsaraDB for Redis.
 * >  You can call this operation to query the top 500 keys in a cache analysis task.
 *
 * @param request DescribeCacheAnalysisJobRequest
 * @return DescribeCacheAnalysisJobResponse
 */
DescribeCacheAnalysisJobResponse Client::describeCacheAnalysisJob(const DescribeCacheAnalysisJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCacheAnalysisJobWithOptions(request, runtime);
}

/**
 * @summary Queries a list of cache analysis tasks.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to ApsaraDB for Redis.
 *
 * @param request DescribeCacheAnalysisJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCacheAnalysisJobsResponse
 */
DescribeCacheAnalysisJobsResponse Client::describeCacheAnalysisJobsWithOptions(const DescribeCacheAnalysisJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCacheAnalysisJobs"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCacheAnalysisJobsResponse>();
}

/**
 * @summary Queries a list of cache analysis tasks.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to ApsaraDB for Redis.
 *
 * @param request DescribeCacheAnalysisJobsRequest
 * @return DescribeCacheAnalysisJobsResponse
 */
DescribeCacheAnalysisJobsResponse Client::describeCacheAnalysisJobs(const DescribeCacheAnalysisJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCacheAnalysisJobsWithOptions(request, runtime);
}

/**
 * @summary Queries stress testing tasks.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudBenchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudBenchTasksResponse
 */
DescribeCloudBenchTasksResponse Client::describeCloudBenchTasksWithOptions(const DescribeCloudBenchTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudBenchTasks"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudBenchTasksResponse>();
}

/**
 * @summary Queries stress testing tasks.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudBenchTasksRequest
 * @return DescribeCloudBenchTasksResponse
 */
DescribeCloudBenchTasksResponse Client::describeCloudBenchTasks(const DescribeCloudBenchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudBenchTasksWithOptions(request, runtime);
}

/**
 * @summary Queries a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether you need to scale up your database instance to handle workloads during peak hours. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudbenchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudbenchTaskResponse
 */
DescribeCloudbenchTaskResponse Client::describeCloudbenchTaskWithOptions(const DescribeCloudbenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudbenchTask"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudbenchTaskResponse>();
}

/**
 * @summary Queries a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether you need to scale up your database instance to handle workloads during peak hours. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudbenchTaskRequest
 * @return DescribeCloudbenchTaskResponse
 */
DescribeCloudbenchTaskResponse Client::describeCloudbenchTask(const DescribeCloudbenchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudbenchTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudbenchTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudbenchTaskConfigResponse
 */
DescribeCloudbenchTaskConfigResponse Client::describeCloudbenchTaskConfigWithOptions(const DescribeCloudbenchTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudbenchTaskConfig"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudbenchTaskConfigResponse>();
}

/**
 * @summary Queries the configurations of a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudbenchTaskConfigRequest
 * @return DescribeCloudbenchTaskConfigResponse
 */
DescribeCloudbenchTaskConfigResponse Client::describeCloudbenchTaskConfig(const DescribeCloudbenchTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudbenchTaskConfigWithOptions(request, runtime);
}

/**
 * @summary Queries diagnostics reports.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable to the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB for Redis
 *
 * @param request DescribeDiagnosticReportListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosticReportListResponse
 */
DescribeDiagnosticReportListResponse Client::describeDiagnosticReportListWithOptions(const DescribeDiagnosticReportListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.DBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosticReportList"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosticReportListResponse>();
}

/**
 * @summary Queries diagnostics reports.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable to the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB for Redis
 *
 * @param request DescribeDiagnosticReportListRequest
 * @return DescribeDiagnosticReportListResponse
 */
DescribeDiagnosticReportListResponse Client::describeDiagnosticReportList(const DescribeDiagnosticReportListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosticReportListWithOptions(request, runtime);
}

/**
 * @summary 查询实例错误日志
 *
 * @param request DescribeErrorLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeErrorLogRecordsResponse
 */
DescribeErrorLogRecordsResponse Client::describeErrorLogRecordsWithOptions(const DescribeErrorLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.filters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRole()) {
    body["Role"] = request.role();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeErrorLogRecords"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeErrorLogRecordsResponse>();
}

/**
 * @summary 查询实例错误日志
 *
 * @param request DescribeErrorLogRecordsRequest
 * @return DescribeErrorLogRecordsResponse
 */
DescribeErrorLogRecordsResponse Client::describeErrorLogRecords(const DescribeErrorLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeErrorLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the hot keys and the large keys in the memory in real time.
 *
 * @description This operation sorts list, hash, set, and zset keys based on the number of elements contained in these keys. The top three keys that contain the most elements are considered large keys. If the number of queries per second (QPS) of a key is greater than 3,000, the key is considered a hot key.
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * *   The version of Database Autonomy Service (DAS) SDK must be 1.0.2 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is available only for ApsaraDB for Redis instances that meet the following requirements:
 *     *   The instance is a Community Edition instance that uses a major version of 5.0 or later or a performance-enhanced instance of the Enhanced Edition (Tair).
 *     *   The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeHotBigKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHotBigKeysResponse
 */
DescribeHotBigKeysResponse Client::describeHotBigKeysWithOptions(const DescribeHotBigKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHotBigKeys"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHotBigKeysResponse>();
}

/**
 * @summary Queries the hot keys and the large keys in the memory in real time.
 *
 * @description This operation sorts list, hash, set, and zset keys based on the number of elements contained in these keys. The top three keys that contain the most elements are considered large keys. If the number of queries per second (QPS) of a key is greater than 3,000, the key is considered a hot key.
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * *   The version of Database Autonomy Service (DAS) SDK must be 1.0.2 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is available only for ApsaraDB for Redis instances that meet the following requirements:
 *     *   The instance is a Community Edition instance that uses a major version of 5.0 or later or a performance-enhanced instance of the Enhanced Edition (Tair).
 *     *   The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeHotBigKeysRequest
 * @return DescribeHotBigKeysResponse
 */
DescribeHotBigKeysResponse Client::describeHotBigKeys(const DescribeHotBigKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHotBigKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the hot keys of an ApsaraDB for Redis instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V1.0.2 or later.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to ApsaraDB for Redis instances that meet the following requirements:
 *     *   The ApsaraDB for Redis instance is a Community Edition instance that uses a major version of 4.0 or later or a performance-enhanced instance of the Enhanced Edition (Tair).
 *     *   The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeHotKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHotKeysResponse
 */
DescribeHotKeysResponse Client::describeHotKeysWithOptions(const DescribeHotKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHotKeys"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHotKeysResponse>();
}

/**
 * @summary Queries the hot keys of an ApsaraDB for Redis instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V1.0.2 or later.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to ApsaraDB for Redis instances that meet the following requirements:
 *     *   The ApsaraDB for Redis instance is a Community Edition instance that uses a major version of 4.0 or later or a performance-enhanced instance of the Enhanced Edition (Tair).
 *     *   The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeHotKeysRequest
 * @return DescribeHotKeysResponse
 */
DescribeHotKeysResponse Client::describeHotKeys(const DescribeHotKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHotKeysWithOptions(request, runtime);
}

/**
 * @summary Queries whether Database Autonomy Service (DAS) Enterprise Edition V1 or V2 is enabled for a database instance.
 *
 * @description *   For more information about the database instances that support DAS Enterprise Edition, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to DAS Enterprise Edition V1 and V2.
 * >  We recommend that you call the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation to query the DAS Enterprise Edition configurations of a database instance.
 *
 * @param request DescribeInstanceDasProRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDasProResponse
 */
DescribeInstanceDasProResponse Client::describeInstanceDasProWithOptions(const DescribeInstanceDasProRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceDasPro"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceDasProResponse>();
}

/**
 * @summary Queries whether Database Autonomy Service (DAS) Enterprise Edition V1 or V2 is enabled for a database instance.
 *
 * @description *   For more information about the database instances that support DAS Enterprise Edition, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to DAS Enterprise Edition V1 and V2.
 * >  We recommend that you call the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation to query the DAS Enterprise Edition configurations of a database instance.
 *
 * @param request DescribeInstanceDasProRequest
 * @return DescribeInstanceDasProResponse
 */
DescribeInstanceDasProResponse Client::describeInstanceDasPro(const DescribeInstanceDasProRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDasProWithOptions(request, runtime);
}

/**
 * @summary 获取执行计划
 *
 * @param request DescribeQueryExplainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQueryExplainResponse
 */
DescribeQueryExplainResponse Client::describeQueryExplainWithOptions(const DescribeQueryExplainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDbName()) {
    body["DbName"] = request.dbName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasSchema()) {
    body["Schema"] = request.schema();
  }

  if (!!request.hasSql()) {
    body["Sql"] = request.sql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeQueryExplain"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQueryExplainResponse>();
}

/**
 * @summary 获取执行计划
 *
 * @param request DescribeQueryExplainRequest
 * @return DescribeQueryExplainResponse
 */
DescribeQueryExplainResponse Client::describeQueryExplain(const DescribeQueryExplainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQueryExplainWithOptions(request, runtime);
}

/**
 * @summary 展示用户跨产品白名单模板具体信息
 *
 * @param request DescribeSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIPGroupResponse
 */
DescribeSecurityIPGroupResponse Client::describeSecurityIPGroupWithOptions(const DescribeSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionName()) {
    query["RegionName"] = request.regionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityIPGroup"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityIPGroupResponse>();
}

/**
 * @summary 展示用户跨产品白名单模板具体信息
 *
 * @param request DescribeSecurityIPGroupRequest
 * @return DescribeSecurityIPGroupResponse
 */
DescribeSecurityIPGroupResponse Client::describeSecurityIPGroup(const DescribeSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary 展示用户跨产品白名单模板与实例绑定信息
 *
 * @param request DescribeSecurityIPGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIPGroupRelationResponse
 */
DescribeSecurityIPGroupRelationResponse Client::describeSecurityIPGroupRelationWithOptions(const DescribeSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.regionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityIPGroupRelation"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityIPGroupRelationResponse>();
}

/**
 * @summary 展示用户跨产品白名单模板与实例绑定信息
 *
 * @param request DescribeSecurityIPGroupRelationRequest
 * @return DescribeSecurityIPGroupRelationResponse
 */
DescribeSecurityIPGroupRelationResponse Client::describeSecurityIPGroupRelation(const DescribeSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary DescribeSlowLogHistogramAsync
 *
 * @param request DescribeSlowLogHistogramAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogHistogramAsyncResponse
 */
DescribeSlowLogHistogramAsyncResponse Client::describeSlowLogHistogramAsyncWithOptions(const DescribeSlowLogHistogramAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.filters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogHistogramAsync"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogHistogramAsyncResponse>();
}

/**
 * @summary DescribeSlowLogHistogramAsync
 *
 * @param request DescribeSlowLogHistogramAsyncRequest
 * @return DescribeSlowLogHistogramAsyncResponse
 */
DescribeSlowLogHistogramAsyncResponse Client::describeSlowLogHistogramAsync(const DescribeSlowLogHistogramAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogHistogramAsyncWithOptions(request, runtime);
}

/**
 * @summary 查看慢日志明细接口
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.asc();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.filters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogRecordsResponse>();
}

/**
 * @summary 查看慢日志明细接口
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary 慢日志统计信息
 *
 * @param request DescribeSlowLogStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogStatisticResponse
 */
DescribeSlowLogStatisticResponse Client::describeSlowLogStatisticWithOptions(const DescribeSlowLogStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAsc()) {
    body["Asc"] = request.asc();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.filters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogStatistic"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogStatisticResponse>();
}

/**
 * @summary 慢日志统计信息
 *
 * @param request DescribeSlowLogStatisticRequest
 * @return DescribeSlowLogStatisticResponse
 */
DescribeSlowLogStatisticResponse Client::describeSlowLogStatistic(const DescribeSlowLogStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of Database Autonomy Service (DAS) Enterprise Edition that is enabled for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogConfigResponse
 */
DescribeSqlLogConfigResponse Client::describeSqlLogConfigWithOptions(const DescribeSqlLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeSqlLogConfig"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlLogConfigResponse>();
}

/**
 * @summary Queries the configurations of Database Autonomy Service (DAS) Enterprise Edition that is enabled for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogConfigRequest
 * @return DescribeSqlLogConfigResponse
 */
DescribeSqlLogConfigResponse Client::describeSqlLogConfig(const DescribeSqlLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the log details of a database instance for which Database Autonomy Service (DAS) Enterprise Edition is enabled.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogRecordsResponse
 */
DescribeSqlLogRecordsResponse Client::describeSqlLogRecordsWithOptions(const DescribeSqlLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeSqlLogRecords"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlLogRecordsResponse>();
}

/**
 * @summary Queries the log details of a database instance for which Database Autonomy Service (DAS) Enterprise Edition is enabled.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogRecordsRequest
 * @return DescribeSqlLogRecordsResponse
 */
DescribeSqlLogRecordsResponse Client::describeSqlLogRecords(const DescribeSqlLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of Database Autonomy Service (DAS) Enterprise Edition.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogStatisticResponse
 */
DescribeSqlLogStatisticResponse Client::describeSqlLogStatisticWithOptions(const DescribeSqlLogStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeSqlLogStatistic"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlLogStatisticResponse>();
}

/**
 * @summary Queries the statistics of Database Autonomy Service (DAS) Enterprise Edition.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogStatisticRequest
 * @return DescribeSqlLogStatisticResponse
 */
DescribeSqlLogStatisticResponse Client::describeSqlLogStatistic(const DescribeSqlLogStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an offline task in Database Autonomy Service (DAS) Enterprise Edition.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogTaskResponse
 */
DescribeSqlLogTaskResponse Client::describeSqlLogTaskWithOptions(const DescribeSqlLogTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeSqlLogTask"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlLogTaskResponse>();
}

/**
 * @summary Queries the details of an offline task in Database Autonomy Service (DAS) Enterprise Edition.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogTaskRequest
 * @return DescribeSqlLogTaskResponse
 */
DescribeSqlLogTaskResponse Client::describeSqlLogTask(const DescribeSqlLogTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the audit log tasks of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogTasksResponse
 */
DescribeSqlLogTasksResponse Client::describeSqlLogTasksWithOptions(const DescribeSqlLogTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.filters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeSqlLogTasks"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlLogTasksResponse>();
}

/**
 * @summary Queries the audit log tasks of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeSqlLogTasksRequest
 * @return DescribeSqlLogTasksResponse
 */
DescribeSqlLogTasksResponse Client::describeSqlLogTasks(const DescribeSqlLogTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the top 100 large keys over a period of time.
 *
 * @description The list, hash, set, and zset keys are sorted based on the number of elements in these keys. The top three keys that have the most elements are considered large keys.
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * *   The version of Database Autonomy Service (DAS) SDK must be 1.0.2 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is available only for an ApsaraDB for Redis instance of one of the following versions:
 *     *   The instance is ApsaraDB for Redis Community Edition instances that use a major version of 5.0 or later or a performance-enhanced instance of the ApsaraDB for Redis Enhanced Edition (Tair).
 *     *   The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeTopBigKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTopBigKeysResponse
 */
DescribeTopBigKeysResponse Client::describeTopBigKeysWithOptions(const DescribeTopBigKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTopBigKeys"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTopBigKeysResponse>();
}

/**
 * @summary Queries the top 100 large keys over a period of time.
 *
 * @description The list, hash, set, and zset keys are sorted based on the number of elements in these keys. The top three keys that have the most elements are considered large keys.
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * *   The version of Database Autonomy Service (DAS) SDK must be 1.0.2 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is available only for an ApsaraDB for Redis instance of one of the following versions:
 *     *   The instance is ApsaraDB for Redis Community Edition instances that use a major version of 5.0 or later or a performance-enhanced instance of the ApsaraDB for Redis Enhanced Edition (Tair).
 *     *   The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeTopBigKeysRequest
 * @return DescribeTopBigKeysResponse
 */
DescribeTopBigKeysResponse Client::describeTopBigKeys(const DescribeTopBigKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTopBigKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the top 100 hotkeys over a period of time.
 *
 * @description If the number of queries per second (QPS) of a key is greater than 3,000, the key is considered a hot key.
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * *   The version of Database Autonomy Service (DAS) SDK must be 1.0.2 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is available only for an ApsaraDB for Redis instance of one of the following versions:
 *     *   The instance is a Community Edition instance that uses a major version of 4.0 or later or a performance-enhanced instance of the Enhanced Edition (Tair).
 *     *   The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeTopHotKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTopHotKeysResponse
 */
DescribeTopHotKeysResponse Client::describeTopHotKeysWithOptions(const DescribeTopHotKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTopHotKeys"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTopHotKeysResponse>();
}

/**
 * @summary Queries the top 100 hotkeys over a period of time.
 *
 * @description If the number of queries per second (QPS) of a key is greater than 3,000, the key is considered a hot key.
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * *   The version of Database Autonomy Service (DAS) SDK must be 1.0.2 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is available only for an ApsaraDB for Redis instance of one of the following versions:
 *     *   The instance is a Community Edition instance that uses a major version of 4.0 or later or a performance-enhanced instance of the Enhanced Edition (Tair).
 *     *   The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeTopHotKeysRequest
 * @return DescribeTopHotKeysResponse
 */
DescribeTopHotKeysResponse Client::describeTopHotKeys(const DescribeTopHotKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTopHotKeysWithOptions(request, runtime);
}

/**
 * @summary Disables all throttling rules that are in effect.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request DisableAllSqlConcurrencyControlRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAllSqlConcurrencyControlRulesResponse
 */
DisableAllSqlConcurrencyControlRulesResponse Client::disableAllSqlConcurrencyControlRulesWithOptions(const DisableAllSqlConcurrencyControlRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableAllSqlConcurrencyControlRules"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAllSqlConcurrencyControlRulesResponse>();
}

/**
 * @summary Disables all throttling rules that are in effect.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request DisableAllSqlConcurrencyControlRulesRequest
 * @return DisableAllSqlConcurrencyControlRulesResponse
 */
DisableAllSqlConcurrencyControlRulesResponse Client::disableAllSqlConcurrencyControlRules(const DisableAllSqlConcurrencyControlRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAllSqlConcurrencyControlRulesWithOptions(request, runtime);
}

/**
 * @summary Disables the automatic tablespace fragment recycling feature for database instances at a time.
 *
 * @description If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 *
 * @param request DisableAutoResourceOptimizeRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAutoResourceOptimizeRulesResponse
 */
DisableAutoResourceOptimizeRulesResponse Client::disableAutoResourceOptimizeRulesWithOptions(const DisableAutoResourceOptimizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableAutoResourceOptimizeRules"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAutoResourceOptimizeRulesResponse>();
}

/**
 * @summary Disables the automatic tablespace fragment recycling feature for database instances at a time.
 *
 * @description If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 *
 * @param request DisableAutoResourceOptimizeRulesRequest
 * @return DisableAutoResourceOptimizeRulesResponse
 */
DisableAutoResourceOptimizeRulesResponse Client::disableAutoResourceOptimizeRules(const DisableAutoResourceOptimizeRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAutoResourceOptimizeRulesWithOptions(request, runtime);
}

/**
 * @summary Disables the automatic SQL throttling feature for multiple database instances at a time.
 *
 * @description If you use an SDK to call operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 *
 * @param request DisableAutoThrottleRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAutoThrottleRulesResponse
 */
DisableAutoThrottleRulesResponse Client::disableAutoThrottleRulesWithOptions(const DisableAutoThrottleRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableAutoThrottleRules"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAutoThrottleRulesResponse>();
}

/**
 * @summary Disables the automatic SQL throttling feature for multiple database instances at a time.
 *
 * @description If you use an SDK to call operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 *
 * @param request DisableAutoThrottleRulesRequest
 * @return DisableAutoThrottleRulesResponse
 */
DisableAutoThrottleRulesResponse Client::disableAutoThrottleRules(const DisableAutoThrottleRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAutoThrottleRulesWithOptions(request, runtime);
}

/**
 * @summary Deactivates Database Autonomy Service (DAS) Professional Edition.
 *
 * @description *   For more information about the database instances that support DAS Enterprise Edition, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to DAS Enterprise Edition V1.
 * >  We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to enable or disable DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request DisableDasProRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDasProResponse
 */
DisableDasProResponse Client::disableDasProWithOptions(const DisableDasProRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDasPro"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDasProResponse>();
}

/**
 * @summary Deactivates Database Autonomy Service (DAS) Professional Edition.
 *
 * @description *   For more information about the database instances that support DAS Enterprise Edition, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to DAS Enterprise Edition V1.
 * >  We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to enable or disable DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request DisableDasProRequest
 * @return DisableDasProResponse
 */
DisableDasProResponse Client::disableDasPro(const DisableDasProRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDasProWithOptions(request, runtime);
}

/**
 * @summary Disables the auto scaling feature for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to ApsaraDB for Redis instances.
 *
 * @param request DisableInstanceDasConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInstanceDasConfigResponse
 */
DisableInstanceDasConfigResponse Client::disableInstanceDasConfigWithOptions(const DisableInstanceDasConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScaleType()) {
    query["ScaleType"] = request.scaleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableInstanceDasConfig"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableInstanceDasConfigResponse>();
}

/**
 * @summary Disables the auto scaling feature for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to ApsaraDB for Redis instances.
 *
 * @param request DisableInstanceDasConfigRequest
 * @return DisableInstanceDasConfigResponse
 */
DisableInstanceDasConfigResponse Client::disableInstanceDasConfig(const DisableInstanceDasConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInstanceDasConfigWithOptions(request, runtime);
}

/**
 * @summary Disables a throttling rule.
 *
 * @description This operation is applicable to the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request DisableSqlConcurrencyControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSqlConcurrencyControlResponse
 */
DisableSqlConcurrencyControlResponse Client::disableSqlConcurrencyControlWithOptions(const DisableSqlConcurrencyControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasItemId()) {
    query["ItemId"] = request.itemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSqlConcurrencyControl"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSqlConcurrencyControlResponse>();
}

/**
 * @summary Disables a throttling rule.
 *
 * @description This operation is applicable to the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request DisableSqlConcurrencyControlRequest
 * @return DisableSqlConcurrencyControlResponse
 */
DisableSqlConcurrencyControlResponse Client::disableSqlConcurrencyControl(const DisableSqlConcurrencyControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSqlConcurrencyControlWithOptions(request, runtime);
}

/**
 * @summary Activates Database Autonomy Service (DAS) Professional Edition.
 *
 * @description *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to DAS Enterprise Edition V1.
 * >  We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to activate or deactivate DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request EnableDasProRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDasProResponse
 */
EnableDasProResponse Client::enableDasProWithOptions(const EnableDasProRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSqlRetention()) {
    query["SqlRetention"] = request.sqlRetention();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDasPro"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDasProResponse>();
}

/**
 * @summary Activates Database Autonomy Service (DAS) Professional Edition.
 *
 * @description *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to DAS Enterprise Edition V1.
 * >  We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to activate or deactivate DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request EnableDasProRequest
 * @return EnableDasProResponse
 */
EnableDasProResponse Client::enableDasPro(const EnableDasProRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDasProWithOptions(request, runtime);
}

/**
 * @summary Enables SQL throttling to control the numbers of database access requests and concurrent SQL statements.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request EnableSqlConcurrencyControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSqlConcurrencyControlResponse
 */
EnableSqlConcurrencyControlResponse Client::enableSqlConcurrencyControlWithOptions(const EnableSqlConcurrencyControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrencyControlTime()) {
    query["ConcurrencyControlTime"] = request.concurrencyControlTime();
  }

  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxConcurrency()) {
    query["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasSqlKeywords()) {
    query["SqlKeywords"] = request.sqlKeywords();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.sqlType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSqlConcurrencyControl"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSqlConcurrencyControlResponse>();
}

/**
 * @summary Enables SQL throttling to control the numbers of database access requests and concurrent SQL statements.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request EnableSqlConcurrencyControlRequest
 * @return EnableSqlConcurrencyControlResponse
 */
EnableSqlConcurrencyControlResponse Client::enableSqlConcurrencyControl(const EnableSqlConcurrencyControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSqlConcurrencyControlWithOptions(request, runtime);
}

/**
 * @summary Asynchronously queries the IDs of SQL statements that generate a MySQL error code in the SQL Explorer results of a database instance.
 *
 * @description >  GetAsyncErrorRequestListByCode is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of the **isFinish** parameter is **false** in the response, wait for 1 second and then send a request again. If the value of the **isFinish** parameter is **true**, the complete results are returned.
 * *   This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Enable and manage DAS Economy Edition and DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   When you call this operation, the value of the SqlId parameter changes due to the optimization of the SQL template algorithm starting from September 1, 2024. For more information, see [[Notice\\] Optimization of the SQL template algorithm](~~2845725~~).
 *
 * @param request GetAsyncErrorRequestListByCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncErrorRequestListByCodeResponse
 */
GetAsyncErrorRequestListByCodeResponse Client::getAsyncErrorRequestListByCodeWithOptions(const GetAsyncErrorRequestListByCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnd()) {
    query["End"] = request.end();
  }

  if (!!request.hasErrorCode()) {
    query["ErrorCode"] = request.errorCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncErrorRequestListByCode"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncErrorRequestListByCodeResponse>();
}

/**
 * @summary Asynchronously queries the IDs of SQL statements that generate a MySQL error code in the SQL Explorer results of a database instance.
 *
 * @description >  GetAsyncErrorRequestListByCode is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of the **isFinish** parameter is **false** in the response, wait for 1 second and then send a request again. If the value of the **isFinish** parameter is **true**, the complete results are returned.
 * *   This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Enable and manage DAS Economy Edition and DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   When you call this operation, the value of the SqlId parameter changes due to the optimization of the SQL template algorithm starting from September 1, 2024. For more information, see [[Notice\\] Optimization of the SQL template algorithm](~~2845725~~).
 *
 * @param request GetAsyncErrorRequestListByCodeRequest
 * @return GetAsyncErrorRequestListByCodeResponse
 */
GetAsyncErrorRequestListByCodeResponse Client::getAsyncErrorRequestListByCode(const GetAsyncErrorRequestListByCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncErrorRequestListByCodeWithOptions(request, runtime);
}

/**
 * @summary Asynchronously queries the MySQL error codes in SQL Explorer data and the number of SQL queries corresponding to each error code.
 *
 * @description >  GetAsyncErrorRequestStatByCode is an asynchronous operation After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * *   This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetAsyncErrorRequestStatByCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncErrorRequestStatByCodeResponse
 */
GetAsyncErrorRequestStatByCodeResponse Client::getAsyncErrorRequestStatByCodeWithOptions(const GetAsyncErrorRequestStatByCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.end();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncErrorRequestStatByCode"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncErrorRequestStatByCodeResponse>();
}

/**
 * @summary Asynchronously queries the MySQL error codes in SQL Explorer data and the number of SQL queries corresponding to each error code.
 *
 * @description >  GetAsyncErrorRequestStatByCode is an asynchronous operation After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * *   This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetAsyncErrorRequestStatByCodeRequest
 * @return GetAsyncErrorRequestStatByCodeResponse
 */
GetAsyncErrorRequestStatByCodeResponse Client::getAsyncErrorRequestStatByCode(const GetAsyncErrorRequestStatByCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncErrorRequestStatByCodeWithOptions(request, runtime);
}

/**
 * @summary Asynchronously obtains the number of failed executions of SQL templates based on SQL Explorer data.
 *
 * @description >  GetAsyncErrorRequestStatResult is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * *   This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetAsyncErrorRequestStatResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncErrorRequestStatResultResponse
 */
GetAsyncErrorRequestStatResultResponse Client::getAsyncErrorRequestStatResultWithOptions(const GetAsyncErrorRequestStatResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.end();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSqlIdList()) {
    query["SqlIdList"] = request.sqlIdList();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsyncErrorRequestStatResult"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsyncErrorRequestStatResultResponse>();
}

/**
 * @summary Asynchronously obtains the number of failed executions of SQL templates based on SQL Explorer data.
 *
 * @description >  GetAsyncErrorRequestStatResult is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * *   This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetAsyncErrorRequestStatResultRequest
 * @return GetAsyncErrorRequestStatResultResponse
 */
GetAsyncErrorRequestStatResultResponse Client::getAsyncErrorRequestStatResult(const GetAsyncErrorRequestStatResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncErrorRequestStatResultWithOptions(request, runtime);
}

/**
 * @summary Queries the usage of auto-increment table IDs.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call DAS, you must set the region to cn-shanghai.
 *
 * @param request GetAutoIncrementUsageStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoIncrementUsageStatisticResponse
 */
GetAutoIncrementUsageStatisticResponse Client::getAutoIncrementUsageStatisticWithOptions(const GetAutoIncrementUsageStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbNames()) {
    query["DbNames"] = request.dbNames();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRatioFilter()) {
    query["RatioFilter"] = request.ratioFilter();
  }

  if (!!request.hasRealTime()) {
    query["RealTime"] = request.realTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoIncrementUsageStatistic"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoIncrementUsageStatisticResponse>();
}

/**
 * @summary Queries the usage of auto-increment table IDs.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call DAS, you must set the region to cn-shanghai.
 *
 * @param request GetAutoIncrementUsageStatisticRequest
 * @return GetAutoIncrementUsageStatisticResponse
 */
GetAutoIncrementUsageStatisticResponse Client::getAutoIncrementUsageStatistic(const GetAutoIncrementUsageStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoIncrementUsageStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the automatic fragment recycling rules of database instances.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   The database instance is an ApsaraDB RDS for MySQL instance of High-availability Edition.
 * *   The database instance has four or more cores, and **innodb_file_per_table** is set to **ON**.
 *
 * @param request GetAutoResourceOptimizeRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoResourceOptimizeRulesResponse
 */
GetAutoResourceOptimizeRulesResponse Client::getAutoResourceOptimizeRulesWithOptions(const GetAutoResourceOptimizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoResourceOptimizeRules"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoResourceOptimizeRulesResponse>();
}

/**
 * @summary Queries the automatic fragment recycling rules of database instances.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   The database instance is an ApsaraDB RDS for MySQL instance of High-availability Edition.
 * *   The database instance has four or more cores, and **innodb_file_per_table** is set to **ON**.
 *
 * @param request GetAutoResourceOptimizeRulesRequest
 * @return GetAutoResourceOptimizeRulesResponse
 */
GetAutoResourceOptimizeRulesResponse Client::getAutoResourceOptimizeRules(const GetAutoResourceOptimizeRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoResourceOptimizeRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the automatic SQL throttling rules of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   The database instance that you want to manage must be of one of the following types:
 *     *   ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *     *   PolarDB for MySQL Cluster Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *
 * @param request GetAutoThrottleRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoThrottleRulesResponse
 */
GetAutoThrottleRulesResponse Client::getAutoThrottleRulesWithOptions(const GetAutoThrottleRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoThrottleRules"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoThrottleRulesResponse>();
}

/**
 * @summary Queries the automatic SQL throttling rules of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   The database instance that you want to manage must be of one of the following types:
 *     *   ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *     *   PolarDB for MySQL Cluster Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *
 * @param request GetAutoThrottleRulesRequest
 * @return GetAutoThrottleRulesResponse
 */
GetAutoThrottleRulesResponse Client::getAutoThrottleRules(const GetAutoThrottleRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoThrottleRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of notification events of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   After your instance is connected to DAS, notification events such as snapshot capture are triggered if DAS detects changes to database monitoring metrics during anomaly detection.
 * >  You can query the details of notification events only if the autonomy center is enabled. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 *
 * @param request GetAutonomousNotifyEventContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutonomousNotifyEventContentResponse
 */
GetAutonomousNotifyEventContentResponse Client::getAutonomousNotifyEventContentWithOptions(const GetAutonomousNotifyEventContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSpanId()) {
    query["SpanId"] = request.spanId();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.context();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutonomousNotifyEventContent"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutonomousNotifyEventContentResponse>();
}

/**
 * @summary Queries the details of notification events of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   After your instance is connected to DAS, notification events such as snapshot capture are triggered if DAS detects changes to database monitoring metrics during anomaly detection.
 * >  You can query the details of notification events only if the autonomy center is enabled. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 *
 * @param request GetAutonomousNotifyEventContentRequest
 * @return GetAutonomousNotifyEventContentResponse
 */
GetAutonomousNotifyEventContentResponse Client::getAutonomousNotifyEventContent(const GetAutonomousNotifyEventContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutonomousNotifyEventContentWithOptions(request, runtime);
}

/**
 * @summary Queries the notification events of one or more urgency levels within a period.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   After your instance is connected to DAS, notification events such as snapshot capture are triggered if DAS detects changes to database monitoring metrics during anomaly detection.
 * >  You can query the details of notification events only if the autonomy center is enabled. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 *
 * @param request GetAutonomousNotifyEventsInRangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutonomousNotifyEventsInRangeResponse
 */
GetAutonomousNotifyEventsInRangeResponse Client::getAutonomousNotifyEventsInRangeWithOptions(const GetAutonomousNotifyEventsInRangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventContext()) {
    query["EventContext"] = request.eventContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasMinLevel()) {
    query["MinLevel"] = request.minLevel();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageOffset()) {
    query["PageOffset"] = request.pageOffset();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.context();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutonomousNotifyEventsInRange"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutonomousNotifyEventsInRangeResponse>();
}

/**
 * @summary Queries the notification events of one or more urgency levels within a period.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   After your instance is connected to DAS, notification events such as snapshot capture are triggered if DAS detects changes to database monitoring metrics during anomaly detection.
 * >  You can query the details of notification events only if the autonomy center is enabled. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 *
 * @param request GetAutonomousNotifyEventsInRangeRequest
 * @return GetAutonomousNotifyEventsInRangeResponse
 */
GetAutonomousNotifyEventsInRangeResponse Client::getAutonomousNotifyEventsInRange(const GetAutonomousNotifyEventsInRangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutonomousNotifyEventsInRangeWithOptions(request, runtime);
}

/**
 * @summary Queries the blocking data of an ApsaraDB RDS for SQL Server instance.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetBlockingDetailListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBlockingDetailListResponse
 */
GetBlockingDetailListResponse Client::getBlockingDetailListWithOptions(const GetBlockingDetailListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbNameList()) {
    query["DbNameList"] = request.dbNameList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryHash()) {
    query["QueryHash"] = request.queryHash();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBlockingDetailList"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBlockingDetailListResponse>();
}

/**
 * @summary Queries the blocking data of an ApsaraDB RDS for SQL Server instance.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetBlockingDetailListRequest
 * @return GetBlockingDetailListResponse
 */
GetBlockingDetailListResponse Client::getBlockingDetailList(const GetBlockingDetailListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBlockingDetailListWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnosis of network connectivity when a user accesses a specific database instance by specifying an IP address.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   The database instance that you want to manage is connected to DAS.
 *
 * @param request GetDBInstanceConnectivityDiagnosisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDBInstanceConnectivityDiagnosisResponse
 */
GetDBInstanceConnectivityDiagnosisResponse Client::getDBInstanceConnectivityDiagnosisWithOptions(const GetDBInstanceConnectivityDiagnosisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.srcIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDBInstanceConnectivityDiagnosis"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDBInstanceConnectivityDiagnosisResponse>();
}

/**
 * @summary Queries the diagnosis of network connectivity when a user accesses a specific database instance by specifying an IP address.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   The database instance that you want to manage is connected to DAS.
 *
 * @param request GetDBInstanceConnectivityDiagnosisRequest
 * @return GetDBInstanceConnectivityDiagnosisResponse
 */
GetDBInstanceConnectivityDiagnosisResponse Client::getDBInstanceConnectivityDiagnosis(const GetDBInstanceConnectivityDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDBInstanceConnectivityDiagnosisWithOptions(request, runtime);
}

/**
 * @summary DAS大模型能力异步逻辑接口
 *
 * @param request GetDasAgentSSERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDasAgentSSEResponse
 */
FutrueGenerator<GetDasAgentSSEResponse> Client::getDasAgentSSEWithSSE(const GetDasAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDasAgentSSE"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<GetDasAgentSSEResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary DAS大模型能力异步逻辑接口
 *
 * @param request GetDasAgentSSERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDasAgentSSEResponse
 */
GetDasAgentSSEResponse Client::getDasAgentSSEWithOptions(const GetDasAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDasAgentSSE"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDasAgentSSEResponse>();
}

/**
 * @summary DAS大模型能力异步逻辑接口
 *
 * @param request GetDasAgentSSERequest
 * @return GetDasAgentSSEResponse
 */
GetDasAgentSSEResponse Client::getDasAgentSSE(const GetDasAgentSSERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDasAgentSSEWithOptions(request, runtime);
}

/**
 * @summary Queries the storage usage of a database instance for which Database Autonomy Service (DAS) Enterprise Edition V1 or V2 is enabled.
 *
 * @description *   For information about the database instances that support this operation, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to DAS Enterprise Edition V1 and V2.
 * >  We recommend that you call the [DescribeSqlLogStatistic](https://help.aliyun.com/document_detail/2778836.html) operation to query the data statistics of a database instance for which DAS Enterprise Edition is enabled.
 *
 * @param request GetDasProServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDasProServiceUsageResponse
 */
GetDasProServiceUsageResponse Client::getDasProServiceUsageWithOptions(const GetDasProServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDasProServiceUsage"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDasProServiceUsageResponse>();
}

/**
 * @summary Queries the storage usage of a database instance for which Database Autonomy Service (DAS) Enterprise Edition V1 or V2 is enabled.
 *
 * @description *   For information about the database instances that support this operation, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable only to DAS Enterprise Edition V1 and V2.
 * >  We recommend that you call the [DescribeSqlLogStatistic](https://help.aliyun.com/document_detail/2778836.html) operation to query the data statistics of a database instance for which DAS Enterprise Edition is enabled.
 *
 * @param request GetDasProServiceUsageRequest
 * @return GetDasProServiceUsageResponse
 */
GetDasProServiceUsageResponse Client::getDasProServiceUsage(const GetDasProServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDasProServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the hot data of audit logs.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable to PolarDB for MySQL, ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and ApsaraDB RDS for SQL Server.
 * >  The beginning of the time range to query can be up to seven days earlier than the current time. The interval between the start time and the end time cannot exceed one day. This operation can return a maximum of 10,000 entries.
 *
 * @param request GetDasSQLLogHotDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDasSQLLogHotDataResponse
 */
GetDasSQLLogHotDataResponse Client::getDasSQLLogHotDataWithOptions(const GetDasSQLLogHotDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasChildDBInstanceIDs()) {
    body["ChildDBInstanceIDs"] = request.childDBInstanceIDs();
  }

  if (!!request.hasDBName()) {
    body["DBName"] = request.DBName();
  }

  if (!!request.hasEnd()) {
    body["End"] = request.end();
  }

  if (!!request.hasFail()) {
    body["Fail"] = request.fail();
  }

  if (!!request.hasHostAddress()) {
    body["HostAddress"] = request.hostAddress();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogicalOperator()) {
    body["LogicalOperator"] = request.logicalOperator();
  }

  if (!!request.hasMaxLatancy()) {
    body["MaxLatancy"] = request.maxLatancy();
  }

  if (!!request.hasMaxRecordsPerPage()) {
    body["MaxRecordsPerPage"] = request.maxRecordsPerPage();
  }

  if (!!request.hasMaxRows()) {
    body["MaxRows"] = request.maxRows();
  }

  if (!!request.hasMaxScanRows()) {
    body["MaxScanRows"] = request.maxScanRows();
  }

  if (!!request.hasMaxSpillCnt()) {
    body["MaxSpillCnt"] = request.maxSpillCnt();
  }

  if (!!request.hasMinLatancy()) {
    body["MinLatancy"] = request.minLatancy();
  }

  if (!!request.hasMinRows()) {
    body["MinRows"] = request.minRows();
  }

  if (!!request.hasMinScanRows()) {
    body["MinScanRows"] = request.minScanRows();
  }

  if (!!request.hasMinSpillCnt()) {
    body["MinSpillCnt"] = request.minSpillCnt();
  }

  if (!!request.hasPageNumbers()) {
    body["PageNumbers"] = request.pageNumbers();
  }

  if (!!request.hasQueryKeyword()) {
    body["QueryKeyword"] = request.queryKeyword();
  }

  if (!!request.hasRole()) {
    body["Role"] = request.role();
  }

  if (!!request.hasSortKey()) {
    body["SortKey"] = request.sortKey();
  }

  if (!!request.hasSortMethod()) {
    body["SortMethod"] = request.sortMethod();
  }

  if (!!request.hasSqlType()) {
    body["SqlType"] = request.sqlType();
  }

  if (!!request.hasStart()) {
    body["Start"] = request.start();
  }

  if (!!request.hasState()) {
    body["State"] = request.state();
  }

  if (!!request.hasThreadID()) {
    body["ThreadID"] = request.threadID();
  }

  if (!!request.hasTraceId()) {
    body["TraceId"] = request.traceId();
  }

  if (!!request.hasTransactionId()) {
    body["TransactionId"] = request.transactionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDasSQLLogHotData"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDasSQLLogHotDataResponse>();
}

/**
 * @summary Queries the hot data of audit logs.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation is applicable to PolarDB for MySQL, ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and ApsaraDB RDS for SQL Server.
 * >  The beginning of the time range to query can be up to seven days earlier than the current time. The interval between the start time and the end time cannot exceed one day. This operation can return a maximum of 10,000 entries.
 *
 * @param request GetDasSQLLogHotDataRequest
 * @return GetDasSQLLogHotDataResponse
 */
GetDasSQLLogHotDataResponse Client::getDasSQLLogHotData(const GetDasSQLLogHotDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDasSQLLogHotDataWithOptions(request, runtime);
}

/**
 * @summary 查询单个死锁详情
 *
 * @param request GetDeadLockDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeadLockDetailResponse
 */
GetDeadLockDetailResponse Client::getDeadLockDetailWithOptions(const GetDeadLockDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasTextId()) {
    query["TextId"] = request.textId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeadLockDetail"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeadLockDetailResponse>();
}

/**
 * @summary 查询单个死锁详情
 *
 * @param request GetDeadLockDetailRequest
 * @return GetDeadLockDetailResponse
 */
GetDeadLockDetailResponse Client::getDeadLockDetail(const GetDeadLockDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeadLockDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the deadlock details of an ApsaraDB RDS for SQL Server instance.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetDeadLockDetailListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeadLockDetailListResponse
 */
GetDeadLockDetailListResponse Client::getDeadLockDetailListWithOptions(const GetDeadLockDetailListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbNameList()) {
    query["DbNameList"] = request.dbNameList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeadLockDetailList"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeadLockDetailListResponse>();
}

/**
 * @summary Queries the deadlock details of an ApsaraDB RDS for SQL Server instance.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetDeadLockDetailListRequest
 * @return GetDeadLockDetailListResponse
 */
GetDeadLockDetailListResponse Client::getDeadLockDetailList(const GetDeadLockDetailListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeadLockDetailListWithOptions(request, runtime);
}

/**
 * @summary 获取历史死锁记录
 *
 * @param request GetDeadLockHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeadLockHistoryResponse
 */
GetDeadLockHistoryResponse Client::getDeadLockHistoryWithOptions(const GetDeadLockHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeadLockHistory"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeadLockHistoryResponse>();
}

/**
 * @summary 获取历史死锁记录
 *
 * @param request GetDeadLockHistoryRequest
 * @return GetDeadLockHistoryResponse
 */
GetDeadLockHistoryResponse Client::getDeadLockHistory(const GetDeadLockHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeadLockHistoryWithOptions(request, runtime);
}

/**
 * @summary 查询时间范围内基于错误日志分析的死锁数量
 *
 * @param request GetDeadlockHistogramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeadlockHistogramResponse
 */
GetDeadlockHistogramResponse Client::getDeadlockHistogramWithOptions(const GetDeadlockHistogramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDeadlockHistogram"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeadlockHistogramResponse>();
}

/**
 * @summary 查询时间范围内基于错误日志分析的死锁数量
 *
 * @param request GetDeadlockHistogramRequest
 * @return GetDeadlockHistogramResponse
 */
GetDeadlockHistogramResponse Client::getDeadlockHistogram(const GetDeadlockHistogramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeadlockHistogramWithOptions(request, runtime);
}

/**
 * @param request GetEndpointSwitchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEndpointSwitchTaskResponse
 */
GetEndpointSwitchTaskResponse Client::getEndpointSwitchTaskWithOptions(const GetEndpointSwitchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.context();
  }

  if (!!request.hasAccessKey()) {
    query["accessKey"] = request.accessKey();
  }

  if (!!request.hasSignature()) {
    query["signature"] = request.signature();
  }

  if (!!request.hasSkipAuth()) {
    query["skipAuth"] = request.skipAuth();
  }

  if (!!request.hasTimestamp()) {
    query["timestamp"] = request.timestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEndpointSwitchTask"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEndpointSwitchTaskResponse>();
}

/**
 * @param request GetEndpointSwitchTaskRequest
 * @return GetEndpointSwitchTaskResponse
 */
GetEndpointSwitchTaskResponse Client::getEndpointSwitchTask(const GetEndpointSwitchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEndpointSwitchTaskWithOptions(request, runtime);
}

/**
 * @summary Asynchronously queries information about failed SQL queries in SQL Explorer data. You can query up to 20 failed SQL queries within the specific time range.
 *
 * @description >  GetErrorRequestSample is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * *   This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetErrorRequestSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErrorRequestSampleResponse
 */
GetErrorRequestSampleResponse Client::getErrorRequestSampleWithOptions(const GetErrorRequestSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.end();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.sqlId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetErrorRequestSample"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErrorRequestSampleResponse>();
}

/**
 * @summary Asynchronously queries information about failed SQL queries in SQL Explorer data. You can query up to 20 failed SQL queries within the specific time range.
 *
 * @description >  GetErrorRequestSample is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * *   This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetErrorRequestSampleRequest
 * @return GetErrorRequestSampleResponse
 */
GetErrorRequestSampleResponse Client::getErrorRequestSample(const GetErrorRequestSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getErrorRequestSampleWithOptions(request, runtime);
}

/**
 * @summary Queries the event subscription settings of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   The database instance that you want to manage is connected to DAS.
 *
 * @param request GetEventSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventSubscriptionResponse
 */
GetEventSubscriptionResponse Client::getEventSubscriptionWithOptions(const GetEventSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEventSubscription"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEventSubscriptionResponse>();
}

/**
 * @summary Queries the event subscription settings of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   The database instance that you want to manage is connected to DAS.
 *
 * @param request GetEventSubscriptionRequest
 * @return GetEventSubscriptionResponse
 */
GetEventSubscriptionResponse Client::getEventSubscription(const GetEventSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEventSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Collects the full request statistics in the SQL Explorer results of a database instance by access source.
 *
 * @description The SQL Explorer feature allows you to check the health status of SQL statements and troubleshoot performance issues. For more information, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * *   For more information about database instances that support this feature, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 *
 * @param request GetFullRequestOriginStatByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFullRequestOriginStatByInstanceIdResponse
 */
GetFullRequestOriginStatByInstanceIdResponse Client::getFullRequestOriginStatByInstanceIdWithOptions(const GetFullRequestOriginStatByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.asc();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.end();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.sqlType();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.start();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFullRequestOriginStatByInstanceId"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFullRequestOriginStatByInstanceIdResponse>();
}

/**
 * @summary Collects the full request statistics in the SQL Explorer results of a database instance by access source.
 *
 * @description The SQL Explorer feature allows you to check the health status of SQL statements and troubleshoot performance issues. For more information, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * *   For more information about database instances that support this feature, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 *
 * @param request GetFullRequestOriginStatByInstanceIdRequest
 * @return GetFullRequestOriginStatByInstanceIdResponse
 */
GetFullRequestOriginStatByInstanceIdResponse Client::getFullRequestOriginStatByInstanceId(const GetFullRequestOriginStatByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFullRequestOriginStatByInstanceIdWithOptions(request, runtime);
}

/**
 * @summary Queries sample SQL statements in the SQL Explorer data of a database instance by SQL ID. You can query up to 20 sample SQL statements.
 *
 * @description The SQL Explorer feature allows you to check the health status of SQL statements and troubleshoot performance issues. For more information, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * *   For more information about the database engines that support SQL Explorer, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetFullRequestSampleByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFullRequestSampleByInstanceIdResponse
 */
GetFullRequestSampleByInstanceIdResponse Client::getFullRequestSampleByInstanceIdWithOptions(const GetFullRequestSampleByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  json body = {};
  if (!!request.hasEnd()) {
    body["End"] = request.end();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSqlId()) {
    body["SqlId"] = request.sqlId();
  }

  if (!!request.hasStart()) {
    body["Start"] = request.start();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFullRequestSampleByInstanceId"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFullRequestSampleByInstanceIdResponse>();
}

/**
 * @summary Queries sample SQL statements in the SQL Explorer data of a database instance by SQL ID. You can query up to 20 sample SQL statements.
 *
 * @description The SQL Explorer feature allows you to check the health status of SQL statements and troubleshoot performance issues. For more information, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * *   For more information about the database engines that support SQL Explorer, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetFullRequestSampleByInstanceIdRequest
 * @return GetFullRequestSampleByInstanceIdResponse
 */
GetFullRequestSampleByInstanceIdResponse Client::getFullRequestSampleByInstanceId(const GetFullRequestSampleByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFullRequestSampleByInstanceIdWithOptions(request, runtime);
}

/**
 * @summary Asynchronously collects the full request statistics in the SQL Explorer results of a database instance by SQL ID.
 *
 * @description >  GetFullRequestStatResultByInstanceId is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of the isFinish parameter is **false** in the response, wait for 1 second and then send a request again. If the value of the isFinish parameter is **true**, the complete results are returned.
 * The SQL Explorer feature allows you to check the health status of SQL statements and troubleshoot performance issues. For more information, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * *   For more information about database instances that support this feature, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   When you call this operation, the value of the SqlId parameter changes due to the optimization of the SQL template algorithm starting from September 1, 2024. For more information, see [[Notice\\] Optimization of the SQL template algorithm](~~2845725~~).
 *
 * @param request GetFullRequestStatResultByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFullRequestStatResultByInstanceIdResponse
 */
GetFullRequestStatResultByInstanceIdResponse Client::getFullRequestStatResultByInstanceIdWithOptions(const GetFullRequestStatResultByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.asc();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.end();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOriginHost()) {
    query["OriginHost"] = request.originHost();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.sqlId();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.sqlType();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.start();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFullRequestStatResultByInstanceId"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFullRequestStatResultByInstanceIdResponse>();
}

/**
 * @summary Asynchronously collects the full request statistics in the SQL Explorer results of a database instance by SQL ID.
 *
 * @description >  GetFullRequestStatResultByInstanceId is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of the isFinish parameter is **false** in the response, wait for 1 second and then send a request again. If the value of the isFinish parameter is **true**, the complete results are returned.
 * The SQL Explorer feature allows you to check the health status of SQL statements and troubleshoot performance issues. For more information, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * *   For more information about database instances that support this feature, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * *   If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   When you call this operation, the value of the SqlId parameter changes due to the optimization of the SQL template algorithm starting from September 1, 2024. For more information, see [[Notice\\] Optimization of the SQL template algorithm](~~2845725~~).
 *
 * @param request GetFullRequestStatResultByInstanceIdRequest
 * @return GetFullRequestStatResultByInstanceIdResponse
 */
GetFullRequestStatResultByInstanceIdResponse Client::getFullRequestStatResultByInstanceId(const GetFullRequestStatResultByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFullRequestStatResultByInstanceIdWithOptions(request, runtime);
}

/**
 * @param request GetHDMAliyunResourceSyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHDMAliyunResourceSyncResultResponse
 */
GetHDMAliyunResourceSyncResultResponse Client::getHDMAliyunResourceSyncResultWithOptions(const GetHDMAliyunResourceSyncResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.context();
  }

  if (!!request.hasAccessKey()) {
    query["accessKey"] = request.accessKey();
  }

  if (!!request.hasSignature()) {
    query["signature"] = request.signature();
  }

  if (!!request.hasSkipAuth()) {
    query["skipAuth"] = request.skipAuth();
  }

  if (!!request.hasTimestamp()) {
    query["timestamp"] = request.timestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHDMAliyunResourceSyncResult"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHDMAliyunResourceSyncResultResponse>();
}

/**
 * @param request GetHDMAliyunResourceSyncResultRequest
 * @return GetHDMAliyunResourceSyncResultResponse
 */
GetHDMAliyunResourceSyncResultResponse Client::getHDMAliyunResourceSyncResult(const GetHDMAliyunResourceSyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHDMAliyunResourceSyncResultWithOptions(request, runtime);
}

/**
 * @param request GetHDMLastAliyunResourceSyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHDMLastAliyunResourceSyncResultResponse
 */
GetHDMLastAliyunResourceSyncResultResponse Client::getHDMLastAliyunResourceSyncResultWithOptions(const GetHDMLastAliyunResourceSyncResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.context();
  }

  if (!!request.hasAccessKey()) {
    query["accessKey"] = request.accessKey();
  }

  if (!!request.hasSignature()) {
    query["signature"] = request.signature();
  }

  if (!!request.hasSkipAuth()) {
    query["skipAuth"] = request.skipAuth();
  }

  if (!!request.hasTimestamp()) {
    query["timestamp"] = request.timestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHDMLastAliyunResourceSyncResult"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHDMLastAliyunResourceSyncResultResponse>();
}

/**
 * @param request GetHDMLastAliyunResourceSyncResultRequest
 * @return GetHDMLastAliyunResourceSyncResultResponse
 */
GetHDMLastAliyunResourceSyncResultResponse Client::getHDMLastAliyunResourceSyncResult(const GetHDMLastAliyunResourceSyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHDMLastAliyunResourceSyncResultWithOptions(request, runtime);
}

/**
 * @summary 获取实例组日报详情
 *
 * @param request GetInstanceGroupInspectReportDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceGroupInspectReportDetailResponse
 */
GetInstanceGroupInspectReportDetailResponse Client::getInstanceGroupInspectReportDetailWithOptions(const GetInstanceGroupInspectReportDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReportId()) {
    body["ReportId"] = request.reportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceGroupInspectReportDetail"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceGroupInspectReportDetailResponse>();
}

/**
 * @summary 获取实例组日报详情
 *
 * @param request GetInstanceGroupInspectReportDetailRequest
 * @return GetInstanceGroupInspectReportDetailResponse
 */
GetInstanceGroupInspectReportDetailResponse Client::getInstanceGroupInspectReportDetail(const GetInstanceGroupInspectReportDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceGroupInspectReportDetailWithOptions(request, runtime);
}

/**
 * @summary 查询实例组的报告信息
 *
 * @param request GetInstanceGroupInspectReportListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceGroupInspectReportListResponse
 */
GetInstanceGroupInspectReportListResponse Client::getInstanceGroupInspectReportListWithOptions(const GetInstanceGroupInspectReportListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInstanceGroupInspectReportList"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceGroupInspectReportListResponse>();
}

/**
 * @summary 查询实例组的报告信息
 *
 * @param request GetInstanceGroupInspectReportListRequest
 * @return GetInstanceGroupInspectReportListResponse
 */
GetInstanceGroupInspectReportListResponse Client::getInstanceGroupInspectReportList(const GetInstanceGroupInspectReportListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceGroupInspectReportListWithOptions(request, runtime);
}

/**
 * @summary Queries the result of an inspection that is performed on a database instance by using the inspection and scoring feature.
 *
 * @description Database Autonomy Service (DAS) provides the inspection and scoring feature. This feature allows you to inspect and score the health status of your instance on a regular basis. This helps you obtain information about the status of your databases. For more information, see [Inspection and scoring](https://help.aliyun.com/document_detail/205659.html).
 * Before you call this operation, take note of the following items:
 * *   This operation is applicable only to ApsaraDB RDS for MySQL databases, self-managed MySQL databases hosted on Elastic Compute Service (ECS) instances, self-managed MySQL databases in data centers, ApsaraDB for Redis databases, and PolarDB for MySQL databases.
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * *   The version of DAS SDK must be V1.0.3 or later.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetInstanceInspectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceInspectionsResponse
 */
GetInstanceInspectionsResponse Client::getInstanceInspectionsWithOptions(const GetInstanceInspectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceArea()) {
    query["InstanceArea"] = request.instanceArea();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSearchMap()) {
    query["SearchMap"] = request.searchMap();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceInspections"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceInspectionsResponse>();
}

/**
 * @summary Queries the result of an inspection that is performed on a database instance by using the inspection and scoring feature.
 *
 * @description Database Autonomy Service (DAS) provides the inspection and scoring feature. This feature allows you to inspect and score the health status of your instance on a regular basis. This helps you obtain information about the status of your databases. For more information, see [Inspection and scoring](https://help.aliyun.com/document_detail/205659.html).
 * Before you call this operation, take note of the following items:
 * *   This operation is applicable only to ApsaraDB RDS for MySQL databases, self-managed MySQL databases hosted on Elastic Compute Service (ECS) instances, self-managed MySQL databases in data centers, ApsaraDB for Redis databases, and PolarDB for MySQL databases.
 * *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * *   The version of DAS SDK must be V1.0.3 or later.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetInstanceInspectionsRequest
 * @return GetInstanceInspectionsResponse
 */
GetInstanceInspectionsResponse Client::getInstanceInspections(const GetInstanceInspectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceInspectionsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of all missing indexes of an instance.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetInstanceMissingIndexListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceMissingIndexListResponse
 */
GetInstanceMissingIndexListResponse Client::getInstanceMissingIndexListWithOptions(const GetInstanceMissingIndexListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvgTotalUserCost()) {
    query["AvgTotalUserCost"] = request.avgTotalUserCost();
  }

  if (!!request.hasAvgUserImpact()) {
    query["AvgUserImpact"] = request.avgUserImpact();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIndexCount()) {
    query["IndexCount"] = request.indexCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasObjectName()) {
    query["ObjectName"] = request.objectName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReservedPages()) {
    query["ReservedPages"] = request.reservedPages();
  }

  if (!!request.hasReservedSize()) {
    query["ReservedSize"] = request.reservedSize();
  }

  if (!!request.hasRowCount()) {
    query["RowCount"] = request.rowCount();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUniqueCompiles()) {
    query["UniqueCompiles"] = request.uniqueCompiles();
  }

  if (!!request.hasUserScans()) {
    query["UserScans"] = request.userScans();
  }

  if (!!request.hasUserSeeks()) {
    query["UserSeeks"] = request.userSeeks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceMissingIndexList"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceMissingIndexListResponse>();
}

/**
 * @summary Queries the details of all missing indexes of an instance.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetInstanceMissingIndexListRequest
 * @return GetInstanceMissingIndexListResponse
 */
GetInstanceMissingIndexListResponse Client::getInstanceMissingIndexList(const GetInstanceMissingIndexListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceMissingIndexListWithOptions(request, runtime);
}

/**
 * @summary Queries statistics on automatic SQL optimization events within a period of time, such as the total number of optimization events and the maximum improvement.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   The database engine is ApsaraDB RDS for MySQL or PolarDB for MySQL.
 *
 * @param request GetInstanceSqlOptimizeStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceSqlOptimizeStatisticResponse
 */
GetInstanceSqlOptimizeStatisticResponse Client::getInstanceSqlOptimizeStatisticWithOptions(const GetInstanceSqlOptimizeStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFilterEnable()) {
    query["FilterEnable"] = request.filterEnable();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.threshold();
  }

  if (!!request.hasUseMerging()) {
    query["UseMerging"] = request.useMerging();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceSqlOptimizeStatistic"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceSqlOptimizeStatisticResponse>();
}

/**
 * @summary Queries statistics on automatic SQL optimization events within a period of time, such as the total number of optimization events and the maximum improvement.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   The database engine is ApsaraDB RDS for MySQL or PolarDB for MySQL.
 *
 * @param request GetInstanceSqlOptimizeStatisticRequest
 * @return GetInstanceSqlOptimizeStatisticResponse
 */
GetInstanceSqlOptimizeStatisticResponse Client::getInstanceSqlOptimizeStatistic(const GetInstanceSqlOptimizeStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceSqlOptimizeStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the results of a task that terminates sessions.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetKillInstanceSessionTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKillInstanceSessionTaskResultResponse
 */
GetKillInstanceSessionTaskResultResponse Client::getKillInstanceSessionTaskResultWithOptions(const GetKillInstanceSessionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKillInstanceSessionTaskResult"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKillInstanceSessionTaskResultResponse>();
}

/**
 * @summary Queries the results of a task that terminates sessions.
 *
 * @description *   This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetKillInstanceSessionTaskResultRequest
 * @return GetKillInstanceSessionTaskResultResponse
 */
GetKillInstanceSessionTaskResultResponse Client::getKillInstanceSessionTaskResult(const GetKillInstanceSessionTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKillInstanceSessionTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries the current sessions of an ApsaraDB for MongoDB (MongoDB) instance.
 *
 * @description *   This operation is applicable only to MongoDB instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region to cn-shanghai.
 *
 * @param request GetMongoDBCurrentOpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMongoDBCurrentOpResponse
 */
GetMongoDBCurrentOpResponse Client::getMongoDBCurrentOpWithOptions(const GetMongoDBCurrentOpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterDoc()) {
    query["FilterDoc"] = request.filterDoc();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMongoDBCurrentOp"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMongoDBCurrentOpResponse>();
}

/**
 * @summary Queries the current sessions of an ApsaraDB for MongoDB (MongoDB) instance.
 *
 * @description *   This operation is applicable only to MongoDB instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region to cn-shanghai.
 *
 * @param request GetMongoDBCurrentOpRequest
 * @return GetMongoDBCurrentOpResponse
 */
GetMongoDBCurrentOpResponse Client::getMongoDBCurrentOp(const GetMongoDBCurrentOpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMongoDBCurrentOpWithOptions(request, runtime);
}

/**
 * @summary Asynchronously queries the sessions of an instance and collects statistics on the sessions based on dimensions.
 *
 * @description >  GetMySQLAllSessionAsync is an asynchronous operation. After a request is sent, the system does not return complete results but returns a request ID. You need to use the request ID to initiate requests until the value of the **isFinish** field in the returned results is **true**, the complete results are returned. This indicates that to obtain complete data, you must call this operation at least twice.
 * *   This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and PolarDB-X 2.0 instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetMySQLAllSessionAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMySQLAllSessionAsyncResponse
 */
GetMySQLAllSessionAsyncResponse Client::getMySQLAllSessionAsyncWithOptions(const GetMySQLAllSessionAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasResultId()) {
    query["ResultId"] = request.resultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMySQLAllSessionAsync"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMySQLAllSessionAsyncResponse>();
}

/**
 * @summary Asynchronously queries the sessions of an instance and collects statistics on the sessions based on dimensions.
 *
 * @description >  GetMySQLAllSessionAsync is an asynchronous operation. After a request is sent, the system does not return complete results but returns a request ID. You need to use the request ID to initiate requests until the value of the **isFinish** field in the returned results is **true**, the complete results are returned. This indicates that to obtain complete data, you must call this operation at least twice.
 * *   This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and PolarDB-X 2.0 instances.
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetMySQLAllSessionAsyncRequest
 * @return GetMySQLAllSessionAsyncResponse
 */
GetMySQLAllSessionAsyncResponse Client::getMySQLAllSessionAsync(const GetMySQLAllSessionAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMySQLAllSessionAsyncWithOptions(request, runtime);
}

/**
 * @summary Queries access frequency statistics and hot data on partitions of a PolarDB-X 2.0 instance.
 *
 * @description We recommend that you do not call this operation. The data is returned in a special format and is complex to parse. You can use the [heatmap](https://help.aliyun.com/document_detail/470302.html) feature of Database Autonomy Service (DAS) to query the data.
 *
 * @param request GetPartitionsHeatmapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPartitionsHeatmapResponse
 */
GetPartitionsHeatmapResponse Client::getPartitionsHeatmapWithOptions(const GetPartitionsHeatmapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.timeRange();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPartitionsHeatmap"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPartitionsHeatmapResponse>();
}

/**
 * @summary Queries access frequency statistics and hot data on partitions of a PolarDB-X 2.0 instance.
 *
 * @description We recommend that you do not call this operation. The data is returned in a special format and is complex to parse. You can use the [heatmap](https://help.aliyun.com/document_detail/470302.html) feature of Database Autonomy Service (DAS) to query the data.
 *
 * @param request GetPartitionsHeatmapRequest
 * @return GetPartitionsHeatmapResponse
 */
GetPartitionsHeatmapResponse Client::getPartitionsHeatmap(const GetPartitionsHeatmapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPartitionsHeatmapWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of a metric for the new version of the performance insight feature of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * *   The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsMetricTrendsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPfsMetricTrendsResponse
 */
GetPfsMetricTrendsResponse Client::getPfsMetricTrendsWithOptions(const GetPfsMetricTrendsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMetric()) {
    body["Metric"] = request.metric();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPfsMetricTrends"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPfsMetricTrendsResponse>();
}

/**
 * @summary Queries the trend of a metric for the new version of the performance insight feature of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * *   The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsMetricTrendsRequest
 * @return GetPfsMetricTrendsResponse
 */
GetPfsMetricTrendsResponse Client::getPfsMetricTrends(const GetPfsMetricTrendsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPfsMetricTrendsWithOptions(request, runtime);
}

/**
 * @summary Queries the SQL sample data for the new version of the performance insight feature of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * *   The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsSqlSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPfsSqlSampleResponse
 */
GetPfsSqlSampleResponse Client::getPfsSqlSampleWithOptions(const GetPfsSqlSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasSqlId()) {
    body["SqlId"] = request.sqlId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPfsSqlSample"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPfsSqlSampleResponse>();
}

/**
 * @summary Queries the SQL sample data for the new version of the performance insight feature of a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * *   The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsSqlSampleRequest
 * @return GetPfsSqlSampleResponse
 */
GetPfsSqlSampleResponse Client::getPfsSqlSample(const GetPfsSqlSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPfsSqlSampleWithOptions(request, runtime);
}

/**
 * @summary Queries the full request data generated by the new version of the performance insight feature of a database instance based on the SQL ID.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * *   The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsSqlSummariesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPfsSqlSummariesResponse
 */
GetPfsSqlSummariesResponse Client::getPfsSqlSummariesWithOptions(const GetPfsSqlSummariesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAsc()) {
    body["Asc"] = request.asc();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeywords()) {
    body["Keywords"] = request.keywords();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSqlId()) {
    body["SqlId"] = request.sqlId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPfsSqlSummaries"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPfsSqlSummariesResponse>();
}

/**
 * @summary Queries the full request data generated by the new version of the performance insight feature of a database instance based on the SQL ID.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * *   The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsSqlSummariesRequest
 * @return GetPfsSqlSummariesResponse
 */
GetPfsSqlSummariesResponse Client::getPfsSqlSummaries(const GetPfsSqlSummariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPfsSqlSummariesWithOptions(request, runtime);
}

/**
 * @summary Queries information about SQL templates based on query governance data.
 *
 * @description *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeDataStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeDataStatsResponse
 */
GetQueryOptimizeDataStatsResponse Client::getQueryOptimizeDataStatsWithOptions(const GetQueryOptimizeDataStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeDataStats"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeDataStatsResponse>();
}

/**
 * @summary Queries information about SQL templates based on query governance data.
 *
 * @description *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeDataStatsRequest
 * @return GetQueryOptimizeDataStatsResponse
 */
GetQueryOptimizeDataStatsResponse Client::getQueryOptimizeDataStats(const GetQueryOptimizeDataStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeDataStatsWithOptions(request, runtime);
}

/**
 * @summary Queries information about the best-performing and worst-performing instances based on query governance data.
 *
 * @description *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeDataTopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeDataTopResponse
 */
GetQueryOptimizeDataTopResponse Client::getQueryOptimizeDataTopWithOptions(const GetQueryOptimizeDataTopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeDataTop"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeDataTopResponse>();
}

/**
 * @summary Queries information about the best-performing and worst-performing instances based on query governance data.
 *
 * @description *   If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeDataTopRequest
 * @return GetQueryOptimizeDataTopResponse
 */
GetQueryOptimizeDataTopResponse Client::getQueryOptimizeDataTop(const GetQueryOptimizeDataTopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeDataTopWithOptions(request, runtime);
}

/**
 * @summary Queries query governance trend data.
 *
 * @description *   If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeDataTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeDataTrendResponse
 */
GetQueryOptimizeDataTrendResponse Client::getQueryOptimizeDataTrendWithOptions(const GetQueryOptimizeDataTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeDataTrend"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeDataTrendResponse>();
}

/**
 * @summary Queries query governance trend data.
 *
 * @description *   If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeDataTrendRequest
 * @return GetQueryOptimizeDataTrendResponse
 */
GetQueryOptimizeDataTrendResponse Client::getQueryOptimizeDataTrend(const GetQueryOptimizeDataTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeDataTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the failed SQL statements under a SQL template.
 *
 * @description *   If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeExecErrorSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeExecErrorSampleResponse
 */
GetQueryOptimizeExecErrorSampleResponse Client::getQueryOptimizeExecErrorSampleWithOptions(const GetQueryOptimizeExecErrorSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.sqlId();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.time();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeExecErrorSample"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeExecErrorSampleResponse>();
}

/**
 * @summary Queries the failed SQL statements under a SQL template.
 *
 * @description *   If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeExecErrorSampleRequest
 * @return GetQueryOptimizeExecErrorSampleResponse
 */
GetQueryOptimizeExecErrorSampleResponse Client::getQueryOptimizeExecErrorSample(const GetQueryOptimizeExecErrorSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeExecErrorSampleWithOptions(request, runtime);
}

/**
 * @summary Queries SQL templates that failed to be executed.
 *
 * @description *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeExecErrorStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeExecErrorStatsResponse
 */
GetQueryOptimizeExecErrorStatsResponse Client::getQueryOptimizeExecErrorStatsWithOptions(const GetQueryOptimizeExecErrorStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeExecErrorStats"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeExecErrorStatsResponse>();
}

/**
 * @summary Queries SQL templates that failed to be executed.
 *
 * @description *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeExecErrorStatsRequest
 * @return GetQueryOptimizeExecErrorStatsResponse
 */
GetQueryOptimizeExecErrorStatsResponse Client::getQueryOptimizeExecErrorStats(const GetQueryOptimizeExecErrorStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeExecErrorStatsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags added by the query governance feature to specified database instances.
 *
 * @description *   If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeRuleListResponse
 */
GetQueryOptimizeRuleListResponse Client::getQueryOptimizeRuleListWithOptions(const GetQueryOptimizeRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeRuleList"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeRuleListResponse>();
}

/**
 * @summary Queries the tags added by the query governance feature to specified database instances.
 *
 * @description *   If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeRuleListRequest
 * @return GetQueryOptimizeRuleListResponse
 */
GetQueryOptimizeRuleListResponse Client::getQueryOptimizeRuleList(const GetQueryOptimizeRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries a share URL provided by the query governance feature.
 *
 * @description *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeShareUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeShareUrlResponse
 */
GetQueryOptimizeShareUrlResponse Client::getQueryOptimizeShareUrlWithOptions(const GetQueryOptimizeShareUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.asc();
  }

  if (!!request.hasDbNames()) {
    query["DbNames"] = request.dbNames();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasKeywords()) {
    query["Keywords"] = request.keywords();
  }

  if (!!request.hasLogicalOperator()) {
    query["LogicalOperator"] = request.logicalOperator();
  }

  if (!!request.hasOnlyOptimizedSql()) {
    query["OnlyOptimizedSql"] = request.onlyOptimizedSql();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.rules();
  }

  if (!!request.hasSqlIds()) {
    query["SqlIds"] = request.sqlIds();
  }

  if (!!request.hasTagNames()) {
    query["TagNames"] = request.tagNames();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.time();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeShareUrl"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeShareUrlResponse>();
}

/**
 * @summary Queries a share URL provided by the query governance feature.
 *
 * @description *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeShareUrlRequest
 * @return GetQueryOptimizeShareUrlResponse
 */
GetQueryOptimizeShareUrlResponse Client::getQueryOptimizeShareUrl(const GetQueryOptimizeShareUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeShareUrlWithOptions(request, runtime);
}

/**
 * @summary Queries suggestions provided by query governance for optimizing an SQL template.
 *
 * @description *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeSolutionResponse
 */
GetQueryOptimizeSolutionResponse Client::getQueryOptimizeSolutionWithOptions(const GetQueryOptimizeSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.ruleIds();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.sqlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeSolution"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeSolutionResponse>();
}

/**
 * @summary Queries suggestions provided by query governance for optimizing an SQL template.
 *
 * @description *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeSolutionRequest
 * @return GetQueryOptimizeSolutionResponse
 */
GetQueryOptimizeSolutionResponse Client::getQueryOptimizeSolution(const GetQueryOptimizeSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeSolutionWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of a SQL statement.
 *
 * @description *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeTagResponse
 */
GetQueryOptimizeTagResponse Client::getQueryOptimizeTagWithOptions(const GetQueryOptimizeTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.sqlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueryOptimizeTag"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueryOptimizeTagResponse>();
}

/**
 * @summary Queries the tags of a SQL statement.
 *
 * @description *   If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   PolarDB for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeTagRequest
 * @return GetQueryOptimizeTagResponse
 */
GetQueryOptimizeTagResponse Client::getQueryOptimizeTag(const GetQueryOptimizeTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeTagWithOptions(request, runtime);
}

/**
 * @summary Queries the current session on an ApsaraDB for Redis instance.
 *
 * @description *   This operation is applicable only to ApsaraDB for Redis instances.
 * *   If you use an SDK to call operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * >  This operation cannot be used to query sessions generated in direct connection mode on ApsaraDB for Redis cluster instances.
 *
 * @param request GetRedisAllSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRedisAllSessionResponse
 */
GetRedisAllSessionResponse Client::getRedisAllSessionWithOptions(const GetRedisAllSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRedisAllSession"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRedisAllSessionResponse>();
}

/**
 * @summary Queries the current session on an ApsaraDB for Redis instance.
 *
 * @description *   This operation is applicable only to ApsaraDB for Redis instances.
 * *   If you use an SDK to call operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * >  This operation cannot be used to query sessions generated in direct connection mode on ApsaraDB for Redis cluster instances.
 *
 * @param request GetRedisAllSessionRequest
 * @return GetRedisAllSessionResponse
 */
GetRedisAllSessionResponse Client::getRedisAllSession(const GetRedisAllSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRedisAllSessionWithOptions(request, runtime);
}

/**
 * @summary Queries SQL diagnostics records by pages.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *     *   ApsaraDB RDS for SQL Server
 *     *   PolarDB for MySQL
 *     *   PolarDB for PostgreSQL (Compatible with Oracle)
 *     *   ApsaraDB for MongoDB
 * >  The minor engine version of the Apsara RDS for PostgreSQL instance must be 20220130 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request GetRequestDiagnosisPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRequestDiagnosisPageResponse
 */
GetRequestDiagnosisPageResponse Client::getRequestDiagnosisPageWithOptions(const GetRequestDiagnosisPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRequestDiagnosisPage"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRequestDiagnosisPageResponse>();
}

/**
 * @summary Queries SQL diagnostics records by pages.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL
 *     *   ApsaraDB RDS for PostgreSQL
 *     *   ApsaraDB RDS for SQL Server
 *     *   PolarDB for MySQL
 *     *   PolarDB for PostgreSQL (Compatible with Oracle)
 *     *   ApsaraDB for MongoDB
 * >  The minor engine version of the Apsara RDS for PostgreSQL instance must be 20220130 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request GetRequestDiagnosisPageRequest
 * @return GetRequestDiagnosisPageResponse
 */
GetRequestDiagnosisPageResponse Client::getRequestDiagnosisPage(const GetRequestDiagnosisPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRequestDiagnosisPageWithOptions(request, runtime);
}

/**
 * @summary Queries the results of an SQL diagnostics task.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   You cannot call this operation to query the diagnostic result of the automatic SQL optimization feature.
 * *   This operation is applicable to the following database engines:
 *     *   RDS MySQL
 *     *   RDS PostgreSQL
 *     *   RDS SQL Server
 *     *   PolarDB for MySQL
 *     *   PolarDB for PostgreSQL (Compatible with Oracle)
 *     *   ApsaraDB for MongoDB
 * >  If your instance is an ApsaraDB RDS for PostgreSQL instance, make sure that the minor engine version of your instance is 20220130 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request GetRequestDiagnosisResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRequestDiagnosisResultResponse
 */
GetRequestDiagnosisResultResponse Client::getRequestDiagnosisResultWithOptions(const GetRequestDiagnosisResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.sqlId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRequestDiagnosisResult"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRequestDiagnosisResultResponse>();
}

/**
 * @summary Queries the results of an SQL diagnostics task.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   You cannot call this operation to query the diagnostic result of the automatic SQL optimization feature.
 * *   This operation is applicable to the following database engines:
 *     *   RDS MySQL
 *     *   RDS PostgreSQL
 *     *   RDS SQL Server
 *     *   PolarDB for MySQL
 *     *   PolarDB for PostgreSQL (Compatible with Oracle)
 *     *   ApsaraDB for MongoDB
 * >  If your instance is an ApsaraDB RDS for PostgreSQL instance, make sure that the minor engine version of your instance is 20220130 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request GetRequestDiagnosisResultRequest
 * @return GetRequestDiagnosisResultResponse
 */
GetRequestDiagnosisResultResponse Client::getRequestDiagnosisResult(const GetRequestDiagnosisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRequestDiagnosisResultWithOptions(request, runtime);
}

/**
 * @summary Queries the throttling rules that are in effect.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request GetRunningSqlConcurrencyControlRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRunningSqlConcurrencyControlRulesResponse
 */
GetRunningSqlConcurrencyControlRulesResponse Client::getRunningSqlConcurrencyControlRulesWithOptions(const GetRunningSqlConcurrencyControlRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRunningSqlConcurrencyControlRules"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRunningSqlConcurrencyControlRulesResponse>();
}

/**
 * @summary Queries the throttling rules that are in effect.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request GetRunningSqlConcurrencyControlRulesRequest
 * @return GetRunningSqlConcurrencyControlRulesResponse
 */
GetRunningSqlConcurrencyControlRulesResponse Client::getRunningSqlConcurrencyControlRules(const GetRunningSqlConcurrencyControlRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRunningSqlConcurrencyControlRulesWithOptions(request, runtime);
}

/**
 * @summary Generates a throttling keyword string based on an SQL statement.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request GetSqlConcurrencyControlKeywordsFromSqlTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlConcurrencyControlKeywordsFromSqlTextResponse
 */
GetSqlConcurrencyControlKeywordsFromSqlTextResponse Client::getSqlConcurrencyControlKeywordsFromSqlTextWithOptions(const GetSqlConcurrencyControlKeywordsFromSqlTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSqlText()) {
    query["SqlText"] = request.sqlText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSqlConcurrencyControlKeywordsFromSqlText"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSqlConcurrencyControlKeywordsFromSqlTextResponse>();
}

/**
 * @summary Generates a throttling keyword string based on an SQL statement.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request GetSqlConcurrencyControlKeywordsFromSqlTextRequest
 * @return GetSqlConcurrencyControlKeywordsFromSqlTextResponse
 */
GetSqlConcurrencyControlKeywordsFromSqlTextResponse Client::getSqlConcurrencyControlKeywordsFromSqlText(const GetSqlConcurrencyControlKeywordsFromSqlTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSqlConcurrencyControlKeywordsFromSqlTextWithOptions(request, runtime);
}

/**
 * @summary Queries the throttling rules that are being executed or have been triggered.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request GetSqlConcurrencyControlRulesHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlConcurrencyControlRulesHistoryResponse
 */
GetSqlConcurrencyControlRulesHistoryResponse Client::getSqlConcurrencyControlRulesHistoryWithOptions(const GetSqlConcurrencyControlRulesHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSqlConcurrencyControlRulesHistory"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSqlConcurrencyControlRulesHistoryResponse>();
}

/**
 * @summary Queries the throttling rules that are being executed or have been triggered.
 *
 * @description This operation supports the following database engines:
 * *   ApsaraDB RDS for MySQL
 * *   PolarDB for MySQL
 *
 * @param request GetSqlConcurrencyControlRulesHistoryRequest
 * @return GetSqlConcurrencyControlRulesHistoryResponse
 */
GetSqlConcurrencyControlRulesHistoryResponse Client::getSqlConcurrencyControlRulesHistory(const GetSqlConcurrencyControlRulesHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSqlConcurrencyControlRulesHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries optimization suggestions that are generated by the SQL diagnostics feature of Database Autonomy Service (DAS).
 *
 * @description The SQL diagnostics feature provides optimization suggestions for instances based on diagnostics results. You can use the optimization suggestions to optimize instance indexes. For more information, see [Automatic SQL optimization](https://help.aliyun.com/document_detail/167895.html).
 * >  You can call this operation to query only the optimization suggestions that are automatically generated by the SQL diagnostics feature.
 * Before you call this operation, take note of the following items:
 * *   This operation is applicable to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetSqlOptimizeAdviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlOptimizeAdviceResponse
 */
GetSqlOptimizeAdviceResponse Client::getSqlOptimizeAdviceWithOptions(const GetSqlOptimizeAdviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasEndDt()) {
    query["EndDt"] = request.endDt();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartDt()) {
    query["StartDt"] = request.startDt();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSqlOptimizeAdvice"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSqlOptimizeAdviceResponse>();
}

/**
 * @summary Queries optimization suggestions that are generated by the SQL diagnostics feature of Database Autonomy Service (DAS).
 *
 * @description The SQL diagnostics feature provides optimization suggestions for instances based on diagnostics results. You can use the optimization suggestions to optimize instance indexes. For more information, see [Automatic SQL optimization](https://help.aliyun.com/document_detail/167895.html).
 * >  You can call this operation to query only the optimization suggestions that are automatically generated by the SQL diagnostics feature.
 * Before you call this operation, take note of the following items:
 * *   This operation is applicable to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetSqlOptimizeAdviceRequest
 * @return GetSqlOptimizeAdviceResponse
 */
GetSqlOptimizeAdviceResponse Client::getSqlOptimizeAdvice(const GetSqlOptimizeAdviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSqlOptimizeAdviceWithOptions(request, runtime);
}

/**
 * @summary Queries the status and results of a storage analysis task.
 *
 * @description >  The physical file size indicates the actual size of an obtained file. Only specific deployment modes of database instances support the display of physical file sizes. The statistics on tables are obtained from `information_schema.tables`. Statistics in MySQL are not updated in real time. Therefore, the statistics may be different from the physical file sizes. If you want to obtain the latest data, you can execute the `ANALYZE TABLE` statement on the relevant tables during off-peak hours.
 * *   This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and ApsaraDB for MongoDB instances.
 * *   For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this operation works the same as the storage analysis feature of the previous version. Tasks generated by this operation cannot be viewed on the Storage Analysis page of the new version in the Database Autonomy Service (DAS) console. If you want to view the tasks and results, call the related API operation to obtain data and save data to your computer.
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetStorageAnalysisResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStorageAnalysisResultResponse
 */
GetStorageAnalysisResultResponse Client::getStorageAnalysisResultWithOptions(const GetStorageAnalysisResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStorageAnalysisResult"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStorageAnalysisResultResponse>();
}

/**
 * @summary Queries the status and results of a storage analysis task.
 *
 * @description >  The physical file size indicates the actual size of an obtained file. Only specific deployment modes of database instances support the display of physical file sizes. The statistics on tables are obtained from `information_schema.tables`. Statistics in MySQL are not updated in real time. Therefore, the statistics may be different from the physical file sizes. If you want to obtain the latest data, you can execute the `ANALYZE TABLE` statement on the relevant tables during off-peak hours.
 * *   This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and ApsaraDB for MongoDB instances.
 * *   For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this operation works the same as the storage analysis feature of the previous version. Tasks generated by this operation cannot be viewed on the Storage Analysis page of the new version in the Database Autonomy Service (DAS) console. If you want to view the tasks and results, call the related API operation to obtain data and save data to your computer.
 * *   If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetStorageAnalysisResultRequest
 * @return GetStorageAnalysisResultResponse
 */
GetStorageAnalysisResultResponse Client::getStorageAnalysisResult(const GetStorageAnalysisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStorageAnalysisResultWithOptions(request, runtime);
}

/**
 * @summary Terminates all sessions on an instance.
 *
 * @description *   This operation is applicable only to ApsaraDB for Redis.
 * *   If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V1.0.2 or later.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request KillInstanceAllSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillInstanceAllSessionResponse
 */
KillInstanceAllSessionResponse Client::killInstanceAllSessionWithOptions(const KillInstanceAllSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KillInstanceAllSession"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KillInstanceAllSessionResponse>();
}

/**
 * @summary Terminates all sessions on an instance.
 *
 * @description *   This operation is applicable only to ApsaraDB for Redis.
 * *   If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * *   The version of your Database Autonomy Service (DAS) SDK must be V1.0.2 or later.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request KillInstanceAllSessionRequest
 * @return KillInstanceAllSessionResponse
 */
KillInstanceAllSessionResponse Client::killInstanceAllSession(const KillInstanceAllSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return killInstanceAllSessionWithOptions(request, runtime);
}

/**
 * @summary Modifies the auto scaling configurations of an instance.
 *
 * @description You can call this operation to modify the following auto scaling configurations of an instance: **auto scaling for specifications**, **automatic storage expansion**, **automatic bandwidth adjustment**, and **auto scaling for resources**.
 * *   You can modify the configurations of the **auto scaling feature for specifications** for the following types of database instances:
 *     *   PolarDB for MySQL Cluster Edition instances. For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 *     *   ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or enhanced SSDs (ESSDs). For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 * *   You can modify the configurations of the **automatic storage expansion** feature for the following types of database instances:
 *     *   ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs. For more information about the feature and the billing rules, see [Automatic space expansion](https://help.aliyun.com/document_detail/173345.html).
 * *   You can modify the configurations of the **automatic bandwidth adjustment** feature for the following types of database instances:
 *     *   ApsaraDB for Redis Classic (Local Disk-based) Edition instances. For more information about the feature and the billing rules, see [Automatic bandwidth adjustment](https://help.aliyun.com/document_detail/216312.html).
 * *   You can modify the configurations of the **auto scaling feature for resources** for the following types of database instances:
 *     *   General-purpose ApsaraDB RDS for MySQL Enterprise Edition instances. For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request ModifyAutoScalingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoScalingConfigResponse
 */
ModifyAutoScalingConfigResponse Client::modifyAutoScalingConfigWithOptions(const ModifyAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasShard()) {
    query["Shard"] = request.shard();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.spec();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.storage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAutoScalingConfig"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAutoScalingConfigResponse>();
}

/**
 * @summary Modifies the auto scaling configurations of an instance.
 *
 * @description You can call this operation to modify the following auto scaling configurations of an instance: **auto scaling for specifications**, **automatic storage expansion**, **automatic bandwidth adjustment**, and **auto scaling for resources**.
 * *   You can modify the configurations of the **auto scaling feature for specifications** for the following types of database instances:
 *     *   PolarDB for MySQL Cluster Edition instances. For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 *     *   ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or enhanced SSDs (ESSDs). For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 * *   You can modify the configurations of the **automatic storage expansion** feature for the following types of database instances:
 *     *   ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs. For more information about the feature and the billing rules, see [Automatic space expansion](https://help.aliyun.com/document_detail/173345.html).
 * *   You can modify the configurations of the **automatic bandwidth adjustment** feature for the following types of database instances:
 *     *   ApsaraDB for Redis Classic (Local Disk-based) Edition instances. For more information about the feature and the billing rules, see [Automatic bandwidth adjustment](https://help.aliyun.com/document_detail/216312.html).
 * *   You can modify the configurations of the **auto scaling feature for resources** for the following types of database instances:
 *     *   General-purpose ApsaraDB RDS for MySQL Enterprise Edition instances. For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 * *   If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request ModifyAutoScalingConfigRequest
 * @return ModifyAutoScalingConfigResponse
 */
ModifyAutoScalingConfigResponse Client::modifyAutoScalingConfig(const ModifyAutoScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoScalingConfigWithOptions(request, runtime);
}

/**
 * @summary 修改用户跨产品白名单模板
 *
 * @param request ModifySecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIPGroupResponse
 */
ModifySecurityIPGroupResponse Client::modifySecurityIPGroupWithOptions(const ModifySecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGIpList()) {
    query["GIpList"] = request.GIpList();
  }

  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.globalIgName();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.globalSecurityGroupId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.regionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIPGroup"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityIPGroupResponse>();
}

/**
 * @summary 修改用户跨产品白名单模板
 *
 * @param request ModifySecurityIPGroupRequest
 * @return ModifySecurityIPGroupResponse
 */
ModifySecurityIPGroupResponse Client::modifySecurityIPGroup(const ModifySecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary 绑定/解绑用户跨产品白名单模板
 *
 * @param request ModifySecurityIPGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIPGroupRelationResponse
 */
ModifySecurityIPGroupRelationResponse Client::modifySecurityIPGroupRelationWithOptions(const ModifySecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.globalSecurityGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.regionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIPGroupRelation"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityIPGroupRelationResponse>();
}

/**
 * @summary 绑定/解绑用户跨产品白名单模板
 *
 * @param request ModifySecurityIPGroupRelationRequest
 * @return ModifySecurityIPGroupRelationResponse
 */
ModifySecurityIPGroupRelationResponse Client::modifySecurityIPGroupRelation(const ModifySecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Enables or configures Database Autonomy Service (DAS) Enterprise Edition for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   By default, the latest version of DAS Enterprise Edition that supports the database instance is enabled. For information about the databases and regions that are supported by different versions of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request ModifySqlLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySqlLogConfigResponse
 */
ModifySqlLogConfigResponse Client::modifySqlLogConfigWithOptions(const ModifySqlLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableAudit()) {
    query["EnableAudit"] = request.enableAudit();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  json body = {};
  if (!!request.hasEnable()) {
    body["Enable"] = request.enable();
  }

  if (!!request.hasHotRetention()) {
    body["HotRetention"] = request.hotRetention();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestEnable()) {
    body["RequestEnable"] = request.requestEnable();
  }

  if (!!request.hasRetention()) {
    body["Retention"] = request.retention();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifySqlLogConfig"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySqlLogConfigResponse>();
}

/**
 * @summary Enables or configures Database Autonomy Service (DAS) Enterprise Edition for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * *   By default, the latest version of DAS Enterprise Edition that supports the database instance is enabled. For information about the databases and regions that are supported by different versions of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request ModifySqlLogConfigRequest
 * @return ModifySqlLogConfigResponse
 */
ModifySqlLogConfigResponse Client::modifySqlLogConfig(const ModifySqlLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySqlLogConfigWithOptions(request, runtime);
}

/**
 * @summary Runs a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request RunCloudBenchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCloudBenchTaskResponse
 */
RunCloudBenchTaskResponse Client::runCloudBenchTaskWithOptions(const RunCloudBenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunCloudBenchTask"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCloudBenchTaskResponse>();
}

/**
 * @summary Runs a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request RunCloudBenchTaskRequest
 * @return RunCloudBenchTaskResponse
 */
RunCloudBenchTaskResponse Client::runCloudBenchTask(const RunCloudBenchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCloudBenchTaskWithOptions(request, runtime);
}

/**
 * @summary Configures the event subscription settings for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   Make sure that the database instance that you want to manage is connected to DAS.
 *
 * @param request SetEventSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetEventSubscriptionResponse
 */
SetEventSubscriptionResponse Client::setEventSubscriptionWithOptions(const SetEventSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.active();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.channelType();
  }

  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.contactGroupName();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasDispatchRule()) {
    query["DispatchRule"] = request.dispatchRule();
  }

  if (!!request.hasEventContext()) {
    query["EventContext"] = request.eventContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasMinInterval()) {
    query["MinInterval"] = request.minInterval();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.severity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetEventSubscription"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetEventSubscriptionResponse>();
}

/**
 * @summary Configures the event subscription settings for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * *   If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * *   Make sure that the database instance that you want to manage is connected to DAS.
 *
 * @param request SetEventSubscriptionRequest
 * @return SetEventSubscriptionResponse
 */
SetEventSubscriptionResponse Client::setEventSubscription(const SetEventSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setEventSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Asynchronously configures parameters related to the automatic fragment recycling feature for multiple database instances at a time.
 *
 * @description >  Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.**** In this case, you must call this operation at least twice.
 * Before you call this operation, take note of the following items:
 * *   If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   The database instances must be an ApsaraDB RDS for MySQL High-availability Edition instance.
 * *   DAS Enterprise Edition must be enabled for the database instance. You can call the call [DescribeInstanceDasPro](https://help.aliyun.com/document_detail/413866.html) operation to query whether DAS Enterprise Edition is enabled.
 * *   The database instance has four or more CPU cores, and **innodb_file_per_table** is set to **ON**.
 *
 * @param request UpdateAutoResourceOptimizeRulesAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoResourceOptimizeRulesAsyncResponse
 */
UpdateAutoResourceOptimizeRulesAsyncResponse Client::updateAutoResourceOptimizeRulesAsyncWithOptions(const UpdateAutoResourceOptimizeRulesAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasResultId()) {
    query["ResultId"] = request.resultId();
  }

  if (!!request.hasTableFragmentationRatio()) {
    query["TableFragmentationRatio"] = request.tableFragmentationRatio();
  }

  if (!!request.hasTableSpaceSize()) {
    query["TableSpaceSize"] = request.tableSpaceSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAutoResourceOptimizeRulesAsync"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutoResourceOptimizeRulesAsyncResponse>();
}

/**
 * @summary Asynchronously configures parameters related to the automatic fragment recycling feature for multiple database instances at a time.
 *
 * @description >  Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.**** In this case, you must call this operation at least twice.
 * Before you call this operation, take note of the following items:
 * *   If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   The database instances must be an ApsaraDB RDS for MySQL High-availability Edition instance.
 * *   DAS Enterprise Edition must be enabled for the database instance. You can call the call [DescribeInstanceDasPro](https://help.aliyun.com/document_detail/413866.html) operation to query whether DAS Enterprise Edition is enabled.
 * *   The database instance has four or more CPU cores, and **innodb_file_per_table** is set to **ON**.
 *
 * @param request UpdateAutoResourceOptimizeRulesAsyncRequest
 * @return UpdateAutoResourceOptimizeRulesAsyncResponse
 */
UpdateAutoResourceOptimizeRulesAsyncResponse Client::updateAutoResourceOptimizeRulesAsync(const UpdateAutoResourceOptimizeRulesAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoResourceOptimizeRulesAsyncWithOptions(request, runtime);
}

/**
 * @summary Enables, modifies, or disables the automatic SQL optimization feature for multiple database instances at a time.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   DAS Enterprise Edition must be enabled for the database instance that you want to manage. To enable DAS Enterprise Edition for a database instance, you can call the [EnableDasPro](https://help.aliyun.com/document_detail/411645.html) operation.
 * *   The autonomy service must be enabled for the database instance. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition
 *     *   PolarDB for MySQL Cluster Edition
 *
 * @param request UpdateAutoSqlOptimizeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoSqlOptimizeStatusResponse
 */
UpdateAutoSqlOptimizeStatusResponse Client::updateAutoSqlOptimizeStatusWithOptions(const UpdateAutoSqlOptimizeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstances()) {
    query["Instances"] = request.instances();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAutoSqlOptimizeStatus"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutoSqlOptimizeStatusResponse>();
}

/**
 * @summary Enables, modifies, or disables the automatic SQL optimization feature for multiple database instances at a time.
 *
 * @description Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   DAS Enterprise Edition must be enabled for the database instance that you want to manage. To enable DAS Enterprise Edition for a database instance, you can call the [EnableDasPro](https://help.aliyun.com/document_detail/411645.html) operation.
 * *   The autonomy service must be enabled for the database instance. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 * *   This operation supports the following database engines:
 *     *   ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition
 *     *   PolarDB for MySQL Cluster Edition
 *
 * @param request UpdateAutoSqlOptimizeStatusRequest
 * @return UpdateAutoSqlOptimizeStatusResponse
 */
UpdateAutoSqlOptimizeStatusResponse Client::updateAutoSqlOptimizeStatus(const UpdateAutoSqlOptimizeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoSqlOptimizeStatusWithOptions(request, runtime);
}

/**
 * @summary Asynchronously configures parameters related to the automatic SQL throttling feature for multiple database instances at a time.
 *
 * @description >  Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.**** In this case, you must call this operation at least twice.
 * Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   The autonomy service must be enabled for the database instance that you want to manage. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 * *   The database instance that you want to manage must be of one of the following types:
 *     *   ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *     *   PolarDB for MySQL Cluster Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *
 * @param request UpdateAutoThrottleRulesAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoThrottleRulesAsyncResponse
 */
UpdateAutoThrottleRulesAsyncResponse Client::updateAutoThrottleRulesAsyncWithOptions(const UpdateAutoThrottleRulesAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalDuration()) {
    query["AbnormalDuration"] = request.abnormalDuration();
  }

  if (!!request.hasActiveSessions()) {
    query["ActiveSessions"] = request.activeSessions();
  }

  if (!!request.hasAllowThrottleEndTime()) {
    query["AllowThrottleEndTime"] = request.allowThrottleEndTime();
  }

  if (!!request.hasAllowThrottleStartTime()) {
    query["AllowThrottleStartTime"] = request.allowThrottleStartTime();
  }

  if (!!request.hasAutoKillSession()) {
    query["AutoKillSession"] = request.autoKillSession();
  }

  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.consoleContext();
  }

  if (!!request.hasCpuSessionRelation()) {
    query["CpuSessionRelation"] = request.cpuSessionRelation();
  }

  if (!!request.hasCpuUsage()) {
    query["CpuUsage"] = request.cpuUsage();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasMaxThrottleTime()) {
    query["MaxThrottleTime"] = request.maxThrottleTime();
  }

  if (!!request.hasResultId()) {
    query["ResultId"] = request.resultId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAutoThrottleRulesAsync"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutoThrottleRulesAsyncResponse>();
}

/**
 * @summary Asynchronously configures parameters related to the automatic SQL throttling feature for multiple database instances at a time.
 *
 * @description >  Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.**** In this case, you must call this operation at least twice.
 * Before you call this operation, take note of the following items:
 * *   If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * *   The autonomy service must be enabled for the database instance that you want to manage. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 * *   The database instance that you want to manage must be of one of the following types:
 *     *   ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *     *   PolarDB for MySQL Cluster Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *
 * @param request UpdateAutoThrottleRulesAsyncRequest
 * @return UpdateAutoThrottleRulesAsyncResponse
 */
UpdateAutoThrottleRulesAsyncResponse Client::updateAutoThrottleRulesAsync(const UpdateAutoThrottleRulesAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoThrottleRulesAsyncWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DAS20200116