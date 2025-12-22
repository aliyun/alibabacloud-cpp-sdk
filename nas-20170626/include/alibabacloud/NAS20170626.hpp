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
       * @summary Adds AutoRefresh configurations to a dataflow.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * *   You can add AutoRefresh configurations only to the dataflows that are in the `Running` state.
       * *   You can add a maximum of five AutoRefresh configurations to a dataflow.
       * *   It generally takes 2 to 5 minutes to create an AutoRefresh configuration. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) operation to query the dataflow status.
       * *   AutoRefresh depends on the object modification events collected by EventBridge from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *     **
       *     **Note** The event buses and event rules created for CPFS in the EventBridge console contain the `Create for cpfs auto refresh` description. The event buses and event rules cannot be modified or deleted. Otherwise, AutoRefresh cannot work properly.
       * *   The AutoRefresh configuration applies only to the prefix and is specified by the RefreshPath parameter. When you add an AutoRefresh configuration to the prefix for a CPFS dataflow, an event bus is created at the user side and an event rule is created for the prefix of the source OSS bucket. When an object is modified in the prefix of the source OSS bucket, an OSS event is generated in the EventBridge console. The event is processed by the CPFS data flow.
       * *   After AutoRefresh is configured, if the data in the source OSS bucket is updated, the updated metadata is automatically synchronized to the CPFS file system. You can load the updated data when you access files, or run a data flow task to load the updated data.
       * *   AutoRefreshInterval refers to the interval at which CPFS checks whether data is updated in the prefix of the source OSS bucket. If data is updated, CPFS runs an AutoRefresh task. If the frequency of triggering the object modification event in the source OSS bucket exceeds the processing capability of the CPFS data flow, AutoRefresh tasks are accumulated, metadata updates are delayed, and the data flow status becomes Misconfigured. To resolve these issues, you can increase the data flow specifications or reduce the frequency of triggering the object modification event.
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefreshWithOptions(const Models::ApplyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds AutoRefresh configurations to a dataflow.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * *   You can add AutoRefresh configurations only to the dataflows that are in the `Running` state.
       * *   You can add a maximum of five AutoRefresh configurations to a dataflow.
       * *   It generally takes 2 to 5 minutes to create an AutoRefresh configuration. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) operation to query the dataflow status.
       * *   AutoRefresh depends on the object modification events collected by EventBridge from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *     **
       *     **Note** The event buses and event rules created for CPFS in the EventBridge console contain the `Create for cpfs auto refresh` description. The event buses and event rules cannot be modified or deleted. Otherwise, AutoRefresh cannot work properly.
       * *   The AutoRefresh configuration applies only to the prefix and is specified by the RefreshPath parameter. When you add an AutoRefresh configuration to the prefix for a CPFS dataflow, an event bus is created at the user side and an event rule is created for the prefix of the source OSS bucket. When an object is modified in the prefix of the source OSS bucket, an OSS event is generated in the EventBridge console. The event is processed by the CPFS data flow.
       * *   After AutoRefresh is configured, if the data in the source OSS bucket is updated, the updated metadata is automatically synchronized to the CPFS file system. You can load the updated data when you access files, or run a data flow task to load the updated data.
       * *   AutoRefreshInterval refers to the interval at which CPFS checks whether data is updated in the prefix of the source OSS bucket. If data is updated, CPFS runs an AutoRefresh task. If the frequency of triggering the object modification event in the source OSS bucket exceeds the processing capability of the CPFS data flow, AutoRefresh tasks are accumulated, metadata updates are delayed, and the data flow status becomes Misconfigured. To resolve these issues, you can increase the data flow specifications or reduce the frequency of triggering the object modification event.
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefresh(const Models::ApplyDataFlowAutoRefreshRequest &request);

      /**
       * @summary Associates the VSC device with the file system.
       *
       * @description *   Only CPFS for Lingjun supports this operation.
       * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
       *
       * @param request AttachVscToFilesystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVscToFilesystemsResponse
       */
      Models::AttachVscToFilesystemsResponse attachVscToFilesystemsWithOptions(const Models::AttachVscToFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates the VSC device with the file system.
       *
       * @description *   Only CPFS for Lingjun supports this operation.
       * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
       *
       * @param request AttachVscToFilesystemsRequest
       * @return AttachVscToFilesystemsResponse
       */
      Models::AttachVscToFilesystemsResponse attachVscToFilesystems(const Models::AttachVscToFilesystemsRequest &request);

      /**
       * @summary Removes automatic snapshot policies from one or more file systems.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(const Models::CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes automatic snapshot policies from one or more file systems.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(const Models::CancelAutoSnapshotPolicyRequest &request);

      /**
       * @summary Cancels the AutoRefresh configuration for a dataflow.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * *   You can cancel AutoRefresh configurations only for the dataflows that are in the `Running` or `Stopped` state.
       * *   It generally takes 2 to 5 minutes to cancel the AutoRefresh configurations. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the AutoRefresh tasks.
       *
       * @param request CancelDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowAutoRefreshResponse
       */
      Models::CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefreshWithOptions(const Models::CancelDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the AutoRefresh configuration for a dataflow.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * *   You can cancel AutoRefresh configurations only for the dataflows that are in the `Running` or `Stopped` state.
       * *   It generally takes 2 to 5 minutes to cancel the AutoRefresh configurations. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the AutoRefresh tasks.
       *
       * @param request CancelDataFlowAutoRefreshRequest
       * @return CancelDataFlowAutoRefreshResponse
       */
      Models::CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefresh(const Models::CancelDataFlowAutoRefreshRequest &request);

      /**
       * @summary Cancels a data streaming task.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
       * *   You can cancel a data streaming task only when the task is in the CREATED or RUNNING state.
       * *   Data streaming tasks are executed asynchronously. You can call the DescribeDataFlowSubTasks operation to query the task execution status.
       *
       * @param request CancelDataFlowSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowSubTaskResponse
       */
      Models::CancelDataFlowSubTaskResponse cancelDataFlowSubTaskWithOptions(const Models::CancelDataFlowSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a data streaming task.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
       * *   You can cancel a data streaming task only when the task is in the CREATED or RUNNING state.
       * *   Data streaming tasks are executed asynchronously. You can call the DescribeDataFlowSubTasks operation to query the task execution status.
       *
       * @param request CancelDataFlowSubTaskRequest
       * @return CancelDataFlowSubTaskResponse
       */
      Models::CancelDataFlowSubTaskResponse cancelDataFlowSubTask(const Models::CancelDataFlowSubTaskRequest &request);

      /**
       * @summary Cancels a batch or streaming task that is in the Pending or Execute state.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support this operation. You can view the version information on the file system details page in the console.
       * *   You can cancel only the data flow tasks that are in the `Pending` and `Executing` states.
       * *   It generally takes 5 to 10 minutes to cancel a data flow task. You can query the task execution status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation.
       * *   If a data streaming task contains running subtasks, you cannot cancel the streaming task. Otherwise, an InvalidStatus.ResourceMismatch error message is returned.
       *
       * @param request CancelDataFlowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowTaskResponse
       */
      Models::CancelDataFlowTaskResponse cancelDataFlowTaskWithOptions(const Models::CancelDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a batch or streaming task that is in the Pending or Execute state.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support this operation. You can view the version information on the file system details page in the console.
       * *   You can cancel only the data flow tasks that are in the `Pending` and `Executing` states.
       * *   It generally takes 5 to 10 minutes to cancel a data flow task. You can query the task execution status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation.
       * *   If a data streaming task contains running subtasks, you cannot cancel the streaming task. Otherwise, an InvalidStatus.ResourceMismatch error message is returned.
       *
       * @param request CancelDataFlowTaskRequest
       * @return CancelDataFlowTaskResponse
       */
      Models::CancelDataFlowTaskResponse cancelDataFlowTask(const Models::CancelDataFlowTaskRequest &request);

      /**
       * @summary Cancels the directory quota of a file system.
       *
       * @description Only General-purpose file systems support the directory quota feature.
       *
       * @param request CancelDirQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDirQuotaResponse
       */
      Models::CancelDirQuotaResponse cancelDirQuotaWithOptions(const Models::CancelDirQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the directory quota of a file system.
       *
       * @description Only General-purpose file systems support the directory quota feature.
       *
       * @param request CancelDirQuotaRequest
       * @return CancelDirQuotaResponse
       */
      Models::CancelDirQuotaResponse cancelDirQuota(const Models::CancelDirQuotaRequest &request);

      /**
       * @summary Cancels the quota set for a fileset.
       *
       * @description Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.7.0 and later support this operation.
       *
       * @param request CancelFilesetQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelFilesetQuotaResponse
       */
      Models::CancelFilesetQuotaResponse cancelFilesetQuotaWithOptions(const Models::CancelFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the quota set for a fileset.
       *
       * @description Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.7.0 and later support this operation.
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
       * @summary Changes the resource group to which a file system belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a file system belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates a permission group.
       *
       * @param request CreateAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroupWithOptions(const Models::CreateAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission group.
       *
       * @param request CreateAccessGroupRequest
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroup(const Models::CreateAccessGroupRequest &request);

      /**
       * @summary Creates an access point.
       *
       * @description *   After you call the CreateAccessPoint operation, an access point is not immediately created. Therefore, after you call the CreateAccessPoint operation successfully, call the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the status of the access point. If the status is **Active**, mount the file system. Otherwise, the file system may fail to be mounted.
       * *   Only General-purpose Network File System (NFS) file systems support access points.
       * *   If you want to call the EnabledRam operation to enable a Resource Access Management (RAM) policy, you must configure the corresponding RAM permissions. For more information, see [Manage endpoints](https://help.aliyun.com/document_detail/2545998.html).
       *
       * @param request CreateAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessPointResponse
       */
      Models::CreateAccessPointResponse createAccessPointWithOptions(const Models::CreateAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access point.
       *
       * @description *   After you call the CreateAccessPoint operation, an access point is not immediately created. Therefore, after you call the CreateAccessPoint operation successfully, call the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the status of the access point. If the status is **Active**, mount the file system. Otherwise, the file system may fail to be mounted.
       * *   Only General-purpose Network File System (NFS) file systems support access points.
       * *   If you want to call the EnabledRam operation to enable a Resource Access Management (RAM) policy, you must configure the corresponding RAM permissions. For more information, see [Manage endpoints](https://help.aliyun.com/document_detail/2545998.html).
       *
       * @param request CreateAccessPointRequest
       * @return CreateAccessPointResponse
       */
      Models::CreateAccessPointResponse createAccessPoint(const Models::CreateAccessPointRequest &request);

      /**
       * @summary Creates a rule for a permission group.
       *
       * @param request CreateAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRuleWithOptions(const Models::CreateAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule for a permission group.
       *
       * @param request CreateAccessRuleRequest
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRule(const Models::CreateAccessRuleRequest &request);

      /**
       * @summary Creates an automatic snapshot policy.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support the snapshot feature.
       * *   You can create a maximum of 100 automatic snapshot policies in each region for an Alibaba Cloud account.
       * *   If an auto snapshot is being created when the scheduled time for a new auto snapshot arrives, the creation of the new snapshot is skipped. This occurs if the file system stores a large volume of data. For example, you have scheduled auto snapshots to be created at 09:00:00, 10:00:00, 11:00:00, and 12:00:00 for a file system. The system starts to create an auto snapshot at 09:00:00 and does not complete the process until 10:20:00. The process takes 80 minutes because the file system has a large volume of data. In this case, the system does not create an auto snapshot at 10:00:00, but creates an auto snapshot at 11:00:00.
       * *   A maximum of 128 auto snapshots can be created for a file system. If the upper limit is reached, the earliest auto snapshot is deleted. This rule does not apply to manual snapshots.
       * *   If you modify the retention period of an automatic snapshot policy, the modification applies only to subsequent snapshots, but not to the existing snapshots.
       * *   If an auto snapshot is being created for a file system, you cannot create a manual snapshot for the file system. You must wait after the auto snapshot is created.
       * *   You can only apply automatic snapshot policies to a file system that is in the Running state.
       * *   All auto snapshots are named in the `auto_yyyyMMdd_X` format, where: `auto` indicates that the snapshot is created based on an automatic snapshot policy. `yyyyMMdd` indicates the date on which the snapshot is created. `y` indicates the year. `M` indicates the month. `d` indicates the day. `X` indicates the ordinal number of the snapshot on the current day. For example, `auto_20201018_1` indicates the first auto snapshot that was created on October 18, 2020.
       * *   After an automatic snapshot policy is created, you can call the ApplyAutoSnapshotPolicy operation to apply the policy to a file system and call the ModifyAutoSnapshotPolicy operation to modify the policy.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(const Models::CreateAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic snapshot policy.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support the snapshot feature.
       * *   You can create a maximum of 100 automatic snapshot policies in each region for an Alibaba Cloud account.
       * *   If an auto snapshot is being created when the scheduled time for a new auto snapshot arrives, the creation of the new snapshot is skipped. This occurs if the file system stores a large volume of data. For example, you have scheduled auto snapshots to be created at 09:00:00, 10:00:00, 11:00:00, and 12:00:00 for a file system. The system starts to create an auto snapshot at 09:00:00 and does not complete the process until 10:20:00. The process takes 80 minutes because the file system has a large volume of data. In this case, the system does not create an auto snapshot at 10:00:00, but creates an auto snapshot at 11:00:00.
       * *   A maximum of 128 auto snapshots can be created for a file system. If the upper limit is reached, the earliest auto snapshot is deleted. This rule does not apply to manual snapshots.
       * *   If you modify the retention period of an automatic snapshot policy, the modification applies only to subsequent snapshots, but not to the existing snapshots.
       * *   If an auto snapshot is being created for a file system, you cannot create a manual snapshot for the file system. You must wait after the auto snapshot is created.
       * *   You can only apply automatic snapshot policies to a file system that is in the Running state.
       * *   All auto snapshots are named in the `auto_yyyyMMdd_X` format, where: `auto` indicates that the snapshot is created based on an automatic snapshot policy. `yyyyMMdd` indicates the date on which the snapshot is created. `y` indicates the year. `M` indicates the month. `d` indicates the day. `X` indicates the ordinal number of the snapshot on the current day. For example, `auto_20201018_1` indicates the first auto snapshot that was created on October 18, 2020.
       * *   After an automatic snapshot policy is created, you can call the ApplyAutoSnapshotPolicy operation to apply the policy to a file system and call the ModifyAutoSnapshotPolicy operation to modify the policy.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(const Models::CreateAutoSnapshotPolicyRequest &request);

      /**
       * @summary Creates a dataflow for a Cloud Parallel File Storage (CPFS) file system and source storage.
       *
       * @description *   Basic operations
       *     *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows.
       *     *   You can create a data flow only when a CPFS or CPFS for Lingjun file system is in the Running state.
       *     *   A maximum of 10 data flows can be created for a CPFS or CPFS for Lingjun file system.
       *     *   It generally takes 2 to 5 minutes to create a data flow. You can call the DescribeDataFlows operation to check whether the data flow has been created.
       * *   Permission
       *     When you create a data flow, CPFS obtains the following two service-linked roles: `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification`. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
       * *   CPFS usage notes
       *     *   Billing
       *         *   If you create a data flow, you are charged for using the data flow throughput. For more information, see [Billing of CPFS](https://help.aliyun.com/document_detail/111858.html).
       *         *   When you configure the AutoRefresh feature for a data flow, CPFS must use EventBridge to collect object modification events from the source Object Storage Service (OSS) bucket. Event fees are incurred. For more information, see [Billing of EventBridge](https://help.aliyun.com/document_detail/163752.html).
       *     *   Data flow specifications
       *         *   The data flow throughput supports the following specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow throughput is the maximum transmission bandwidth that can be reached when data is imported or exported for a data flow.
       *         *   When you create a data flow, the vSwitch IP addresses used by a CPFS mount target are consumed. Make sure that the vSwitch can provide sufficient IP addresses.
       *         *   Inventory query: If you set the DryRun parameter to true, you can check whether the resources for the data flow whose throughput is changed meet the requirements.
       *     *   Fileset
       *         *   The destination for a data flow is a fileset in the CPFS file system. A fileset is a new directory tree structure (a small file directory) in a CPFS file system. Each fileset independently manages an inode space.
       *         *   When you create a data flow for a CPFS file system, the related fileset must already exist and cannot be nested with other filesets. Only one data flow can be created in a fileset, which corresponds to one source storage.
       *         *   A fileset supports a maximum of one million files. If the number of files imported from an OSS bucket into the fileset exceeds the upper limit, the `no space` error message is returned when you add new files.
       *     **
       *     **Note **If data already exists in the fileset, after you create a data flow, the existing data in the fileset is cleared and replaced with the data synchronized from the OSS bucket.
       *     *   AutoRefresh
       *         *   After AutoRefresh is configured, if the data in the source OSS bucket is updated, the updated metadata is automatically synchronized to the CPFS file system. You can load the updated data when you access files, or run a data flow task to load the updated data.
       *         *   AutoRefresh depends on the object modification events collected by EventBridge from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *         *   The AutoRefresh configuration applies only to the prefix and is specified by the RefreshPath parameter. You can configure a maximum of five AutoRefresh directories for a data flow.
       *         *   AutoRefreshInterval refers to the interval at which CPFS checks whether data is updated in the prefix of the source OSS bucket. If data is updated, CPFS runs an AutoRefresh task. If the frequency of triggering the object modification event in the source OSS bucket exceeds the processing capability of the CPFS data flow, AutoRefresh tasks are accumulated, metadata updates are delayed, and the data flow status becomes `Misconfigured`. To resolve these issues, you can increase the data flow specifications or reduce the frequency of triggering the object modification event.
       *         *   When you add an AutoRefresh configuration to the prefix for a CPFS data flow, an event bus is created at the user side and an event rule is created for the prefix of the source OSS bucket. When an object is modified in the prefix of the source OSS bucket, an OSS event is generated in the EventBridge console. The event is processed by the CPFS data flow.
       *         **
       *         **Note **The event buses and event rules created for CPFS in the EventBridge console contain the `Create for cpfs auto refresh` description. The event buses and event rules cannot be modified or deleted. Otherwise, AutoRefresh cannot work properly.
       *     *   Source storage
       *         *   The source storage is an OSS bucket. SourceStorage for a data flow must be an OSS bucket.
       *         *   CPFS data flows support both encrypted and unencrypted access to OSS. If you select SSL-encrypted access to OSS, make sure that encryption in transit for OSS buckets supports encrypted access.
       *         *   If data flows for multiple CPFS file systems or multiple data flows for the same CPFS file system are stored in the same OSS bucket, you must enable versioning for the OSS bucket to prevent data conflicts caused by data export from multiple CPFS file systems to one OSS bucket.
       *         *   Data flows are not supported for OSS buckets across regions. The OSS bucket must reside in the same region as the CPFS file system.
       *         **
       *         **Note **Before you create a data flow, you must configure a tag (key: cpfs-dataflow, value: true) for the source OSS bucket. This way, the created data flow can access the data in the OSS bucket. When a data flow is being used, do not delete or modify the tag. Otherwise, the data flow for CPFS cannot access the data in the OSS bucket.
       * *   CPFS for Lingjun usage notes
       *     *   Source storage
       *         *   The source storage is an OSS bucket. SourceStorage for a data flow must be an OSS bucket.
       *         *   CPFS for Lingjun data flows support both encrypted and unencrypted access to OSS. If you select SSL-encrypted access to OSS, make sure that encryption in transit for OSS buckets supports encrypted access.
       *         *   If data flows for multiple CPFS for Lingjun file systems or multiple data flows for the same CPFS for Lingjun file system are stored in the same OSS bucket, you must enable versioning for the OSS bucket to prevent data conflicts caused by data export from multiple CPFS for Lingjun file systems to one OSS bucket.
       *         *   Data flows are not supported for OSS buckets across regions. The OSS bucket must reside in the same region as the CPFS file system.
       *         *   CPFS for Lingjun V2.6.0 and later allow you to create data flows for OSS buckets across accounts.
       *         *   The account id parameter is required only when you use OSS buckets across accounts.
       *         *   To use OSS buckets across accounts, you must first grant permissions to the related accounts. For more information, see [Cross-account authorization on data flows](https://help.aliyun.com/document_detail/2713462.html).
       *             **
       *             **Note **Before you create a data flow, you must configure a tag (key: cpfs-dataflow, value: true) for the source OSS bucket. This way, the created data flow can access the data in the OSS bucket. When a data flow is being used, do not delete or modify the tag. Otherwise, the data flow for CPFS for Lingjun cannot access the data in the OSS bucket.
       *     *   Limits of data flows on file systems
       *         *   You cannot rename a non-empty directory in a path that is associated with a data flow. Otherwise, the Permission Denied error message or an error message indicating that the directory is not empty is returned.
       *         *   Proceed with caution when you use special characters in the names of directories and files. The following characters are supported: letters, digits, exclamation points (!), hyphens (-), underscores (_), periods (.), asterisks (\\*), and parentheses (()).
       *         *   The path can be up to 1,023 characters in length.
       *     *   Limits of data flows on import
       *         *   After a symbolic link is imported to CPFS for Lingjun, the symbolic link is converted into a common data file that contains no symbolic link information.
       *         *   If an OSS bucket has multiple versions, only data of the latest version is used.
       *         *   The name of a file or a subdirectory can be up to 255 bytes in length.
       *     *   Limits of data flows on export
       *         *   After a symbolic link is synchronized to OSS, the file that the symbolic link points to is not synchronized to OSS. In this case, the symbolic link is converted into a common object that contains no data.
       *         *   Hard links can be synchronized to OSS only as common files that contain no link information.
       *         *   After a file of the Socket, Device, or Pipe type is exported to an OSS bucket, the file is converted into a common object that contains no data.
       *         *   The directory path can be up to 1,023 characters in length.
       *
       * @param request CreateDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowResponse
       */
      Models::CreateDataFlowResponse createDataFlowWithOptions(const Models::CreateDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataflow for a Cloud Parallel File Storage (CPFS) file system and source storage.
       *
       * @description *   Basic operations
       *     *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows.
       *     *   You can create a data flow only when a CPFS or CPFS for Lingjun file system is in the Running state.
       *     *   A maximum of 10 data flows can be created for a CPFS or CPFS for Lingjun file system.
       *     *   It generally takes 2 to 5 minutes to create a data flow. You can call the DescribeDataFlows operation to check whether the data flow has been created.
       * *   Permission
       *     When you create a data flow, CPFS obtains the following two service-linked roles: `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification`. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
       * *   CPFS usage notes
       *     *   Billing
       *         *   If you create a data flow, you are charged for using the data flow throughput. For more information, see [Billing of CPFS](https://help.aliyun.com/document_detail/111858.html).
       *         *   When you configure the AutoRefresh feature for a data flow, CPFS must use EventBridge to collect object modification events from the source Object Storage Service (OSS) bucket. Event fees are incurred. For more information, see [Billing of EventBridge](https://help.aliyun.com/document_detail/163752.html).
       *     *   Data flow specifications
       *         *   The data flow throughput supports the following specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow throughput is the maximum transmission bandwidth that can be reached when data is imported or exported for a data flow.
       *         *   When you create a data flow, the vSwitch IP addresses used by a CPFS mount target are consumed. Make sure that the vSwitch can provide sufficient IP addresses.
       *         *   Inventory query: If you set the DryRun parameter to true, you can check whether the resources for the data flow whose throughput is changed meet the requirements.
       *     *   Fileset
       *         *   The destination for a data flow is a fileset in the CPFS file system. A fileset is a new directory tree structure (a small file directory) in a CPFS file system. Each fileset independently manages an inode space.
       *         *   When you create a data flow for a CPFS file system, the related fileset must already exist and cannot be nested with other filesets. Only one data flow can be created in a fileset, which corresponds to one source storage.
       *         *   A fileset supports a maximum of one million files. If the number of files imported from an OSS bucket into the fileset exceeds the upper limit, the `no space` error message is returned when you add new files.
       *     **
       *     **Note **If data already exists in the fileset, after you create a data flow, the existing data in the fileset is cleared and replaced with the data synchronized from the OSS bucket.
       *     *   AutoRefresh
       *         *   After AutoRefresh is configured, if the data in the source OSS bucket is updated, the updated metadata is automatically synchronized to the CPFS file system. You can load the updated data when you access files, or run a data flow task to load the updated data.
       *         *   AutoRefresh depends on the object modification events collected by EventBridge from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *         *   The AutoRefresh configuration applies only to the prefix and is specified by the RefreshPath parameter. You can configure a maximum of five AutoRefresh directories for a data flow.
       *         *   AutoRefreshInterval refers to the interval at which CPFS checks whether data is updated in the prefix of the source OSS bucket. If data is updated, CPFS runs an AutoRefresh task. If the frequency of triggering the object modification event in the source OSS bucket exceeds the processing capability of the CPFS data flow, AutoRefresh tasks are accumulated, metadata updates are delayed, and the data flow status becomes `Misconfigured`. To resolve these issues, you can increase the data flow specifications or reduce the frequency of triggering the object modification event.
       *         *   When you add an AutoRefresh configuration to the prefix for a CPFS data flow, an event bus is created at the user side and an event rule is created for the prefix of the source OSS bucket. When an object is modified in the prefix of the source OSS bucket, an OSS event is generated in the EventBridge console. The event is processed by the CPFS data flow.
       *         **
       *         **Note **The event buses and event rules created for CPFS in the EventBridge console contain the `Create for cpfs auto refresh` description. The event buses and event rules cannot be modified or deleted. Otherwise, AutoRefresh cannot work properly.
       *     *   Source storage
       *         *   The source storage is an OSS bucket. SourceStorage for a data flow must be an OSS bucket.
       *         *   CPFS data flows support both encrypted and unencrypted access to OSS. If you select SSL-encrypted access to OSS, make sure that encryption in transit for OSS buckets supports encrypted access.
       *         *   If data flows for multiple CPFS file systems or multiple data flows for the same CPFS file system are stored in the same OSS bucket, you must enable versioning for the OSS bucket to prevent data conflicts caused by data export from multiple CPFS file systems to one OSS bucket.
       *         *   Data flows are not supported for OSS buckets across regions. The OSS bucket must reside in the same region as the CPFS file system.
       *         **
       *         **Note **Before you create a data flow, you must configure a tag (key: cpfs-dataflow, value: true) for the source OSS bucket. This way, the created data flow can access the data in the OSS bucket. When a data flow is being used, do not delete or modify the tag. Otherwise, the data flow for CPFS cannot access the data in the OSS bucket.
       * *   CPFS for Lingjun usage notes
       *     *   Source storage
       *         *   The source storage is an OSS bucket. SourceStorage for a data flow must be an OSS bucket.
       *         *   CPFS for Lingjun data flows support both encrypted and unencrypted access to OSS. If you select SSL-encrypted access to OSS, make sure that encryption in transit for OSS buckets supports encrypted access.
       *         *   If data flows for multiple CPFS for Lingjun file systems or multiple data flows for the same CPFS for Lingjun file system are stored in the same OSS bucket, you must enable versioning for the OSS bucket to prevent data conflicts caused by data export from multiple CPFS for Lingjun file systems to one OSS bucket.
       *         *   Data flows are not supported for OSS buckets across regions. The OSS bucket must reside in the same region as the CPFS file system.
       *         *   CPFS for Lingjun V2.6.0 and later allow you to create data flows for OSS buckets across accounts.
       *         *   The account id parameter is required only when you use OSS buckets across accounts.
       *         *   To use OSS buckets across accounts, you must first grant permissions to the related accounts. For more information, see [Cross-account authorization on data flows](https://help.aliyun.com/document_detail/2713462.html).
       *             **
       *             **Note **Before you create a data flow, you must configure a tag (key: cpfs-dataflow, value: true) for the source OSS bucket. This way, the created data flow can access the data in the OSS bucket. When a data flow is being used, do not delete or modify the tag. Otherwise, the data flow for CPFS for Lingjun cannot access the data in the OSS bucket.
       *     *   Limits of data flows on file systems
       *         *   You cannot rename a non-empty directory in a path that is associated with a data flow. Otherwise, the Permission Denied error message or an error message indicating that the directory is not empty is returned.
       *         *   Proceed with caution when you use special characters in the names of directories and files. The following characters are supported: letters, digits, exclamation points (!), hyphens (-), underscores (_), periods (.), asterisks (\\*), and parentheses (()).
       *         *   The path can be up to 1,023 characters in length.
       *     *   Limits of data flows on import
       *         *   After a symbolic link is imported to CPFS for Lingjun, the symbolic link is converted into a common data file that contains no symbolic link information.
       *         *   If an OSS bucket has multiple versions, only data of the latest version is used.
       *         *   The name of a file or a subdirectory can be up to 255 bytes in length.
       *     *   Limits of data flows on export
       *         *   After a symbolic link is synchronized to OSS, the file that the symbolic link points to is not synchronized to OSS. In this case, the symbolic link is converted into a common object that contains no data.
       *         *   Hard links can be synchronized to OSS only as common files that contain no link information.
       *         *   After a file of the Socket, Device, or Pipe type is exported to an OSS bucket, the file is converted into a common object that contains no data.
       *         *   The directory path can be up to 1,023 characters in length.
       *
       * @param request CreateDataFlowRequest
       * @return CreateDataFlowResponse
       */
      Models::CreateDataFlowResponse createDataFlow(const Models::CreateDataFlowRequest &request);

      /**
       * @summary Creates a data streaming subtask.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
       * *   You can create subtasks only for a data streaming subtask in the Executing state.
       * *   Data streaming tasks are executed asynchronously. You can call the DescribeDataFlowSubTasks operation to query the task execution status.
       * *   When the type of data flow task is streaming, the running status only indicates that a streaming import or export task can be created. It does not indicate that the import or export task is running.
       *
       * @param request CreateDataFlowSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowSubTaskResponse
       */
      Models::CreateDataFlowSubTaskResponse createDataFlowSubTaskWithOptions(const Models::CreateDataFlowSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data streaming subtask.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
       * *   You can create subtasks only for a data streaming subtask in the Executing state.
       * *   Data streaming tasks are executed asynchronously. You can call the DescribeDataFlowSubTasks operation to query the task execution status.
       * *   When the type of data flow task is streaming, the running status only indicates that a streaming import or export task can be created. It does not indicate that the import or export task is running.
       *
       * @param request CreateDataFlowSubTaskRequest
       * @return CreateDataFlowSubTaskResponse
       */
      Models::CreateDataFlowSubTaskResponse createDataFlowSubTask(const Models::CreateDataFlowSubTaskRequest &request);

      /**
       * @summary Creates a dataflow task.
       *
       * @description *   CPFS usage notes
       *     *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       *     *   Dataflow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The task duration depends on the amount of data to be imported and exported. If a large amount of data exists, we recommend that you create multiple tasks.
       *     *   You can create a dataflow task only for a dataflow that is in the Running state.
       *     *   When you manually run a dataflow task, the automatic data update task for the dataflow is interrupted and enters the pending state.
       *     *   When you create an export task, make sure that the total length of the absolute path of the files to be exported from a CPFS file system does not exceed 1,023 characters.
       * *   CPFS for Lingjun usage notes
       *     *   Only CPFS for Lingjun V2.4.0 and later support dataflow. You can view the version information on the file system details page in the console.
       *     *   Dataflow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The task duration depends on the amount of data to be imported and exported. If a large amount of data exists, we recommend that you create multiple tasks.
       *     *   You can create a dataflow task only for a dataflow that is in the Running state.
       *     *   When you create an export task, make sure that the total length of the absolute path of the files to be exported from a CPFS for Lingjun file system does not exceed 1,023 characters.
       *     *   CPFS for Lingjun supports two types of tasks: batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
       *
       * @param request CreateDataFlowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowTaskResponse
       */
      Models::CreateDataFlowTaskResponse createDataFlowTaskWithOptions(const Models::CreateDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataflow task.
       *
       * @description *   CPFS usage notes
       *     *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       *     *   Dataflow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The task duration depends on the amount of data to be imported and exported. If a large amount of data exists, we recommend that you create multiple tasks.
       *     *   You can create a dataflow task only for a dataflow that is in the Running state.
       *     *   When you manually run a dataflow task, the automatic data update task for the dataflow is interrupted and enters the pending state.
       *     *   When you create an export task, make sure that the total length of the absolute path of the files to be exported from a CPFS file system does not exceed 1,023 characters.
       * *   CPFS for Lingjun usage notes
       *     *   Only CPFS for Lingjun V2.4.0 and later support dataflow. You can view the version information on the file system details page in the console.
       *     *   Dataflow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The task duration depends on the amount of data to be imported and exported. If a large amount of data exists, we recommend that you create multiple tasks.
       *     *   You can create a dataflow task only for a dataflow that is in the Running state.
       *     *   When you create an export task, make sure that the total length of the absolute path of the files to be exported from a CPFS for Lingjun file system does not exceed 1,023 characters.
       *     *   CPFS for Lingjun supports two types of tasks: batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
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
       * @description *   Before you call this operation, you must understand the billing and pricing of Apsara File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/detail).
       * *   Before you create a file system, you must complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * *   When you call this operation, a service-linked role of NAS is automatically created. For more information, see [Manage the service-linked roles of NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystemWithOptions(const Models::CreateFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file system.
       *
       * @description *   Before you call this operation, you must understand the billing and pricing of Apsara File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/detail).
       * *   Before you create a file system, you must complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * *   When you call this operation, a service-linked role of NAS is automatically created. For more information, see [Manage the service-linked roles of NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateFileSystemRequest
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystem(const Models::CreateFileSystemRequest &request);

      /**
       * @summary Creates a fileset.
       *
       * @description *   CPFS usage notes
       *     *   Only CPFS V2.2.0 and later support fileset creation. You can view the version information on the file system details page in the console.
       *     *   A maximum of 10 filesets can be created for a CPFS file system.
       *     *   The parent directory must be an existing directory.
       *     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
       *     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset.
       *     *   A fileset supports a maximum of one million files. If the number of files exceeds the upper limit, the `no space` error message is returned when you add new files.
       * *   CPFS for Lingjun usage notes
       *     *   Only CPFS for Lingjun V2.7.0 and later support this operation. You can view the version information on the file system details page in the console.
       *     *   A maximum of 500 filesets can be created for a CPFS file system.
       *     *   The fileset path must be a new path and cannot be an existing path. Fileset paths cannot be renamed and cannot be symbolic links.
       *     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
       *     *   If the fileset path is a multi-level path, the parent directory must be an existing directory.
       *     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset. A fileset path supports only one quota.
       *     *   The minimum capacity quota of a fileset is 10 GiB. The scaling step size is 1 GiB.
       *     *   A fileset supports a minimum of 10,000 files or directories and a maximum of 10 billion files or directories. The scaling step size is 1.
       *     *   When you modify a directory quota, you must set the quota capacity or the number of files to be greater than the capacity or file quantity that has been used.
       *     *   The quota statistics have a 15-minute latency. The actual usage takes effect after 15 minutes.
       *
       * @param request CreateFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFilesetResponse
       */
      Models::CreateFilesetResponse createFilesetWithOptions(const Models::CreateFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a fileset.
       *
       * @description *   CPFS usage notes
       *     *   Only CPFS V2.2.0 and later support fileset creation. You can view the version information on the file system details page in the console.
       *     *   A maximum of 10 filesets can be created for a CPFS file system.
       *     *   The parent directory must be an existing directory.
       *     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
       *     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset.
       *     *   A fileset supports a maximum of one million files. If the number of files exceeds the upper limit, the `no space` error message is returned when you add new files.
       * *   CPFS for Lingjun usage notes
       *     *   Only CPFS for Lingjun V2.7.0 and later support this operation. You can view the version information on the file system details page in the console.
       *     *   A maximum of 500 filesets can be created for a CPFS file system.
       *     *   The fileset path must be a new path and cannot be an existing path. Fileset paths cannot be renamed and cannot be symbolic links.
       *     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
       *     *   If the fileset path is a multi-level path, the parent directory must be an existing directory.
       *     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset. A fileset path supports only one quota.
       *     *   The minimum capacity quota of a fileset is 10 GiB. The scaling step size is 1 GiB.
       *     *   A fileset supports a minimum of 10,000 files or directories and a maximum of 10 billion files or directories. The scaling step size is 1.
       *     *   When you modify a directory quota, you must set the quota capacity or the number of files to be greater than the capacity or file quantity that has been used.
       *     *   The quota statistics have a 15-minute latency. The actual usage takes effect after 15 minutes.
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
       * @summary Creates a lifecycle policy.
       *
       * @description *   You can create lifecycle policies only for General-purpose NAS file systems.
       * *   You can create up to 20 lifecycle policies in each region within an Alibaba Cloud account.
       *
       * @param request CreateLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLifecyclePolicyResponse
       */
      Models::CreateLifecyclePolicyResponse createLifecyclePolicyWithOptions(const Models::CreateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lifecycle policy.
       *
       * @description *   You can create lifecycle policies only for General-purpose NAS file systems.
       * *   You can create up to 20 lifecycle policies in each region within an Alibaba Cloud account.
       *
       * @param request CreateLifecyclePolicyRequest
       * @return CreateLifecyclePolicyResponse
       */
      Models::CreateLifecyclePolicyResponse createLifecyclePolicy(const Models::CreateLifecyclePolicyRequest &request);

      /**
       * @summary Creates a data retrieval task.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   You can run a maximum of 20 data retrieval tasks in each region within an Alibaba Cloud account.
       *
       * @param request CreateLifecycleRetrieveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLifecycleRetrieveJobResponse
       */
      Models::CreateLifecycleRetrieveJobResponse createLifecycleRetrieveJobWithOptions(const Models::CreateLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data retrieval task.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   You can run a maximum of 20 data retrieval tasks in each region within an Alibaba Cloud account.
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
       * @description *   After you call the CreateMountTarget operation, a mount target is not immediately created. Therefore, we recommend that you call the DescribeMountTargets operation to query the status of the mount target. If the mount target is in the **Active** state, you can then mount the file system. Otherwise, the file system may fail to be mounted.
       * *   When you call this operation, a service-linked role of NAS is automatically created. For more information, see [Manage the service-linked roles of NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTargetWithOptions(const Models::CreateMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mount target.
       *
       * @description *   After you call the CreateMountTarget operation, a mount target is not immediately created. Therefore, we recommend that you call the DescribeMountTargets operation to query the status of the mount target. If the mount target is in the **Active** state, you can then mount the file system. Otherwise, the file system may fail to be mounted.
       * *   When you call this operation, a service-linked role of NAS is automatically created. For more information, see [Manage the service-linked roles of NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateMountTargetRequest
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTarget(const Models::CreateMountTargetRequest &request);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Prerequisites
       *     A protocol service is created.
       * *   Others
       *     *   The virtual private cloud (VPC) CIDR block of the export directory for the protocol service cannot overlap with the VPC CIDR block of the file system.
       *     *   The VPC CIDR blocks of multiple export directories of a protocol service cannot overlap.
       *     *   You can create a maximum of 10 export directories for a protocol service.
       *     *   A protocol service can use a maximum of 32 IP addresses that are allocated by a specified vSwitch. Make sure that the vSwitch can provide sufficient IP addresses.
       *
       * @param request CreateProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolMountTargetResponse
       */
      Models::CreateProtocolMountTargetResponse createProtocolMountTargetWithOptions(const Models::CreateProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Prerequisites
       *     A protocol service is created.
       * *   Others
       *     *   The virtual private cloud (VPC) CIDR block of the export directory for the protocol service cannot overlap with the VPC CIDR block of the file system.
       *     *   The VPC CIDR blocks of multiple export directories of a protocol service cannot overlap.
       *     *   You can create a maximum of 10 export directories for a protocol service.
       *     *   A protocol service can use a maximum of 32 IP addresses that are allocated by a specified vSwitch. Make sure that the vSwitch can provide sufficient IP addresses.
       *
       * @param request CreateProtocolMountTargetRequest
       * @return CreateProtocolMountTargetResponse
       */
      Models::CreateProtocolMountTargetResponse createProtocolMountTarget(const Models::CreateProtocolMountTargetRequest &request);

      /**
       * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation takes about 5 to 10 minutes.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Only CPFS V2.3.0 and later support protocol services. You can query the version information of the file system by calling the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation.
       * *   Protocol service types
       *     Protocol services are classified into general-purpose protocol services and cache protocol services. Different from general-purpose protocol services, cache protocol services can cache hot data. If data exists in the cache, the bandwidth of the cache protocol service may exceed the bandwidth of the CPFS file system, reaching the maximum bandwidth specified for the protocol service.
       *     *   General-purpose protocol services: provide NFS access and [directory-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS file systems. You do not need to configure a POSIX client to manage clusters. The compliance package check feature is free of charge.
       *     *   Cache protocol services: provide the server memory cache based on the least recently used (LRU) policy. When data is cached in the memory, CPFS provides higher internal bandwidth. Cache protocol services are divided into Cache L1 and Cache L2 specifications. The differences are the internal bandwidth size and memory cache size.
       *     **
       *     **Note** You are charged for using cache protocol services, which are in invitational preview. For more information about the billing method of cache protocol services, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, you can join the DingTalk group (group number: 31045006299).
       * *   Protocol Type
       *     Only NFSv3 is supported.
       * *   Others
       *     *   Only one protocol service can be created for a CPFS file system.
       *     *   A protocol service can use a maximum of 32 IP addresses that are allocated by a specified vSwitch. Make sure that the vSwitch can provide sufficient IP addresses.
       *
       * @param request CreateProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolServiceWithOptions(const Models::CreateProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation takes about 5 to 10 minutes.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Only CPFS V2.3.0 and later support protocol services. You can query the version information of the file system by calling the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation.
       * *   Protocol service types
       *     Protocol services are classified into general-purpose protocol services and cache protocol services. Different from general-purpose protocol services, cache protocol services can cache hot data. If data exists in the cache, the bandwidth of the cache protocol service may exceed the bandwidth of the CPFS file system, reaching the maximum bandwidth specified for the protocol service.
       *     *   General-purpose protocol services: provide NFS access and [directory-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS file systems. You do not need to configure a POSIX client to manage clusters. The compliance package check feature is free of charge.
       *     *   Cache protocol services: provide the server memory cache based on the least recently used (LRU) policy. When data is cached in the memory, CPFS provides higher internal bandwidth. Cache protocol services are divided into Cache L1 and Cache L2 specifications. The differences are the internal bandwidth size and memory cache size.
       *     **
       *     **Note** You are charged for using cache protocol services, which are in invitational preview. For more information about the billing method of cache protocol services, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, you can join the DingTalk group (group number: 31045006299).
       * *   Protocol Type
       *     Only NFSv3 is supported.
       * *   Others
       *     *   Only one protocol service can be created for a CPFS file system.
       *     *   A protocol service can use a maximum of 32 IP addresses that are allocated by a specified vSwitch. Make sure that the vSwitch can provide sufficient IP addresses.
       *
       * @param request CreateProtocolServiceRequest
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolService(const Models::CreateProtocolServiceRequest &request);

      /**
       * @summary Creates a job to permanently delete a file or directory from the recycle bin.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   If you permanently delete a directory, the files in the directory are recursively cleared.
       * *   You can run only one job at a time for a single file system to permanently delete the files from the file system. You cannot create a restoration or deletion job when a file or directory is being deleted.
       *
       * @param request CreateRecycleBinDeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecycleBinDeleteJobResponse
       */
      Models::CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJobWithOptions(const Models::CreateRecycleBinDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job to permanently delete a file or directory from the recycle bin.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   If you permanently delete a directory, the files in the directory are recursively cleared.
       * *   You can run only one job at a time for a single file system to permanently delete the files from the file system. You cannot create a restoration or deletion job when a file or directory is being deleted.
       *
       * @param request CreateRecycleBinDeleteJobRequest
       * @return CreateRecycleBinDeleteJobResponse
       */
      Models::CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJob(const Models::CreateRecycleBinDeleteJobRequest &request);

      /**
       * @summary Restores a file or directory from the recycle bin.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   You can run only one job at a time for a single file system to restore files to or clear files from the file system. You cannot create a restore or cleanup job when files are being restored from the recycle bin.
       * *   You can restore only one file or directory in a single restore job. If you restore a specified directory, all files in the directory are recursively restored.
       * *   After files are restored, the data of the files is defragmented. When the data is being defragmented, the read performance is slightly degraded.
       *
       * @param request CreateRecycleBinRestoreJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecycleBinRestoreJobResponse
       */
      Models::CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJobWithOptions(const Models::CreateRecycleBinRestoreJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a file or directory from the recycle bin.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   You can run only one job at a time for a single file system to restore files to or clear files from the file system. You cannot create a restore or cleanup job when files are being restored from the recycle bin.
       * *   You can restore only one file or directory in a single restore job. If you restore a specified directory, all files in the directory are recursively restored.
       * *   After files are restored, the data of the files is defragmented. When the data is being defragmented, the read performance is slightly degraded.
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
       * @summary Deletes a permission group.
       *
       * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
       *
       * @param request DeleteAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessGroupResponse
       */
      Models::DeleteAccessGroupResponse deleteAccessGroupWithOptions(const Models::DeleteAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a permission group.
       *
       * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
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
       * @summary Deletes a rule from a permission group.
       *
       * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
       *
       * @param request DeleteAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessRuleResponse
       */
      Models::DeleteAccessRuleResponse deleteAccessRuleWithOptions(const Models::DeleteAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule from a permission group.
       *
       * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
       *
       * @param request DeleteAccessRuleRequest
       * @return DeleteAccessRuleResponse
       */
      Models::DeleteAccessRuleResponse deleteAccessRule(const Models::DeleteAccessRuleRequest &request);

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
       * @summary Deletes a dataflow.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
       * *   You can delete the data flows that are only in the `Running` or `Stopped` state.
       * *   After a data flow is deleted, the resources related to the data flow are released and cannot be restored. You must create a data flow again if required.
       *
       * @param request DeleteDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataFlowResponse
       */
      Models::DeleteDataFlowResponse deleteDataFlowWithOptions(const Models::DeleteDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataflow.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
       * *   You can delete the data flows that are only in the `Running` or `Stopped` state.
       * *   After a data flow is deleted, the resources related to the data flow are released and cannot be restored. You must create a data flow again if required.
       *
       * @param request DeleteDataFlowRequest
       * @return DeleteDataFlowResponse
       */
      Models::DeleteDataFlowResponse deleteDataFlow(const Models::DeleteDataFlowRequest &request);

      /**
       * @summary Deletes a file system.
       *
       * @description *   Before you delete a file system, you must delete all mount targets of the file system.
       * *   Before you delete a file system, you must make sure that no lifecycle policy is created for the file system.
       * *   After a file system is deleted, the data on the file system cannot be restored. Proceed with caution.
       *
       * @param request DeleteFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystemWithOptions(const Models::DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file system.
       *
       * @description *   Before you delete a file system, you must delete all mount targets of the file system.
       * *   Before you delete a file system, you must make sure that no lifecycle policy is created for the file system.
       * *   After a file system is deleted, the data on the file system cannot be restored. Proceed with caution.
       *
       * @param request DeleteFileSystemRequest
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystem(const Models::DeleteFileSystemRequest &request);

      /**
       * @summary Deletes a fileset.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation. After you delete a fileset, all data in the fileset is deleted and cannot be restored. Proceed with caution.
       * *   If deletion protection is enabled for the fileset, you must disable deletion protection before you delete the fileset.
       * *   After you delete a fileset of CPFS for Lingjun, the storage space is not immediately released and will be recycled within 24 hours. If you want to release storage space immediately, you can clear the data in the fileset and then delete the fileset. Deleted data cannot be restored. Proceed with caution.
       *
       * @param request DeleteFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFilesetResponse
       */
      Models::DeleteFilesetResponse deleteFilesetWithOptions(const Models::DeleteFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a fileset.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation. After you delete a fileset, all data in the fileset is deleted and cannot be restored. Proceed with caution.
       * *   If deletion protection is enabled for the fileset, you must disable deletion protection before you delete the fileset.
       * *   After you delete a fileset of CPFS for Lingjun, the storage space is not immediately released and will be recycled within 24 hours. If you want to release storage space immediately, you can clear the data in the fileset and then delete the fileset. Deleted data cannot be restored. Proceed with caution.
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
       * @param request DeleteLDAPConfigRequest
       * @return DeleteLDAPConfigResponse
       */
      Models::DeleteLDAPConfigResponse deleteLDAPConfig(const Models::DeleteLDAPConfigRequest &request);

      /**
       * @summary Deletes a lifecycle policy.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request DeleteLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLifecyclePolicyResponse
       */
      Models::DeleteLifecyclePolicyResponse deleteLifecyclePolicyWithOptions(const Models::DeleteLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lifecycle policy.
       *
       * @description Only General-purpose NAS file systems support this operation.
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
       * @description After you delete a mount target, the mount target cannot be restored. Proceed with caution.
       *
       * @param request DeleteMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTargetWithOptions(const Models::DeleteMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a mount target.
       *
       * @description After you delete a mount target, the mount target cannot be restored. Proceed with caution.
       *
       * @param request DeleteMountTargetRequest
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTarget(const Models::DeleteMountTargetRequest &request);

      /**
       * @summary Deletes an export directory of a protocol service.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems on the China site (aliyun.com).
       *
       * @param request DeleteProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtocolMountTargetResponse
       */
      Models::DeleteProtocolMountTargetResponse deleteProtocolMountTargetWithOptions(const Models::DeleteProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an export directory of a protocol service.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems on the China site (aliyun.com).
       *
       * @param request DeleteProtocolMountTargetRequest
       * @return DeleteProtocolMountTargetResponse
       */
      Models::DeleteProtocolMountTargetResponse deleteProtocolMountTarget(const Models::DeleteProtocolMountTargetRequest &request);

      /**
       * @summary Deletes a protocol service of a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   When you delete a protocol service, the export directories in the protocol service are also deleted.
       *
       * @param request DeleteProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtocolServiceResponse
       */
      Models::DeleteProtocolServiceResponse deleteProtocolServiceWithOptions(const Models::DeleteProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protocol service of a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   When you delete a protocol service, the export directories in the protocol service are also deleted.
       *
       * @param request DeleteProtocolServiceRequest
       * @return DeleteProtocolServiceResponse
       */
      Models::DeleteProtocolServiceResponse deleteProtocolService(const Models::DeleteProtocolServiceRequest &request);

      /**
       * @summary Deletes a snapshot or cancels a snapshot that is being created.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a snapshot or cancels a snapshot that is being created.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Queries permission groups.
       *
       * @param request DescribeAccessGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessGroupsResponse
       */
      Models::DescribeAccessGroupsResponse describeAccessGroupsWithOptions(const Models::DescribeAccessGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries permission groups.
       *
       * @param request DescribeAccessGroupsRequest
       * @return DescribeAccessGroupsResponse
       */
      Models::DescribeAccessGroupsResponse describeAccessGroups(const Models::DescribeAccessGroupsRequest &request);

      /**
       * @summary Queries the details of an access point.
       *
       * @description Only General-purpose Network File System (NFS) file systems support this operation.
       *
       * @param request DescribeAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointResponse
       */
      Models::DescribeAccessPointResponse describeAccessPointWithOptions(const Models::DescribeAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access point.
       *
       * @description Only General-purpose Network File System (NFS) file systems support this operation.
       *
       * @param request DescribeAccessPointRequest
       * @return DescribeAccessPointResponse
       */
      Models::DescribeAccessPointResponse describeAccessPoint(const Models::DescribeAccessPointRequest &request);

      /**
       * @summary Queries the information about an access point.
       *
       * @description Only General-purpose Network File System (NFS) file systems support this operation.
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an access point.
       *
       * @description Only General-purpose Network File System (NFS) file systems support this operation.
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
       * @summary Queries data flow subtasks in batches.
       *
       * @description Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowSubTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowSubTasksResponse
       */
      Models::DescribeDataFlowSubTasksResponse describeDataFlowSubTasksWithOptions(const Models::DescribeDataFlowSubTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data flow subtasks in batches.
       *
       * @description Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowSubTasksRequest
       * @return DescribeDataFlowSubTasksResponse
       */
      Models::DescribeDataFlowSubTasksResponse describeDataFlowSubTasks(const Models::DescribeDataFlowSubTasksRequest &request);

      /**
       * @summary Queries the details of dataflow tasks.
       *
       * @description Only CPFS V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support this operation. You can view the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowTasksResponse
       */
      Models::DescribeDataFlowTasksResponse describeDataFlowTasksWithOptions(const Models::DescribeDataFlowTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of dataflow tasks.
       *
       * @description Only CPFS V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support this operation. You can view the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowTasksRequest
       * @return DescribeDataFlowTasksResponse
       */
      Models::DescribeDataFlowTasksResponse describeDataFlowTasks(const Models::DescribeDataFlowTasksRequest &request);

      /**
       * @summary Queries the dataflows of a CPFS file system.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * *   In Filters, FsetIds, DataFlowlds, SourceStorage, ThroughputList, and Status support exact match only. FileSystemPath, Description, and SourceStoragePath support fuzzy match.
       * *   Combined query is supported.
       *
       * @param request DescribeDataFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowsResponse
       */
      Models::DescribeDataFlowsResponse describeDataFlowsWithOptions(const Models::DescribeDataFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dataflows of a CPFS file system.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * *   In Filters, FsetIds, DataFlowlds, SourceStorage, ThroughputList, and Status support exact match only. FileSystemPath, Description, and SourceStoragePath support fuzzy match.
       * *   Combined query is supported.
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
       * @summary Queries file systems.
       *
       * @param request DescribeFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystemsWithOptions(const Models::DescribeFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries file systems.
       *
       * @param request DescribeFileSystemsRequest
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystems(const Models::DescribeFileSystemsRequest &request);

      /**
       * @summary Queries the information about created filesets.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation. You can view the version information on the file system details page in the console.
       * *   In Filters, FsetIds supports exact match only. FileSystemPath and Description support fuzzy match.
       * *   Combined query is supported.
       *
       * @param request DescribeFilesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesetsResponse
       */
      Models::DescribeFilesetsResponse describeFilesetsWithOptions(const Models::DescribeFilesetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about created filesets.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation. You can view the version information on the file system details page in the console.
       * *   In Filters, FsetIds supports exact match only. FileSystemPath and Description support fuzzy match.
       * *   Combined query is supported.
       *
       * @param request DescribeFilesetsRequest
       * @return DescribeFilesetsResponse
       */
      Models::DescribeFilesetsResponse describeFilesets(const Models::DescribeFilesetsRequest &request);

      /**
       * @summary Queries information about virtual storage channels associated with a file system.
       *
       * @description *   Only CPFS for Lingjun supports this operation.
       * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfoWithOptions(const Models::DescribeFilesystemsVscAttachInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about virtual storage channels associated with a file system.
       *
       * @description *   Only CPFS for Lingjun supports this operation.
       * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfo(const Models::DescribeFilesystemsVscAttachInfoRequest &request);

      /**
       * @summary Queries lifecycle policies.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request DescribeLifecyclePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecyclePoliciesResponse
       */
      Models::DescribeLifecyclePoliciesResponse describeLifecyclePoliciesWithOptions(const Models::DescribeLifecyclePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lifecycle policies.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request DescribeLifecyclePoliciesRequest
       * @return DescribeLifecyclePoliciesResponse
       */
      Models::DescribeLifecyclePoliciesResponse describeLifecyclePolicies(const Models::DescribeLifecyclePoliciesRequest &request);

      /**
       * @summary Queries the log dump information configured in log analysis.
       *
       * @param request DescribeLogAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogAnalysisResponse
       */
      Models::DescribeLogAnalysisResponse describeLogAnalysisWithOptions(const Models::DescribeLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log dump information configured in log analysis.
       *
       * @param request DescribeLogAnalysisRequest
       * @return DescribeLogAnalysisResponse
       */
      Models::DescribeLogAnalysisResponse describeLogAnalysis(const Models::DescribeLogAnalysisRequest &request);

      /**
       * @summary Queries mount targets.
       *
       * @param request DescribeMountTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargetsWithOptions(const Models::DescribeMountTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries mount targets.
       *
       * @param request DescribeMountTargetsRequest
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargets(const Models::DescribeMountTargetsRequest &request);

      /**
       * @summary Queries the clients on which a file system is mounted.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   This operation returns the clients that have accessed the specified file system within the last minute. If the file system is mounted on a client but the client did not access the file system within the last minute, the client is not included in the returned information.
       *
       * @param request DescribeMountedClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountedClientsResponse
       */
      Models::DescribeMountedClientsResponse describeMountedClientsWithOptions(const Models::DescribeMountedClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the clients on which a file system is mounted.
       *
       * @description *   Only General-purpose NAS file systems support this operation.
       * *   This operation returns the clients that have accessed the specified file system within the last minute. If the file system is mounted on a client but the client did not access the file system within the last minute, the client is not included in the returned information.
       *
       * @param request DescribeMountedClientsRequest
       * @return DescribeMountedClientsResponse
       */
      Models::DescribeMountedClientsResponse describeMountedClients(const Models::DescribeMountedClientsRequest &request);

      /**
       * @summary Queries whether the NFS ACL feature is enabled for a file system.
       *
       * @param request DescribeNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNfsAclResponse
       */
      Models::DescribeNfsAclResponse describeNfsAclWithOptions(const Models::DescribeNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the NFS ACL feature is enabled for a file system.
       *
       * @param request DescribeNfsAclRequest
       * @return DescribeNfsAclResponse
       */
      Models::DescribeNfsAclResponse describeNfsAcl(const Models::DescribeNfsAclRequest &request);

      /**
       * @summary Queries the export directories of a protocol service.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTargetWithOptions(const Models::DescribeProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export directories of a protocol service.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolMountTargetRequest
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTarget(const Models::DescribeProtocolMountTargetRequest &request);

      /**
       * @summary Queries the information about protocol services.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolServiceResponse
       */
      Models::DescribeProtocolServiceResponse describeProtocolServiceWithOptions(const Models::DescribeProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about protocol services.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolServiceRequest
       * @return DescribeProtocolServiceResponse
       */
      Models::DescribeProtocolServiceResponse describeProtocolService(const Models::DescribeProtocolServiceRequest &request);

      /**
       * @summary Queries the regions in which File Storage NAS is available.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions in which File Storage NAS is available.
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
       * @summary Queries the information about one or more snapshots of a file system.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more snapshots of a file system.
       *
       * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
       * *   Only advanced Extreme NAS file systems support this feature.
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
       * @summary Unassociates a VSC device from a file system.
       *
       * @description *   Only CPFS for Lingjun supports this operation.
       * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
       *
       * @param request DetachVscFromFilesystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachVscFromFilesystemsResponse
       */
      Models::DetachVscFromFilesystemsResponse detachVscFromFilesystemsWithOptions(const Models::DetachVscFromFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unassociates a VSC device from a file system.
       *
       * @description *   Only CPFS for Lingjun supports this operation.
       * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
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
       * @param request DisableNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableNfsAclResponse
       */
      Models::DisableNfsAclResponse disableNfsAclWithOptions(const Models::DisableNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the NFS ACL feature for a file system.
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
       * @param request EnableNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableNfsAclResponse
       */
      Models::EnableNfsAclResponse enableNfsAclWithOptions(const Models::EnableNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the NFS ACL feature for a file system.
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
       * @summary Queries whether a directory contains files that are stored in the Infrequent Access (IA) or Archive storage class, or whether a file is stored in the IA or Archive storage class.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request GetDirectoryOrFilePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectoryOrFilePropertiesResponse
       */
      Models::GetDirectoryOrFilePropertiesResponse getDirectoryOrFilePropertiesWithOptions(const Models::GetDirectoryOrFilePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a directory contains files that are stored in the Infrequent Access (IA) or Archive storage class, or whether a file is stored in the IA or Archive storage class.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request GetDirectoryOrFilePropertiesRequest
       * @return GetDirectoryOrFilePropertiesResponse
       */
      Models::GetDirectoryOrFilePropertiesResponse getDirectoryOrFileProperties(const Models::GetDirectoryOrFilePropertiesRequest &request);

      /**
       * @summary Queries the recycle bin configurations of a General-purpose NAS file system.
       *
       * @description Only General-purpose File Storage NAS (NAS) file systems support this operation.
       *
       * @param request GetRecycleBinAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecycleBinAttributeResponse
       */
      Models::GetRecycleBinAttributeResponse getRecycleBinAttributeWithOptions(const Models::GetRecycleBinAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recycle bin configurations of a General-purpose NAS file system.
       *
       * @description Only General-purpose File Storage NAS (NAS) file systems support this operation.
       *
       * @param request GetRecycleBinAttributeRequest
       * @return GetRecycleBinAttributeResponse
       */
      Models::GetRecycleBinAttributeResponse getRecycleBinAttribute(const Models::GetRecycleBinAttributeRequest &request);

      /**
       * @summary Queries the infrequently-accessed files in a specified directory of a General-purpose NAS file system and the subdirectories that contain the files.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ListDirectoriesAndFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDirectoriesAndFilesResponse
       */
      Models::ListDirectoriesAndFilesResponse listDirectoriesAndFilesWithOptions(const Models::ListDirectoriesAndFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the infrequently-accessed files in a specified directory of a General-purpose NAS file system and the subdirectories that contain the files.
       *
       * @description Only General-purpose NAS file systems support this operation.
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
       * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
       *
       * @param request ModifyAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessGroupResponse
       */
      Models::ModifyAccessGroupResponse modifyAccessGroupWithOptions(const Models::ModifyAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a permission group.
       *
       * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
       *
       * @param request ModifyAccessGroupRequest
       * @return ModifyAccessGroupResponse
       */
      Models::ModifyAccessGroupResponse modifyAccessGroup(const Models::ModifyAccessGroupRequest &request);

      /**
       * @summary Modifies the information about an access point.
       *
       * @description Only General-purpose Network File System (NFS) file systems support this operation.
       *
       * @param request ModifyAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessPointResponse
       */
      Models::ModifyAccessPointResponse modifyAccessPointWithOptions(const Models::ModifyAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an access point.
       *
       * @description Only General-purpose Network File System (NFS) file systems support this operation.
       *
       * @param request ModifyAccessPointRequest
       * @return ModifyAccessPointResponse
       */
      Models::ModifyAccessPointResponse modifyAccessPoint(const Models::ModifyAccessPointRequest &request);

      /**
       * @summary Modifies a rule in a permission group.
       *
       * @description The rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
       *
       * @param request ModifyAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessRuleResponse
       */
      Models::ModifyAccessRuleResponse modifyAccessRuleWithOptions(const Models::ModifyAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a rule in a permission group.
       *
       * @description The rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
       *
       * @param request ModifyAccessRuleRequest
       * @return ModifyAccessRuleResponse
       */
      Models::ModifyAccessRuleResponse modifyAccessRule(const Models::ModifyAccessRuleRequest &request);

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
       * @summary Modifies the attributes of a dataflow.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows.
       * *   You can modify the attributes only of the data flows that are in the `Running` state.
       * *   It generally takes 2 to 5 minutes to modify the attributes of a data flow. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the data flow to be modified.
       * *   CPFS data flow specifications:
       *     *   The data flow throughput supports the following specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow throughput is the maximum transmission bandwidth that can be reached when data is imported or exported for a data flow.
       *     *   Inventory query: If you set the DryRun parameter to true, you can check whether the resources for the dataflow whose throughput is changed meet the requirements.
       * *   Billing of CPFS file systems
       *     Changing the dataflow throughput involves the billing of dataflow bandwidth. We recommend that you understand CPFS billing methods in advance. For more information, see [Billing methods and billable items of CPFS](https://help.aliyun.com/document_detail/111858.html).
       *
       * @param request ModifyDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataFlowResponse
       */
      Models::ModifyDataFlowResponse modifyDataFlowWithOptions(const Models::ModifyDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a dataflow.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows.
       * *   You can modify the attributes only of the data flows that are in the `Running` state.
       * *   It generally takes 2 to 5 minutes to modify the attributes of a data flow. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the data flow to be modified.
       * *   CPFS data flow specifications:
       *     *   The data flow throughput supports the following specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow throughput is the maximum transmission bandwidth that can be reached when data is imported or exported for a data flow.
       *     *   Inventory query: If you set the DryRun parameter to true, you can check whether the resources for the dataflow whose throughput is changed meet the requirements.
       * *   Billing of CPFS file systems
       *     Changing the dataflow throughput involves the billing of dataflow bandwidth. We recommend that you understand CPFS billing methods in advance. For more information, see [Billing methods and billable items of CPFS](https://help.aliyun.com/document_detail/111858.html).
       *
       * @param request ModifyDataFlowRequest
       * @return ModifyDataFlowResponse
       */
      Models::ModifyDataFlowResponse modifyDataFlow(const Models::ModifyDataFlowRequest &request);

      /**
       * @summary Modifies an AutoRefresh configuration of a dataflow.
       *
       * @description *   This operation is available only to CPFS file systems.
       * *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * *   You can modify the AutoRefresh configurations only for the dataflows that are in the `Running` or `Stopped` state.
       * *   It generally takes 2 to 5 minutes to modify an AutoRefresh configuration. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the task of modifying an AutoRefresh configuration.
       *
       * @param request ModifyDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataFlowAutoRefreshResponse
       */
      Models::ModifyDataFlowAutoRefreshResponse modifyDataFlowAutoRefreshWithOptions(const Models::ModifyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an AutoRefresh configuration of a dataflow.
       *
       * @description *   This operation is available only to CPFS file systems.
       * *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * *   You can modify the AutoRefresh configurations only for the dataflows that are in the `Running` or `Stopped` state.
       * *   It generally takes 2 to 5 minutes to modify an AutoRefresh configuration. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the task of modifying an AutoRefresh configuration.
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
       * @description Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation.
       *
       * @param request ModifyFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFilesetResponse
       */
      Models::ModifyFilesetResponse modifyFilesetWithOptions(const Models::ModifyFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a fileset.
       *
       * @description Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation.
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
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ModifyLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLifecyclePolicyResponse
       */
      Models::ModifyLifecyclePolicyResponse modifyLifecyclePolicyWithOptions(const Models::ModifyLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a lifecycle policy.
       *
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request ModifyLifecyclePolicyRequest
       * @return ModifyLifecyclePolicyResponse
       */
      Models::ModifyLifecyclePolicyResponse modifyLifecyclePolicy(const Models::ModifyLifecyclePolicyRequest &request);

      /**
       * @summary Modifies a mount target.
       *
       * @param request ModifyMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMountTargetResponse
       */
      Models::ModifyMountTargetResponse modifyMountTargetWithOptions(const Models::ModifyMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a mount target.
       *
       * @param request ModifyMountTargetRequest
       * @return ModifyMountTargetResponse
       */
      Models::ModifyMountTargetResponse modifyMountTarget(const Models::ModifyMountTargetRequest &request);

      /**
       * @summary Modifies the export directory parameters of a protocol service. Only the description can be modified. The virtual private cloud (VPC) ID and vSwitch ID cannot be changed. To change these IDs, you must delete the export directory and create a new one.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request ModifyProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProtocolMountTargetResponse
       */
      Models::ModifyProtocolMountTargetResponse modifyProtocolMountTargetWithOptions(const Models::ModifyProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the export directory parameters of a protocol service. Only the description can be modified. The virtual private cloud (VPC) ID and vSwitch ID cannot be changed. To change these IDs, you must delete the export directory and create a new one.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request ModifyProtocolMountTargetRequest
       * @return ModifyProtocolMountTargetResponse
       */
      Models::ModifyProtocolMountTargetResponse modifyProtocolMountTarget(const Models::ModifyProtocolMountTargetRequest &request);

      /**
       * @summary Modifies a protocol service. You can modify the description of a protocol service.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems on the China site (aliyun.com).
       *
       * @param request ModifyProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProtocolServiceResponse
       */
      Models::ModifyProtocolServiceResponse modifyProtocolServiceWithOptions(const Models::ModifyProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a protocol service. You can modify the description of a protocol service.
       *
       * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems on the China site (aliyun.com).
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
       * @summary Activates File Storage NAS.
       *
       * @param request OpenNASServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenNASServiceResponse
       */
      Models::OpenNASServiceResponse openNASServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates File Storage NAS.
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
       * @description *   Only Cloud Parallel File Storage (CPFS) for Lingjun V2.7.0 and later support this operation.
       * *   The minimum capacity quota of a fileset is 10 GiB. The scaling step size is 1 GiB.
       * *   A fileset supports a minimum of 10,000 files or directories and a maximum of 10 billion files or directories. The scaling step size is 1.
       * *   When modifying a directory quota, you must set the new capacity or file quantity higher than what is currently used.
       * *   You must configure at least one of the Capacity Limit (GiB) and File Limit parameters.
       * *   The quota statistics have a 15-minute latency. The actual usage takes effect after 15 minutes.
       *
       * @param request SetFilesetQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFilesetQuotaResponse
       */
      Models::SetFilesetQuotaResponse setFilesetQuotaWithOptions(const Models::SetFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the quota for a fileset.
       *
       * @description *   Only Cloud Parallel File Storage (CPFS) for Lingjun V2.7.0 and later support this operation.
       * *   The minimum capacity quota of a fileset is 10 GiB. The scaling step size is 1 GiB.
       * *   A fileset supports a minimum of 10,000 files or directories and a maximum of 10 billion files or directories. The scaling step size is 1.
       * *   When modifying a directory quota, you must set the new capacity or file quantity higher than what is currently used.
       * *   You must configure at least one of the Capacity Limit (GiB) and File Limit parameters.
       * *   The quota statistics have a 15-minute latency. The actual usage takes effect after 15 minutes.
       *
       * @param request SetFilesetQuotaRequest
       * @return SetFilesetQuotaResponse
       */
      Models::SetFilesetQuotaResponse setFilesetQuota(const Models::SetFilesetQuotaRequest &request);

      /**
       * @summary Enables a dataflow.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * *   You can enable the data flows that are only in the `Stopped` state.
       * *   If the value of DryRun is `true`, you can check whether sufficient resources are available to enable the specified data flow. If the resources are insufficient, the data flow cannot be enabled.
       * *   It generally takes 2 to 5 minutes to enable a data flow. You can query the data flow status by calling the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation.
       *
       * @param request StartDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDataFlowResponse
       */
      Models::StartDataFlowResponse startDataFlowWithOptions(const Models::StartDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a dataflow.
       *
       * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
       * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * *   You can enable the data flows that are only in the `Stopped` state.
       * *   If the value of DryRun is `true`, you can check whether sufficient resources are available to enable the specified data flow. If the resources are insufficient, the data flow cannot be enabled.
       * *   It generally takes 2 to 5 minutes to enable a data flow. You can query the data flow status by calling the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation.
       *
       * @param request StartDataFlowRequest
       * @return StartDataFlowResponse
       */
      Models::StartDataFlowResponse startDataFlow(const Models::StartDataFlowRequest &request);

      /**
       * @summary Disables a dataflow.
       *
       * @description *   This operation is available only to CPFS file systems.
       * *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * *   You can disable only the dataflows that are in the `Running` state.
       * *   After a dataflow is disabled, you cannot create a dataflow task for the dataflow. If AutoRefresh is configured, source data updates are not synchronized to CPFS.
       * *   After a dataflow is disabled, the dataflow throughput is no longer billed because resources are reclaimed. However, the dataflow may fail to be restarted due to insufficient resources.
       * *   It generally takes 2 to 5 minutes to disable a dataflow. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) operation to query the dataflow status.
       *
       * @param request StopDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDataFlowResponse
       */
      Models::StopDataFlowResponse stopDataFlowWithOptions(const Models::StopDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a dataflow.
       *
       * @description *   This operation is available only to CPFS file systems.
       * *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * *   You can disable only the dataflows that are in the `Running` state.
       * *   After a dataflow is disabled, you cannot create a dataflow task for the dataflow. If AutoRefresh is configured, source data updates are not synchronized to CPFS.
       * *   After a dataflow is disabled, the dataflow throughput is no longer billed because resources are reclaimed. However, the dataflow may fail to be restarted due to insufficient resources.
       * *   It generally takes 2 to 5 minutes to disable a dataflow. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) operation to query the dataflow status.
       *
       * @param request StopDataFlowRequest
       * @return StopDataFlowResponse
       */
      Models::StopDataFlowResponse stopDataFlow(const Models::StopDataFlowRequest &request);

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
       * @description *   Only Extreme NAS file systems and CPFS file systems can be scaled up. CPFS file systems are available only on the China site (aliyun.com).
       * *   A General-purpose NAS file system is automatically scaled up. You do not need to call this operation to scale up a General-purpose NAS file system.
       *
       * @param request UpgradeFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeFileSystemResponse
       */
      Models::UpgradeFileSystemResponse upgradeFileSystemWithOptions(const Models::UpgradeFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales up an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description *   Only Extreme NAS file systems and CPFS file systems can be scaled up. CPFS file systems are available only on the China site (aliyun.com).
       * *   A General-purpose NAS file system is automatically scaled up. You do not need to call this operation to scale up a General-purpose NAS file system.
       *
       * @param request UpgradeFileSystemRequest
       * @return UpgradeFileSystemResponse
       */
      Models::UpgradeFileSystemResponse upgradeFileSystem(const Models::UpgradeFileSystemRequest &request);
  };
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
