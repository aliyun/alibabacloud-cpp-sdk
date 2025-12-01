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
       * @summary Configures a DBS backup schedule.
       *
       * @param request ConfigureBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureBackupPlanResponse
       */
      Models::ConfigureBackupPlanResponse configureBackupPlanWithOptions(const Models::ConfigureBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a DBS backup schedule.
       *
       * @param request ConfigureBackupPlanRequest
       * @return ConfigureBackupPlanResponse
       */
      Models::ConfigureBackupPlanResponse configureBackupPlan(const Models::ConfigureBackupPlanRequest &request);

      /**
       * @summary Creates, configures, and starts a backup schedule.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/70005.html) of Database Backup (DBS).
       *
       * @param request CreateAndStartBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndStartBackupPlanResponse
       */
      Models::CreateAndStartBackupPlanResponse createAndStartBackupPlanWithOptions(const Models::CreateAndStartBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates, configures, and starts a backup schedule.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/70005.html) of Database Backup (DBS).
       *
       * @param request CreateAndStartBackupPlanRequest
       * @return CreateAndStartBackupPlanResponse
       */
      Models::CreateAndStartBackupPlanResponse createAndStartBackupPlan(const Models::CreateAndStartBackupPlanRequest &request);

      /**
       * @summary Creates a backup schedule.
       *
       * @description For more information about how to create a backup schedule in the Database Backup (DBS) console, see [Purchase a backup schedule](https://help.aliyun.com/document_detail/65909.html).
       *
       * @param request CreateBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPlanResponse
       */
      Models::CreateBackupPlanResponse createBackupPlanWithOptions(const Models::CreateBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup schedule.
       *
       * @description For more information about how to create a backup schedule in the Database Backup (DBS) console, see [Purchase a backup schedule](https://help.aliyun.com/document_detail/65909.html).
       *
       * @param request CreateBackupPlanRequest
       * @return CreateBackupPlanResponse
       */
      Models::CreateBackupPlanResponse createBackupPlan(const Models::CreateBackupPlanRequest &request);

      /**
       * @summary Creates and starts a full backup set download task.
       *
       * @param request CreateFullBackupSetDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFullBackupSetDownloadResponse
       */
      Models::CreateFullBackupSetDownloadResponse createFullBackupSetDownloadWithOptions(const Models::CreateFullBackupSetDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and starts a full backup set download task.
       *
       * @param request CreateFullBackupSetDownloadRequest
       * @return CreateFullBackupSetDownloadResponse
       */
      Models::CreateFullBackupSetDownloadResponse createFullBackupSetDownload(const Models::CreateFullBackupSetDownloadRequest &request);

      /**
       * @summary Creates a task to obtain a database list by using a backup gateway.
       *
       * @description This API operation returns a task ID. You can call the [GetDBListFromAgent](https://help.aliyun.com/document_detail/2869852.html) operation to query the task result based on the task ID.
       *
       * @param request CreateGetDBListFromAgentTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGetDBListFromAgentTaskResponse
       */
      Models::CreateGetDBListFromAgentTaskResponse createGetDBListFromAgentTaskWithOptions(const Models::CreateGetDBListFromAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to obtain a database list by using a backup gateway.
       *
       * @description This API operation returns a task ID. You can call the [GetDBListFromAgent](https://help.aliyun.com/document_detail/2869852.html) operation to query the task result based on the task ID.
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
       * @summary Creates a restoration task.
       *
       * @param request CreateRestoreTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRestoreTaskResponse
       */
      Models::CreateRestoreTaskResponse createRestoreTaskWithOptions(const Models::CreateRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a restoration task.
       *
       * @param request CreateRestoreTaskRequest
       * @return CreateRestoreTaskResponse
       */
      Models::CreateRestoreTaskResponse createRestoreTask(const Models::CreateRestoreTaskRequest &request);

      /**
       * @summary Queries backup gateways.
       *
       * @param request DescribeBackupGatewayListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupGatewayListResponse
       */
      Models::DescribeBackupGatewayListResponse describeBackupGatewayListWithOptions(const Models::DescribeBackupGatewayListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backup gateways.
       *
       * @param request DescribeBackupGatewayListRequest
       * @return DescribeBackupGatewayListResponse
       */
      Models::DescribeBackupGatewayListResponse describeBackupGatewayList(const Models::DescribeBackupGatewayListRequest &request);

      /**
       * @summary Queries the billing information of a backup schedule.
       *
       * @param request DescribeBackupPlanBillingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPlanBillingResponse
       */
      Models::DescribeBackupPlanBillingResponse describeBackupPlanBillingWithOptions(const Models::DescribeBackupPlanBillingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing information of a backup schedule.
       *
       * @param request DescribeBackupPlanBillingRequest
       * @return DescribeBackupPlanBillingResponse
       */
      Models::DescribeBackupPlanBillingResponse describeBackupPlanBilling(const Models::DescribeBackupPlanBillingRequest &request);

      /**
       * @summary Query the list of backup plans
       *
       * @description Before using this interface, please activate the OSS service in advance. For more information, see [Object Storage Service (OSS)](https://help.aliyun.com/document_detail/31817.html).
       *
       * @param request DescribeBackupPlanListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPlanListResponse
       */
      Models::DescribeBackupPlanListResponse describeBackupPlanListWithOptions(const Models::DescribeBackupPlanListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of backup plans
       *
       * @description Before using this interface, please activate the OSS service in advance. For more information, see [Object Storage Service (OSS)](https://help.aliyun.com/document_detail/31817.html).
       *
       * @param request DescribeBackupPlanListRequest
       * @return DescribeBackupPlanListResponse
       */
      Models::DescribeBackupPlanListResponse describeBackupPlanList(const Models::DescribeBackupPlanListRequest &request);

      /**
       * @summary Queries backup set download tasks.
       *
       * @param request DescribeBackupSetDownloadTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupSetDownloadTaskListResponse
       */
      Models::DescribeBackupSetDownloadTaskListResponse describeBackupSetDownloadTaskListWithOptions(const Models::DescribeBackupSetDownloadTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backup set download tasks.
       *
       * @param request DescribeBackupSetDownloadTaskListRequest
       * @return DescribeBackupSetDownloadTaskListResponse
       */
      Models::DescribeBackupSetDownloadTaskListResponse describeBackupSetDownloadTaskList(const Models::DescribeBackupSetDownloadTaskListRequest &request);

      /**
       * @summary Queries the status of the Data Lake Analytics (DLA) service for a backup schedule.
       *
       * @param request DescribeDLAServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDLAServiceResponse
       */
      Models::DescribeDLAServiceResponse describeDLAServiceWithOptions(const Models::DescribeDLAServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Data Lake Analytics (DLA) service for a backup schedule.
       *
       * @param request DescribeDLAServiceRequest
       * @return DescribeDLAServiceResponse
       */
      Models::DescribeDLAServiceResponse describeDLAService(const Models::DescribeDLAServiceRequest &request);

      /**
       * @summary cn-hangzhou
       *
       * @param request DescribeFullBackupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFullBackupListResponse
       */
      Models::DescribeFullBackupListResponse describeFullBackupListWithOptions(const Models::DescribeFullBackupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary cn-hangzhou
       *
       * @param request DescribeFullBackupListRequest
       * @return DescribeFullBackupListResponse
       */
      Models::DescribeFullBackupListResponse describeFullBackupList(const Models::DescribeFullBackupListRequest &request);

      /**
       * @summary Queries incremental backup tasks.
       *
       * @param request DescribeIncrementBackupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIncrementBackupListResponse
       */
      Models::DescribeIncrementBackupListResponse describeIncrementBackupListWithOptions(const Models::DescribeIncrementBackupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries incremental backup tasks.
       *
       * @param request DescribeIncrementBackupListRequest
       * @return DescribeIncrementBackupListResponse
       */
      Models::DescribeIncrementBackupListResponse describeIncrementBackupList(const Models::DescribeIncrementBackupListRequest &request);

      /**
       * @summary Queries the error information of a Database Backup (DBS) task.
       *
       * @param request DescribeJobErrorCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobErrorCodeResponse
       */
      Models::DescribeJobErrorCodeResponse describeJobErrorCodeWithOptions(const Models::DescribeJobErrorCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the error information of a Database Backup (DBS) task.
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
       * @summary Queries the precheck progress of a backup schedule or a restore task.
       *
       * @param request DescribePreCheckProgressListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckProgressListResponse
       */
      Models::DescribePreCheckProgressListResponse describePreCheckProgressListWithOptions(const Models::DescribePreCheckProgressListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precheck progress of a backup schedule or a restore task.
       *
       * @param request DescribePreCheckProgressListRequest
       * @return DescribePreCheckProgressListResponse
       */
      Models::DescribePreCheckProgressListResponse describePreCheckProgressList(const Models::DescribePreCheckProgressListRequest &request);

      /**
       * @summary Queries the regions that Database Backup (DBS) supports.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that Database Backup (DBS) supports.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the range of time to which you can restore data in a backup schedule.
       *
       * @param request DescribeRestoreRangeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreRangeInfoResponse
       */
      Models::DescribeRestoreRangeInfoResponse describeRestoreRangeInfoWithOptions(const Models::DescribeRestoreRangeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the range of time to which you can restore data in a backup schedule.
       *
       * @param request DescribeRestoreRangeInfoRequest
       * @return DescribeRestoreRangeInfoResponse
       */
      Models::DescribeRestoreRangeInfoResponse describeRestoreRangeInfo(const Models::DescribeRestoreRangeInfoRequest &request);

      /**
       * @summary Queries restore tasks.
       *
       * @param request DescribeRestoreTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreTaskListResponse
       */
      Models::DescribeRestoreTaskListResponse describeRestoreTaskListWithOptions(const Models::DescribeRestoreTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries restore tasks.
       *
       * @param request DescribeRestoreTaskListRequest
       * @return DescribeRestoreTaskListResponse
       */
      Models::DescribeRestoreTaskListResponse describeRestoreTaskList(const Models::DescribeRestoreTaskListRequest &request);

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
      Models::DisableBackupLogResponse disableBackupLogWithOptions(const Models::DisableBackupLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables incremental backup for a backup schedule.
       *
       * @description ### Impact
       * After you disable the incremental log backup feature, your backup schedule no longer performs incremental log backups.
       *
       * @param request DisableBackupLogRequest
       * @return DisableBackupLogResponse
       */
      Models::DisableBackupLogResponse disableBackupLog(const Models::DisableBackupLogRequest &request);

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
      Models::EnableBackupLogResponse enableBackupLogWithOptions(const Models::EnableBackupLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables incremental backup for a backup schedule.
       *
       * @description ## Impact
       * It is free to enable the incremental log backup feature. However, the backup traffic and storage capacity generated by the feature are billed in the same way as the full backup feature, and can be offset by the free quota of backup schedules or storage plans.
       *
       * @param request EnableBackupLogRequest
       * @return EnableBackupLogResponse
       */
      Models::EnableBackupLogResponse enableBackupLog(const Models::EnableBackupLogRequest &request);

      /**
       * @summary Queries the result of a task that is used to query a database list by using a backup gateway based on the ID of the task.
       *
       * @param request GetDBListFromAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDBListFromAgentResponse
       */
      Models::GetDBListFromAgentResponse getDBListFromAgentWithOptions(const Models::GetDBListFromAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of a task that is used to query a database list by using a backup gateway based on the ID of the task.
       *
       * @param request GetDBListFromAgentRequest
       * @return GetDBListFromAgentResponse
       */
      Models::GetDBListFromAgentResponse getDBListFromAgent(const Models::GetDBListFromAgentRequest &request);

      /**
       * @summary Grants the AliyunServiceRoleForDBS role to Database Backup (DBS).
       *
       * @param request InitializeDbsServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeDbsServiceLinkedRoleResponse
       */
      Models::InitializeDbsServiceLinkedRoleResponse initializeDbsServiceLinkedRoleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants the AliyunServiceRoleForDBS role to Database Backup (DBS).
       *
       * @return InitializeDbsServiceLinkedRoleResponse
       */
      Models::InitializeDbsServiceLinkedRoleResponse initializeDbsServiceLinkedRole();

      /**
       * @summary Modifies backup objects of a backup schedule in Database Backup (DBS).
       *
       * @param request ModifyBackupObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupObjectsResponse
       */
      Models::ModifyBackupObjectsResponse modifyBackupObjectsWithOptions(const Models::ModifyBackupObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies backup objects of a backup schedule in Database Backup (DBS).
       *
       * @param request ModifyBackupObjectsRequest
       * @return ModifyBackupObjectsResponse
       */
      Models::ModifyBackupObjectsResponse modifyBackupObjects(const Models::ModifyBackupObjectsRequest &request);

      /**
       * @summary Changes the name of a backup schedule.
       *
       * @param request ModifyBackupPlanNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPlanNameResponse
       */
      Models::ModifyBackupPlanNameResponse modifyBackupPlanNameWithOptions(const Models::ModifyBackupPlanNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a backup schedule.
       *
       * @param request ModifyBackupPlanNameRequest
       * @return ModifyBackupPlanNameResponse
       */
      Models::ModifyBackupPlanNameResponse modifyBackupPlanName(const Models::ModifyBackupPlanNameRequest &request);

      /**
       * @summary Enables, configures, or disables the automatic download feature.
       *
       * @param request ModifyBackupSetDownloadRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupSetDownloadRulesResponse
       */
      Models::ModifyBackupSetDownloadRulesResponse modifyBackupSetDownloadRulesWithOptions(const Models::ModifyBackupSetDownloadRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables, configures, or disables the automatic download feature.
       *
       * @param request ModifyBackupSetDownloadRulesRequest
       * @return ModifyBackupSetDownloadRulesResponse
       */
      Models::ModifyBackupSetDownloadRulesResponse modifyBackupSetDownloadRules(const Models::ModifyBackupSetDownloadRulesRequest &request);

      /**
       * @summary Modifies the data source of a backup schedule.
       *
       * @param request ModifyBackupSourceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupSourceEndpointResponse
       */
      Models::ModifyBackupSourceEndpointResponse modifyBackupSourceEndpointWithOptions(const Models::ModifyBackupSourceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the data source of a backup schedule.
       *
       * @param request ModifyBackupSourceEndpointRequest
       * @return ModifyBackupSourceEndpointResponse
       */
      Models::ModifyBackupSourceEndpointResponse modifyBackupSourceEndpoint(const Models::ModifyBackupSourceEndpointRequest &request);

      /**
       * @summary Modifies the backup time of a backup schedule.
       *
       * @param request ModifyBackupStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupStrategyResponse
       */
      Models::ModifyBackupStrategyResponse modifyBackupStrategyWithOptions(const Models::ModifyBackupStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup time of a backup schedule.
       *
       * @param request ModifyBackupStrategyRequest
       * @return ModifyBackupStrategyResponse
       */
      Models::ModifyBackupStrategyResponse modifyBackupStrategy(const Models::ModifyBackupStrategyRequest &request);

      /**
       * @summary Modifies the lifecycle of data that is backed up based on a backup schedule.
       *
       * @param request ModifyStorageStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStorageStrategyResponse
       */
      Models::ModifyStorageStrategyResponse modifyStorageStrategyWithOptions(const Models::ModifyStorageStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the lifecycle of data that is backed up based on a backup schedule.
       *
       * @param request ModifyStorageStrategyRequest
       * @return ModifyStorageStrategyResponse
       */
      Models::ModifyStorageStrategyResponse modifyStorageStrategy(const Models::ModifyStorageStrategyRequest &request);

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
      Models::ReleaseBackupPlanResponse releaseBackupPlanWithOptions(const Models::ReleaseBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go backup schedule.
       *
       * @description ## Impacts
       * After a pay-as-you-go backup schedule is released, it stops providing services. Database Backup (DBS) no longer charges you fees for this backup schedule.
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
       * @summary Starts a backup schedule.
       *
       * @param request StartBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBackupPlanResponse
       */
      Models::StartBackupPlanResponse startBackupPlanWithOptions(const Models::StartBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a backup schedule.
       *
       * @param request StartBackupPlanRequest
       * @return StartBackupPlanResponse
       */
      Models::StartBackupPlanResponse startBackupPlan(const Models::StartBackupPlanRequest &request);

      /**
       * @summary Starts a restore task.
       *
       * @param request StartRestoreTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRestoreTaskResponse
       */
      Models::StartRestoreTaskResponse startRestoreTaskWithOptions(const Models::StartRestoreTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a restore task.
       *
       * @param request StartRestoreTaskRequest
       * @return StartRestoreTaskResponse
       */
      Models::StartRestoreTaskResponse startRestoreTask(const Models::StartRestoreTaskRequest &request);

      /**
       * @summary Stops a backup schedule.
       *
       * @param request StopBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopBackupPlanResponse
       */
      Models::StopBackupPlanResponse stopBackupPlanWithOptions(const Models::StopBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a backup schedule.
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
