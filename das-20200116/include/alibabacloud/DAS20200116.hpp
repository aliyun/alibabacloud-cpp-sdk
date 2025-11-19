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
       * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
       * *   If you use an SDK to call DAS, you must set the region to cn-shanghai.
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
       * *   If you use an Alibaba Cloud SDK or a DAS SDK to call this operation, we recommend that you use the latest version of the SDK.
       * *   If you use an SDK to call DAS, you must set the region to cn-shanghai.
       *
       * @param request AddHDMInstanceRequest
       * @return AddHDMInstanceResponse
       */
      Models::AddHDMInstanceResponse addHDMInstance(const Models::AddHDMInstanceRequest &request);

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
      Models::CreateCacheAnalysisJobResponse createCacheAnalysisJobWithOptions(const Models::CreateCacheAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCacheAnalysisJobResponse createCacheAnalysisJob(const Models::CreateCacheAnalysisJobRequest &request);

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
      Models::CreateCloudBenchTasksResponse createCloudBenchTasksWithOptions(const Models::CreateCloudBenchTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCloudBenchTasksResponse createCloudBenchTasks(const Models::CreateCloudBenchTasksRequest &request);

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
      Models::CreateDiagnosticReportResponse createDiagnosticReportWithOptions(const Models::CreateDiagnosticReportRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateDiagnosticReportResponse createDiagnosticReport(const Models::CreateDiagnosticReportRequest &request);

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
      Models::CreateKillInstanceSessionTaskResponse createKillInstanceSessionTaskWithOptions(const Models::CreateKillInstanceSessionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @summary 创建最近死锁分析任务
       *
       * @param request CreateLatestDeadLockAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLatestDeadLockAnalysisResponse
       */
      Models::CreateLatestDeadLockAnalysisResponse createLatestDeadLockAnalysisWithOptions(const Models::CreateLatestDeadLockAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建最近死锁分析任务
       *
       * @param request CreateLatestDeadLockAnalysisRequest
       * @return CreateLatestDeadLockAnalysisResponse
       */
      Models::CreateLatestDeadLockAnalysisResponse createLatestDeadLockAnalysis(const Models::CreateLatestDeadLockAnalysisRequest &request);

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
      Models::CreateQueryOptimizeTagResponse createQueryOptimizeTagWithOptions(const Models::CreateQueryOptimizeTagRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateQueryOptimizeTagResponse createQueryOptimizeTag(const Models::CreateQueryOptimizeTagRequest &request);

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
      Models::CreateRequestDiagnosisResponse createRequestDiagnosisWithOptions(const Models::CreateRequestDiagnosisRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateRequestDiagnosisResponse createRequestDiagnosis(const Models::CreateRequestDiagnosisRequest &request);

      /**
       * @summary 创建用户跨产品白名单模板
       *
       * @param request CreateSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityIPGroupResponse
       */
      Models::CreateSecurityIPGroupResponse createSecurityIPGroupWithOptions(const Models::CreateSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用户跨产品白名单模板
       *
       * @param request CreateSecurityIPGroupRequest
       * @return CreateSecurityIPGroupResponse
       */
      Models::CreateSecurityIPGroupResponse createSecurityIPGroup(const Models::CreateSecurityIPGroupRequest &request);

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
      Models::CreateSqlLogTaskResponse createSqlLogTaskWithOptions(const Models::CreateSqlLogTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateSqlLogTaskResponse createSqlLogTask(const Models::CreateSqlLogTaskRequest &request);

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
      Models::CreateStorageAnalysisTaskResponse createStorageAnalysisTaskWithOptions(const Models::CreateStorageAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateStorageAnalysisTaskResponse createStorageAnalysisTask(const Models::CreateStorageAnalysisTaskRequest &request);

      /**
       * @summary Deletes a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to handle traffic spikes in an effective manner. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DeleteCloudBenchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudBenchTaskResponse
       */
      Models::DeleteCloudBenchTaskResponse deleteCloudBenchTaskWithOptions(const Models::DeleteCloudBenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to handle traffic spikes in an effective manner. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DeleteCloudBenchTaskRequest
       * @return DeleteCloudBenchTaskResponse
       */
      Models::DeleteCloudBenchTaskResponse deleteCloudBenchTask(const Models::DeleteCloudBenchTaskRequest &request);

      /**
       * @summary 删除用户跨产品白名单模板
       *
       * @param request DeleteSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityIPGroupResponse
       */
      Models::DeleteSecurityIPGroupResponse deleteSecurityIPGroupWithOptions(const Models::DeleteSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户跨产品白名单模板
       *
       * @param request DeleteSecurityIPGroupRequest
       * @return DeleteSecurityIPGroupResponse
       */
      Models::DeleteSecurityIPGroupResponse deleteSecurityIPGroup(const Models::DeleteSecurityIPGroupRequest &request);

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
      Models::DeleteStopGatewayResponse deleteStopGatewayWithOptions(const Models::DeleteStopGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteStopGatewayResponse deleteStopGateway(const Models::DeleteStopGatewayRequest &request);

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
      Models::DescribeAutoScalingConfigResponse describeAutoScalingConfigWithOptions(const Models::DescribeAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAutoScalingConfigResponse describeAutoScalingConfig(const Models::DescribeAutoScalingConfigRequest &request);

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
      Models::DescribeAutoScalingHistoryResponse describeAutoScalingHistoryWithOptions(const Models::DescribeAutoScalingHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAutoScalingHistoryResponse describeAutoScalingHistory(const Models::DescribeAutoScalingHistoryRequest &request);

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
      Models::DescribeCacheAnalysisJobResponse describeCacheAnalysisJobWithOptions(const Models::DescribeCacheAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCacheAnalysisJobResponse describeCacheAnalysisJob(const Models::DescribeCacheAnalysisJobRequest &request);

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
      Models::DescribeCacheAnalysisJobsResponse describeCacheAnalysisJobsWithOptions(const Models::DescribeCacheAnalysisJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCacheAnalysisJobsResponse describeCacheAnalysisJobs(const Models::DescribeCacheAnalysisJobsRequest &request);

      /**
       * @summary Queries stress testing tasks.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudBenchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudBenchTasksResponse
       */
      Models::DescribeCloudBenchTasksResponse describeCloudBenchTasksWithOptions(const Models::DescribeCloudBenchTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stress testing tasks.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudBenchTasksRequest
       * @return DescribeCloudBenchTasksResponse
       */
      Models::DescribeCloudBenchTasksResponse describeCloudBenchTasks(const Models::DescribeCloudBenchTasksRequest &request);

      /**
       * @summary Queries a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether you need to scale up your database instance to handle workloads during peak hours. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudbenchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudbenchTaskResponse
       */
      Models::DescribeCloudbenchTaskResponse describeCloudbenchTaskWithOptions(const Models::DescribeCloudbenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether you need to scale up your database instance to handle workloads during peak hours. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudbenchTaskRequest
       * @return DescribeCloudbenchTaskResponse
       */
      Models::DescribeCloudbenchTaskResponse describeCloudbenchTask(const Models::DescribeCloudbenchTaskRequest &request);

      /**
       * @summary Queries the configurations of a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudbenchTaskConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudbenchTaskConfigResponse
       */
      Models::DescribeCloudbenchTaskConfigResponse describeCloudbenchTaskConfigWithOptions(const Models::DescribeCloudbenchTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request DescribeCloudbenchTaskConfigRequest
       * @return DescribeCloudbenchTaskConfigResponse
       */
      Models::DescribeCloudbenchTaskConfigResponse describeCloudbenchTaskConfig(const Models::DescribeCloudbenchTaskConfigRequest &request);

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
      Models::DescribeDiagnosticReportListResponse describeDiagnosticReportListWithOptions(const Models::DescribeDiagnosticReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeDiagnosticReportListResponse describeDiagnosticReportList(const Models::DescribeDiagnosticReportListRequest &request);

      /**
       * @summary 查询实例错误日志
       *
       * @param request DescribeErrorLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeErrorLogRecordsResponse
       */
      Models::DescribeErrorLogRecordsResponse describeErrorLogRecordsWithOptions(const Models::DescribeErrorLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例错误日志
       *
       * @param request DescribeErrorLogRecordsRequest
       * @return DescribeErrorLogRecordsResponse
       */
      Models::DescribeErrorLogRecordsResponse describeErrorLogRecords(const Models::DescribeErrorLogRecordsRequest &request);

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
      Models::DescribeHotBigKeysResponse describeHotBigKeysWithOptions(const Models::DescribeHotBigKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeHotBigKeysResponse describeHotBigKeys(const Models::DescribeHotBigKeysRequest &request);

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
      Models::DescribeHotKeysResponse describeHotKeysWithOptions(const Models::DescribeHotKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeHotKeysResponse describeHotKeys(const Models::DescribeHotKeysRequest &request);

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
      Models::DescribeInstanceDasProResponse describeInstanceDasProWithOptions(const Models::DescribeInstanceDasProRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceDasProResponse describeInstanceDasPro(const Models::DescribeInstanceDasProRequest &request);

      /**
       * @summary 获取执行计划
       *
       * @param request DescribeQueryExplainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQueryExplainResponse
       */
      Models::DescribeQueryExplainResponse describeQueryExplainWithOptions(const Models::DescribeQueryExplainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取执行计划
       *
       * @param request DescribeQueryExplainRequest
       * @return DescribeQueryExplainResponse
       */
      Models::DescribeQueryExplainResponse describeQueryExplain(const Models::DescribeQueryExplainRequest &request);

      /**
       * @summary 展示用户跨产品白名单模板具体信息
       *
       * @param request DescribeSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIPGroupResponse
       */
      Models::DescribeSecurityIPGroupResponse describeSecurityIPGroupWithOptions(const Models::DescribeSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示用户跨产品白名单模板具体信息
       *
       * @param request DescribeSecurityIPGroupRequest
       * @return DescribeSecurityIPGroupResponse
       */
      Models::DescribeSecurityIPGroupResponse describeSecurityIPGroup(const Models::DescribeSecurityIPGroupRequest &request);

      /**
       * @summary 展示用户跨产品白名单模板与实例绑定信息
       *
       * @param request DescribeSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIPGroupRelationResponse
       */
      Models::DescribeSecurityIPGroupRelationResponse describeSecurityIPGroupRelationWithOptions(const Models::DescribeSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示用户跨产品白名单模板与实例绑定信息
       *
       * @param request DescribeSecurityIPGroupRelationRequest
       * @return DescribeSecurityIPGroupRelationResponse
       */
      Models::DescribeSecurityIPGroupRelationResponse describeSecurityIPGroupRelation(const Models::DescribeSecurityIPGroupRelationRequest &request);

      /**
       * @summary DescribeSlowLogHistogramAsync
       *
       * @param request DescribeSlowLogHistogramAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogHistogramAsyncResponse
       */
      Models::DescribeSlowLogHistogramAsyncResponse describeSlowLogHistogramAsyncWithOptions(const Models::DescribeSlowLogHistogramAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeSlowLogHistogramAsync
       *
       * @param request DescribeSlowLogHistogramAsyncRequest
       * @return DescribeSlowLogHistogramAsyncResponse
       */
      Models::DescribeSlowLogHistogramAsyncResponse describeSlowLogHistogramAsync(const Models::DescribeSlowLogHistogramAsyncRequest &request);

      /**
       * @summary 查看慢日志明细接口
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看慢日志明细接口
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary 慢日志统计信息
       *
       * @param request DescribeSlowLogStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogStatisticResponse
       */
      Models::DescribeSlowLogStatisticResponse describeSlowLogStatisticWithOptions(const Models::DescribeSlowLogStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 慢日志统计信息
       *
       * @param request DescribeSlowLogStatisticRequest
       * @return DescribeSlowLogStatisticResponse
       */
      Models::DescribeSlowLogStatisticResponse describeSlowLogStatistic(const Models::DescribeSlowLogStatisticRequest &request);

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
      Models::DescribeSqlLogConfigResponse describeSqlLogConfigWithOptions(const Models::DescribeSqlLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogConfigResponse describeSqlLogConfig(const Models::DescribeSqlLogConfigRequest &request);

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
      Models::DescribeSqlLogRecordsResponse describeSqlLogRecordsWithOptions(const Models::DescribeSqlLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogRecordsResponse describeSqlLogRecords(const Models::DescribeSqlLogRecordsRequest &request);

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
      Models::DescribeSqlLogStatisticResponse describeSqlLogStatisticWithOptions(const Models::DescribeSqlLogStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogStatisticResponse describeSqlLogStatistic(const Models::DescribeSqlLogStatisticRequest &request);

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
      Models::DescribeSqlLogTaskResponse describeSqlLogTaskWithOptions(const Models::DescribeSqlLogTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogTaskResponse describeSqlLogTask(const Models::DescribeSqlLogTaskRequest &request);

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
      Models::DescribeSqlLogTasksResponse describeSqlLogTasksWithOptions(const Models::DescribeSqlLogTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSqlLogTasksResponse describeSqlLogTasks(const Models::DescribeSqlLogTasksRequest &request);

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
      Models::DescribeTopBigKeysResponse describeTopBigKeysWithOptions(const Models::DescribeTopBigKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeTopBigKeysResponse describeTopBigKeys(const Models::DescribeTopBigKeysRequest &request);

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
      Models::DescribeTopHotKeysResponse describeTopHotKeysWithOptions(const Models::DescribeTopHotKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeTopHotKeysResponse describeTopHotKeys(const Models::DescribeTopHotKeysRequest &request);

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
      Models::DisableAllSqlConcurrencyControlRulesResponse disableAllSqlConcurrencyControlRulesWithOptions(const Models::DisableAllSqlConcurrencyControlRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @description *   For more information about the database instances that support DAS Enterprise Edition, see [Overview](https://help.aliyun.com/document_detail/190912.html).
       * *   If you use an SDK to call API operations of DAS, you must set the region ID to cn-shanghai.
       * *   This operation is applicable only to DAS Enterprise Edition V1.
       * >  We recommend that you call the [ModifySqlLogConfig](https://help.aliyun.com/document_detail/2778835.html) operation to enable or disable DAS Enterprise Edition for a database instance. For more information about the databases and regions supported by each version of DAS Enterprise Edition, see [Editions and supported features](https://help.aliyun.com/document_detail/156204.html).
       *
       * @param request DisableDasProRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDasProResponse
       */
      Models::DisableDasProResponse disableDasProWithOptions(const Models::DisableDasProRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisableDasProResponse disableDasPro(const Models::DisableDasProRequest &request);

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
      Models::DisableInstanceDasConfigResponse disableInstanceDasConfigWithOptions(const Models::DisableInstanceDasConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisableInstanceDasConfigResponse disableInstanceDasConfig(const Models::DisableInstanceDasConfigRequest &request);

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
      Models::DisableSqlConcurrencyControlResponse disableSqlConcurrencyControlWithOptions(const Models::DisableSqlConcurrencyControlRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DisableSqlConcurrencyControlResponse disableSqlConcurrencyControl(const Models::DisableSqlConcurrencyControlRequest &request);

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
      Models::EnableDasProResponse enableDasProWithOptions(const Models::EnableDasProRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::EnableDasProResponse enableDasPro(const Models::EnableDasProRequest &request);

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
      Models::EnableSqlConcurrencyControlResponse enableSqlConcurrencyControlWithOptions(const Models::EnableSqlConcurrencyControlRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::EnableSqlConcurrencyControlResponse enableSqlConcurrencyControl(const Models::EnableSqlConcurrencyControlRequest &request);

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
      Models::GetAsyncErrorRequestListByCodeResponse getAsyncErrorRequestListByCodeWithOptions(const Models::GetAsyncErrorRequestListByCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAsyncErrorRequestListByCodeResponse getAsyncErrorRequestListByCode(const Models::GetAsyncErrorRequestListByCodeRequest &request);

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
      Models::GetAsyncErrorRequestStatByCodeResponse getAsyncErrorRequestStatByCodeWithOptions(const Models::GetAsyncErrorRequestStatByCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAsyncErrorRequestStatByCodeResponse getAsyncErrorRequestStatByCode(const Models::GetAsyncErrorRequestStatByCodeRequest &request);

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
      Models::GetAsyncErrorRequestStatResultResponse getAsyncErrorRequestStatResultWithOptions(const Models::GetAsyncErrorRequestStatResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAsyncErrorRequestStatResultResponse getAsyncErrorRequestStatResult(const Models::GetAsyncErrorRequestStatResultRequest &request);

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
      Models::GetAutoIncrementUsageStatisticResponse getAutoIncrementUsageStatisticWithOptions(const Models::GetAutoIncrementUsageStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutoIncrementUsageStatisticResponse getAutoIncrementUsageStatistic(const Models::GetAutoIncrementUsageStatisticRequest &request);

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
      Models::GetAutoResourceOptimizeRulesResponse getAutoResourceOptimizeRulesWithOptions(const Models::GetAutoResourceOptimizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutoResourceOptimizeRulesResponse getAutoResourceOptimizeRules(const Models::GetAutoResourceOptimizeRulesRequest &request);

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
      Models::GetAutoThrottleRulesResponse getAutoThrottleRulesWithOptions(const Models::GetAutoThrottleRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutoThrottleRulesResponse getAutoThrottleRules(const Models::GetAutoThrottleRulesRequest &request);

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
      Models::GetAutonomousNotifyEventContentResponse getAutonomousNotifyEventContentWithOptions(const Models::GetAutonomousNotifyEventContentRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutonomousNotifyEventContentResponse getAutonomousNotifyEventContent(const Models::GetAutonomousNotifyEventContentRequest &request);

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
      Models::GetAutonomousNotifyEventsInRangeResponse getAutonomousNotifyEventsInRangeWithOptions(const Models::GetAutonomousNotifyEventsInRangeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetAutonomousNotifyEventsInRangeResponse getAutonomousNotifyEventsInRange(const Models::GetAutonomousNotifyEventsInRangeRequest &request);

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
      Models::GetBlockingDetailListResponse getBlockingDetailListWithOptions(const Models::GetBlockingDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @summary DAS大模型能力异步逻辑接口
       *
       * @param request GetDasAgentSSERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDasAgentSSEResponse
       */
      FutrueGenerator<Models::GetDasAgentSSEResponse> getDasAgentSSEWithSSE(const Models::GetDasAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DAS大模型能力异步逻辑接口
       *
       * @param request GetDasAgentSSERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDasAgentSSEResponse
       */
      Models::GetDasAgentSSEResponse getDasAgentSSEWithOptions(const Models::GetDasAgentSSERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DAS大模型能力异步逻辑接口
       *
       * @param request GetDasAgentSSERequest
       * @return GetDasAgentSSEResponse
       */
      Models::GetDasAgentSSEResponse getDasAgentSSE(const Models::GetDasAgentSSERequest &request);

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
      Models::GetDasProServiceUsageResponse getDasProServiceUsageWithOptions(const Models::GetDasProServiceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDasProServiceUsageResponse getDasProServiceUsage(const Models::GetDasProServiceUsageRequest &request);

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
      Models::GetDasSQLLogHotDataResponse getDasSQLLogHotDataWithOptions(const Models::GetDasSQLLogHotDataRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDasSQLLogHotDataResponse getDasSQLLogHotData(const Models::GetDasSQLLogHotDataRequest &request);

      /**
       * @summary 查询单个死锁详情
       *
       * @param request GetDeadLockDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeadLockDetailResponse
       */
      Models::GetDeadLockDetailResponse getDeadLockDetailWithOptions(const Models::GetDeadLockDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个死锁详情
       *
       * @param request GetDeadLockDetailRequest
       * @return GetDeadLockDetailResponse
       */
      Models::GetDeadLockDetailResponse getDeadLockDetail(const Models::GetDeadLockDetailRequest &request);

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
      Models::GetDeadLockDetailListResponse getDeadLockDetailListWithOptions(const Models::GetDeadLockDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDeadLockDetailListResponse getDeadLockDetailList(const Models::GetDeadLockDetailListRequest &request);

      /**
       * @summary 获取历史死锁记录
       *
       * @param request GetDeadLockHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeadLockHistoryResponse
       */
      Models::GetDeadLockHistoryResponse getDeadLockHistoryWithOptions(const Models::GetDeadLockHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取历史死锁记录
       *
       * @param request GetDeadLockHistoryRequest
       * @return GetDeadLockHistoryResponse
       */
      Models::GetDeadLockHistoryResponse getDeadLockHistory(const Models::GetDeadLockHistoryRequest &request);

      /**
       * @summary 查询时间范围内基于错误日志分析的死锁数量
       *
       * @param request GetDeadlockHistogramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeadlockHistogramResponse
       */
      Models::GetDeadlockHistogramResponse getDeadlockHistogramWithOptions(const Models::GetDeadlockHistogramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询时间范围内基于错误日志分析的死锁数量
       *
       * @param request GetDeadlockHistogramRequest
       * @return GetDeadlockHistogramResponse
       */
      Models::GetDeadlockHistogramResponse getDeadlockHistogram(const Models::GetDeadlockHistogramRequest &request);

      /**
       * @param request GetEndpointSwitchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEndpointSwitchTaskResponse
       */
      Models::GetEndpointSwitchTaskResponse getEndpointSwitchTaskWithOptions(const Models::GetEndpointSwitchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetEndpointSwitchTaskRequest
       * @return GetEndpointSwitchTaskResponse
       */
      Models::GetEndpointSwitchTaskResponse getEndpointSwitchTask(const Models::GetEndpointSwitchTaskRequest &request);

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
      Models::GetErrorRequestSampleResponse getErrorRequestSampleWithOptions(const Models::GetErrorRequestSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetErrorRequestSampleResponse getErrorRequestSample(const Models::GetErrorRequestSampleRequest &request);

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
      Models::GetEventSubscriptionResponse getEventSubscriptionWithOptions(const Models::GetEventSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetEventSubscriptionResponse getEventSubscription(const Models::GetEventSubscriptionRequest &request);

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
      Models::GetFullRequestOriginStatByInstanceIdResponse getFullRequestOriginStatByInstanceIdWithOptions(const Models::GetFullRequestOriginStatByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetFullRequestOriginStatByInstanceIdResponse getFullRequestOriginStatByInstanceId(const Models::GetFullRequestOriginStatByInstanceIdRequest &request);

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
      Models::GetFullRequestSampleByInstanceIdResponse getFullRequestSampleByInstanceIdWithOptions(const Models::GetFullRequestSampleByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetFullRequestSampleByInstanceIdResponse getFullRequestSampleByInstanceId(const Models::GetFullRequestSampleByInstanceIdRequest &request);

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
      Models::GetFullRequestStatResultByInstanceIdResponse getFullRequestStatResultByInstanceIdWithOptions(const Models::GetFullRequestStatResultByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetFullRequestStatResultByInstanceIdResponse getFullRequestStatResultByInstanceId(const Models::GetFullRequestStatResultByInstanceIdRequest &request);

      /**
       * @param request GetHDMAliyunResourceSyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHDMAliyunResourceSyncResultResponse
       */
      Models::GetHDMAliyunResourceSyncResultResponse getHDMAliyunResourceSyncResultWithOptions(const Models::GetHDMAliyunResourceSyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHDMAliyunResourceSyncResultRequest
       * @return GetHDMAliyunResourceSyncResultResponse
       */
      Models::GetHDMAliyunResourceSyncResultResponse getHDMAliyunResourceSyncResult(const Models::GetHDMAliyunResourceSyncResultRequest &request);

      /**
       * @param request GetHDMLastAliyunResourceSyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHDMLastAliyunResourceSyncResultResponse
       */
      Models::GetHDMLastAliyunResourceSyncResultResponse getHDMLastAliyunResourceSyncResultWithOptions(const Models::GetHDMLastAliyunResourceSyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHDMLastAliyunResourceSyncResultRequest
       * @return GetHDMLastAliyunResourceSyncResultResponse
       */
      Models::GetHDMLastAliyunResourceSyncResultResponse getHDMLastAliyunResourceSyncResult(const Models::GetHDMLastAliyunResourceSyncResultRequest &request);

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
      Models::GetInstanceInspectionsResponse getInstanceInspectionsWithOptions(const Models::GetInstanceInspectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetInstanceInspectionsResponse getInstanceInspections(const Models::GetInstanceInspectionsRequest &request);

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
      Models::GetInstanceMissingIndexListResponse getInstanceMissingIndexListWithOptions(const Models::GetInstanceMissingIndexListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetInstanceMissingIndexListResponse getInstanceMissingIndexList(const Models::GetInstanceMissingIndexListRequest &request);

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
      Models::GetInstanceSqlOptimizeStatisticResponse getInstanceSqlOptimizeStatisticWithOptions(const Models::GetInstanceSqlOptimizeStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetInstanceSqlOptimizeStatisticResponse getInstanceSqlOptimizeStatistic(const Models::GetInstanceSqlOptimizeStatisticRequest &request);

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
      Models::GetKillInstanceSessionTaskResultResponse getKillInstanceSessionTaskResultWithOptions(const Models::GetKillInstanceSessionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetKillInstanceSessionTaskResultResponse getKillInstanceSessionTaskResult(const Models::GetKillInstanceSessionTaskResultRequest &request);

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
      Models::GetMongoDBCurrentOpResponse getMongoDBCurrentOpWithOptions(const Models::GetMongoDBCurrentOpRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetMongoDBCurrentOpResponse getMongoDBCurrentOp(const Models::GetMongoDBCurrentOpRequest &request);

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
      Models::GetMySQLAllSessionAsyncResponse getMySQLAllSessionAsyncWithOptions(const Models::GetMySQLAllSessionAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
       * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
       * *   An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
       * *   The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
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
       * *   If you use an Alibaba Cloud SDK or a Database Autonomy Service (DAS) SDK to call this operation, we recommend that you use the latest version of the SDK.
       * *   If you use an SDK to call operations of DAS, you must set the region ID to cn-shanghai.
       * *   An ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster is connected to DAS.
       * *   The new version of the performance insight feature is enabled for the database instance. For more information, see [Performance insight (new version)](https://help.aliyun.com/document_detail/469117.html).
       *
       * @param request GetPfsMetricTrendsRequest
       * @return GetPfsMetricTrendsResponse
       */
      Models::GetPfsMetricTrendsResponse getPfsMetricTrends(const Models::GetPfsMetricTrendsRequest &request);

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
      Models::GetPfsSqlSampleResponse getPfsSqlSampleWithOptions(const Models::GetPfsSqlSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetPfsSqlSampleResponse getPfsSqlSample(const Models::GetPfsSqlSampleRequest &request);

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
      Models::GetPfsSqlSummariesResponse getPfsSqlSummariesWithOptions(const Models::GetPfsSqlSummariesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetPfsSqlSummariesResponse getPfsSqlSummaries(const Models::GetPfsSqlSummariesRequest &request);

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
      Models::GetQueryOptimizeDataStatsResponse getQueryOptimizeDataStatsWithOptions(const Models::GetQueryOptimizeDataStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeDataStatsResponse getQueryOptimizeDataStats(const Models::GetQueryOptimizeDataStatsRequest &request);

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
      Models::GetQueryOptimizeDataTopResponse getQueryOptimizeDataTopWithOptions(const Models::GetQueryOptimizeDataTopRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeDataTopResponse getQueryOptimizeDataTop(const Models::GetQueryOptimizeDataTopRequest &request);

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
      Models::GetQueryOptimizeDataTrendResponse getQueryOptimizeDataTrendWithOptions(const Models::GetQueryOptimizeDataTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeDataTrendResponse getQueryOptimizeDataTrend(const Models::GetQueryOptimizeDataTrendRequest &request);

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
      Models::GetQueryOptimizeExecErrorSampleResponse getQueryOptimizeExecErrorSampleWithOptions(const Models::GetQueryOptimizeExecErrorSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeExecErrorSampleResponse getQueryOptimizeExecErrorSample(const Models::GetQueryOptimizeExecErrorSampleRequest &request);

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
      Models::GetQueryOptimizeExecErrorStatsResponse getQueryOptimizeExecErrorStatsWithOptions(const Models::GetQueryOptimizeExecErrorStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeExecErrorStatsResponse getQueryOptimizeExecErrorStats(const Models::GetQueryOptimizeExecErrorStatsRequest &request);

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
      Models::GetQueryOptimizeRuleListResponse getQueryOptimizeRuleListWithOptions(const Models::GetQueryOptimizeRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeRuleListResponse getQueryOptimizeRuleList(const Models::GetQueryOptimizeRuleListRequest &request);

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
      Models::GetQueryOptimizeShareUrlResponse getQueryOptimizeShareUrlWithOptions(const Models::GetQueryOptimizeShareUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeShareUrlResponse getQueryOptimizeShareUrl(const Models::GetQueryOptimizeShareUrlRequest &request);

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
      Models::GetQueryOptimizeSolutionResponse getQueryOptimizeSolutionWithOptions(const Models::GetQueryOptimizeSolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeSolutionResponse getQueryOptimizeSolution(const Models::GetQueryOptimizeSolutionRequest &request);

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
      Models::GetQueryOptimizeTagResponse getQueryOptimizeTagWithOptions(const Models::GetQueryOptimizeTagRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetQueryOptimizeTagResponse getQueryOptimizeTag(const Models::GetQueryOptimizeTagRequest &request);

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
      Models::GetRedisAllSessionResponse getRedisAllSessionWithOptions(const Models::GetRedisAllSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetRedisAllSessionResponse getRedisAllSession(const Models::GetRedisAllSessionRequest &request);

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
      Models::GetRequestDiagnosisPageResponse getRequestDiagnosisPageWithOptions(const Models::GetRequestDiagnosisPageRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetRequestDiagnosisPageResponse getRequestDiagnosisPage(const Models::GetRequestDiagnosisPageRequest &request);

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
      Models::GetRequestDiagnosisResultResponse getRequestDiagnosisResultWithOptions(const Models::GetRequestDiagnosisResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetRequestDiagnosisResultResponse getRequestDiagnosisResult(const Models::GetRequestDiagnosisResultRequest &request);

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
      Models::GetRunningSqlConcurrencyControlRulesResponse getRunningSqlConcurrencyControlRulesWithOptions(const Models::GetRunningSqlConcurrencyControlRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetRunningSqlConcurrencyControlRulesResponse getRunningSqlConcurrencyControlRules(const Models::GetRunningSqlConcurrencyControlRulesRequest &request);

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
      Models::GetSqlConcurrencyControlKeywordsFromSqlTextResponse getSqlConcurrencyControlKeywordsFromSqlTextWithOptions(const Models::GetSqlConcurrencyControlKeywordsFromSqlTextRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetSqlConcurrencyControlKeywordsFromSqlTextResponse getSqlConcurrencyControlKeywordsFromSqlText(const Models::GetSqlConcurrencyControlKeywordsFromSqlTextRequest &request);

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
      Models::GetSqlConcurrencyControlRulesHistoryResponse getSqlConcurrencyControlRulesHistoryWithOptions(const Models::GetSqlConcurrencyControlRulesHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetSqlConcurrencyControlRulesHistoryResponse getSqlConcurrencyControlRulesHistory(const Models::GetSqlConcurrencyControlRulesHistoryRequest &request);

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
      Models::GetSqlOptimizeAdviceResponse getSqlOptimizeAdviceWithOptions(const Models::GetSqlOptimizeAdviceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetSqlOptimizeAdviceResponse getSqlOptimizeAdvice(const Models::GetSqlOptimizeAdviceRequest &request);

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
      Models::GetStorageAnalysisResultResponse getStorageAnalysisResultWithOptions(const Models::GetStorageAnalysisResultRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetStorageAnalysisResultResponse getStorageAnalysisResult(const Models::GetStorageAnalysisResultRequest &request);

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
      Models::KillInstanceAllSessionResponse killInstanceAllSessionWithOptions(const Models::KillInstanceAllSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::KillInstanceAllSessionResponse killInstanceAllSession(const Models::KillInstanceAllSessionRequest &request);

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
      Models::ModifyAutoScalingConfigResponse modifyAutoScalingConfigWithOptions(const Models::ModifyAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyAutoScalingConfigResponse modifyAutoScalingConfig(const Models::ModifyAutoScalingConfigRequest &request);

      /**
       * @summary 修改用户跨产品白名单模板
       *
       * @param request ModifySecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIPGroupResponse
       */
      Models::ModifySecurityIPGroupResponse modifySecurityIPGroupWithOptions(const Models::ModifySecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改用户跨产品白名单模板
       *
       * @param request ModifySecurityIPGroupRequest
       * @return ModifySecurityIPGroupResponse
       */
      Models::ModifySecurityIPGroupResponse modifySecurityIPGroup(const Models::ModifySecurityIPGroupRequest &request);

      /**
       * @summary 绑定/解绑用户跨产品白名单模板
       *
       * @param request ModifySecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIPGroupRelationResponse
       */
      Models::ModifySecurityIPGroupRelationResponse modifySecurityIPGroupRelationWithOptions(const Models::ModifySecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定/解绑用户跨产品白名单模板
       *
       * @param request ModifySecurityIPGroupRelationRequest
       * @return ModifySecurityIPGroupRelationResponse
       */
      Models::ModifySecurityIPGroupRelationResponse modifySecurityIPGroupRelation(const Models::ModifySecurityIPGroupRelationRequest &request);

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
      Models::ModifySqlLogConfigResponse modifySqlLogConfigWithOptions(const Models::ModifySqlLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifySqlLogConfigResponse modifySqlLogConfig(const Models::ModifySqlLogConfigRequest &request);

      /**
       * @summary Runs a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
       *
       * @param request RunCloudBenchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCloudBenchTaskResponse
       */
      Models::RunCloudBenchTaskResponse runCloudBenchTaskWithOptions(const Models::RunCloudBenchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a stress testing task.
       *
       * @description Database Autonomy Service (DAS) provides the intelligent stress testing feature. This feature helps you check whether your instance needs to be scaled up to effectively handle traffic spikes. For more information, see [Intelligent stress testing](https://help.aliyun.com/document_detail/155068.html).
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
      Models::UpdateAutoResourceOptimizeRulesAsyncResponse updateAutoResourceOptimizeRulesAsyncWithOptions(const Models::UpdateAutoResourceOptimizeRulesAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateAutoResourceOptimizeRulesAsyncResponse updateAutoResourceOptimizeRulesAsync(const Models::UpdateAutoResourceOptimizeRulesAsyncRequest &request);

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
      Models::UpdateAutoSqlOptimizeStatusResponse updateAutoSqlOptimizeStatusWithOptions(const Models::UpdateAutoSqlOptimizeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateAutoSqlOptimizeStatusResponse updateAutoSqlOptimizeStatus(const Models::UpdateAutoSqlOptimizeStatusRequest &request);

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
      Models::UpdateAutoThrottleRulesAsyncResponse updateAutoThrottleRulesAsyncWithOptions(const Models::UpdateAutoThrottleRulesAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateAutoThrottleRulesAsyncResponse updateAutoThrottleRulesAsync(const Models::UpdateAutoThrottleRulesAsyncRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
