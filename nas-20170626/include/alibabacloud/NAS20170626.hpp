// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_NAS20170626_HPP_
#define ALIBABACLOUD_NAS20170626_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/NAS20170626Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/NAS20170626.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @deprecated OpenAPI AddClientToBlackList is deprecated
       *
       * @summary Adds a client to the blacklist of a Cloud Parallel File Storage (CPFS) file system and revokes the write access from the client. The blacklist serves as an I/O fence.
       *
       * @description The API operation is available only for CPFS file systems.
       *
       * @param request AddClientToBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddClientToBlackListResponse
       */
      Models::AddClientToBlackListResponse addClientToBlackListWithOptions(const Models::AddClientToBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddClientToBlackList is deprecated
       *
       * @summary Adds a client to the blacklist of a Cloud Parallel File Storage (CPFS) file system and revokes the write access from the client. The blacklist serves as an I/O fence.
       *
       * @description The API operation is available only for CPFS file systems.
       *
       * @param request AddClientToBlackListRequest
       * @return AddClientToBlackListResponse
       */
      Models::AddClientToBlackListResponse addClientToBlackList(const Models::AddClientToBlackListRequest &request);

      /**
       * @summary Applies an automatic snapshot policy to one or more file systems.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       * *   You can apply only one automatic snapshot policy to each file system.
       * *   Each automatic snapshot policy can be applied to multiple file systems.
       * *   If an automatic snapshot policy is applied to a file system, you can call the ApplyAutoSnapshotPolicy operation to change the automatic snapshot policy.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicyWithOptions(const Models::ApplyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an automatic snapshot policy to one or more file systems.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       * *   You can apply only one automatic snapshot policy to each file system.
       * *   Each automatic snapshot policy can be applied to multiple file systems.
       * *   If an automatic snapshot policy is applied to a file system, you can call the ApplyAutoSnapshotPolicy operation to change the automatic snapshot policy.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicy(const Models::ApplyAutoSnapshotPolicyRequest &request);

      /**
       * @summary Configures automatic updates for a specified data flow.
       *
       * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - You can add auto-refresh configurations only for data flows in the `Running` state.
       * - You can add up to five auto-refresh configurations for a data flow.
       * - It takes 2 to 5 minutes to create an auto-refresh configuration. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
       * - Auto-refresh relies on EventBridge to collect object modification events from the source OSS storage. [Activate EventBridge](https://help.aliyun.com/document_detail/182246.html) before you proceed.
       *   > The event buses and event rules that CPFS creates in EventBridge contain the description `Create for cpfs auto refresh`. Do not modify or delete these event buses or event rules. Otherwise, auto-refresh cannot work properly.
       * - Auto-refresh targets a prefix specified by the RefreshPath parameter. When you configure auto-refresh for a prefix in a CPFS data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When objects within the prefix of the source OSS bucket are modified, OSS events are generated in EventBridge and processed by the CPFS data flow.
       * - After you configure auto-refresh (AutoRefresh), when data changes in the source storage, the changed metadata is automatically synchronized to the CPFS file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data flow node to load data.
       * - The auto-refresh interval (AutoRefreshInterval) specifies the interval at which CPFS checks whether data updates exist in the prefix of the source OSS bucket. If data updates exist, an auto-refresh node is started. When the frequency of object modification events in the source OSS bucket exceeds the processing capacity of the CPFS data flow, automatic synchronization nodes accumulate, metadata updates are delayed, and the data stream status changes to Misconfigured. To resolve this issue, upgrade the data stream specifications or reduce the modification frequency in OSS.
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefreshWithOptions(const Models::ApplyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures automatic updates for a specified data flow.
       *
       * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - You can add auto-refresh configurations only for data flows in the `Running` state.
       * - You can add up to five auto-refresh configurations for a data flow.
       * - It takes 2 to 5 minutes to create an auto-refresh configuration. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
       * - Auto-refresh relies on EventBridge to collect object modification events from the source OSS storage. [Activate EventBridge](https://help.aliyun.com/document_detail/182246.html) before you proceed.
       *   > The event buses and event rules that CPFS creates in EventBridge contain the description `Create for cpfs auto refresh`. Do not modify or delete these event buses or event rules. Otherwise, auto-refresh cannot work properly.
       * - Auto-refresh targets a prefix specified by the RefreshPath parameter. When you configure auto-refresh for a prefix in a CPFS data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When objects within the prefix of the source OSS bucket are modified, OSS events are generated in EventBridge and processed by the CPFS data flow.
       * - After you configure auto-refresh (AutoRefresh), when data changes in the source storage, the changed metadata is automatically synchronized to the CPFS file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data flow node to load data.
       * - The auto-refresh interval (AutoRefreshInterval) specifies the interval at which CPFS checks whether data updates exist in the prefix of the source OSS bucket. If data updates exist, an auto-refresh node is started. When the frequency of object modification events in the source OSS bucket exceeds the processing capacity of the CPFS data flow, automatic synchronization nodes accumulate, metadata updates are delayed, and the data stream status changes to Misconfigured. To resolve this issue, upgrade the data stream specifications or reduce the modification frequency in OSS.
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefresh(const Models::ApplyDataFlowAutoRefreshRequest &request);

      /**
       * @summary Associates a Virtual Storage Channel (VSC) device with a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple file system IDs (FileSystemId). This means the ResourceIds.VscId values must be the same.
       *
       * @param request AttachVscToFilesystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVscToFilesystemsResponse
       */
      Models::AttachVscToFilesystemsResponse attachVscToFilesystemsWithOptions(const Models::AttachVscToFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Virtual Storage Channel (VSC) device with a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple file system IDs (FileSystemId). This means the ResourceIds.VscId values must be the same.
       *
       * @param request AttachVscToFilesystemsRequest
       * @return AttachVscToFilesystemsResponse
       */
      Models::AttachVscToFilesystemsResponse attachVscToFilesystems(const Models::AttachVscToFilesystemsRequest &request);

      /**
       * @summary Cancels the automatic snapshot policy that is created for a file system.
       *
       * @description <props="china">.
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * -  Only Advanced Extreme NAS supports this feature.
       * .
       * <props="intl">.
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * -  Only Advanced Extreme NAS supports this feature.
       * .
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(const Models::CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the automatic snapshot policy that is created for a file system.
       *
       * @description <props="china">.
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * -  Only Advanced Extreme NAS supports this feature.
       * .
       * <props="intl">.
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * -  Only Advanced Extreme NAS supports this feature.
       * .
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(const Models::CancelAutoSnapshotPolicyRequest &request);

      /**
       * @summary Cancels the AutoRefresh configuration for a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持取消`Running（正常）`、`Stopped（停止）`状态数据流动的自动更新配置。
       * - 取消自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询取消自动更新任务的状态。
       *
       * @param request CancelDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowAutoRefreshResponse
       */
      Models::CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefreshWithOptions(const Models::CancelDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the AutoRefresh configuration for a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持取消`Running（正常）`、`Stopped（停止）`状态数据流动的自动更新配置。
       * - 取消自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询取消自动更新任务的状态。
       *
       * @param request CancelDataFlowAutoRefreshRequest
       * @return CancelDataFlowAutoRefreshResponse
       */
      Models::CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefresh(const Models::CancelDataFlowAutoRefreshRequest &request);

      /**
       * @summary Cancels a data streaming task.
       *
       * @description - 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持在 CREATED和RUNNING状态下取消数据流动流式任务。
       * - 数据流动流式任务是异步执行的，您可通过DescribeDataFlowSubTasks查询流式任务执行状态。
       *
       * @param request CancelDataFlowSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowSubTaskResponse
       */
      Models::CancelDataFlowSubTaskResponse cancelDataFlowSubTaskWithOptions(const Models::CancelDataFlowSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a data streaming task.
       *
       * @description - 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持在 CREATED和RUNNING状态下取消数据流动流式任务。
       * - 数据流动流式任务是异步执行的，您可通过DescribeDataFlowSubTasks查询流式任务执行状态。
       *
       * @param request CancelDataFlowSubTaskRequest
       * @return CancelDataFlowSubTaskResponse
       */
      Models::CancelDataFlowSubTaskResponse cancelDataFlowSubTask(const Models::CancelDataFlowSubTaskRequest &request);

      /**
       * @summary Cancels a batch or streaming data flow task that is in the Pending or Executing state.
       *
       * @description - Data flow tasks are supported only by CPFS 2.2.0 or later and CPFS for AI Computing 2.4.0 or later. The file system details page in the console displays the version information.
       * - A data flow task can be canceled only if it is in the `Pending or Executing` state.
       * - Canceling a data flow task typically takes 5 to 10 minutes. Call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status.
       * - You cannot cancel a streaming task if it has running streaming subtasks. Otherwise, the system returns an InvalidStatus.ResourceMismatch error.
       *
       * @param request CancelDataFlowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowTaskResponse
       */
      Models::CancelDataFlowTaskResponse cancelDataFlowTaskWithOptions(const Models::CancelDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a batch or streaming data flow task that is in the Pending or Executing state.
       *
       * @description - Data flow tasks are supported only by CPFS 2.2.0 or later and CPFS for AI Computing 2.4.0 or later. The file system details page in the console displays the version information.
       * - A data flow task can be canceled only if it is in the `Pending or Executing` state.
       * - Canceling a data flow task typically takes 5 to 10 minutes. Call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status.
       * - You cannot cancel a streaming task if it has running streaming subtasks. Otherwise, the system returns an InvalidStatus.ResourceMismatch error.
       *
       * @param request CancelDataFlowTaskRequest
       * @return CancelDataFlowTaskResponse
       */
      Models::CancelDataFlowTaskResponse cancelDataFlowTask(const Models::CancelDataFlowTaskRequest &request);

      /**
       * @summary Cancels a directory quota for a file system.
       *
       * @description Only General-purpose NAS NFS file systems support the directory quota feature.
       *
       * @param request CancelDirQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDirQuotaResponse
       */
      Models::CancelDirQuotaResponse cancelDirQuotaWithOptions(const Models::CancelDirQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a directory quota for a file system.
       *
       * @description Only General-purpose NAS NFS file systems support the directory quota feature.
       *
       * @param request CancelDirQuotaRequest
       * @return CancelDirQuotaResponse
       */
      Models::CancelDirQuotaResponse cancelDirQuota(const Models::CancelDirQuotaRequest &request);

      /**
       * @summary Cancels the quota set for a fileset.
       *
       * @description 仅CPFS智算版2.7.0及以上版本支持取消配额。
       *
       * @param request CancelFilesetQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelFilesetQuotaResponse
       */
      Models::CancelFilesetQuotaResponse cancelFilesetQuotaWithOptions(const Models::CancelFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the quota set for a fileset.
       *
       * @description 仅CPFS智算版2.7.0及以上版本支持取消配额。
       *
       * @param request CancelFilesetQuotaRequest
       * @return CancelFilesetQuotaResponse
       */
      Models::CancelFilesetQuotaResponse cancelFilesetQuota(const Models::CancelFilesetQuotaRequest &request);

      /**
       * @summary Cancels a running data retrieval task.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request CancelLifecycleRetrieveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelLifecycleRetrieveJobResponse
       */
      Models::CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJobWithOptions(const Models::CancelLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a running data retrieval task.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request CancelLifecycleRetrieveJobRequest
       * @return CancelLifecycleRetrieveJobResponse
       */
      Models::CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJob(const Models::CancelLifecycleRetrieveJobRequest &request);

      /**
       * @summary Cancels a running job of the recycle bin.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   You can cancel only jobs that are in the Running state. You cannot cancel jobs that are in the PartialSuccess, Success, Fail, or Cancelled state.
       * *   If you cancel a running job that permanently deletes files, you cannot restore the files that are already permanently deleted.
       * *   If you cancel a running job that restores files, you can query the restored files from the file system, and query the unrestored files from the recycle bin.
       *
       * @param request CancelRecycleBinJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRecycleBinJobResponse
       */
      Models::CancelRecycleBinJobResponse cancelRecycleBinJobWithOptions(const Models::CancelRecycleBinJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a running job of the recycle bin.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   You can cancel only jobs that are in the Running state. You cannot cancel jobs that are in the PartialSuccess, Success, Fail, or Cancelled state.
       * *   If you cancel a running job that permanently deletes files, you cannot restore the files that are already permanently deleted.
       * *   If you cancel a running job that restores files, you can query the restored files from the file system, and query the unrestored files from the recycle bin.
       *
       * @param request CancelRecycleBinJobRequest
       * @return CancelRecycleBinJobResponse
       */
      Models::CancelRecycleBinJobResponse cancelRecycleBinJob(const Models::CancelRecycleBinJobRequest &request);

      /**
       * @summary Changes the resource group to which a file system instance belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a file system instance belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates a permission group.
       *
       * @description - You can create up to 20 permission groups in a single region within an Alibaba Cloud account.
       * - A permission group supports up to 300 rules.
       * - Only permission groups of the VPC network type can be created.
       *
       * @param request CreateAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroupWithOptions(const Models::CreateAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission group.
       *
       * @description - You can create up to 20 permission groups in a single region within an Alibaba Cloud account.
       * - A permission group supports up to 300 rules.
       * - Only permission groups of the VPC network type can be created.
       *
       * @param request CreateAccessGroupRequest
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroup(const Models::CreateAccessGroupRequest &request);

      /**
       * @summary Creates an access point.
       *
       * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. After the CreateAccessPoint operation succeeds, execute the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the access point status. Mount the file system only after the access point status becomes **Active**. Otherwise, the mount operation may fail.
       * - Only General-purpose NAS NFS file systems support this feature.
       * - If you enable the RAM policy (EnabledRam), configure the corresponding RAM permissions. For more information, see [Manage access points](https://help.aliyun.com/document_detail/2545998.html).
       *
       * @param request CreateAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessPointResponse
       */
      Models::CreateAccessPointResponse createAccessPointWithOptions(const Models::CreateAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access point.
       *
       * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. After the CreateAccessPoint operation succeeds, execute the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the access point status. Mount the file system only after the access point status becomes **Active**. Otherwise, the mount operation may fail.
       * - Only General-purpose NAS NFS file systems support this feature.
       * - If you enable the RAM policy (EnabledRam), configure the corresponding RAM permissions. For more information, see [Manage access points](https://help.aliyun.com/document_detail/2545998.html).
       *
       * @param request CreateAccessPointRequest
       * @return CreateAccessPointResponse
       */
      Models::CreateAccessPointResponse createAccessPoint(const Models::CreateAccessPointRequest &request);

      /**
       * @summary Creates a permission rule for a permission group.
       *
       * @description A maximum of 300 rules can be added to a permission group.
       *
       * @param request CreateAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRuleWithOptions(const Models::CreateAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission rule for a permission group.
       *
       * @description A maximum of 300 rules can be added to a permission group.
       *
       * @param request CreateAccessRuleRequest
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRule(const Models::CreateAccessRuleRequest &request);

      /**
       * @summary Creates an Agentic space.
       *
       * @description Applicable to agentic-type file systems.
       *
       * @param request CreateAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgenticSpaceResponse
       */
      Models::CreateAgenticSpaceResponse createAgenticSpaceWithOptions(const Models::CreateAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Agentic space.
       *
       * @description Applicable to agentic-type file systems.
       *
       * @param request CreateAgenticSpaceRequest
       * @return CreateAgenticSpaceResponse
       */
      Models::CreateAgenticSpaceResponse createAgenticSpace(const Models::CreateAgenticSpaceRequest &request);

      /**
       * @summary Creates an automatic snapshot policy.
       *
       * @description <props="china">.
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS supports this feature.
       * - You can create a maximum of 100 automatic snapshot policies per Alibaba Cloud account in each region.
       * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as automatic snapshot time points. Because the file system contains a large amount of data, snapshot creation starts at 09:00 and completes at 10:20, taking 80 minutes. The system skips the 10:00 time point and creates the next automatic snapshot at 11:00.
       * - Each file system supports a maximum of 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
       * - When you modify the retention period of an automatic snapshot policy, the change takes effect only for new snapshots. Existing snapshots retain their original retention period.
       * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is complete before you can manually create a snapshot.
       * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
       * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, distinguishing it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` represents the year, `M` represents the month, and `d` represents the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
       * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
       * .
       * <props="intl">.
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS supports this feature.
       * - You can create a maximum of 100 automatic snapshot policies per Alibaba Cloud account in each region.
       * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as automatic snapshot time points. Because the file system contains a large amount of data, snapshot creation starts at 09:00 and completes at 10:20, taking 80 minutes. The system skips the 10:00 time point and creates the next automatic snapshot at 11:00.
       * - Each file system supports a maximum of 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
       * - When you modify the retention period of an automatic snapshot policy, the change takes effect only for new snapshots. Existing snapshots retain their original retention period.
       * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is complete before you can manually create a snapshot.
       * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
       * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, distinguishing it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` represents the year, `M` represents the month, and `d` represents the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
       * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
       * .
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(const Models::CreateAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic snapshot policy.
       *
       * @description <props="china">.
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS supports this feature.
       * - You can create a maximum of 100 automatic snapshot policies per Alibaba Cloud account in each region.
       * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as automatic snapshot time points. Because the file system contains a large amount of data, snapshot creation starts at 09:00 and completes at 10:20, taking 80 minutes. The system skips the 10:00 time point and creates the next automatic snapshot at 11:00.
       * - Each file system supports a maximum of 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
       * - When you modify the retention period of an automatic snapshot policy, the change takes effect only for new snapshots. Existing snapshots retain their original retention period.
       * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is complete before you can manually create a snapshot.
       * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
       * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, distinguishing it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` represents the year, `M` represents the month, and `d` represents the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
       * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
       * .
       * <props="intl">.
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS supports this feature.
       * - You can create a maximum of 100 automatic snapshot policies per Alibaba Cloud account in each region.
       * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as automatic snapshot time points. Because the file system contains a large amount of data, snapshot creation starts at 09:00 and completes at 10:20, taking 80 minutes. The system skips the 10:00 time point and creates the next automatic snapshot at 11:00.
       * - Each file system supports a maximum of 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
       * - When you modify the retention period of an automatic snapshot policy, the change takes effect only for new snapshots. Existing snapshots retain their original retention period.
       * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is complete before you can manually create a snapshot.
       * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
       * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, distinguishing it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` represents the year, `M` represents the month, and `d` represents the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
       * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
       * .
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(const Models::CreateAutoSnapshotPolicyRequest &request);

      /**
       * @summary 用于智算cpfs创建接入点
       *
       * @description 创建 CPFS 智算版 AccessPoint
       *
       * @param request CreateCpfsAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCpfsAccessPointResponse
       */
      Models::CreateCpfsAccessPointResponse createCpfsAccessPointWithOptions(const Models::CreateCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于智算cpfs创建接入点
       *
       * @description 创建 CPFS 智算版 AccessPoint
       *
       * @param request CreateCpfsAccessPointRequest
       * @return CreateCpfsAccessPointResponse
       */
      Models::CreateCpfsAccessPointResponse createCpfsAccessPoint(const Models::CreateCpfsAccessPointRequest &request);

      /**
       * @summary Creates a data flow between a CPFS General-purpose or CPFS for Lingjun file system and source storage.
       *
       * @description - This operation applies to the following products:
       * | Product | File system ID format | Minimum version that supports data flows |
       * |------|----------------|------------------------|
       * | **CPFS General-purpose** | Starts with `cpfs-`, such as cpfs-125487\\*\\*\\*\\* | 2.2.0 and later |
       * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\* | 2.4.0 and later |
       * > CPFS General-purpose and CPFS for Lingjun share the same set of API operations, but differ in parameter values and feature support. Refer to the corresponding section based on the product type you use.
       * - Basic operations
       *     - You can create a data flow only when the CPFS General-purpose or CPFS for Lingjun file system is in the Running state.
       *     - A maximum of **10** data flows can be created for a single CPFS General-purpose or CPFS for Lingjun file system.
       *     - Creating a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to check whether the data flow is created.
       * - Permissions.
       *     When you create a data flow, Cloud Parallel File Storage associates the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
       * - CPFS General-purpose usage notes.
       *      This section applies to CPFS General-purpose file systems whose IDs start with `cpfs-`.
       *   - Billing
       *     - Creating a data flow incurs charges based on the data flow bandwidth. For more information, see [CPFS General-purpose billing](https://help.aliyun.com/document_detail/111858.html).
       *     - When you use auto-refresh (AutoRefresh), EventBridge collects object modification events from the source OSS storage, which incurs fees. For more information, see [EventBridge billing](https://help.aliyun.com/document_detail/163752.html).
       *   - Data flow specifications
       *       - The data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data flow bandwidth refers to the maximum transfer bandwidth that the data flow can achieve during data import or export.
       *     - Creating a data flow consumes one vSwitch IP address used by the Cloud Parallel File Storage General-purpose mount target. Make sure that sufficient vSwitch IP resources are available.
       *     - Inventory check: When DryRun is set to true, you can verify whether the resources required to create a data flow of the specified specification are available.
       *   - Fileset
       *     - The destination of a data flow is a Fileset in the CPFS General-purpose file system. A Fileset is a new directory tree structure in the CPFS General-purpose file system. It is a small file system within the parent file system that has an independent inode space and management capability.
       *     - The Fileset must already exist when you create a data flow, and it cannot be nested with other Filesets. Only one data flow can be created on a Fileset, corresponding to one source storage.
       *     - The maximum number of files in a Fileset is 1 million. If the number of files imported from an OSS bucket exceeds this limit, creating new files returns a `no space` error.
       *    > If data already exists in the Fileset, the existing data in the Fileset is cleared and replaced with data synchronized from OSS after the data flow is created.
       *   - Auto-refresh
       *     - After auto-refresh (AutoRefresh) is configured, when data in the source storage changes, the changed metadata is automatically synchronized to the Cloud Parallel File Storage General-purpose file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data flow task to load data.
       *     - Auto-refresh relies on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *     - The scope of automatic synchronization is a prefix, specified by the RefreshPath parameter. A maximum of 5 auto-refresh folders can be configured for a data flow.
       *     - The auto-refresh interval (AutoRefreshInterval) specifies the interval at which Cloud Parallel File Storage General-purpose checks whether data updates exist in the specified prefix of the source OSS bucket. If data updates exist, an automatic synchronization task is started. When the frequency of object modification events in the source OSS exceeds the processing capacity of the Cloud Parallel File Storage General-purpose data flow, automatic synchronization tasks accumulate, metadata updates are delayed, and the data flow status changes to `Misconfigured`. You can resolve this issue by upgrading the data flow specification or reducing the OSS modification frequency.
       *     - When automatic synchronization is configured for a prefix in a Cloud Parallel File Storage General-purpose data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs in the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the Cloud Parallel File Storage General-purpose data flow.
       *      > The event bus and event rules created by Cloud Parallel File Storage General-purpose in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event bus or event rules. Otherwise, auto-refresh does not work properly. The data flow status changes to Normal only when auto-refresh is working properly.
       *   - Source storage
       *      - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *      - Cloud Parallel File Storage General-purpose data flows support both encrypted and non-encrypted access to OSS. When you select encrypted (SSL) access to OSS, confirm that the encryption in transit settings of the OSS bucket support encrypted access.
       *      - If data flows of multiple Cloud Parallel File Storage General-purpose file systems, or multiple data flows of the same Cloud Parallel File Storage General-purpose file system, use the same OSS bucket as the source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple Cloud Parallel File Storage General-purpose file systems export data to the same source. This procedure is required to avoid conflicts during the process.
       *      - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the Cloud Parallel File Storage General-purpose file system.
       *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the Cloud Parallel File Storage General-purpose data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the Cloud Parallel File Storage General-purpose data flow cannot access the data in the bucket.
       * - CPFS for Lingjun usage notes.
       *      This section applies to CPFS for Lingjun file systems whose IDs start with `bmcpfs-`.
       *   - Source storage
       *       - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *       - CPFS for Lingjun data flows support both encrypted and non-encrypted access to OSS. When you select encrypted (SSL) access to OSS, make sure that the encryption in transit of the OSS bucket supports encrypted access.
       *       - If data flows of multiple CPFS for Lingjun file systems, or multiple data flows of the same CPFS for Lingjun file system, use the same OSS bucket as the source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
       *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
       *      - CPFS for Lingjun 2.6.0 and later support creating data flows with cross-account OSS.
       *      - The account ID parameter is required only when you use cross-account OSS.
       *      - When you use cross-account OSS, authorize the account first. For more information, see [Cross-account data flow authorization](https://help.aliyun.com/document_detail/2713462.html).
       *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
       *   - Data flow restrictions on file systems.
       *     - In the file system path associated with a data flow, you cannot rename a non-empty directory. Otherwise, a Permission Denied or directory not empty error is returned.
       *      - Use special characters in directory and file names with caution. The following characters are supported: uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
       *     - Excessively long paths are not supported. The maximum path length supported by data flows is 1023 characters.
       *   - Data flow import restrictions.
       *     - After symlink files are imported to CPFS for Lingjun, they are converted to regular files that contain data, and the symlink information is lost.
       *     - If the OSS bucket has multiple versions, only the latest version is copied.
       *     - File names or subdirectory names longer than 255 bytes are not supported.
       *   - Data flow export restrictions
       *     - After symlink files are synchronized to OSS, the files pointed to by the symlinks are not synchronized. Instead, the symlinks become regular empty objects with no data.
       *     - Hardlink files are synchronized to OSS as regular files only.
       *     - Socket, Device, and Pipe files become regular empty objects with no data when exported to an OSS bucket.
       *     - Directory paths longer than 1023 characters are not supported.
       *
       * @param request CreateDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowResponse
       */
      Models::CreateDataFlowResponse createDataFlowWithOptions(const Models::CreateDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data flow between a CPFS General-purpose or CPFS for Lingjun file system and source storage.
       *
       * @description - This operation applies to the following products:
       * | Product | File system ID format | Minimum version that supports data flows |
       * |------|----------------|------------------------|
       * | **CPFS General-purpose** | Starts with `cpfs-`, such as cpfs-125487\\*\\*\\*\\* | 2.2.0 and later |
       * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\* | 2.4.0 and later |
       * > CPFS General-purpose and CPFS for Lingjun share the same set of API operations, but differ in parameter values and feature support. Refer to the corresponding section based on the product type you use.
       * - Basic operations
       *     - You can create a data flow only when the CPFS General-purpose or CPFS for Lingjun file system is in the Running state.
       *     - A maximum of **10** data flows can be created for a single CPFS General-purpose or CPFS for Lingjun file system.
       *     - Creating a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to check whether the data flow is created.
       * - Permissions.
       *     When you create a data flow, Cloud Parallel File Storage associates the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
       * - CPFS General-purpose usage notes.
       *      This section applies to CPFS General-purpose file systems whose IDs start with `cpfs-`.
       *   - Billing
       *     - Creating a data flow incurs charges based on the data flow bandwidth. For more information, see [CPFS General-purpose billing](https://help.aliyun.com/document_detail/111858.html).
       *     - When you use auto-refresh (AutoRefresh), EventBridge collects object modification events from the source OSS storage, which incurs fees. For more information, see [EventBridge billing](https://help.aliyun.com/document_detail/163752.html).
       *   - Data flow specifications
       *       - The data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data flow bandwidth refers to the maximum transfer bandwidth that the data flow can achieve during data import or export.
       *     - Creating a data flow consumes one vSwitch IP address used by the Cloud Parallel File Storage General-purpose mount target. Make sure that sufficient vSwitch IP resources are available.
       *     - Inventory check: When DryRun is set to true, you can verify whether the resources required to create a data flow of the specified specification are available.
       *   - Fileset
       *     - The destination of a data flow is a Fileset in the CPFS General-purpose file system. A Fileset is a new directory tree structure in the CPFS General-purpose file system. It is a small file system within the parent file system that has an independent inode space and management capability.
       *     - The Fileset must already exist when you create a data flow, and it cannot be nested with other Filesets. Only one data flow can be created on a Fileset, corresponding to one source storage.
       *     - The maximum number of files in a Fileset is 1 million. If the number of files imported from an OSS bucket exceeds this limit, creating new files returns a `no space` error.
       *    > If data already exists in the Fileset, the existing data in the Fileset is cleared and replaced with data synchronized from OSS after the data flow is created.
       *   - Auto-refresh
       *     - After auto-refresh (AutoRefresh) is configured, when data in the source storage changes, the changed metadata is automatically synchronized to the Cloud Parallel File Storage General-purpose file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data flow task to load data.
       *     - Auto-refresh relies on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *     - The scope of automatic synchronization is a prefix, specified by the RefreshPath parameter. A maximum of 5 auto-refresh folders can be configured for a data flow.
       *     - The auto-refresh interval (AutoRefreshInterval) specifies the interval at which Cloud Parallel File Storage General-purpose checks whether data updates exist in the specified prefix of the source OSS bucket. If data updates exist, an automatic synchronization task is started. When the frequency of object modification events in the source OSS exceeds the processing capacity of the Cloud Parallel File Storage General-purpose data flow, automatic synchronization tasks accumulate, metadata updates are delayed, and the data flow status changes to `Misconfigured`. You can resolve this issue by upgrading the data flow specification or reducing the OSS modification frequency.
       *     - When automatic synchronization is configured for a prefix in a Cloud Parallel File Storage General-purpose data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs in the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the Cloud Parallel File Storage General-purpose data flow.
       *      > The event bus and event rules created by Cloud Parallel File Storage General-purpose in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event bus or event rules. Otherwise, auto-refresh does not work properly. The data flow status changes to Normal only when auto-refresh is working properly.
       *   - Source storage
       *      - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *      - Cloud Parallel File Storage General-purpose data flows support both encrypted and non-encrypted access to OSS. When you select encrypted (SSL) access to OSS, confirm that the encryption in transit settings of the OSS bucket support encrypted access.
       *      - If data flows of multiple Cloud Parallel File Storage General-purpose file systems, or multiple data flows of the same Cloud Parallel File Storage General-purpose file system, use the same OSS bucket as the source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple Cloud Parallel File Storage General-purpose file systems export data to the same source. This procedure is required to avoid conflicts during the process.
       *      - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the Cloud Parallel File Storage General-purpose file system.
       *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the Cloud Parallel File Storage General-purpose data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the Cloud Parallel File Storage General-purpose data flow cannot access the data in the bucket.
       * - CPFS for Lingjun usage notes.
       *      This section applies to CPFS for Lingjun file systems whose IDs start with `bmcpfs-`.
       *   - Source storage
       *       - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *       - CPFS for Lingjun data flows support both encrypted and non-encrypted access to OSS. When you select encrypted (SSL) access to OSS, make sure that the encryption in transit of the OSS bucket supports encrypted access.
       *       - If data flows of multiple CPFS for Lingjun file systems, or multiple data flows of the same CPFS for Lingjun file system, use the same OSS bucket as the source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
       *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
       *      - CPFS for Lingjun 2.6.0 and later support creating data flows with cross-account OSS.
       *      - The account ID parameter is required only when you use cross-account OSS.
       *      - When you use cross-account OSS, authorize the account first. For more information, see [Cross-account data flow authorization](https://help.aliyun.com/document_detail/2713462.html).
       *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
       *   - Data flow restrictions on file systems.
       *     - In the file system path associated with a data flow, you cannot rename a non-empty directory. Otherwise, a Permission Denied or directory not empty error is returned.
       *      - Use special characters in directory and file names with caution. The following characters are supported: uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
       *     - Excessively long paths are not supported. The maximum path length supported by data flows is 1023 characters.
       *   - Data flow import restrictions.
       *     - After symlink files are imported to CPFS for Lingjun, they are converted to regular files that contain data, and the symlink information is lost.
       *     - If the OSS bucket has multiple versions, only the latest version is copied.
       *     - File names or subdirectory names longer than 255 bytes are not supported.
       *   - Data flow export restrictions
       *     - After symlink files are synchronized to OSS, the files pointed to by the symlinks are not synchronized. Instead, the symlinks become regular empty objects with no data.
       *     - Hardlink files are synchronized to OSS as regular files only.
       *     - Socket, Device, and Pipe files become regular empty objects with no data when exported to an OSS bucket.
       *     - Directory paths longer than 1023 characters are not supported.
       *
       * @param request CreateDataFlowRequest
       * @return CreateDataFlowResponse
       */
      Models::CreateDataFlowResponse createDataFlow(const Models::CreateDataFlowRequest &request);

      /**
       * @summary Creates a data streaming subtask.
       *
       * @description - 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
       *  - 仅支持状态为Executing（执行中）的数据流动流式任务创建子任务。
       * - 数据流动流式任务是异步执行的，您可通过DescribeDataFlowSubTasks查询流式任务执行状态。
       * - 当数据流动任务类型为流式任务时，运行中状态仅代表可以创建流式导入任务或流式导出任务（并不代表导入或导出任务运行中）。
       *
       * @param request CreateDataFlowSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowSubTaskResponse
       */
      Models::CreateDataFlowSubTaskResponse createDataFlowSubTaskWithOptions(const Models::CreateDataFlowSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data streaming subtask.
       *
       * @description - 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
       *  - 仅支持状态为Executing（执行中）的数据流动流式任务创建子任务。
       * - 数据流动流式任务是异步执行的，您可通过DescribeDataFlowSubTasks查询流式任务执行状态。
       * - 当数据流动任务类型为流式任务时，运行中状态仅代表可以创建流式导入任务或流式导出任务（并不代表导入或导出任务运行中）。
       *
       * @param request CreateDataFlowSubTaskRequest
       * @return CreateDataFlowSubTaskResponse
       */
      Models::CreateDataFlowSubTaskResponse createDataFlowSubTask(const Models::CreateDataFlowSubTaskRequest &request);

      /**
       * @summary Create a data flow task.
       *
       * @description - CPFS usage notes
       *   - Data flow is supported only on CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
       *   - Data flow tasks execute asynchronously. You can query the task status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation. Task duration depends on the amount of data. For large datasets, split the workload into multiple tasks.
       *   - You can create data flow tasks only on a data flow that is in the Running state.
       *   - Manually running a data flow task pauses the corresponding automatic data update task.
       *   - When you create an export task, ensure that the absolute path of each file to be exported from CPFS does not exceed 1,023 characters.
       * - CPFS AI-Computing Edition usage notes
       *   - Data flow is supported only on CPFS AI-Computing Edition 2.4.0 and later. You can view the version information on the file system details page in the console.
       *   - Data flow tasks execute asynchronously. You can query the task status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation. Task duration depends on the amount of data. For large datasets, split the workload into multiple tasks.
       *   - You can create data flow tasks only on a data flow that is in the Running state.
       *   - When you create an export task, ensure that the absolute path of each file to be exported from CPFS AI-Computing Edition does not exceed 1,023 characters.
       *   - CPFS AI-Computing Edition supports two task types: batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
       *
       * @param request CreateDataFlowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowTaskResponse
       */
      Models::CreateDataFlowTaskResponse createDataFlowTaskWithOptions(const Models::CreateDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a data flow task.
       *
       * @description - CPFS usage notes
       *   - Data flow is supported only on CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
       *   - Data flow tasks execute asynchronously. You can query the task status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation. Task duration depends on the amount of data. For large datasets, split the workload into multiple tasks.
       *   - You can create data flow tasks only on a data flow that is in the Running state.
       *   - Manually running a data flow task pauses the corresponding automatic data update task.
       *   - When you create an export task, ensure that the absolute path of each file to be exported from CPFS does not exceed 1,023 characters.
       * - CPFS AI-Computing Edition usage notes
       *   - Data flow is supported only on CPFS AI-Computing Edition 2.4.0 and later. You can view the version information on the file system details page in the console.
       *   - Data flow tasks execute asynchronously. You can query the task status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation. Task duration depends on the amount of data. For large datasets, split the workload into multiple tasks.
       *   - You can create data flow tasks only on a data flow that is in the Running state.
       *   - When you create an export task, ensure that the absolute path of each file to be exported from CPFS AI-Computing Edition does not exceed 1,023 characters.
       *   - CPFS AI-Computing Edition supports two task types: batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
       *
       * @param request CreateDataFlowTaskRequest
       * @return CreateDataFlowTaskResponse
       */
      Models::CreateDataFlowTaskResponse createDataFlowTask(const Models::CreateDataFlowTaskRequest &request);

      /**
       * @summary Creates a directory in a file system.
       *
       * @description Only General-purpose Network File System (NFS) file systems support this operation.
       *
       * @param request CreateDirRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDirResponse
       */
      Models::CreateDirResponse createDirWithOptions(const Models::CreateDirRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory in a file system.
       *
       * @description Only General-purpose Network File System (NFS) file systems support this operation.
       *
       * @param request CreateDirRequest
       * @return CreateDirResponse
       */
      Models::CreateDirResponse createDir(const Models::CreateDirRequest &request);

      /**
       * @summary Creates a directory or file.
       *
       * @description *   This operation is only available to some users.
       * *   This operation supports only General-purpose NAS file systems that use the Server Message Block (SMB) protocol and have Resource Access Management (RAM) enabled.
       *
       * @param request CreateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFileWithOptions(const Models::CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory or file.
       *
       * @description *   This operation is only available to some users.
       * *   This operation supports only General-purpose NAS file systems that use the Server Message Block (SMB) protocol and have Resource Access Management (RAM) enabled.
       *
       * @param request CreateFileRequest
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFile(const Models::CreateFileRequest &request);

      /**
       * @summary Creates a file system.
       *
       * @description - Before you use this operation, make sure that you understand the billing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/detail).
       * -  To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * -  When you call this operation, the system automatically creates the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystemWithOptions(const Models::CreateFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file system.
       *
       * @description - Before you use this operation, make sure that you understand the billing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/detail).
       * -  To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * -  When you call this operation, the system automatically creates the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateFileSystemRequest
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystem(const Models::CreateFileSystemRequest &request);

      /**
       * @summary Creates a fileset.
       *
       * @description - CPFS使用说明
       *   - 仅支持CPFS 2.2.0及以上版本创建Fileset。您可以在控制台文件系统详情页面查看版本信息。
       *   - 单个CPFS文件系统最多支持创建10个Fileset。
       *   - 父目录必须是已存在的目录。
       *   - Fileset路径支持的最大深度为8层，根目录/为0层。例如，Fileset路径为/test/aaa/ccc/，则表示路径深度为3层。
       *   - 不支持Fileset中嵌套Fileset。即当父目录已指定为Fileset，其子目录不支持指定为Fileset。
       *   - Fileset最多支持100万个文件，如果文件数量超过此上限，添加新文件会返回`no space`错误信息。
       * - CPFS智算版使用说明
       *   - 仅支持CPFS智算版 2.7.0及以上版本创建Fileset。您可以在控制台文件系统详情页面查看版本信息。
       *   - 单个CPFS文件系统最多支持创建500个Fileset。
       *   - Fileset路径必须为新路径，不能为已存在路径，Fileset 路径不支持重命名，不支持路径为软链接。
       *   - Fileset路径支持的最大深度为8层，根目录/为0层。例如，Fileset路径为/test/aaa/ccc/，则表示路径深度为3层。
       *   - Fileset路径为多层目录时，父目录必须是已存在的目录。
       *   - 不支持在 Fileset 中嵌套 Fileset，即当父目录已指定为Fileset，其子目录不支持指定为Fileset。一个 Fileset 路径只支持一个配额。
       *   - Fileset容量配额，最小起步10 GiB，扩容单位为1 GiB。
       *   - Fileset最多支持100亿个文件或目录，最小起步10000，扩容单位为1。
       *   - 修改目录配额时，设置的配额容量或文件数必须高于已使用容量或文件数。
       *   - 配额的统计有15分钟的延迟，当前的实际使用量15分钟之后才会生效。
       *
       * @param request CreateFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFilesetResponse
       */
      Models::CreateFilesetResponse createFilesetWithOptions(const Models::CreateFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a fileset.
       *
       * @description - CPFS使用说明
       *   - 仅支持CPFS 2.2.0及以上版本创建Fileset。您可以在控制台文件系统详情页面查看版本信息。
       *   - 单个CPFS文件系统最多支持创建10个Fileset。
       *   - 父目录必须是已存在的目录。
       *   - Fileset路径支持的最大深度为8层，根目录/为0层。例如，Fileset路径为/test/aaa/ccc/，则表示路径深度为3层。
       *   - 不支持Fileset中嵌套Fileset。即当父目录已指定为Fileset，其子目录不支持指定为Fileset。
       *   - Fileset最多支持100万个文件，如果文件数量超过此上限，添加新文件会返回`no space`错误信息。
       * - CPFS智算版使用说明
       *   - 仅支持CPFS智算版 2.7.0及以上版本创建Fileset。您可以在控制台文件系统详情页面查看版本信息。
       *   - 单个CPFS文件系统最多支持创建500个Fileset。
       *   - Fileset路径必须为新路径，不能为已存在路径，Fileset 路径不支持重命名，不支持路径为软链接。
       *   - Fileset路径支持的最大深度为8层，根目录/为0层。例如，Fileset路径为/test/aaa/ccc/，则表示路径深度为3层。
       *   - Fileset路径为多层目录时，父目录必须是已存在的目录。
       *   - 不支持在 Fileset 中嵌套 Fileset，即当父目录已指定为Fileset，其子目录不支持指定为Fileset。一个 Fileset 路径只支持一个配额。
       *   - Fileset容量配额，最小起步10 GiB，扩容单位为1 GiB。
       *   - Fileset最多支持100亿个文件或目录，最小起步10000，扩容单位为1。
       *   - 修改目录配额时，设置的配额容量或文件数必须高于已使用容量或文件数。
       *   - 配额的统计有15分钟的延迟，当前的实际使用量15分钟之后才会生效。
       *
       * @param request CreateFilesetRequest
       * @return CreateFilesetResponse
       */
      Models::CreateFilesetResponse createFileset(const Models::CreateFilesetRequest &request);

      /**
       * @deprecated OpenAPI CreateLDAPConfig is deprecated
       *
       * @summary Creates LDAP configurations.
       *
       * @param request CreateLDAPConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLDAPConfigResponse
       */
      Models::CreateLDAPConfigResponse createLDAPConfigWithOptions(const Models::CreateLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateLDAPConfig is deprecated
       *
       * @summary Creates LDAP configurations.
       *
       * @param request CreateLDAPConfigRequest
       * @return CreateLDAPConfigResponse
       */
      Models::CreateLDAPConfigResponse createLDAPConfig(const Models::CreateLDAPConfigRequest &request);

      /**
       * @summary Creates a lifecycle management policy.
       *
       * @description - Only General-purpose NAS file systems and CPFS for Lingjun support creating lifecycle management policies.
       * - Each CPFS for Lingjun file system supports a maximum of 10 Auto-type and 100 OnDemand-type lifecycle management policies.
       * - A maximum of 20 lifecycle management policies can be created for General-purpose NAS in each region.
       *
       * @param request CreateLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLifecyclePolicyResponse
       */
      Models::CreateLifecyclePolicyResponse createLifecyclePolicyWithOptions(const Models::CreateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lifecycle management policy.
       *
       * @description - Only General-purpose NAS file systems and CPFS for Lingjun support creating lifecycle management policies.
       * - Each CPFS for Lingjun file system supports a maximum of 10 Auto-type and 100 OnDemand-type lifecycle management policies.
       * - A maximum of 20 lifecycle management policies can be created for General-purpose NAS in each region.
       *
       * @param request CreateLifecyclePolicyRequest
       * @return CreateLifecyclePolicyResponse
       */
      Models::CreateLifecyclePolicyResponse createLifecyclePolicy(const Models::CreateLifecyclePolicyRequest &request);

      /**
       * @summary Creates a data retrieval task.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - Each Alibaba Cloud account can have up to 20 running data retrieval tasks in the same region.
       *
       * @param request CreateLifecycleRetrieveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLifecycleRetrieveJobResponse
       */
      Models::CreateLifecycleRetrieveJobResponse createLifecycleRetrieveJobWithOptions(const Models::CreateLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data retrieval task.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - Each Alibaba Cloud account can have up to 20 running data retrieval tasks in the same region.
       *
       * @param request CreateLifecycleRetrieveJobRequest
       * @return CreateLifecycleRetrieveJobResponse
       */
      Models::CreateLifecycleRetrieveJobResponse createLifecycleRetrieveJob(const Models::CreateLifecycleRetrieveJobRequest &request);

      /**
       * @summary Dumps the logs of a General-purpose NAS file system to Simple Log Service.
       *
       * @param request CreateLogAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogAnalysisResponse
       */
      Models::CreateLogAnalysisResponse createLogAnalysisWithOptions(const Models::CreateLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dumps the logs of a General-purpose NAS file system to Simple Log Service.
       *
       * @param request CreateLogAnalysisRequest
       * @return CreateLogAnalysisResponse
       */
      Models::CreateLogAnalysisResponse createLogAnalysis(const Models::CreateLogAnalysisRequest &request);

      /**
       * @summary Creates a mount target.
       *
       * @description - When you call the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. After the CreateMountTarget operation succeeds, first invoke the DescribeMountTargets operation to query the mount target status. Execute the file system mount operation only after the mount target status changes to **Active**. Otherwise, the mount operation may fail.
       * - Invoking this operation triggers the automatic creation of the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTargetWithOptions(const Models::CreateMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mount target.
       *
       * @description - When you call the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. After the CreateMountTarget operation succeeds, first invoke the DescribeMountTargets operation to query the mount target status. Execute the file system mount operation only after the mount target status changes to **Active**. Otherwise, the mount operation may fail.
       * - Invoking this operation triggers the automatic creation of the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateMountTargetRequest
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTarget(const Models::CreateMountTargetRequest &request);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description -  This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * -  Before you begin
       *   
       *    The CPFS file system must be in the Running state and a protocol service must be created.
       * - Other information
       *     - The VPC CIDR block of the protocol service export cannot overlap with the VPC CIDR block of the file system.
       *     - The VPC CIDR blocks of multiple exports on the same protocol service cannot overlap with each other.
       *     - You can create up to 10 export directories for a single protocol service.
       *     - Creating a protocol service export directory consumes IP addresses from the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP address resources.
       *
       * @param request CreateProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolMountTargetResponse
       */
      Models::CreateProtocolMountTargetResponse createProtocolMountTargetWithOptions(const Models::CreateProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description -  This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * -  Before you begin
       *   
       *    The CPFS file system must be in the Running state and a protocol service must be created.
       * - Other information
       *     - The VPC CIDR block of the protocol service export cannot overlap with the VPC CIDR block of the file system.
       *     - The VPC CIDR blocks of multiple exports on the same protocol service cannot overlap with each other.
       *     - You can create up to 10 export directories for a single protocol service.
       *     - Creating a protocol service export directory consumes IP addresses from the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP address resources.
       *
       * @param request CreateProtocolMountTargetRequest
       * @return CreateProtocolMountTargetResponse
       */
      Models::CreateProtocolMountTargetResponse createProtocolMountTarget(const Models::CreateProtocolMountTargetRequest &request);

      /**
       * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation process takes approximately 5 to 10 minutes.
       *
       * @description - This operation is applicable only to CPFS file systems.
       * -  Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of the file system.
       * - Protocol service specifications.
       *   Protocol services include two Protocol Types: General and Cache. Compared with the General type, the Cache type provides hot spot data caching. When the cache is hit, the bandwidth of the Cache type protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
       *   
       *     -   General: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. You do not need to configure a POSIX client cluster management. This feature is free of charge.
       *     -  Cache: Provides server-side in-memory caching based on the LRU policy in addition to the General type capabilities. When data is cached in memory, CPFS can provide higher internal network bandwidth. The Cache type protocol service is available in two specifications: Cache L1 and Cache L2, which differ in internal network bandwidth and memory cache size.
       *      >  The Cache type protocol service is a paid service and is in invitational preview. For information about the billing of the Cache type protocol service, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk user group (group ID: 31045006299) to communicate with CPFS engineers.
       * - Protocol type.
       *   Only NFSv3 is supported.
       * - Prerequisites.
       *   The CPFS file system must be created and in the Running state.
       * - Other information.
       *     - Only one protocol service can be created for each CPFS file system.
       *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP address resources.
       *
       * @param request CreateProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolServiceWithOptions(const Models::CreateProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation process takes approximately 5 to 10 minutes.
       *
       * @description - This operation is applicable only to CPFS file systems.
       * -  Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of the file system.
       * - Protocol service specifications.
       *   Protocol services include two Protocol Types: General and Cache. Compared with the General type, the Cache type provides hot spot data caching. When the cache is hit, the bandwidth of the Cache type protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
       *   
       *     -   General: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. You do not need to configure a POSIX client cluster management. This feature is free of charge.
       *     -  Cache: Provides server-side in-memory caching based on the LRU policy in addition to the General type capabilities. When data is cached in memory, CPFS can provide higher internal network bandwidth. The Cache type protocol service is available in two specifications: Cache L1 and Cache L2, which differ in internal network bandwidth and memory cache size.
       *      >  The Cache type protocol service is a paid service and is in invitational preview. For information about the billing of the Cache type protocol service, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk user group (group ID: 31045006299) to communicate with CPFS engineers.
       * - Protocol type.
       *   Only NFSv3 is supported.
       * - Prerequisites.
       *   The CPFS file system must be created and in the Running state.
       * - Other information.
       *     - Only one protocol service can be created for each CPFS file system.
       *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP address resources.
       *
       * @param request CreateProtocolServiceRequest
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolService(const Models::CreateProtocolServiceRequest &request);

      /**
       * @summary Creates a task to permanently delete a file or directory from the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - The recycle bin must be enabled.
       * - Mount the file system by using NFS or SMB (mount the file system on an ECS instance in the same VPC), and then delete the target file in the mount directory to move it to the recycle bin.
       * - When you permanently delete a directory, the contents of the directory are recursively deleted.
       * - Only one permanent deletion task can be run at a time for a single file system. While a file or directory is being permanently deleted, you cannot initiate a new restoration or cleanup task.
       *
       * @param request CreateRecycleBinDeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecycleBinDeleteJobResponse
       */
      Models::CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJobWithOptions(const Models::CreateRecycleBinDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to permanently delete a file or directory from the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - The recycle bin must be enabled.
       * - Mount the file system by using NFS or SMB (mount the file system on an ECS instance in the same VPC), and then delete the target file in the mount directory to move it to the recycle bin.
       * - When you permanently delete a directory, the contents of the directory are recursively deleted.
       * - Only one permanent deletion task can be run at a time for a single file system. While a file or directory is being permanently deleted, you cannot initiate a new restoration or cleanup task.
       *
       * @param request CreateRecycleBinDeleteJobRequest
       * @return CreateRecycleBinDeleteJobResponse
       */
      Models::CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJob(const Models::CreateRecycleBinDeleteJobRequest &request);

      /**
       * @summary Restores a file or directory from the recycle bin.
       *
       * @description - 仅通用型NAS文件系统支持该功能。
       * - 单个文件系统一次只能执行一个文件恢复或清理任务。正在恢复文件时，无法发起新的文件恢复或清理任务。
       * - 单个恢复任务只能恢复一个文件或目录，恢复指定目录会递归恢复目录下的所有文件。
       * - 文件被恢复后会进行数据整理，数据整理期间读请求性能稍有下降。
       *
       * @param request CreateRecycleBinRestoreJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecycleBinRestoreJobResponse
       */
      Models::CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJobWithOptions(const Models::CreateRecycleBinRestoreJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a file or directory from the recycle bin.
       *
       * @description - 仅通用型NAS文件系统支持该功能。
       * - 单个文件系统一次只能执行一个文件恢复或清理任务。正在恢复文件时，无法发起新的文件恢复或清理任务。
       * - 单个恢复任务只能恢复一个文件或目录，恢复指定目录会递归恢复目录下的所有文件。
       * - 文件被恢复后会进行数据整理，数据整理期间读请求性能稍有下降。
       *
       * @param request CreateRecycleBinRestoreJobRequest
       * @return CreateRecycleBinRestoreJobResponse
       */
      Models::CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJob(const Models::CreateRecycleBinRestoreJobRequest &request);

      /**
       * @summary Creates a snapshot.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support the snapshot feature.
       * *   You can create a maximum of 128 snapshots for a file system.
       * *   The compute node on which a file system is mounted must function as expected. Otherwise, you cannot create a snapshot for the file system.
       * *   You can create only one snapshot for a file system at a time.
       * *   If the file system expires when a snapshot is being created, the file system is released and the snapshot is deleted.
       * *   When you create a snapshot for a file system, the I/O performance of the file system may be degraded for a short period of time. We recommend that you create snapshots during off-peak hours.
       * *   A snapshot is a backup of a file system at a specific point in time. After you create a snapshot, incremental data that is generated in the file system will not be synchronized to the snapshot.
       * *   Manually created snapshots will not be deleted until 15 days after the service is suspended due to overdue payments. We recommend that you delete unnecessary snapshots at regular intervals to prevent extra fees incurred by the snapshots.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support the snapshot feature.
       * *   You can create a maximum of 128 snapshots for a file system.
       * *   The compute node on which a file system is mounted must function as expected. Otherwise, you cannot create a snapshot for the file system.
       * *   You can create only one snapshot for a file system at a time.
       * *   If the file system expires when a snapshot is being created, the file system is released and the snapshot is deleted.
       * *   When you create a snapshot for a file system, the I/O performance of the file system may be degraded for a short period of time. We recommend that you create snapshots during off-peak hours.
       * *   A snapshot is a backup of a file system at a specific point in time. After you create a snapshot, incremental data that is generated in the file system will not be synchronized to the snapshot.
       * *   Manually created snapshots will not be deleted until 15 days after the service is suspended due to overdue payments. We recommend that you delete unnecessary snapshots at regular intervals to prevent extra fees incurred by the snapshots.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary Delete an existing access group.
       *
       * @description The default access group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
       *
       * @param request DeleteAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessGroupResponse
       */
      Models::DeleteAccessGroupResponse deleteAccessGroupWithOptions(const Models::DeleteAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an existing access group.
       *
       * @description The default access group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
       *
       * @param request DeleteAccessGroupRequest
       * @return DeleteAccessGroupResponse
       */
      Models::DeleteAccessGroupResponse deleteAccessGroup(const Models::DeleteAccessGroupRequest &request);

      /**
       * @summary Deletes an access point.
       *
       * @description *   Only General-purpose Network File System (NFS) file systems support access points.
       * *   After an access point is deleted, all I/O operations that are being performed on the directory accessed over the access point are interrupted immediately. Exercise caution when you perform this operation.
       *
       * @param request DeleteAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessPointResponse
       */
      Models::DeleteAccessPointResponse deleteAccessPointWithOptions(const Models::DeleteAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access point.
       *
       * @description *   Only General-purpose Network File System (NFS) file systems support access points.
       * *   After an access point is deleted, all I/O operations that are being performed on the directory accessed over the access point are interrupted immediately. Exercise caution when you perform this operation.
       *
       * @param request DeleteAccessPointRequest
       * @return DeleteAccessPointResponse
       */
      Models::DeleteAccessPointResponse deleteAccessPoint(const Models::DeleteAccessPointRequest &request);

      /**
       * @summary Deletes a permission rule from a permission group.
       *
       * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
       *
       * @param request DeleteAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessRuleResponse
       */
      Models::DeleteAccessRuleResponse deleteAccessRuleWithOptions(const Models::DeleteAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a permission rule from a permission group.
       *
       * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
       *
       * @param request DeleteAccessRuleRequest
       * @return DeleteAccessRuleResponse
       */
      Models::DeleteAccessRuleResponse deleteAccessRule(const Models::DeleteAccessRuleRequest &request);

      /**
       * @summary Deletes an Agentic space.
       *
       * @description Applicable to agentic file systems.
       *
       * @param request DeleteAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgenticSpaceResponse
       */
      Models::DeleteAgenticSpaceResponse deleteAgenticSpaceWithOptions(const Models::DeleteAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Agentic space.
       *
       * @description Applicable to agentic file systems.
       *
       * @param request DeleteAgenticSpaceRequest
       * @return DeleteAgenticSpaceResponse
       */
      Models::DeleteAgenticSpaceResponse deleteAgenticSpace(const Models::DeleteAgenticSpaceRequest &request);

      /**
       * @summary Deletes an automatic snapshot policy.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support the snapshot feature.
       * *   If you delete an automatic snapshot policy that is applied to a file system, snapshots for the file system are no longer created based on the policy.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicyWithOptions(const Models::DeleteAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic snapshot policy.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support the snapshot feature.
       * *   If you delete an automatic snapshot policy that is applied to a file system, snapshots for the file system are no longer created based on the policy.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicy(const Models::DeleteAutoSnapshotPolicyRequest &request);

      /**
       * @summary 用于删除智算cpfs接入点
       *
       * @description 删除 CPFS 智算版 AccessPoint。
       *
       * @param request DeleteCpfsAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCpfsAccessPointResponse
       */
      Models::DeleteCpfsAccessPointResponse deleteCpfsAccessPointWithOptions(const Models::DeleteCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于删除智算cpfs接入点
       *
       * @description 删除 CPFS 智算版 AccessPoint。
       *
       * @param request DeleteCpfsAccessPointRequest
       * @return DeleteCpfsAccessPointResponse
       */
      Models::DeleteCpfsAccessPointResponse deleteCpfsAccessPoint(const Models::DeleteCpfsAccessPointRequest &request);

      /**
       * @summary Deletes a dataflow.
       *
       * @description - 仅CPFS 2.2.0及以上版本、智算CPFS 2.4.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持删除`Running`、`Stopped`状态的数据流动。
       * - 删除后，数据流动相关的资源会被释放，且无法恢复。如需数据流动，请您重新创建。
       *
       * @param request DeleteDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataFlowResponse
       */
      Models::DeleteDataFlowResponse deleteDataFlowWithOptions(const Models::DeleteDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataflow.
       *
       * @description - 仅CPFS 2.2.0及以上版本、智算CPFS 2.4.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持删除`Running`、`Stopped`状态的数据流动。
       * - 删除后，数据流动相关的资源会被释放，且无法恢复。如需数据流动，请您重新创建。
       *
       * @param request DeleteDataFlowRequest
       * @return DeleteDataFlowResponse
       */
      Models::DeleteDataFlowResponse deleteDataFlow(const Models::DeleteDataFlowRequest &request);

      /**
       * @summary Deletes a file system.
       *
       * @description - 仅当文件系统的挂载点数目为0时，支持删除文件系统实例。
       * - 当文件系统未创建生命周期策略时，支持删除文件系统实例。
       * - 文件系统实例一旦删除，数据将不可恢复，请谨慎操作。
       *
       * @param request DeleteFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystemWithOptions(const Models::DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file system.
       *
       * @description - 仅当文件系统的挂载点数目为0时，支持删除文件系统实例。
       * - 当文件系统未创建生命周期策略时，支持删除文件系统实例。
       * - 文件系统实例一旦删除，数据将不可恢复，请谨慎操作。
       *
       * @param request DeleteFileSystemRequest
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystem(const Models::DeleteFileSystemRequest &request);

      /**
       * @summary Deletes a fileset.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support fileset deletion. After a fileset is deleted, all data in the directory is permanently deleted and cannot be recovered. Proceed with caution.
       * - If deletion protection is enabled, disable it before you delete the fileset.
       * - All filesets on the target file system must be in the CREATED desired state before you can perform the deletion.
       * - Deleting a CPFS general-purpose fileset immediately releases disk space. Deleting a CPFS for Lingjun fileset gradually releases disk space. Deleted data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFilesetResponse
       */
      Models::DeleteFilesetResponse deleteFilesetWithOptions(const Models::DeleteFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a fileset.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support fileset deletion. After a fileset is deleted, all data in the directory is permanently deleted and cannot be recovered. Proceed with caution.
       * - If deletion protection is enabled, disable it before you delete the fileset.
       * - All filesets on the target file system must be in the CREATED desired state before you can perform the deletion.
       * - Deleting a CPFS general-purpose fileset immediately releases disk space. Deleting a CPFS for Lingjun fileset gradually releases disk space. Deleted data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteFilesetRequest
       * @return DeleteFilesetResponse
       */
      Models::DeleteFilesetResponse deleteFileset(const Models::DeleteFilesetRequest &request);

      /**
       * @deprecated OpenAPI DeleteLDAPConfig is deprecated
       *
       * @summary {"summary1":""}
       *
       * @description # 说明
       * 本接口只支持CPFS并行文件系统。
       *
       * @param request DeleteLDAPConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLDAPConfigResponse
       */
      Models::DeleteLDAPConfigResponse deleteLDAPConfigWithOptions(const Models::DeleteLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteLDAPConfig is deprecated
       *
       * @summary {"summary1":""}
       *
       * @description # 说明
       * 本接口只支持CPFS并行文件系统。
       *
       * @param request DeleteLDAPConfigRequest
       * @return DeleteLDAPConfigResponse
       */
      Models::DeleteLDAPConfigResponse deleteLDAPConfig(const Models::DeleteLDAPConfigRequest &request);

      /**
       * @summary Deletes a lifecycle policy.
       *
       * @description 仅通用型NAS文件系统和CPFS智算版支持该功能。
       *
       * @param request DeleteLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLifecyclePolicyResponse
       */
      Models::DeleteLifecyclePolicyResponse deleteLifecyclePolicyWithOptions(const Models::DeleteLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lifecycle policy.
       *
       * @description 仅通用型NAS文件系统和CPFS智算版支持该功能。
       *
       * @param request DeleteLifecyclePolicyRequest
       * @return DeleteLifecyclePolicyResponse
       */
      Models::DeleteLifecyclePolicyResponse deleteLifecyclePolicy(const Models::DeleteLifecyclePolicyRequest &request);

      /**
       * @summary Disables log dumping for a General-purpose NAS file system.
       *
       * @param request DeleteLogAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogAnalysisResponse
       */
      Models::DeleteLogAnalysisResponse deleteLogAnalysisWithOptions(const Models::DeleteLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables log dumping for a General-purpose NAS file system.
       *
       * @param request DeleteLogAnalysisRequest
       * @return DeleteLogAnalysisResponse
       */
      Models::DeleteLogAnalysisResponse deleteLogAnalysis(const Models::DeleteLogAnalysisRequest &request);

      /**
       * @summary Deletes a mount target.
       *
       * @description 删除挂载点后，无法恢复，请谨慎操作。
       *
       * @param request DeleteMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTargetWithOptions(const Models::DeleteMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a mount target.
       *
       * @description 删除挂载点后，无法恢复，请谨慎操作。
       *
       * @param request DeleteMountTargetRequest
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTarget(const Models::DeleteMountTargetRequest &request);

      /**
       * @summary Deletes an export directory of a protocol service.
       *
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request DeleteProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtocolMountTargetResponse
       */
      Models::DeleteProtocolMountTargetResponse deleteProtocolMountTargetWithOptions(const Models::DeleteProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an export directory of a protocol service.
       *
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request DeleteProtocolMountTargetRequest
       * @return DeleteProtocolMountTargetResponse
       */
      Models::DeleteProtocolMountTargetResponse deleteProtocolMountTarget(const Models::DeleteProtocolMountTargetRequest &request);

      /**
       * @summary Deletes a protocol service of a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 删除协议服务时，会同时删除协议服务中的导出目录。
       *
       * @param request DeleteProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtocolServiceResponse
       */
      Models::DeleteProtocolServiceResponse deleteProtocolServiceWithOptions(const Models::DeleteProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protocol service of a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 删除协议服务时，会同时删除协议服务中的导出目录。
       *
       * @param request DeleteProtocolServiceRequest
       * @return DeleteProtocolServiceResponse
       */
      Models::DeleteProtocolServiceResponse deleteProtocolService(const Models::DeleteProtocolServiceRequest &request);

      /**
       * @summary Deletes a specified snapshot or cancels a snapshot task that is being created.
       *
       * @description <props="china">.
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">.
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * .
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified snapshot or cancels a snapshot task that is being created.
       *
       * @description <props="china">.
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">.
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * .
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Queries permission group information.
       *
       * @param request DescribeAccessGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessGroupsResponse
       */
      Models::DescribeAccessGroupsResponse describeAccessGroupsWithOptions(const Models::DescribeAccessGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries permission group information.
       *
       * @param request DescribeAccessGroupsRequest
       * @return DescribeAccessGroupsResponse
       */
      Models::DescribeAccessGroupsResponse describeAccessGroups(const Models::DescribeAccessGroupsRequest &request);

      /**
       * @summary Queries the details of an access point.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request DescribeAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointResponse
       */
      Models::DescribeAccessPointResponse describeAccessPointWithOptions(const Models::DescribeAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access point.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request DescribeAccessPointRequest
       * @return DescribeAccessPointResponse
       */
      Models::DescribeAccessPointResponse describeAccessPoint(const Models::DescribeAccessPointRequest &request);

      /**
       * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use NAS::2017-06-26::ListAccessPoints instead.
       *
       * @summary Queries access point information.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use NAS::2017-06-26::ListAccessPoints instead.
       *
       * @summary Queries access point information.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request DescribeAccessPointsRequest
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPoints(const Models::DescribeAccessPointsRequest &request);

      /**
       * @summary Queries the information about rules in a permission group.
       *
       * @param request DescribeAccessRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessRulesResponse
       */
      Models::DescribeAccessRulesResponse describeAccessRulesWithOptions(const Models::DescribeAccessRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about rules in a permission group.
       *
       * @param request DescribeAccessRulesRequest
       * @return DescribeAccessRulesResponse
       */
      Models::DescribeAccessRulesResponse describeAccessRules(const Models::DescribeAccessRulesRequest &request);

      /**
       * @summary Queries an Agentic space.
       *
       * @description Applies to agentic-type file systems.
       *
       * @param request DescribeAgenticSpacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAgenticSpacesResponse
       */
      Models::DescribeAgenticSpacesResponse describeAgenticSpacesWithOptions(const Models::DescribeAgenticSpacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an Agentic space.
       *
       * @description Applies to agentic-type file systems.
       *
       * @param request DescribeAgenticSpacesRequest
       * @return DescribeAgenticSpacesResponse
       */
      Models::DescribeAgenticSpacesResponse describeAgenticSpaces(const Models::DescribeAgenticSpacesRequest &request);

      /**
       * @summary Queries automatic snapshot policies.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeAutoSnapshotPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotPoliciesResponse
       */
      Models::DescribeAutoSnapshotPoliciesResponse describeAutoSnapshotPoliciesWithOptions(const Models::DescribeAutoSnapshotPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries automatic snapshot policies.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeAutoSnapshotPoliciesRequest
       * @return DescribeAutoSnapshotPoliciesResponse
       */
      Models::DescribeAutoSnapshotPoliciesResponse describeAutoSnapshotPolicies(const Models::DescribeAutoSnapshotPoliciesRequest &request);

      /**
       * @summary Queries automatic snapshot tasks.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support the snapshot feature.
       *
       * @param request DescribeAutoSnapshotTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotTasksResponse
       */
      Models::DescribeAutoSnapshotTasksResponse describeAutoSnapshotTasksWithOptions(const Models::DescribeAutoSnapshotTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries automatic snapshot tasks.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support the snapshot feature.
       *
       * @param request DescribeAutoSnapshotTasksRequest
       * @return DescribeAutoSnapshotTasksResponse
       */
      Models::DescribeAutoSnapshotTasksResponse describeAutoSnapshotTasks(const Models::DescribeAutoSnapshotTasksRequest &request);

      /**
       * @deprecated OpenAPI DescribeBlackListClients is deprecated
       *
       * @summary Queries the status of clients in the blacklist of a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description The API operation is available only for CPFS file systems.
       *
       * @param request DescribeBlackListClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBlackListClientsResponse
       */
      Models::DescribeBlackListClientsResponse describeBlackListClientsWithOptions(const Models::DescribeBlackListClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeBlackListClients is deprecated
       *
       * @summary Queries the status of clients in the blacklist of a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description The API operation is available only for CPFS file systems.
       *
       * @param request DescribeBlackListClientsRequest
       * @return DescribeBlackListClientsResponse
       */
      Models::DescribeBlackListClientsResponse describeBlackListClients(const Models::DescribeBlackListClientsRequest &request);

      /**
       * @summary 用于查询智算cpfs AP 已挂载客户端列表
       *
       * @description 查询 CPFS 智算版 AccessPoint 已挂载客户端列表。
       *
       * @param request DescribeCpfsAccessPointMountedClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCpfsAccessPointMountedClientsResponse
       */
      Models::DescribeCpfsAccessPointMountedClientsResponse describeCpfsAccessPointMountedClientsWithOptions(const Models::DescribeCpfsAccessPointMountedClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于查询智算cpfs AP 已挂载客户端列表
       *
       * @description 查询 CPFS 智算版 AccessPoint 已挂载客户端列表。
       *
       * @param request DescribeCpfsAccessPointMountedClientsRequest
       * @return DescribeCpfsAccessPointMountedClientsResponse
       */
      Models::DescribeCpfsAccessPointMountedClientsResponse describeCpfsAccessPointMountedClients(const Models::DescribeCpfsAccessPointMountedClientsRequest &request);

      /**
       * @summary 用于查询指定文件系统下的智算CPFS接入点信息
       *
       * @description 查询 CPFS 智算版 AccessPoint。
       *
       * @param request DescribeCpfsAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCpfsAccessPointsResponse
       */
      Models::DescribeCpfsAccessPointsResponse describeCpfsAccessPointsWithOptions(const Models::DescribeCpfsAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于查询指定文件系统下的智算CPFS接入点信息
       *
       * @description 查询 CPFS 智算版 AccessPoint。
       *
       * @param request DescribeCpfsAccessPointsRequest
       * @return DescribeCpfsAccessPointsResponse
       */
      Models::DescribeCpfsAccessPointsResponse describeCpfsAccessPoints(const Models::DescribeCpfsAccessPointsRequest &request);

      /**
       * @summary Queries data flow subtasks in batches.
       *
       * @description 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
       *
       * @param request DescribeDataFlowSubTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowSubTasksResponse
       */
      Models::DescribeDataFlowSubTasksResponse describeDataFlowSubTasksWithOptions(const Models::DescribeDataFlowSubTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data flow subtasks in batches.
       *
       * @description 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
       *
       * @param request DescribeDataFlowSubTasksRequest
       * @return DescribeDataFlowSubTasksResponse
       */
      Models::DescribeDataFlowSubTasksResponse describeDataFlowSubTasks(const Models::DescribeDataFlowSubTasksRequest &request);

      /**
       * @summary Retrieves data flow task details.
       *
       * @description Querying data flow tasks is supported only on CPFS 2.2.0 or later and CPFS AI Computing Edition 2.4.0 or later. You can find the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowTasksResponse
       */
      Models::DescribeDataFlowTasksResponse describeDataFlowTasksWithOptions(const Models::DescribeDataFlowTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves data flow task details.
       *
       * @description Querying data flow tasks is supported only on CPFS 2.2.0 or later and CPFS AI Computing Edition 2.4.0 or later. You can find the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowTasksRequest
       * @return DescribeDataFlowTasksResponse
       */
      Models::DescribeDataFlowTasksResponse describeDataFlowTasks(const Models::DescribeDataFlowTasksRequest &request);

      /**
       * @summary Queries the dataflows of a CPFS file system.
       *
       * @description - 仅CPFS 2.2.0及以上版本、CPFS智算版2.4.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 筛选键（Filters）中，FsetIds、DataFlowlds、SourceStorage、ThroughputList、Status需要做全字匹配，FileSystemPath、Description、SourceStoragePath支持模糊匹配。
       * - 支持组合查询。
       *
       * @param request DescribeDataFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowsResponse
       */
      Models::DescribeDataFlowsResponse describeDataFlowsWithOptions(const Models::DescribeDataFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dataflows of a CPFS file system.
       *
       * @description - 仅CPFS 2.2.0及以上版本、CPFS智算版2.4.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 筛选键（Filters）中，FsetIds、DataFlowlds、SourceStorage、ThroughputList、Status需要做全字匹配，FileSystemPath、Description、SourceStoragePath支持模糊匹配。
       * - 支持组合查询。
       *
       * @param request DescribeDataFlowsRequest
       * @return DescribeDataFlowsResponse
       */
      Models::DescribeDataFlowsResponse describeDataFlows(const Models::DescribeDataFlowsRequest &request);

      /**
       * @summary Queries the directory quotas of a file system.
       *
       * @description Only General-purpose NAS file systems support the directory quota feature.
       *
       * @param request DescribeDirQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirQuotasResponse
       */
      Models::DescribeDirQuotasResponse describeDirQuotasWithOptions(const Models::DescribeDirQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the directory quotas of a file system.
       *
       * @description Only General-purpose NAS file systems support the directory quota feature.
       *
       * @param request DescribeDirQuotasRequest
       * @return DescribeDirQuotasResponse
       */
      Models::DescribeDirQuotasResponse describeDirQuotas(const Models::DescribeDirQuotasRequest &request);

      /**
       * @deprecated OpenAPI DescribeFileSystemStatistics is deprecated, please use NAS::2017-06-26::DescribeResourceStatistics instead.
       *
       * @summary Queries the statistics of file systems that are owned by the current account.
       *
       * @param request DescribeFileSystemStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileSystemStatisticsResponse
       */
      Models::DescribeFileSystemStatisticsResponse describeFileSystemStatisticsWithOptions(const Models::DescribeFileSystemStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeFileSystemStatistics is deprecated, please use NAS::2017-06-26::DescribeResourceStatistics instead.
       *
       * @summary Queries the statistics of file systems that are owned by the current account.
       *
       * @param request DescribeFileSystemStatisticsRequest
       * @return DescribeFileSystemStatisticsResponse
       */
      Models::DescribeFileSystemStatisticsResponse describeFileSystemStatistics(const Models::DescribeFileSystemStatisticsRequest &request);

      /**
       * @summary Queries file system information.
       *
       * @param request DescribeFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystemsWithOptions(const Models::DescribeFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries file system information.
       *
       * @param request DescribeFileSystemsRequest
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystems(const Models::DescribeFileSystemsRequest &request);

      /**
       * @summary Queries the list of created filesets.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support filesets. You can view the version information on the file system details page in the console.
       * - In the filter keys (Filters), FsetIds requires an exact match, while FileSystemPath and Description support fuzzy match.
       * - Combination queries are supported.
       *
       * @param request DescribeFilesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesetsResponse
       */
      Models::DescribeFilesetsResponse describeFilesetsWithOptions(const Models::DescribeFilesetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of created filesets.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support filesets. You can view the version information on the file system details page in the console.
       * - In the filter keys (Filters), FsetIds requires an exact match, while FileSystemPath and Description support fuzzy match.
       * - Combination queries are supported.
       *
       * @param request DescribeFilesetsRequest
       * @return DescribeFilesetsResponse
       */
      Models::DescribeFilesetsResponse describeFilesets(const Models::DescribeFilesetsRequest &request);

      /**
       * @summary Retrieves the list of HpnZones for a file system. Access performance is optimal when compute nodes are located in one of the associated HpnZones.
       *
       * @description - 仅支持CPFS智算版文件系统。
       * - 此接口为批量接口，每次最多允许查询 20 个文件系统。
       *
       * @param tmpReq DescribeFilesystemsAssociatedHpnZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesystemsAssociatedHpnZonesResponse
       */
      Models::DescribeFilesystemsAssociatedHpnZonesResponse describeFilesystemsAssociatedHpnZonesWithOptions(const Models::DescribeFilesystemsAssociatedHpnZonesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of HpnZones for a file system. Access performance is optimal when compute nodes are located in one of the associated HpnZones.
       *
       * @description - 仅支持CPFS智算版文件系统。
       * - 此接口为批量接口，每次最多允许查询 20 个文件系统。
       *
       * @param request DescribeFilesystemsAssociatedHpnZonesRequest
       * @return DescribeFilesystemsAssociatedHpnZonesResponse
       */
      Models::DescribeFilesystemsAssociatedHpnZonesResponse describeFilesystemsAssociatedHpnZones(const Models::DescribeFilesystemsAssociatedHpnZonesRequest &request);

      /**
       * @summary Queries the virtual storage channel information associated with a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch execution is supported. In batch execution mode, only one VscId can be associated with multiple FileSystemIds, which means the values of ResourceIds.VscId must be the same.
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfoWithOptions(const Models::DescribeFilesystemsVscAttachInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual storage channel information associated with a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch execution is supported. In batch execution mode, only one VscId can be associated with multiple FileSystemIds, which means the values of ResourceIds.VscId must be the same.
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfo(const Models::DescribeFilesystemsVscAttachInfoRequest &request);

      /**
       * @summary Retrieves a list of lifecycle management policies.
       *
       * @description Only General-purpose NAS file systems and CPFS for Lingjun support this feature.
       *
       * @param request DescribeLifecyclePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecyclePoliciesResponse
       */
      Models::DescribeLifecyclePoliciesResponse describeLifecyclePoliciesWithOptions(const Models::DescribeLifecyclePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of lifecycle management policies.
       *
       * @description Only General-purpose NAS file systems and CPFS for Lingjun support this feature.
       *
       * @param request DescribeLifecyclePoliciesRequest
       * @return DescribeLifecyclePoliciesResponse
       */
      Models::DescribeLifecyclePoliciesResponse describeLifecyclePolicies(const Models::DescribeLifecyclePoliciesRequest &request);

      /**
       * @summary Queries the execution logs of a lifecycle policy, returning up to 1,000 entries from the last 90 days. This feature is only available for CPFS AI Computing Edition.
       *
       * @description Queries the execution logs of a lifecycle policy. You can query up to 1,000 log entries from the last 90 days. Only CPFS (AI Computing Edition) supports this operation.
       *
       * @param request DescribeLifecyclePolicyLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecyclePolicyLogsResponse
       */
      Models::DescribeLifecyclePolicyLogsResponse describeLifecyclePolicyLogsWithOptions(const Models::DescribeLifecyclePolicyLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution logs of a lifecycle policy, returning up to 1,000 entries from the last 90 days. This feature is only available for CPFS AI Computing Edition.
       *
       * @description Queries the execution logs of a lifecycle policy. You can query up to 1,000 log entries from the last 90 days. Only CPFS (AI Computing Edition) supports this operation.
       *
       * @param request DescribeLifecyclePolicyLogsRequest
       * @return DescribeLifecyclePolicyLogsResponse
       */
      Models::DescribeLifecyclePolicyLogsResponse describeLifecyclePolicyLogs(const Models::DescribeLifecyclePolicyLogsRequest &request);

      /**
       * @summary Lists the log analysis configurations in log analysis.
       *
       * @param request DescribeLogAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogAnalysisResponse
       */
      Models::DescribeLogAnalysisResponse describeLogAnalysisWithOptions(const Models::DescribeLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the log analysis configurations in log analysis.
       *
       * @param request DescribeLogAnalysisRequest
       * @return DescribeLogAnalysisResponse
       */
      Models::DescribeLogAnalysisResponse describeLogAnalysis(const Models::DescribeLogAnalysisRequest &request);

      /**
       * @summary Queries mount target information.
       *
       * @param request DescribeMountTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargetsWithOptions(const Models::DescribeMountTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries mount target information.
       *
       * @param request DescribeMountTargetsRequest
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargets(const Models::DescribeMountTargetsRequest &request);

      /**
       * @summary Queries the clients on which a file system is mounted.
       *
       * @description - 仅通用型NAS支持该接口。
       * - 客户端列表显示近一分钟对文件系统有读写访问的客户端IP，部分已挂载而没有访问文件系统的客户端IP可能不在此列表中显示。
       *
       * @param request DescribeMountedClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountedClientsResponse
       */
      Models::DescribeMountedClientsResponse describeMountedClientsWithOptions(const Models::DescribeMountedClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the clients on which a file system is mounted.
       *
       * @description - 仅通用型NAS支持该接口。
       * - 客户端列表显示近一分钟对文件系统有读写访问的客户端IP，部分已挂载而没有访问文件系统的客户端IP可能不在此列表中显示。
       *
       * @param request DescribeMountedClientsRequest
       * @return DescribeMountedClientsResponse
       */
      Models::DescribeMountedClientsResponse describeMountedClients(const Models::DescribeMountedClientsRequest &request);

      /**
       * @summary Queries whether the NFS ACL feature is enabled for a file system.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request DescribeNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNfsAclResponse
       */
      Models::DescribeNfsAclResponse describeNfsAclWithOptions(const Models::DescribeNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the NFS ACL feature is enabled for a file system.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request DescribeNfsAclRequest
       * @return DescribeNfsAclResponse
       */
      Models::DescribeNfsAclResponse describeNfsAcl(const Models::DescribeNfsAclRequest &request);

      /**
       * @summary Queries the export directories of a protocol service.
       *
       * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTargetWithOptions(const Models::DescribeProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export directories of a protocol service.
       *
       * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolMountTargetRequest
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTarget(const Models::DescribeProtocolMountTargetRequest &request);

      /**
       * @summary Queries the information about protocol services.
       *
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request DescribeProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolServiceResponse
       */
      Models::DescribeProtocolServiceResponse describeProtocolServiceWithOptions(const Models::DescribeProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about protocol services.
       *
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request DescribeProtocolServiceRequest
       * @return DescribeProtocolServiceResponse
       */
      Models::DescribeProtocolServiceResponse describeProtocolService(const Models::DescribeProtocolServiceRequest &request);

      /**
       * @summary Queries the available Alibaba Cloud regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available Alibaba Cloud regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the information about the access control list (ACL) feature of a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
       *
       * @param request DescribeSmbAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmbAclResponse
       */
      Models::DescribeSmbAclResponse describeSmbAclWithOptions(const Models::DescribeSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the access control list (ACL) feature of a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
       *
       * @param request DescribeSmbAclRequest
       * @return DescribeSmbAclResponse
       */
      Models::DescribeSmbAclResponse describeSmbAcl(const Models::DescribeSmbAclRequest &request);

      /**
       * @summary Queries information about one or more snapshots of a specified file system.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * -   Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more snapshots of a specified file system.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * -   Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeSnapshotsRequest
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshots(const Models::DescribeSnapshotsRequest &request);

      /**
       * @summary You can call the DescribeStoragePackages operation to query the list of storage plans.
       *
       * @param request DescribeStoragePackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStoragePackagesResponse
       */
      Models::DescribeStoragePackagesResponse describeStoragePackagesWithOptions(const Models::DescribeStoragePackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeStoragePackages operation to query the list of storage plans.
       *
       * @param request DescribeStoragePackagesRequest
       * @return DescribeStoragePackagesResponse
       */
      Models::DescribeStoragePackagesResponse describeStoragePackages(const Models::DescribeStoragePackagesRequest &request);

      /**
       * @summary Queries all zones in a region and the file system types that are supported in each zone.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all zones in a region and the file system types that are supported in each zone.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Dissociates a VSC device from a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be the same.
       *
       * @param request DetachVscFromFilesystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachVscFromFilesystemsResponse
       */
      Models::DetachVscFromFilesystemsResponse detachVscFromFilesystemsWithOptions(const Models::DetachVscFromFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a VSC device from a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be the same.
       *
       * @param request DetachVscFromFilesystemsRequest
       * @return DetachVscFromFilesystemsResponse
       */
      Models::DetachVscFromFilesystemsResponse detachVscFromFilesystems(const Models::DetachVscFromFilesystemsRequest &request);

      /**
       * @summary Disables and empties the recycle bin of a General-purpose NAS file system.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   If you disable the recycle bin, all files in the recycle bin are permanently deleted.
       * *   If you disable and then enable the recycle bin, the recycle bin is empty. You cannot retrieve the deleted files.
       *
       * @param request DisableAndCleanRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAndCleanRecycleBinResponse
       */
      Models::DisableAndCleanRecycleBinResponse disableAndCleanRecycleBinWithOptions(const Models::DisableAndCleanRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables and empties the recycle bin of a General-purpose NAS file system.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   If you disable the recycle bin, all files in the recycle bin are permanently deleted.
       * *   If you disable and then enable the recycle bin, the recycle bin is empty. You cannot retrieve the deleted files.
       *
       * @param request DisableAndCleanRecycleBinRequest
       * @return DisableAndCleanRecycleBinResponse
       */
      Models::DisableAndCleanRecycleBinResponse disableAndCleanRecycleBin(const Models::DisableAndCleanRecycleBinRequest &request);

      /**
       * @summary Disables the NFS ACL feature for a file system.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request DisableNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableNfsAclResponse
       */
      Models::DisableNfsAclResponse disableNfsAclWithOptions(const Models::DisableNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the NFS ACL feature for a file system.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request DisableNfsAclRequest
       * @return DisableNfsAclResponse
       */
      Models::DisableNfsAclResponse disableNfsAcl(const Models::DisableNfsAclRequest &request);

      /**
       * @summary Disables the access control list (ACL) feature for a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
       *
       * @param request DisableSmbAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSmbAclResponse
       */
      Models::DisableSmbAclResponse disableSmbAclWithOptions(const Models::DisableSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the access control list (ACL) feature for a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
       *
       * @param request DisableSmbAclRequest
       * @return DisableSmbAclResponse
       */
      Models::DisableSmbAclResponse disableSmbAcl(const Models::DisableSmbAclRequest &request);

      /**
       * @summary Enables the NFS ACL feature for a file system.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request EnableNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableNfsAclResponse
       */
      Models::EnableNfsAclResponse enableNfsAclWithOptions(const Models::EnableNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the NFS ACL feature for a file system.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request EnableNfsAclRequest
       * @return EnableNfsAclResponse
       */
      Models::EnableNfsAclResponse enableNfsAcl(const Models::EnableNfsAclRequest &request);

      /**
       * @summary Enables the recycle bin feature for a file system.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request EnableRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableRecycleBinResponse
       */
      Models::EnableRecycleBinResponse enableRecycleBinWithOptions(const Models::EnableRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the recycle bin feature for a file system.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request EnableRecycleBinRequest
       * @return EnableRecycleBinResponse
       */
      Models::EnableRecycleBinResponse enableRecycleBin(const Models::EnableRecycleBinRequest &request);

      /**
       * @summary Enables the access control list (ACL) feature for a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
       *
       * @param request EnableSmbAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSmbAclResponse
       */
      Models::EnableSmbAclResponse enableSmbAclWithOptions(const Models::EnableSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the access control list (ACL) feature for a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
       *
       * @param request EnableSmbAclRequest
       * @return EnableSmbAclResponse
       */
      Models::EnableSmbAclResponse enableSmbAcl(const Models::EnableSmbAclRequest &request);

      /**
       * @summary Queries an Agentic space.
       *
       * @description Applicable to agentic-type file systems.
       *
       * @param request GetAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgenticSpaceResponse
       */
      Models::GetAgenticSpaceResponse getAgenticSpaceWithOptions(const Models::GetAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an Agentic space.
       *
       * @description Applicable to agentic-type file systems.
       *
       * @param request GetAgenticSpaceRequest
       * @return GetAgenticSpaceResponse
       */
      Models::GetAgenticSpaceResponse getAgenticSpace(const Models::GetAgenticSpaceRequest &request);

      /**
       * @summary Checks if a specified directory contains infrequent access or archive storage files, or if a specified file is an infrequent access or archive storage file.
       *
       * @description This operation is available only for general-purpose NAS file systems.
       *
       * @param request GetDirectoryOrFilePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectoryOrFilePropertiesResponse
       */
      Models::GetDirectoryOrFilePropertiesResponse getDirectoryOrFilePropertiesWithOptions(const Models::GetDirectoryOrFilePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks if a specified directory contains infrequent access or archive storage files, or if a specified file is an infrequent access or archive storage file.
       *
       * @description This operation is available only for general-purpose NAS file systems.
       *
       * @param request GetDirectoryOrFilePropertiesRequest
       * @return GetDirectoryOrFilePropertiesResponse
       */
      Models::GetDirectoryOrFilePropertiesResponse getDirectoryOrFileProperties(const Models::GetDirectoryOrFilePropertiesRequest &request);

      /**
       * @summary Queries the information about the created fileset.
       *
       * @description 仅CPFS 2.2.0和CPFS智算版2.7.0及以上版本支持Fileset。您可以在控制台文件系统详情页面查看版本信息。
       *
       * @param request GetFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFilesetResponse
       */
      Models::GetFilesetResponse getFilesetWithOptions(const Models::GetFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the created fileset.
       *
       * @description 仅CPFS 2.2.0和CPFS智算版2.7.0及以上版本支持Fileset。您可以在控制台文件系统详情页面查看版本信息。
       *
       * @param request GetFilesetRequest
       * @return GetFilesetResponse
       */
      Models::GetFilesetResponse getFileset(const Models::GetFilesetRequest &request);

      /**
       * @summary Query the export directory information of the protocol service
       *
       * @param request GetProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProtocolMountTargetResponse
       */
      Models::GetProtocolMountTargetResponse getProtocolMountTargetWithOptions(const Models::GetProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the export directory information of the protocol service
       *
       * @param request GetProtocolMountTargetRequest
       * @return GetProtocolMountTargetResponse
       */
      Models::GetProtocolMountTargetResponse getProtocolMountTarget(const Models::GetProtocolMountTargetRequest &request);

      /**
       * @summary Queries the recycle bin configuration of a specified General-purpose NAS file system.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request GetRecycleBinAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecycleBinAttributeResponse
       */
      Models::GetRecycleBinAttributeResponse getRecycleBinAttributeWithOptions(const Models::GetRecycleBinAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recycle bin configuration of a specified General-purpose NAS file system.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request GetRecycleBinAttributeRequest
       * @return GetRecycleBinAttributeResponse
       */
      Models::GetRecycleBinAttributeResponse getRecycleBinAttribute(const Models::GetRecycleBinAttributeRequest &request);

      /**
       * @summary 查询接入点信息
       *
       * @description 仅通用型 NAS NFS 协议文件系统支持。
       *
       * @param request ListAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessPointsResponse
       */
      Models::ListAccessPointsResponse listAccessPointsWithOptions(const Models::ListAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入点信息
       *
       * @description 仅通用型 NAS NFS 协议文件系统支持。
       *
       * @param request ListAccessPointsRequest
       * @return ListAccessPointsResponse
       */
      Models::ListAccessPointsResponse listAccessPoints(const Models::ListAccessPointsRequest &request);

      /**
       * @summary Lists Infrequent Access files and the subdirectories that contain them from a specified directory on a General-purpose NAS file system.
       *
       * @description Only general-purpose NAS file systems support this feature.
       *
       * @param request ListDirectoriesAndFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDirectoriesAndFilesResponse
       */
      Models::ListDirectoriesAndFilesResponse listDirectoriesAndFilesWithOptions(const Models::ListDirectoriesAndFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Infrequent Access files and the subdirectories that contain them from a specified directory on a General-purpose NAS file system.
       *
       * @description Only general-purpose NAS file systems support this feature.
       *
       * @param request ListDirectoriesAndFilesRequest
       * @return ListDirectoriesAndFilesResponse
       */
      Models::ListDirectoriesAndFilesResponse listDirectoriesAndFiles(const Models::ListDirectoriesAndFilesRequest &request);

      /**
       * @summary Queries data retrieval tasks.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ListLifecycleRetrieveJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLifecycleRetrieveJobsResponse
       */
      Models::ListLifecycleRetrieveJobsResponse listLifecycleRetrieveJobsWithOptions(const Models::ListLifecycleRetrieveJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data retrieval tasks.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ListLifecycleRetrieveJobsRequest
       * @return ListLifecycleRetrieveJobsResponse
       */
      Models::ListLifecycleRetrieveJobsResponse listLifecycleRetrieveJobs(const Models::ListLifecycleRetrieveJobsRequest &request);

      /**
       * @summary Queries the directories that are recently deleted.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ListRecentlyRecycledDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecentlyRecycledDirectoriesResponse
       */
      Models::ListRecentlyRecycledDirectoriesResponse listRecentlyRecycledDirectoriesWithOptions(const Models::ListRecentlyRecycledDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the directories that are recently deleted.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ListRecentlyRecycledDirectoriesRequest
       * @return ListRecentlyRecycledDirectoriesResponse
       */
      Models::ListRecentlyRecycledDirectoriesResponse listRecentlyRecycledDirectories(const Models::ListRecentlyRecycledDirectoriesRequest &request);

      /**
       * @summary Queries the jobs of the recycle bin.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   You can query a maximum of 50 jobs that are recently executed.
       *
       * @param request ListRecycleBinJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecycleBinJobsResponse
       */
      Models::ListRecycleBinJobsResponse listRecycleBinJobsWithOptions(const Models::ListRecycleBinJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the jobs of the recycle bin.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   You can query a maximum of 50 jobs that are recently executed.
       *
       * @param request ListRecycleBinJobsRequest
       * @return ListRecycleBinJobsResponse
       */
      Models::ListRecycleBinJobsResponse listRecycleBinJobs(const Models::ListRecycleBinJobsRequest &request);

      /**
       * @summary Queries deleted files or directories.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ListRecycledDirectoriesAndFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecycledDirectoriesAndFilesResponse
       */
      Models::ListRecycledDirectoriesAndFilesResponse listRecycledDirectoriesAndFilesWithOptions(const Models::ListRecycledDirectoriesAndFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries deleted files or directories.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ListRecycledDirectoriesAndFilesRequest
       * @return ListRecycledDirectoriesAndFilesResponse
       */
      Models::ListRecycledDirectoriesAndFilesResponse listRecycledDirectoriesAndFiles(const Models::ListRecycledDirectoriesAndFilesRequest &request);

      /**
       * @summary Queries tags.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies a permission group.
       *
       * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）不支持修改。
       *
       * @param request ModifyAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessGroupResponse
       */
      Models::ModifyAccessGroupResponse modifyAccessGroupWithOptions(const Models::ModifyAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a permission group.
       *
       * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）不支持修改。
       *
       * @param request ModifyAccessGroupRequest
       * @return ModifyAccessGroupResponse
       */
      Models::ModifyAccessGroupResponse modifyAccessGroup(const Models::ModifyAccessGroupRequest &request);

      /**
       * @summary Modifies access point information.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request ModifyAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessPointResponse
       */
      Models::ModifyAccessPointResponse modifyAccessPointWithOptions(const Models::ModifyAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies access point information.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request ModifyAccessPointRequest
       * @return ModifyAccessPointResponse
       */
      Models::ModifyAccessPointResponse modifyAccessPoint(const Models::ModifyAccessPointRequest &request);

      /**
       * @summary Modifies a rule in a permission group.
       *
       * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）中的规则不支持修改。
       *
       * @param request ModifyAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessRuleResponse
       */
      Models::ModifyAccessRuleResponse modifyAccessRuleWithOptions(const Models::ModifyAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a rule in a permission group.
       *
       * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）中的规则不支持修改。
       *
       * @param request ModifyAccessRuleRequest
       * @return ModifyAccessRuleResponse
       */
      Models::ModifyAccessRuleResponse modifyAccessRule(const Models::ModifyAccessRuleRequest &request);

      /**
       * @summary Modifies an Agentic space.
       *
       * @description Applicable to agentic file systems.
       *
       * @param request ModifyAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAgenticSpaceResponse
       */
      Models::ModifyAgenticSpaceResponse modifyAgenticSpaceWithOptions(const Models::ModifyAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Agentic space.
       *
       * @description Applicable to agentic file systems.
       *
       * @param request ModifyAgenticSpaceRequest
       * @return ModifyAgenticSpaceResponse
       */
      Models::ModifyAgenticSpaceResponse modifyAgenticSpace(const Models::ModifyAgenticSpaceRequest &request);

      /**
       * @summary An automatic snapshot policy is modified. After you modify an automatic snapshot policy that is applied to a file system, the modification immediately applies to subsequent snapshots that are created for the file system.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request ModifyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoSnapshotPolicyResponse
       */
      Models::ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicyWithOptions(const Models::ModifyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An automatic snapshot policy is modified. After you modify an automatic snapshot policy that is applied to a file system, the modification immediately applies to subsequent snapshots that are created for the file system.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request ModifyAutoSnapshotPolicyRequest
       * @return ModifyAutoSnapshotPolicyResponse
       */
      Models::ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicy(const Models::ModifyAutoSnapshotPolicyRequest &request);

      /**
       * @summary 用于智算cpfs修改接入点
       *
       * @description 修改 CPFS 智算版 AccessPoint。
       *
       * @param request ModifyCpfsAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCpfsAccessPointResponse
       */
      Models::ModifyCpfsAccessPointResponse modifyCpfsAccessPointWithOptions(const Models::ModifyCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于智算cpfs修改接入点
       *
       * @description 修改 CPFS 智算版 AccessPoint。
       *
       * @param request ModifyCpfsAccessPointRequest
       * @return ModifyCpfsAccessPointResponse
       */
      Models::ModifyCpfsAccessPointResponse modifyCpfsAccessPoint(const Models::ModifyCpfsAccessPointRequest &request);

      /**
       * @summary Modifies the attributes of a data flow.
       *
       * @description - CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows.
       * - You can modify the properties of a data flow only when the data flow is in the `Running (Normal)` state.
       * - Modifying a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data flow modification.
       * - CPFS data flow specifications:
       *     - Data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow bandwidth refers to the maximum transmission bandwidth that can be achieved when the data flow imports or exports data.
       *     - Inventory check: When DryRun is set to true, you can verify whether the resources required to modify the data flow with the specified specifications are sufficient.
       * - CPFS billing
       *   Modifying the data flow bandwidth (Throughput) involves data flow bandwidth billing. Familiarize yourself with the billable methods of CPFS in advance. For more details, see [CPFS billing](https://help.aliyun.com/document_detail/111858.html).
       *   Settings for the data stream property can affect billing.
       *
       * @param request ModifyDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataFlowResponse
       */
      Models::ModifyDataFlowResponse modifyDataFlowWithOptions(const Models::ModifyDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a data flow.
       *
       * @description - CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows.
       * - You can modify the properties of a data flow only when the data flow is in the `Running (Normal)` state.
       * - Modifying a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data flow modification.
       * - CPFS data flow specifications:
       *     - Data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow bandwidth refers to the maximum transmission bandwidth that can be achieved when the data flow imports or exports data.
       *     - Inventory check: When DryRun is set to true, you can verify whether the resources required to modify the data flow with the specified specifications are sufficient.
       * - CPFS billing
       *   Modifying the data flow bandwidth (Throughput) involves data flow bandwidth billing. Familiarize yourself with the billable methods of CPFS in advance. For more details, see [CPFS billing](https://help.aliyun.com/document_detail/111858.html).
       *   Settings for the data stream property can affect billing.
       *
       * @param request ModifyDataFlowRequest
       * @return ModifyDataFlowResponse
       */
      Models::ModifyDataFlowResponse modifyDataFlow(const Models::ModifyDataFlowRequest &request);

      /**
       * @summary Modifies an AutoRefresh configuration of a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持修改`Running（正常`）、`Stopped（停止）`状态数据流动的自动更新配置。
       * - 修改自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询修改自动更新任务的状态。
       *
       * @param request ModifyDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataFlowAutoRefreshResponse
       */
      Models::ModifyDataFlowAutoRefreshResponse modifyDataFlowAutoRefreshWithOptions(const Models::ModifyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an AutoRefresh configuration of a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持修改`Running（正常`）、`Stopped（停止）`状态数据流动的自动更新配置。
       * - 修改自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询修改自动更新任务的状态。
       *
       * @param request ModifyDataFlowAutoRefreshRequest
       * @return ModifyDataFlowAutoRefreshResponse
       */
      Models::ModifyDataFlowAutoRefreshResponse modifyDataFlowAutoRefresh(const Models::ModifyDataFlowAutoRefreshRequest &request);

      /**
       * @summary Modifies the description of a file system.
       *
       * @param tmpReq ModifyFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFileSystemResponse
       */
      Models::ModifyFileSystemResponse modifyFileSystemWithOptions(const Models::ModifyFileSystemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a file system.
       *
       * @param request ModifyFileSystemRequest
       * @return ModifyFileSystemResponse
       */
      Models::ModifyFileSystemResponse modifyFileSystem(const Models::ModifyFileSystemRequest &request);

      /**
       * @summary Modifies a fileset.
       *
       * @description 仅支持CPFS 2.2.0和CPFS智算版2.7.0及以上版本修改Fileset信息。
       *
       * @param request ModifyFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFilesetResponse
       */
      Models::ModifyFilesetResponse modifyFilesetWithOptions(const Models::ModifyFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a fileset.
       *
       * @description 仅支持CPFS 2.2.0和CPFS智算版2.7.0及以上版本修改Fileset信息。
       *
       * @param request ModifyFilesetRequest
       * @return ModifyFilesetResponse
       */
      Models::ModifyFilesetResponse modifyFileset(const Models::ModifyFilesetRequest &request);

      /**
       * @deprecated OpenAPI ModifyLDAPConfig is deprecated
       *
       * @summary Used to modify LDAP configuration.
       *
       * @description The API operation is available only for Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request ModifyLDAPConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLDAPConfigResponse
       */
      Models::ModifyLDAPConfigResponse modifyLDAPConfigWithOptions(const Models::ModifyLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyLDAPConfig is deprecated
       *
       * @summary Used to modify LDAP configuration.
       *
       * @description The API operation is available only for Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request ModifyLDAPConfigRequest
       * @return ModifyLDAPConfigResponse
       */
      Models::ModifyLDAPConfigResponse modifyLDAPConfig(const Models::ModifyLDAPConfigRequest &request);

      /**
       * @summary Modifies a lifecycle policy.
       *
       * @description 仅通用型NAS文件系统支持该功能。
       *
       * @param request ModifyLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLifecyclePolicyResponse
       */
      Models::ModifyLifecyclePolicyResponse modifyLifecyclePolicyWithOptions(const Models::ModifyLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a lifecycle policy.
       *
       * @description 仅通用型NAS文件系统支持该功能。
       *
       * @param request ModifyLifecyclePolicyRequest
       * @return ModifyLifecyclePolicyResponse
       */
      Models::ModifyLifecyclePolicyResponse modifyLifecyclePolicy(const Models::ModifyLifecyclePolicyRequest &request);

      /**
       * @summary Modifies the properties of a mount target.
       *
       * @description This operation applies only to mount targets on General-purpose NAS and Extreme NAS file systems.
       *
       * @param request ModifyMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMountTargetResponse
       */
      Models::ModifyMountTargetResponse modifyMountTargetWithOptions(const Models::ModifyMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the properties of a mount target.
       *
       * @description This operation applies only to mount targets on General-purpose NAS and Extreme NAS file systems.
       *
       * @param request ModifyMountTargetRequest
       * @return ModifyMountTargetResponse
       */
      Models::ModifyMountTargetResponse modifyMountTarget(const Models::ModifyMountTargetRequest &request);

      /**
       * @summary Modifies the export directory parameters of a protocol service. Only the description can be modified. The virtual private cloud (VPC) ID and vSwitch ID cannot be changed. To change these IDs, you must delete the export directory and create a new one.
       *
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request ModifyProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProtocolMountTargetResponse
       */
      Models::ModifyProtocolMountTargetResponse modifyProtocolMountTargetWithOptions(const Models::ModifyProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the export directory parameters of a protocol service. Only the description can be modified. The virtual private cloud (VPC) ID and vSwitch ID cannot be changed. To change these IDs, you must delete the export directory and create a new one.
       *
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request ModifyProtocolMountTargetRequest
       * @return ModifyProtocolMountTargetResponse
       */
      Models::ModifyProtocolMountTargetResponse modifyProtocolMountTarget(const Models::ModifyProtocolMountTargetRequest &request);

      /**
       * @summary Modifies a protocol service. You can modify the description of a protocol service.
       *
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request ModifyProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProtocolServiceResponse
       */
      Models::ModifyProtocolServiceResponse modifyProtocolServiceWithOptions(const Models::ModifyProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a protocol service. You can modify the description of a protocol service.
       *
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request ModifyProtocolServiceRequest
       * @return ModifyProtocolServiceResponse
       */
      Models::ModifyProtocolServiceResponse modifyProtocolService(const Models::ModifyProtocolServiceRequest &request);

      /**
       * @summary Updates the information about the access control list (ACL) feature of a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
       *
       * @param request ModifySmbAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmbAclResponse
       */
      Models::ModifySmbAclResponse modifySmbAclWithOptions(const Models::ModifySmbAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about the access control list (ACL) feature of a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
       *
       * @param request ModifySmbAclRequest
       * @return ModifySmbAclResponse
       */
      Models::ModifySmbAclResponse modifySmbAcl(const Models::ModifySmbAclRequest &request);

      /**
       * @summary Activates the NAS service.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenNASServiceResponse
       */
      Models::OpenNASServiceResponse openNASServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the NAS service.
       *
       * @return OpenNASServiceResponse
       */
      Models::OpenNASServiceResponse openNASService();

      /**
       * @deprecated OpenAPI RemoveClientFromBlackList is deprecated
       *
       * @summary Remove the client from the blacklist.
       *
       * @description The API operation is available only for CPFS file systems.
       *
       * @param request RemoveClientFromBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveClientFromBlackListResponse
       */
      Models::RemoveClientFromBlackListResponse removeClientFromBlackListWithOptions(const Models::RemoveClientFromBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveClientFromBlackList is deprecated
       *
       * @summary Remove the client from the blacklist.
       *
       * @description The API operation is available only for CPFS file systems.
       *
       * @param request RemoveClientFromBlackListRequest
       * @return RemoveClientFromBlackListResponse
       */
      Models::RemoveClientFromBlackListResponse removeClientFromBlackList(const Models::RemoveClientFromBlackListRequest &request);

      /**
       * @summary Rolls back a file system to a snapshot of the file system.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       * *   The file system must be in the Running state.
       * *   To roll back a file system to a snapshot, you must specify the ID of the snapshot that is created from the file system.
       *
       * @param request ResetFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetFileSystemResponse
       */
      Models::ResetFileSystemResponse resetFileSystemWithOptions(const Models::ResetFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a file system to a snapshot of the file system.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       * *   The file system must be in the Running state.
       * *   To roll back a file system to a snapshot, you must specify the ID of the snapshot that is created from the file system.
       *
       * @param request ResetFileSystemRequest
       * @return ResetFileSystemResponse
       */
      Models::ResetFileSystemResponse resetFileSystem(const Models::ResetFileSystemRequest &request);

      /**
       * @summary Retries failed a data retrieval task.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request RetryLifecycleRetrieveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryLifecycleRetrieveJobResponse
       */
      Models::RetryLifecycleRetrieveJobResponse retryLifecycleRetrieveJobWithOptions(const Models::RetryLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries failed a data retrieval task.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request RetryLifecycleRetrieveJobRequest
       * @return RetryLifecycleRetrieveJobResponse
       */
      Models::RetryLifecycleRetrieveJobResponse retryLifecycleRetrieveJob(const Models::RetryLifecycleRetrieveJobRequest &request);

      /**
       * @summary Sets the quota for an Agentic space.
       *
       * @description Applies to agentic-type file systems.
       *
       * @param request SetAgenticSpaceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAgenticSpaceQuotaResponse
       */
      Models::SetAgenticSpaceQuotaResponse setAgenticSpaceQuotaWithOptions(const Models::SetAgenticSpaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the quota for an Agentic space.
       *
       * @description Applies to agentic-type file systems.
       *
       * @param request SetAgenticSpaceQuotaRequest
       * @return SetAgenticSpaceQuotaResponse
       */
      Models::SetAgenticSpaceQuotaResponse setAgenticSpaceQuota(const Models::SetAgenticSpaceQuotaRequest &request);

      /**
       * @summary Creates a directory quota for a file system.
       *
       * @description Only General-purpose File Storage NAS (NAS) file systems support the directory quota feature.
       *
       * @param request SetDirQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDirQuotaResponse
       */
      Models::SetDirQuotaResponse setDirQuotaWithOptions(const Models::SetDirQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory quota for a file system.
       *
       * @description Only General-purpose File Storage NAS (NAS) file systems support the directory quota feature.
       *
       * @param request SetDirQuotaRequest
       * @return SetDirQuotaResponse
       */
      Models::SetDirQuotaResponse setDirQuota(const Models::SetDirQuotaRequest &request);

      /**
       * @summary Sets the quota for a fileset.
       *
       * @description - 仅CPFS智算版2.7.0及以上版本支持为文件集设置配额。
       * - Fileset容量配额，最小起步10 GiB，扩容单位为1 GiB。
       * - Fileset最多支持100亿个文件或目录，最小起步10000，扩容单位为1。
       * - 修改目录配额时，设置的配额容量或文件数必须高于已使用容量或文件数。
       * - 容量限制和文件数限制至少填写其中一项。
       * - 配额的统计有15分钟的延迟，当前的实际使用量15分钟之后才会生效。
       *
       * @param request SetFilesetQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFilesetQuotaResponse
       */
      Models::SetFilesetQuotaResponse setFilesetQuotaWithOptions(const Models::SetFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the quota for a fileset.
       *
       * @description - 仅CPFS智算版2.7.0及以上版本支持为文件集设置配额。
       * - Fileset容量配额，最小起步10 GiB，扩容单位为1 GiB。
       * - Fileset最多支持100亿个文件或目录，最小起步10000，扩容单位为1。
       * - 修改目录配额时，设置的配额容量或文件数必须高于已使用容量或文件数。
       * - 容量限制和文件数限制至少填写其中一项。
       * - 配额的统计有15分钟的延迟，当前的实际使用量15分钟之后才会生效。
       *
       * @param request SetFilesetQuotaRequest
       * @return SetFilesetQuotaResponse
       */
      Models::SetFilesetQuotaResponse setFilesetQuota(const Models::SetFilesetQuotaRequest &request);

      /**
       * @summary Enables a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 只能启动`Stopped（停止）`状态的数据流动。
       * - 当DryRun为`true`时，可校验启动该规格的数据流动的资源是否充足。如果库存资源不足，数据流动则无法启动。
       * - 启动数据流动一般耗时2～5分钟，您可通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询数据流动状态。
       *
       * @param request StartDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDataFlowResponse
       */
      Models::StartDataFlowResponse startDataFlowWithOptions(const Models::StartDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 只能启动`Stopped（停止）`状态的数据流动。
       * - 当DryRun为`true`时，可校验启动该规格的数据流动的资源是否充足。如果库存资源不足，数据流动则无法启动。
       * - 启动数据流动一般耗时2～5分钟，您可通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询数据流动状态。
       *
       * @param request StartDataFlowRequest
       * @return StartDataFlowResponse
       */
      Models::StartDataFlowResponse startDataFlow(const Models::StartDataFlowRequest &request);

      /**
       * @summary Starts the execution of a lifecycle policy.
       *
       * @description This operation is supported only when the `LifecyclePolicyType` of a lifecycle policy is set to `OnDemand` for a CPFS AI-Computing Edition file system.
       *
       * @param request StartLifecyclePolicyExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLifecyclePolicyExecutionResponse
       */
      Models::StartLifecyclePolicyExecutionResponse startLifecyclePolicyExecutionWithOptions(const Models::StartLifecyclePolicyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the execution of a lifecycle policy.
       *
       * @description This operation is supported only when the `LifecyclePolicyType` of a lifecycle policy is set to `OnDemand` for a CPFS AI-Computing Edition file system.
       *
       * @param request StartLifecyclePolicyExecutionRequest
       * @return StartLifecyclePolicyExecutionResponse
       */
      Models::StartLifecyclePolicyExecutionResponse startLifecyclePolicyExecution(const Models::StartLifecyclePolicyExecutionRequest &request);

      /**
       * @summary Disables a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 只能停用`Running（正常）`状态的数据流动。
       * - 停用后，不可在数据流动上创建数据流动任务。如果配置了自动更新，源端发生的数据更新也不会同步到CPFS上。
       * - 停用后，由于资源被回收，数据流动带宽将不再计费，但重新启动数据流动可能因为库存不足导致启动失败。
       * - 停用数据流动一般耗时2～5分钟，您可通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html)查询数据流动状态。
       *
       * @param request StopDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDataFlowResponse
       */
      Models::StopDataFlowResponse stopDataFlowWithOptions(const Models::StopDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 只能停用`Running（正常）`状态的数据流动。
       * - 停用后，不可在数据流动上创建数据流动任务。如果配置了自动更新，源端发生的数据更新也不会同步到CPFS上。
       * - 停用后，由于资源被回收，数据流动带宽将不再计费，但重新启动数据流动可能因为库存不足导致启动失败。
       * - 停用数据流动一般耗时2～5分钟，您可通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html)查询数据流动状态。
       *
       * @param request StopDataFlowRequest
       * @return StopDataFlowResponse
       */
      Models::StopDataFlowResponse stopDataFlow(const Models::StopDataFlowRequest &request);

      /**
       * @summary Stops the execution of a lifecycle policy.
       *
       * @description This operation applies only when the LifecyclePolicyType parameter of a lifecycle management policy for a CPFS file system is set to OnDemand.
       *
       * @param request StopLifecyclePolicyExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLifecyclePolicyExecutionResponse
       */
      Models::StopLifecyclePolicyExecutionResponse stopLifecyclePolicyExecutionWithOptions(const Models::StopLifecyclePolicyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the execution of a lifecycle policy.
       *
       * @description This operation applies only when the LifecyclePolicyType parameter of a lifecycle management policy for a CPFS file system is set to OnDemand.
       *
       * @param request StopLifecyclePolicyExecutionRequest
       * @return StopLifecyclePolicyExecutionResponse
       */
      Models::StopLifecyclePolicyExecutionResponse stopLifecyclePolicyExecution(const Models::StopLifecyclePolicyExecutionRequest &request);

      /**
       * @summary Creates tags and binds the tags to file systems.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags and binds the tags to file systems.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from a file system.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from a file system.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the rules of a lifecycle policy. This operation is supported only for CPFS for AI file systems. The `UpdateLifecyclePolicy` operation overwrites the entire policy. Omitting an optional parameter deletes its corresponding configuration. To add a rule to an existing policy, call the `DescribeLifecyclePolicies` operation to retrieve the current policy, append the new rule, and then call `UpdateLifecyclePolicy` with the updated configuration.
       *
       * @param request UpdateLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLifecyclePolicyResponse
       */
      Models::UpdateLifecyclePolicyResponse updateLifecyclePolicyWithOptions(const Models::UpdateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the rules of a lifecycle policy. This operation is supported only for CPFS for AI file systems. The `UpdateLifecyclePolicy` operation overwrites the entire policy. Omitting an optional parameter deletes its corresponding configuration. To add a rule to an existing policy, call the `DescribeLifecyclePolicies` operation to retrieve the current policy, append the new rule, and then call `UpdateLifecyclePolicy` with the updated configuration.
       *
       * @param request UpdateLifecyclePolicyRequest
       * @return UpdateLifecyclePolicyResponse
       */
      Models::UpdateLifecyclePolicyResponse updateLifecyclePolicy(const Models::UpdateLifecyclePolicyRequest &request);

      /**
       * @summary Modifies the retention period of data in the recycle bin of a file system.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request UpdateRecycleBinAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecycleBinAttributeResponse
       */
      Models::UpdateRecycleBinAttributeResponse updateRecycleBinAttributeWithOptions(const Models::UpdateRecycleBinAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the retention period of data in the recycle bin of a file system.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request UpdateRecycleBinAttributeRequest
       * @return UpdateRecycleBinAttributeResponse
       */
      Models::UpdateRecycleBinAttributeResponse updateRecycleBinAttribute(const Models::UpdateRecycleBinAttributeRequest &request);

      /**
       * @summary Scales up an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - 仅支持极速型NAS文件系统和CPFS文件系统扩容。
       * - 通用型NAS按需自动扩容，无须使用本API。
       *
       * @param request UpgradeFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeFileSystemResponse
       */
      Models::UpgradeFileSystemResponse upgradeFileSystemWithOptions(const Models::UpgradeFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales up an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - 仅支持极速型NAS文件系统和CPFS文件系统扩容。
       * - 通用型NAS按需自动扩容，无须使用本API。
       *
       * @param request UpgradeFileSystemRequest
       * @return UpgradeFileSystemResponse
       */
      Models::UpgradeFileSystemResponse upgradeFileSystem(const Models::UpgradeFileSystemRequest &request);
  };
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
