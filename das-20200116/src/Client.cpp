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
    {"cn-shanghai" , "das.cn-shanghai.aliyuncs.com"},
    {"cn-north-2-gov-1" , "das.aliyuncs.com"}
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
 * - If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call DAS, you must set the region to cn-shanghai.
 *
 * @param request AddHDMInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddHDMInstanceResponse
 */
AddHDMInstanceResponse Client::addHDMInstanceWithOptions(const AddHDMInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasFlushAccount()) {
    query["FlushAccount"] = request.getFlushAccount();
  }

  if (!!request.hasInstanceAlias()) {
    query["InstanceAlias"] = request.getInstanceAlias();
  }

  if (!!request.hasInstanceArea()) {
    query["InstanceArea"] = request.getInstanceArea();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.getContext();
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
 * - If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call DAS, you must set the region to cn-shanghai.
 *
 * @param request AddHDMInstanceRequest
 * @return AddHDMInstanceResponse
 */
AddHDMInstanceResponse Client::addHDMInstance(const AddHDMInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addHDMInstanceWithOptions(request, runtime);
}

/**
 * @summary An asynchronous API to access the large language model capabilities of DAS.
 *
 * @description Prerequisites:
 * - Use the latest version of the Alibaba Cloud SDK or the DAS SDK.
 * - When you use an SDK to call the DAS service, you must specify the region as cn-shanghai.
 * - You can create offline tasks only for database instances that have DAS Enterprise Edition enabled. For information about the databases and regions that are supported by different versions of DAS Enterprise Edition, see [DAS product editions and features](https://help.aliyun.com/document_detail/156204.html).
 * For more information about using the Chat API with DAS Agent, see [Best practices for DAS Agent interaction (integrating with the Chat API)](https://help.aliyun.com/zh/das/developer-reference/chat-api-best-practice).
 *
 * @param request ChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
FutureGenerator<ChatResponse> Client::chatWithSSE(const ChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSummary()) {
    query["Summary"] = request.getSummary();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<ChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary An asynchronous API to access the large language model capabilities of DAS.
 *
 * @description Prerequisites:
 * - Use the latest version of the Alibaba Cloud SDK or the DAS SDK.
 * - When you use an SDK to call the DAS service, you must specify the region as cn-shanghai.
 * - You can create offline tasks only for database instances that have DAS Enterprise Edition enabled. For information about the databases and regions that are supported by different versions of DAS Enterprise Edition, see [DAS product editions and features](https://help.aliyun.com/document_detail/156204.html).
 * For more information about using the Chat API with DAS Agent, see [Best practices for DAS Agent interaction (integrating with the Chat API)](https://help.aliyun.com/zh/das/developer-reference/chat-api-best-practice).
 *
 * @param request ChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
ChatResponse Client::chatWithOptions(const ChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSummary()) {
    query["Summary"] = request.getSummary();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatResponse>();
}

/**
 * @summary An asynchronous API to access the large language model capabilities of DAS.
 *
 * @description Prerequisites:
 * - Use the latest version of the Alibaba Cloud SDK or the DAS SDK.
 * - When you use an SDK to call the DAS service, you must specify the region as cn-shanghai.
 * - You can create offline tasks only for database instances that have DAS Enterprise Edition enabled. For information about the databases and regions that are supported by different versions of DAS Enterprise Edition, see [DAS product editions and features](https://help.aliyun.com/document_detail/156204.html).
 * For more information about using the Chat API with DAS Agent, see [Best practices for DAS Agent interaction (integrating with the Chat API)](https://help.aliyun.com/zh/das/developer-reference/chat-api-best-practice).
 *
 * @param request ChatRequest
 * @return ChatResponse
 */
ChatResponse Client::chat(const ChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatWithOptions(request, runtime);
}

/**
 * @summary Creates a cache analysis task by calling the CreateCacheAnalysisJob operation.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 * - Only Redis data structures and the following Tair-developed data structures are supported for analysis: TairString, TairHash, TairGIS, TairBloom, TairDoc, TairCpc, and TairZset. Other Tair-developed data structures are not supported.
 * - If the specifications of the target instance have been changed, backup files generated before the change cannot be analyzed.
 * - Tair ESSD-based instances are not supported.
 *
 * @param request CreateCacheAnalysisJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCacheAnalysisJobResponse
 */
CreateCacheAnalysisJobResponse Client::createCacheAnalysisJobWithOptions(const CreateCacheAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSeparators()) {
    query["Separators"] = request.getSeparators();
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
 * @summary Creates a cache analysis task by calling the CreateCacheAnalysisJob operation.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 * - Only Redis data structures and the following Tair-developed data structures are supported for analysis: TairString, TairHash, TairGIS, TairBloom, TairDoc, TairCpc, and TairZset. Other Tair-developed data structures are not supported.
 * - If the specifications of the target instance have been changed, backup files generated before the change cannot be analyzed.
 * - Tair ESSD-based instances are not supported.
 *
 * @param request CreateCacheAnalysisJobRequest
 * @return CreateCacheAnalysisJobResponse
 */
CreateCacheAnalysisJobResponse Client::createCacheAnalysisJob(const CreateCacheAnalysisJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCacheAnalysisJobWithOptions(request, runtime);
}

/**
 * @summary You can call the CreateCloudBenchTasks operation to create a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides intelligent stress testing to help you verify whether your instance type needs to be scaled out to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html). The database must meet the following prerequisites:
 * - The source database only supports RDS MySQL High Availability Edition or RDS Enterprise Edition, and PolarDB MySQL cluster edition.
 * - The target database instance is RDS MySQL or PolarDB MySQL.
 * - The instance is connected to DAS. For more information, see [Connect to Alibaba Cloud database instances](https://help.aliyun.com/document_detail/65405.html).
 * - DAS Enterprise Edition must be enabled. For more information, see [DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 *
 * @param request CreateCloudBenchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudBenchTasksResponse
 */
CreateCloudBenchTasksResponse Client::createCloudBenchTasksWithOptions(const CreateCloudBenchTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasBackupTime()) {
    query["BackupTime"] = request.getBackupTime();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDstConnectionString()) {
    query["DstConnectionString"] = request.getDstConnectionString();
  }

  if (!!request.hasDstInstanceId()) {
    query["DstInstanceId"] = request.getDstInstanceId();
  }

  if (!!request.hasDstPort()) {
    query["DstPort"] = request.getDstPort();
  }

  if (!!request.hasDstSuperAccount()) {
    query["DstSuperAccount"] = request.getDstSuperAccount();
  }

  if (!!request.hasDstSuperPassword()) {
    query["DstSuperPassword"] = request.getDstSuperPassword();
  }

  if (!!request.hasDstType()) {
    query["DstType"] = request.getDstType();
  }

  if (!!request.hasDtsJobClass()) {
    query["DtsJobClass"] = request.getDtsJobClass();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.getDtsJobId();
  }

  if (!!request.hasEndState()) {
    query["EndState"] = request.getEndState();
  }

  if (!!request.hasGatewayVpcId()) {
    query["GatewayVpcId"] = request.getGatewayVpcId();
  }

  if (!!request.hasGatewayVpcIp()) {
    query["GatewayVpcIp"] = request.getGatewayVpcIp();
  }

  if (!!request.hasRate()) {
    query["Rate"] = request.getRate();
  }

  if (!!request.hasRequestDuration()) {
    query["RequestDuration"] = request.getRequestDuration();
  }

  if (!!request.hasRequestEndTime()) {
    query["RequestEndTime"] = request.getRequestEndTime();
  }

  if (!!request.hasRequestStartTime()) {
    query["RequestStartTime"] = request.getRequestStartTime();
  }

  if (!!request.hasSmartPressureTime()) {
    query["SmartPressureTime"] = request.getSmartPressureTime();
  }

  if (!!request.hasSrcInstanceId()) {
    query["SrcInstanceId"] = request.getSrcInstanceId();
  }

  if (!!request.hasSrcPublicIp()) {
    query["SrcPublicIp"] = request.getSrcPublicIp();
  }

  if (!!request.hasSrcSuperAccount()) {
    query["SrcSuperAccount"] = request.getSrcSuperAccount();
  }

  if (!!request.hasSrcSuperPassword()) {
    query["SrcSuperPassword"] = request.getSrcSuperPassword();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasWorkDir()) {
    query["WorkDir"] = request.getWorkDir();
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
 * @summary You can call the CreateCloudBenchTasks operation to create a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides intelligent stress testing to help you verify whether your instance type needs to be scaled out to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html). The database must meet the following prerequisites:
 * - The source database only supports RDS MySQL High Availability Edition or RDS Enterprise Edition, and PolarDB MySQL cluster edition.
 * - The target database instance is RDS MySQL or PolarDB MySQL.
 * - The instance is connected to DAS. For more information, see [Connect to Alibaba Cloud database instances](https://help.aliyun.com/document_detail/65405.html).
 * - DAS Enterprise Edition must be enabled. For more information, see [DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
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
 * - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * - The version of Database Autonomy Service (DAS) SDK must be 1.0.3 or later.
 * - If you use an SDK to call DAS, you must set the region to cn-shanghai.
 * - This operation supports the following database engines:
 *   - RDS MySQL
 *   - PolarDB for MySQL
 *   - Redis
 *
 * @param request CreateDiagnosticReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiagnosticReportResponse
 */
CreateDiagnosticReportResponse Client::createDiagnosticReportWithOptions(const CreateDiagnosticReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * - The version of Database Autonomy Service (DAS) SDK must be 1.0.3 or later.
 * - If you use an SDK to call DAS, you must set the region to cn-shanghai.
 * - This operation supports the following database engines:
 *   - RDS MySQL
 *   - PolarDB for MySQL
 *   - Redis
 *
 * @param request CreateDiagnosticReportRequest
 * @return CreateDiagnosticReportResponse
 */
CreateDiagnosticReportResponse Client::createDiagnosticReport(const CreateDiagnosticReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiagnosticReportWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateKillInstanceSessionTask operation to create a task that terminates sessions.
 *
 * @description - This operation is applicable only to ApsaraDB RDS for MySQL and PolarDB for MySQL instances.
 * - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request CreateKillInstanceSessionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKillInstanceSessionTaskResponse
 */
CreateKillInstanceSessionTaskResponse Client::createKillInstanceSessionTaskWithOptions(const CreateKillInstanceSessionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbUser()) {
    query["DbUser"] = request.getDbUser();
  }

  if (!!request.hasDbUserPassword()) {
    query["DbUserPassword"] = request.getDbUserPassword();
  }

  if (!!request.hasIgnoredUsers()) {
    query["IgnoredUsers"] = request.getIgnoredUsers();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKillAllSessions()) {
    query["KillAllSessions"] = request.getKillAllSessions();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSessionIds()) {
    query["SessionIds"] = request.getSessionIds();
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
 * @summary Calls the CreateKillInstanceSessionTask operation to create a task that terminates sessions.
 *
 * @description - This operation is applicable only to ApsaraDB RDS for MySQL and PolarDB for MySQL instances.
 * - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
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
    query["IgnoredUsers"] = request.getIgnoredUsers();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKillAllSessions()) {
    query["KillAllSessions"] = request.getKillAllSessions();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSessionIds()) {
    query["SessionIds"] = request.getSessionIds();
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
 * @summary Creates a recent deadlock analysis task.
 *
 * @description This operation creates a recent deadlock analysis task. Database Autonomy Service (DAS) analyzes the most recent deadlock log returned by SHOW ENGINE INNODB STATUS. If multiple deadlocks have occurred, DAS analyzes only the most recent one. For more information, see [Recent deadlock analysis](https://help.aliyun.com/document_detail/2858236.html).
 * Before you begin, make sure the following prerequisites are met:
 * - The database engine is one of the following: ApsaraDB RDS for MySQL, self-managed MySQL, PolarDB for MySQL, or PolarDB-X 2.0.
 * - If you use the China site (Chinese) or DAS SDK, use the latest version.
 * - When you call DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request CreateLatestDeadLockAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLatestDeadLockAnalysisResponse
 */
CreateLatestDeadLockAnalysisResponse Client::createLatestDeadLockAnalysisWithOptions(const CreateLatestDeadLockAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
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
 * @summary Creates a recent deadlock analysis task.
 *
 * @description This operation creates a recent deadlock analysis task. Database Autonomy Service (DAS) analyzes the most recent deadlock log returned by SHOW ENGINE INNODB STATUS. If multiple deadlocks have occurred, DAS analyzes only the most recent one. For more information, see [Recent deadlock analysis](https://help.aliyun.com/document_detail/2858236.html).
 * Before you begin, make sure the following prerequisites are met:
 * - The database engine is one of the following: ApsaraDB RDS for MySQL, self-managed MySQL, PolarDB for MySQL, or PolarDB-X 2.0.
 * - If you use the China site (Chinese) or DAS SDK, use the latest version.
 * - When you call DAS by using the SDK, set the region to cn-shanghai.
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
 * @description - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *
 * @param request CreateQueryOptimizeTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueryOptimizeTagResponse
 */
CreateQueryOptimizeTagResponse Client::createQueryOptimizeTagWithOptions(const CreateQueryOptimizeTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSqlIds()) {
    query["SqlIds"] = request.getSqlIds();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @description - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * - If you use an SDK to call Database Autonomy Service (DAS), you must set the region to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *   - ApsaraDB RDS for SQL Server
 *   - PolarDB for MySQL
 *   - PolarDB for PostgreSQL (compatible with Oracle)
 *   - ApsaraDB for MongoDB
 * > The minor engine version of ApsaraDB RDS for PostgreSQL instances must be 20221230 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request CreateRequestDiagnosisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRequestDiagnosisResponse
 */
CreateRequestDiagnosisResponse Client::createRequestDiagnosisWithOptions(const CreateRequestDiagnosisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabase()) {
    query["Database"] = request.getDatabase();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSql()) {
    query["Sql"] = request.getSql();
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
 * - If you use an SDK to call Database Autonomy Service (DAS), you must set the region to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *   - ApsaraDB RDS for SQL Server
 *   - PolarDB for MySQL
 *   - PolarDB for PostgreSQL (compatible with Oracle)
 *   - ApsaraDB for MongoDB
 * > The minor engine version of ApsaraDB RDS for PostgreSQL instances must be 20221230 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request CreateRequestDiagnosisRequest
 * @return CreateRequestDiagnosisResponse
 */
CreateRequestDiagnosisResponse Client::createRequestDiagnosis(const CreateRequestDiagnosisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRequestDiagnosisWithOptions(request, runtime);
}

/**
 * @summary Creates a cross-service whitelist template for a user.
 *
 * @description Before you begin:
 * - If you use the Alibaba Cloud or DAS SDK, use the latest version.
 * - When you call DAS by using the SDK, set the region to cn-shanghai.
 * - Only database instances with DAS Enterprise Edition activated support creating batch tasks. For information about the databases and regions supported by each DAS Enterprise Edition version, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 * Limits:
 * The maximum number of concurrent executions is 10.
 *
 * @param request CreateSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityIPGroupResponse
 */
CreateSecurityIPGroupResponse Client::createSecurityIPGroupWithOptions(const CreateSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGIpList()) {
    query["GIpList"] = request.getGIpList();
  }

  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.getGlobalIgName();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.getRegionName();
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
 * @summary Creates a cross-service whitelist template for a user.
 *
 * @description Before you begin:
 * - If you use the Alibaba Cloud or DAS SDK, use the latest version.
 * - When you call DAS by using the SDK, set the region to cn-shanghai.
 * - Only database instances with DAS Enterprise Edition activated support creating batch tasks. For information about the databases and regions supported by each DAS Enterprise Edition version, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 * Limits:
 * The maximum number of concurrent executions is 10.
 *
 * @param request CreateSecurityIPGroupRequest
 * @return CreateSecurityIPGroupResponse
 */
CreateSecurityIPGroupResponse Client::createSecurityIPGroup(const CreateSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an asynchronous task for detailed data.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When you call DAS operations by using the SDK, set the region to cn-shanghai.
 * - Only database instances with DAS Enterprise Edition enabled support creating batch tasks. For information about the databases and regions supported by each DAS Enterprise Edition version, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 * Rate limit:
 * The maximum number of concurrent tasks is 10.
 *
 * @param request CreateSqlLogTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSqlLogTaskResponse
 */
CreateSqlLogTaskResponse Client::createSqlLogTaskWithOptions(const CreateSqlLogTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
 * @summary Creates an asynchronous task for detailed data.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When you call DAS operations by using the SDK, set the region to cn-shanghai.
 * - Only database instances with DAS Enterprise Edition enabled support creating batch tasks. For information about the databases and regions supported by each DAS Enterprise Edition version, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 * Rate limit:
 * The maximum number of concurrent tasks is 10.
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
 * @description - This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and ApsaraDB for MongoDB instances.
 * - For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this operation works the same as the storage analysis feature of the previous version. Tasks generated by this operation cannot be viewed on the Storage Analysis page of the new version in the Database Autonomy Service (DAS) console. If you want to view the tasks and results, call the related API operation to obtain data and save data to your computer.
 * - If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request CreateStorageAnalysisTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStorageAnalysisTaskResponse
 */
CreateStorageAnalysisTaskResponse Client::createStorageAnalysisTaskWithOptions(const CreateStorageAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
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
 * @description - This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and ApsaraDB for MongoDB instances.
 * - For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this operation works the same as the storage analysis feature of the previous version. Tasks generated by this operation cannot be viewed on the Storage Analysis page of the new version in the Database Autonomy Service (DAS) console. If you want to view the tasks and results, call the related API operation to obtain data and save data to your computer.
 * - If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
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
 * @description Call this API to delete a stress testing task. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DeleteCloudBenchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudBenchTaskResponse
 */
DeleteCloudBenchTaskResponse Client::deleteCloudBenchTaskWithOptions(const DeleteCloudBenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @description Call this API to delete a stress testing task. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DeleteCloudBenchTaskRequest
 * @return DeleteCloudBenchTaskResponse
 */
DeleteCloudBenchTaskResponse Client::deleteCloudBenchTask(const DeleteCloudBenchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudBenchTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a cross-product whitelist template for a user.
 *
 * @description - This operation is used to delete the released DBgateway metadata from intelligent stress testing tasks created by the [CreateCloudBenchTasks](https://help.aliyun.com/document_detail/230665.html) operation.
 * - When using the SDK to call DAS, specify the region as cn-shanghai.
 * > When a DBGateway has no heartbeat with the access point for more than 20 seconds, the DBGateway is in the stopped state.
 *
 * @param request DeleteSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityIPGroupResponse
 */
DeleteSecurityIPGroupResponse Client::deleteSecurityIPGroupWithOptions(const DeleteSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.getGlobalSecurityGroupId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.getRegionName();
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
 * @summary Deletes a cross-product whitelist template for a user.
 *
 * @description - This operation is used to delete the released DBgateway metadata from intelligent stress testing tasks created by the [CreateCloudBenchTasks](https://help.aliyun.com/document_detail/230665.html) operation.
 * - When using the SDK to call DAS, specify the region as cn-shanghai.
 * > When a DBGateway has no heartbeat with the access point for more than 20 seconds, the DBGateway is in the stopped state.
 *
 * @param request DeleteSecurityIPGroupRequest
 * @return DeleteSecurityIPGroupResponse
 */
DeleteSecurityIPGroupResponse Client::deleteSecurityIPGroup(const DeleteSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the metadata of a stopped database gateway.
 *
 * @description Call this API to delete metadata for inactive database gateway instances that were created during stress testing created by the [CreateCloudBenchTasks](https://help.aliyun.com/document_detail/230665.html) operation.
 * When you use an SDK to call the DAS service, you must specify the region as `cn-shanghai`.
 * > A database gateway is considered "stopped" if it has not sent a heartbeat to the DAS service for more than 20 seconds.
 *
 * @param request DeleteStopGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStopGatewayResponse
 */
DeleteStopGatewayResponse Client::deleteStopGatewayWithOptions(const DeleteStopGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
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
 * @summary Deletes the metadata of a stopped database gateway.
 *
 * @description Call this API to delete metadata for inactive database gateway instances that were created during stress testing created by the [CreateCloudBenchTasks](https://help.aliyun.com/document_detail/230665.html) operation.
 * When you use an SDK to call the DAS service, you must specify the region as `cn-shanghai`.
 * > A database gateway is considered "stopped" if it has not sent a heartbeat to the DAS service for more than 20 seconds.
 *
 * @param request DeleteStopGatewayRequest
 * @return DeleteStopGatewayResponse
 */
DeleteStopGatewayResponse Client::deleteStopGateway(const DeleteStopGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStopGatewayWithOptions(request, runtime);
}

/**
 * @summary Queries the list of audit alert logs for alert search and alert handling.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeAuditLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditLogsResponse
 */
DescribeAuditLogsResponse Client::describeAuditLogsWithOptions(const DescribeAuditLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncRequestId()) {
    query["AsyncRequestId"] = request.getAsyncRequestId();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientUa()) {
    query["ClientUa"] = request.getClientUa();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasEffectRowRange()) {
    query["EffectRowRange"] = request.getEffectRowRange();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecuteTimeRange()) {
    query["ExecuteTimeRange"] = request.getExecuteTimeRange();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIpType()) {
    query["IpType"] = request.getIpType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLoadWhiteList()) {
    query["LoadWhiteList"] = request.getLoadWhiteList();
  }

  if (!!request.hasLogQueryOpJson()) {
    query["LogQueryOpJson"] = request.getLogQueryOpJson();
  }

  if (!!request.hasLogSource()) {
    query["LogSource"] = request.getLogSource();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasOssObjectKey()) {
    query["OssObjectKey"] = request.getOssObjectKey();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRuleAggQuery()) {
    query["RuleAggQuery"] = request.getRuleAggQuery();
  }

  if (!!request.hasRuleCategory()) {
    query["RuleCategory"] = request.getRuleCategory();
  }

  if (!!request.hasRuleID()) {
    query["RuleID"] = request.getRuleID();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSqlText()) {
    query["SqlText"] = request.getSqlText();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditLogs"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditLogsResponse>();
}

/**
 * @summary Queries the list of audit alert logs for alert search and alert handling.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeAuditLogsRequest
 * @return DescribeAuditLogsResponse
 */
DescribeAuditLogsResponse Client::describeAuditLogs(const DescribeAuditLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of the auto scaling feature for an instance.
 *
 * @description Before you call this operation, take note of the following items:
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeAutoScalingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoScalingConfigResponse
 */
DescribeAutoScalingConfigResponse Client::describeAutoScalingConfigWithOptions(const DescribeAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request DescribeAutoScalingConfigRequest
 * @return DescribeAutoScalingConfigResponse
 */
DescribeAutoScalingConfigResponse Client::describeAutoScalingConfig(const DescribeAutoScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoScalingConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the elastic scaling history of an instance.
 *
 * @description - Currently, only the automatic performance scaling history of ApsaraDB RDS for MySQL instances in the high-availability series with cloud disks is supported.
 * - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When you invoke DAS by using the SDK, set the region to cn-shanghai.
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
 * @summary Queries the elastic scaling history of an instance.
 *
 * @description - Currently, only the automatic performance scaling history of ApsaraDB RDS for MySQL instances in the high-availability series with cloud disks is supported.
 * - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When you invoke DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeAutoScalingHistoryRequest
 * @return DescribeAutoScalingHistoryResponse
 */
DescribeAutoScalingHistoryResponse Client::describeAutoScalingHistory(const DescribeAutoScalingHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoScalingHistoryWithOptions(request, runtime);
}

/**
 * @summary Returns details of a cache analysis task.
 *
 * @description Before you call this operation, take note of the following items:
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to ApsaraDB for Redis.
 * > Returns the top 500 keys in a cache analysis task.
 *
 * @param request DescribeCacheAnalysisJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCacheAnalysisJobResponse
 */
DescribeCacheAnalysisJobResponse Client::describeCacheAnalysisJobWithOptions(const DescribeCacheAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Returns details of a cache analysis task.
 *
 * @description Before you call this operation, take note of the following items:
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to ApsaraDB for Redis.
 * > Returns the top 500 keys in a cache analysis task.
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to ApsaraDB for Redis.
 *
 * @param request DescribeCacheAnalysisJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCacheAnalysisJobsResponse
 */
DescribeCacheAnalysisJobsResponse Client::describeCacheAnalysisJobsWithOptions(const DescribeCacheAnalysisJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to ApsaraDB for Redis.
 *
 * @param request DescribeCacheAnalysisJobsRequest
 * @return DescribeCacheAnalysisJobsResponse
 */
DescribeCacheAnalysisJobsResponse Client::describeCacheAnalysisJobs(const DescribeCacheAnalysisJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCacheAnalysisJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of stress testing tasks.
 *
 * @description Database Autonomy Service (DAS) provides intelligent stress testing features to help you verify whether your instance specifications need to be scaled up to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudBenchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudBenchTasksResponse
 */
DescribeCloudBenchTasksResponse Client::describeCloudBenchTasksWithOptions(const DescribeCloudBenchTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
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
 * @summary Queries the list of stress testing tasks.
 *
 * @description Database Autonomy Service (DAS) provides intelligent stress testing features to help you verify whether your instance specifications need to be scaled up to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
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
 * @description Database Autonomy Service (DAS) provides stress testing features to help you verify whether your instance specifications need to be scaled up to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudbenchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudbenchTaskResponse
 */
DescribeCloudbenchTaskResponse Client::describeCloudbenchTaskWithOptions(const DescribeCloudbenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @description Database Autonomy Service (DAS) provides stress testing features to help you verify whether your instance specifications need to be scaled up to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudbenchTaskRequest
 * @return DescribeCloudbenchTaskResponse
 */
DescribeCloudbenchTaskResponse Client::describeCloudbenchTask(const DescribeCloudbenchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudbenchTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the detailed configuration, file paths, and execution commands for a specific stress test task.
 *
 * @description Call this API to get the configuration details of a stress testing task for advanced debugging, or to understand how the Database Autonomy Service (DAS) stress testing feature operates. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request DescribeCloudbenchTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudbenchTaskConfigResponse
 */
DescribeCloudbenchTaskConfigResponse Client::describeCloudbenchTaskConfigWithOptions(const DescribeCloudbenchTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Retrieves the detailed configuration, file paths, and execution commands for a specific stress test task.
 *
 * @description Call this API to get the configuration details of a stress testing task for advanced debugging, or to understand how the Database Autonomy Service (DAS) stress testing feature operates. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable to the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB for Redis
 *
 * @param request DescribeDiagnosticReportListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosticReportListResponse
 */
DescribeDiagnosticReportListResponse Client::describeDiagnosticReportListWithOptions(const DescribeDiagnosticReportListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable to the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB for Redis
 *
 * @param request DescribeDiagnosticReportListRequest
 * @return DescribeDiagnosticReportListResponse
 */
DescribeDiagnosticReportListResponse Client::describeDiagnosticReportList(const DescribeDiagnosticReportListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosticReportListWithOptions(request, runtime);
}

/**
 * @summary Queries the error log details of an instance within a specified time range.
 *
 * @description This operation queries the error log details of an instance within a specified time range.
 * Before you begin:
 * - The target database engine must be one of the following: ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, PolarDB for MySQL, PolarDB for PostgreSQL, PolarDB for PostgreSQL (Compatible with Oracle), or ApsaraDB for MongoDB.
 * - If you use the Alibaba Cloud or DAS SDK, use the latest version.
 * - When you call DAS operations by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeErrorLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeErrorLogRecordsResponse
 */
DescribeErrorLogRecordsResponse Client::describeErrorLogRecordsWithOptions(const DescribeErrorLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.getFilters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRole()) {
    body["Role"] = request.getRole();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Queries the error log details of an instance within a specified time range.
 *
 * @description This operation queries the error log details of an instance within a specified time range.
 * Before you begin:
 * - The target database engine must be one of the following: ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, PolarDB for MySQL, PolarDB for PostgreSQL, PolarDB for PostgreSQL (Compatible with Oracle), or ApsaraDB for MongoDB.
 * - If you use the Alibaba Cloud or DAS SDK, use the latest version.
 * - When you call DAS operations by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeErrorLogRecordsRequest
 * @return DescribeErrorLogRecordsResponse
 */
DescribeErrorLogRecordsResponse Client::describeErrorLogRecords(const DescribeErrorLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeErrorLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeHotBigKeys operation to retrieve the hot keys and big keys in the current memory in real time.
 *
 * @description For keys with data structures of List, Hash, Set, or Zset, the top 3 keys are sorted and displayed by the number of elements in the key, and are recorded as big keys. If the QPS of a key exceeds 5,000, the key is recorded as a hot key. For more information about the definitions of big keys and hot keys, see [Top Key statistics](https://www.alibabacloud.com/help/en/das/user-guide/key-analysis).
 * >
 * > - For instances running Redis Community Edition 7.0.18, 6.0.2.9, 5.5.2.9, or earlier versions, or Tair (Enhanced Edition) in-memory instances running version 5.0.50, 25.2.0.0, or earlier versions, a key with a QPS greater than 3,000 is recorded as a hot key. This threshold cannot be adjusted.
 * - When using the Alibaba Cloud SDK, make sure the version of aliyun-sdk-core is later than 4.3.3. We recommend that you use the latest version.
 * - Use DAS SDK 1.0.2 or later.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 * - This operation applies only to the following Redis instances:
 *     - The instance is Redis Community Edition or Tair (Redis® OSS-Compatible) in-memory.
 *     - The minor version of the instance is the latest.
 *
 * @param request DescribeHotBigKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHotBigKeysResponse
 */
DescribeHotBigKeysResponse Client::describeHotBigKeysWithOptions(const DescribeHotBigKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
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
 * @summary Calls the DescribeHotBigKeys operation to retrieve the hot keys and big keys in the current memory in real time.
 *
 * @description For keys with data structures of List, Hash, Set, or Zset, the top 3 keys are sorted and displayed by the number of elements in the key, and are recorded as big keys. If the QPS of a key exceeds 5,000, the key is recorded as a hot key. For more information about the definitions of big keys and hot keys, see [Top Key statistics](https://www.alibabacloud.com/help/en/das/user-guide/key-analysis).
 * >
 * > - For instances running Redis Community Edition 7.0.18, 6.0.2.9, 5.5.2.9, or earlier versions, or Tair (Enhanced Edition) in-memory instances running version 5.0.50, 25.2.0.0, or earlier versions, a key with a QPS greater than 3,000 is recorded as a hot key. This threshold cannot be adjusted.
 * - When using the Alibaba Cloud SDK, make sure the version of aliyun-sdk-core is later than 4.3.3. We recommend that you use the latest version.
 * - Use DAS SDK 1.0.2 or later.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 * - This operation applies only to the following Redis instances:
 *     - The instance is Redis Community Edition or Tair (Redis® OSS-Compatible) in-memory.
 *     - The minor version of the instance is the latest.
 *
 * @param request DescribeHotBigKeysRequest
 * @return DescribeHotBigKeysResponse
 */
DescribeHotBigKeysResponse Client::describeHotBigKeys(const DescribeHotBigKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHotBigKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the hot keys of a Redis instance by calling the DescribeHotKeys operation.
 *
 * @description Before you begin:
 * - When using the Alibaba Cloud SDK, make sure the version of aliyun-sdk-core is later than 4.3.3. Use the latest version.
 * - The version of the DAS SDK must be 1.0.2 or later.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 * - This operation applies only to the following Redis instances:
 *     - The instance is a Redis Community Edition instance or a Tair (Redis® OSS-Compatible) memory-optimized instance.
 *     - The minor engine version of the instance is the latest.
 *
 * @param request DescribeHotKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHotKeysResponse
 */
DescribeHotKeysResponse Client::describeHotKeysWithOptions(const DescribeHotKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
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
 * @summary Queries the hot keys of a Redis instance by calling the DescribeHotKeys operation.
 *
 * @description Before you begin:
 * - When using the Alibaba Cloud SDK, make sure the version of aliyun-sdk-core is later than 4.3.3. Use the latest version.
 * - The version of the DAS SDK must be 1.0.2 or later.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 * - This operation applies only to the following Redis instances:
 *     - The instance is a Redis Community Edition instance or a Tair (Redis® OSS-Compatible) memory-optimized instance.
 *     - The minor engine version of the instance is the latest.
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
 * @description - For more information about the database instances that support DAS Enterprise Edition, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to DAS Enterprise Edition V1 and V2.
 * > We recommend that you call the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation to query the DAS Enterprise Edition configurations of a database instance.
 *
 * @param request DescribeInstanceDasProRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDasProResponse
 */
DescribeInstanceDasProResponse Client::describeInstanceDasProWithOptions(const DescribeInstanceDasProRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @description - For more information about the database instances that support DAS Enterprise Edition, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to DAS Enterprise Edition V1 and V2.
 * > We recommend that you call the [DescribeSqlLogConfig](https://help.aliyun.com/document_detail/2778837.html) operation to query the DAS Enterprise Edition configurations of a database instance.
 *
 * @param request DescribeInstanceDasProRequest
 * @return DescribeInstanceDasProResponse
 */
DescribeInstanceDasProResponse Client::describeInstanceDasPro(const DescribeInstanceDasProRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDasProWithOptions(request, runtime);
}

/**
 * @summary Obtain the execution plan for an SQL statement.
 *
 * @description - This operation supports only ApsaraDB RDS for MySQL and PolarDB for MySQL instances.
 * - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When calling the DAS service with the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeQueryExplainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQueryExplainResponse
 */
DescribeQueryExplainResponse Client::describeQueryExplainWithOptions(const DescribeQueryExplainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDbName()) {
    body["DbName"] = request.getDbName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSchema()) {
    body["Schema"] = request.getSchema();
  }

  if (!!request.hasSql()) {
    body["Sql"] = request.getSql();
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
 * @summary Obtain the execution plan for an SQL statement.
 *
 * @description - This operation supports only ApsaraDB RDS for MySQL and PolarDB for MySQL instances.
 * - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When calling the DAS service with the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeQueryExplainRequest
 * @return DescribeQueryExplainResponse
 */
DescribeQueryExplainResponse Client::describeQueryExplain(const DescribeQueryExplainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQueryExplainWithOptions(request, runtime);
}

/**
 * @summary Displays the details of a cross-engine whitelist template for a user.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIPGroupResponse
 */
DescribeSecurityIPGroupResponse Client::describeSecurityIPGroupWithOptions(const DescribeSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionName()) {
    query["RegionName"] = request.getRegionName();
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
 * @summary Displays the details of a cross-engine whitelist template for a user.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSecurityIPGroupRequest
 * @return DescribeSecurityIPGroupResponse
 */
DescribeSecurityIPGroupResponse Client::describeSecurityIPGroup(const DescribeSecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Displays the binding information between a cross-engine whitelist template and instances for a user.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSecurityIPGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIPGroupRelationResponse
 */
DescribeSecurityIPGroupRelationResponse Client::describeSecurityIPGroupRelationWithOptions(const DescribeSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.getRegionName();
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
 * @summary Displays the binding information between a cross-engine whitelist template and instances for a user.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSecurityIPGroupRelationRequest
 * @return DescribeSecurityIPGroupRelationResponse
 */
DescribeSecurityIPGroupRelationResponse Client::describeSecurityIPGroupRelation(const DescribeSecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Asynchronously retrieves slow log trends data for an instance.
 *
 * @description **Before using this operation, make sure that you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/156195.html) of DAS.**
 * Before you begin:
 * - DAS Enterprise Edition or the Alibaba Cloud Managed Services (not yet online) is enabled for the requested instance.
 * - If you use the Alibaba Cloud SDK or DAS SDK, use the latest version.
 * - When you invoke DAS by using the SDK, set the region to cn-shanghai.
 * This operation uses asynchronous calls and does not immediately return complete results. If the value of isFinish in the response is false, wait 1 second and invoke the operation again until the value of isFinish is true, which indicates that complete results are returned.
 *
 * @param request DescribeSlowLogHistogramAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogHistogramAsyncResponse
 */
DescribeSlowLogHistogramAsyncResponse Client::describeSlowLogHistogramAsyncWithOptions(const DescribeSlowLogHistogramAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.getFilters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Asynchronously retrieves slow log trends data for an instance.
 *
 * @description **Before using this operation, make sure that you fully understand the [billing methods and pricing](https://help.aliyun.com/document_detail/156195.html) of DAS.**
 * Before you begin:
 * - DAS Enterprise Edition or the Alibaba Cloud Managed Services (not yet online) is enabled for the requested instance.
 * - If you use the Alibaba Cloud SDK or DAS SDK, use the latest version.
 * - When you invoke DAS by using the SDK, set the region to cn-shanghai.
 * This operation uses asynchronous calls and does not immediately return complete results. If the value of isFinish in the response is false, wait 1 second and invoke the operation again until the value of isFinish is true, which indicates that complete results are returned.
 *
 * @param request DescribeSlowLogHistogramAsyncRequest
 * @return DescribeSlowLogHistogramAsyncResponse
 */
DescribeSlowLogHistogramAsyncResponse Client::describeSlowLogHistogramAsync(const DescribeSlowLogHistogramAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogHistogramAsyncWithOptions(request, runtime);
}

/**
 * @summary Queries slow query log records of a database instance with support for filtering and sorting by multiple conditions.
 *
 * @description - `InstanceId` specifies the instance ID. This parameter is required.
 * - `StartTime` and `EndTime` specify the time range for the query. These parameters are required.
 * - Set `PageNumber` and `PageSize` to retrieve results by paging.
 * - Use the `OrderBy` parameter to sort results. For sortable fields, refer to the References.
 * - Use the `Filters` parameter to further refine query conditions, such as filtering by host address or SQL ID.
 * <notice>Certain database types (such as PostgreSQL and PolarDB for PostgreSQL) do not support specific sorting methods. Settings appropriate parameters as needed.</notice>
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.getAsc();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.getFilters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Queries slow query log records of a database instance with support for filtering and sorting by multiple conditions.
 *
 * @description - `InstanceId` specifies the instance ID. This parameter is required.
 * - `StartTime` and `EndTime` specify the time range for the query. These parameters are required.
 * - Set `PageNumber` and `PageSize` to retrieve results by paging.
 * - Use the `OrderBy` parameter to sort results. For sortable fields, refer to the References.
 * - Use the `Filters` parameter to further refine query conditions, such as filtering by host address or SQL ID.
 * <notice>Certain database types (such as PostgreSQL and PolarDB for PostgreSQL) do not support specific sorting methods. Settings appropriate parameters as needed.</notice>
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Retrieves slow query log statistics.
 *
 * @description **Before you call this operation, make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/156195.html) of Database Autonomy Service (DAS).**
 * Before you call this operation, make sure that the following requirements are met:
 * - Alibaba Cloud Managed Services is enabled for the instance.
 * - Use the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When you use an SDK to call the DAS service, set the region to cn-shanghai.
 * This operation is asynchronous and does not return the complete result immediately. If the \\`isFinish\\` parameter in the response is \\`false\\`, wait 1 second and send the request again. Repeat the request until the \\`isFinish\\` parameter is \\`true\\` to retrieve the complete result.
 *
 * @param request DescribeSlowLogStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogStatisticResponse
 */
DescribeSlowLogStatisticResponse Client::describeSlowLogStatisticWithOptions(const DescribeSlowLogStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAsc()) {
    body["Asc"] = request.getAsc();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.getFilters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
 * @summary Retrieves slow query log statistics.
 *
 * @description **Before you call this operation, make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/156195.html) of Database Autonomy Service (DAS).**
 * Before you call this operation, make sure that the following requirements are met:
 * - Alibaba Cloud Managed Services is enabled for the instance.
 * - Use the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When you use an SDK to call the DAS service, set the region to cn-shanghai.
 * This operation is asynchronous and does not return the complete result immediately. If the \\`isFinish\\` parameter in the response is \\`false\\`, wait 1 second and send the request again. Repeat the request until the \\`isFinish\\` parameter is \\`true\\` to retrieve the complete result.
 *
 * @param request DescribeSlowLogStatisticRequest
 * @return DescribeSlowLogStatisticResponse
 */
DescribeSlowLogStatisticResponse Client::describeSlowLogStatistic(const DescribeSlowLogStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the DAS Enterprise Edition configuration of a database instance.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSqlLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogConfigResponse
 */
DescribeSqlLogConfigResponse Client::describeSqlLogConfigWithOptions(const DescribeSqlLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Queries the DAS Enterprise Edition configuration of a database instance.
 *
 * @description Before you begin:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSqlLogConfigRequest
 * @return DescribeSqlLogConfigResponse
 */
DescribeSqlLogConfigResponse Client::describeSqlLogConfig(const DescribeSqlLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogConfigWithOptions(request, runtime);
}

/**
 * @summary Call DescribeSqlLogRecords to query log details in DAS Enterprise Edition.
 *
 * @description Before calling this operation, note the following:
 * - When you use an Alibaba Cloud or Database Autonomy Service (DAS) SDK, we recommend that you use the latest version.
 * - When you call the DAS service by using an SDK, you must set the region to `cn-shanghai`.
 *
 * @param request DescribeSqlLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogRecordsResponse
 */
DescribeSqlLogRecordsResponse Client::describeSqlLogRecordsWithOptions(const DescribeSqlLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Call DescribeSqlLogRecords to query log details in DAS Enterprise Edition.
 *
 * @description Before calling this operation, note the following:
 * - When you use an Alibaba Cloud or Database Autonomy Service (DAS) SDK, we recommend that you use the latest version.
 * - When you call the DAS service by using an SDK, you must set the region to `cn-shanghai`.
 *
 * @param request DescribeSqlLogRecordsRequest
 * @return DescribeSqlLogRecordsResponse
 */
DescribeSqlLogRecordsResponse Client::describeSqlLogRecords(const DescribeSqlLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Invokes the DescribeSqlLogStatistic operation to query the statistics information of DAS Enterprise Edition.
 *
 * @description Before you begin:
 * - Use the latest version of Alibaba Cloud SDK or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSqlLogStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogStatisticResponse
 */
DescribeSqlLogStatisticResponse Client::describeSqlLogStatisticWithOptions(const DescribeSqlLogStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
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
 * @summary Invokes the DescribeSqlLogStatistic operation to query the statistics information of DAS Enterprise Edition.
 *
 * @description Before you begin:
 * - Use the latest version of Alibaba Cloud SDK or DAS SDK.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSqlLogStatisticRequest
 * @return DescribeSqlLogStatisticResponse
 */
DescribeSqlLogStatisticResponse Client::describeSqlLogStatistic(const DescribeSqlLogStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogStatisticWithOptions(request, runtime);
}

/**
 * @summary Call the `DescribeSqlLogTask` operation to query the details of an offline task in DAS enterprise edition.
 *
 * @description Note the following before you call this operation:
 * - We recommend using the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When calling the DAS service with an SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSqlLogTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogTaskResponse
 */
DescribeSqlLogTaskResponse Client::describeSqlLogTaskWithOptions(const DescribeSqlLogTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
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
 * @summary Call the `DescribeSqlLogTask` operation to query the details of an offline task in DAS enterprise edition.
 *
 * @description Note the following before you call this operation:
 * - We recommend using the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When calling the DAS service with an SDK, set the region to cn-shanghai.
 *
 * @param request DescribeSqlLogTaskRequest
 * @return DescribeSqlLogTaskResponse
 */
DescribeSqlLogTaskResponse Client::describeSqlLogTask(const DescribeSqlLogTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlLogTaskWithOptions(request, runtime);
}

/**
 * @summary Lists the audit log tasks for an instance.
 *
 * @description The following prerequisites must be met to call this operation:
 * - We recommend that you use the latest version of the Alibaba Cloud SDK or the DAS SDK.
 * - When you use an SDK to call the DAS service, you must set the region to `cn-shanghai`.
 *
 * @param request DescribeSqlLogTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlLogTasksResponse
 */
DescribeSqlLogTasksResponse Client::describeSqlLogTasksWithOptions(const DescribeSqlLogTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.getFilters();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Lists the audit log tasks for an instance.
 *
 * @description The following prerequisites must be met to call this operation:
 * - We recommend that you use the latest version of the Alibaba Cloud SDK or the DAS SDK.
 * - When you use an SDK to call the DAS service, you must set the region to `cn-shanghai`.
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
 * - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * - The version of Database Autonomy Service (DAS) SDK must be 1.0.2 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is available only for an ApsaraDB for Redis instance of one of the following versions:
 *   - The instance is ApsaraDB for Redis Community Edition instances that use a major version of 5.0 or later or a performance-enhanced instance of the ApsaraDB for Redis Enhanced Edition (Tair).
 *   - The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeTopBigKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTopBigKeysResponse
 */
DescribeTopBigKeysResponse Client::describeTopBigKeysWithOptions(const DescribeTopBigKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than 4.3.3. We recommend that you use the latest version.
 * - The version of Database Autonomy Service (DAS) SDK must be 1.0.2 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is available only for an ApsaraDB for Redis instance of one of the following versions:
 *   - The instance is ApsaraDB for Redis Community Edition instances that use a major version of 5.0 or later or a performance-enhanced instance of the ApsaraDB for Redis Enhanced Edition (Tair).
 *   - The ApsaraDB for Redis instance is updated to the latest minor version.
 *
 * @param request DescribeTopBigKeysRequest
 * @return DescribeTopBigKeysResponse
 */
DescribeTopBigKeysResponse Client::describeTopBigKeys(const DescribeTopBigKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTopBigKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the top 100 hot keys within a specified time period.
 *
 * @description A key is identified as a hot key if its QPS exceeds 3,000.
 * - If you use an Alibaba Cloud SDK, ensure that the version of aliyun-sdk-core is 4.3.3 or later. We recommend using the latest version.
 * - The DAS SDK version must be 1.0.2 or later.
 * - When calling the DAS service with an SDK, set the region to cn-shanghai.
 * - This operation applies only to the following Redis instances:
 *   - The instance is an open source Redis instance or a Tair (Enterprise Edition) memory-optimized instance.
 *   - The instance runs on the latest minor version.
 *
 * @param request DescribeTopHotKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTopHotKeysResponse
 */
DescribeTopHotKeysResponse Client::describeTopHotKeysWithOptions(const DescribeTopHotKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the top 100 hot keys within a specified time period.
 *
 * @description A key is identified as a hot key if its QPS exceeds 3,000.
 * - If you use an Alibaba Cloud SDK, ensure that the version of aliyun-sdk-core is 4.3.3 or later. We recommend using the latest version.
 * - The DAS SDK version must be 1.0.2 or later.
 * - When calling the DAS service with an SDK, set the region to cn-shanghai.
 * - This operation applies only to the following Redis instances:
 *   - The instance is an open source Redis instance or a Tair (Enterprise Edition) memory-optimized instance.
 *   - The instance runs on the latest minor version.
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
 *
 * @param request DisableAllSqlConcurrencyControlRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAllSqlConcurrencyControlRulesResponse
 */
DisableAllSqlConcurrencyControlRulesResponse Client::disableAllSqlConcurrencyControlRulesWithOptions(const DisableAllSqlConcurrencyControlRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
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
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
 * @description - For more information about the database instances that support DAS Enterprise Edition, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to DAS Enterprise Edition V1.
 * > We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to enable or disable DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request DisableDasProRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDasProResponse
 */
DisableDasProResponse Client::disableDasProWithOptions(const DisableDasProRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @description - For more information about the database instances that support DAS Enterprise Edition, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to DAS Enterprise Edition V1.
 * > We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to enable or disable DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
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
 * - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to ApsaraDB for Redis instances.
 *
 * @param request DisableInstanceDasConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInstanceDasConfigResponse
 */
DisableInstanceDasConfigResponse Client::disableInstanceDasConfigWithOptions(const DisableInstanceDasConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScaleType()) {
    query["ScaleType"] = request.getScaleType();
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
 * - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to ApsaraDB for Redis instances.
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
 *
 * @param request DisableSqlConcurrencyControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSqlConcurrencyControlResponse
 */
DisableSqlConcurrencyControlResponse Client::disableSqlConcurrencyControlWithOptions(const DisableSqlConcurrencyControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemId()) {
    query["ItemId"] = request.getItemId();
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
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
 * @description - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to DAS Enterprise Edition V1.
 * > We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to activate or deactivate DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request EnableDasProRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDasProResponse
 */
EnableDasProResponse Client::enableDasProWithOptions(const EnableDasProRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSqlRetention()) {
    query["SqlRetention"] = request.getSqlRetention();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @description - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation is applicable only to DAS Enterprise Edition V1.
 * > We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to activate or deactivate DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
 *
 * @param request EnableSqlConcurrencyControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSqlConcurrencyControlResponse
 */
EnableSqlConcurrencyControlResponse Client::enableSqlConcurrencyControlWithOptions(const EnableSqlConcurrencyControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrencyControlTime()) {
    query["ConcurrencyControlTime"] = request.getConcurrencyControlTime();
  }

  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxConcurrency()) {
    query["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasSqlKeywords()) {
    query["SqlKeywords"] = request.getSqlKeywords();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.getSqlType();
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
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
 * @description > GetAsyncErrorRequestListByCode is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of the **isFinish** parameter is **false** in the response, wait for 1 second and then send a request again. If the value of the **isFinish** parameter is **true**, the complete results are returned.
 * - This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Enable and manage DAS Economy Edition and DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * - When you call this operation, the value of the SqlId parameter changes due to the optimization of the SQL template algorithm starting from September 1, 2024. For more information, see [[Notice\\] Optimization of the SQL template algorithm](~~2845725~~).
 *
 * @param request GetAsyncErrorRequestListByCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncErrorRequestListByCodeResponse
 */
GetAsyncErrorRequestListByCodeResponse Client::getAsyncErrorRequestListByCodeWithOptions(const GetAsyncErrorRequestListByCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasErrorCode()) {
    query["ErrorCode"] = request.getErrorCode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
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
 * @description > GetAsyncErrorRequestListByCode is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of the **isFinish** parameter is **false** in the response, wait for 1 second and then send a request again. If the value of the **isFinish** parameter is **true**, the complete results are returned.
 * - This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Enable and manage DAS Economy Edition and DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 * - When you call this operation, the value of the SqlId parameter changes due to the optimization of the SQL template algorithm starting from September 1, 2024. For more information, see [[Notice\\] Optimization of the SQL template algorithm](~~2845725~~).
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
 * @description > GetAsyncErrorRequestStatByCode is an asynchronous operation After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * - This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetAsyncErrorRequestStatByCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncErrorRequestStatByCodeResponse
 */
GetAsyncErrorRequestStatByCodeResponse Client::getAsyncErrorRequestStatByCodeWithOptions(const GetAsyncErrorRequestStatByCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
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
 * @description > GetAsyncErrorRequestStatByCode is an asynchronous operation After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * - This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetAsyncErrorRequestStatByCodeRequest
 * @return GetAsyncErrorRequestStatByCodeResponse
 */
GetAsyncErrorRequestStatByCodeResponse Client::getAsyncErrorRequestStatByCode(const GetAsyncErrorRequestStatByCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsyncErrorRequestStatByCodeWithOptions(request, runtime);
}

/**
 * @summary Call GetAsyncErrorRequestStatResult to asynchronously get the execution error count for a specific SQL statement from the SQL Insight results of a database instance.
 *
 * @description > This is an asynchronous call, so the complete results are not returned immediately. If the **isFinish** field in the response is **false**, wait 1s and retry the call. The complete results are returned when **isFinish** is **true**.
 * - This operation supports only RDS MySQL and PolarDB for MySQL instances. Before you call this operation, ensure that DAS Enterprise Edition is enabled for the instance. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * - When you use an SDK to call DAS, you must set the region to cn-shanghai.
 *
 * @param request GetAsyncErrorRequestStatResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsyncErrorRequestStatResultResponse
 */
GetAsyncErrorRequestStatResultResponse Client::getAsyncErrorRequestStatResultWithOptions(const GetAsyncErrorRequestStatResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSqlIdList()) {
    query["SqlIdList"] = request.getSqlIdList();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
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
 * @summary Call GetAsyncErrorRequestStatResult to asynchronously get the execution error count for a specific SQL statement from the SQL Insight results of a database instance.
 *
 * @description > This is an asynchronous call, so the complete results are not returned immediately. If the **isFinish** field in the response is **false**, wait 1s and retry the call. The complete results are returned when **isFinish** is **true**.
 * - This operation supports only RDS MySQL and PolarDB for MySQL instances. Before you call this operation, ensure that DAS Enterprise Edition is enabled for the instance. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * - When you use an SDK to call DAS, you must set the region to cn-shanghai.
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
 * @description - This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call DAS, you must set the region to cn-shanghai.
 *
 * @param request GetAutoIncrementUsageStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoIncrementUsageStatisticResponse
 */
GetAutoIncrementUsageStatisticResponse Client::getAutoIncrementUsageStatisticWithOptions(const GetAutoIncrementUsageStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbNames()) {
    query["DbNames"] = request.getDbNames();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRatioFilter()) {
    query["RatioFilter"] = request.getRatioFilter();
  }

  if (!!request.hasRealTime()) {
    query["RealTime"] = request.getRealTime();
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
 * @description - This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call DAS, you must set the region to cn-shanghai.
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
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - The database instance is an ApsaraDB RDS for MySQL instance of High-availability Edition.
 * - The database instance has four or more cores, and **innodb_file_per_table** is set to **ON**.
 *
 * @param request GetAutoResourceOptimizeRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoResourceOptimizeRulesResponse
 */
GetAutoResourceOptimizeRulesResponse Client::getAutoResourceOptimizeRulesWithOptions(const GetAutoResourceOptimizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - The database instance is an ApsaraDB RDS for MySQL instance of High-availability Edition.
 * - The database instance has four or more cores, and **innodb_file_per_table** is set to **ON**.
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
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - The database instance that you want to manage must be of one of the following types:
 *   - ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *   - PolarDB for MySQL Cluster Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *
 * @param request GetAutoThrottleRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoThrottleRulesResponse
 */
GetAutoThrottleRulesResponse Client::getAutoThrottleRulesWithOptions(const GetAutoThrottleRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - The database instance that you want to manage must be of one of the following types:
 *   - ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *   - PolarDB for MySQL Cluster Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *
 * @param request GetAutoThrottleRulesRequest
 * @return GetAutoThrottleRulesResponse
 */
GetAutoThrottleRulesResponse Client::getAutoThrottleRules(const GetAutoThrottleRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoThrottleRulesWithOptions(request, runtime);
}

/**
 * @summary Returns details of autonomous notification events for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - After your instance is connected to DAS, notification events such as snapshot capture are triggered if DAS detects changes to database monitoring metrics during anomaly detection.
 * > You can query the details of notification events only if the autonomy center is enabled. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 *
 * @param request GetAutonomousNotifyEventContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutonomousNotifyEventContentResponse
 */
GetAutonomousNotifyEventContentResponse Client::getAutonomousNotifyEventContentWithOptions(const GetAutonomousNotifyEventContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSpanId()) {
    query["SpanId"] = request.getSpanId();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.getContext();
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
 * @summary Returns details of autonomous notification events for a database instance.
 *
 * @description Before you call this operation, take note of the following items:
 * - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - After your instance is connected to DAS, notification events such as snapshot capture are triggered if DAS detects changes to database monitoring metrics during anomaly detection.
 * > You can query the details of notification events only if the autonomy center is enabled. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
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
 * - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - After your instance is connected to DAS, notification events such as snapshot capture are triggered if DAS detects changes to database monitoring metrics during anomaly detection.
 * > You can query the details of notification events only if the autonomy center is enabled. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 *
 * @param request GetAutonomousNotifyEventsInRangeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutonomousNotifyEventsInRangeResponse
 */
GetAutonomousNotifyEventsInRangeResponse Client::getAutonomousNotifyEventsInRangeWithOptions(const GetAutonomousNotifyEventsInRangeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventContext()) {
    query["EventContext"] = request.getEventContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMinLevel()) {
    query["MinLevel"] = request.getMinLevel();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasPageOffset()) {
    query["PageOffset"] = request.getPageOffset();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasContext()) {
    query["__context"] = request.getContext();
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
 * - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - After your instance is connected to DAS, notification events such as snapshot capture are triggered if DAS detects changes to database monitoring metrics during anomaly detection.
 * > You can query the details of notification events only if the autonomy center is enabled. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
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
 * @description - This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetBlockingDetailListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBlockingDetailListResponse
 */
GetBlockingDetailListResponse Client::getBlockingDetailListWithOptions(const GetBlockingDetailListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbNameList()) {
    query["DbNameList"] = request.getDbNameList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryHash()) {
    query["QueryHash"] = request.getQueryHash();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @description - This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.getSrcIp();
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
 * @summary This API uses Server-Sent Events (SSE) to interact with the DAS agent. You can use this API for features such as Q&A and performance diagnostics.
 *
 * @description This is a paid API. You are charged based on the number of output characters. Before you use this API, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/das/product-overview/billing-details-of-the-previous-version?spm=a2c4g.11186623.help-menu-63907.d_0_1_0.b7203b87MDNqHO\\&scm=20140722.H_156195._.OR_help-T_cn~zh-V_1#cad160563fbkd) of the DAS Agent product.
 *
 * @param request GetDasAgentSSERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDasAgentSSEResponse
 */
FutureGenerator<GetDasAgentSSEResponse> Client::getDasAgentSSEWithSSE(const GetDasAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
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
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<GetDasAgentSSEResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary This API uses Server-Sent Events (SSE) to interact with the DAS agent. You can use this API for features such as Q&A and performance diagnostics.
 *
 * @description This is a paid API. You are charged based on the number of output characters. Before you use this API, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/das/product-overview/billing-details-of-the-previous-version?spm=a2c4g.11186623.help-menu-63907.d_0_1_0.b7203b87MDNqHO\\&scm=20140722.H_156195._.OR_help-T_cn~zh-V_1#cad160563fbkd) of the DAS Agent product.
 *
 * @param request GetDasAgentSSERequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDasAgentSSEResponse
 */
GetDasAgentSSEResponse Client::getDasAgentSSEWithOptions(const GetDasAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
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
 * @summary This API uses Server-Sent Events (SSE) to interact with the DAS agent. You can use this API for features such as Q&A and performance diagnostics.
 *
 * @description This is a paid API. You are charged based on the number of output characters. Before you use this API, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/das/product-overview/billing-details-of-the-previous-version?spm=a2c4g.11186623.help-menu-63907.d_0_1_0.b7203b87MDNqHO\\&scm=20140722.H_156195._.OR_help-T_cn~zh-V_1#cad160563fbkd) of the DAS Agent product.
 *
 * @param request GetDasAgentSSERequest
 * @return GetDasAgentSSEResponse
 */
GetDasAgentSSEResponse Client::getDasAgentSSE(const GetDasAgentSSERequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDasAgentSSEWithOptions(request, runtime);
}

/**
 * @summary Queries the storage usage of DAS Enterprise Edition V1 or V2 for a database instance.
 *
 * @description - For information about the supported databases, see [DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When invoking DAS by using the SDK, set the region to cn-shanghai.
 * - This operation applies only to DAS Enterprise Edition V1 and V2.
 * >Use the [DescribeSqlLogStatistic](https://help.aliyun.com/document_detail/2778836.html) operation to query the statistics information of DAS Enterprise Edition.
 *
 * @param request GetDasProServiceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDasProServiceUsageResponse
 */
GetDasProServiceUsageResponse Client::getDasProServiceUsageWithOptions(const GetDasProServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Queries the storage usage of DAS Enterprise Edition V1 or V2 for a database instance.
 *
 * @description - For information about the supported databases, see [DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When invoking DAS by using the SDK, set the region to cn-shanghai.
 * - This operation applies only to DAS Enterprise Edition V1 and V2.
 * >Use the [DescribeSqlLogStatistic](https://help.aliyun.com/document_detail/2778836.html) operation to query the statistics information of DAS Enterprise Edition.
 *
 * @param request GetDasProServiceUsageRequest
 * @return GetDasProServiceUsageResponse
 */
GetDasProServiceUsageResponse Client::getDasProServiceUsage(const GetDasProServiceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDasProServiceUsageWithOptions(request, runtime);
}

/**
 * @summary Retrieves hot data from SQL audit logs.
 *
 * @description Before you call this API, ensure that you meet the following requirements:
 * - Use the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When using an SDK to call the DAS service, specify the region as `cn-shanghai`.
 * - Supported engines: PolarDB MySQL, ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and ApsaraDB RDS for SQLServer.
 * - Enable log indexing for the instance.
 * > The query start time must be within the last 7 days. The query duration cannot exceed 1 day. The API returns up to 10,000 records.
 *
 * @param request GetDasSQLLogHotDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDasSQLLogHotDataResponse
 */
GetDasSQLLogHotDataResponse Client::getDasSQLLogHotDataWithOptions(const GetDasSQLLogHotDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.getAccountName();
  }

  if (!!request.hasChildDBInstanceIDs()) {
    body["ChildDBInstanceIDs"] = request.getChildDBInstanceIDs();
  }

  if (!!request.hasDBName()) {
    body["DBName"] = request.getDBName();
  }

  if (!!request.hasEnd()) {
    body["End"] = request.getEnd();
  }

  if (!!request.hasFail()) {
    body["Fail"] = request.getFail();
  }

  if (!!request.hasHostAddress()) {
    body["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogicalOperator()) {
    body["LogicalOperator"] = request.getLogicalOperator();
  }

  if (!!request.hasMaxLatancy()) {
    body["MaxLatancy"] = request.getMaxLatancy();
  }

  if (!!request.hasMaxRecordsPerPage()) {
    body["MaxRecordsPerPage"] = request.getMaxRecordsPerPage();
  }

  if (!!request.hasMaxRows()) {
    body["MaxRows"] = request.getMaxRows();
  }

  if (!!request.hasMaxScanRows()) {
    body["MaxScanRows"] = request.getMaxScanRows();
  }

  if (!!request.hasMaxSpillCnt()) {
    body["MaxSpillCnt"] = request.getMaxSpillCnt();
  }

  if (!!request.hasMinLatancy()) {
    body["MinLatancy"] = request.getMinLatancy();
  }

  if (!!request.hasMinRows()) {
    body["MinRows"] = request.getMinRows();
  }

  if (!!request.hasMinScanRows()) {
    body["MinScanRows"] = request.getMinScanRows();
  }

  if (!!request.hasMinSpillCnt()) {
    body["MinSpillCnt"] = request.getMinSpillCnt();
  }

  if (!!request.hasPageNumbers()) {
    body["PageNumbers"] = request.getPageNumbers();
  }

  if (!!request.hasQueryKeyword()) {
    body["QueryKeyword"] = request.getQueryKeyword();
  }

  if (!!request.hasRole()) {
    body["Role"] = request.getRole();
  }

  if (!!request.hasSortKey()) {
    body["SortKey"] = request.getSortKey();
  }

  if (!!request.hasSortMethod()) {
    body["SortMethod"] = request.getSortMethod();
  }

  if (!!request.hasSqlType()) {
    body["SqlType"] = request.getSqlType();
  }

  if (!!request.hasStart()) {
    body["Start"] = request.getStart();
  }

  if (!!request.hasState()) {
    body["State"] = request.getState();
  }

  if (!!request.hasThreadID()) {
    body["ThreadID"] = request.getThreadID();
  }

  if (!!request.hasTraceId()) {
    body["TraceId"] = request.getTraceId();
  }

  if (!!request.hasTransactionId()) {
    body["TransactionId"] = request.getTransactionId();
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
 * @summary Retrieves hot data from SQL audit logs.
 *
 * @description Before you call this API, ensure that you meet the following requirements:
 * - Use the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When using an SDK to call the DAS service, specify the region as `cn-shanghai`.
 * - Supported engines: PolarDB MySQL, ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and ApsaraDB RDS for SQLServer.
 * - Enable log indexing for the instance.
 * > The query start time must be within the last 7 days. The query duration cannot exceed 1 day. The API returns up to 10,000 records.
 *
 * @param request GetDasSQLLogHotDataRequest
 * @return GetDasSQLLogHotDataResponse
 */
GetDasSQLLogHotDataResponse Client::getDasSQLLogHotData(const GetDasSQLLogHotDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDasSQLLogHotDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves the detailed information for a single deadlock event.
 *
 * @description This API fetches the full details of a specific deadlock, including the transactions involved, the SQL statements, and the locks held and waited for. The deadlock can be from either a recent analysis or a full historical analysis. For more information, see [Deadlock analysis](https://help.aliyun.com/document_detail/2858236.html).
 * Before you call this operation, ensure the following:
 * - **Supported engines**:
 *   - For recent deadlock analysis: ApsaraDB RDS for MySQL, self-managed MySQL, PolarDB for MySQL, PolarDB-X 2.0.
 *   - For full deadlock analysis: ApsaraDB RDS for MySQL or PolarDB for MySQL with [DAS Economy Edition](https://help.aliyun.com/document_detail/2666482.html) or [DAS Professional Edition](https://help.aliyun.com/document_detail/190912.html) enabled.
 * - **SDK version**: Use the latest version of the Alibaba Cloud SDK.
 * - **Region**: If you call the API via the SDK, set the region ID to `cn-shanghai`.
 *
 * @param request GetDeadLockDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeadLockDetailResponse
 */
GetDeadLockDetailResponse Client::getDeadLockDetailWithOptions(const GetDeadLockDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasTextId()) {
    query["TextId"] = request.getTextId();
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
 * @summary Retrieves the detailed information for a single deadlock event.
 *
 * @description This API fetches the full details of a specific deadlock, including the transactions involved, the SQL statements, and the locks held and waited for. The deadlock can be from either a recent analysis or a full historical analysis. For more information, see [Deadlock analysis](https://help.aliyun.com/document_detail/2858236.html).
 * Before you call this operation, ensure the following:
 * - **Supported engines**:
 *   - For recent deadlock analysis: ApsaraDB RDS for MySQL, self-managed MySQL, PolarDB for MySQL, PolarDB-X 2.0.
 *   - For full deadlock analysis: ApsaraDB RDS for MySQL or PolarDB for MySQL with [DAS Economy Edition](https://help.aliyun.com/document_detail/2666482.html) or [DAS Professional Edition](https://help.aliyun.com/document_detail/190912.html) enabled.
 * - **SDK version**: Use the latest version of the Alibaba Cloud SDK.
 * - **Region**: If you call the API via the SDK, set the region ID to `cn-shanghai`.
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
 * @description - This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetDeadLockDetailListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeadLockDetailListResponse
 */
GetDeadLockDetailListResponse Client::getDeadLockDetailListWithOptions(const GetDeadLockDetailListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbNameList()) {
    query["DbNameList"] = request.getDbNameList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @description - This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetDeadLockDetailListRequest
 * @return GetDeadLockDetailListResponse
 */
GetDeadLockDetailListResponse Client::getDeadLockDetailList(const GetDeadLockDetailListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeadLockDetailListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the historical analysis tasks for recent and full deadlock analysis.
 *
 * @description Retrieves the historical analysis records for recent and full deadlock analysis. For more information, see [Deadlock analysis](https://help.aliyun.com/document_detail/2858236.html).
 * The following requirements must be met before you call this operation:
 * - To query historical analysis records of recent deadlocks, the destination database engine must be RDS MySQL, self-managed MySQL, PolarDB for MySQL, or PolarDB-X 2.0.
 * - To query historical analysis records of full deadlocks, the destination database engine must be RDS MySQL or PolarDB for MySQL, and [DAS Alibaba Cloud Managed Services (formerly known as Economy Edition)](https://help.aliyun.com/document_detail/2666482.html) must be enabled.
 * - Use the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When you use an SDK to call the DAS service, set the region to cn-shanghai.
 *
 * @param request GetDeadLockHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeadLockHistoryResponse
 */
GetDeadLockHistoryResponse Client::getDeadLockHistoryWithOptions(const GetDeadLockHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves the historical analysis tasks for recent and full deadlock analysis.
 *
 * @description Retrieves the historical analysis records for recent and full deadlock analysis. For more information, see [Deadlock analysis](https://help.aliyun.com/document_detail/2858236.html).
 * The following requirements must be met before you call this operation:
 * - To query historical analysis records of recent deadlocks, the destination database engine must be RDS MySQL, self-managed MySQL, PolarDB for MySQL, or PolarDB-X 2.0.
 * - To query historical analysis records of full deadlocks, the destination database engine must be RDS MySQL or PolarDB for MySQL, and [DAS Alibaba Cloud Managed Services (formerly known as Economy Edition)](https://help.aliyun.com/document_detail/2666482.html) must be enabled.
 * - Use the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When you use an SDK to call the DAS service, set the region to cn-shanghai.
 *
 * @param request GetDeadLockHistoryRequest
 * @return GetDeadLockHistoryResponse
 */
GetDeadLockHistoryResponse Client::getDeadLockHistory(const GetDeadLockHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeadLockHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the deadlock count trend based on full deadlock analysis of error logs within a specified time range.
 *
 * @description Invokes this operation to query the deadlock count from full deadlock analysis within a specified time range. DAS periodically analyzes fault logs, parses deadlock information, and collects statistics on deadlock count trends. For details, see [Full deadlock analysis](https://help.aliyun.com/document_detail/2858236.html).
 * Before you begin:
 * - The database DPI engine must be RDS MySQL or PolarDB for MySQL, and [DAS Alibaba Cloud Managed Services (formerly DAS Economy Edition)](https://help.aliyun.com/document_detail/2666482.html) must be enabled.
 * - If you use the China site (aliyun.com) or DAS SDK, use the latest version.
 * - When you invoke DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request GetDeadlockHistogramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeadlockHistogramResponse
 */
GetDeadlockHistogramResponse Client::getDeadlockHistogramWithOptions(const GetDeadlockHistogramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Queries the deadlock count trend based on full deadlock analysis of error logs within a specified time range.
 *
 * @description Invokes this operation to query the deadlock count from full deadlock analysis within a specified time range. DAS periodically analyzes fault logs, parses deadlock information, and collects statistics on deadlock count trends. For details, see [Full deadlock analysis](https://help.aliyun.com/document_detail/2858236.html).
 * Before you begin:
 * - The database DPI engine must be RDS MySQL or PolarDB for MySQL, and [DAS Alibaba Cloud Managed Services (formerly DAS Economy Edition)](https://help.aliyun.com/document_detail/2666482.html) must be enabled.
 * - If you use the China site (aliyun.com) or DAS SDK, use the latest version.
 * - When you invoke DAS by using the SDK, set the region to cn-shanghai.
 *
 * @param request GetDeadlockHistogramRequest
 * @return GetDeadlockHistogramResponse
 */
GetDeadlockHistogramResponse Client::getDeadlockHistogram(const GetDeadlockHistogramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeadlockHistogramWithOptions(request, runtime);
}

/**
 * @summary Asynchronously queries information about failed SQL queries in SQL Explorer data. You can query up to 20 failed SQL queries within the specific time range.
 *
 * @description > GetErrorRequestSample is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * - This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetErrorRequestSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErrorRequestSampleResponse
 */
GetErrorRequestSampleResponse Client::getErrorRequestSampleWithOptions(const GetErrorRequestSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
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
 * @description > GetErrorRequestSample is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of **isFinish** is **false** in the response, wait for 1 second and then send a request again. If the value of **isFinish** is **true**, the complete results are returned.
 * - This API operation supports only ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters for which Database Autonomy Service (DAS) Enterprise Edition is enabled. For more information, see [Purchase DAS Enterprise Edition](https://help.aliyun.com/document_detail/163298.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - The database instance that you want to manage is connected to DAS.
 *
 * @param request GetEventSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventSubscriptionResponse
 */
GetEventSubscriptionResponse Client::getEventSubscriptionWithOptions(const GetEventSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - The database instance that you want to manage is connected to DAS.
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
 * - For more information about database instances that support this feature, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 *
 * @param request GetFullRequestOriginStatByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFullRequestOriginStatByInstanceIdResponse
 */
GetFullRequestOriginStatByInstanceIdResponse Client::getFullRequestOriginStatByInstanceIdWithOptions(const GetFullRequestOriginStatByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.getAsc();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.getSqlType();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * - For more information about database instances that support this feature, see [Overview](https://help.aliyun.com/document_detail/190912.html).
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
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
 * - For more information about the database engines that support SQL Explorer, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetFullRequestSampleByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFullRequestSampleByInstanceIdResponse
 */
GetFullRequestSampleByInstanceIdResponse Client::getFullRequestSampleByInstanceIdWithOptions(const GetFullRequestSampleByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  json body = {};
  if (!!request.hasEnd()) {
    body["End"] = request.getEnd();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSqlId()) {
    body["SqlId"] = request.getSqlId();
  }

  if (!!request.hasStart()) {
    body["Start"] = request.getStart();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
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
 * - For more information about the database engines that support SQL Explorer, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
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
 * @description > GetFullRequestStatResultByInstanceId is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of the isFinish parameter is **false** in the response, wait for 1 second and then send a request again. If the value of the isFinish parameter is **true**, the complete results are returned.
 * The SQL Explorer feature allows you to check the health status of SQL statements and troubleshoot performance issues. For more information, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * - For more information about database instances that support this feature, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * - If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - When you call this operation, the value of the SqlId parameter changes due to the optimization of the SQL template algorithm starting from September 1, 2024. For more information, see [[Notice\\] Optimization of the SQL template algorithm](~~2845725~~).
 *
 * @param request GetFullRequestStatResultByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFullRequestStatResultByInstanceIdResponse
 */
GetFullRequestStatResultByInstanceIdResponse Client::getFullRequestStatResultByInstanceIdWithOptions(const GetFullRequestStatResultByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.getAsc();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOriginHost()) {
    query["OriginHost"] = request.getOriginHost();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.getSqlType();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @description > GetFullRequestStatResultByInstanceId is an asynchronous operation. After a request is sent, the complete results are not returned immediately. If the value of the isFinish parameter is **false** in the response, wait for 1 second and then send a request again. If the value of the isFinish parameter is **true**, the complete results are returned.
 * The SQL Explorer feature allows you to check the health status of SQL statements and troubleshoot performance issues. For more information, see [SQL Explorer](https://help.aliyun.com/document_detail/204096.html).
 * - For more information about database instances that support this feature, see [Overview of DAS Enterprise Edition](https://help.aliyun.com/document_detail/190912.html).
 * - If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - When you call this operation, the value of the SqlId parameter changes due to the optimization of the SQL template algorithm starting from September 1, 2024. For more information, see [[Notice\\] Optimization of the SQL template algorithm](~~2845725~~).
 *
 * @param request GetFullRequestStatResultByInstanceIdRequest
 * @return GetFullRequestStatResultByInstanceIdResponse
 */
GetFullRequestStatResultByInstanceIdResponse Client::getFullRequestStatResultByInstanceId(const GetFullRequestStatResultByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFullRequestStatResultByInstanceIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a DAS Agent automated operations report.
 *
 * @description Enabling the automated operations report feature for DAS Agent allows the system to perform periodic inspections on target instances and generate reports. Currently, only daily reports are supported. This operation is used to query report details.
 * Before using this operation, ensure that the following prerequisites are met:
 * - DAS Agent is activated and the agent is still within its validity period.
 * - The daily report feature is enabled on the DAS Agent configuration page.
 * - When using the Alibaba Cloud SDK, ensure that the version of aliyun-sdk-core is later than 4.3.3. We recommend that you use the latest version.
 * - The version of the DAS SDK is 1.0.3 or later.
 * - When using the SDK to call DAS, set the region to cn-shanghai.
 *
 * @param request GetInstanceGroupInspectReportDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceGroupInspectReportDetailResponse
 */
GetInstanceGroupInspectReportDetailResponse Client::getInstanceGroupInspectReportDetailWithOptions(const GetInstanceGroupInspectReportDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.getReportType();
  }

  json body = {};
  if (!!request.hasReportId()) {
    body["ReportId"] = request.getReportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
 * @summary Retrieves the details of a DAS Agent automated operations report.
 *
 * @description Enabling the automated operations report feature for DAS Agent allows the system to perform periodic inspections on target instances and generate reports. Currently, only daily reports are supported. This operation is used to query report details.
 * Before using this operation, ensure that the following prerequisites are met:
 * - DAS Agent is activated and the agent is still within its validity period.
 * - The daily report feature is enabled on the DAS Agent configuration page.
 * - When using the Alibaba Cloud SDK, ensure that the version of aliyun-sdk-core is later than 4.3.3. We recommend that you use the latest version.
 * - The version of the DAS SDK is 1.0.3 or later.
 * - When using the SDK to call DAS, set the region to cn-shanghai.
 *
 * @param request GetInstanceGroupInspectReportDetailRequest
 * @return GetInstanceGroupInspectReportDetailResponse
 */
GetInstanceGroupInspectReportDetailResponse Client::getInstanceGroupInspectReportDetail(const GetInstanceGroupInspectReportDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceGroupInspectReportDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the list of O&M reports generated by DAS Agent.
 *
 * @description Enabling the O&M report feature of DAS Agent allows the system to perform periodic inspections on target instances and generate reports. Currently, only daily reports are supported.
 * Before you begin:
 * - Activate DAS Agent and ensure that the Agent is still within its validity period.
 * - Enable the daily report feature on the DAS Agent configuration page.
 * - When using the Alibaba Cloud SDK, ensure that the version of aliyun-sdk-core is later than 4.3.3. Use the latest version.
 * - Use DAS SDK 1.0.3 or later.
 * - When calling DAS by using the SDK, set the region to ap-southeast-1.
 *
 * @param request GetInstanceGroupInspectReportListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceGroupInspectReportListResponse
 */
GetInstanceGroupInspectReportListResponse Client::getInstanceGroupInspectReportListWithOptions(const GetInstanceGroupInspectReportListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.getReportType();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Queries the list of O&M reports generated by DAS Agent.
 *
 * @description Enabling the O&M report feature of DAS Agent allows the system to perform periodic inspections on target instances and generate reports. Currently, only daily reports are supported.
 * Before you begin:
 * - Activate DAS Agent and ensure that the Agent is still within its validity period.
 * - Enable the daily report feature on the DAS Agent configuration page.
 * - When using the Alibaba Cloud SDK, ensure that the version of aliyun-sdk-core is later than 4.3.3. Use the latest version.
 * - Use DAS SDK 1.0.3 or later.
 * - When calling DAS by using the SDK, set the region to ap-southeast-1.
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
 * - This operation is applicable only to ApsaraDB RDS for MySQL databases, self-managed MySQL databases hosted on Elastic Compute Service (ECS) instances, self-managed MySQL databases in data centers, ApsaraDB for Redis databases, and PolarDB for MySQL databases.
 * - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * - The version of DAS SDK must be V1.0.3 or later.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetInstanceInspectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceInspectionsResponse
 */
GetInstanceInspectionsResponse Client::getInstanceInspectionsWithOptions(const GetInstanceInspectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceArea()) {
    query["InstanceArea"] = request.getInstanceArea();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSearchMap()) {
    query["SearchMap"] = request.getSearchMap();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * - This operation is applicable only to ApsaraDB RDS for MySQL databases, self-managed MySQL databases hosted on Elastic Compute Service (ECS) instances, self-managed MySQL databases in data centers, ApsaraDB for Redis databases, and PolarDB for MySQL databases.
 * - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * - The version of DAS SDK must be V1.0.3 or later.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetInstanceInspectionsRequest
 * @return GetInstanceInspectionsResponse
 */
GetInstanceInspectionsResponse Client::getInstanceInspections(const GetInstanceInspectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceInspectionsWithOptions(request, runtime);
}

/**
 * @summary Returns details of all missing indexes for an instance.
 *
 * @description - This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetInstanceMissingIndexListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceMissingIndexListResponse
 */
GetInstanceMissingIndexListResponse Client::getInstanceMissingIndexListWithOptions(const GetInstanceMissingIndexListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvgTotalUserCost()) {
    query["AvgTotalUserCost"] = request.getAvgTotalUserCost();
  }

  if (!!request.hasAvgUserImpact()) {
    query["AvgUserImpact"] = request.getAvgUserImpact();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIndexCount()) {
    query["IndexCount"] = request.getIndexCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasObjectName()) {
    query["ObjectName"] = request.getObjectName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReservedPages()) {
    query["ReservedPages"] = request.getReservedPages();
  }

  if (!!request.hasReservedSize()) {
    query["ReservedSize"] = request.getReservedSize();
  }

  if (!!request.hasRowCount()) {
    query["RowCount"] = request.getRowCount();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUniqueCompiles()) {
    query["UniqueCompiles"] = request.getUniqueCompiles();
  }

  if (!!request.hasUserScans()) {
    query["UserScans"] = request.getUserScans();
  }

  if (!!request.hasUserSeeks()) {
    query["UserSeeks"] = request.getUserSeeks();
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
 * @summary Returns details of all missing indexes for an instance.
 *
 * @description - This operation is applicable only to ApsaraDB RDS for SQL Server instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call the API operations of DAS, you must set the region ID to cn-shanghai.
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - The database engine is ApsaraDB RDS for MySQL or PolarDB for MySQL.
 *
 * @param request GetInstanceSqlOptimizeStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceSqlOptimizeStatisticResponse
 */
GetInstanceSqlOptimizeStatisticResponse Client::getInstanceSqlOptimizeStatisticWithOptions(const GetInstanceSqlOptimizeStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilterEnable()) {
    query["FilterEnable"] = request.getFilterEnable();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  if (!!request.hasUseMerging()) {
    query["UseMerging"] = request.getUseMerging();
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - The database engine is ApsaraDB RDS for MySQL or PolarDB for MySQL.
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
 * @description - This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetKillInstanceSessionTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKillInstanceSessionTaskResultResponse
 */
GetKillInstanceSessionTaskResultResponse Client::getKillInstanceSessionTaskResultWithOptions(const GetKillInstanceSessionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @description - This operation is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
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
 * @description - This operation is applicable only to MongoDB instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region to cn-shanghai.
 *
 * @param request GetMongoDBCurrentOpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMongoDBCurrentOpResponse
 */
GetMongoDBCurrentOpResponse Client::getMongoDBCurrentOpWithOptions(const GetMongoDBCurrentOpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterDoc()) {
    query["FilterDoc"] = request.getFilterDoc();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
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
 * @description - This operation is applicable only to MongoDB instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region to cn-shanghai.
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
 * @description > GetMySQLAllSessionAsync is an asynchronous operation. After a request is sent, the system does not return complete results but returns a request ID. You need to use the request ID to initiate requests until the value of the **isFinish** field in the returned results is **true**, the complete results are returned. This indicates that to obtain complete data, you must call this operation at least twice.
 * - This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and PolarDB-X 2.0 instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetMySQLAllSessionAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMySQLAllSessionAsyncResponse
 */
GetMySQLAllSessionAsyncResponse Client::getMySQLAllSessionAsyncWithOptions(const GetMySQLAllSessionAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasResultId()) {
    query["ResultId"] = request.getResultId();
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
 * @description > GetMySQLAllSessionAsync is an asynchronous operation. After a request is sent, the system does not return complete results but returns a request ID. You need to use the request ID to initiate requests until the value of the **isFinish** field in the returned results is **true**, the complete results are returned. This indicates that to obtain complete data, you must call this operation at least twice.
 * - This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and PolarDB-X 2.0 instances.
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
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
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * - The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsMetricTrendsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPfsMetricTrendsResponse
 */
GetPfsMetricTrendsResponse Client::getPfsMetricTrendsWithOptions(const GetPfsMetricTrendsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetric()) {
    body["Metric"] = request.getMetric();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * - The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * - The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsSqlSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPfsSqlSampleResponse
 */
GetPfsSqlSampleResponse Client::getPfsSqlSampleWithOptions(const GetPfsSqlSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSqlId()) {
    body["SqlId"] = request.getSqlId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this API operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
 * - The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsSqlSampleRequest
 * @return GetPfsSqlSampleResponse
 */
GetPfsSqlSampleResponse Client::getPfsSqlSample(const GetPfsSqlSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPfsSqlSampleWithOptions(request, runtime);
}

/**
 * @summary Call the GetPfsSqlSummaries API to query all request data using the SQL ID dimension in Performance Insight (New Version) for a database instance.
 *
 * @description Prerequisites for using this API:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling the DAS service using the SDK, specify the region as cn-shanghai.
 * - The target database instance is RDS MySQL or PolarDB MySQL.
 * - The target database instance has Performance Insight (New Version) enabled. For more information, see [Performance Insight (New Version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsSqlSummariesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPfsSqlSummariesResponse
 */
GetPfsSqlSummariesResponse Client::getPfsSqlSummariesWithOptions(const GetPfsSqlSummariesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAsc()) {
    body["Asc"] = request.getAsc();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeywords()) {
    body["Keywords"] = request.getKeywords();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSqlId()) {
    body["SqlId"] = request.getSqlId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Call the GetPfsSqlSummaries API to query all request data using the SQL ID dimension in Performance Insight (New Version) for a database instance.
 *
 * @description Prerequisites for using this API:
 * - Use the latest version of the Alibaba Cloud or DAS SDK.
 * - When calling the DAS service using the SDK, specify the region as cn-shanghai.
 * - The target database instance is RDS MySQL or PolarDB MySQL.
 * - The target database instance has Performance Insight (New Version) enabled. For more information, see [Performance Insight (New Version)](https://help.aliyun.com/document_detail/469117.html).
 *
 * @param request GetPfsSqlSummariesRequest
 * @return GetPfsSqlSummariesResponse
 */
GetPfsSqlSummariesResponse Client::getPfsSqlSummaries(const GetPfsSqlSummariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPfsSqlSummariesWithOptions(request, runtime);
}

/**
 * @summary Returns SQL template statistics from query governance data.
 *
 * @description - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @summary Returns SQL template statistics from query governance data.
 *
 * @description - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeDataStatsRequest
 * @return GetQueryOptimizeDataStatsResponse
 */
GetQueryOptimizeDataStatsResponse Client::getQueryOptimizeDataStats(const GetQueryOptimizeDataStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeDataStatsWithOptions(request, runtime);
}

/**
 * @summary Returns the best- and worst-performing instances based on query governance data.
 *
 * @description - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @summary Returns the best- and worst-performing instances based on query governance data.
 *
 * @description - If you use an Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeExecErrorSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeExecErrorSampleResponse
 */
GetQueryOptimizeExecErrorSampleResponse Client::getQueryOptimizeExecErrorSampleWithOptions(const GetQueryOptimizeExecErrorSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.getTime();
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
 * @description - If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V2.1.8. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V2.1.8 or later.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeShareUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeShareUrlResponse
 */
GetQueryOptimizeShareUrlResponse Client::getQueryOptimizeShareUrlWithOptions(const GetQueryOptimizeShareUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsc()) {
    query["Asc"] = request.getAsc();
  }

  if (!!request.hasDbNames()) {
    query["DbNames"] = request.getDbNames();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasKeywords()) {
    query["Keywords"] = request.getKeywords();
  }

  if (!!request.hasLogicalOperator()) {
    query["LogicalOperator"] = request.getLogicalOperator();
  }

  if (!!request.hasOnlyOptimizedSql()) {
    query["OnlyOptimizedSql"] = request.getOnlyOptimizedSql();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
  }

  if (!!request.hasSqlIds()) {
    query["SqlIds"] = request.getSqlIds();
  }

  if (!!request.hasTagNames()) {
    query["TagNames"] = request.getTagNames();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.getTime();
  }

  if (!!request.hasUser()) {
    query["User"] = request.getUser();
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
 * @description - If you use Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
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
 * @description - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeSolutionResponse
 */
GetQueryOptimizeSolutionResponse Client::getQueryOptimizeSolutionWithOptions(const GetQueryOptimizeSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.getRuleIds();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
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
 * @description - If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - PolarDB for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *
 * @param request GetQueryOptimizeSolutionRequest
 * @return GetQueryOptimizeSolutionResponse
 */
GetQueryOptimizeSolutionResponse Client::getQueryOptimizeSolution(const GetQueryOptimizeSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueryOptimizeSolutionWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of a specified SQL statement by calling the GetQueryOptimizeTag operation.
 *
 * @description - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 * - This operation supports the following database engines:
 *     - RDS MySQL
 *     - PolarDB for MySQL
 *     - RDS PostgreSQL
 *
 * @param request GetQueryOptimizeTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueryOptimizeTagResponse
 */
GetQueryOptimizeTagResponse Client::getQueryOptimizeTagWithOptions(const GetQueryOptimizeTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
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
 * @summary Queries the tags of a specified SQL statement by calling the GetQueryOptimizeTag operation.
 *
 * @description - When using the Alibaba Cloud or DAS SDK, use the latest version.
 * - When calling DAS by using the SDK, set the region to cn-shanghai.
 * - This operation supports the following database engines:
 *     - RDS MySQL
 *     - PolarDB for MySQL
 *     - RDS PostgreSQL
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
 * @description - This operation is applicable only to ApsaraDB for Redis instances.
 * - If you use an SDK to call operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * > This operation cannot be used to query sessions generated in direct connection mode on ApsaraDB for Redis cluster instances.
 *
 * @param request GetRedisAllSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRedisAllSessionResponse
 */
GetRedisAllSessionResponse Client::getRedisAllSessionWithOptions(const GetRedisAllSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @description - This operation is applicable only to ApsaraDB for Redis instances.
 * - If you use an SDK to call operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * > This operation cannot be used to query sessions generated in direct connection mode on ApsaraDB for Redis cluster instances.
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
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *   - ApsaraDB RDS for SQL Server
 *   - PolarDB for MySQL
 *   - PolarDB for PostgreSQL (Compatible with Oracle)
 *   - ApsaraDB for MongoDB
 * > The minor engine version of the Apsara RDS for PostgreSQL instance must be 20220130 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request GetRequestDiagnosisPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRequestDiagnosisPageResponse
 */
GetRequestDiagnosisPageResponse Client::getRequestDiagnosisPageWithOptions(const GetRequestDiagnosisPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL
 *   - ApsaraDB RDS for PostgreSQL
 *   - ApsaraDB RDS for SQL Server
 *   - PolarDB for MySQL
 *   - PolarDB for PostgreSQL (Compatible with Oracle)
 *   - ApsaraDB for MongoDB
 * > The minor engine version of the Apsara RDS for PostgreSQL instance must be 20220130 or later. For more information about how to check and update the minor engine version of an ApsaraDB RDS for PostgreSQL instance, see [Update the minor engine version of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request GetRequestDiagnosisPageRequest
 * @return GetRequestDiagnosisPageResponse
 */
GetRequestDiagnosisPageResponse Client::getRequestDiagnosisPage(const GetRequestDiagnosisPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRequestDiagnosisPageWithOptions(request, runtime);
}

/**
 * @summary Call GetRequestDiagnosisResult to retrieve the SQL diagnosis results.
 *
 * @description This API has the following prerequisites:
 * - When you use an SDK to call the DAS service, you must set the region to cn-shanghai.
 * - This API does not support querying diagnosis results for automatic SQL optimization.
 * - This API supports the following database engines:
 *   - RDS MySQL
 *   - RDS PostgreSQL
 *   - RDS SQL Server
 *   - PolarDB for MySQL
 *   - PolarDB for PostgreSQL (Oracle-Compatible)
 *   - ApsaraDB for MongoDB
 * > RDS PostgreSQL instances require minor kernel version 20220130 or later. To view and upgrade the minor kernel version, see [Upgrade the minor kernel version](https://help.aliyun.com/document_detail/146895.html).
 *
 * @param request GetRequestDiagnosisResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRequestDiagnosisResultResponse
 */
GetRequestDiagnosisResultResponse Client::getRequestDiagnosisResultWithOptions(const GetRequestDiagnosisResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSqlId()) {
    query["SqlId"] = request.getSqlId();
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
 * @summary Call GetRequestDiagnosisResult to retrieve the SQL diagnosis results.
 *
 * @description This API has the following prerequisites:
 * - When you use an SDK to call the DAS service, you must set the region to cn-shanghai.
 * - This API does not support querying diagnosis results for automatic SQL optimization.
 * - This API supports the following database engines:
 *   - RDS MySQL
 *   - RDS PostgreSQL
 *   - RDS SQL Server
 *   - PolarDB for MySQL
 *   - PolarDB for PostgreSQL (Oracle-Compatible)
 *   - ApsaraDB for MongoDB
 * > RDS PostgreSQL instances require minor kernel version 20220130 or later. To view and upgrade the minor kernel version, see [Upgrade the minor kernel version](https://help.aliyun.com/document_detail/146895.html).
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
 *
 * @param request GetRunningSqlConcurrencyControlRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRunningSqlConcurrencyControlRulesResponse
 */
GetRunningSqlConcurrencyControlRulesResponse Client::getRunningSqlConcurrencyControlRulesWithOptions(const GetRunningSqlConcurrencyControlRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
 *
 * @param request GetSqlConcurrencyControlKeywordsFromSqlTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlConcurrencyControlKeywordsFromSqlTextResponse
 */
GetSqlConcurrencyControlKeywordsFromSqlTextResponse Client::getSqlConcurrencyControlKeywordsFromSqlTextWithOptions(const GetSqlConcurrencyControlKeywordsFromSqlTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSqlText()) {
    query["SqlText"] = request.getSqlText();
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
 *
 * @param request GetSqlConcurrencyControlRulesHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlConcurrencyControlRulesHistoryResponse
 */
GetSqlConcurrencyControlRulesHistoryResponse Client::getSqlConcurrencyControlRulesHistoryWithOptions(const GetSqlConcurrencyControlRulesHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * - ApsaraDB RDS for MySQL
 * - PolarDB for MySQL
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
 * > Returns only optimization suggestions that the SQL diagnostics feature automatically generates.
 * Before you call this operation, take note of the following items:
 * - This operation is applicable to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * - If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetSqlOptimizeAdviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlOptimizeAdviceResponse
 */
GetSqlOptimizeAdviceResponse Client::getSqlOptimizeAdviceWithOptions(const GetSqlOptimizeAdviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasEndDt()) {
    query["EndDt"] = request.getEndDt();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartDt()) {
    query["StartDt"] = request.getStartDt();
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
 * > Returns only optimization suggestions that the SQL diagnostics feature automatically generates.
 * Before you call this operation, take note of the following items:
 * - This operation is applicable to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
 * - If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
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
 * @description > The physical file size indicates the actual size of an obtained file. Only specific deployment modes of database instances support the display of physical file sizes. The statistics on tables are obtained from `information_schema.tables`. Statistics in MySQL are not updated in real time. Therefore, the statistics may be different from the physical file sizes. If you want to obtain the latest data, you can execute the `ANALYZE TABLE` statement on the relevant tables during off-peak hours.
 * - This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and ApsaraDB for MongoDB instances.
 * - For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this operation works the same as the storage analysis feature of the previous version. Tasks generated by this operation cannot be viewed on the Storage Analysis page of the new version in the Database Autonomy Service (DAS) console. If you want to view the tasks and results, call the related API operation to obtain data and save data to your computer.
 * - If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetStorageAnalysisResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStorageAnalysisResultResponse
 */
GetStorageAnalysisResultResponse Client::getStorageAnalysisResultWithOptions(const GetStorageAnalysisResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @description > The physical file size indicates the actual size of an obtained file. Only specific deployment modes of database instances support the display of physical file sizes. The statistics on tables are obtained from `information_schema.tables`. Statistics in MySQL are not updated in real time. Therefore, the statistics may be different from the physical file sizes. If you want to obtain the latest data, you can execute the `ANALYZE TABLE` statement on the relevant tables during off-peak hours.
 * - This operation is applicable only to ApsaraDB RDS for MySQL instances, PolarDB for MySQL clusters, and ApsaraDB for MongoDB instances.
 * - For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this operation works the same as the storage analysis feature of the previous version. Tasks generated by this operation cannot be viewed on the Storage Analysis page of the new version in the Database Autonomy Service (DAS) console. If you want to view the tasks and results, call the related API operation to obtain data and save data to your computer.
 * - If you use an Alibaba Cloud SDK or DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request GetStorageAnalysisResultRequest
 * @return GetStorageAnalysisResultResponse
 */
GetStorageAnalysisResultResponse Client::getStorageAnalysisResult(const GetStorageAnalysisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStorageAnalysisResultWithOptions(request, runtime);
}

/**
 * @summary Provides the Alibaba Cloud ApsaraDB Agent foundation model capability interface for AI chat, performance diagnostics, and other features.
 *
 * @param request GetYaoChiAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYaoChiAgentResponse
 */
FutureGenerator<GetYaoChiAgentResponse> Client::getYaoChiAgentWithSSE(const GetYaoChiAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasImageKeys()) {
    query["ImageKeys"] = request.getImageKeys();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYaoChiAgent"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<GetYaoChiAgentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Provides the Alibaba Cloud ApsaraDB Agent foundation model capability interface for AI chat, performance diagnostics, and other features.
 *
 * @param request GetYaoChiAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetYaoChiAgentResponse
 */
GetYaoChiAgentResponse Client::getYaoChiAgentWithOptions(const GetYaoChiAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasImageKeys()) {
    query["ImageKeys"] = request.getImageKeys();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetYaoChiAgent"},
    {"version" , "2020-01-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetYaoChiAgentResponse>();
}

/**
 * @summary Provides the Alibaba Cloud ApsaraDB Agent foundation model capability interface for AI chat, performance diagnostics, and other features.
 *
 * @param request GetYaoChiAgentRequest
 * @return GetYaoChiAgentResponse
 */
GetYaoChiAgentResponse Client::getYaoChiAgent(const GetYaoChiAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getYaoChiAgentWithOptions(request, runtime);
}

/**
 * @summary Terminates all sessions on an instance.
 *
 * @description - This operation is applicable only to ApsaraDB for Redis.
 * - If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V1.0.2 or later.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request KillInstanceAllSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillInstanceAllSessionResponse
 */
KillInstanceAllSessionResponse Client::killInstanceAllSessionWithOptions(const KillInstanceAllSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @description - This operation is applicable only to ApsaraDB for Redis.
 * - If you use Alibaba Cloud SDK, make sure that the aliyun-sdk-core version is later than V4.3.3. We recommend that you use the latest version.
 * - The version of your Database Autonomy Service (DAS) SDK must be V1.0.2 or later.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
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
 * @description Modifies the following auto scaling configurations for an instance: **auto scaling for specifications**, **automatic storage expansion**, **automatic bandwidth adjustment**, and **auto scaling for resources**.
 * - You can modify the configurations of the **auto scaling feature for specifications** for the following types of database instances:
 *   - PolarDB for MySQL Cluster Edition instances. For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 *   - ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or enhanced SSDs (ESSDs). For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 * - You can modify the configurations of the **automatic storage expansion** feature for the following types of database instances:
 *   - ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs. For more information about the feature and the billing rules, see [Automatic space expansion](https://help.aliyun.com/document_detail/173345.html).
 * - You can modify the configurations of the **automatic bandwidth adjustment** feature for the following types of database instances:
 *   - ApsaraDB for Redis Classic (Local Disk-based) Edition instances. For more information about the feature and the billing rules, see [Automatic bandwidth adjustment](https://help.aliyun.com/document_detail/216312.html).
 * - You can modify the configurations of the **auto scaling feature for resources** for the following types of database instances:
 *   - General-purpose ApsaraDB RDS for MySQL Enterprise Edition instances. For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request ModifyAutoScalingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoScalingConfigResponse
 */
ModifyAutoScalingConfigResponse Client::modifyAutoScalingConfigWithOptions(const ModifyAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasShard()) {
    query["Shard"] = request.getShard();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.getStorage();
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
 * @description Modifies the following auto scaling configurations for an instance: **auto scaling for specifications**, **automatic storage expansion**, **automatic bandwidth adjustment**, and **auto scaling for resources**.
 * - You can modify the configurations of the **auto scaling feature for specifications** for the following types of database instances:
 *   - PolarDB for MySQL Cluster Edition instances. For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 *   - ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or enhanced SSDs (ESSDs). For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 * - You can modify the configurations of the **automatic storage expansion** feature for the following types of database instances:
 *   - ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs. For more information about the feature and the billing rules, see [Automatic space expansion](https://help.aliyun.com/document_detail/173345.html).
 * - You can modify the configurations of the **automatic bandwidth adjustment** feature for the following types of database instances:
 *   - ApsaraDB for Redis Classic (Local Disk-based) Edition instances. For more information about the feature and the billing rules, see [Automatic bandwidth adjustment](https://help.aliyun.com/document_detail/216312.html).
 * - You can modify the configurations of the **auto scaling feature for resources** for the following types of database instances:
 *   - General-purpose ApsaraDB RDS for MySQL Enterprise Edition instances. For more information about the feature and the billing rules, see [Automatic performance scaling](https://help.aliyun.com/document_detail/169686.html).
 * - If you use an Alibaba Cloud SDK or Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
 * - If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
 *
 * @param request ModifyAutoScalingConfigRequest
 * @return ModifyAutoScalingConfigResponse
 */
ModifyAutoScalingConfigResponse Client::modifyAutoScalingConfig(const ModifyAutoScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoScalingConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies a cross-product whitelist template.
 *
 * @description Before you call this operation, note the following:
 * - Use the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When you use an SDK to call the DAS service, specify the cn-shanghai region.
 * - This operation uses the latest supported version by default. For more information about the databases and regions that are supported by different versions of DAS Enterprise Edition, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request ModifySecurityIPGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIPGroupResponse
 */
ModifySecurityIPGroupResponse Client::modifySecurityIPGroupWithOptions(const ModifySecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGIpList()) {
    query["GIpList"] = request.getGIpList();
  }

  if (!!request.hasGlobalIgName()) {
    query["GlobalIgName"] = request.getGlobalIgName();
  }

  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.getGlobalSecurityGroupId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.getRegionName();
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
 * @summary Modifies a cross-product whitelist template.
 *
 * @description Before you call this operation, note the following:
 * - Use the latest version of the Alibaba Cloud SDK or DAS SDK.
 * - When you use an SDK to call the DAS service, specify the cn-shanghai region.
 * - This operation uses the latest supported version by default. For more information about the databases and regions that are supported by different versions of DAS Enterprise Edition, see [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html).
 *
 * @param request ModifySecurityIPGroupRequest
 * @return ModifySecurityIPGroupResponse
 */
ModifySecurityIPGroupResponse Client::modifySecurityIPGroup(const ModifySecurityIPGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIPGroupWithOptions(request, runtime);
}

/**
 * @summary Attaches or detaches a cross-product whitelist template.
 *
 * @description - Use the latest version of the Alibaba Cloud or DAS software development kit (SDK).
 * - When you use the SDK to call the DAS service, set the region to cn-shanghai.
 * - For more information about the supported database instances, see [Overview of features](https://help.aliyun.com/document_detail/92561.html) for SQL Insight and Audit.
 * - The SQL Insight and Audit (Legacy) feature is enabled for the destination database instance. For more information about how to enable this feature, see [Enable SQL Insight and Audit](https://help.aliyun.com/document_detail/92561.html).
 *
 * @param request ModifySecurityIPGroupRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIPGroupRelationResponse
 */
ModifySecurityIPGroupRelationResponse Client::modifySecurityIPGroupRelationWithOptions(const ModifySecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalSecurityGroupId()) {
    query["GlobalSecurityGroupId"] = request.getGlobalSecurityGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionName()) {
    query["RegionName"] = request.getRegionName();
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
 * @summary Attaches or detaches a cross-product whitelist template.
 *
 * @description - Use the latest version of the Alibaba Cloud or DAS software development kit (SDK).
 * - When you use the SDK to call the DAS service, set the region to cn-shanghai.
 * - For more information about the supported database instances, see [Overview of features](https://help.aliyun.com/document_detail/92561.html) for SQL Insight and Audit.
 * - The SQL Insight and Audit (Legacy) feature is enabled for the destination database instance. For more information about how to enable this feature, see [Enable SQL Insight and Audit](https://help.aliyun.com/document_detail/92561.html).
 *
 * @param request ModifySecurityIPGroupRelationRequest
 * @return ModifySecurityIPGroupRelationResponse
 */
ModifySecurityIPGroupRelationResponse Client::modifySecurityIPGroupRelation(const ModifySecurityIPGroupRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIPGroupRelationWithOptions(request, runtime);
}

/**
 * @summary Use the `ModifySqlLogConfig` operation to enable or configure DAS Enterprise Edition for a database instance.
 *
 * @description Before calling this operation, ensure you meet the following requirements:
 * - Use the latest version of the Alibaba Cloud SDK or the DAS SDK.
 * - When calling the DAS service with an SDK, set the region to cn-shanghai.
 * - This operation enables the latest supported version of DAS Enterprise Edition by default. See [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html) for the databases and regions supported by each version of DAS Enterprise Edition.
 *
 * @param request ModifySqlLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySqlLogConfigResponse
 */
ModifySqlLogConfigResponse Client::modifySqlLogConfigWithOptions(const ModifySqlLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableAudit()) {
    query["EnableAudit"] = request.getEnableAudit();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  json body = {};
  if (!!request.hasEnable()) {
    body["Enable"] = request.getEnable();
  }

  if (!!request.hasHotRetention()) {
    body["HotRetention"] = request.getHotRetention();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestEnable()) {
    body["RequestEnable"] = request.getRequestEnable();
  }

  if (!!request.hasRetention()) {
    body["Retention"] = request.getRetention();
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
 * @summary Use the `ModifySqlLogConfig` operation to enable or configure DAS Enterprise Edition for a database instance.
 *
 * @description Before calling this operation, ensure you meet the following requirements:
 * - Use the latest version of the Alibaba Cloud SDK or the DAS SDK.
 * - When calling the DAS service with an SDK, set the region to cn-shanghai.
 * - This operation enables the latest supported version of DAS Enterprise Edition by default. See [DAS editions and supported features](https://help.aliyun.com/document_detail/156204.html) for the databases and regions supported by each version of DAS Enterprise Edition.
 *
 * @param request ModifySqlLogConfigRequest
 * @return ModifySqlLogConfigResponse
 */
ModifySqlLogConfigResponse Client::modifySqlLogConfig(const ModifySqlLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySqlLogConfigWithOptions(request, runtime);
}

/**
 * @summary Calls the RunCloudBenchTask operation to execute a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you determine whether your instance type needs to be scaled out to handle peak service traffic. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
 *
 * @param request RunCloudBenchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCloudBenchTaskResponse
 */
RunCloudBenchTaskResponse Client::runCloudBenchTaskWithOptions(const RunCloudBenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Calls the RunCloudBenchTask operation to execute a stress testing task.
 *
 * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you determine whether your instance type needs to be scaled out to handle peak service traffic. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
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
    query["Active"] = request.getActive();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.getChannelType();
  }

  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.getContactGroupName();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasDispatchRule()) {
    query["DispatchRule"] = request.getDispatchRule();
  }

  if (!!request.hasEventContext()) {
    query["EventContext"] = request.getEventContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMinInterval()) {
    query["MinInterval"] = request.getMinInterval();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.getSeverity();
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
 * @description > Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.\\*\\*\\*\\* In this case, you must call this operation at least twice.
 * Before you call this operation, take note of the following items:
 * - If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - The database instances must be an ApsaraDB RDS for MySQL High-availability Edition instance.
 * - DAS Enterprise Edition must be enabled for the database instance. You can call the call [DescribeInstanceDasPro](https://help.aliyun.com/document_detail/413866.html) operation to query whether DAS Enterprise Edition is enabled.
 * - The database instance has four or more CPU cores, and **innodb_file_per_table** is set to **ON**.
 *
 * @param request UpdateAutoResourceOptimizeRulesAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoResourceOptimizeRulesAsyncResponse
 */
UpdateAutoResourceOptimizeRulesAsyncResponse Client::updateAutoResourceOptimizeRulesAsyncWithOptions(const UpdateAutoResourceOptimizeRulesAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasResultId()) {
    query["ResultId"] = request.getResultId();
  }

  if (!!request.hasTableFragmentationRatio()) {
    query["TableFragmentationRatio"] = request.getTableFragmentationRatio();
  }

  if (!!request.hasTableSpaceSize()) {
    query["TableSpaceSize"] = request.getTableSpaceSize();
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
 * @description > Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.\\*\\*\\*\\* In this case, you must call this operation at least twice.
 * Before you call this operation, take note of the following items:
 * - If you use an SDK to call the API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - The database instances must be an ApsaraDB RDS for MySQL High-availability Edition instance.
 * - DAS Enterprise Edition must be enabled for the database instance. You can call the call [DescribeInstanceDasPro](https://help.aliyun.com/document_detail/413866.html) operation to query whether DAS Enterprise Edition is enabled.
 * - The database instance has four or more CPU cores, and **innodb_file_per_table** is set to **ON**.
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
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - DAS Enterprise Edition must be enabled for the database instance that you want to manage. To enable DAS Enterprise Edition for a database instance, you can call the [EnableDasPro](https://help.aliyun.com/document_detail/411645.html) operation.
 * - The autonomy service must be enabled for the database instance. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition
 *   - PolarDB for MySQL Cluster Edition
 *
 * @param request UpdateAutoSqlOptimizeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoSqlOptimizeStatusResponse
 */
UpdateAutoSqlOptimizeStatusResponse Client::updateAutoSqlOptimizeStatusWithOptions(const UpdateAutoSqlOptimizeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstances()) {
    query["Instances"] = request.getInstances();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - DAS Enterprise Edition must be enabled for the database instance that you want to manage. To enable DAS Enterprise Edition for a database instance, you can call the [EnableDasPro](https://help.aliyun.com/document_detail/411645.html) operation.
 * - The autonomy service must be enabled for the database instance. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 * - This operation supports the following database engines:
 *   - ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition
 *   - PolarDB for MySQL Cluster Edition
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
 * @description > Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.\\*\\*\\*\\* In this case, you must call this operation at least twice.
 * Before you call this operation, take note of the following items:
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - The autonomy service must be enabled for the database instance that you want to manage. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 * - The database instance that you want to manage must be of one of the following types:
 *   - ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *   - PolarDB for MySQL Cluster Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *
 * @param request UpdateAutoThrottleRulesAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoThrottleRulesAsyncResponse
 */
UpdateAutoThrottleRulesAsyncResponse Client::updateAutoThrottleRulesAsyncWithOptions(const UpdateAutoThrottleRulesAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbnormalDuration()) {
    query["AbnormalDuration"] = request.getAbnormalDuration();
  }

  if (!!request.hasActiveSessions()) {
    query["ActiveSessions"] = request.getActiveSessions();
  }

  if (!!request.hasAllowThrottleEndTime()) {
    query["AllowThrottleEndTime"] = request.getAllowThrottleEndTime();
  }

  if (!!request.hasAllowThrottleStartTime()) {
    query["AllowThrottleStartTime"] = request.getAllowThrottleStartTime();
  }

  if (!!request.hasAutoKillSession()) {
    query["AutoKillSession"] = request.getAutoKillSession();
  }

  if (!!request.hasConsoleContext()) {
    query["ConsoleContext"] = request.getConsoleContext();
  }

  if (!!request.hasCpuSessionRelation()) {
    query["CpuSessionRelation"] = request.getCpuSessionRelation();
  }

  if (!!request.hasCpuUsage()) {
    query["CpuUsage"] = request.getCpuUsage();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasMaxThrottleTime()) {
    query["MaxThrottleTime"] = request.getMaxThrottleTime();
  }

  if (!!request.hasResultId()) {
    query["ResultId"] = request.getResultId();
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
 * @description > Asynchronous calls do not immediately return the complete results. To obtain the complete results, you must use the value of **ResultId** returned in the response to re-initiate the call until the value of **isFinish** is **true**.\\*\\*\\*\\* In this case, you must call this operation at least twice.
 * Before you call this operation, take note of the following items:
 * - If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
 * - The autonomy service must be enabled for the database instance that you want to manage. For more information, see [Autonomy center](https://help.aliyun.com/document_detail/152139.html).
 * - The database instance that you want to manage must be of one of the following types:
 *   - ApsaraDB RDS for MySQL High-availability Edition or Enterprise Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
 *   - PolarDB for MySQL Cluster Edition that runs MySQL 5.6, MySQL 5.7, or MySQL 8.0
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