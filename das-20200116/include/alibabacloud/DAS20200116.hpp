// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DAS20200116_HPP_
#define ALIBABACLOUD_DAS20200116_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DAS20200116Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DAS20200116.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::AddHDMInstanceResponse addHDMInstanceWithOptions(const Models::AddHDMInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddHDMInstanceResponse addHDMInstance(const Models::AddHDMInstanceRequest &request);

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
      FutureGenerator<Models::ChatResponse> chatWithSSE(const Models::ChatRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ChatResponse chat(const Models::ChatRequest &request);

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
      Models::CreateCacheAnalysisJobResponse createCacheAnalysisJobWithOptions(const Models::CreateCacheAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCacheAnalysisJobResponse createCacheAnalysisJob(const Models::CreateCacheAnalysisJobRequest &request);

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
      Models::CreateCloudBenchTasksResponse createCloudBenchTasksWithOptions(const Models::CreateCloudBenchTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCloudBenchTasksResponse createCloudBenchTasks(const Models::CreateCloudBenchTasksRequest &request);

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
      Models::CreateDiagnosticReportResponse createDiagnosticReportWithOptions(const Models::CreateDiagnosticReportRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateDiagnosticReportResponse createDiagnosticReport(const Models::CreateDiagnosticReportRequest &request);

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
      Models::CreateKillInstanceSessionTaskResponse createKillInstanceSessionTaskWithOptions(const Models::CreateKillInstanceSessionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateKillInstanceSessionTaskResponse createKillInstanceSessionTask(const Models::CreateKillInstanceSessionTaskRequest &request);

      /**
       * @summary 创建结束会话的任务
       *
       * @param request CreateKillInstanceSessionTaskWithMaintainUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKillInstanceSessionTaskWithMaintainUserResponse
       */
      Models::CreateKillInstanceSessionTaskWithMaintainUserResponse createKillInstanceSessionTaskWithMaintainUserWithOptions(const Models::CreateKillInstanceSessionTaskWithMaintainUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建结束会话的任务
       *
       * @param request CreateKillInstanceSessionTaskWithMaintainUserRequest
       * @return CreateKillInstanceSessionTaskWithMaintainUserResponse
       */
      Models::CreateKillInstanceSessionTaskWithMaintainUserResponse createKillInstanceSessionTaskWithMaintainUser(const Models::CreateKillInstanceSessionTaskWithMaintainUserRequest &request);

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
      Models::CreateLatestDeadLockAnalysisResponse createLatestDeadLockAnalysisWithOptions(const Models::CreateLatestDeadLockAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateLatestDeadLockAnalysisResponse createLatestDeadLockAnalysis(const Models::CreateLatestDeadLockAnalysisRequest &request);

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
      Models::CreateQueryOptimizeTagResponse createQueryOptimizeTagWithOptions(const Models::CreateQueryOptimizeTagRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateQueryOptimizeTagResponse createQueryOptimizeTag(const Models::CreateQueryOptimizeTagRequest &request);

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
      Models::CreateRequestDiagnosisResponse createRequestDiagnosisWithOptions(const Models::CreateRequestDiagnosisRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateRequestDiagnosisResponse createRequestDiagnosis(const Models::CreateRequestDiagnosisRequest &request);

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
      Models::CreateSecurityIPGroupResponse createSecurityIPGroupWithOptions(const Models::CreateSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateSecurityIPGroupResponse createSecurityIPGroup(const Models::CreateSecurityIPGroupRequest &request);

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
      Models::CreateSqlLogTaskResponse createSqlLogTaskWithOptions(const Models::CreateSqlLogTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateSqlLogTaskResponse createSqlLogTask(const Models::CreateSqlLogTaskRequest &request);

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
      Models::CreateStorageAnalysisTaskResponse createStorageAnalysisTaskWithOptions(const Models::CreateStorageAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateStorageAnalysisTaskResponse createStorageAnalysisTask(const Models::CreateStorageAnalysisTaskRequest &request);

      /**
       * @summary Deletes a stress testing task.
       *
       * @description Call this API to delete a stress testing task. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DeleteCloudBenchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudBenchTaskResponse
       */
      Models::DeleteCloudBenchTaskResponse deleteCloudBenchTaskWithOptions(const Models::DeleteCloudBenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stress testing task.
       *
       * @description Call this API to delete a stress testing task. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DeleteCloudBenchTaskRequest
       * @return DeleteCloudBenchTaskResponse
       */
      Models::DeleteCloudBenchTaskResponse deleteCloudBenchTask(const Models::DeleteCloudBenchTaskRequest &request);

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
      Models::DeleteSecurityIPGroupResponse deleteSecurityIPGroupWithOptions(const Models::DeleteSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteSecurityIPGroupResponse deleteSecurityIPGroup(const Models::DeleteSecurityIPGroupRequest &request);

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
      Models::DeleteStopGatewayResponse deleteStopGatewayWithOptions(const Models::DeleteStopGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteStopGatewayResponse deleteStopGateway(const Models::DeleteStopGatewayRequest &request);

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
      Models::DescribeAuditLogsResponse describeAuditLogsWithOptions(const Models::DescribeAuditLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAuditLogsResponse describeAuditLogs(const Models::DescribeAuditLogsRequest &request);

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
      Models::DescribeAutoScalingConfigResponse describeAutoScalingConfigWithOptions(const Models::DescribeAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAutoScalingConfigResponse describeAutoScalingConfig(const Models::DescribeAutoScalingConfigRequest &request);

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
      Models::DescribeAutoScalingHistoryResponse describeAutoScalingHistoryWithOptions(const Models::DescribeAutoScalingHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAutoScalingHistoryResponse describeAutoScalingHistory(const Models::DescribeAutoScalingHistoryRequest &request);

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
      Models::DescribeCacheAnalysisJobResponse describeCacheAnalysisJobWithOptions(const Models::DescribeCacheAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCacheAnalysisJobResponse describeCacheAnalysisJob(const Models::DescribeCacheAnalysisJobRequest &request);

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
      Models::DescribeCacheAnalysisJobsResponse describeCacheAnalysisJobsWithOptions(const Models::DescribeCacheAnalysisJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCacheAnalysisJobsResponse describeCacheAnalysisJobs(const Models::DescribeCacheAnalysisJobsRequest &request);

      /**
       * @summary Queries the list of stress testing tasks.
       *
       * @description Database Autonomy Service (DAS) provides intelligent stress testing features to help you verify whether your instance specifications need to be scaled up to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudBenchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudBenchTasksResponse
       */
      Models::DescribeCloudBenchTasksResponse describeCloudBenchTasksWithOptions(const Models::DescribeCloudBenchTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of stress testing tasks.
       *
       * @description Database Autonomy Service (DAS) provides intelligent stress testing features to help you verify whether your instance specifications need to be scaled up to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudBenchTasksRequest
       * @return DescribeCloudBenchTasksResponse
       */
      Models::DescribeCloudBenchTasksResponse describeCloudBenchTasks(const Models::DescribeCloudBenchTasksRequest &request);

      /**
       * @summary Queries a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides stress testing features to help you verify whether your instance specifications need to be scaled up to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudbenchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudbenchTaskResponse
       */
      Models::DescribeCloudbenchTaskResponse describeCloudbenchTaskWithOptions(const Models::DescribeCloudbenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides stress testing features to help you verify whether your instance specifications need to be scaled up to effectively handle service traffic peaks. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudbenchTaskRequest
       * @return DescribeCloudbenchTaskResponse
       */
      Models::DescribeCloudbenchTaskResponse describeCloudbenchTask(const Models::DescribeCloudbenchTaskRequest &request);

      /**
       * @summary Retrieves the detailed configuration, file paths, and execution commands for a specific stress test task.
       *
       * @description Call this API to get the configuration details of a stress testing task for advanced debugging, or to understand how the Database Autonomy Service (DAS) stress testing feature operates. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudbenchTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudbenchTaskConfigResponse
       */
      Models::DescribeCloudbenchTaskConfigResponse describeCloudbenchTaskConfigWithOptions(const Models::DescribeCloudbenchTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the detailed configuration, file paths, and execution commands for a specific stress test task.
       *
       * @description Call this API to get the configuration details of a stress testing task for advanced debugging, or to understand how the Database Autonomy Service (DAS) stress testing feature operates. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudbenchTaskConfigRequest
       * @return DescribeCloudbenchTaskConfigResponse
       */
      Models::DescribeCloudbenchTaskConfigResponse describeCloudbenchTaskConfig(const Models::DescribeCloudbenchTaskConfigRequest &request);

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
      Models::DescribeDiagnosticReportListResponse describeDiagnosticReportListWithOptions(const Models::DescribeDiagnosticReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeDiagnosticReportListResponse describeDiagnosticReportList(const Models::DescribeDiagnosticReportListRequest &request);

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
      Models::DescribeErrorLogRecordsResponse describeErrorLogRecordsWithOptions(const Models::DescribeErrorLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeErrorLogRecordsResponse describeErrorLogRecords(const Models::DescribeErrorLogRecordsRequest &request);

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
      Models::DescribeHotBigKeysResponse describeHotBigKeysWithOptions(const Models::DescribeHotBigKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeHotBigKeysResponse describeHotBigKeys(const Models::DescribeHotBigKeysRequest &request);

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
      Models::DescribeHotKeysResponse describeHotKeysWithOptions(const Models::DescribeHotKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeHotKeysResponse describeHotKeys(const Models::DescribeHotKeysRequest &request);

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
      Models::DescribeInstanceDasProResponse describeInstanceDasProWithOptions(const Models::DescribeInstanceDasProRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceDasProResponse describeInstanceDasPro(const Models::DescribeInstanceDasProRequest &request);

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
      Models::DescribeQueryExplainResponse describeQueryExplainWithOptions(const Models::DescribeQueryExplainRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeQueryExplainResponse describeQueryExplain(const Models::DescribeQueryExplainRequest &request);

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
      Models::DescribeSecurityIPGroupResponse describeSecurityIPGroupWithOptions(const Models::DescribeSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSecurityIPGroupResponse describeSecurityIPGroup(const Models::DescribeSecurityIPGroupRequest &request);

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
      Models::DescribeSecurityIPGroupRelationResponse describeSecurityIPGroupRelationWithOptions(const Models::DescribeSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSecurityIPGroupRelationResponse describeSecurityIPGroupRelation(const Models::DescribeSecurityIPGroupRelationRequest &request);

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
      Models::DescribeSlowLogHistogramAsyncResponse describeSlowLogHistogramAsyncWithOptions(const Models::DescribeSlowLogHistogramAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSlowLogHistogramAsyncResponse describeSlowLogHistogramAsync(const Models::DescribeSlowLogHistogramAsyncRequest &request);

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
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

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
      Models::DescribeSlowLogStatisticResponse describeSlowLogStatisticWithOptions(const Models::DescribeSlowLogStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSlowLogStatisticResponse describeSlowLogStatistic(const Models::DescribeSlowLogStatisticRequest &request);

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
      Models::DescribeSqlLogConfigResponse describeSqlLogConfigWithOptions(const Models::DescribeSqlLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogConfigResponse describeSqlLogConfig(const Models::DescribeSqlLogConfigRequest &request);

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
      Models::DescribeSqlLogRecordsResponse describeSqlLogRecordsWithOptions(const Models::DescribeSqlLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogRecordsResponse describeSqlLogRecords(const Models::DescribeSqlLogRecordsRequest &request);

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
      Models::DescribeSqlLogStatisticResponse describeSqlLogStatisticWithOptions(const Models::DescribeSqlLogStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogStatisticResponse describeSqlLogStatistic(const Models::DescribeSqlLogStatisticRequest &request);

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
      Models::DescribeSqlLogTaskResponse describeSqlLogTaskWithOptions(const Models::DescribeSqlLogTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogTaskResponse describeSqlLogTask(const Models::DescribeSqlLogTaskRequest &request);

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
      Models::DescribeSqlLogTasksResponse describeSqlLogTasksWithOptions(const Models::DescribeSqlLogTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogTasksResponse describeSqlLogTasks(const Models::DescribeSqlLogTasksRequest &request);

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
      Models::DescribeTopBigKeysResponse describeTopBigKeysWithOptions(const Models::DescribeTopBigKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeTopBigKeysResponse describeTopBigKeys(const Models::DescribeTopBigKeysRequest &request);

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
      Models::DescribeTopHotKeysResponse describeTopHotKeysWithOptions(const Models::DescribeTopHotKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeTopHotKeysResponse describeTopHotKeys(const Models::DescribeTopHotKeysRequest &request);

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
      Models::DisableAllSqlConcurrencyControlRulesResponse disableAllSqlConcurrencyControlRulesWithOptions(const Models::DisableAllSqlConcurrencyControlRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisableAllSqlConcurrencyControlRulesResponse disableAllSqlConcurrencyControlRules(const Models::DisableAllSqlConcurrencyControlRulesRequest &request);

      /**
       * @summary Disables the automatic tablespace fragment recycling feature for database instances at a time.
       *
       * @description If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
       *
       * @param request DisableAutoResourceOptimizeRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAutoResourceOptimizeRulesResponse
       */
      Models::DisableAutoResourceOptimizeRulesResponse disableAutoResourceOptimizeRulesWithOptions(const Models::DisableAutoResourceOptimizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the automatic tablespace fragment recycling feature for database instances at a time.
       *
       * @description If you use an SDK to call API operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
       *
       * @param request DisableAutoResourceOptimizeRulesRequest
       * @return DisableAutoResourceOptimizeRulesResponse
       */
      Models::DisableAutoResourceOptimizeRulesResponse disableAutoResourceOptimizeRules(const Models::DisableAutoResourceOptimizeRulesRequest &request);

      /**
       * @summary Disables the automatic SQL throttling feature for multiple database instances at a time.
       *
       * @description If you use an SDK to call operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
       *
       * @param request DisableAutoThrottleRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAutoThrottleRulesResponse
       */
      Models::DisableAutoThrottleRulesResponse disableAutoThrottleRulesWithOptions(const Models::DisableAutoThrottleRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the automatic SQL throttling feature for multiple database instances at a time.
       *
       * @description If you use an SDK to call operations of Database Autonomy Service (DAS), you must set the region ID to cn-shanghai.
       *
       * @param request DisableAutoThrottleRulesRequest
       * @return DisableAutoThrottleRulesResponse
       */
      Models::DisableAutoThrottleRulesResponse disableAutoThrottleRules(const Models::DisableAutoThrottleRulesRequest &request);

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
      Models::DisableDasProResponse disableDasProWithOptions(const Models::DisableDasProRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisableDasProResponse disableDasPro(const Models::DisableDasProRequest &request);

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
      Models::DisableInstanceDasConfigResponse disableInstanceDasConfigWithOptions(const Models::DisableInstanceDasConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisableInstanceDasConfigResponse disableInstanceDasConfig(const Models::DisableInstanceDasConfigRequest &request);

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
      Models::DisableSqlConcurrencyControlResponse disableSqlConcurrencyControlWithOptions(const Models::DisableSqlConcurrencyControlRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisableSqlConcurrencyControlResponse disableSqlConcurrencyControl(const Models::DisableSqlConcurrencyControlRequest &request);

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
      Models::EnableDasProResponse enableDasProWithOptions(const Models::EnableDasProRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::EnableDasProResponse enableDasPro(const Models::EnableDasProRequest &request);

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
      Models::EnableSqlConcurrencyControlResponse enableSqlConcurrencyControlWithOptions(const Models::EnableSqlConcurrencyControlRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::EnableSqlConcurrencyControlResponse enableSqlConcurrencyControl(const Models::EnableSqlConcurrencyControlRequest &request);

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
      Models::GetAsyncErrorRequestListByCodeResponse getAsyncErrorRequestListByCodeWithOptions(const Models::GetAsyncErrorRequestListByCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAsyncErrorRequestListByCodeResponse getAsyncErrorRequestListByCode(const Models::GetAsyncErrorRequestListByCodeRequest &request);

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
      Models::GetAsyncErrorRequestStatByCodeResponse getAsyncErrorRequestStatByCodeWithOptions(const Models::GetAsyncErrorRequestStatByCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAsyncErrorRequestStatByCodeResponse getAsyncErrorRequestStatByCode(const Models::GetAsyncErrorRequestStatByCodeRequest &request);

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
      Models::GetAsyncErrorRequestStatResultResponse getAsyncErrorRequestStatResultWithOptions(const Models::GetAsyncErrorRequestStatResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAsyncErrorRequestStatResultResponse getAsyncErrorRequestStatResult(const Models::GetAsyncErrorRequestStatResultRequest &request);

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
      Models::GetAutoIncrementUsageStatisticResponse getAutoIncrementUsageStatisticWithOptions(const Models::GetAutoIncrementUsageStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutoIncrementUsageStatisticResponse getAutoIncrementUsageStatistic(const Models::GetAutoIncrementUsageStatisticRequest &request);

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
      Models::GetAutoResourceOptimizeRulesResponse getAutoResourceOptimizeRulesWithOptions(const Models::GetAutoResourceOptimizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutoResourceOptimizeRulesResponse getAutoResourceOptimizeRules(const Models::GetAutoResourceOptimizeRulesRequest &request);

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
      Models::GetAutoThrottleRulesResponse getAutoThrottleRulesWithOptions(const Models::GetAutoThrottleRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutoThrottleRulesResponse getAutoThrottleRules(const Models::GetAutoThrottleRulesRequest &request);

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
      Models::GetAutonomousNotifyEventContentResponse getAutonomousNotifyEventContentWithOptions(const Models::GetAutonomousNotifyEventContentRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutonomousNotifyEventContentResponse getAutonomousNotifyEventContent(const Models::GetAutonomousNotifyEventContentRequest &request);

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
      Models::GetAutonomousNotifyEventsInRangeResponse getAutonomousNotifyEventsInRangeWithOptions(const Models::GetAutonomousNotifyEventsInRangeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutonomousNotifyEventsInRangeResponse getAutonomousNotifyEventsInRange(const Models::GetAutonomousNotifyEventsInRangeRequest &request);

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
      Models::GetBlockingDetailListResponse getBlockingDetailListWithOptions(const Models::GetBlockingDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetBlockingDetailListResponse getBlockingDetailList(const Models::GetBlockingDetailListRequest &request);

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
      Models::GetDBInstanceConnectivityDiagnosisResponse getDBInstanceConnectivityDiagnosisWithOptions(const Models::GetDBInstanceConnectivityDiagnosisRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDBInstanceConnectivityDiagnosisResponse getDBInstanceConnectivityDiagnosis(const Models::GetDBInstanceConnectivityDiagnosisRequest &request);

      /**
       * @summary This API uses Server-Sent Events (SSE) to interact with the DAS agent. You can use this API for features such as Q&A and performance diagnostics.
       *
       * @description This is a paid API. You are charged based on the number of output characters. Before you use this API, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/das/product-overview/billing-details-of-the-previous-version?spm=a2c4g.11186623.help-menu-63907.d_0_1_0.b7203b87MDNqHO\\&scm=20140722.H_156195._.OR_help-T_cn~zh-V_1#cad160563fbkd) of the DAS Agent product.
       *
       * @param request GetDasAgentSSERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDasAgentSSEResponse
       */
      FutureGenerator<Models::GetDasAgentSSEResponse> getDasAgentSSEWithSSE(const Models::GetDasAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API uses Server-Sent Events (SSE) to interact with the DAS agent. You can use this API for features such as Q&A and performance diagnostics.
       *
       * @description This is a paid API. You are charged based on the number of output characters. Before you use this API, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/das/product-overview/billing-details-of-the-previous-version?spm=a2c4g.11186623.help-menu-63907.d_0_1_0.b7203b87MDNqHO\\&scm=20140722.H_156195._.OR_help-T_cn~zh-V_1#cad160563fbkd) of the DAS Agent product.
       *
       * @param request GetDasAgentSSERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDasAgentSSEResponse
       */
      Models::GetDasAgentSSEResponse getDasAgentSSEWithOptions(const Models::GetDasAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API uses Server-Sent Events (SSE) to interact with the DAS agent. You can use this API for features such as Q&A and performance diagnostics.
       *
       * @description This is a paid API. You are charged based on the number of output characters. Before you use this API, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/das/product-overview/billing-details-of-the-previous-version?spm=a2c4g.11186623.help-menu-63907.d_0_1_0.b7203b87MDNqHO\\&scm=20140722.H_156195._.OR_help-T_cn~zh-V_1#cad160563fbkd) of the DAS Agent product.
       *
       * @param request GetDasAgentSSERequest
       * @return GetDasAgentSSEResponse
       */
      Models::GetDasAgentSSEResponse getDasAgentSSE(const Models::GetDasAgentSSERequest &request);

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
      Models::GetDasProServiceUsageResponse getDasProServiceUsageWithOptions(const Models::GetDasProServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDasProServiceUsageResponse getDasProServiceUsage(const Models::GetDasProServiceUsageRequest &request);

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
      Models::GetDasSQLLogHotDataResponse getDasSQLLogHotDataWithOptions(const Models::GetDasSQLLogHotDataRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDasSQLLogHotDataResponse getDasSQLLogHotData(const Models::GetDasSQLLogHotDataRequest &request);

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
      Models::GetDeadLockDetailResponse getDeadLockDetailWithOptions(const Models::GetDeadLockDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDeadLockDetailResponse getDeadLockDetail(const Models::GetDeadLockDetailRequest &request);

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
      Models::GetDeadLockDetailListResponse getDeadLockDetailListWithOptions(const Models::GetDeadLockDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDeadLockDetailListResponse getDeadLockDetailList(const Models::GetDeadLockDetailListRequest &request);

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
      Models::GetDeadLockHistoryResponse getDeadLockHistoryWithOptions(const Models::GetDeadLockHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDeadLockHistoryResponse getDeadLockHistory(const Models::GetDeadLockHistoryRequest &request);

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
      Models::GetDeadlockHistogramResponse getDeadlockHistogramWithOptions(const Models::GetDeadlockHistogramRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDeadlockHistogramResponse getDeadlockHistogram(const Models::GetDeadlockHistogramRequest &request);

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
      Models::GetErrorRequestSampleResponse getErrorRequestSampleWithOptions(const Models::GetErrorRequestSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetErrorRequestSampleResponse getErrorRequestSample(const Models::GetErrorRequestSampleRequest &request);

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
      Models::GetEventSubscriptionResponse getEventSubscriptionWithOptions(const Models::GetEventSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetEventSubscriptionResponse getEventSubscription(const Models::GetEventSubscriptionRequest &request);

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
      Models::GetFullRequestOriginStatByInstanceIdResponse getFullRequestOriginStatByInstanceIdWithOptions(const Models::GetFullRequestOriginStatByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetFullRequestOriginStatByInstanceIdResponse getFullRequestOriginStatByInstanceId(const Models::GetFullRequestOriginStatByInstanceIdRequest &request);

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
      Models::GetFullRequestSampleByInstanceIdResponse getFullRequestSampleByInstanceIdWithOptions(const Models::GetFullRequestSampleByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetFullRequestSampleByInstanceIdResponse getFullRequestSampleByInstanceId(const Models::GetFullRequestSampleByInstanceIdRequest &request);

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
      Models::GetFullRequestStatResultByInstanceIdResponse getFullRequestStatResultByInstanceIdWithOptions(const Models::GetFullRequestStatResultByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetFullRequestStatResultByInstanceIdResponse getFullRequestStatResultByInstanceId(const Models::GetFullRequestStatResultByInstanceIdRequest &request);

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
      Models::GetInstanceGroupInspectReportDetailResponse getInstanceGroupInspectReportDetailWithOptions(const Models::GetInstanceGroupInspectReportDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetInstanceGroupInspectReportDetailResponse getInstanceGroupInspectReportDetail(const Models::GetInstanceGroupInspectReportDetailRequest &request);

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
      Models::GetInstanceGroupInspectReportListResponse getInstanceGroupInspectReportListWithOptions(const Models::GetInstanceGroupInspectReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetInstanceGroupInspectReportListResponse getInstanceGroupInspectReportList(const Models::GetInstanceGroupInspectReportListRequest &request);

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
      Models::GetInstanceInspectionsResponse getInstanceInspectionsWithOptions(const Models::GetInstanceInspectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetInstanceInspectionsResponse getInstanceInspections(const Models::GetInstanceInspectionsRequest &request);

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
      Models::GetInstanceMissingIndexListResponse getInstanceMissingIndexListWithOptions(const Models::GetInstanceMissingIndexListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetInstanceMissingIndexListResponse getInstanceMissingIndexList(const Models::GetInstanceMissingIndexListRequest &request);

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
      Models::GetInstanceSqlOptimizeStatisticResponse getInstanceSqlOptimizeStatisticWithOptions(const Models::GetInstanceSqlOptimizeStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetInstanceSqlOptimizeStatisticResponse getInstanceSqlOptimizeStatistic(const Models::GetInstanceSqlOptimizeStatisticRequest &request);

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
      Models::GetKillInstanceSessionTaskResultResponse getKillInstanceSessionTaskResultWithOptions(const Models::GetKillInstanceSessionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetKillInstanceSessionTaskResultResponse getKillInstanceSessionTaskResult(const Models::GetKillInstanceSessionTaskResultRequest &request);

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
      Models::GetMongoDBCurrentOpResponse getMongoDBCurrentOpWithOptions(const Models::GetMongoDBCurrentOpRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetMongoDBCurrentOpResponse getMongoDBCurrentOp(const Models::GetMongoDBCurrentOpRequest &request);

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
      Models::GetMySQLAllSessionAsyncResponse getMySQLAllSessionAsyncWithOptions(const Models::GetMySQLAllSessionAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetMySQLAllSessionAsyncResponse getMySQLAllSessionAsync(const Models::GetMySQLAllSessionAsyncRequest &request);

      /**
       * @summary Queries access frequency statistics and hot data on partitions of a PolarDB-X 2.0 instance.
       *
       * @description We recommend that you do not call this operation. The data is returned in a special format and is complex to parse. You can use the [heatmap](https://help.aliyun.com/document_detail/470302.html) feature of Database Autonomy Service (DAS) to query the data.
       *
       * @param request GetPartitionsHeatmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPartitionsHeatmapResponse
       */
      Models::GetPartitionsHeatmapResponse getPartitionsHeatmapWithOptions(const Models::GetPartitionsHeatmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access frequency statistics and hot data on partitions of a PolarDB-X 2.0 instance.
       *
       * @description We recommend that you do not call this operation. The data is returned in a special format and is complex to parse. You can use the [heatmap](https://help.aliyun.com/document_detail/470302.html) feature of Database Autonomy Service (DAS) to query the data.
       *
       * @param request GetPartitionsHeatmapRequest
       * @return GetPartitionsHeatmapResponse
       */
      Models::GetPartitionsHeatmapResponse getPartitionsHeatmap(const Models::GetPartitionsHeatmapRequest &request);

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
      Models::GetPfsMetricTrendsResponse getPfsMetricTrendsWithOptions(const Models::GetPfsMetricTrendsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetPfsMetricTrendsResponse getPfsMetricTrends(const Models::GetPfsMetricTrendsRequest &request);

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
      Models::GetPfsSqlSampleResponse getPfsSqlSampleWithOptions(const Models::GetPfsSqlSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetPfsSqlSampleResponse getPfsSqlSample(const Models::GetPfsSqlSampleRequest &request);

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
      Models::GetPfsSqlSummariesResponse getPfsSqlSummariesWithOptions(const Models::GetPfsSqlSummariesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetPfsSqlSummariesResponse getPfsSqlSummaries(const Models::GetPfsSqlSummariesRequest &request);

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
      Models::GetQueryOptimizeDataStatsResponse getQueryOptimizeDataStatsWithOptions(const Models::GetQueryOptimizeDataStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeDataStatsResponse getQueryOptimizeDataStats(const Models::GetQueryOptimizeDataStatsRequest &request);

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
      Models::GetQueryOptimizeDataTopResponse getQueryOptimizeDataTopWithOptions(const Models::GetQueryOptimizeDataTopRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeDataTopResponse getQueryOptimizeDataTop(const Models::GetQueryOptimizeDataTopRequest &request);

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
      Models::GetQueryOptimizeDataTrendResponse getQueryOptimizeDataTrendWithOptions(const Models::GetQueryOptimizeDataTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeDataTrendResponse getQueryOptimizeDataTrend(const Models::GetQueryOptimizeDataTrendRequest &request);

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
      Models::GetQueryOptimizeExecErrorSampleResponse getQueryOptimizeExecErrorSampleWithOptions(const Models::GetQueryOptimizeExecErrorSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeExecErrorSampleResponse getQueryOptimizeExecErrorSample(const Models::GetQueryOptimizeExecErrorSampleRequest &request);

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
      Models::GetQueryOptimizeExecErrorStatsResponse getQueryOptimizeExecErrorStatsWithOptions(const Models::GetQueryOptimizeExecErrorStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeExecErrorStatsResponse getQueryOptimizeExecErrorStats(const Models::GetQueryOptimizeExecErrorStatsRequest &request);

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
      Models::GetQueryOptimizeRuleListResponse getQueryOptimizeRuleListWithOptions(const Models::GetQueryOptimizeRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeRuleListResponse getQueryOptimizeRuleList(const Models::GetQueryOptimizeRuleListRequest &request);

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
      Models::GetQueryOptimizeShareUrlResponse getQueryOptimizeShareUrlWithOptions(const Models::GetQueryOptimizeShareUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeShareUrlResponse getQueryOptimizeShareUrl(const Models::GetQueryOptimizeShareUrlRequest &request);

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
      Models::GetQueryOptimizeSolutionResponse getQueryOptimizeSolutionWithOptions(const Models::GetQueryOptimizeSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeSolutionResponse getQueryOptimizeSolution(const Models::GetQueryOptimizeSolutionRequest &request);

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
      Models::GetQueryOptimizeTagResponse getQueryOptimizeTagWithOptions(const Models::GetQueryOptimizeTagRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeTagResponse getQueryOptimizeTag(const Models::GetQueryOptimizeTagRequest &request);

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
      Models::GetRedisAllSessionResponse getRedisAllSessionWithOptions(const Models::GetRedisAllSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetRedisAllSessionResponse getRedisAllSession(const Models::GetRedisAllSessionRequest &request);

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
      Models::GetRequestDiagnosisPageResponse getRequestDiagnosisPageWithOptions(const Models::GetRequestDiagnosisPageRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetRequestDiagnosisPageResponse getRequestDiagnosisPage(const Models::GetRequestDiagnosisPageRequest &request);

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
      Models::GetRequestDiagnosisResultResponse getRequestDiagnosisResultWithOptions(const Models::GetRequestDiagnosisResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetRequestDiagnosisResultResponse getRequestDiagnosisResult(const Models::GetRequestDiagnosisResultRequest &request);

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
      Models::GetRunningSqlConcurrencyControlRulesResponse getRunningSqlConcurrencyControlRulesWithOptions(const Models::GetRunningSqlConcurrencyControlRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetRunningSqlConcurrencyControlRulesResponse getRunningSqlConcurrencyControlRules(const Models::GetRunningSqlConcurrencyControlRulesRequest &request);

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
      Models::GetSqlConcurrencyControlKeywordsFromSqlTextResponse getSqlConcurrencyControlKeywordsFromSqlTextWithOptions(const Models::GetSqlConcurrencyControlKeywordsFromSqlTextRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetSqlConcurrencyControlKeywordsFromSqlTextResponse getSqlConcurrencyControlKeywordsFromSqlText(const Models::GetSqlConcurrencyControlKeywordsFromSqlTextRequest &request);

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
      Models::GetSqlConcurrencyControlRulesHistoryResponse getSqlConcurrencyControlRulesHistoryWithOptions(const Models::GetSqlConcurrencyControlRulesHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetSqlConcurrencyControlRulesHistoryResponse getSqlConcurrencyControlRulesHistory(const Models::GetSqlConcurrencyControlRulesHistoryRequest &request);

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
      Models::GetSqlOptimizeAdviceResponse getSqlOptimizeAdviceWithOptions(const Models::GetSqlOptimizeAdviceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetSqlOptimizeAdviceResponse getSqlOptimizeAdvice(const Models::GetSqlOptimizeAdviceRequest &request);

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
      Models::GetStorageAnalysisResultResponse getStorageAnalysisResultWithOptions(const Models::GetStorageAnalysisResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetStorageAnalysisResultResponse getStorageAnalysisResult(const Models::GetStorageAnalysisResultRequest &request);

      /**
       * @summary Provides the Alibaba Cloud ApsaraDB Agent foundation model capability interface for AI chat, performance diagnostics, and other features.
       *
       * @param request GetYaoChiAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYaoChiAgentResponse
       */
      FutureGenerator<Models::GetYaoChiAgentResponse> getYaoChiAgentWithSSE(const Models::GetYaoChiAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides the Alibaba Cloud ApsaraDB Agent foundation model capability interface for AI chat, performance diagnostics, and other features.
       *
       * @param request GetYaoChiAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYaoChiAgentResponse
       */
      Models::GetYaoChiAgentResponse getYaoChiAgentWithOptions(const Models::GetYaoChiAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides the Alibaba Cloud ApsaraDB Agent foundation model capability interface for AI chat, performance diagnostics, and other features.
       *
       * @param request GetYaoChiAgentRequest
       * @return GetYaoChiAgentResponse
       */
      Models::GetYaoChiAgentResponse getYaoChiAgent(const Models::GetYaoChiAgentRequest &request);

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
      Models::KillInstanceAllSessionResponse killInstanceAllSessionWithOptions(const Models::KillInstanceAllSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::KillInstanceAllSessionResponse killInstanceAllSession(const Models::KillInstanceAllSessionRequest &request);

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
      Models::ModifyAutoScalingConfigResponse modifyAutoScalingConfigWithOptions(const Models::ModifyAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyAutoScalingConfigResponse modifyAutoScalingConfig(const Models::ModifyAutoScalingConfigRequest &request);

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
      Models::ModifySecurityIPGroupResponse modifySecurityIPGroupWithOptions(const Models::ModifySecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifySecurityIPGroupResponse modifySecurityIPGroup(const Models::ModifySecurityIPGroupRequest &request);

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
      Models::ModifySecurityIPGroupRelationResponse modifySecurityIPGroupRelationWithOptions(const Models::ModifySecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifySecurityIPGroupRelationResponse modifySecurityIPGroupRelation(const Models::ModifySecurityIPGroupRelationRequest &request);

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
      Models::ModifySqlLogConfigResponse modifySqlLogConfigWithOptions(const Models::ModifySqlLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifySqlLogConfigResponse modifySqlLogConfig(const Models::ModifySqlLogConfigRequest &request);

      /**
       * @summary Calls the RunCloudBenchTask operation to execute a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you determine whether your instance type needs to be scaled out to handle peak service traffic. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request RunCloudBenchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCloudBenchTaskResponse
       */
      Models::RunCloudBenchTaskResponse runCloudBenchTaskWithOptions(const Models::RunCloudBenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the RunCloudBenchTask operation to execute a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you determine whether your instance type needs to be scaled out to handle peak service traffic. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request RunCloudBenchTaskRequest
       * @return RunCloudBenchTaskResponse
       */
      Models::RunCloudBenchTaskResponse runCloudBenchTask(const Models::RunCloudBenchTaskRequest &request);

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
      Models::SetEventSubscriptionResponse setEventSubscriptionWithOptions(const Models::SetEventSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::SetEventSubscriptionResponse setEventSubscription(const Models::SetEventSubscriptionRequest &request);

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
      Models::UpdateAutoResourceOptimizeRulesAsyncResponse updateAutoResourceOptimizeRulesAsyncWithOptions(const Models::UpdateAutoResourceOptimizeRulesAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateAutoResourceOptimizeRulesAsyncResponse updateAutoResourceOptimizeRulesAsync(const Models::UpdateAutoResourceOptimizeRulesAsyncRequest &request);

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
      Models::UpdateAutoSqlOptimizeStatusResponse updateAutoSqlOptimizeStatusWithOptions(const Models::UpdateAutoSqlOptimizeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateAutoSqlOptimizeStatusResponse updateAutoSqlOptimizeStatus(const Models::UpdateAutoSqlOptimizeStatusRequest &request);

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
      Models::UpdateAutoThrottleRulesAsyncResponse updateAutoThrottleRulesAsyncWithOptions(const Models::UpdateAutoThrottleRulesAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateAutoThrottleRulesAsyncResponse updateAutoThrottleRulesAsync(const Models::UpdateAutoThrottleRulesAsyncRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
