// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DBS20190306_HPP_
#define ALIBABACLOUD_DBS20190306_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dbs20190306Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dbs20190306.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Configures a Database Backup (DBS) backup plan.
       *
       * @param request ConfigureBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureBackupPlanResponse
       */
      Models::ConfigureBackupPlanResponse configureBackupPlanWithOptions(const Models::ConfigureBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a Database Backup (DBS) backup plan.
       *
       * @param request ConfigureBackupPlanRequest
       * @return ConfigureBackupPlanResponse
       */
      Models::ConfigureBackupPlanResponse configureBackupPlan(const Models::ConfigureBackupPlanRequest &request);

      /**
       * @summary Creates, configures, and starts a backup plan.
       *
       * @description Before you call this operation, ensure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/70005.html) of Database Backup (DBS).
       *
       * @param request CreateAndStartBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndStartBackupPlanResponse
       */
      Models::CreateAndStartBackupPlanResponse createAndStartBackupPlanWithOptions(const Models::CreateAndStartBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates, configures, and starts a backup plan.
       *
       * @description Before you call this operation, ensure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/70005.html) of Database Backup (DBS).
       *
       * @param request CreateAndStartBackupPlanRequest
       * @return CreateAndStartBackupPlanResponse
       */
      Models::CreateAndStartBackupPlanResponse createAndStartBackupPlan(const Models::CreateAndStartBackupPlanRequest &request);

      /**
       * @summary Creates a Database Backup Service (DBS) backup plan.
       *
       * @description To perform this operation in the console, see [Purchase a backup plan](https://help.aliyun.com/document_detail/65909.html).
       *
       * @param request CreateBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPlanResponse
       */
      Models::CreateBackupPlanResponse createBackupPlanWithOptions(const Models::CreateBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Database Backup Service (DBS) backup plan.
       *
       * @description To perform this operation in the console, see [Purchase a backup plan](https://help.aliyun.com/document_detail/65909.html).
       *
       * @param request CreateBackupPlanRequest
       * @return CreateBackupPlanResponse
       */
      Models::CreateBackupPlanResponse createBackupPlan(const Models::CreateBackupPlanRequest &request);

      /**
       * @summary This operation creates a task to download a full backup set.
       *
       * @param request CreateFullBackupSetDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFullBackupSetDownloadResponse
       */
      Models::CreateFullBackupSetDownloadResponse createFullBackupSetDownloadWithOptions(const Models::CreateFullBackupSetDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation creates a task to download a full backup set.
       *
       * @param request CreateFullBackupSetDownloadRequest
       * @return CreateFullBackupSetDownloadResponse
       */
      Models::CreateFullBackupSetDownloadResponse createFullBackupSetDownload(const Models::CreateFullBackupSetDownloadRequest &request);

      /**
       * @summary Creates a task to retrieve the database list through a backup gateway.
       *
       * @description This API operation returns a TaskId. You can call the [GetDBListFromAgent](https://help.aliyun.com/document_detail/2869852.html) operation to query the result.
       *
       * @param request CreateGetDBListFromAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGetDBListFromAgentTaskResponse
       */
      Models::CreateGetDBListFromAgentTaskResponse createGetDBListFromAgentTaskWithOptions(const Models::CreateGetDBListFromAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to retrieve the database list through a backup gateway.
       *
       * @description This API operation returns a TaskId. You can call the [GetDBListFromAgent](https://help.aliyun.com/document_detail/2869852.html) operation to query the result.
       *
       * @param request CreateGetDBListFromAgentTaskRequest
       * @return CreateGetDBListFromAgentTaskResponse
       */
      Models::CreateGetDBListFromAgentTaskResponse createGetDBListFromAgentTask(const Models::CreateGetDBListFromAgentTaskRequest &request);

      /**
       * @summary Creates and starts an incremental backup set download task.
       *
       * @param request CreateIncrementBackupSetDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIncrementBackupSetDownloadResponse
       */
      Models::CreateIncrementBackupSetDownloadResponse createIncrementBackupSetDownloadWithOptions(const Models::CreateIncrementBackupSetDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and starts an incremental backup set download task.
       *
       * @param request CreateIncrementBackupSetDownloadRequest
       * @return CreateIncrementBackupSetDownloadResponse
       */
      Models::CreateIncrementBackupSetDownloadResponse createIncrementBackupSetDownload(const Models::CreateIncrementBackupSetDownloadRequest &request);

      /**
       * @summary Creates a Database Backup (DBS) restore task.
       *
       * @description ### Related operations
       * - [Restore a database](https://help.aliyun.com/document_detail/85543.html)
       * - [Restore configuration tutorials for various databases](https://help.aliyun.com/document_detail/197144.html)
       *
       * @param request CreateRestoreTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRestoreTaskResponse
       */
      Models::CreateRestoreTaskResponse createRestoreTaskWithOptions(const Models::CreateRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Database Backup (DBS) restore task.
       *
       * @description ### Related operations
       * - [Restore a database](https://help.aliyun.com/document_detail/85543.html)
       * - [Restore configuration tutorials for various databases](https://help.aliyun.com/document_detail/197144.html)
       *
       * @param request CreateRestoreTaskRequest
       * @return CreateRestoreTaskResponse
       */
      Models::CreateRestoreTaskResponse createRestoreTask(const Models::CreateRestoreTaskRequest &request);

      /**
       * @summary Queries a list of backup gateways in Database Backup Service (DBS).
       *
       * @param request DescribeBackupGatewayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupGatewayListResponse
       */
      Models::DescribeBackupGatewayListResponse describeBackupGatewayListWithOptions(const Models::DescribeBackupGatewayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of backup gateways in Database Backup Service (DBS).
       *
       * @param request DescribeBackupGatewayListRequest
       * @return DescribeBackupGatewayListResponse
       */
      Models::DescribeBackupGatewayListResponse describeBackupGatewayList(const Models::DescribeBackupGatewayListRequest &request);

      /**
       * @summary This operation queries the billing information of a backup plan.
       *
       * @param request DescribeBackupPlanBillingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPlanBillingResponse
       */
      Models::DescribeBackupPlanBillingResponse describeBackupPlanBillingWithOptions(const Models::DescribeBackupPlanBillingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries the billing information of a backup plan.
       *
       * @param request DescribeBackupPlanBillingRequest
       * @return DescribeBackupPlanBillingResponse
       */
      Models::DescribeBackupPlanBillingResponse describeBackupPlanBilling(const Models::DescribeBackupPlanBillingRequest &request);

      /**
       * @summary Queries a DBS backup plan.
       *
       * @description Ensure Object Storage Service (OSS) is enabled before you use this operation. For more information, see [Object Storage Service](https://help.aliyun.com/document_detail/31817.html).
       *
       * @param request DescribeBackupPlanListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPlanListResponse
       */
      Models::DescribeBackupPlanListResponse describeBackupPlanListWithOptions(const Models::DescribeBackupPlanListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a DBS backup plan.
       *
       * @description Ensure Object Storage Service (OSS) is enabled before you use this operation. For more information, see [Object Storage Service](https://help.aliyun.com/document_detail/31817.html).
       *
       * @param request DescribeBackupPlanListRequest
       * @return DescribeBackupPlanListResponse
       */
      Models::DescribeBackupPlanListResponse describeBackupPlanList(const Models::DescribeBackupPlanListRequest &request);

      /**
       * @summary Queries the download list of DBS backup sets.
       *
       * @param request DescribeBackupSetDownloadTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupSetDownloadTaskListResponse
       */
      Models::DescribeBackupSetDownloadTaskListResponse describeBackupSetDownloadTaskListWithOptions(const Models::DescribeBackupSetDownloadTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download list of DBS backup sets.
       *
       * @param request DescribeBackupSetDownloadTaskListRequest
       * @return DescribeBackupSetDownloadTaskListResponse
       */
      Models::DescribeBackupSetDownloadTaskListResponse describeBackupSetDownloadTaskList(const Models::DescribeBackupSetDownloadTaskListRequest &request);

      /**
       * @summary Queries the Data Lake Analytics (DLA) service information for a backup plan.
       *
       * @param request DescribeDLAServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDLAServiceResponse
       */
      Models::DescribeDLAServiceResponse describeDLAServiceWithOptions(const Models::DescribeDLAServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Data Lake Analytics (DLA) service information for a backup plan.
       *
       * @param request DescribeDLAServiceRequest
       * @return DescribeDLAServiceResponse
       */
      Models::DescribeDLAServiceResponse describeDLAService(const Models::DescribeDLAServiceRequest &request);

      /**
       * @summary Queries the list of full backup tasks in Database Backup (DBS).
       *
       * @param request DescribeFullBackupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFullBackupListResponse
       */
      Models::DescribeFullBackupListResponse describeFullBackupListWithOptions(const Models::DescribeFullBackupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of full backup tasks in Database Backup (DBS).
       *
       * @param request DescribeFullBackupListRequest
       * @return DescribeFullBackupListResponse
       */
      Models::DescribeFullBackupListResponse describeFullBackupList(const Models::DescribeFullBackupListRequest &request);

      /**
       * @summary This operation queries the list of incremental backup tasks for DBS.
       *
       * @param request DescribeIncrementBackupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIncrementBackupListResponse
       */
      Models::DescribeIncrementBackupListResponse describeIncrementBackupListWithOptions(const Models::DescribeIncrementBackupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries the list of incremental backup tasks for DBS.
       *
       * @param request DescribeIncrementBackupListRequest
       * @return DescribeIncrementBackupListResponse
       */
      Models::DescribeIncrementBackupListResponse describeIncrementBackupList(const Models::DescribeIncrementBackupListRequest &request);

      /**
       * @summary Queries error code information for a Database Backup (DBS) job.
       *
       * @param request DescribeJobErrorCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobErrorCodeResponse
       */
      Models::DescribeJobErrorCodeResponse describeJobErrorCodeWithOptions(const Models::DescribeJobErrorCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries error code information for a Database Backup (DBS) job.
       *
       * @param request DescribeJobErrorCodeRequest
       * @return DescribeJobErrorCodeResponse
       */
      Models::DescribeJobErrorCodeResponse describeJobErrorCode(const Models::DescribeJobErrorCodeRequest &request);

      /**
       * @summary Queries the CIDR blocks of nodes on which Database Backup (DBS) is running.
       *
       * @param request DescribeNodeCidrListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeCidrListResponse
       */
      Models::DescribeNodeCidrListResponse describeNodeCidrListWithOptions(const Models::DescribeNodeCidrListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CIDR blocks of nodes on which Database Backup (DBS) is running.
       *
       * @param request DescribeNodeCidrListRequest
       * @return DescribeNodeCidrListResponse
       */
      Models::DescribeNodeCidrListResponse describeNodeCidrList(const Models::DescribeNodeCidrListRequest &request);

      /**
       * @summary Queries the precheck progress of backup plans and restore tasks.
       *
       * @param request DescribePreCheckProgressListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckProgressListResponse
       */
      Models::DescribePreCheckProgressListResponse describePreCheckProgressListWithOptions(const Models::DescribePreCheckProgressListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precheck progress of backup plans and restore tasks.
       *
       * @param request DescribePreCheckProgressListRequest
       * @return DescribePreCheckProgressListResponse
       */
      Models::DescribePreCheckProgressListResponse describePreCheckProgressList(const Models::DescribePreCheckProgressListRequest &request);

      /**
       * @summary Queries the regions where DBS is available.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where DBS is available.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the details of the recoverable time ranges for a backup plan.
       *
       * @param request DescribeRestoreRangeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreRangeInfoResponse
       */
      Models::DescribeRestoreRangeInfoResponse describeRestoreRangeInfoWithOptions(const Models::DescribeRestoreRangeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the recoverable time ranges for a backup plan.
       *
       * @param request DescribeRestoreRangeInfoRequest
       * @return DescribeRestoreRangeInfoResponse
       */
      Models::DescribeRestoreRangeInfoResponse describeRestoreRangeInfo(const Models::DescribeRestoreRangeInfoRequest &request);

      /**
       * @summary Queries restore jobs in Database Backup Service (DBS).
       *
       * @param request DescribeRestoreTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreTaskListResponse
       */
      Models::DescribeRestoreTaskListResponse describeRestoreTaskListWithOptions(const Models::DescribeRestoreTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries restore jobs in Database Backup Service (DBS).
       *
       * @param request DescribeRestoreTaskListRequest
       * @return DescribeRestoreTaskListResponse
       */
      Models::DescribeRestoreTaskListResponse describeRestoreTaskList(const Models::DescribeRestoreTaskListRequest &request);

      /**
       * @summary Disable incremental backup for a backup plan.
       *
       * @description ## Impact
       * Calling this operation stops the specified backup plan from creating new incremental backups.
       *
       * @param request DisableBackupLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableBackupLogResponse
       */
      Models::DisableBackupLogResponse disableBackupLogWithOptions(const Models::DisableBackupLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disable incremental backup for a backup plan.
       *
       * @description ## Impact
       * Calling this operation stops the specified backup plan from creating new incremental backups.
       *
       * @param request DisableBackupLogRequest
       * @return DisableBackupLogResponse
       */
      Models::DisableBackupLogResponse disableBackupLog(const Models::DisableBackupLogRequest &request);

      /**
       * @summary Enable incremental backup for a backup schedule.
       *
       * @description ## Impact
       * Enabling log backup does not incur direct charges. However, log backups generate backup traffic and storage usage. These resources are billed at the same rate as full backups. You can use the free quota from your backup plan or storage plan to offset these charges.
       *
       * @param request EnableBackupLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableBackupLogResponse
       */
      Models::EnableBackupLogResponse enableBackupLogWithOptions(const Models::EnableBackupLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable incremental backup for a backup schedule.
       *
       * @description ## Impact
       * Enabling log backup does not incur direct charges. However, log backups generate backup traffic and storage usage. These resources are billed at the same rate as full backups. You can use the free quota from your backup plan or storage plan to offset these charges.
       *
       * @param request EnableBackupLogRequest
       * @return EnableBackupLogResponse
       */
      Models::EnableBackupLogResponse enableBackupLog(const Models::EnableBackupLogRequest &request);

      /**
       * @summary Retrieves the database and table data of physical backups through a backup gateway.
       *
       * @description You must call the [CreateGetDBListFromAgentTask](https://help.aliyun.com/document_detail/2869847.html) operation to create an asynchronous task and obtain the TaskId (asynchronous task ID). Pass the TaskId to the GetDBListFromAgent operation to retrieve the database and table data of physical backups.
       *
       * @param request GetDBListFromAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDBListFromAgentResponse
       */
      Models::GetDBListFromAgentResponse getDBListFromAgentWithOptions(const Models::GetDBListFromAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the database and table data of physical backups through a backup gateway.
       *
       * @description You must call the [CreateGetDBListFromAgentTask](https://help.aliyun.com/document_detail/2869847.html) operation to create an asynchronous task and obtain the TaskId (asynchronous task ID). Pass the TaskId to the GetDBListFromAgent operation to retrieve the database and table data of physical backups.
       *
       * @param request GetDBListFromAgentRequest
       * @return GetDBListFromAgentResponse
       */
      Models::GetDBListFromAgentResponse getDBListFromAgent(const Models::GetDBListFromAgentRequest &request);

      /**
       * @summary Grants the service-linked role (AliyunServiceRoleForDBS) to Database Backup (DBS).
       *
       * @description DBS uses the service-linked role (AliyunServiceRoleForDBS) to obtain the required access permissions to connect to ApsaraDB databases, such as RDS, MongoDB, Redis, and PolarDB, or self-managed databases on ECS instances. For more information, see [Activate the Database Backup service](https://help.aliyun.com/document_detail/162603.html).
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeDbsServiceLinkedRoleResponse
       */
      Models::InitializeDbsServiceLinkedRoleResponse initializeDbsServiceLinkedRoleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants the service-linked role (AliyunServiceRoleForDBS) to Database Backup (DBS).
       *
       * @description DBS uses the service-linked role (AliyunServiceRoleForDBS) to obtain the required access permissions to connect to ApsaraDB databases, such as RDS, MongoDB, Redis, and PolarDB, or self-managed databases on ECS instances. For more information, see [Activate the Database Backup service](https://help.aliyun.com/document_detail/162603.html).
       *
       * @return InitializeDbsServiceLinkedRoleResponse
       */
      Models::InitializeDbsServiceLinkedRoleResponse initializeDbsServiceLinkedRole();

      /**
       * @summary Modifies the objects included in a Database Backup Service (DBS) backup plan.
       *
       * @param request ModifyBackupObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupObjectsResponse
       */
      Models::ModifyBackupObjectsResponse modifyBackupObjectsWithOptions(const Models::ModifyBackupObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the objects included in a Database Backup Service (DBS) backup plan.
       *
       * @param request ModifyBackupObjectsRequest
       * @return ModifyBackupObjectsResponse
       */
      Models::ModifyBackupObjectsResponse modifyBackupObjects(const Models::ModifyBackupObjectsRequest &request);

      /**
       * @summary Modifies the name of a backup plan.
       *
       * @param request ModifyBackupPlanNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPlanNameResponse
       */
      Models::ModifyBackupPlanNameResponse modifyBackupPlanNameWithOptions(const Models::ModifyBackupPlanNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a backup plan.
       *
       * @param request ModifyBackupPlanNameRequest
       * @return ModifyBackupPlanNameResponse
       */
      Models::ModifyBackupPlanNameResponse modifyBackupPlanName(const Models::ModifyBackupPlanNameRequest &request);

      /**
       * @summary Enables, modifies, or disables the automatic download feature.
       *
       * @description Before calling this operation, verify whether the backup data is stored in the built-in OSS of DBS. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to check the value of BackupStorageType.
       *
       * @param request ModifyBackupSetDownloadRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupSetDownloadRulesResponse
       */
      Models::ModifyBackupSetDownloadRulesResponse modifyBackupSetDownloadRulesWithOptions(const Models::ModifyBackupSetDownloadRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables, modifies, or disables the automatic download feature.
       *
       * @description Before calling this operation, verify whether the backup data is stored in the built-in OSS of DBS. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to check the value of BackupStorageType.
       *
       * @param request ModifyBackupSetDownloadRulesRequest
       * @return ModifyBackupSetDownloadRulesResponse
       */
      Models::ModifyBackupSetDownloadRulesResponse modifyBackupSetDownloadRules(const Models::ModifyBackupSetDownloadRulesRequest &request);

      /**
       * @summary Modify a DBS backup source endpoint.
       *
       * @param request ModifyBackupSourceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupSourceEndpointResponse
       */
      Models::ModifyBackupSourceEndpointResponse modifyBackupSourceEndpointWithOptions(const Models::ModifyBackupSourceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a DBS backup source endpoint.
       *
       * @param request ModifyBackupSourceEndpointRequest
       * @return ModifyBackupSourceEndpointResponse
       */
      Models::ModifyBackupSourceEndpointResponse modifyBackupSourceEndpoint(const Models::ModifyBackupSourceEndpointRequest &request);

      /**
       * @summary Modifies the backup time of a backup plan.
       *
       * @param request ModifyBackupStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupStrategyResponse
       */
      Models::ModifyBackupStrategyResponse modifyBackupStrategyWithOptions(const Models::ModifyBackupStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup time of a backup plan.
       *
       * @param request ModifyBackupStrategyRequest
       * @return ModifyBackupStrategyResponse
       */
      Models::ModifyBackupStrategyResponse modifyBackupStrategy(const Models::ModifyBackupStrategyRequest &request);

      /**
       * @summary Modifies the lifecycle of stored data in a backup plan.
       *
       * @param request ModifyStorageStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStorageStrategyResponse
       */
      Models::ModifyStorageStrategyResponse modifyStorageStrategyWithOptions(const Models::ModifyStorageStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the lifecycle of stored data in a backup plan.
       *
       * @param request ModifyStorageStrategyRequest
       * @return ModifyStorageStrategyResponse
       */
      Models::ModifyStorageStrategyResponse modifyStorageStrategy(const Models::ModifyStorageStrategyRequest &request);

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
      Models::ReleaseBackupPlanResponse releaseBackupPlanWithOptions(const Models::ReleaseBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation releases a pay-as-you-go backup plan.
       *
       * @description ## Impact
       * After you release a backup plan, the service for the backup instance is stopped and you are no longer charged for the instance.
       *
       * @param request ReleaseBackupPlanRequest
       * @return ReleaseBackupPlanResponse
       */
      Models::ReleaseBackupPlanResponse releaseBackupPlan(const Models::ReleaseBackupPlanRequest &request);

      /**
       * @summary Renews a backup schedule.
       *
       * @param request RenewBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewBackupPlanResponse
       */
      Models::RenewBackupPlanResponse renewBackupPlanWithOptions(const Models::RenewBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a backup schedule.
       *
       * @param request RenewBackupPlanRequest
       * @return RenewBackupPlanResponse
       */
      Models::RenewBackupPlanResponse renewBackupPlan(const Models::RenewBackupPlanRequest &request);

      /**
       * @summary This operation starts a DBS backup plan.
       *
       * @param request StartBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBackupPlanResponse
       */
      Models::StartBackupPlanResponse startBackupPlanWithOptions(const Models::StartBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation starts a DBS backup plan.
       *
       * @param request StartBackupPlanRequest
       * @return StartBackupPlanResponse
       */
      Models::StartBackupPlanResponse startBackupPlan(const Models::StartBackupPlanRequest &request);

      /**
       * @summary Starts a DBS restore job.
       *
       * @param request StartRestoreTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRestoreTaskResponse
       */
      Models::StartRestoreTaskResponse startRestoreTaskWithOptions(const Models::StartRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a DBS restore job.
       *
       * @param request StartRestoreTaskRequest
       * @return StartRestoreTaskResponse
       */
      Models::StartRestoreTaskResponse startRestoreTask(const Models::StartRestoreTaskRequest &request);

      /**
       * @summary This operation pauses a DBS backup plan.
       *
       * @param request StopBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopBackupPlanResponse
       */
      Models::StopBackupPlanResponse stopBackupPlanWithOptions(const Models::StopBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation pauses a DBS backup plan.
       *
       * @param request StopBackupPlanRequest
       * @return StopBackupPlanResponse
       */
      Models::StopBackupPlanResponse stopBackupPlan(const Models::StopBackupPlanRequest &request);

      /**
       * @summary Upgrades a backup schedule.
       *
       * @param request UpgradeBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeBackupPlanResponse
       */
      Models::UpgradeBackupPlanResponse upgradeBackupPlanWithOptions(const Models::UpgradeBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a backup schedule.
       *
       * @param request UpgradeBackupPlanRequest
       * @return UpgradeBackupPlanResponse
       */
      Models::UpgradeBackupPlanResponse upgradeBackupPlan(const Models::UpgradeBackupPlanRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
