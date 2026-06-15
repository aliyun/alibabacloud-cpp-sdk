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
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持状态为`Running（正常）`状态的数据流动添加自动更新配置。
       * - 一个数据流动最多可以添加5个自动更新配置。
       * - 创建自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html)查询数据流动状态。
       * - 自动更新依赖EventBridge收集源端OSS存储的对象修改事件。需要先[开通EventBridge服务](https://help.aliyun.com/document_detail/182246.html)。
       *   > CPFS在EventBridge创建的事件总线、事件规则带有`Create for cpfs auto refresh`的描述，事件总线、事件规则都不能修改和删除，否则自动更新无法正常工作。
       * - 自动更新的作用对象是prefix，由参数RefreshPath指定。在CPFS数据流动对prefix配置自动更新时，会在用户侧创建事件总线，并创建源端OSS Bucket的prefix的事件规则。当源端OSS Bucket的prefix内发生对象修改后，会在EventBridge中产生OSS事件，由CPFS数据流动处理。
       * - 配置自动更新（AutoRefresh）后，当源端存储数据发生变化时，变化的元数据会自动同步到CPFS文件系统，变化的数据会在用户访问文件时按需加载，或者启动数据流动任务加载数据。
       * - 自动更新间隔（AutoRefreshInterval）指CPFS每隔该时间间隔，检查源端OSS Bucket该prefix内是否存在数据更新，如果有数据更新则启动自动更新任务。当OSS源端的对象修改事件频率超过CPFS数据流动处理能力时，自动更新任务会堆积，元数据更新会延迟，数据流动的状态为Misconfigured，您可以提升数据流动规格，或者降低OSS修改频率来解决。
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefreshWithOptions(const Models::ApplyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds AutoRefresh configurations to a dataflow.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
       * - 仅支持状态为`Running（正常）`状态的数据流动添加自动更新配置。
       * - 一个数据流动最多可以添加5个自动更新配置。
       * - 创建自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html)查询数据流动状态。
       * - 自动更新依赖EventBridge收集源端OSS存储的对象修改事件。需要先[开通EventBridge服务](https://help.aliyun.com/document_detail/182246.html)。
       *   > CPFS在EventBridge创建的事件总线、事件规则带有`Create for cpfs auto refresh`的描述，事件总线、事件规则都不能修改和删除，否则自动更新无法正常工作。
       * - 自动更新的作用对象是prefix，由参数RefreshPath指定。在CPFS数据流动对prefix配置自动更新时，会在用户侧创建事件总线，并创建源端OSS Bucket的prefix的事件规则。当源端OSS Bucket的prefix内发生对象修改后，会在EventBridge中产生OSS事件，由CPFS数据流动处理。
       * - 配置自动更新（AutoRefresh）后，当源端存储数据发生变化时，变化的元数据会自动同步到CPFS文件系统，变化的数据会在用户访问文件时按需加载，或者启动数据流动任务加载数据。
       * - 自动更新间隔（AutoRefreshInterval）指CPFS每隔该时间间隔，检查源端OSS Bucket该prefix内是否存在数据更新，如果有数据更新则启动自动更新任务。当OSS源端的对象修改事件频率超过CPFS数据流动处理能力时，自动更新任务会堆积，元数据更新会延迟，数据流动的状态为Misconfigured，您可以提升数据流动规格，或者降低OSS修改频率来解决。
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefresh(const Models::ApplyDataFlowAutoRefreshRequest &request);

      /**
       * @summary Associates the VSC device with the file system.
       *
       * @description - 仅CPFS智算版支持该功能。
       * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
       *
       * @param request AttachVscToFilesystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVscToFilesystemsResponse
       */
      Models::AttachVscToFilesystemsResponse attachVscToFilesystemsWithOptions(const Models::AttachVscToFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates the VSC device with the file system.
       *
       * @description - 仅CPFS智算版支持该功能。
       * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
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
       * @description - 一个阿里云账号在单个地域内最多可以创建20个权限组。
       * - 一个权限组最多支持添加300个规则。
       * - 仅支持创建专有网络类型的权限组。
       *
       * @param request CreateAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroupWithOptions(const Models::CreateAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission group.
       *
       * @description - 一个阿里云账号在单个地域内最多可以创建20个权限组。
       * - 一个权限组最多支持添加300个规则。
       * - 仅支持创建专有网络类型的权限组。
       *
       * @param request CreateAccessGroupRequest
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroup(const Models::CreateAccessGroupRequest &request);

      /**
       * @summary Creates an access point.
       *
       * @description - 在使用CreateAccessPoint接口创建接入点时部分资源的生成是异步完成的。因此在执行CreateAccessPoint接口成功后，请先调用[DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html)或者[DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html)接口查询接入点状态，当接入点状态为**Active**后再执行挂载文件系统操作，否则可能会挂载失败。
       * - 仅通用型NAS NFS协议文件系统支持该功能。
       * - 如果开启RAM策略（EnabledRam），需要配置对应的RAM权限，具体请参考[管理接入点](https://help.aliyun.com/document_detail/2545998.html)。
       *
       * @param request CreateAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessPointResponse
       */
      Models::CreateAccessPointResponse createAccessPointWithOptions(const Models::CreateAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access point.
       *
       * @description - 在使用CreateAccessPoint接口创建接入点时部分资源的生成是异步完成的。因此在执行CreateAccessPoint接口成功后，请先调用[DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html)或者[DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html)接口查询接入点状态，当接入点状态为**Active**后再执行挂载文件系统操作，否则可能会挂载失败。
       * - 仅通用型NAS NFS协议文件系统支持该功能。
       * - 如果开启RAM策略（EnabledRam），需要配置对应的RAM权限，具体请参考[管理接入点](https://help.aliyun.com/document_detail/2545998.html)。
       *
       * @param request CreateAccessPointRequest
       * @return CreateAccessPointResponse
       */
      Models::CreateAccessPointResponse createAccessPoint(const Models::CreateAccessPointRequest &request);

      /**
       * @summary Creates a rule for a permission group.
       *
       * @description 一个权限组最多支持添加300个规则。
       *
       * @param request CreateAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRuleWithOptions(const Models::CreateAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule for a permission group.
       *
       * @description 一个权限组最多支持添加300个规则。
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
       * @description - 本接口适用于以下产品：
       * | 产品 | 文件系统ID格式 | 支持数据流动的最低版本 |
       * |------|----------------|------------------------|
       * | **CPFS通用版** | 以 `cpfs-` 开头，例如 cpfs-125487**** | 2.2.0 及以上 |
       * | **CPFS智算版** | 以 `bmcpfs-` 开头，例如 bmcpfs-0015**** | 2.4.0 及以上 |
       * > ：CPFS通用版和CPFS智算版共用同一套API，但在参数取值和功能支持上有所区别。请根据您使用的产品类型参考相应章节。
       * - 基础操作
       *     - CPFS通用版、CPFS智算版文件系统状态为运行中时，才能创建数据流动。
       *     - 一个CPFS通用版或CPFS智算版文件系统最多允许创建 **10 个**数据流动。
       *     - 创建数据流动一般耗时 2～5 分钟，您可通过 [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) 检查数据流动创建是否完成。
       * - 权限
       *     创建数据流动时，文件存储CPFS会获取`AliyunServiceRoleForNasOssDataflow`和`AliyunServiceRoleForNasEventNotification`两个服务关联角色。更多信息，请参见[CPFS服务关联角色](https://help.aliyun.com/document_detail/185138.html)。
       * - CPFS通用版使用说明
       *      本章节适用于文件系统ID以 `cpfs-` 开头的CPFS通用版。
       *   - 计费
       *     - 创建数据流动将按照数据流动带宽计费。更多信息，请参见[CPFS通用版计费说明](https://help.aliyun.com/document_detail/111858.html)。
       *     - 使用自动更新（AutoRefresh）时，需要通过EventBridge收集源端OSS存储的对象修改事件，事件将产生费用。更多信息，请参见[EventBridge计费说明](https://help.aliyun.com/document_detail/163752.html)。
       *   - 数据流动规格
       *       - 数据流动带宽（Throughput）支持600 MB/s、1200 MB/s和1500 MB/s三种规格。数据流动带宽是指该数据流动进行导入或导出数据时能达到的最大传输带宽。
       *     - 创建一个数据流动，会消耗1个文件存储CPFS通用版挂载点使用的vSwitch IP地址，请您确保该vSwitch IP资源充足。
       *     - 库存查询：当设置DryRun为true时，可校验创建该规格的数据流动的资源是否满足。
       *   - Fileset
       *     - 数据流动的目的端是CPFS通用版文件系统中的Fileset。Fileset是CPFS通用版文件系统中一种新的目录树结构，是在父文件系统中的一个小型文件系统，拥有独立的inode空间和管理能力。
       *     -  创建数据流动时该Fileset必须已存在，且不能与其他Fileset嵌套。一个Fileset上只能创建一个数据流动，对应一个源端存储。
       *     - Fileset内的文件数量上限是100万，如果从OSS Bucket导入的文件数量超过上限，创建新文件会报错`no space`。
       *    > 如果Fileset中已存在数据，创建数据流动后，Fileset内的已有数据会被清空，替换为OSS端同步过来的数据。
       *   - 自动更新
       *     -  配置自动更新（AutoRefresh）后，当源端存储数据发生变化时，变化的元数据会自动同步到CPFS通用版文件系统，变化的数据会在用户访问文件时按需加载，或者启动数据流动任务加载数据。
       *     -  自动更新依赖EventBridge收集源端OSS存储的对象修改事件。需要先[开通EventBridge服务](https://help.aliyun.com/document_detail/182246.html)。
       *     -  自动更新的作用范围是prefix，由参数RefreshPath指定。一个数据流动最多可配置5个自动更新目录。
       *     -  自动更新间隔（AutoRefreshInterval）指CPFS通用版设置的自动更新时间，检查源端OSS Bucket该prefix内是否存在数据更新，如果有数据更新则启动自动更新任务。当OSS源端的对象修改事件频率超过CPFS通用版数据流动处理能力时，自动更新任务会堆积，元数据更新会延迟，数据流动的状态为`Misconfigured`，您可以提升数据流动规格，或者降低OSS修改频率来解决。
       *     -  在文件存储CPFS通用版数据流动对prefix配置自动更新时，会在用户侧创建事件总线，并创建源端OSS Bucket的prefix的事件规则。当源端OSS Bucket的prefix内发生对象修改后，会在EventBridge中产生OSS事件，由CPFS通用版数据流动处理。
       *      > 文件存储CPFS通用版在EventBridge创建的事件总线、事件规则带有`Create for cpfs auto refresh`的描述，事件总线、事件规则都不能修改或删除，否则自动更新无法正常工作。
       *   -  源端存储
       *      -  源端存储仅支持OSS。数据流动的源端存储（SourceStorage）必须是OSS Bucket。
       *      -  CPFS通用版数据流动支持加密和非加密两种方式访问OSS。选择加密（SSL）方式访问OSS时，需确认OSS Bucket的传输加密支持加密访问方式。
       *      -  如果多个CPFS通用版的数据流动、或者同一个文件存储CPFS通用版的多个数据流动的源端存储是同一个OSS Bucket，为了防止多个文件存储CPFS通用版向同一个源导出数据产生数据冲突，需要该OSS Bucket开启版本控制。
       *      -  不支持跨地域的OSS数据流动，OSS Bucket必须与CPFS通用版文件系统在同一个地域。
       *        > 创建数据流动前，您需要先给源端OSS Bucket设置标签（key: cpfs-dataflow, value: true），以便CPFS通用版数据流动访问该Bucket的数据。在数据流动的使用过程中，不能删除和修改该标签，否则CPFS通用版数据流动无法访问Bucket的数据。
       * - CPFS智算版使用说明
       *      本章节适用于文件系统ID以 `bmcpfs-` 开头的CPFS智算版。
       *   -  源端存储
       *       -  源端存储仅支持OSS。数据流动的源端存储（SourceStorage）必须是OSS Bucket。
       *       -  CPFS智算版数据流动支持加密和非加密两种方式访问OSS。选择加密（SSL）方式访问OSS时，需确认OSS Bucket的传输加密支持加密访问方式。
       *       -  如果多个CPFS智算版的数据流动、或者同一个CPFS智算版的多个数据流动的源端存储是同一个OSS Bucket，为了防止多个CPFS智算版向同一个源导出数据产生数据冲突，需要该OSS Bucket开启版本控制。
       *       -  不支持跨地域的OSS数据流动，OSS Bucket必须与CPFS智算版文件系统在同一个地域。
       *      - CPFS智算版2.6.0及以上版本支持使用跨账号OSS进行数据流动的创建。
       *      - 只有在使用跨账号的OSS时，需要设置account id参数。
       *      - 使用跨账号的OSS时，需要先进行账号授权。具体授权请参考[跨账号数据流动授权](https://help.aliyun.com/document_detail/2713462.html)。
       *        > 创建数据流动前，您需要先给源端OSS Bucket设置标签（key: cpfs-dataflow, value: true），以便CPFS智算版数据流动访问该Bucket的数据。在数据流动的使用过程中，不能删除和修改该标签，否则CPFS智算版数据流动无法访问Bucket的数据。
       *   - 数据流动对文件系统的限制
       *     - 在数据流动关联的文件系统路径中，不可对非空目录执行重命名操作，否则报错Permission Denied或者目录非空。
       *      - 目录、文件名中的特殊字符需要谨慎使用，支持大小写字母、数字、感叹号（！）、短划线（-）、下划线（_）、半角句号（.）、星号（*）和半角圆括号（()）。
       *     - 不支持超长路径，数据流动支持的路径最大长度是1023字符。
       *   - 数据流动导入限制
       *     - Symlink类型的文件导入到CPFS智算版后，会转变为包含数据的普通文件，并丢失Symlink信息。
       *     - 如果OSS Bucket存在多个版本，则只复制最新的版本。
       *     - 不支持长度大于255字节的文件名或子目录名。
       *   - 数据流动导出限制
       *     - Symlink类型的文件在同步到OSS后，不会同步Symlink所指向的文件，而是会变成一个普通的无数据空白对象。
       *     - Hardlink类型的文件仅作为普通文件同步到OSS。
       *     - Socket、Device、Pipe类型的文件导出到OSS Bucket时，会变成一个普通的无数据空白对象。
       *     - 不支持长度大于1023字符的目录路径。
       *
       * @param request CreateDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowResponse
       */
      Models::CreateDataFlowResponse createDataFlowWithOptions(const Models::CreateDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataflow for a Cloud Parallel File Storage (CPFS) file system and source storage.
       *
       * @description - 本接口适用于以下产品：
       * | 产品 | 文件系统ID格式 | 支持数据流动的最低版本 |
       * |------|----------------|------------------------|
       * | **CPFS通用版** | 以 `cpfs-` 开头，例如 cpfs-125487**** | 2.2.0 及以上 |
       * | **CPFS智算版** | 以 `bmcpfs-` 开头，例如 bmcpfs-0015**** | 2.4.0 及以上 |
       * > ：CPFS通用版和CPFS智算版共用同一套API，但在参数取值和功能支持上有所区别。请根据您使用的产品类型参考相应章节。
       * - 基础操作
       *     - CPFS通用版、CPFS智算版文件系统状态为运行中时，才能创建数据流动。
       *     - 一个CPFS通用版或CPFS智算版文件系统最多允许创建 **10 个**数据流动。
       *     - 创建数据流动一般耗时 2～5 分钟，您可通过 [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) 检查数据流动创建是否完成。
       * - 权限
       *     创建数据流动时，文件存储CPFS会获取`AliyunServiceRoleForNasOssDataflow`和`AliyunServiceRoleForNasEventNotification`两个服务关联角色。更多信息，请参见[CPFS服务关联角色](https://help.aliyun.com/document_detail/185138.html)。
       * - CPFS通用版使用说明
       *      本章节适用于文件系统ID以 `cpfs-` 开头的CPFS通用版。
       *   - 计费
       *     - 创建数据流动将按照数据流动带宽计费。更多信息，请参见[CPFS通用版计费说明](https://help.aliyun.com/document_detail/111858.html)。
       *     - 使用自动更新（AutoRefresh）时，需要通过EventBridge收集源端OSS存储的对象修改事件，事件将产生费用。更多信息，请参见[EventBridge计费说明](https://help.aliyun.com/document_detail/163752.html)。
       *   - 数据流动规格
       *       - 数据流动带宽（Throughput）支持600 MB/s、1200 MB/s和1500 MB/s三种规格。数据流动带宽是指该数据流动进行导入或导出数据时能达到的最大传输带宽。
       *     - 创建一个数据流动，会消耗1个文件存储CPFS通用版挂载点使用的vSwitch IP地址，请您确保该vSwitch IP资源充足。
       *     - 库存查询：当设置DryRun为true时，可校验创建该规格的数据流动的资源是否满足。
       *   - Fileset
       *     - 数据流动的目的端是CPFS通用版文件系统中的Fileset。Fileset是CPFS通用版文件系统中一种新的目录树结构，是在父文件系统中的一个小型文件系统，拥有独立的inode空间和管理能力。
       *     -  创建数据流动时该Fileset必须已存在，且不能与其他Fileset嵌套。一个Fileset上只能创建一个数据流动，对应一个源端存储。
       *     - Fileset内的文件数量上限是100万，如果从OSS Bucket导入的文件数量超过上限，创建新文件会报错`no space`。
       *    > 如果Fileset中已存在数据，创建数据流动后，Fileset内的已有数据会被清空，替换为OSS端同步过来的数据。
       *   - 自动更新
       *     -  配置自动更新（AutoRefresh）后，当源端存储数据发生变化时，变化的元数据会自动同步到CPFS通用版文件系统，变化的数据会在用户访问文件时按需加载，或者启动数据流动任务加载数据。
       *     -  自动更新依赖EventBridge收集源端OSS存储的对象修改事件。需要先[开通EventBridge服务](https://help.aliyun.com/document_detail/182246.html)。
       *     -  自动更新的作用范围是prefix，由参数RefreshPath指定。一个数据流动最多可配置5个自动更新目录。
       *     -  自动更新间隔（AutoRefreshInterval）指CPFS通用版设置的自动更新时间，检查源端OSS Bucket该prefix内是否存在数据更新，如果有数据更新则启动自动更新任务。当OSS源端的对象修改事件频率超过CPFS通用版数据流动处理能力时，自动更新任务会堆积，元数据更新会延迟，数据流动的状态为`Misconfigured`，您可以提升数据流动规格，或者降低OSS修改频率来解决。
       *     -  在文件存储CPFS通用版数据流动对prefix配置自动更新时，会在用户侧创建事件总线，并创建源端OSS Bucket的prefix的事件规则。当源端OSS Bucket的prefix内发生对象修改后，会在EventBridge中产生OSS事件，由CPFS通用版数据流动处理。
       *      > 文件存储CPFS通用版在EventBridge创建的事件总线、事件规则带有`Create for cpfs auto refresh`的描述，事件总线、事件规则都不能修改或删除，否则自动更新无法正常工作。
       *   -  源端存储
       *      -  源端存储仅支持OSS。数据流动的源端存储（SourceStorage）必须是OSS Bucket。
       *      -  CPFS通用版数据流动支持加密和非加密两种方式访问OSS。选择加密（SSL）方式访问OSS时，需确认OSS Bucket的传输加密支持加密访问方式。
       *      -  如果多个CPFS通用版的数据流动、或者同一个文件存储CPFS通用版的多个数据流动的源端存储是同一个OSS Bucket，为了防止多个文件存储CPFS通用版向同一个源导出数据产生数据冲突，需要该OSS Bucket开启版本控制。
       *      -  不支持跨地域的OSS数据流动，OSS Bucket必须与CPFS通用版文件系统在同一个地域。
       *        > 创建数据流动前，您需要先给源端OSS Bucket设置标签（key: cpfs-dataflow, value: true），以便CPFS通用版数据流动访问该Bucket的数据。在数据流动的使用过程中，不能删除和修改该标签，否则CPFS通用版数据流动无法访问Bucket的数据。
       * - CPFS智算版使用说明
       *      本章节适用于文件系统ID以 `bmcpfs-` 开头的CPFS智算版。
       *   -  源端存储
       *       -  源端存储仅支持OSS。数据流动的源端存储（SourceStorage）必须是OSS Bucket。
       *       -  CPFS智算版数据流动支持加密和非加密两种方式访问OSS。选择加密（SSL）方式访问OSS时，需确认OSS Bucket的传输加密支持加密访问方式。
       *       -  如果多个CPFS智算版的数据流动、或者同一个CPFS智算版的多个数据流动的源端存储是同一个OSS Bucket，为了防止多个CPFS智算版向同一个源导出数据产生数据冲突，需要该OSS Bucket开启版本控制。
       *       -  不支持跨地域的OSS数据流动，OSS Bucket必须与CPFS智算版文件系统在同一个地域。
       *      - CPFS智算版2.6.0及以上版本支持使用跨账号OSS进行数据流动的创建。
       *      - 只有在使用跨账号的OSS时，需要设置account id参数。
       *      - 使用跨账号的OSS时，需要先进行账号授权。具体授权请参考[跨账号数据流动授权](https://help.aliyun.com/document_detail/2713462.html)。
       *        > 创建数据流动前，您需要先给源端OSS Bucket设置标签（key: cpfs-dataflow, value: true），以便CPFS智算版数据流动访问该Bucket的数据。在数据流动的使用过程中，不能删除和修改该标签，否则CPFS智算版数据流动无法访问Bucket的数据。
       *   - 数据流动对文件系统的限制
       *     - 在数据流动关联的文件系统路径中，不可对非空目录执行重命名操作，否则报错Permission Denied或者目录非空。
       *      - 目录、文件名中的特殊字符需要谨慎使用，支持大小写字母、数字、感叹号（！）、短划线（-）、下划线（_）、半角句号（.）、星号（*）和半角圆括号（()）。
       *     - 不支持超长路径，数据流动支持的路径最大长度是1023字符。
       *   - 数据流动导入限制
       *     - Symlink类型的文件导入到CPFS智算版后，会转变为包含数据的普通文件，并丢失Symlink信息。
       *     - 如果OSS Bucket存在多个版本，则只复制最新的版本。
       *     - 不支持长度大于255字节的文件名或子目录名。
       *   - 数据流动导出限制
       *     - Symlink类型的文件在同步到OSS后，不会同步Symlink所指向的文件，而是会变成一个普通的无数据空白对象。
       *     - Hardlink类型的文件仅作为普通文件同步到OSS。
       *     - Socket、Device、Pipe类型的文件导出到OSS Bucket时，会变成一个普通的无数据空白对象。
       *     - 不支持长度大于1023字符的目录路径。
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
       * @description - 请确保在使用该接口前，已充分了解NAS产品的计费说明和价格。更多信息，请参见[计费说明](https://help.aliyun.com/document_detail/178365.html)和[价格](https://www.aliyun.com/price/product?#/nas/detail)。
       * -  创建文件系统实例需要通过实名认证。具体操作，请参见[账号实名认证](https://help.aliyun.com/document_detail/48263.html)。
       * -  调用此接口将自动创建操作所需的NAS服务关联角色。更多信息，请参见[管理NAS服务关联角色](https://help.aliyun.com/document_detail/208530.html)。
       *
       * @param request CreateFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystemWithOptions(const Models::CreateFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file system.
       *
       * @description - 请确保在使用该接口前，已充分了解NAS产品的计费说明和价格。更多信息，请参见[计费说明](https://help.aliyun.com/document_detail/178365.html)和[价格](https://www.aliyun.com/price/product?#/nas/detail)。
       * -  创建文件系统实例需要通过实名认证。具体操作，请参见[账号实名认证](https://help.aliyun.com/document_detail/48263.html)。
       * -  调用此接口将自动创建操作所需的NAS服务关联角色。更多信息，请参见[管理NAS服务关联角色](https://help.aliyun.com/document_detail/208530.html)。
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
       * @summary Creates a lifecycle policy.
       *
       * @description - 仅通用型NAS文件系统和CPFS智算版支持创建生命周期管理策略。
       * - 每个 CPFS 智算版文件系统最多创建 10 个 Auto 类型 和 100 个 OnDemand 类型的生命周期管理策略。
       * - 每个地域可以创建 20 个通用型 NAS 的生命周期管理策略。
       *
       * @param request CreateLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLifecyclePolicyResponse
       */
      Models::CreateLifecyclePolicyResponse createLifecyclePolicyWithOptions(const Models::CreateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lifecycle policy.
       *
       * @description - 仅通用型NAS文件系统和CPFS智算版支持创建生命周期管理策略。
       * - 每个 CPFS 智算版文件系统最多创建 10 个 Auto 类型 和 100 个 OnDemand 类型的生命周期管理策略。
       * - 每个地域可以创建 20 个通用型 NAS 的生命周期管理策略。
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
       * @description - 在使用CreateMountTarget接口创建挂载点时部分资源的生成是异步完成的。因此在执行CreateMountTarget接口成功后，请先调用DescribeMountTargets接口查询挂载点状态，当挂载点状态为**Active**后再执行挂载文件系统操作，否则可能会挂载失败。
       * - 调用此接口将自动创建操作所需的NAS服务关联角色。更多信息，请参见[管理NAS服务关联角色](https://help.aliyun.com/document_detail/208530.html)。
       *
       * @param request CreateMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTargetWithOptions(const Models::CreateMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mount target.
       *
       * @description - 在使用CreateMountTarget接口创建挂载点时部分资源的生成是异步完成的。因此在执行CreateMountTarget接口成功后，请先调用DescribeMountTargets接口查询挂载点状态，当挂载点状态为**Active**后再执行挂载文件系统操作，否则可能会挂载失败。
       * - 调用此接口将自动创建操作所需的NAS服务关联角色。更多信息，请参见[管理NAS服务关联角色](https://help.aliyun.com/document_detail/208530.html)。
       *
       * @param request CreateMountTargetRequest
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTarget(const Models::CreateMountTargetRequest &request);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description -  该接口仅适用于CPFS文件系统。
       * -  前提条件
       *   
       *    已创建协议服务。
       * - 其它
       *     - 协议服务的导出VPC网段不可与文件系统VPC网段重叠。
       *     - 一个协议服务上的多个导出VPC之间网段不可重叠。
       *     - 同一个协议服务最多可以创建10个导出目录。
       *     - 创建协议服务导出目录会消耗指定vSwitch上的IP地址（最多消耗32个IP地址），请确保目标vSwitch IP资源充足。
       *
       * @param request CreateProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolMountTargetResponse
       */
      Models::CreateProtocolMountTargetResponse createProtocolMountTargetWithOptions(const Models::CreateProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description -  该接口仅适用于CPFS文件系统。
       * -  前提条件
       *   
       *    已创建协议服务。
       * - 其它
       *     - 协议服务的导出VPC网段不可与文件系统VPC网段重叠。
       *     - 一个协议服务上的多个导出VPC之间网段不可重叠。
       *     - 同一个协议服务最多可以创建10个导出目录。
       *     - 创建协议服务导出目录会消耗指定vSwitch上的IP地址（最多消耗32个IP地址），请确保目标vSwitch IP资源充足。
       *
       * @param request CreateProtocolMountTargetRequest
       * @return CreateProtocolMountTargetResponse
       */
      Models::CreateProtocolMountTargetResponse createProtocolMountTarget(const Models::CreateProtocolMountTargetRequest &request);

      /**
       * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation takes about 5 to 10 minutes.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * -  仅CPFS 2.3.0及以上版本支持协议服务。您可以通过调用[DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html)接口查询目标文件系统的版本号。
       * - 协议服务规格
       *   协议服务包括两种协议类型：通用型和缓存型。缓存型相比通用型，提供热点数据缓存能力。在命中缓存的情况下，缓存型协议服务的带宽可超过CPFS文件系统的带宽，达到协议服务设定的最大带宽值。
       *   
       *     -   通用型：为CPFS提供NFS协议访问能力和[目录级挂载点](https://help.aliyun.com/document_detail/427175.html)，用户无需配置POSIX客户端管理集群。该功能免费。
       *     -  缓存型：在通用型基础上提供基于LRU策略的服务端内存缓存。当数据缓存于内存中时，CPFS可提供更高的内网带宽。缓存型协议服务分为缓存1型和缓存2型两种协议服务规格，差异点为内网带宽大小和内存缓存大小。
       *      >  缓存型协议服务为收费服务，正在邀测。有关缓存型协议服务的付费方式，请参见[计费项](https://help.aliyun.com/document_detail/111858.html)。如果您有任何反馈或疑问，欢迎加入钉钉用户群（钉钉群号：31045006299）与CPFS工程师进行交流讨论。
       * - 协议类型
       *   仅支持NFSv3协议。
       * - 其它
       *     - 一个CPFS文件系统只能创建一个协议服务。
       *     - 创建协议服务会消耗指定vSwitch上的IP地址（最多消耗32个IP地址），请确保目标vSwitch IP资源充足。
       *
       * @param request CreateProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolServiceWithOptions(const Models::CreateProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation takes about 5 to 10 minutes.
       *
       * @description - 该接口仅适用于CPFS文件系统。
       * -  仅CPFS 2.3.0及以上版本支持协议服务。您可以通过调用[DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html)接口查询目标文件系统的版本号。
       * - 协议服务规格
       *   协议服务包括两种协议类型：通用型和缓存型。缓存型相比通用型，提供热点数据缓存能力。在命中缓存的情况下，缓存型协议服务的带宽可超过CPFS文件系统的带宽，达到协议服务设定的最大带宽值。
       *   
       *     -   通用型：为CPFS提供NFS协议访问能力和[目录级挂载点](https://help.aliyun.com/document_detail/427175.html)，用户无需配置POSIX客户端管理集群。该功能免费。
       *     -  缓存型：在通用型基础上提供基于LRU策略的服务端内存缓存。当数据缓存于内存中时，CPFS可提供更高的内网带宽。缓存型协议服务分为缓存1型和缓存2型两种协议服务规格，差异点为内网带宽大小和内存缓存大小。
       *      >  缓存型协议服务为收费服务，正在邀测。有关缓存型协议服务的付费方式，请参见[计费项](https://help.aliyun.com/document_detail/111858.html)。如果您有任何反馈或疑问，欢迎加入钉钉用户群（钉钉群号：31045006299）与CPFS工程师进行交流讨论。
       * - 协议类型
       *   仅支持NFSv3协议。
       * - 其它
       *     - 一个CPFS文件系统只能创建一个协议服务。
       *     - 创建协议服务会消耗指定vSwitch上的IP地址（最多消耗32个IP地址），请确保目标vSwitch IP资源充足。
       *
       * @param request CreateProtocolServiceRequest
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolService(const Models::CreateProtocolServiceRequest &request);

      /**
       * @summary Creates a job to permanently delete a file or directory from the recycle bin.
       *
       * @description - 仅通用型NAS文件系统支持该功能。
       * - 彻底删除目录时，目录中的内容会被递归清理。
       * - 单个文件系统一次只能执行一个彻底删除任务。正在彻底删除文件或目录时，无法发起新的恢复或清理任务。
       *
       * @param request CreateRecycleBinDeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecycleBinDeleteJobResponse
       */
      Models::CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJobWithOptions(const Models::CreateRecycleBinDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job to permanently delete a file or directory from the recycle bin.
       *
       * @description - 仅通用型NAS文件系统支持该功能。
       * - 彻底删除目录时，目录中的内容会被递归清理。
       * - 单个文件系统一次只能执行一个彻底删除任务。正在彻底删除文件或目录时，无法发起新的恢复或清理任务。
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
       * @summary Deletes a permission group.
       *
       * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）不支持删除。
       *
       * @param request DeleteAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessGroupResponse
       */
      Models::DeleteAccessGroupResponse deleteAccessGroupWithOptions(const Models::DeleteAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a permission group.
       *
       * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）不支持删除。
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
       * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）中的规则不支持删除。
       *
       * @param request DeleteAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessRuleResponse
       */
      Models::DeleteAccessRuleResponse deleteAccessRuleWithOptions(const Models::DeleteAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule from a permission group.
       *
       * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）中的规则不支持删除。
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
       * @description - This operation is supported only for CPFS file systems of version 2.2.0 or later and CPFS for AI and HPC file systems of version 2.7.0 or later. Deleting a fileset permanently removes all data in the associated directory. Use this operation with caution.
       * - If deletion protection is enabled, you must disable it before you can delete the fileset.
       * - When you delete a fileset from a CPFS file system, the disk space is released immediately. When you delete a fileset from a CPFS for AI and HPC file system, the disk space is released gradually.
       *
       * @param request DeleteFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFilesetResponse
       */
      Models::DeleteFilesetResponse deleteFilesetWithOptions(const Models::DeleteFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a fileset.
       *
       * @description - This operation is supported only for CPFS file systems of version 2.2.0 or later and CPFS for AI and HPC file systems of version 2.7.0 or later. Deleting a fileset permanently removes all data in the associated directory. Use this operation with caution.
       * - If deletion protection is enabled, you must disable it before you can delete the fileset.
       * - When you delete a fileset from a CPFS file system, the disk space is released immediately. When you delete a fileset from a CPFS for AI and HPC file system, the disk space is released gradually.
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
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request DescribeAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointResponse
       */
      Models::DescribeAccessPointResponse describeAccessPointWithOptions(const Models::DescribeAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access point.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request DescribeAccessPointRequest
       * @return DescribeAccessPointResponse
       */
      Models::DescribeAccessPointResponse describeAccessPoint(const Models::DescribeAccessPointRequest &request);

      /**
       * @summary Queries a list of access points.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
       *
       * @param request DescribeAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessPointsResponse
       */
      Models::DescribeAccessPointsResponse describeAccessPointsWithOptions(const Models::DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of access points.
       *
       * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
       * @summary This operation retrieves information about file systems.
       *
       * @param request DescribeFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystemsWithOptions(const Models::DescribeFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation retrieves information about file systems.
       *
       * @param request DescribeFileSystemsRequest
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystems(const Models::DescribeFileSystemsRequest &request);

      /**
       * @summary Queries the information about created filesets.
       *
       * @description - 仅CPFS 2.2.0和CPFS智算版2.7.0及以上版本支持Fileset。您可以在控制台文件系统详情页面查看版本信息。
       * - 筛选键（Filters）中，FsetIds需要做全字匹配，FileSystemPath、Description支持模糊匹配。
       * - 支持组合查询。
       *
       * @param request DescribeFilesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesetsResponse
       */
      Models::DescribeFilesetsResponse describeFilesetsWithOptions(const Models::DescribeFilesetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about created filesets.
       *
       * @description - 仅CPFS 2.2.0和CPFS智算版2.7.0及以上版本支持Fileset。您可以在控制台文件系统详情页面查看版本信息。
       * - 筛选键（Filters）中，FsetIds需要做全字匹配，FileSystemPath、Description支持模糊匹配。
       * - 支持组合查询。
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
       * @summary Queries information about virtual storage channels associated with a file system.
       *
       * @description - 仅CPFS智算版支持该功能。
       * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfoWithOptions(const Models::DescribeFilesystemsVscAttachInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about virtual storage channels associated with a file system.
       *
       * @description - 仅CPFS智算版支持该功能。
       * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfo(const Models::DescribeFilesystemsVscAttachInfoRequest &request);

      /**
       * @summary Queries lifecycle policies.
       *
       * @description 仅通用型NAS文件系统和 CPFS 智算版支持该功能。
       *
       * @param request DescribeLifecyclePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecyclePoliciesResponse
       */
      Models::DescribeLifecyclePoliciesResponse describeLifecyclePoliciesWithOptions(const Models::DescribeLifecyclePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lifecycle policies.
       *
       * @description 仅通用型NAS文件系统和 CPFS 智算版支持该功能。
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
       * @summary Retrieves information about mount targets.
       *
       * @param request DescribeMountTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargetsWithOptions(const Models::DescribeMountTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about mount targets.
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
       * @description 该接口仅适用于CPFS文件系统。
       *
       * @param request DescribeProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTargetWithOptions(const Models::DescribeProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export directories of a protocol service.
       *
       * @description 该接口仅适用于CPFS文件系统。
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
       * @description - 仅CPFS智算版支持该功能。
       * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
       *
       * @param request DetachVscFromFilesystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachVscFromFilesystemsResponse
       */
      Models::DetachVscFromFilesystemsResponse detachVscFromFilesystemsWithOptions(const Models::DetachVscFromFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unassociates a VSC device from a file system.
       *
       * @description - 仅CPFS智算版支持该功能。
       * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
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
       * @description - CPFS 2.2.0及以上版本、CPFS智算版 2.4.0及以上版本支持数据流动。
       * - 仅支持状态为`Running（正常）`状态的数据流动修改属性。
       * - 修改数据流动一般耗时2~5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询修改数据流动的状态。
       * - CPFS数据流动规格：
       *     - 数据流动带宽（Throughput）支持600 MB/s、1200 MB/s和1500 MB/s三种规格。数据流动带宽是指该数据流动进行导入或导出数据时能达到的最大传输带宽。
       *     - 库存查询：当设置DryRun为true时，可校验修改该规格的数据流动的资源是否满足。
       * - CPFS计费
       *   修改数据流动带宽（Throughput）涉及数据流动带宽计费，建议您提前了解CPFS的计费方式。更多详情，请参见[CPFS计费说明](https://help.aliyun.com/document_detail/111858.html)。
       *
       * @param request ModifyDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataFlowResponse
       */
      Models::ModifyDataFlowResponse modifyDataFlowWithOptions(const Models::ModifyDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a dataflow.
       *
       * @description - CPFS 2.2.0及以上版本、CPFS智算版 2.4.0及以上版本支持数据流动。
       * - 仅支持状态为`Running（正常）`状态的数据流动修改属性。
       * - 修改数据流动一般耗时2~5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询修改数据流动的状态。
       * - CPFS数据流动规格：
       *     - 数据流动带宽（Throughput）支持600 MB/s、1200 MB/s和1500 MB/s三种规格。数据流动带宽是指该数据流动进行导入或导出数据时能达到的最大传输带宽。
       *     - 库存查询：当设置DryRun为true时，可校验修改该规格的数据流动的资源是否满足。
       * - CPFS计费
       *   修改数据流动带宽（Throughput）涉及数据流动带宽计费，建议您提前了解CPFS的计费方式。更多详情，请参见[CPFS计费说明](https://help.aliyun.com/document_detail/111858.html)。
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
