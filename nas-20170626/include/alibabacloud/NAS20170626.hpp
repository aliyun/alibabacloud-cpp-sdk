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
       * @summary Adds a client to the blacklist in Cloud Parallel File Storage (CPFS) to evict its write requests, which serves as an I/O fencing mechanism.
       *
       * @description This operation supports only CPFS parallel file systems.
       *
       * @param request AddClientToBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddClientToBlackListResponse
       */
      Models::AddClientToBlackListResponse addClientToBlackListWithOptions(const Models::AddClientToBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddClientToBlackList is deprecated
       *
       * @summary Adds a client to the blacklist in Cloud Parallel File Storage (CPFS) to evict its write requests, which serves as an I/O fencing mechanism.
       *
       * @description This operation supports only CPFS parallel file systems.
       *
       * @param request AddClientToBlackListRequest
       * @return AddClientToBlackListResponse
       */
      Models::AddClientToBlackListResponse addClientToBlackList(const Models::AddClientToBlackListRequest &request);

      /**
       * @summary Applies an automatic snapshot policy to one or more file systems.
       *
       * @description **Before you begin**
       * This operation is supported only by Advanced Extreme NAS file systems. Before you call this operation, complete the following preparations:
       * - An Advanced Extreme NAS file system is created. When you invoke the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation to create the file system, you must configure the following parameter Settings:
       *   - FileSystemType: extreme
       *   - StorageType: advance
       * - An automatic snapshot policy is created. For more information, see [CreateAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createautosnapshotpolicy).
       * - You have completed the console authorization for AliyunNASManageENIRole. Before you create an Extreme NAS file system, you must grant authorization to the NAS service-linked role AliyunNASManageENIRole to allow NAS to associate and manage elastic network interfaces (ENIs) and the network interface controller (NIC). For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       * **Usage notes**
       * <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA) protocol](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - You can apply only one automatic snapshot policy to a file system.
       * - You can apply an automatic snapshot policy to multiple file systems.
       * - If an automatic snapshot policy is already applied to the destination file system, you can invoke the ApplyAutoSnapshotPolicy operation to replace the current automatic snapshot policy.
       * <props="intl">
       * - This feature is in free public preview.
       * - You can apply only one automatic snapshot policy to a file system.
       * - You can apply an automatic snapshot policy to multiple file systems.
       * - If an automatic snapshot policy is already applied to the destination file system, you can call the ApplyAutoSnapshotPolicy operation to replace the current automatic snapshot policy.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicyWithOptions(const Models::ApplyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an automatic snapshot policy to one or more file systems.
       *
       * @description **Before you begin**
       * This operation is supported only by Advanced Extreme NAS file systems. Before you call this operation, complete the following preparations:
       * - An Advanced Extreme NAS file system is created. When you invoke the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation to create the file system, you must configure the following parameter Settings:
       *   - FileSystemType: extreme
       *   - StorageType: advance
       * - An automatic snapshot policy is created. For more information, see [CreateAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createautosnapshotpolicy).
       * - You have completed the console authorization for AliyunNASManageENIRole. Before you create an Extreme NAS file system, you must grant authorization to the NAS service-linked role AliyunNASManageENIRole to allow NAS to associate and manage elastic network interfaces (ENIs) and the network interface controller (NIC). For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       * **Usage notes**
       * <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA) protocol](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - You can apply only one automatic snapshot policy to a file system.
       * - You can apply an automatic snapshot policy to multiple file systems.
       * - If an automatic snapshot policy is already applied to the destination file system, you can invoke the ApplyAutoSnapshotPolicy operation to replace the current automatic snapshot policy.
       * <props="intl">
       * - This feature is in free public preview.
       * - You can apply only one automatic snapshot policy to a file system.
       * - You can apply an automatic snapshot policy to multiple file systems.
       * - If an automatic snapshot policy is already applied to the destination file system, you can call the ApplyAutoSnapshotPolicy operation to replace the current automatic snapshot policy.
       *
       * @param request ApplyAutoSnapshotPolicyRequest
       * @return ApplyAutoSnapshotPolicyResponse
       */
      Models::ApplyAutoSnapshotPolicyResponse applyAutoSnapshotPolicy(const Models::ApplyAutoSnapshotPolicyRequest &request);

      /**
       * @summary Configures auto-refresh for a specified data flow.
       *
       * @description - This operation applies only to CPFS file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - You can add an auto-refresh configuration only to data flows in the `Running` (normal) state.
       * - You can add up to five auto-refresh configurations to a data flow.
       * - Creating an auto-refresh configuration usually takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
       * - Auto-refresh relies on EventBridge to collect object modification events from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *   > The event buses and event rules that CPFS creates in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event buses or event rules. Otherwise, auto-refresh cannot work properly.
       * - Auto-refresh applies to a prefix specified by the RefreshPath parameter. When you configure auto-refresh for a prefix in a CPFS data stream, the system creates an event bus in your account and creates an event rule for the prefix of the source OSS bucket. After an object in the prefix of the source OSS bucket is modified, EventBridge generates an OSS event, and the CPFS data stream processes the event.
       * - After you configure auto-refresh (AutoRefresh), when data in the source storage changes, automatic synchronization of the changed metadata to the CPFS file system is performed. The changed data is loaded on demand when you access files, or you can start a data stream node to load the data.
       * - The auto-refresh interval (AutoRefreshInterval) specifies how often CPFS checks whether data in the prefix of the source OSS bucket is updated. If updates exist, CPFS starts an auto-refresh node. If the frequency of object modification events in the source OSS bucket exceeds the processing capacity of the CPFS data stream, auto-refresh nodes accumulate, metadata updates are delayed, and the data stream status becomes Misconfigured. To resolve this issue, upgrade the data stream specification or reduce the OSS modification frequency.
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefreshWithOptions(const Models::ApplyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures auto-refresh for a specified data flow.
       *
       * @description - This operation applies only to CPFS file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - You can add an auto-refresh configuration only to data flows in the `Running` (normal) state.
       * - You can add up to five auto-refresh configurations to a data flow.
       * - Creating an auto-refresh configuration usually takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
       * - Auto-refresh relies on EventBridge to collect object modification events from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *   > The event buses and event rules that CPFS creates in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event buses or event rules. Otherwise, auto-refresh cannot work properly.
       * - Auto-refresh applies to a prefix specified by the RefreshPath parameter. When you configure auto-refresh for a prefix in a CPFS data stream, the system creates an event bus in your account and creates an event rule for the prefix of the source OSS bucket. After an object in the prefix of the source OSS bucket is modified, EventBridge generates an OSS event, and the CPFS data stream processes the event.
       * - After you configure auto-refresh (AutoRefresh), when data in the source storage changes, automatic synchronization of the changed metadata to the CPFS file system is performed. The changed data is loaded on demand when you access files, or you can start a data stream node to load the data.
       * - The auto-refresh interval (AutoRefreshInterval) specifies how often CPFS checks whether data in the prefix of the source OSS bucket is updated. If updates exist, CPFS starts an auto-refresh node. If the frequency of object modification events in the source OSS bucket exceeds the processing capacity of the CPFS data stream, auto-refresh nodes accumulate, metadata updates are delayed, and the data stream status becomes Misconfigured. To resolve this issue, upgrade the data stream specification or reduce the OSS modification frequency.
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefresh(const Models::ApplyDataFlowAutoRefreshRequest &request);

      /**
       * @summary Associates a VSC device with a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIds. That is, the ResourceIds.VscId values must be the same.
       *
       * @param request AttachVscToFilesystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachVscToFilesystemsResponse
       */
      Models::AttachVscToFilesystemsResponse attachVscToFilesystemsWithOptions(const Models::AttachVscToFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a VSC device with a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIds. That is, the ResourceIds.VscId values must be the same.
       *
       * @param request AttachVscToFilesystemsRequest
       * @return AttachVscToFilesystemsResponse
       */
      Models::AttachVscToFilesystemsResponse attachVscToFilesystems(const Models::AttachVscToFilesystemsRequest &request);

      /**
       * @summary Cancels the automatic snapshot policy that is created for a file system.
       *
       * @description <props="china">
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * -  Only Advanced Extreme NAS supports this feature.
       * -  Before you begin: You have applied an automatic snapshot policy to the target Extreme NAS file system by calling [ApplyAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-applyautosnapshotpolicy).
       * <props="intl">
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * -  Only Advanced Extreme NAS supports this feature.
       * -  Before you begin: You have applied an automatic snapshot policy to the target Extreme NAS file system by calling [ApplyAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-applyautosnapshotpolicy).
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicyWithOptions(const Models::CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the automatic snapshot policy that is created for a file system.
       *
       * @description <props="china">
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * -  Only Advanced Extreme NAS supports this feature.
       * -  Before you begin: You have applied an automatic snapshot policy to the target Extreme NAS file system by calling [ApplyAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-applyautosnapshotpolicy).
       * <props="intl">
       * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * -  Only Advanced Extreme NAS supports this feature.
       * -  Before you begin: You have applied an automatic snapshot policy to the target Extreme NAS file system by calling [ApplyAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-applyautosnapshotpolicy).
       *
       * @param request CancelAutoSnapshotPolicyRequest
       * @return CancelAutoSnapshotPolicyResponse
       */
      Models::CancelAutoSnapshotPolicyResponse cancelAutoSnapshotPolicy(const Models::CancelAutoSnapshotPolicyRequest &request);

      /**
       * @summary Cancels the auto-update configuration of a specified data flow.
       *
       * @description - This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * - Data flows are supported only in CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
       * - You can cancel the auto-update configuration only for data flows in the `Running` or `Stopped` state.
       * - Canceling the auto-update configuration typically takes 2 to 5 minutes. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the cancel task.
       *
       * @param request CancelDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowAutoRefreshResponse
       */
      Models::CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefreshWithOptions(const Models::CancelDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the auto-update configuration of a specified data flow.
       *
       * @description - This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * - Data flows are supported only in CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
       * - You can cancel the auto-update configuration only for data flows in the `Running` or `Stopped` state.
       * - Canceling the auto-update configuration typically takes 2 to 5 minutes. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the cancel task.
       *
       * @param request CancelDataFlowAutoRefreshRequest
       * @return CancelDataFlowAutoRefreshResponse
       */
      Models::CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefresh(const Models::CancelDataFlowAutoRefreshRequest &request);

      /**
       * @summary Cancels a data flow streaming subtask.
       *
       * @description **Prerequisite resource creation process**
       * Before you cancel a data flow streaming subtask, create the following resources in order:
       * 1. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflow-bmcpfs) to create a data flow.
       * 2. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowtask-bmcpfs) to create a streaming import (StreamImport) or streaming export (StreamExport) task.
       * 3. Create a data flow streaming subtask: Call [CreateDataFlowSubTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowsubtask-bmcpfs) to create a streaming subtask.
       * > CPFS for Lingjun file systems must be created in the console.
       * **Operation description**
       * - Only CPFS for Lingjun 2.6.0 and later are supported. You can view the version information on the file system details page in the console.
       * - Prerequisites: A CPFS for Lingjun file system is created, the DataFlow is in the Running state, the DataFlowTask is in the Executing state, and the DataFlowSubTask is in the CREATED or RUNNING state.
       * - You can cancel a data flow streaming subtask only when it is in the CREATED or RUNNING state.
       * - Data flow streaming tasks are executed asynchronously. You can call [DescribeDataFlowSubTasks](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-describedataflowtasks-bmcpfs) to query the execution status of a streaming task.
       *
       * @param request CancelDataFlowSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowSubTaskResponse
       */
      Models::CancelDataFlowSubTaskResponse cancelDataFlowSubTaskWithOptions(const Models::CancelDataFlowSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a data flow streaming subtask.
       *
       * @description **Prerequisite resource creation process**
       * Before you cancel a data flow streaming subtask, create the following resources in order:
       * 1. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflow-bmcpfs) to create a data flow.
       * 2. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowtask-bmcpfs) to create a streaming import (StreamImport) or streaming export (StreamExport) task.
       * 3. Create a data flow streaming subtask: Call [CreateDataFlowSubTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowsubtask-bmcpfs) to create a streaming subtask.
       * > CPFS for Lingjun file systems must be created in the console.
       * **Operation description**
       * - Only CPFS for Lingjun 2.6.0 and later are supported. You can view the version information on the file system details page in the console.
       * - Prerequisites: A CPFS for Lingjun file system is created, the DataFlow is in the Running state, the DataFlowTask is in the Executing state, and the DataFlowSubTask is in the CREATED or RUNNING state.
       * - You can cancel a data flow streaming subtask only when it is in the CREATED or RUNNING state.
       * - Data flow streaming tasks are executed asynchronously. You can call [DescribeDataFlowSubTasks](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-describedataflowtasks-bmcpfs) to query the execution status of a streaming task.
       *
       * @param request CancelDataFlowSubTaskRequest
       * @return CancelDataFlowSubTaskResponse
       */
      Models::CancelDataFlowSubTaskResponse cancelDataFlowSubTask(const Models::CancelDataFlowSubTaskRequest &request);

      /**
       * @summary Cancels a data flow batch task or streaming task that is in the Pending or Executing state.
       *
       * @description **Prerequisites**
       * Before you call this operation, create resources in the following order and make sure that the resources at each layer are in the required state:
       * 1. Create a file system: Call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a CPFS file system.
       *    - State requirement: The file system is in the Running state.
       * 2. Create a mount target: Call [CreateMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createmounttarget-cpfs) to create a mount target.
       *    - State requirement: The mount target is in the Active state.
       * 3. Create a fileset: Call [CreateFileset](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfileset-cpfs) to create a fileset.
       *    - State requirement: The fileset is created.
       * 4. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflow-cpfs) to create a data flow.
       *    - State requirement: The data flow is in the Running state.
       * 5. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflowtask-cpfs) to create a data flow task.
       * **Operation description**
       * - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flow tasks. You can view the version information on the file system details page in the console.
       * - Only data flow tasks in the `Pending` state can be canceled.
       * - Canceling a data flow task typically takes 5 to 10 minutes. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status.
       * - If a streaming data flow task contains running streaming subtasks, the streaming task cannot be canceled. Otherwise, the InvalidStatus.ResourceMismatch error is returned.
       *
       * @param request CancelDataFlowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowTaskResponse
       */
      Models::CancelDataFlowTaskResponse cancelDataFlowTaskWithOptions(const Models::CancelDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a data flow batch task or streaming task that is in the Pending or Executing state.
       *
       * @description **Prerequisites**
       * Before you call this operation, create resources in the following order and make sure that the resources at each layer are in the required state:
       * 1. Create a file system: Call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a CPFS file system.
       *    - State requirement: The file system is in the Running state.
       * 2. Create a mount target: Call [CreateMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createmounttarget-cpfs) to create a mount target.
       *    - State requirement: The mount target is in the Active state.
       * 3. Create a fileset: Call [CreateFileset](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfileset-cpfs) to create a fileset.
       *    - State requirement: The fileset is created.
       * 4. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflow-cpfs) to create a data flow.
       *    - State requirement: The data flow is in the Running state.
       * 5. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflowtask-cpfs) to create a data flow task.
       * **Operation description**
       * - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flow tasks. You can view the version information on the file system details page in the console.
       * - Only data flow tasks in the `Pending` state can be canceled.
       * - Canceling a data flow task typically takes 5 to 10 minutes. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status.
       * - If a streaming data flow task contains running streaming subtasks, the streaming task cannot be canceled. Otherwise, the InvalidStatus.ResourceMismatch error is returned.
       *
       * @param request CancelDataFlowTaskRequest
       * @return CancelDataFlowTaskResponse
       */
      Models::CancelDataFlowTaskResponse cancelDataFlowTask(const Models::CancelDataFlowTaskRequest &request);

      /**
       * @summary Cancels the directory quota of a file system.
       *
       * @description Only General-purpose NAS NFS file systems support the directory quota feature.
       *
       * @param request CancelDirQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDirQuotaResponse
       */
      Models::CancelDirQuotaResponse cancelDirQuotaWithOptions(const Models::CancelDirQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the directory quota of a file system.
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
       * @description Only CPFS for Lingjun 2.7.0 and later support quota cancellation.
       * **Before you begin**
       * - This operation is applicable only to CPFS for Lingjun 2.7.0 and later file systems.
       * - The fileset feature is available only to whitelisted users. To use this feature, submit a ticket to apply for the fileset whitelist.
       * - The file system ID must start with `bmcpfs-`.
       * - Before you call this operation, make sure that a quota is set for the target fileset by calling the [SetFilesetQuota](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-setfilesetquota-bmcpfs) operation.
       *
       * @param request CancelFilesetQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelFilesetQuotaResponse
       */
      Models::CancelFilesetQuotaResponse cancelFilesetQuotaWithOptions(const Models::CancelFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the quota set for a fileset.
       *
       * @description Only CPFS for Lingjun 2.7.0 and later support quota cancellation.
       * **Before you begin**
       * - This operation is applicable only to CPFS for Lingjun 2.7.0 and later file systems.
       * - The fileset feature is available only to whitelisted users. To use this feature, submit a ticket to apply for the fileset whitelist.
       * - The file system ID must start with `bmcpfs-`.
       * - Before you call this operation, make sure that a quota is set for the target fileset by calling the [SetFilesetQuota](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-setfilesetquota-bmcpfs) operation.
       *
       * @param request CancelFilesetQuotaRequest
       * @return CancelFilesetQuotaResponse
       */
      Models::CancelFilesetQuotaResponse cancelFilesetQuota(const Models::CancelFilesetQuotaRequest &request);

      /**
       * @summary Cancels a data retrieval task that is in the active state.
       *
       * @description This feature is supported only by General-purpose NAS file systems.
       *
       * @param request CancelLifecycleRetrieveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelLifecycleRetrieveJobResponse
       */
      Models::CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJobWithOptions(const Models::CancelLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a data retrieval task that is in the active state.
       *
       * @description This feature is supported only by General-purpose NAS file systems.
       *
       * @param request CancelLifecycleRetrieveJobRequest
       * @return CancelLifecycleRetrieveJobResponse
       */
      Models::CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJob(const Models::CancelLifecycleRetrieveJobRequest &request);

      /**
       * @summary Cancels a running task in the recycle bin.
       *
       * @description ### Operation description
       * - This feature is supported only by General-purpose NAS file systems.
       * - You can cancel only running tasks. The cancel operation does not take effect on tasks that have reached a terminal state (PartialSuccess: partially successful, Success: successful, Fail: failed, or Cancelled: cancelled).
       * - When you cancel a running permanent deletion task, the permanently deleted files cannot be recovered.
       * - When you cancel a running file restoration task, you can query the restored files in the file system and the unrestored files in the recycle bin.
       *
       * @param request CancelRecycleBinJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRecycleBinJobResponse
       */
      Models::CancelRecycleBinJobResponse cancelRecycleBinJobWithOptions(const Models::CancelRecycleBinJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a running task in the recycle bin.
       *
       * @description ### Operation description
       * - This feature is supported only by General-purpose NAS file systems.
       * - You can cancel only running tasks. The cancel operation does not take effect on tasks that have reached a terminal state (PartialSuccess: partially successful, Success: successful, Fail: failed, or Cancelled: cancelled).
       * - When you cancel a running permanent deletion task, the permanently deleted files cannot be recovered.
       * - When you cancel a running file restoration task, you can query the restored files in the file system and the unrestored files in the recycle bin.
       *
       * @param request CancelRecycleBinJobRequest
       * @return CancelRecycleBinJobResponse
       */
      Models::CancelRecycleBinJobResponse cancelRecycleBinJob(const Models::CancelRecycleBinJobRequest &request);

      /**
       * @summary Modifies the resource group to which a file system instance belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a file system instance belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates a permission group.
       *
       * @description - A maximum of 20 permission groups can be created per Alibaba Cloud account in a single region.
       * - A maximum of 300 rules can be added to a permission group.
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
       * @description - A maximum of 20 permission groups can be created per Alibaba Cloud account in a single region.
       * - A maximum of 300 rules can be added to a permission group.
       * - Only permission groups of the VPC network type can be created.
       *
       * @param request CreateAccessGroupRequest
       * @return CreateAccessGroupResponse
       */
      Models::CreateAccessGroupResponse createAccessGroup(const Models::CreateAccessGroupRequest &request);

      /**
       * @summary Creates an access point.
       *
       * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. Therefore, after you successfully execute the CreateAccessPoint operation, invoke the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the status of the access point. Wait until the access point enters the **Active** state before you mount the file system. Otherwise, the mount operation may fail.
       * - Only General-purpose NAS NFS file systems support this feature.
       * - If you enable the RAM policy (EnabledRam), you must configure the corresponding RAM permissions. For more information, see [Manage access points](https://help.aliyun.com/document_detail/2545998.html).
       *
       * @param request CreateAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessPointResponse
       */
      Models::CreateAccessPointResponse createAccessPointWithOptions(const Models::CreateAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access point.
       *
       * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. Therefore, after you successfully execute the CreateAccessPoint operation, invoke the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the status of the access point. Wait until the access point enters the **Active** state before you mount the file system. Otherwise, the mount operation may fail.
       * - Only General-purpose NAS NFS file systems support this feature.
       * - If you enable the RAM policy (EnabledRam), you must configure the corresponding RAM permissions. For more information, see [Manage access points](https://help.aliyun.com/document_detail/2545998.html).
       *
       * @param request CreateAccessPointRequest
       * @return CreateAccessPointResponse
       */
      Models::CreateAccessPointResponse createAccessPoint(const Models::CreateAccessPointRequest &request);

      /**
       * @summary Creates a permission group rule.
       *
       * @description A single permission group supports up to 300 rules.
       *
       * @param request CreateAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRuleWithOptions(const Models::CreateAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission group rule.
       *
       * @description A single permission group supports up to 300 rules.
       *
       * @param request CreateAccessRuleRequest
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRule(const Models::CreateAccessRuleRequest &request);

      /**
       * @summary Creates an Agentic space.
       *
       * @description **Before you begin**
       * Before calling this operation, complete the following preparations:
       * 1. **An Agentic file system is created**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `FileSystemType`: Set to `standard`.
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Go to the [NAS console](https://nasnext.console.aliyun.com/) to view the available regions and zones, or contact Alibaba Cloud technical support for the latest list of supported regions.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Complete call chain example:
       *   1. Call CreateFileSystem to create an Agentic file system (FileSystemType=standard, StorageType=Agentic, ProtocolType=NFS).
       *   2. After the file system is created and its status changes to Running, call this CreateAgenticSpace operation to create an Agentic space.
       *   3. To modify the configurations of the Agentic space, call the [ModifyAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-modifyagenticspace) operation.
       *
       * @param request CreateAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgenticSpaceResponse
       */
      Models::CreateAgenticSpaceResponse createAgenticSpaceWithOptions(const Models::CreateAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Agentic space.
       *
       * @description **Before you begin**
       * Before calling this operation, complete the following preparations:
       * 1. **An Agentic file system is created**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `FileSystemType`: Set to `standard`.
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Go to the [NAS console](https://nasnext.console.aliyun.com/) to view the available regions and zones, or contact Alibaba Cloud technical support for the latest list of supported regions.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Complete call chain example:
       *   1. Call CreateFileSystem to create an Agentic file system (FileSystemType=standard, StorageType=Agentic, ProtocolType=NFS).
       *   2. After the file system is created and its status changes to Running, call this CreateAgenticSpace operation to create an Agentic space.
       *   3. To modify the configurations of the Agentic space, call the [ModifyAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-modifyagenticspace) operation.
       *
       * @param request CreateAgenticSpaceRequest
       * @return CreateAgenticSpaceResponse
       */
      Models::CreateAgenticSpaceResponse createAgenticSpace(const Models::CreateAgenticSpaceRequest &request);

      /**
       * @summary Creates an automatic snapshot policy.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - You can create up to 100 automatic snapshot policies per region for each Alibaba Cloud account.
       * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as the automatic snapshot time points. Because the file system contains a large amount of data, the snapshot creation starts at 09:00 and is completed at 10:20, which takes 80 minutes. The system skips the 10:00 time point and continues to create an automatic snapshot at 11:00.
       * - Each file system supports up to 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
       * - When you modify the retention period of an automatic snapshot policy, the modification takes effect only on new snapshots. Existing snapshots retain their original retention period.
       * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is completed before you can manually create a snapshot.
       * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
       * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, which distinguishes it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` indicates the year, `M` indicates the month, and `d` indicates the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
       * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
       * <props="intl">
       * - This feature is in free public preview.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - You can create up to 100 automatic snapshot policies per region for each Alibaba Cloud account.
       * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as the automatic snapshot time points. Because the file system contains a large amount of data, the snapshot creation starts at 09:00 and is completed at 10:20, which takes 80 minutes. The system skips the 10:00 time point and continues to create an automatic snapshot at 11:00.
       * - Each file system supports up to 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
       * - When you modify the retention period of an automatic snapshot policy, the modification takes effect only on new snapshots. Existing snapshots retain their original retention period.
       * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is completed before you can manually create a snapshot.
       * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
       * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, which distinguishes it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` indicates the year, `M` indicates the month, and `d` indicates the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
       * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicyWithOptions(const Models::CreateAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic snapshot policy.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - You can create up to 100 automatic snapshot policies per region for each Alibaba Cloud account.
       * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as the automatic snapshot time points. Because the file system contains a large amount of data, the snapshot creation starts at 09:00 and is completed at 10:20, which takes 80 minutes. The system skips the 10:00 time point and continues to create an automatic snapshot at 11:00.
       * - Each file system supports up to 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
       * - When you modify the retention period of an automatic snapshot policy, the modification takes effect only on new snapshots. Existing snapshots retain their original retention period.
       * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is completed before you can manually create a snapshot.
       * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
       * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, which distinguishes it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` indicates the year, `M` indicates the month, and `d` indicates the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
       * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
       * <props="intl">
       * - This feature is in free public preview.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - You can create up to 100 automatic snapshot policies per region for each Alibaba Cloud account.
       * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as the automatic snapshot time points. Because the file system contains a large amount of data, the snapshot creation starts at 09:00 and is completed at 10:20, which takes 80 minutes. The system skips the 10:00 time point and continues to create an automatic snapshot at 11:00.
       * - Each file system supports up to 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
       * - When you modify the retention period of an automatic snapshot policy, the modification takes effect only on new snapshots. Existing snapshots retain their original retention period.
       * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is completed before you can manually create a snapshot.
       * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
       * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, which distinguishes it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` indicates the year, `M` indicates the month, and `d` indicates the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
       * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
       *
       * @param request CreateAutoSnapshotPolicyRequest
       * @return CreateAutoSnapshotPolicyResponse
       */
      Models::CreateAutoSnapshotPolicyResponse createAutoSnapshotPolicy(const Models::CreateAutoSnapshotPolicyRequest &request);

      /**
       * @summary Creates an access point for CPFS for Lingjun.
       *
       * @description Creates an access point for CPFS for Lingjun.
       *
       * @param request CreateCpfsAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCpfsAccessPointResponse
       */
      Models::CreateCpfsAccessPointResponse createCpfsAccessPointWithOptions(const Models::CreateCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access point for CPFS for Lingjun.
       *
       * @description Creates an access point for CPFS for Lingjun.
       *
       * @param request CreateCpfsAccessPointRequest
       * @return CreateCpfsAccessPointResponse
       */
      Models::CreateCpfsAccessPointResponse createCpfsAccessPoint(const Models::CreateCpfsAccessPointRequest &request);

      /**
       * @summary Creates a data flow between a General-purpose CPFS or CPFS for Lingjun file system and a source storage.
       *
       * @description - This operation is applicable to the following services:
       * | Service | File system ID format | Minimum version that supports data flows |
       * |---------|-----------------------|------------------------------------------|
       * | **General-purpose CPFS** | Starts with `cpfs-`, such as cpfs-125487**** | 2.2.0 and later |
       * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015**** | 2.4.0 and later |
       * > : General-purpose CPFS and CPFS for Lingjun share the same set of API operations, but differ in parameter values and supported features. Refer to the corresponding section based on the service you use.
       * - Basic operations
       *     - You can create a data flow only when the General-purpose CPFS or CPFS for Lingjun file system is in the Running state.
       *     - You can create a maximum of **10** data flows for a General-purpose CPFS or CPFS for Lingjun file system.
       *     - Creating a data flow typically takes 2 to 5 minutes. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) operation to check whether the data flow is created.
       * - Permissions.
       *     When you create a data flow, Cloud Parallel File Storage assumes the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles to associate the service for the data stream. For more information, see [Service-linked roles for Cloud Parallel File Storage](https://help.aliyun.com/document_detail/185138.html).
       * - Usage notes for General-purpose CPFS.
       *      This section applies to General-purpose CPFS file systems whose IDs start with `cpfs-`.
       *   - Billing
       *     - You are billed for a data flow based on the data flow bandwidth. For more information, see [Billing of General-purpose CPFS](https://help.aliyun.com/document_detail/111858.html).
       *     - If you enable auto-refresh, EventBridge is used to collect object modification events from the source OSS bucket. You are billed for these events. For more information, see [Billing of EventBridge](https://help.aliyun.com/document_detail/163752.html).
       *   - Data flow specifications
       *       - The data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data flow bandwidth is the maximum transmission bandwidth that the data flow can achieve when importing or exporting data.
       *     - Creating a data flow consumes one vSwitch IP address used by a General-purpose Cloud Parallel File Storage mount target. Make sure that the vSwitch has sufficient IP addresses.
       *     - Resource check: If you set the DryRun Settings parameter to true, the system checks whether the resources required to create a data flow (data stream) of the specified specification are sufficient.
       *   - Fileset
       *     - The destination of a data flow is a fileset in a General-purpose CPFS file system. A fileset is a new directory tree structure in a General-purpose CPFS file system. It is a small file system within the parent file system and has an independent inode space and management capabilities.
       *     - The fileset must already exist when you create a data flow, and it cannot be nested with other filesets. You can create only one data flow on a fileset, which corresponds to one source storage.
       *     - A fileset can contain a maximum of 1 million files. If the number of files imported from the OSS bucket exceeds this limit, a `no space` error is reported when you create new files.
       *    > If the fileset already contains data, the existing data in the fileset is cleared and replaced with the data synchronized from the OSS bucket after the data flow is created.
       *   - Auto-refresh
       *     - After you configure auto-refresh, when the data in the source storage changes, the changed metadata undergoes automatic synchronization to the General-purpose Cloud Parallel File Storage file system. The changed data is loaded on demand when users access the files, or you can start a data flow node to load the data.
       *     - Auto-refresh relies on EventBridge to collect object modification events from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *     - The scope of auto-refresh is a prefix, which is specified by the RefreshPath parameter. You can configure a maximum of five auto-refresh folders for a data flow (data stream).
       *     - The auto-refresh interval (AutoRefreshInterval) is the time interval configured in the Settings by General-purpose Cloud Parallel File Storage to check whether data updates exist within the prefix in the source OSS bucket. If data updates exist, an auto-refresh node is started. If the frequency of object modification events in the source OSS bucket exceeds the processing capability of the General-purpose Cloud Parallel File Storage data flow, auto-refresh nodes accumulate, metadata updates are delayed, and the status of the data flow becomes `Misconfigured`. To resolve this issue, you can upgrade the data flow specification or reduce the modification frequency in the OSS bucket.
       *     - When you configure auto-refresh for a prefix in a General-purpose Cloud Parallel File Storage data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object in the prefix of the source OSS bucket is modified, an OSS event is generated in EventBridge and processed by the General-purpose Cloud Parallel File Storage data flow.
       *      > The event bus and event rule created by General-purpose Cloud Parallel File Storage in EventBridge contain the `Create for cpfs auto refresh` description. You cannot modify or delete the event bus or event rule. Otherwise, auto-refresh cannot remain in a Normal state.
       *   - Source storage
       *      - Only OSS is supported Cloud Parallel File Storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *      - General-purpose CPFS data flows support encrypted and unencrypted access to OSS. If you select the encrypted (SSL) access method, make sure that encryption in transit is enabled for the OSS bucket.
       *      - If multiple General-purpose CPFS data flows or multiple data flows of the same General-purpose CPFS file system use the same OSS bucket Cloud Parallel File Storage, you must enable versioning for the OSS bucket to prevent data conflicts when multiple General-purpose CPFS file systems export data to the same source.
       *      - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the General-purpose CPFS file system.
       *        > Before you create a data flow, you must add a tag (key: cpfs-dataflow, value: true) to the source OSS bucket so that the General-purpose CPFS data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the General-purpose CPFS data flow cannot access the data in the bucket.
       * - Usage notes for CPFS for Lingjun.
       *      This section applies to CPFS for Lingjun file systems whose IDs start with `bmcpfs-`.
       *   - Source storage
       *       - Only OSS is supported as the source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *       - CPFS for Lingjun data flows support encrypted and unencrypted access to OSS. If you select the encrypted (SSL) access method, make sure that encryption in transit is enabled for the OSS bucket.
       *       - If multiple CPFS for Lingjun data flows or multiple data flows of the same CPFS for Lingjun file system use the same OSS bucket as the source storage, you must enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
       *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
       *      - CPFS for Lingjun 2.6.0 and later support creating data flows by using cross-account OSS buckets.
       *      - You need to set the account id parameter only when you use a cross-account OSS bucket.
       *      - Before you use a cross-account OSS bucket, you must grant permissions to the account. For more information, see [Authorize cross-account data flows](https://help.aliyun.com/document_detail/2713462.html).
       *        > Before you create a data flow, you must add a tag (key: cpfs-dataflow, value: true) to the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
       *   - Limits of data flows on file systems.
       *     - You cannot rename a non-empty directory in the file system path associated with the data flow. Otherwise, a Permission Denied or Directory Not Empty error is reported.
       *      - Use special characters in directory and file names with caution. Supported characters include uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
       *     - Ultra-long paths are not supported. The maximum path length supported by a data flow is 1,023 characters.
       *   - Limits on data flow imports.
       *     - When a symbolic link file is imported into CPFS for Lingjun, it is converted into a regular file containing data, and the symbolic link information is lost.
       *     - If an OSS bucket has multiple versions, only the latest version is copied.
       *     - File or subdirectory names longer than 255 bytes are not supported.
       *   - Data flow export limits
       *   - Limits on data flow exports
       *     - After a symlink file is synchronized to OSS, the file pointed to by the symlink is not synchronized. Instead, the symlink file becomes a regular empty object without data.
       *     - Hardlink files are synchronized to OSS only as regular files.
       *     - When socket, device, or pipe files are exported to an OSS bucket, they become regular empty objects without data.
       *     - Directory paths longer than 1,023 characters are not supported.
       *
       * @param request CreateDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowResponse
       */
      Models::CreateDataFlowResponse createDataFlowWithOptions(const Models::CreateDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data flow between a General-purpose CPFS or CPFS for Lingjun file system and a source storage.
       *
       * @description - This operation is applicable to the following services:
       * | Service | File system ID format | Minimum version that supports data flows |
       * |---------|-----------------------|------------------------------------------|
       * | **General-purpose CPFS** | Starts with `cpfs-`, such as cpfs-125487**** | 2.2.0 and later |
       * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015**** | 2.4.0 and later |
       * > : General-purpose CPFS and CPFS for Lingjun share the same set of API operations, but differ in parameter values and supported features. Refer to the corresponding section based on the service you use.
       * - Basic operations
       *     - You can create a data flow only when the General-purpose CPFS or CPFS for Lingjun file system is in the Running state.
       *     - You can create a maximum of **10** data flows for a General-purpose CPFS or CPFS for Lingjun file system.
       *     - Creating a data flow typically takes 2 to 5 minutes. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) operation to check whether the data flow is created.
       * - Permissions.
       *     When you create a data flow, Cloud Parallel File Storage assumes the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles to associate the service for the data stream. For more information, see [Service-linked roles for Cloud Parallel File Storage](https://help.aliyun.com/document_detail/185138.html).
       * - Usage notes for General-purpose CPFS.
       *      This section applies to General-purpose CPFS file systems whose IDs start with `cpfs-`.
       *   - Billing
       *     - You are billed for a data flow based on the data flow bandwidth. For more information, see [Billing of General-purpose CPFS](https://help.aliyun.com/document_detail/111858.html).
       *     - If you enable auto-refresh, EventBridge is used to collect object modification events from the source OSS bucket. You are billed for these events. For more information, see [Billing of EventBridge](https://help.aliyun.com/document_detail/163752.html).
       *   - Data flow specifications
       *       - The data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data flow bandwidth is the maximum transmission bandwidth that the data flow can achieve when importing or exporting data.
       *     - Creating a data flow consumes one vSwitch IP address used by a General-purpose Cloud Parallel File Storage mount target. Make sure that the vSwitch has sufficient IP addresses.
       *     - Resource check: If you set the DryRun Settings parameter to true, the system checks whether the resources required to create a data flow (data stream) of the specified specification are sufficient.
       *   - Fileset
       *     - The destination of a data flow is a fileset in a General-purpose CPFS file system. A fileset is a new directory tree structure in a General-purpose CPFS file system. It is a small file system within the parent file system and has an independent inode space and management capabilities.
       *     - The fileset must already exist when you create a data flow, and it cannot be nested with other filesets. You can create only one data flow on a fileset, which corresponds to one source storage.
       *     - A fileset can contain a maximum of 1 million files. If the number of files imported from the OSS bucket exceeds this limit, a `no space` error is reported when you create new files.
       *    > If the fileset already contains data, the existing data in the fileset is cleared and replaced with the data synchronized from the OSS bucket after the data flow is created.
       *   - Auto-refresh
       *     - After you configure auto-refresh, when the data in the source storage changes, the changed metadata undergoes automatic synchronization to the General-purpose Cloud Parallel File Storage file system. The changed data is loaded on demand when users access the files, or you can start a data flow node to load the data.
       *     - Auto-refresh relies on EventBridge to collect object modification events from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *     - The scope of auto-refresh is a prefix, which is specified by the RefreshPath parameter. You can configure a maximum of five auto-refresh folders for a data flow (data stream).
       *     - The auto-refresh interval (AutoRefreshInterval) is the time interval configured in the Settings by General-purpose Cloud Parallel File Storage to check whether data updates exist within the prefix in the source OSS bucket. If data updates exist, an auto-refresh node is started. If the frequency of object modification events in the source OSS bucket exceeds the processing capability of the General-purpose Cloud Parallel File Storage data flow, auto-refresh nodes accumulate, metadata updates are delayed, and the status of the data flow becomes `Misconfigured`. To resolve this issue, you can upgrade the data flow specification or reduce the modification frequency in the OSS bucket.
       *     - When you configure auto-refresh for a prefix in a General-purpose Cloud Parallel File Storage data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object in the prefix of the source OSS bucket is modified, an OSS event is generated in EventBridge and processed by the General-purpose Cloud Parallel File Storage data flow.
       *      > The event bus and event rule created by General-purpose Cloud Parallel File Storage in EventBridge contain the `Create for cpfs auto refresh` description. You cannot modify or delete the event bus or event rule. Otherwise, auto-refresh cannot remain in a Normal state.
       *   - Source storage
       *      - Only OSS is supported Cloud Parallel File Storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *      - General-purpose CPFS data flows support encrypted and unencrypted access to OSS. If you select the encrypted (SSL) access method, make sure that encryption in transit is enabled for the OSS bucket.
       *      - If multiple General-purpose CPFS data flows or multiple data flows of the same General-purpose CPFS file system use the same OSS bucket Cloud Parallel File Storage, you must enable versioning for the OSS bucket to prevent data conflicts when multiple General-purpose CPFS file systems export data to the same source.
       *      - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the General-purpose CPFS file system.
       *        > Before you create a data flow, you must add a tag (key: cpfs-dataflow, value: true) to the source OSS bucket so that the General-purpose CPFS data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the General-purpose CPFS data flow cannot access the data in the bucket.
       * - Usage notes for CPFS for Lingjun.
       *      This section applies to CPFS for Lingjun file systems whose IDs start with `bmcpfs-`.
       *   - Source storage
       *       - Only OSS is supported as the source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *       - CPFS for Lingjun data flows support encrypted and unencrypted access to OSS. If you select the encrypted (SSL) access method, make sure that encryption in transit is enabled for the OSS bucket.
       *       - If multiple CPFS for Lingjun data flows or multiple data flows of the same CPFS for Lingjun file system use the same OSS bucket as the source storage, you must enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
       *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
       *      - CPFS for Lingjun 2.6.0 and later support creating data flows by using cross-account OSS buckets.
       *      - You need to set the account id parameter only when you use a cross-account OSS bucket.
       *      - Before you use a cross-account OSS bucket, you must grant permissions to the account. For more information, see [Authorize cross-account data flows](https://help.aliyun.com/document_detail/2713462.html).
       *        > Before you create a data flow, you must add a tag (key: cpfs-dataflow, value: true) to the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
       *   - Limits of data flows on file systems.
       *     - You cannot rename a non-empty directory in the file system path associated with the data flow. Otherwise, a Permission Denied or Directory Not Empty error is reported.
       *      - Use special characters in directory and file names with caution. Supported characters include uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
       *     - Ultra-long paths are not supported. The maximum path length supported by a data flow is 1,023 characters.
       *   - Limits on data flow imports.
       *     - When a symbolic link file is imported into CPFS for Lingjun, it is converted into a regular file containing data, and the symbolic link information is lost.
       *     - If an OSS bucket has multiple versions, only the latest version is copied.
       *     - File or subdirectory names longer than 255 bytes are not supported.
       *   - Data flow export limits
       *   - Limits on data flow exports
       *     - After a symlink file is synchronized to OSS, the file pointed to by the symlink is not synchronized. Instead, the symlink file becomes a regular empty object without data.
       *     - Hardlink files are synchronized to OSS only as regular files.
       *     - When socket, device, or pipe files are exported to an OSS bucket, they become regular empty objects without data.
       *     - Directory paths longer than 1,023 characters are not supported.
       *
       * @param request CreateDataFlowRequest
       * @return CreateDataFlowResponse
       */
      Models::CreateDataFlowResponse createDataFlow(const Models::CreateDataFlowRequest &request);

      /**
       * @summary Creates a subtask for a data flow streaming task.
       *
       * @description **Before you begin**
       * Before you call this operation, create resources in the following order and make sure that the resources at each level are in the required state:
       * 1. Create a file system: Create a CPFS for Lingjun file system in the console.
       *    - State requirement: The file system is in the Running state.
       * 2. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflow-cpfs) to create a data flow.
       *    - State requirement: The data flow is in the Running state.
       * 3. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflowtask-cpfs) to create a streaming import (StreamImport) or streaming export (StreamExport) task.
       *    - State requirement: The data flow task is in the Executing state.
       * **Operation description**
       * - Only CPFS for Lingjun 2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
       * - You can create subtasks only for data flow streaming tasks that are in the Executing state.
       * - Data flow streaming tasks are executed asynchronously. You can call [DescribeDataFlowSubTasks](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-describedataflowsubtasks-bmcpfs) to query the execution status of a streaming task.
       * - When the data flow task type is a streaming task, the Executing state only indicates that you can create streaming import or streaming export tasks. It does not indicate that the import or export task is running.
       *
       * @param request CreateDataFlowSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowSubTaskResponse
       */
      Models::CreateDataFlowSubTaskResponse createDataFlowSubTaskWithOptions(const Models::CreateDataFlowSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subtask for a data flow streaming task.
       *
       * @description **Before you begin**
       * Before you call this operation, create resources in the following order and make sure that the resources at each level are in the required state:
       * 1. Create a file system: Create a CPFS for Lingjun file system in the console.
       *    - State requirement: The file system is in the Running state.
       * 2. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflow-cpfs) to create a data flow.
       *    - State requirement: The data flow is in the Running state.
       * 3. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflowtask-cpfs) to create a streaming import (StreamImport) or streaming export (StreamExport) task.
       *    - State requirement: The data flow task is in the Executing state.
       * **Operation description**
       * - Only CPFS for Lingjun 2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
       * - You can create subtasks only for data flow streaming tasks that are in the Executing state.
       * - Data flow streaming tasks are executed asynchronously. You can call [DescribeDataFlowSubTasks](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-describedataflowsubtasks-bmcpfs) to query the execution status of a streaming task.
       * - When the data flow task type is a streaming task, the Executing state only indicates that you can create streaming import or streaming export tasks. It does not indicate that the import or export task is running.
       *
       * @param request CreateDataFlowSubTaskRequest
       * @return CreateDataFlowSubTaskResponse
       */
      Models::CreateDataFlowSubTaskResponse createDataFlowSubTask(const Models::CreateDataFlowSubTaskRequest &request);

      /**
       * @summary Creates a data flow task.
       *
       * @description - CPFS usage notes
       *   - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       *   - Data flow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The time required to complete a task depends on the amount of data to be imported or exported. For a large amount of data, split the data into multiple tasks.
       *   - You can create data flow tasks only for data flows in the Running state.
       *   - When you manually execute a data flow task, the automatic data update task of the data flow is interrupted and queued.
       *   - When you create an export task, ensure that the total length of the absolute paths of the files to be exported from CPFS does not exceed 1,023 characters.
       * - CPFS for Lingjun usage notes
       *   - Only CPFS for Lingjun 2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
       *   - Data flow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The time required to complete a task depends on the amount of data to be imported or exported. For a large amount of data, split the data into multiple tasks.
       *   - You can create data flow tasks only for data flows in the Running state.
       *   - When you create an export task, ensure that the total length of the absolute paths of the files to be exported from CPFS for Lingjun does not exceed 1,023 characters.
       *   - CPFS for Lingjun supports batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
       *
       * @param request CreateDataFlowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowTaskResponse
       */
      Models::CreateDataFlowTaskResponse createDataFlowTaskWithOptions(const Models::CreateDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data flow task.
       *
       * @description - CPFS usage notes
       *   - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       *   - Data flow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The time required to complete a task depends on the amount of data to be imported or exported. For a large amount of data, split the data into multiple tasks.
       *   - You can create data flow tasks only for data flows in the Running state.
       *   - When you manually execute a data flow task, the automatic data update task of the data flow is interrupted and queued.
       *   - When you create an export task, ensure that the total length of the absolute paths of the files to be exported from CPFS does not exceed 1,023 characters.
       * - CPFS for Lingjun usage notes
       *   - Only CPFS for Lingjun 2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
       *   - Data flow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The time required to complete a task depends on the amount of data to be imported or exported. For a large amount of data, split the data into multiple tasks.
       *   - You can create data flow tasks only for data flows in the Running state.
       *   - When you create an export task, ensure that the total length of the absolute paths of the files to be exported from CPFS for Lingjun does not exceed 1,023 characters.
       *   - CPFS for Lingjun supports batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
       *
       * @param request CreateDataFlowTaskRequest
       * @return CreateDataFlowTaskResponse
       */
      Models::CreateDataFlowTaskResponse createDataFlowTask(const Models::CreateDataFlowTaskRequest &request);

      /**
       * @summary Creates a directory in a file system.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request CreateDirRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDirResponse
       */
      Models::CreateDirResponse createDirWithOptions(const Models::CreateDirRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory in a file system.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request CreateDirRequest
       * @return CreateDirResponse
       */
      Models::CreateDirResponse createDir(const Models::CreateDirRequest &request);

      /**
       * @summary Creates a directory or a file.
       *
       * @description - This API operation is available only to selected users.
       * - This operation supports only General-purpose NAS file systems of the SMB Protocol Type that have access control enabled. You must also activate Alibaba Cloud Key Management Service (KMS).
       * ## Prerequisites
       * Before you call this API operation to create a file, you must complete the following four prerequisite steps:
       * 1. **Create a General-purpose NAS file system that uses the SMB protocol**: Call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation and set ProtocolType to SMB to create a General-purpose NAS file system that supports the SMB protocol.
       * 2. **Activate KMS**: Activate KMS by using one of the following methods:
       *    - Call the Kms.OpenKmsService API operation.
       *    - Go to the [console to activate the service](https://common-buy.aliyun.com/?commodityCode=kms#/open).
       * 3. **Enable SMB ACL**: Call the [EnableSmbAcl](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablesmbacl) operation to enable the SMB ACL feature. Recommended configurations:
       *    - AuthMethod=NTLM
       *    - AuthCenter=EDS
       *    - This configuration does not require an AD domain Keytab and is easier to use.
       * 4. **Call CreateFile**: After you complete the preceding prerequisite steps, call this API operation to create a directory or a file.
       *
       * @param request CreateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFileWithOptions(const Models::CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory or a file.
       *
       * @description - This API operation is available only to selected users.
       * - This operation supports only General-purpose NAS file systems of the SMB Protocol Type that have access control enabled. You must also activate Alibaba Cloud Key Management Service (KMS).
       * ## Prerequisites
       * Before you call this API operation to create a file, you must complete the following four prerequisite steps:
       * 1. **Create a General-purpose NAS file system that uses the SMB protocol**: Call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation and set ProtocolType to SMB to create a General-purpose NAS file system that supports the SMB protocol.
       * 2. **Activate KMS**: Activate KMS by using one of the following methods:
       *    - Call the Kms.OpenKmsService API operation.
       *    - Go to the [console to activate the service](https://common-buy.aliyun.com/?commodityCode=kms#/open).
       * 3. **Enable SMB ACL**: Call the [EnableSmbAcl](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablesmbacl) operation to enable the SMB ACL feature. Recommended configurations:
       *    - AuthMethod=NTLM
       *    - AuthCenter=EDS
       *    - This configuration does not require an AD domain Keytab and is easier to use.
       * 4. **Call CreateFile**: After you complete the preceding prerequisite steps, call this API operation to create a directory or a file.
       *
       * @param request CreateFileRequest
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFile(const Models::CreateFileRequest &request);

      /**
       * @summary Creates a file system.
       *
       * @description <props="china">
       * - Before calling this operation, make sure that you fully understand the billing methods and pricing of File Storage NAS. For more information, see [Billing overview](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/).
       * - To create a file system, you must pass real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * - When you invoke this operation, the service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       * <props="intl">
       * - Before calling this operation, make sure that you fully understand the billing methods and pricing of File Storage NAS. For more information, see [Billing overview](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.alibabacloud.com/zh/product/nas/pricing?_p_lc=1&spm=a2796.7960336.8215766810.64.414bb91aiZQiRG&spm=a2c4g.11186623.help-menu-27516.d_5_1_4_2_0.572a1880hEiKCk).
       * - To create a file system, you must pass real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * - When you invoke this operation, the service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystemWithOptions(const Models::CreateFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file system.
       *
       * @description <props="china">
       * - Before calling this operation, make sure that you fully understand the billing methods and pricing of File Storage NAS. For more information, see [Billing overview](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/).
       * - To create a file system, you must pass real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * - When you invoke this operation, the service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       * <props="intl">
       * - Before calling this operation, make sure that you fully understand the billing methods and pricing of File Storage NAS. For more information, see [Billing overview](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.alibabacloud.com/zh/product/nas/pricing?_p_lc=1&spm=a2796.7960336.8215766810.64.414bb91aiZQiRG&spm=a2c4g.11186623.help-menu-27516.d_5_1_4_2_0.572a1880hEiKCk).
       * - To create a file system, you must pass real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * - When you invoke this operation, the service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateFileSystemRequest
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystem(const Models::CreateFileSystemRequest &request);

      /**
       * @summary Creates a Fileset.
       *
       * @description - CPFS usage notes.
       *   - Only CPFS 2.2.0 and later support Fileset creation. You can view the version information on the file system details page in the console.
       *   - A single CPFS file system supports the creation of up to 10 Filesets.
       *   - The parent directory must be an existing directory.
       *   - The maximum supported depth of a Fileset path is 8 levels. The root directory / is level 0. For example, if the Fileset path is /test/aaa/ccc/, the path depth is 3 levels.
       *   - You cannot nest Filesets. If a parent directory is already specified as a Fileset, its subdirectories cannot be specified as Filesets.
       *   - A Fileset supports up to 1 million files. If the number of files exceeds this limit, adding a new file returns the `no space` error message.
       * - CPFS for Lingjun usage notes
       *   - Only CPFS for Lingjun 2.7.0 and later support Fileset creation. You can view the version information on the file system details page in the console.
       *   - A single CPFS for Lingjun file system supports the creation of up to 500 Filesets.
       *   - The Fileset path must be a new path and cannot be an existing path. Fileset paths cannot be renamed and cannot be symbolic links.
       *   - The maximum supported depth of a Fileset path is 8 levels. The root directory / is level 0. For example, if the Fileset path is /test/aaa/ccc/, the path depth is 3 levels.
       *   - If the Fileset path contains multiple directory levels, the parent directory must be an existing directory.
       *   - You cannot nest Filesets. If a parent directory is already specified as a Fileset, its subdirectories cannot be specified as Filesets. Each Fileset path supports only one quota.
       *   - For the Fileset capacity quota, the minimum initial value is 10 GiB, and the expansion unit is 1 GiB.
       *   - A Fileset supports up to 10 billion files or directories. The minimum initial value is 10,000, and the expansion unit is 1.
       *   - When you modify a directory quota, the configured quota capacity or file count must be greater than the used capacity or file count.
       *   - Quota statistics have a 15-minute delay. The current actual usage is reflected only after 15 minutes.
       *
       * @param request CreateFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFilesetResponse
       */
      Models::CreateFilesetResponse createFilesetWithOptions(const Models::CreateFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Fileset.
       *
       * @description - CPFS usage notes.
       *   - Only CPFS 2.2.0 and later support Fileset creation. You can view the version information on the file system details page in the console.
       *   - A single CPFS file system supports the creation of up to 10 Filesets.
       *   - The parent directory must be an existing directory.
       *   - The maximum supported depth of a Fileset path is 8 levels. The root directory / is level 0. For example, if the Fileset path is /test/aaa/ccc/, the path depth is 3 levels.
       *   - You cannot nest Filesets. If a parent directory is already specified as a Fileset, its subdirectories cannot be specified as Filesets.
       *   - A Fileset supports up to 1 million files. If the number of files exceeds this limit, adding a new file returns the `no space` error message.
       * - CPFS for Lingjun usage notes
       *   - Only CPFS for Lingjun 2.7.0 and later support Fileset creation. You can view the version information on the file system details page in the console.
       *   - A single CPFS for Lingjun file system supports the creation of up to 500 Filesets.
       *   - The Fileset path must be a new path and cannot be an existing path. Fileset paths cannot be renamed and cannot be symbolic links.
       *   - The maximum supported depth of a Fileset path is 8 levels. The root directory / is level 0. For example, if the Fileset path is /test/aaa/ccc/, the path depth is 3 levels.
       *   - If the Fileset path contains multiple directory levels, the parent directory must be an existing directory.
       *   - You cannot nest Filesets. If a parent directory is already specified as a Fileset, its subdirectories cannot be specified as Filesets. Each Fileset path supports only one quota.
       *   - For the Fileset capacity quota, the minimum initial value is 10 GiB, and the expansion unit is 1 GiB.
       *   - A Fileset supports up to 10 billion files or directories. The minimum initial value is 10,000, and the expansion unit is 1.
       *   - When you modify a directory quota, the configured quota capacity or file count must be greater than the used capacity or file count.
       *   - Quota statistics have a 15-minute delay. The current actual usage is reflected only after 15 minutes.
       *
       * @param request CreateFilesetRequest
       * @return CreateFilesetResponse
       */
      Models::CreateFilesetResponse createFileset(const Models::CreateFilesetRequest &request);

      /**
       * @deprecated OpenAPI CreateLDAPConfig is deprecated
       *
       * @summary Adds an LDAP configuration.
       *
       * @param request CreateLDAPConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLDAPConfigResponse
       */
      Models::CreateLDAPConfigResponse createLDAPConfigWithOptions(const Models::CreateLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateLDAPConfig is deprecated
       *
       * @summary Adds an LDAP configuration.
       *
       * @param request CreateLDAPConfigRequest
       * @return CreateLDAPConfigResponse
       */
      Models::CreateLDAPConfigResponse createLDAPConfig(const Models::CreateLDAPConfigRequest &request);

      /**
       * @summary Creates a lifecycle management policy.
       *
       * @description - Only General-purpose NAS file systems and CPFS for Lingjun support the creation of lifecycle management policies.
       * - You can create up to 10 Auto-type and 100 OnDemand-type lifecycle management policies for each CPFS for Lingjun file system.
       * - You can create up to 20 lifecycle management policies for General-purpose NAS in each region.
       *
       * @param request CreateLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLifecyclePolicyResponse
       */
      Models::CreateLifecyclePolicyResponse createLifecyclePolicyWithOptions(const Models::CreateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lifecycle management policy.
       *
       * @description - Only General-purpose NAS file systems and CPFS for Lingjun support the creation of lifecycle management policies.
       * - You can create up to 10 Auto-type and 100 OnDemand-type lifecycle management policies for each CPFS for Lingjun file system.
       * - You can create up to 20 lifecycle management policies for General-purpose NAS in each region.
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
       * @summary Delivers system logs of a General-purpose NAS file system to log analysis.
       *
       * @param request CreateLogAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogAnalysisResponse
       */
      Models::CreateLogAnalysisResponse createLogAnalysisWithOptions(const Models::CreateLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delivers system logs of a General-purpose NAS file system to log analysis.
       *
       * @param request CreateLogAnalysisRequest
       * @return CreateLogAnalysisResponse
       */
      Models::CreateLogAnalysisResponse createLogAnalysis(const Models::CreateLogAnalysisRequest &request);

      /**
       * @summary Creates a mount target.
       *
       * @description - When you invoke the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. Therefore, after the CreateMountTarget operation succeeds, invoke the DescribeMountTargets operation to query the status of the mount target. Execute the file system mount operation only after the mount target enters the **Active** state. Otherwise, the mount operation may result in a failed state.
       * - Invoking this operation triggers the automatic creation of the service-linked role and will associate it with the NAS service. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTargetWithOptions(const Models::CreateMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mount target.
       *
       * @description - When you invoke the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. Therefore, after the CreateMountTarget operation succeeds, invoke the DescribeMountTargets operation to query the status of the mount target. Execute the file system mount operation only after the mount target enters the **Active** state. Otherwise, the mount operation may result in a failed state.
       * - Invoking this operation triggers the automatic creation of the service-linked role and will associate it with the NAS service. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateMountTargetRequest
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTarget(const Models::CreateMountTargetRequest &request);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description - This operation is applicable only to CPFS file systems.
       * - Before you begin
       *   
       *    The target CPFS file system must be in the Running state, and a protocol service must be created.
       * - Other limits
       *     - The VPC CIDR block of the protocol service export must not overlap with the VPC CIDR block of the file system.
       *     - The CIDR blocks of multiple export VPCs on the same protocol service must not overlap.
       *     - You can create up to 10 export directories for a single protocol service.
       *     - Creating an export directory for a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP addresses.
       *
       * @param request CreateProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolMountTargetResponse
       */
      Models::CreateProtocolMountTargetResponse createProtocolMountTargetWithOptions(const Models::CreateProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description - This operation is applicable only to CPFS file systems.
       * - Before you begin
       *   
       *    The target CPFS file system must be in the Running state, and a protocol service must be created.
       * - Other limits
       *     - The VPC CIDR block of the protocol service export must not overlap with the VPC CIDR block of the file system.
       *     - The CIDR blocks of multiple export VPCs on the same protocol service must not overlap.
       *     - You can create up to 10 export directories for a single protocol service.
       *     - Creating an export directory for a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP addresses.
       *
       * @param request CreateProtocolMountTargetRequest
       * @return CreateProtocolMountTargetResponse
       */
      Models::CreateProtocolMountTargetResponse createProtocolMountTarget(const Models::CreateProtocolMountTargetRequest &request);

      /**
       * @summary Creates a protocol service for a CPFS file system. The creation process takes about 5 to 10 minutes.
       *
       * @description - This operation is applicable only to CPFS file systems.
       * - Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of the target file system.
       * - Protocol service specifications.
       * Protocol services include two protocol types: General-purpose and Cache. Compared with the General-purpose type, the Cache type provides the capability to cache hot spot data. When a cache hit occurs, the bandwidth of a Cache protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
       *   
       *     - General-purpose: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. Users do not need to configure a POSIX client for cluster management. This feature is free of charge.
       *     - Cache: Provides server-side memory caching based on the LRU policy in addition to the features of the General-purpose type. When data is cached in memory, CPFS can provide higher internal network bandwidth. Cache protocol services are divided into two specifications: Cache 1 and Cache 2. The difference lies in the internal network bandwidth and memory cache size.
       *     > Cache protocol services are paid services and are currently in invitational preview. For the billing methods of Cache protocol services, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk group (group ID: 31045006299) to communicate and discuss with CPFS engineers.
       * - Protocol types.
       * Only the NFSv3 protocol is supported.
       * - Prerequisites.
       * The target CPFS file system must be created and in the Running state.
       * - Others.
       *     - You can create only one protocol service for a CPFS file system.
       *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP addresses.
       *
       * @param request CreateProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolServiceWithOptions(const Models::CreateProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protocol service for a CPFS file system. The creation process takes about 5 to 10 minutes.
       *
       * @description - This operation is applicable only to CPFS file systems.
       * - Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of the target file system.
       * - Protocol service specifications.
       * Protocol services include two protocol types: General-purpose and Cache. Compared with the General-purpose type, the Cache type provides the capability to cache hot spot data. When a cache hit occurs, the bandwidth of a Cache protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
       *   
       *     - General-purpose: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. Users do not need to configure a POSIX client for cluster management. This feature is free of charge.
       *     - Cache: Provides server-side memory caching based on the LRU policy in addition to the features of the General-purpose type. When data is cached in memory, CPFS can provide higher internal network bandwidth. Cache protocol services are divided into two specifications: Cache 1 and Cache 2. The difference lies in the internal network bandwidth and memory cache size.
       *     > Cache protocol services are paid services and are currently in invitational preview. For the billing methods of Cache protocol services, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk group (group ID: 31045006299) to communicate and discuss with CPFS engineers.
       * - Protocol types.
       * Only the NFSv3 protocol is supported.
       * - Prerequisites.
       * The target CPFS file system must be created and in the Running state.
       * - Others.
       *     - You can create only one protocol service for a CPFS file system.
       *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP addresses.
       *
       * @param request CreateProtocolServiceRequest
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolService(const Models::CreateProtocolServiceRequest &request);

      /**
       * @summary Creates a task to permanently delete files or directories in the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - The recycle bin must be enabled.
       * - Mount the file system over NFS or SMB (you must use an ECS instance in the same VPC to mount the file system), and then delete the target files in the mount directory to move them to the recycle bin.
       * - When a directory is permanently deleted, its contents are recursively deleted.
       * - Only one permanent deletion task can be executed at a time for a single file system. You cannot initiate a new restoration or cleanup task while files or directories are being permanently deleted.
       *
       * @param request CreateRecycleBinDeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecycleBinDeleteJobResponse
       */
      Models::CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJobWithOptions(const Models::CreateRecycleBinDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to permanently delete files or directories in the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - The recycle bin must be enabled.
       * - Mount the file system over NFS or SMB (you must use an ECS instance in the same VPC to mount the file system), and then delete the target files in the mount directory to move them to the recycle bin.
       * - When a directory is permanently deleted, its contents are recursively deleted.
       * - Only one permanent deletion task can be executed at a time for a single file system. You cannot initiate a new restoration or cleanup task while files or directories are being permanently deleted.
       *
       * @param request CreateRecycleBinDeleteJobRequest
       * @return CreateRecycleBinDeleteJobResponse
       */
      Models::CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJob(const Models::CreateRecycleBinDeleteJobRequest &request);

      /**
       * @summary Restores a file from the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - A single file system can execute only one file restoration or cleanup task at a time. You cannot initiate a new file restoration or cleanup task while a file is being restored.
       * - A single restoration task can restore only one file or directory. Restoring a specified directory recursively restores all files in the directory.
       * - After a file is restored, data organization is performed. During data organization, the performance of read requests slightly decreases.
       *
       * @param request CreateRecycleBinRestoreJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecycleBinRestoreJobResponse
       */
      Models::CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJobWithOptions(const Models::CreateRecycleBinRestoreJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a file from the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - A single file system can execute only one file restoration or cleanup task at a time. You cannot initiate a new file restoration or cleanup task while a file is being restored.
       * - A single restoration task can restore only one file or directory. Restoring a specified directory recursively restores all files in the directory.
       * - After a file is restored, data organization is performed. During data organization, the performance of read requests slightly decreases.
       *
       * @param request CreateRecycleBinRestoreJobRequest
       * @return CreateRecycleBinRestoreJobResponse
       */
      Models::CreateRecycleBinRestoreJobResponse createRecycleBinRestoreJob(const Models::CreateRecycleBinRestoreJobRequest &request);

      /**
       * @summary Creates a snapshot.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.40a34bbe4vbvKY) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support snapshot creation.
       * - A maximum of 128 snapshots can be created for a single file system.
       * - The instance on which the file system is mounted must be in the Normal state. Otherwise, snapshots cannot be created.
       * - If a snapshot is being created, you cannot create another snapshot for the same file system.
       * - If the file system reaches its expire and release time while a snapshot is being created, the file system is released and the snapshot in the Creating state is also deleted.
       * - Creating a snapshot may slightly degrade the performance of the file system and temporarily slow down I/O performance. Avoid creating snapshots during peak hours.
       * - A snapshot only captures a backup of data at a specific point in time. Incremental data generated by file system operations during snapshot creation is not subject to synchronization to the snapshot.
       * - Manually created snapshots are retained until they are deleted 15 days after your account has an overdue payment and services are suspended. Periodically delete snapshots that are no longer needed to avoid ongoing snapshot size charges.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support snapshot creation.
       * - A maximum of 128 snapshots can be created for a single file system.
       * - The instance on which the file system is mounted must be in the Normal state. Otherwise, snapshots cannot be created.
       * - If a snapshot is being created, you cannot create another snapshot for the same file system.
       * - If the file system reaches its expire and release time while a snapshot is being created, the file system is released and the snapshot in the Creating state is also deleted.
       * - Creating a snapshot may slightly degrade the performance of the file system and temporarily slow down I/O performance. Avoid creating snapshots during peak hours.
       * - A snapshot only captures a backup of data at a specific point in time. Incremental data generated by file system operations during snapshot creation is not subject to synchronization to the snapshot.
       * - Manually created snapshots are retained until they are deleted 15 days after your account has an overdue payment and services are suspended. Periodically delete snapshots that are no longer needed to avoid ongoing snapshot size charges.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.40a34bbe4vbvKY) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support snapshot creation.
       * - A maximum of 128 snapshots can be created for a single file system.
       * - The instance on which the file system is mounted must be in the Normal state. Otherwise, snapshots cannot be created.
       * - If a snapshot is being created, you cannot create another snapshot for the same file system.
       * - If the file system reaches its expire and release time while a snapshot is being created, the file system is released and the snapshot in the Creating state is also deleted.
       * - Creating a snapshot may slightly degrade the performance of the file system and temporarily slow down I/O performance. Avoid creating snapshots during peak hours.
       * - A snapshot only captures a backup of data at a specific point in time. Incremental data generated by file system operations during snapshot creation is not subject to synchronization to the snapshot.
       * - Manually created snapshots are retained until they are deleted 15 days after your account has an overdue payment and services are suspended. Periodically delete snapshots that are no longer needed to avoid ongoing snapshot size charges.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support snapshot creation.
       * - A maximum of 128 snapshots can be created for a single file system.
       * - The instance on which the file system is mounted must be in the Normal state. Otherwise, snapshots cannot be created.
       * - If a snapshot is being created, you cannot create another snapshot for the same file system.
       * - If the file system reaches its expire and release time while a snapshot is being created, the file system is released and the snapshot in the Creating state is also deleted.
       * - Creating a snapshot may slightly degrade the performance of the file system and temporarily slow down I/O performance. Avoid creating snapshots during peak hours.
       * - A snapshot only captures a backup of data at a specific point in time. Incremental data generated by file system operations during snapshot creation is not subject to synchronization to the snapshot.
       * - Manually created snapshots are retained until they are deleted 15 days after your account has an overdue payment and services are suspended. Periodically delete snapshots that are no longer needed to avoid ongoing snapshot size charges.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary Deletes an existing permission group.
       *
       * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
       *
       * @param request DeleteAccessGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessGroupResponse
       */
      Models::DeleteAccessGroupResponse deleteAccessGroupWithOptions(const Models::DeleteAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an existing permission group.
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
       * @description - This feature is supported only by General-purpose NAS NFS file systems.
       * - After you delete an access point, all I/O operations that are currently accessing this folder through the access point will immediately break. Proceed with caution.
       *
       * @param request DeleteAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessPointResponse
       */
      Models::DeleteAccessPointResponse deleteAccessPointWithOptions(const Models::DeleteAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access point.
       *
       * @description - This feature is supported only by General-purpose NAS NFS file systems.
       * - After you delete an access point, all I/O operations that are currently accessing this folder through the access point will immediately break. Proceed with caution.
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
       * @description Applies to Agentic file systems.
       *
       * @param request DeleteAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgenticSpaceResponse
       */
      Models::DeleteAgenticSpaceResponse deleteAgenticSpaceWithOptions(const Models::DeleteAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Agentic space.
       *
       * @description Applies to Agentic file systems.
       *
       * @param request DeleteAgenticSpaceRequest
       * @return DeleteAgenticSpaceResponse
       */
      Models::DeleteAgenticSpaceResponse deleteAgenticSpace(const Models::DeleteAgenticSpaceRequest &request);

      /**
       * @summary Deletes an automatic snapshot policy.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - If the automatic snapshot policy has been applied to a file system, the file system no longer executes the policy after the policy is deleted.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - If the automatic snapshot policy has been applied to a file system, the file system no longer executes the policy after the policy is deleted.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicyWithOptions(const Models::DeleteAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic snapshot policy.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - If the automatic snapshot policy has been applied to a file system, the file system no longer executes the policy after the policy is deleted.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - If the automatic snapshot policy has been applied to a file system, the file system no longer executes the policy after the policy is deleted.
       *
       * @param request DeleteAutoSnapshotPolicyRequest
       * @return DeleteAutoSnapshotPolicyResponse
       */
      Models::DeleteAutoSnapshotPolicyResponse deleteAutoSnapshotPolicy(const Models::DeleteAutoSnapshotPolicyRequest &request);

      /**
       * @summary Deletes a CPFS for Lingjun access point.
       *
       * @description Deletes a CPFS for Lingjun access point.
       *
       * @param request DeleteCpfsAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCpfsAccessPointResponse
       */
      Models::DeleteCpfsAccessPointResponse deleteCpfsAccessPointWithOptions(const Models::DeleteCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CPFS for Lingjun access point.
       *
       * @description Deletes a CPFS for Lingjun access point.
       *
       * @param request DeleteCpfsAccessPointRequest
       * @return DeleteCpfsAccessPointResponse
       */
      Models::DeleteCpfsAccessPointResponse deleteCpfsAccessPoint(const Models::DeleteCpfsAccessPointRequest &request);

      /**
       * @summary Deletes a data flow.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - You can delete only data flows in the `Running` or `Stopped` state.
       * - After a data flow is deleted, its related resources are released and cannot be recovered. To use a data flow again, create a new one.
       *
       * @param request DeleteDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataFlowResponse
       */
      Models::DeleteDataFlowResponse deleteDataFlowWithOptions(const Models::DeleteDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data flow.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - You can delete only data flows in the `Running` or `Stopped` state.
       * - After a data flow is deleted, its related resources are released and cannot be recovered. To use a data flow again, create a new one.
       *
       * @param request DeleteDataFlowRequest
       * @return DeleteDataFlowResponse
       */
      Models::DeleteDataFlowResponse deleteDataFlow(const Models::DeleteDataFlowRequest &request);

      /**
       * @summary Deletes a file system.
       *
       * @description - A file system instance can be deleted only when the number of mount targets for the file system is 0.
       * - A file system instance can be deleted only when no lifecycle management policy is created for the file system.
       * - Once a file system instance is deleted, the data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystemWithOptions(const Models::DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file system.
       *
       * @description - A file system instance can be deleted only when the number of mount targets for the file system is 0.
       * - A file system instance can be deleted only when no lifecycle management policy is created for the file system.
       * - Once a file system instance is deleted, the data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteFileSystemRequest
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystem(const Models::DeleteFileSystemRequest &request);

      /**
       * @summary Deletes a fileset.
       *
       * @description - Only CPFS 2.2.0 and CPFS for Lingjun 2.7.0 and later support deleting filesets. After a fileset is deleted, all data in the directory is also deleted and cannot be recovered. Proceed with caution.
       * - If deletion protection is enabled, you must disable it before you can delete the fileset.
       * - All filesets in the destination file system must be in the CREATED desired state before you can perform the delete operation.
       * - Deleting a fileset in a general-purpose CPFS file system immediately releases disk space. Deleting a fileset in a CPFS for Lingjun file system gradually releases disk space. Deleted data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFilesetResponse
       */
      Models::DeleteFilesetResponse deleteFilesetWithOptions(const Models::DeleteFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a fileset.
       *
       * @description - Only CPFS 2.2.0 and CPFS for Lingjun 2.7.0 and later support deleting filesets. After a fileset is deleted, all data in the directory is also deleted and cannot be recovered. Proceed with caution.
       * - If deletion protection is enabled, you must disable it before you can delete the fileset.
       * - All filesets in the destination file system must be in the CREATED desired state before you can perform the delete operation.
       * - Deleting a fileset in a general-purpose CPFS file system immediately releases disk space. Deleting a fileset in a CPFS for Lingjun file system gradually releases disk space. Deleted data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteFilesetRequest
       * @return DeleteFilesetResponse
       */
      Models::DeleteFilesetResponse deleteFileset(const Models::DeleteFilesetRequest &request);

      /**
       * @deprecated OpenAPI DeleteLDAPConfig is deprecated
       *
       * @summary Deletes LDAP settings.
       *
       * @description # Description
       * This operation supports only Cloud Parallel File Storage (CPFS) parallel file systems.
       *
       * @param request DeleteLDAPConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLDAPConfigResponse
       */
      Models::DeleteLDAPConfigResponse deleteLDAPConfigWithOptions(const Models::DeleteLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteLDAPConfig is deprecated
       *
       * @summary Deletes LDAP settings.
       *
       * @description # Description
       * This operation supports only Cloud Parallel File Storage (CPFS) parallel file systems.
       *
       * @param request DeleteLDAPConfigRequest
       * @return DeleteLDAPConfigResponse
       */
      Models::DeleteLDAPConfigResponse deleteLDAPConfig(const Models::DeleteLDAPConfigRequest &request);

      /**
       * @summary Deletes a lifecycle management policy.
       *
       * @description Only General-purpose NAS file systems and CPFS for Lingjun support this feature.
       *
       * @param request DeleteLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLifecyclePolicyResponse
       */
      Models::DeleteLifecyclePolicyResponse deleteLifecyclePolicyWithOptions(const Models::DeleteLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lifecycle management policy.
       *
       * @description Only General-purpose NAS file systems and CPFS for Lingjun support this feature.
       *
       * @param request DeleteLifecyclePolicyRequest
       * @return DeleteLifecyclePolicyResponse
       */
      Models::DeleteLifecyclePolicyResponse deleteLifecyclePolicy(const Models::DeleteLifecyclePolicyRequest &request);

      /**
       * @summary Stops log analysis for a General-purpose NAS file system.
       *
       * @param request DeleteLogAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogAnalysisResponse
       */
      Models::DeleteLogAnalysisResponse deleteLogAnalysisWithOptions(const Models::DeleteLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops log analysis for a General-purpose NAS file system.
       *
       * @param request DeleteLogAnalysisRequest
       * @return DeleteLogAnalysisResponse
       */
      Models::DeleteLogAnalysisResponse deleteLogAnalysis(const Models::DeleteLogAnalysisRequest &request);

      /**
       * @summary Deletes an existing mount target.
       *
       * @description Deleted mount targets cannot be recovered. Proceed with caution.
       *
       * @param request DeleteMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTargetWithOptions(const Models::DeleteMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an existing mount target.
       *
       * @description Deleted mount targets cannot be recovered. Proceed with caution.
       *
       * @param request DeleteMountTargetRequest
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTarget(const Models::DeleteMountTargetRequest &request);

      /**
       * @summary Deletes an export directory of a protocol service.
       *
       * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DeleteProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtocolMountTargetResponse
       */
      Models::DeleteProtocolMountTargetResponse deleteProtocolMountTargetWithOptions(const Models::DeleteProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an export directory of a protocol service.
       *
       * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DeleteProtocolMountTargetRequest
       * @return DeleteProtocolMountTargetResponse
       */
      Models::DeleteProtocolMountTargetResponse deleteProtocolMountTarget(const Models::DeleteProtocolMountTargetRequest &request);

      /**
       * @summary Deletes the protocol service of a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * - When you delete a protocol service, the export directories in the protocol service are also deleted.
       *
       * @param request DeleteProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtocolServiceResponse
       */
      Models::DeleteProtocolServiceResponse deleteProtocolServiceWithOptions(const Models::DeleteProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the protocol service of a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * - When you delete a protocol service, the export directories in the protocol service are also deleted.
       *
       * @param request DeleteProtocolServiceRequest
       * @return DeleteProtocolServiceResponse
       */
      Models::DeleteProtocolServiceResponse deleteProtocolService(const Models::DeleteProtocolServiceRequest &request);

      /**
       * @summary Deletes a specified snapshot or cancels an ongoing snapshot creation task.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified snapshot or cancels an ongoing snapshot creation task.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
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
       * @summary Queries the description of a permission rule.
       *
       * @param request DescribeAccessRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessRulesResponse
       */
      Models::DescribeAccessRulesResponse describeAccessRulesWithOptions(const Models::DescribeAccessRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the description of a permission rule.
       *
       * @param request DescribeAccessRulesRequest
       * @return DescribeAccessRulesResponse
       */
      Models::DescribeAccessRulesResponse describeAccessRules(const Models::DescribeAccessRulesRequest &request);

      /**
       * @summary Queries Agentic spaces.
       *
       * @description Applies to Agentic file systems.
       * ## Before you begin
       * Before you call this operation, you must create resources in the following order:
       * 1. **Create an Agentic file system**: When you call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, you must set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, see the console.
       * 2. **Query the AgenticSpace list**: After the file system is created and its status changes to Running, call the DescribeAgenticSpaces operation to query the AgenticSpace list under the file system.
       *    - If AgenticSpaces are created under the file system, the complete list is returned.
       *    - If no AgenticSpaces are created under the file system, an empty list is returned.
       *
       * @param request DescribeAgenticSpacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAgenticSpacesResponse
       */
      Models::DescribeAgenticSpacesResponse describeAgenticSpacesWithOptions(const Models::DescribeAgenticSpacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Agentic spaces.
       *
       * @description Applies to Agentic file systems.
       * ## Before you begin
       * Before you call this operation, you must create resources in the following order:
       * 1. **Create an Agentic file system**: When you call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, you must set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, see the console.
       * 2. **Query the AgenticSpace list**: After the file system is created and its status changes to Running, call the DescribeAgenticSpaces operation to query the AgenticSpace list under the file system.
       *    - If AgenticSpaces are created under the file system, the complete list is returned.
       *    - If no AgenticSpaces are created under the file system, an empty list is returned.
       *
       * @param request DescribeAgenticSpacesRequest
       * @return DescribeAgenticSpacesResponse
       */
      Models::DescribeAgenticSpacesResponse describeAgenticSpaces(const Models::DescribeAgenticSpacesRequest &request);

      /**
       * @summary Queries the automatic snapshot policies that have been created.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeAutoSnapshotPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotPoliciesResponse
       */
      Models::DescribeAutoSnapshotPoliciesResponse describeAutoSnapshotPoliciesWithOptions(const Models::DescribeAutoSnapshotPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic snapshot policies that have been created.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeAutoSnapshotPoliciesRequest
       * @return DescribeAutoSnapshotPoliciesResponse
       */
      Models::DescribeAutoSnapshotPoliciesResponse describeAutoSnapshotPolicies(const Models::DescribeAutoSnapshotPoliciesRequest &request);

      /**
       * @summary Queries the list of automatic snapshot tasks.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeAutoSnapshotTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoSnapshotTasksResponse
       */
      Models::DescribeAutoSnapshotTasksResponse describeAutoSnapshotTasksWithOptions(const Models::DescribeAutoSnapshotTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of automatic snapshot tasks.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request DescribeAutoSnapshotTasksRequest
       * @return DescribeAutoSnapshotTasksResponse
       */
      Models::DescribeAutoSnapshotTasksResponse describeAutoSnapshotTasks(const Models::DescribeAutoSnapshotTasksRequest &request);

      /**
       * @deprecated OpenAPI DescribeBlackListClients is deprecated
       *
       * @summary Retrieves the status of blacklisted clients in the Cloud Parallel File Storage (CPFS) service.
       *
       * @description # Description
       * This operation applies only to CPFS parallel file systems.
       *
       * @param request DescribeBlackListClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBlackListClientsResponse
       */
      Models::DescribeBlackListClientsResponse describeBlackListClientsWithOptions(const Models::DescribeBlackListClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeBlackListClients is deprecated
       *
       * @summary Retrieves the status of blacklisted clients in the Cloud Parallel File Storage (CPFS) service.
       *
       * @description # Description
       * This operation applies only to CPFS parallel file systems.
       *
       * @param request DescribeBlackListClientsRequest
       * @return DescribeBlackListClientsResponse
       */
      Models::DescribeBlackListClientsResponse describeBlackListClients(const Models::DescribeBlackListClientsRequest &request);

      /**
       * @summary Queries the list of clients mounted to a CPFS for Lingjun access point.
       *
       * @description Queries the list of clients mounted to a CPFS for Lingjun access point.
       *
       * @param request DescribeCpfsAccessPointMountedClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCpfsAccessPointMountedClientsResponse
       */
      Models::DescribeCpfsAccessPointMountedClientsResponse describeCpfsAccessPointMountedClientsWithOptions(const Models::DescribeCpfsAccessPointMountedClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of clients mounted to a CPFS for Lingjun access point.
       *
       * @description Queries the list of clients mounted to a CPFS for Lingjun access point.
       *
       * @param request DescribeCpfsAccessPointMountedClientsRequest
       * @return DescribeCpfsAccessPointMountedClientsResponse
       */
      Models::DescribeCpfsAccessPointMountedClientsResponse describeCpfsAccessPointMountedClients(const Models::DescribeCpfsAccessPointMountedClientsRequest &request);

      /**
       * @summary Queries the access points of CPFS for Lingjun.
       *
       * @description Queries the access points of CPFS for Lingjun.
       *
       * @param request DescribeCpfsAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCpfsAccessPointsResponse
       */
      Models::DescribeCpfsAccessPointsResponse describeCpfsAccessPointsWithOptions(const Models::DescribeCpfsAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access points of CPFS for Lingjun.
       *
       * @description Queries the access points of CPFS for Lingjun.
       *
       * @param request DescribeCpfsAccessPointsRequest
       * @return DescribeCpfsAccessPointsResponse
       */
      Models::DescribeCpfsAccessPointsResponse describeCpfsAccessPoints(const Models::DescribeCpfsAccessPointsRequest &request);

      /**
       * @summary Queries the batch subtasks of a data flow.
       *
       * @description Supported only by CPFS for Lingjun 2.6.0 and later. You can view the version information on the file system details page in the console.
       * **Before you begin**
       * Before you call this operation to query data flow subtasks, you must create resources and start tasks in the following order:
       * 1. **Create a bmcpfs file system**: You must create a CPFS for Lingjun file system in the console and wait until its status changes to Running.
       * 2. **Create a data flow rule**: Call the [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflow-bmcpfs) operation on the file system to establish a data flow channel.
       * 3. **Start a data flow task**: Call the [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowtask-bmcpfs) operation to create and start a data flow task. The task status must be Running.
       * 4. **Query the subtask list**: Subtasks are automatically generated during the execution of a data flow task. Call the DescribeDataFlowSubTasks operation to query the list of these subtasks.
       *
       * @param request DescribeDataFlowSubTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowSubTasksResponse
       */
      Models::DescribeDataFlowSubTasksResponse describeDataFlowSubTasksWithOptions(const Models::DescribeDataFlowSubTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the batch subtasks of a data flow.
       *
       * @description Supported only by CPFS for Lingjun 2.6.0 and later. You can view the version information on the file system details page in the console.
       * **Before you begin**
       * Before you call this operation to query data flow subtasks, you must create resources and start tasks in the following order:
       * 1. **Create a bmcpfs file system**: You must create a CPFS for Lingjun file system in the console and wait until its status changes to Running.
       * 2. **Create a data flow rule**: Call the [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflow-bmcpfs) operation on the file system to establish a data flow channel.
       * 3. **Start a data flow task**: Call the [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowtask-bmcpfs) operation to create and start a data flow task. The task status must be Running.
       * 4. **Query the subtask list**: Subtasks are automatically generated during the execution of a data flow task. Call the DescribeDataFlowSubTasks operation to query the list of these subtasks.
       *
       * @param request DescribeDataFlowSubTasksRequest
       * @return DescribeDataFlowSubTasksResponse
       */
      Models::DescribeDataFlowSubTasksResponse describeDataFlowSubTasks(const Models::DescribeDataFlowSubTasksRequest &request);

      /**
       * @summary Queries the details of data flow tasks.
       *
       * @description Only CPFS 2.2.0 and later, and CPFS for Lingjun 2.4.0 and later support querying data flow tasks. You can view the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowTasksResponse
       */
      Models::DescribeDataFlowTasksResponse describeDataFlowTasksWithOptions(const Models::DescribeDataFlowTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of data flow tasks.
       *
       * @description Only CPFS 2.2.0 and later, and CPFS for Lingjun 2.4.0 and later support querying data flow tasks. You can view the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowTasksRequest
       * @return DescribeDataFlowTasksResponse
       */
      Models::DescribeDataFlowTasksResponse describeDataFlowTasks(const Models::DescribeDataFlowTasksRequest &request);

      /**
       * @summary Queries the data flow information of a CPFS file system.
       *
       * @description - Data flow is supported only by CPFS 2.2.0 and later, and CPFS for Lingjun 2.4.0 and later. You can view the version information on the file system details page in the console.
       * - Among the filter keys in Filters, FsetIds, DataFlowIds, SourceStorage, ThroughputList, and Status require exact match, while FileSystemPath, Description, and SourceStoragePath support fuzzy match.
       * - Combined queries are supported.
       *
       * @param request DescribeDataFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowsResponse
       */
      Models::DescribeDataFlowsResponse describeDataFlowsWithOptions(const Models::DescribeDataFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data flow information of a CPFS file system.
       *
       * @description - Data flow is supported only by CPFS 2.2.0 and later, and CPFS for Lingjun 2.4.0 and later. You can view the version information on the file system details page in the console.
       * - Among the filter keys in Filters, FsetIds, DataFlowIds, SourceStorage, ThroughputList, and Status require exact match, while FileSystemPath, Description, and SourceStoragePath support fuzzy match.
       * - Combined queries are supported.
       *
       * @param request DescribeDataFlowsRequest
       * @return DescribeDataFlowsResponse
       */
      Models::DescribeDataFlowsResponse describeDataFlows(const Models::DescribeDataFlowsRequest &request);

      /**
       * @summary Queries the details of directory quotas in a file system.
       *
       * @description Only General-purpose NAS NFS file systems support the directory quota feature.
       *
       * @param request DescribeDirQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirQuotasResponse
       */
      Models::DescribeDirQuotasResponse describeDirQuotasWithOptions(const Models::DescribeDirQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of directory quotas in a file system.
       *
       * @description Only General-purpose NAS NFS file systems support the directory quota feature.
       *
       * @param request DescribeDirQuotasRequest
       * @return DescribeDirQuotasResponse
       */
      Models::DescribeDirQuotasResponse describeDirQuotas(const Models::DescribeDirQuotasRequest &request);

      /**
       * @deprecated OpenAPI DescribeFileSystemStatistics is deprecated, please use NAS::2017-06-26::DescribeResourceStatistics instead.
       *
       * @summary Lists the statistics information of file systems under the current account.
       *
       * @param request DescribeFileSystemStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileSystemStatisticsResponse
       */
      Models::DescribeFileSystemStatisticsResponse describeFileSystemStatisticsWithOptions(const Models::DescribeFileSystemStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeFileSystemStatistics is deprecated, please use NAS::2017-06-26::DescribeResourceStatistics instead.
       *
       * @summary Lists the statistics information of file systems under the current account.
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
       * @summary Queries a list of created filesets.
       *
       * @description - Only CPFS 2.2.0 and CPFS for Lingjun 2.7.0 and later support filesets. You can view the version information on the file system details page in the console.
       * - For filter keys, FsetIds requires an exact match, whereas FileSystemPath and Description support fuzzy matching.
       * - Combined queries are supported.
       *
       * @param request DescribeFilesetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesetsResponse
       */
      Models::DescribeFilesetsResponse describeFilesetsWithOptions(const Models::DescribeFilesetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of created filesets.
       *
       * @description - Only CPFS 2.2.0 and CPFS for Lingjun 2.7.0 and later support filesets. You can view the version information on the file system details page in the console.
       * - For filter keys, FsetIds requires an exact match, whereas FileSystemPath and Description support fuzzy matching.
       * - Combined queries are supported.
       *
       * @param request DescribeFilesetsRequest
       * @return DescribeFilesetsResponse
       */
      Models::DescribeFilesetsResponse describeFilesets(const Models::DescribeFilesetsRequest &request);

      /**
       * @summary Queries the HpnZones associated with a file system. Access performance is optimal when compute nodes are located in the associated HpnZones.
       *
       * @description - Only CPFS for Lingjun file systems are supported.
       * - This is a batch operation that allows you to query up to 20 file systems at a time.
       *
       * @param tmpReq DescribeFilesystemsAssociatedHpnZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesystemsAssociatedHpnZonesResponse
       */
      Models::DescribeFilesystemsAssociatedHpnZonesResponse describeFilesystemsAssociatedHpnZonesWithOptions(const Models::DescribeFilesystemsAssociatedHpnZonesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the HpnZones associated with a file system. Access performance is optimal when compute nodes are located in the associated HpnZones.
       *
       * @description - Only CPFS for Lingjun file systems are supported.
       * - This is a batch operation that allows you to query up to 20 file systems at a time.
       *
       * @param request DescribeFilesystemsAssociatedHpnZonesRequest
       * @return DescribeFilesystemsAssociatedHpnZonesResponse
       */
      Models::DescribeFilesystemsAssociatedHpnZonesResponse describeFilesystemsAssociatedHpnZones(const Models::DescribeFilesystemsAssociatedHpnZonesRequest &request);

      /**
       * @summary Queries the information about virtual storage channels associated with file systems.
       *
       * @description - Only CPFS for Lingjun supports this feature. To use CPFS for Lingjun, you must first submit a ticket to apply for the service whitelist, and then create a file system in the NAS console.
       * - Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be identical.
       * - To query the association results between file systems and virtual storage channels, call AttachVscToFilesystems to complete the association first. You can call the ListVscs operation of Lingjun AI Computing Service eflo-controller/2022-12-15 to query the VscId. If the virtual storage channel is not created, call CreateVsc to create one.
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfoWithOptions(const Models::DescribeFilesystemsVscAttachInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about virtual storage channels associated with file systems.
       *
       * @description - Only CPFS for Lingjun supports this feature. To use CPFS for Lingjun, you must first submit a ticket to apply for the service whitelist, and then create a file system in the NAS console.
       * - Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be identical.
       * - To query the association results between file systems and virtual storage channels, call AttachVscToFilesystems to complete the association first. You can call the ListVscs operation of Lingjun AI Computing Service eflo-controller/2022-12-15 to query the VscId. If the virtual storage channel is not created, call CreateVsc to create one.
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfo(const Models::DescribeFilesystemsVscAttachInfoRequest &request);

      /**
       * @summary Retrieves a list of lifecycle management policies.
       *
       * @description This feature is supported only by General-purpose NAS file systems and CPFS for Lingjun.
       *
       * @param request DescribeLifecyclePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecyclePoliciesResponse
       */
      Models::DescribeLifecyclePoliciesResponse describeLifecyclePoliciesWithOptions(const Models::DescribeLifecyclePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of lifecycle management policies.
       *
       * @description This feature is supported only by General-purpose NAS file systems and CPFS for Lingjun.
       *
       * @param request DescribeLifecyclePoliciesRequest
       * @return DescribeLifecyclePoliciesResponse
       */
      Models::DescribeLifecyclePoliciesResponse describeLifecyclePolicies(const Models::DescribeLifecyclePoliciesRequest &request);

      /**
       * @summary Queries the execution logs of a lifecycle policy. You can query up to 1,000 logs from the last 90 days. This operation is supported only by CPFS for Lingjun.
       *
       * @description Queries the execution logs of a lifecycle policy. You can query up to 1,000 logs from the last 90 days. This operation is supported only by CPFS for Lingjun.
       * ## Before you begin
       * - Ensure that the file system specified by FileSystemId is a CPFS for Lingjun file system.
       * - Before you call this operation, call [DescribeLifecyclePolicies](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describelifecyclepolicies) to query and obtain a valid LifecyclePolicyId.
       *
       * @param request DescribeLifecyclePolicyLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecyclePolicyLogsResponse
       */
      Models::DescribeLifecyclePolicyLogsResponse describeLifecyclePolicyLogsWithOptions(const Models::DescribeLifecyclePolicyLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution logs of a lifecycle policy. You can query up to 1,000 logs from the last 90 days. This operation is supported only by CPFS for Lingjun.
       *
       * @description Queries the execution logs of a lifecycle policy. You can query up to 1,000 logs from the last 90 days. This operation is supported only by CPFS for Lingjun.
       * ## Before you begin
       * - Ensure that the file system specified by FileSystemId is a CPFS for Lingjun file system.
       * - Before you call this operation, call [DescribeLifecyclePolicies](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describelifecyclepolicies) to query and obtain a valid LifecyclePolicyId.
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
       * @summary Queries the list of mounted clients.
       *
       * @description - Only General-purpose NAS file systems support this operation.
       * - The client list displays client IP addresses that have read or write access to the file system within the last minute. Some mounted client IP addresses that have not accessed the file system may not appear in this list.
       *
       * @param request DescribeMountedClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountedClientsResponse
       */
      Models::DescribeMountedClientsResponse describeMountedClientsWithOptions(const Models::DescribeMountedClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of mounted clients.
       *
       * @description - Only General-purpose NAS file systems support this operation.
       * - The client list displays client IP addresses that have read or write access to the file system within the last minute. Some mounted client IP addresses that have not accessed the file system may not appear in this list.
       *
       * @param request DescribeMountedClientsRequest
       * @return DescribeMountedClientsResponse
       */
      Models::DescribeMountedClientsResponse describeMountedClients(const Models::DescribeMountedClientsRequest &request);

      /**
       * @summary Queries whether the NFS ACL feature is enabled for a specified file system.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request DescribeNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNfsAclResponse
       */
      Models::DescribeNfsAclResponse describeNfsAclWithOptions(const Models::DescribeNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the NFS ACL feature is enabled for a specified file system.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request DescribeNfsAclRequest
       * @return DescribeNfsAclResponse
       */
      Models::DescribeNfsAclResponse describeNfsAcl(const Models::DescribeNfsAclRequest &request);

      /**
       * @summary Queries the export directories of a protocol service.
       *
       * @description This operation applies only to CPFS file systems.
       *
       * @param request DescribeProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTargetWithOptions(const Models::DescribeProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export directories of a protocol service.
       *
       * @description This operation applies only to CPFS file systems.
       *
       * @param request DescribeProtocolMountTargetRequest
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTarget(const Models::DescribeProtocolMountTargetRequest &request);

      /**
       * @summary Queries protocol service information.
       *
       * @description This operation is applicable only to CPFS file systems.
       *
       * @param request DescribeProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolServiceResponse
       */
      Models::DescribeProtocolServiceResponse describeProtocolServiceWithOptions(const Models::DescribeProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries protocol service information.
       *
       * @description This operation is applicable only to CPFS file systems.
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
       * @summary Queries the SMB AD ACL feature.
       *
       * @description - Before you begin: Before calling this API, ensure that the KMS service is activated in the target region. You can activate it by calling the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) API or through the console. This restriction also applies to unencrypted file systems where EncryptType=0.
       *
       * @param request DescribeSmbAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSmbAclResponse
       */
      Models::DescribeSmbAclResponse describeSmbAclWithOptions(const Models::DescribeSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SMB AD ACL feature.
       *
       * @description - Before you begin: Before calling this API, ensure that the KMS service is activated in the target region. You can activate it by calling the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) API or through the console. This restriction also applies to unencrypted file systems where EncryptType=0.
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
       * @summary Queries the list of storage plans.
       *
       * @param request DescribeStoragePackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStoragePackagesResponse
       */
      Models::DescribeStoragePackagesResponse describeStoragePackagesWithOptions(const Models::DescribeStoragePackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of storage plans.
       *
       * @param request DescribeStoragePackagesRequest
       * @return DescribeStoragePackagesResponse
       */
      Models::DescribeStoragePackagesResponse describeStoragePackages(const Models::DescribeStoragePackagesRequest &request);

      /**
       * @summary Queries all zones in a region and the file system types supported by each zone.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all zones in a region and the file system types supported by each zone.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Dissociates a VSC device from a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be identical.
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
       * - Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be identical.
       *
       * @param request DetachVscFromFilesystemsRequest
       * @return DetachVscFromFilesystemsResponse
       */
      Models::DetachVscFromFilesystemsResponse detachVscFromFilesystems(const Models::DetachVscFromFilesystemsRequest &request);

      /**
       * @summary Disables the recycle bin feature for a General-purpose NAS file system and clears the data in the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - Disabling the recycle bin permanently deletes all files in the recycle bin.
       * - After you re-enable a disabled recycle bin, the recycle bin is empty, and you cannot recover files that were deleted before the recycle bin feature was enabled.
       *
       * @param request DisableAndCleanRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAndCleanRecycleBinResponse
       */
      Models::DisableAndCleanRecycleBinResponse disableAndCleanRecycleBinWithOptions(const Models::DisableAndCleanRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the recycle bin feature for a General-purpose NAS file system and clears the data in the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - Disabling the recycle bin permanently deletes all files in the recycle bin.
       * - After you re-enable a disabled recycle bin, the recycle bin is empty, and you cannot recover files that were deleted before the recycle bin feature was enabled.
       *
       * @param request DisableAndCleanRecycleBinRequest
       * @return DisableAndCleanRecycleBinResponse
       */
      Models::DisableAndCleanRecycleBinResponse disableAndCleanRecycleBin(const Models::DisableAndCleanRecycleBinRequest &request);

      /**
       * @summary Disables EBS Lens.
       *
       * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
       *
       * @param request DisableDataInsightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDataInsightResponse
       */
      Models::DisableDataInsightResponse disableDataInsightWithOptions(const Models::DisableDataInsightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables EBS Lens.
       *
       * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
       *
       * @param request DisableDataInsightRequest
       * @return DisableDataInsightResponse
       */
      Models::DisableDataInsightResponse disableDataInsight(const Models::DisableDataInsightRequest &request);

      /**
       * @summary Disables the NFS ACL feature.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request DisableNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableNfsAclResponse
       */
      Models::DisableNfsAclResponse disableNfsAclWithOptions(const Models::DisableNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the NFS ACL feature.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request DisableNfsAclRequest
       * @return DisableNfsAclResponse
       */
      Models::DisableNfsAclResponse disableNfsAcl(const Models::DisableNfsAclRequest &request);

      /**
       * @summary Disables the SMB AD ACL feature.
       *
       * @description - Before you begin: Before calling this API, make sure that Key Management Service (KMS) is activated in the target region. You can activate KMS by calling the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) API or by using the console. The file system protocol type must be SMB. You can call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to verify the file system protocol type.
       *
       * @param request DisableSmbAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSmbAclResponse
       */
      Models::DisableSmbAclResponse disableSmbAclWithOptions(const Models::DisableSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the SMB AD ACL feature.
       *
       * @description - Before you begin: Before calling this API, make sure that Key Management Service (KMS) is activated in the target region. You can activate KMS by calling the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) API or by using the console. The file system protocol type must be SMB. You can call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to verify the file system protocol type.
       *
       * @param request DisableSmbAclRequest
       * @return DisableSmbAclResponse
       */
      Models::DisableSmbAclResponse disableSmbAcl(const Models::DisableSmbAclRequest &request);

      /**
       * @summary Enables EBS Lens.
       *
       * @description Enables the EBS Lens feature. This feature is supported only by CPFS for Lingjun and is currently in the invitational preview phase.
       * ## Before you begin
       * 1. You have obtained the qualification for the invitational preview of CPFS for Lingjun by submitting a ticket.
       * 2. You have purchased a CPFS for Lingjun file system through the NAS console and obtained a file system ID with the `bmcpfs-*` prefix.
       *
       * @param request EnableDataInsightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDataInsightResponse
       */
      Models::EnableDataInsightResponse enableDataInsightWithOptions(const Models::EnableDataInsightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables EBS Lens.
       *
       * @description Enables the EBS Lens feature. This feature is supported only by CPFS for Lingjun and is currently in the invitational preview phase.
       * ## Before you begin
       * 1. You have obtained the qualification for the invitational preview of CPFS for Lingjun by submitting a ticket.
       * 2. You have purchased a CPFS for Lingjun file system through the NAS console and obtained a file system ID with the `bmcpfs-*` prefix.
       *
       * @param request EnableDataInsightRequest
       * @return EnableDataInsightResponse
       */
      Models::EnableDataInsightResponse enableDataInsight(const Models::EnableDataInsightRequest &request);

      /**
       * @summary Enables the NFS ACL feature.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request EnableNfsAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableNfsAclResponse
       */
      Models::EnableNfsAclResponse enableNfsAclWithOptions(const Models::EnableNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the NFS ACL feature.
       *
       * @description Only General-purpose NAS NFS file systems support this feature.
       *
       * @param request EnableNfsAclRequest
       * @return EnableNfsAclResponse
       */
      Models::EnableNfsAclResponse enableNfsAcl(const Models::EnableNfsAclRequest &request);

      /**
       * @summary Enables the recycle bin feature.
       *
       * @description Only General-purpose NAS file systems support this API operation.
       *
       * @param request EnableRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableRecycleBinResponse
       */
      Models::EnableRecycleBinResponse enableRecycleBinWithOptions(const Models::EnableRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the recycle bin feature.
       *
       * @description Only General-purpose NAS file systems support this API operation.
       *
       * @param request EnableRecycleBinRequest
       * @return EnableRecycleBinResponse
       */
      Models::EnableRecycleBinResponse enableRecycleBin(const Models::EnableRecycleBinRequest &request);

      /**
       * @summary Enables the SMB AD ACL feature.
       *
       * @description - By connecting the mount target of an SMB file system to an AD domain, you can implement user identity authentication management and file-level access permissions control in the AD domain. Before you mount and use an SMB file system as an AD domain user, you must register a service for the SMB file system in the AD domain, generate a keytab file, and upload the file to the NAS console to enable the SMB ACL feature. [Generate a keytab file](https://help.aliyun.com/document_detail/154930.html).
       * - Before you begin: Before invoking this operation, confirm that Key Management Service (KMS) is activated in the target area. You can invoke the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) operation or activate KMS in the console.
       *
       * @param request EnableSmbAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSmbAclResponse
       */
      Models::EnableSmbAclResponse enableSmbAclWithOptions(const Models::EnableSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the SMB AD ACL feature.
       *
       * @description - By connecting the mount target of an SMB file system to an AD domain, you can implement user identity authentication management and file-level access permissions control in the AD domain. Before you mount and use an SMB file system as an AD domain user, you must register a service for the SMB file system in the AD domain, generate a keytab file, and upload the file to the NAS console to enable the SMB ACL feature. [Generate a keytab file](https://help.aliyun.com/document_detail/154930.html).
       * - Before you begin: Before invoking this operation, confirm that Key Management Service (KMS) is activated in the target area. You can invoke the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) operation or activate KMS in the console.
       *
       * @param request EnableSmbAclRequest
       * @return EnableSmbAclResponse
       */
      Models::EnableSmbAclResponse enableSmbAcl(const Models::EnableSmbAclRequest &request);

      /**
       * @summary Queries an Agentic space.
       *
       * @description Applies to Agentic file systems.
       * ## Before you begin
       * Before you call this operation, create resources in the following order:
       * 1. **Create an Agentic file system**: When you call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `FileSystemType`: Set to `standard`.
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage class is available only in specific regions and zones. Go to the [NAS console](https://nasnext.console.aliyun.com/) to view the available regions and zones, or contact Alibaba Cloud technical support to obtain the latest list of supported regions.
       * 2. **Create an Agentic space**: After the file system is created and its status changes to Running, call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space in the file system and obtain the returned AgenticSpaceId.
       *
       * @param request GetAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgenticSpaceResponse
       */
      Models::GetAgenticSpaceResponse getAgenticSpaceWithOptions(const Models::GetAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an Agentic space.
       *
       * @description Applies to Agentic file systems.
       * ## Before you begin
       * Before you call this operation, create resources in the following order:
       * 1. **Create an Agentic file system**: When you call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `FileSystemType`: Set to `standard`.
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage class is available only in specific regions and zones. Go to the [NAS console](https://nasnext.console.aliyun.com/) to view the available regions and zones, or contact Alibaba Cloud technical support to obtain the latest list of supported regions.
       * 2. **Create an Agentic space**: After the file system is created and its status changes to Running, call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space in the file system and obtain the returned AgenticSpaceId.
       *
       * @param request GetAgenticSpaceRequest
       * @return GetAgenticSpaceResponse
       */
      Models::GetAgenticSpaceResponse getAgenticSpace(const Models::GetAgenticSpaceRequest &request);

      /**
       * @summary Queries whether a specified directory contains Infrequent Access (IA) storage class or Archive storage class files, or queries whether a specified file is an IA storage class or Archive storage class file.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request GetDirectoryOrFilePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectoryOrFilePropertiesResponse
       */
      Models::GetDirectoryOrFilePropertiesResponse getDirectoryOrFilePropertiesWithOptions(const Models::GetDirectoryOrFilePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a specified directory contains Infrequent Access (IA) storage class or Archive storage class files, or queries whether a specified file is an IA storage class or Archive storage class file.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request GetDirectoryOrFilePropertiesRequest
       * @return GetDirectoryOrFilePropertiesResponse
       */
      Models::GetDirectoryOrFilePropertiesResponse getDirectoryOrFileProperties(const Models::GetDirectoryOrFilePropertiesRequest &request);

      /**
       * @summary Queries the details of a created Fileset.
       *
       * @description Only CPFS 2.2.0 and CPFS for Lingjun 2.7.0 and later support Filesets. You can view the version information on the file system details page in the console.
       *
       * @param request GetFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFilesetResponse
       */
      Models::GetFilesetResponse getFilesetWithOptions(const Models::GetFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a created Fileset.
       *
       * @description Only CPFS 2.2.0 and CPFS for Lingjun 2.7.0 and later support Filesets. You can view the version information on the file system details page in the console.
       *
       * @param request GetFilesetRequest
       * @return GetFilesetResponse
       */
      Models::GetFilesetResponse getFileset(const Models::GetFilesetRequest &request);

      /**
       * @summary Queries the information about protocol service export directories.
       *
       * @description Queries the information about protocol service export directories.
       * **Before you begin**
       * Before you call this operation, make sure that each dependent resource in the following three-tier resource model exists:
       * 1. **File system (FileSystem)**: Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to obtain the FileSystemId.
       * 2. **Protocol service (ProtocolService)**: Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to obtain the ProtocolServiceId, or call [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) to create a protocol service.
       * 3. **Export directory (ProtocolMountTarget)**: Call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create an export directory and obtain the ExportId, or call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the export directory.
       *
       * @param request GetProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProtocolMountTargetResponse
       */
      Models::GetProtocolMountTargetResponse getProtocolMountTargetWithOptions(const Models::GetProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about protocol service export directories.
       *
       * @description Queries the information about protocol service export directories.
       * **Before you begin**
       * Before you call this operation, make sure that each dependent resource in the following three-tier resource model exists:
       * 1. **File system (FileSystem)**: Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to obtain the FileSystemId.
       * 2. **Protocol service (ProtocolService)**: Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to obtain the ProtocolServiceId, or call [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) to create a protocol service.
       * 3. **Export directory (ProtocolMountTarget)**: Call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create an export directory and obtain the ExportId, or call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the export directory.
       *
       * @param request GetProtocolMountTargetRequest
       * @return GetProtocolMountTargetResponse
       */
      Models::GetProtocolMountTargetResponse getProtocolMountTarget(const Models::GetProtocolMountTargetRequest &request);

      /**
       * @summary Queries the recycle bin configurations of a specified General-purpose NAS file system.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request GetRecycleBinAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecycleBinAttributeResponse
       */
      Models::GetRecycleBinAttributeResponse getRecycleBinAttributeWithOptions(const Models::GetRecycleBinAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recycle bin configurations of a specified General-purpose NAS file system.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request GetRecycleBinAttributeRequest
       * @return GetRecycleBinAttributeResponse
       */
      Models::GetRecycleBinAttributeResponse getRecycleBinAttribute(const Models::GetRecycleBinAttributeRequest &request);

      /**
       * @summary Queries access point information.
       *
       * @description Only General-purpose NAS NFS file systems are supported.
       *
       * @param request ListAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessPointsResponse
       */
      Models::ListAccessPointsResponse listAccessPointsWithOptions(const Models::ListAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access point information.
       *
       * @description Only General-purpose NAS NFS file systems are supported.
       *
       * @param request ListAccessPointsRequest
       * @return ListAccessPointsResponse
       */
      Models::ListAccessPointsResponse listAccessPoints(const Models::ListAccessPointsRequest &request);

      /**
       * @summary Retrieves the EBS Lens folder structure.
       *
       * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
       *
       * @param request ListDataInsightDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataInsightDirectoriesResponse
       */
      Models::ListDataInsightDirectoriesResponse listDataInsightDirectoriesWithOptions(const Models::ListDataInsightDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the EBS Lens folder structure.
       *
       * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
       *
       * @param request ListDataInsightDirectoriesRequest
       * @return ListDataInsightDirectoriesResponse
       */
      Models::ListDataInsightDirectoriesResponse listDataInsightDirectories(const Models::ListDataInsightDirectoriesRequest &request);

      /**
       * @summary Retrieves the list of IA storage class files and subdirectories that contain IA storage class files under a specified directory in a General-purpose NAS file system.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request ListDirectoriesAndFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDirectoriesAndFilesResponse
       */
      Models::ListDirectoriesAndFilesResponse listDirectoriesAndFilesWithOptions(const Models::ListDirectoriesAndFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of IA storage class files and subdirectories that contain IA storage class files under a specified directory in a General-purpose NAS file system.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request ListDirectoriesAndFilesRequest
       * @return ListDirectoriesAndFilesResponse
       */
      Models::ListDirectoriesAndFilesResponse listDirectoriesAndFiles(const Models::ListDirectoriesAndFilesRequest &request);

      /**
       * @summary Retrieves a list of created data retrieval tasks.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request ListLifecycleRetrieveJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLifecycleRetrieveJobsResponse
       */
      Models::ListLifecycleRetrieveJobsResponse listLifecycleRetrieveJobsWithOptions(const Models::ListLifecycleRetrieveJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of created data retrieval tasks.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request ListLifecycleRetrieveJobsRequest
       * @return ListLifecycleRetrieveJobsResponse
       */
      Models::ListLifecycleRetrieveJobsResponse listLifecycleRetrieveJobs(const Models::ListLifecycleRetrieveJobsRequest &request);

      /**
       * @summary Queries directories on which delete operations were recently performed.
       *
       * @description Only General-purpose NAS file systems support this feature.
       * **Before you begin**
       * Before calling this operation, make sure that the recycle bin feature is enabled for the file system. If the recycle bin is not enabled, this operation cannot return the list of recently deleted directories.
       * **Enable the recycle bin**
       * To enable the recycle bin feature, call the [EnableRecycleBin](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablerecyclebin) operation. After the recycle bin is enabled, deleted directories in the file system are moved to the recycle bin. You can call this operation to query the list of recently deleted directories.
       *
       * @param request ListRecentlyRecycledDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecentlyRecycledDirectoriesResponse
       */
      Models::ListRecentlyRecycledDirectoriesResponse listRecentlyRecycledDirectoriesWithOptions(const Models::ListRecentlyRecycledDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries directories on which delete operations were recently performed.
       *
       * @description Only General-purpose NAS file systems support this feature.
       * **Before you begin**
       * Before calling this operation, make sure that the recycle bin feature is enabled for the file system. If the recycle bin is not enabled, this operation cannot return the list of recently deleted directories.
       * **Enable the recycle bin**
       * To enable the recycle bin feature, call the [EnableRecycleBin](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablerecyclebin) operation. After the recycle bin is enabled, deleted directories in the file system are moved to the recycle bin. You can call this operation to query the list of recently deleted directories.
       *
       * @param request ListRecentlyRecycledDirectoriesRequest
       * @return ListRecentlyRecycledDirectoriesResponse
       */
      Models::ListRecentlyRecycledDirectoriesResponse listRecentlyRecycledDirectories(const Models::ListRecentlyRecycledDirectoriesRequest &request);

      /**
       * @summary Queries information about one or more tasks in the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - You can query up to 50 most recently executed tasks.
       *
       * @param request ListRecycleBinJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecycleBinJobsResponse
       */
      Models::ListRecycleBinJobsResponse listRecycleBinJobsWithOptions(const Models::ListRecycleBinJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more tasks in the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - You can query up to 50 most recently executed tasks.
       *
       * @param request ListRecycleBinJobsRequest
       * @return ListRecycleBinJobsResponse
       */
      Models::ListRecycleBinJobsResponse listRecycleBinJobs(const Models::ListRecycleBinJobsRequest &request);

      /**
       * @summary Queries deleted files or directories.
       *
       * @description Only General-purpose NAS supports this feature.
       *
       * @param request ListRecycledDirectoriesAndFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecycledDirectoriesAndFilesResponse
       */
      Models::ListRecycledDirectoriesAndFilesResponse listRecycledDirectoriesAndFilesWithOptions(const Models::ListRecycledDirectoriesAndFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries deleted files or directories.
       *
       * @description Only General-purpose NAS supports this feature.
       *
       * @param request ListRecycledDirectoriesAndFilesRequest
       * @return ListRecycledDirectoriesAndFilesResponse
       */
      Models::ListRecycledDirectoriesAndFilesResponse listRecycledDirectoriesAndFiles(const Models::ListRecycledDirectoriesAndFilesRequest &request);

      /**
       * @summary Queries a list of tags.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags.
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
       * @summary Modifies the information of an access point.
       *
       * @description This feature is supported only by General-purpose NAS NFS file systems.
       *
       * @param request ModifyAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessPointResponse
       */
      Models::ModifyAccessPointResponse modifyAccessPointWithOptions(const Models::ModifyAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of an access point.
       *
       * @description This feature is supported only by General-purpose NAS NFS file systems.
       *
       * @param request ModifyAccessPointRequest
       * @return ModifyAccessPointResponse
       */
      Models::ModifyAccessPointResponse modifyAccessPoint(const Models::ModifyAccessPointRequest &request);

      /**
       * @summary Modifies a permission rule in a permission group.
       *
       * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
       *
       * @param request ModifyAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccessRuleResponse
       */
      Models::ModifyAccessRuleResponse modifyAccessRuleWithOptions(const Models::ModifyAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a permission rule in a permission group.
       *
       * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
       *
       * @param request ModifyAccessRuleRequest
       * @return ModifyAccessRuleResponse
       */
      Models::ModifyAccessRuleResponse modifyAccessRule(const Models::ModifyAccessRuleRequest &request);

      /**
       * @summary Modifies an Agentic space.
       *
       * @description **Before you begin**
       * Before calling this operation, complete the following preparations:
       * 1. **Obtained the AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
       * 2. **Created an Agentic file system**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, see the console.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Example of a complete call chain:
       *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
       *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
       *   3. Call this ModifyAgenticSpace operation to modify the configurations of the Agentic space.
       *
       * @param request ModifyAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAgenticSpaceResponse
       */
      Models::ModifyAgenticSpaceResponse modifyAgenticSpaceWithOptions(const Models::ModifyAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Agentic space.
       *
       * @description **Before you begin**
       * Before calling this operation, complete the following preparations:
       * 1. **Obtained the AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
       * 2. **Created an Agentic file system**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, see the console.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Example of a complete call chain:
       *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
       *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
       *   3. Call this ModifyAgenticSpace operation to modify the configurations of the Agentic space.
       *
       * @param request ModifyAgenticSpaceRequest
       * @return ModifyAgenticSpaceResponse
       */
      Models::ModifyAgenticSpaceResponse modifyAgenticSpace(const Models::ModifyAgenticSpaceRequest &request);

      /**
       * @summary Modifies an automatic snapshot policy. After you modify an automatic snapshot policy, file systems to which the policy has been applied immediately execute the modified policy.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request ModifyAutoSnapshotPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoSnapshotPolicyResponse
       */
      Models::ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicyWithOptions(const Models::ModifyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an automatic snapshot policy. After you modify an automatic snapshot policy, file systems to which the policy has been applied immediately execute the modified policy.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       *
       * @param request ModifyAutoSnapshotPolicyRequest
       * @return ModifyAutoSnapshotPolicyResponse
       */
      Models::ModifyAutoSnapshotPolicyResponse modifyAutoSnapshotPolicy(const Models::ModifyAutoSnapshotPolicyRequest &request);

      /**
       * @summary Modifies an access point of CPFS for Lingjun.
       *
       * @description Modifies an access point of CPFS for Lingjun.
       *
       * @param request ModifyCpfsAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCpfsAccessPointResponse
       */
      Models::ModifyCpfsAccessPointResponse modifyCpfsAccessPointWithOptions(const Models::ModifyCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an access point of CPFS for Lingjun.
       *
       * @description Modifies an access point of CPFS for Lingjun.
       *
       * @param request ModifyCpfsAccessPointRequest
       * @return ModifyCpfsAccessPointResponse
       */
      Models::ModifyCpfsAccessPointResponse modifyCpfsAccessPoint(const Models::ModifyCpfsAccessPointRequest &request);

      /**
       * @summary Modifies the attributes of a data flow.
       *
       * @description - CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data streams.
       * - You can modify the properties of a data stream only when the data stream is in the `Running (Normal)` state.
       * - Modifying a data stream typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data stream modification.
       * - CPFS data stream specifications:
       *     - Data stream bandwidth (Throughput) supports three specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data stream bandwidth specifies the maximum transmission bandwidth that the data stream can achieve during data import or export.
       *     - Inventory check: If you set DryRun to true, you can check whether the resources required to modify the data stream to the specified specification are sufficient.
       * - CPFS billing
       *   Modifying the data stream bandwidth (Throughput) incurs data stream bandwidth fees. Familiarize yourself with the billable methods of CPFS in advance. For details, see [CPFS billing](https://help.aliyun.com/document_detail/111858.html).
       *
       * @param request ModifyDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataFlowResponse
       */
      Models::ModifyDataFlowResponse modifyDataFlowWithOptions(const Models::ModifyDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a data flow.
       *
       * @description - CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data streams.
       * - You can modify the properties of a data stream only when the data stream is in the `Running (Normal)` state.
       * - Modifying a data stream typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data stream modification.
       * - CPFS data stream specifications:
       *     - Data stream bandwidth (Throughput) supports three specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data stream bandwidth specifies the maximum transmission bandwidth that the data stream can achieve during data import or export.
       *     - Inventory check: If you set DryRun to true, you can check whether the resources required to modify the data stream to the specified specification are sufficient.
       * - CPFS billing
       *   Modifying the data stream bandwidth (Throughput) incurs data stream bandwidth fees. Familiarize yourself with the billable methods of CPFS in advance. For details, see [CPFS billing](https://help.aliyun.com/document_detail/111858.html).
       *
       * @param request ModifyDataFlowRequest
       * @return ModifyDataFlowResponse
       */
      Models::ModifyDataFlowResponse modifyDataFlow(const Models::ModifyDataFlowRequest &request);

      /**
       * @summary Modifies the automatic update configuration of a dataflow.
       *
       * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Only CPFS 2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * - You can modify the automatic update configuration of a dataflow only when the dataflow is in the `Running` or `Stopped` state.
       * - Modifying the automatic update configuration typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the automatic update task.
       *
       * @param request ModifyDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataFlowAutoRefreshResponse
       */
      Models::ModifyDataFlowAutoRefreshResponse modifyDataFlowAutoRefreshWithOptions(const Models::ModifyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic update configuration of a dataflow.
       *
       * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Only CPFS 2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * - You can modify the automatic update configuration of a dataflow only when the dataflow is in the `Running` or `Stopped` state.
       * - Modifying the automatic update configuration typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the automatic update task.
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
       * @summary Modifies the information of a fileset.
       *
       * @description Only CPFS 2.2.0 and CPFS for Lingjun 2.7.0 or later support modifying fileset information.
       *
       * @param request ModifyFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFilesetResponse
       */
      Models::ModifyFilesetResponse modifyFilesetWithOptions(const Models::ModifyFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a fileset.
       *
       * @description Only CPFS 2.2.0 and CPFS for Lingjun 2.7.0 or later support modifying fileset information.
       *
       * @param request ModifyFilesetRequest
       * @return ModifyFilesetResponse
       */
      Models::ModifyFilesetResponse modifyFileset(const Models::ModifyFilesetRequest &request);

      /**
       * @deprecated OpenAPI ModifyLDAPConfig is deprecated
       *
       * @summary Modifies the LDAP configuration.
       *
       * @description This operation supports only Cloud Parallel File Storage (CPFS) parallel file systems.
       *
       * @param request ModifyLDAPConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLDAPConfigResponse
       */
      Models::ModifyLDAPConfigResponse modifyLDAPConfigWithOptions(const Models::ModifyLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyLDAPConfig is deprecated
       *
       * @summary Modifies the LDAP configuration.
       *
       * @description This operation supports only Cloud Parallel File Storage (CPFS) parallel file systems.
       *
       * @param request ModifyLDAPConfigRequest
       * @return ModifyLDAPConfigResponse
       */
      Models::ModifyLDAPConfigResponse modifyLDAPConfig(const Models::ModifyLDAPConfigRequest &request);

      /**
       * @summary Modifies a lifecycle management policy.
       *
       * @description This feature is supported only by General-purpose NAS file systems.
       *
       * @param request ModifyLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLifecyclePolicyResponse
       */
      Models::ModifyLifecyclePolicyResponse modifyLifecyclePolicyWithOptions(const Models::ModifyLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a lifecycle management policy.
       *
       * @description This feature is supported only by General-purpose NAS file systems.
       *
       * @param request ModifyLifecyclePolicyRequest
       * @return ModifyLifecyclePolicyResponse
       */
      Models::ModifyLifecyclePolicyResponse modifyLifecyclePolicy(const Models::ModifyLifecyclePolicyRequest &request);

      /**
       * @summary Modifies mount target information.
       *
       * @description Only mount target information of General-purpose NAS or Extreme NAS file systems can be modified.
       *
       * @param request ModifyMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMountTargetResponse
       */
      Models::ModifyMountTargetResponse modifyMountTargetWithOptions(const Models::ModifyMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies mount target information.
       *
       * @description Only mount target information of General-purpose NAS or Extreme NAS file systems can be modified.
       *
       * @param request ModifyMountTargetRequest
       * @return ModifyMountTargetResponse
       */
      Models::ModifyMountTargetResponse modifyMountTarget(const Models::ModifyMountTargetRequest &request);

      /**
       * @summary Modifies the parameters of an export directory for a protocol service. Only the permission group and description can be modified. The VPC ID and vSwitch ID cannot be modified. To change them, delete the export directory and create a new one.
       *
       * @description - Before you begin: This API operation applies only to CPFS file systems.
       * - Status prerequisite: Before you call this operation, the export directory specified by the ExportId parameter must be in the AVAILABLE state. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the status and wait until the creation is complete before you retry.
       * - Prerequisite dependency chain:
       *   1. Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describefilesystems-cpfs) (with the FileSystemType parameter set to cpfs) to obtain the CPFS file system.
       *   2. Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to confirm that the protocol service is in the Running state.
       *   3. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to confirm that the export directory is in the AVAILABLE state.
       *   4. If no export directory exists, call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create one.
       *
       * @param request ModifyProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProtocolMountTargetResponse
       */
      Models::ModifyProtocolMountTargetResponse modifyProtocolMountTargetWithOptions(const Models::ModifyProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of an export directory for a protocol service. Only the permission group and description can be modified. The VPC ID and vSwitch ID cannot be modified. To change them, delete the export directory and create a new one.
       *
       * @description - Before you begin: This API operation applies only to CPFS file systems.
       * - Status prerequisite: Before you call this operation, the export directory specified by the ExportId parameter must be in the AVAILABLE state. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the status and wait until the creation is complete before you retry.
       * - Prerequisite dependency chain:
       *   1. Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describefilesystems-cpfs) (with the FileSystemType parameter set to cpfs) to obtain the CPFS file system.
       *   2. Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to confirm that the protocol service is in the Running state.
       *   3. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to confirm that the export directory is in the AVAILABLE state.
       *   4. If no export directory exists, call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create one.
       *
       * @param request ModifyProtocolMountTargetRequest
       * @return ModifyProtocolMountTargetResponse
       */
      Models::ModifyProtocolMountTargetResponse modifyProtocolMountTarget(const Models::ModifyProtocolMountTargetRequest &request);

      /**
       * @summary Modifies a protocol service. You can use this operation to modify the description of the protocol service.
       *
       * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * - This operation allows you to modify the description of a protocol service.
       * - To obtain the protocol service ID (ProtocolServiceId):
       *   - Call the [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) operation to create a protocol service and obtain the ID from the response.
       *   - Call the [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) operation to query the list of existing protocol services.
       *
       * @param request ModifyProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProtocolServiceResponse
       */
      Models::ModifyProtocolServiceResponse modifyProtocolServiceWithOptions(const Models::ModifyProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a protocol service. You can use this operation to modify the description of the protocol service.
       *
       * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * - This operation allows you to modify the description of a protocol service.
       * - To obtain the protocol service ID (ProtocolServiceId):
       *   - Call the [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) operation to create a protocol service and obtain the ID from the response.
       *   - Call the [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) operation to query the list of existing protocol services.
       *
       * @param request ModifyProtocolServiceRequest
       * @return ModifyProtocolServiceResponse
       */
      Models::ModifyProtocolServiceResponse modifyProtocolService(const Models::ModifyProtocolServiceRequest &request);

      /**
       * @summary Updates the SMB AD ACL feature.
       *
       * @description Before you begin: Make sure that Key Management Service (KMS) is activated in the target region before you call this operation. Call sequence: Activate KMS → Call EnableSmbAcl to initialize → Call ModifySmbAcl.
       *
       * @param request ModifySmbAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmbAclResponse
       */
      Models::ModifySmbAclResponse modifySmbAclWithOptions(const Models::ModifySmbAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the SMB AD ACL feature.
       *
       * @description Before you begin: Make sure that Key Management Service (KMS) is activated in the target region before you call this operation. Call sequence: Activate KMS → Call EnableSmbAcl to initialize → Call ModifySmbAcl.
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
       * @summary Removes a client from the blacklist in Cloud Parallel File Storage (CPFS) to resume its write requests.
       *
       * @description This operation supports only CPFS parallel file systems.
       *
       * @param request RemoveClientFromBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveClientFromBlackListResponse
       */
      Models::RemoveClientFromBlackListResponse removeClientFromBlackListWithOptions(const Models::RemoveClientFromBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI RemoveClientFromBlackList is deprecated
       *
       * @summary Removes a client from the blacklist in Cloud Parallel File Storage (CPFS) to resume its write requests.
       *
       * @description This operation supports only CPFS parallel file systems.
       *
       * @param request RemoveClientFromBlackListRequest
       * @return RemoveClientFromBlackListResponse
       */
      Models::RemoveClientFromBlackListResponse removeClientFromBlackList(const Models::RemoveClientFromBlackListRequest &request);

      /**
       * @summary Rolls back a file system to the state of a historical snapshot.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - The file system must be in the Normal state.
       * - The specified SnapshotId parameter must be a historical snapshot created from the same file system specified by FileSystemId.
       * - Dependency chain:
       * - (1) Grant the AliyunNASManageENIRole role in the Resource Access Management (RAM) console.
       * - (2) Call CreateFileSystem (FileSystemType=extreme, StorageType=advance).
       * - (3) Call DescribeFileSystems and poll until Status=Running.
       * - (4) Call CreateSnapshot (FileSystemId=ID from the previous step).
       * - (5) Call DescribeSnapshots and poll until Status=available.
       * - (6) Call ResetFileSystem (FileSystemId, SnapshotId).
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - The file system must be in the Normal state.
       * - The specified SnapshotId parameter must be a historical snapshot created from the same file system specified by FileSystemId.
       * - Dependency chain:
       * - (1) Grant the AliyunNASManageENIRole role in the Resource Access Management (RAM) console.
       * - (2) Call CreateFileSystem (FileSystemType=extreme, StorageType=advance).
       * - (3) Call DescribeFileSystems and poll until Status=Running.
       * - (4) Call CreateSnapshot (FileSystemId=ID from the previous step).
       * - (5) Call DescribeSnapshots and poll until Status=available.
       * - (6) Call ResetFileSystem (FileSystemId, SnapshotId).
       *
       * @param request ResetFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetFileSystemResponse
       */
      Models::ResetFileSystemResponse resetFileSystemWithOptions(const Models::ResetFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a file system to the state of a historical snapshot.
       *
       * @description <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - The file system must be in the Normal state.
       * - The specified SnapshotId parameter must be a historical snapshot created from the same file system specified by FileSystemId.
       * - Dependency chain:
       * - (1) Grant the AliyunNASManageENIRole role in the Resource Access Management (RAM) console.
       * - (2) Call CreateFileSystem (FileSystemType=extreme, StorageType=advance).
       * - (3) Call DescribeFileSystems and poll until Status=Running.
       * - (4) Call CreateSnapshot (FileSystemId=ID from the previous step).
       * - (5) Call DescribeSnapshots and poll until Status=available.
       * - (6) Call ResetFileSystem (FileSystemId, SnapshotId).
       * <props="intl">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
       * - Only Advanced Extreme NAS file systems support this feature.
       * - The file system must be in the Normal state.
       * - The specified SnapshotId parameter must be a historical snapshot created from the same file system specified by FileSystemId.
       * - Dependency chain:
       * - (1) Grant the AliyunNASManageENIRole role in the Resource Access Management (RAM) console.
       * - (2) Call CreateFileSystem (FileSystemType=extreme, StorageType=advance).
       * - (3) Call DescribeFileSystems and poll until Status=Running.
       * - (4) Call CreateSnapshot (FileSystemId=ID from the previous step).
       * - (5) Call DescribeSnapshots and poll until Status=available.
       * - (6) Call ResetFileSystem (FileSystemId, SnapshotId).
       *
       * @param request ResetFileSystemRequest
       * @return ResetFileSystemResponse
       */
      Models::ResetFileSystemResponse resetFileSystem(const Models::ResetFileSystemRequest &request);

      /**
       * @summary Retries a data retrieval task that is in the failed state.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request RetryLifecycleRetrieveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryLifecycleRetrieveJobResponse
       */
      Models::RetryLifecycleRetrieveJobResponse retryLifecycleRetrieveJobWithOptions(const Models::RetryLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries a data retrieval task that is in the failed state.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request RetryLifecycleRetrieveJobRequest
       * @return RetryLifecycleRetrieveJobResponse
       */
      Models::RetryLifecycleRetrieveJobResponse retryLifecycleRetrieveJob(const Models::RetryLifecycleRetrieveJobRequest &request);

      /**
       * @summary Sets the quota for an Agentic space.
       *
       * @description **Before you begin**
       * Before calling this operation, complete the following preparations:
       * 1. **Obtain the AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
       * 2. **Create an Agentic file system**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set `StorageType=Agentic`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, refer to the console.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Quota statistics have a 15-minute delay. The current actual usage takes effect after 15 minutes.
       *
       * @param request SetAgenticSpaceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAgenticSpaceQuotaResponse
       */
      Models::SetAgenticSpaceQuotaResponse setAgenticSpaceQuotaWithOptions(const Models::SetAgenticSpaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the quota for an Agentic space.
       *
       * @description **Before you begin**
       * Before calling this operation, complete the following preparations:
       * 1. **Obtain the AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
       * 2. **Create an Agentic file system**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set `StorageType=Agentic`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, refer to the console.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Quota statistics have a 15-minute delay. The current actual usage takes effect after 15 minutes.
       *
       * @param request SetAgenticSpaceQuotaRequest
       * @return SetAgenticSpaceQuotaResponse
       */
      Models::SetAgenticSpaceQuotaResponse setAgenticSpaceQuota(const Models::SetAgenticSpaceQuotaRequest &request);

      /**
       * @summary Set a directory quota for a file system.
       *
       * @description Only general-purpose NAS file systems support the directory quota feature.
       *
       * @param request SetDirQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDirQuotaResponse
       */
      Models::SetDirQuotaResponse setDirQuotaWithOptions(const Models::SetDirQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set a directory quota for a file system.
       *
       * @description Only general-purpose NAS file systems support the directory quota feature.
       *
       * @param request SetDirQuotaRequest
       * @return SetDirQuotaResponse
       */
      Models::SetDirQuotaResponse setDirQuota(const Models::SetDirQuotaRequest &request);

      /**
       * @summary Sets a quota for a fileset.
       *
       * @description - Only CPFS for Lingjun 2.7.0 and later support setting quotas for filesets.
       * - The minimum fileset capacity quota is 10 GiB, and the capacity can be increased in increments of 1 GiB.
       * - A fileset supports up to 10 billion files or directories. The minimum value is 10,000, and the value can be increased in increments of 1.
       * - When you modify a directory quota, the quota capacity or file count must be greater than the used capacity or file count.
       * - You must specify at least one of the capacity limit and the file count limit.
       * - Quota statistics have a 15-minute delay. The actual usage takes effect 15 minutes later.
       *
       * @param request SetFilesetQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetFilesetQuotaResponse
       */
      Models::SetFilesetQuotaResponse setFilesetQuotaWithOptions(const Models::SetFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a quota for a fileset.
       *
       * @description - Only CPFS for Lingjun 2.7.0 and later support setting quotas for filesets.
       * - The minimum fileset capacity quota is 10 GiB, and the capacity can be increased in increments of 1 GiB.
       * - A fileset supports up to 10 billion files or directories. The minimum value is 10,000, and the value can be increased in increments of 1.
       * - When you modify a directory quota, the quota capacity or file count must be greater than the used capacity or file count.
       * - You must specify at least one of the capacity limit and the file count limit.
       * - Quota statistics have a 15-minute delay. The actual usage takes effect 15 minutes later.
       *
       * @param request SetFilesetQuotaRequest
       * @return SetFilesetQuotaResponse
       */
      Models::SetFilesetQuotaResponse setFilesetQuota(const Models::SetFilesetQuotaRequest &request);

      /**
       * @summary Starts a data flow.
       *
       * @description - This operation is applicable only to CPFS file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - Only data flows in the `Stopped` state can be started.
       * - When DryRun is set to `true`, you can check whether sufficient resources are available to start a data flow with the specified specifications. If resources are insufficient, the data flow cannot be started.
       * - Starting a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data flow.
       *
       * @param request StartDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDataFlowResponse
       */
      Models::StartDataFlowResponse startDataFlowWithOptions(const Models::StartDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a data flow.
       *
       * @description - This operation is applicable only to CPFS file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - Only data flows in the `Stopped` state can be started.
       * - When DryRun is set to `true`, you can check whether sufficient resources are available to start a data flow with the specified specifications. If resources are insufficient, the data flow cannot be started.
       * - Starting a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data flow.
       *
       * @param request StartDataFlowRequest
       * @return StartDataFlowResponse
       */
      Models::StartDataFlowResponse startDataFlow(const Models::StartDataFlowRequest &request);

      /**
       * @summary Starts the execution of a lifecycle policy.
       *
       * @description Starts the execution of a lifecycle policy. This operation is supported only when the LifecyclePolicyType parameter of the lifecycle management policy for a CPFS for Lingjun file system is set to OnDemand.
       *
       * @param request StartLifecyclePolicyExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLifecyclePolicyExecutionResponse
       */
      Models::StartLifecyclePolicyExecutionResponse startLifecyclePolicyExecutionWithOptions(const Models::StartLifecyclePolicyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the execution of a lifecycle policy.
       *
       * @description Starts the execution of a lifecycle policy. This operation is supported only when the LifecyclePolicyType parameter of the lifecycle management policy for a CPFS for Lingjun file system is set to OnDemand.
       *
       * @param request StartLifecyclePolicyExecutionRequest
       * @return StartLifecyclePolicyExecutionResponse
       */
      Models::StartLifecyclePolicyExecutionResponse startLifecyclePolicyExecution(const Models::StartLifecyclePolicyExecutionRequest &request);

      /**
       * @summary Disables a data flow.
       *
       * @description - This operation applies only to CPFS file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - Only data flows in the `Running` (normal) state can be disabled.
       * - After a data flow is disabled, you cannot create data flow tasks for the data flow. If automatic update is configured, data updates that occur on the source are not synchronized to CPFS.
       * - After a data flow is disabled, the data flow bandwidth is no longer billed because resources are reclaimed. However, restarting the data flow may fail due to insufficient inventory.
       * - Disabling a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) to query the data flow status.
       *
       * @param request StopDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDataFlowResponse
       */
      Models::StopDataFlowResponse stopDataFlowWithOptions(const Models::StopDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a data flow.
       *
       * @description - This operation applies only to CPFS file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - Only data flows in the `Running` (normal) state can be disabled.
       * - After a data flow is disabled, you cannot create data flow tasks for the data flow. If automatic update is configured, data updates that occur on the source are not synchronized to CPFS.
       * - After a data flow is disabled, the data flow bandwidth is no longer billed because resources are reclaimed. However, restarting the data flow may fail due to insufficient inventory.
       * - Disabling a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) to query the data flow status.
       *
       * @param request StopDataFlowRequest
       * @return StopDataFlowResponse
       */
      Models::StopDataFlowResponse stopDataFlow(const Models::StopDataFlowRequest &request);

      /**
       * @summary Stops the execution of a lifecycle policy.
       *
       * @description Stops the execution of a lifecycle policy.
       * This operation is supported only when the LifecyclePolicyType parameter is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
       *
       * @param request StopLifecyclePolicyExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLifecyclePolicyExecutionResponse
       */
      Models::StopLifecyclePolicyExecutionResponse stopLifecyclePolicyExecutionWithOptions(const Models::StopLifecyclePolicyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the execution of a lifecycle policy.
       *
       * @description Stops the execution of a lifecycle policy.
       * This operation is supported only when the LifecyclePolicyType parameter is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
       *
       * @param request StopLifecyclePolicyExecutionRequest
       * @return StopLifecyclePolicyExecutionResponse
       */
      Models::StopLifecyclePolicyExecutionResponse stopLifecyclePolicyExecution(const Models::StopLifecyclePolicyExecutionRequest &request);

      /**
       * @summary Creates and binds tags to a specified resource. File systems and access points are supported.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and binds tags to a specified resource. File systems and access points are supported.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deletes specified resource tags.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified resource tags.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the rules of a lifecycle management policy. This operation is supported only by CPFS for Lingjun. UpdateLifecyclePolicy uses overwrite semantics. If a non-required parameter is left empty, the corresponding field is deleted. To append lifecycle rules, first call the DescribeLifecyclePolicies operation to obtain the current lifecycle rule configurations, append the new lifecycle rule configurations, and then call the UpdateLifecyclePolicy operation to update the lifecycle rule configurations.
       *
       * @param request UpdateLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLifecyclePolicyResponse
       */
      Models::UpdateLifecyclePolicyResponse updateLifecyclePolicyWithOptions(const Models::UpdateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the rules of a lifecycle management policy. This operation is supported only by CPFS for Lingjun. UpdateLifecyclePolicy uses overwrite semantics. If a non-required parameter is left empty, the corresponding field is deleted. To append lifecycle rules, first call the DescribeLifecyclePolicies operation to obtain the current lifecycle rule configurations, append the new lifecycle rule configurations, and then call the UpdateLifecyclePolicy operation to update the lifecycle rule configurations.
       *
       * @param request UpdateLifecyclePolicyRequest
       * @return UpdateLifecyclePolicyResponse
       */
      Models::UpdateLifecyclePolicyResponse updateLifecyclePolicy(const Models::UpdateLifecyclePolicyRequest &request);

      /**
       * @summary Modifies the retention period of data in the recycle bin.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request UpdateRecycleBinAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecycleBinAttributeResponse
       */
      Models::UpdateRecycleBinAttributeResponse updateRecycleBinAttributeWithOptions(const Models::UpdateRecycleBinAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the retention period of data in the recycle bin.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request UpdateRecycleBinAttributeRequest
       * @return UpdateRecycleBinAttributeResponse
       */
      Models::UpdateRecycleBinAttributeResponse updateRecycleBinAttribute(const Models::UpdateRecycleBinAttributeRequest &request);

      /**
       * @summary Scales up the storage capacity of an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - Only Extreme NAS file systems and CPFS file systems can be scaled up.
       * - General-purpose NAS file systems scale up automatically on demand. You do not need to call this operation.
       *
       * @param request UpgradeFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeFileSystemResponse
       */
      Models::UpgradeFileSystemResponse upgradeFileSystemWithOptions(const Models::UpgradeFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales up the storage capacity of an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - Only Extreme NAS file systems and CPFS file systems can be scaled up.
       * - General-purpose NAS file systems scale up automatically on demand. You do not need to call this operation.
       *
       * @param request UpgradeFileSystemRequest
       * @return UpgradeFileSystemResponse
       */
      Models::UpgradeFileSystemResponse upgradeFileSystem(const Models::UpgradeFileSystemRequest &request);
  };
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
