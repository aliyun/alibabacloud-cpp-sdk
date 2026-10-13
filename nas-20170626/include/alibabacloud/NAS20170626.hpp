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
       * Only Advanced Extreme NAS file systems support this operation. Before you call this operation, complete the following preparations:
       * - An Advanced Extreme NAS file system is created. When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation to create a file system, set the following parameters:
       *   - FileSystemType: extreme
       *   - StorageType: advance
       * - An automatic snapshot policy is created. For more information, see [CreateAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createautosnapshotpolicy).
       * - The AliyunNASManageENIRole authorization is completed in the console. Before creating an Extreme NAS file system, associate the AliyunNASManageENIRole service-linked role with File Storage NAS to allow File Storage NAS to manage network interface controllers (NICs). For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
       * **Operation description**
       * <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Each file system can have only one automatic snapshot policy applied.
       * - An automatic snapshot policy can be applied to multiple file systems.
       * - If the target file system already has an automatic snapshot policy applied, calling the ApplyAutoSnapshotPolicy operation replaces the current automatic snapshot policy of the file system.
       * <props="intl">
       * - This feature is in free public preview.
       * - Each file system can have only one automatic snapshot policy applied.
       * - An automatic snapshot policy can be applied to multiple file systems.
       * - If the target file system already has an automatic snapshot policy applied, calling the ApplyAutoSnapshotPolicy operation replaces the current automatic snapshot policy of the file system.
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
       * Only Advanced Extreme NAS file systems support this operation. Before you call this operation, complete the following preparations:
       * - An Advanced Extreme NAS file system is created. When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation to create a file system, set the following parameters:
       *   - FileSystemType: extreme
       *   - StorageType: advance
       * - An automatic snapshot policy is created. For more information, see [CreateAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createautosnapshotpolicy).
       * - The AliyunNASManageENIRole authorization is completed in the console. Before creating an Extreme NAS file system, associate the AliyunNASManageENIRole service-linked role with File Storage NAS to allow File Storage NAS to manage network interface controllers (NICs). For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
       * **Operation description**
       * <props="china">
       * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
       * - Each file system can have only one automatic snapshot policy applied.
       * - An automatic snapshot policy can be applied to multiple file systems.
       * - If the target file system already has an automatic snapshot policy applied, calling the ApplyAutoSnapshotPolicy operation replaces the current automatic snapshot policy of the file system.
       * <props="intl">
       * - This feature is in free public preview.
       * - Each file system can have only one automatic snapshot policy applied.
       * - An automatic snapshot policy can be applied to multiple file systems.
       * - If the target file system already has an automatic snapshot policy applied, calling the ApplyAutoSnapshotPolicy operation replaces the current automatic snapshot policy of the file system.
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
       * - You can add automatic update configurations only for data flows in the `Running` state.
       * - You can add up to five automatic update configurations for a data flow.
       * - It generally takes 2 to 5 minutes to create an automatic update configuration. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
       * - Automatic updates depend on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *   > The event buses and event rules that CPFS creates in EventBridge contain the description `Create for cpfs auto refresh`. Do not modify or delete these event buses or event rules. Otherwise, automatic updates cannot work properly.
       * - Automatic updates apply to prefixes specified by the RefreshPath parameter. When CPFS configures automatic synchronization for a prefix in a data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs within the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the CPFS data flow.
       * - After you configure automatic updates (AutoRefresh), when data changes in the source storage, the changed metadata is automatically synchronized to the CPFS file system. The changed data is loaded on demand when a user accesses the file, or you can start a data stream task to load the data.
       * - The automatic update interval (AutoRefreshInterval) specifies the interval at which CPFS checks whether data updates exist within the prefix of the source OSS bucket. If data updates exist, an automatic synchronization task is started. When the frequency of object modification events in the source OSS bucket exceeds the processing capability of the CPFS data flow, automatic update tasks accumulate, metadata updates are delayed, and the data flow status changes to Misconfigured. To resolve this issue, upgrade the data flow specifications or reduce the modification frequency in OSS.
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
       * - You can add automatic update configurations only for data flows in the `Running` state.
       * - You can add up to five automatic update configurations for a data flow.
       * - It generally takes 2 to 5 minutes to create an automatic update configuration. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
       * - Automatic updates depend on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *   > The event buses and event rules that CPFS creates in EventBridge contain the description `Create for cpfs auto refresh`. Do not modify or delete these event buses or event rules. Otherwise, automatic updates cannot work properly.
       * - Automatic updates apply to prefixes specified by the RefreshPath parameter. When CPFS configures automatic synchronization for a prefix in a data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs within the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the CPFS data flow.
       * - After you configure automatic updates (AutoRefresh), when data changes in the source storage, the changed metadata is automatically synchronized to the CPFS file system. The changed data is loaded on demand when a user accesses the file, or you can start a data stream task to load the data.
       * - The automatic update interval (AutoRefreshInterval) specifies the interval at which CPFS checks whether data updates exist within the prefix of the source OSS bucket. If data updates exist, an automatic synchronization task is started. When the frequency of object modification events in the source OSS bucket exceeds the processing capability of the CPFS data flow, automatic update tasks accumulate, metadata updates are delayed, and the data flow status changes to Misconfigured. To resolve this issue, upgrade the data flow specifications or reduce the modification frequency in OSS.
       *
       * @param request ApplyDataFlowAutoRefreshRequest
       * @return ApplyDataFlowAutoRefreshResponse
       */
      Models::ApplyDataFlowAutoRefreshResponse applyDataFlowAutoRefresh(const Models::ApplyDataFlowAutoRefreshRequest &request);

      /**
       * @summary Associates a Virtual Storage Channel (VSC) device with a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemId values. This means the ResourceIds.VscId values must be the same.
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
       * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemId values. This means the ResourceIds.VscId values must be the same.
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
       * @summary Cancels the automatic update configuration for a specified data flow.
       *
       * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Data flows are supported only by CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
       * - You can cancel the automatic update configuration only for data flows in the `Running` or `Stopped` state.
       * - Canceling the automatic update configuration typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the cancel automatic update task.
       *
       * @param request CancelDataFlowAutoRefreshRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDataFlowAutoRefreshResponse
       */
      Models::CancelDataFlowAutoRefreshResponse cancelDataFlowAutoRefreshWithOptions(const Models::CancelDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the automatic update configuration for a specified data flow.
       *
       * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Data flows are supported only by CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
       * - You can cancel the automatic update configuration only for data flows in the `Running` or `Stopped` state.
       * - Canceling the automatic update configuration typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the cancel automatic update task.
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
       * @summary Cancels the quota configured for a fileset.
       *
       * @description Only CPFS for Lingjun 2.7.0 and later support quota cancellation.
       * **Before you begin**
       * - This operation applies only to CPFS for Lingjun file systems of version 2.7.0 or later.
       * - The file system ID must start with `bmcpfs-`.
       * - Before you call this operation, make sure that a quota has been configured for the target fileset by calling the [SetFilesetQuota](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-setfilesetquota-bmcpfs) operation.
       *
       * @param request CancelFilesetQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelFilesetQuotaResponse
       */
      Models::CancelFilesetQuotaResponse cancelFilesetQuotaWithOptions(const Models::CancelFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the quota configured for a fileset.
       *
       * @description Only CPFS for Lingjun 2.7.0 and later support quota cancellation.
       * **Before you begin**
       * - This operation applies only to CPFS for Lingjun file systems of version 2.7.0 or later.
       * - The file system ID must start with `bmcpfs-`.
       * - Before you call this operation, make sure that a quota has been configured for the target fileset by calling the [SetFilesetQuota](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-setfilesetquota-bmcpfs) operation.
       *
       * @param request CancelFilesetQuotaRequest
       * @return CancelFilesetQuotaResponse
       */
      Models::CancelFilesetQuotaResponse cancelFilesetQuota(const Models::CancelFilesetQuotaRequest &request);

      /**
       * @summary Cancels a data retrieval task that is in the active state.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request CancelLifecycleRetrieveJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelLifecycleRetrieveJobResponse
       */
      Models::CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJobWithOptions(const Models::CancelLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a data retrieval task that is in the active state.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request CancelLifecycleRetrieveJobRequest
       * @return CancelLifecycleRetrieveJobResponse
       */
      Models::CancelLifecycleRetrieveJobResponse cancelLifecycleRetrieveJob(const Models::CancelLifecycleRetrieveJobRequest &request);

      /**
       * @summary Cancels a running task in the recycle bin.
       *
       * @description ### Operation description
       * - Only General-purpose NAS file systems support this feature.
       * - You can cancel only tasks that are in the Running state. The cancel operation does not take effect on tasks that have reached a final state (PartialSuccess, Success, Fail, or Cancelled).
       * - When you cancel a running permanent deletion task, files that have already been permanently deleted cannot be recovered.
       * - When you cancel a running file restoration task, restored files can be queried in the file system, and unrestored files can be queried in the recycle bin.
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
       * - Only General-purpose NAS file systems support this feature.
       * - You can cancel only tasks that are in the Running state. The cancel operation does not take effect on tasks that have reached a final state (PartialSuccess, Success, Fail, or Cancelled).
       * - When you cancel a running permanent deletion task, files that have already been permanently deleted cannot be recovered.
       * - When you cancel a running file restoration task, restored files can be queried in the file system, and unrestored files can be queried in the recycle bin.
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
       * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. After the CreateAccessPoint operation succeeds, execute the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the access point status. Mount the file system only after the access point status becomes **Active**. Otherwise, the mount may fail.
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
       * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. After the CreateAccessPoint operation succeeds, execute the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the access point status. Mount the file system only after the access point status becomes **Active**. Otherwise, the mount may fail.
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
       * @description You can add up to 300 rules to a permission group.
       *
       * @param request CreateAccessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRuleWithOptions(const Models::CreateAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission rule for a permission group.
       *
       * @description You can add up to 300 rules to a permission group.
       *
       * @param request CreateAccessRuleRequest
       * @return CreateAccessRuleResponse
       */
      Models::CreateAccessRuleResponse createAccessRule(const Models::CreateAccessRuleRequest &request);

      /**
       * @summary Creates an Agentic space.
       *
       * @description **Before you begin**
       * Complete the following preparations before calling this operation:
       * 1. **An Agentic file system is created**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Complete call chain example:
       *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
       *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
       *   3. To modify the Agentic space configuration, call the [ModifyAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-modifyagenticspace) operation.
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
       * Complete the following preparations before calling this operation:
       * 1. **An Agentic file system is created**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Complete call chain example:
       *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
       *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
       *   3. To modify the Agentic space configuration, call the [ModifyAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-modifyagenticspace) operation.
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
       * @summary Creates an access point for a CPFS for Lingjun file system.
       *
       * @description Creates an access point for a CPFS for Lingjun file system.
       *
       * @param request CreateCpfsAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCpfsAccessPointResponse
       */
      Models::CreateCpfsAccessPointResponse createCpfsAccessPointWithOptions(const Models::CreateCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access point for a CPFS for Lingjun file system.
       *
       * @description Creates an access point for a CPFS for Lingjun file system.
       *
       * @param request CreateCpfsAccessPointRequest
       * @return CreateCpfsAccessPointResponse
       */
      Models::CreateCpfsAccessPointResponse createCpfsAccessPoint(const Models::CreateCpfsAccessPointRequest &request);

      /**
       * @summary Creates a data flow between a CPFS file system (General-purpose or CPFS for Lingjun) and source storage.
       *
       * @description - This operation applies to the following products:
       * | Product | File system ID format | Minimum version that supports data flows |
       * |------|----------------|------------------------|
       * | **General-purpose CPFS** | Starts with `cpfs-`, such as cpfs-125487\\*\\*\\*\\* | 2.2.0 or later |
       * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\* | 2.4.0 or later |
       * > General-purpose CPFS and CPFS for Lingjun share the same set of API operations but differ in parameter values and feature support. Refer to the corresponding section based on the product type you use.
       * - Basic operations
       *     - You can create a data flow only when the General-purpose CPFS or CPFS for Lingjun file system is in the Running state.
       *     - A maximum of **10** data flows can be created for a single General-purpose CPFS or CPFS for Lingjun file system.
       *     - Creating a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to check whether the data flow is created.
       * - Permissions.
       *     When you create a data flow, Cloud Parallel File Storage obtains the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
       * - Usage notes for General-purpose CPFS.
       *      This section applies to General-purpose CPFS whose file system IDs start with `cpfs-`.
       *   - Billing
       *     - Creating a data flow incurs fees based on the data flow bandwidth. For more information, see [Billing of General-purpose CPFS](https://help.aliyun.com/document_detail/111858.html).
       *     - When you use auto-refresh, EventBridge collects object modification events from the source OSS storage, which incurs fees. For more information, see [EventBridge billing](https://help.aliyun.com/document_detail/163752.html).
       *   - Data stream specifications
       *       - The data stream bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data stream bandwidth refers to the maximum transfer bandwidth that the data stream can achieve during data import or export.
       *     - Creating a data flow consumes one vSwitch IP address used by the Cloud Parallel File Storage mount target. Make sure that sufficient vSwitch IP resources are available.
       *     - Inventory check: Setting DryRun to true checks whether the resources required to create a data stream of the specified specification are available.
       *   - Fileset
       *     - The destination of a data flow is a Fileset in the General-purpose CPFS file system. A Fileset is a new directory tree structure in the General-purpose CPFS file system. It is a small file system within the parent file system and has an independent inode space and management capability.
       *     - The Fileset must already exist when you create a data flow and cannot be nested with other Filesets. Only one data flow can be created on a Fileset, corresponding to one source storage.
       *     - The maximum number of files in a Fileset is 1 million. If the number of files imported from an OSS bucket exceeds this limit, creating new files returns a `no space` error.
       *    > If data already exists in the Fileset, the existing data in the Fileset is cleared and replaced with data synchronized from OSS after the data flow is created.
       *   - Automatic synchronization
       *     - After automatic synchronization (AutoRefresh) is configured, when data in the source storage changes, the changed metadata is automatically synchronized to the Cloud Parallel File Storage file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data stream node.
       *     - Automatic synchronization relies on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *     - The scope of automatic synchronization is a prefix, specified by the RefreshPath parameter. A maximum of 5 automatic synchronization folders can be configured for a data stream.
       *     - The automatic synchronization interval (AutoRefreshInterval) specifies the synchronization interval that Cloud Parallel File Storage sets for checking whether data updates exist in the specified prefix of the source OSS bucket. If data updates exist, an automatic synchronization node is started. When the frequency of object modification events in the source OSS exceeds the processing capacity of the Cloud Parallel File Storage data stream, automatic synchronization nodes accumulate, metadata updates are delayed, and the data stream status changes to `Misconfigured`. You can increase the data stream specification or reduce the OSS modification frequency to resolve this issue.
       *     - When automatic synchronization is configured for a prefix in a Cloud Parallel File Storage data stream, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs in the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the Cloud Parallel File Storage data stream.
       *      > The event bus and event rules created by Cloud Parallel File Storage in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event bus or event rules. Otherwise, automatic synchronization does not work Normal.
       *   - Source storage
       *      - Only OSS is supported as source storage. The data stream source storage (SourceStorage) must be an OSS bucket.
       *      - Cloud Parallel File Storage data streams support both encrypted and non-encrypted access to OSS. If you select encrypted (SSL) access to OSS, confirm that the encryption in transit of the OSS bucket supports encrypted access.
       *      - If data streams of multiple Cloud Parallel File Storage file systems, or multiple data streams of the same Cloud Parallel File Storage file system, use the same OSS bucket as source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple Cloud Parallel File Storage file systems export data to the same source.
       *      - Cross-region OSS data streams are not supported. The OSS bucket must be in the same region as the Cloud Parallel File Storage file system.
       *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the Cloud Parallel File Storage data stream can access the data in the bucket. Do not delete or modify this tag while the data stream is in use. Otherwise, the Cloud Parallel File Storage data stream cannot access the data in the bucket.
       * - Usage notes for CPFS for Lingjun.
       *      This section applies to CPFS for Lingjun whose file system IDs start with `bmcpfs-`.
       *   - Source storage
       *       - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *       - CPFS for Lingjun data flows support both encrypted and non-encrypted access to OSS. If you select encrypted (SSL) access to OSS, make sure that the encryption in transit of the OSS bucket supports encrypted access.
       *       - If data flows of multiple CPFS for Lingjun file systems, or multiple data flows of the same CPFS for Lingjun file system, use the same OSS bucket as source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
       *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
       *      - CPFS for Lingjun 2.6.0 or later supports creating data flows with cross-account OSS.
       *      - The account ID parameter is required only when you use cross-account OSS.
       *      - When you use cross-account OSS, authorize the accounts first. For more information, see [Cross-account data flow authorization](https://help.aliyun.com/document_detail/2713462.html).
       *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
       *   - Data flow restrictions on file systems.
       *     - In the file system path associated with a data flow, you cannot rename a non-empty directory. Otherwise, a Permission Denied or directory not empty error is returned.
       *      - Use special characters in directory and file names with caution. The following characters are supported: uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
       *     - Excessively long paths are not supported. The maximum path length supported by data flows is 1023 characters.
       *   - Data flow import restrictions.
       *     - After a symlink file is imported to CPFS for Lingjun, it is converted to a regular file that contains data, and the symlink information is lost.
       *     - If the OSS bucket has multiple versions, only the latest version is copied.
       *     - File names or subdirectory names longer than 255 bytes are not supported.
       *   - Data flow export restrictions
       *     - After a symlink file is synchronized to OSS, the file that the symlink points to is not synchronized. Instead, the symlink becomes a regular empty object with no data.
       *     - A hardlink file is synchronized to OSS as a regular file.
       *     - Socket, Device, and Pipe files are converted to regular empty objects with no data when exported to an OSS bucket.
       *     - Directory paths longer than 1023 characters are not supported.
       *
       * @param request CreateDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowResponse
       */
      Models::CreateDataFlowResponse createDataFlowWithOptions(const Models::CreateDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data flow between a CPFS file system (General-purpose or CPFS for Lingjun) and source storage.
       *
       * @description - This operation applies to the following products:
       * | Product | File system ID format | Minimum version that supports data flows |
       * |------|----------------|------------------------|
       * | **General-purpose CPFS** | Starts with `cpfs-`, such as cpfs-125487\\*\\*\\*\\* | 2.2.0 or later |
       * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\* | 2.4.0 or later |
       * > General-purpose CPFS and CPFS for Lingjun share the same set of API operations but differ in parameter values and feature support. Refer to the corresponding section based on the product type you use.
       * - Basic operations
       *     - You can create a data flow only when the General-purpose CPFS or CPFS for Lingjun file system is in the Running state.
       *     - A maximum of **10** data flows can be created for a single General-purpose CPFS or CPFS for Lingjun file system.
       *     - Creating a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to check whether the data flow is created.
       * - Permissions.
       *     When you create a data flow, Cloud Parallel File Storage obtains the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
       * - Usage notes for General-purpose CPFS.
       *      This section applies to General-purpose CPFS whose file system IDs start with `cpfs-`.
       *   - Billing
       *     - Creating a data flow incurs fees based on the data flow bandwidth. For more information, see [Billing of General-purpose CPFS](https://help.aliyun.com/document_detail/111858.html).
       *     - When you use auto-refresh, EventBridge collects object modification events from the source OSS storage, which incurs fees. For more information, see [EventBridge billing](https://help.aliyun.com/document_detail/163752.html).
       *   - Data stream specifications
       *       - The data stream bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data stream bandwidth refers to the maximum transfer bandwidth that the data stream can achieve during data import or export.
       *     - Creating a data flow consumes one vSwitch IP address used by the Cloud Parallel File Storage mount target. Make sure that sufficient vSwitch IP resources are available.
       *     - Inventory check: Setting DryRun to true checks whether the resources required to create a data stream of the specified specification are available.
       *   - Fileset
       *     - The destination of a data flow is a Fileset in the General-purpose CPFS file system. A Fileset is a new directory tree structure in the General-purpose CPFS file system. It is a small file system within the parent file system and has an independent inode space and management capability.
       *     - The Fileset must already exist when you create a data flow and cannot be nested with other Filesets. Only one data flow can be created on a Fileset, corresponding to one source storage.
       *     - The maximum number of files in a Fileset is 1 million. If the number of files imported from an OSS bucket exceeds this limit, creating new files returns a `no space` error.
       *    > If data already exists in the Fileset, the existing data in the Fileset is cleared and replaced with data synchronized from OSS after the data flow is created.
       *   - Automatic synchronization
       *     - After automatic synchronization (AutoRefresh) is configured, when data in the source storage changes, the changed metadata is automatically synchronized to the Cloud Parallel File Storage file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data stream node.
       *     - Automatic synchronization relies on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
       *     - The scope of automatic synchronization is a prefix, specified by the RefreshPath parameter. A maximum of 5 automatic synchronization folders can be configured for a data stream.
       *     - The automatic synchronization interval (AutoRefreshInterval) specifies the synchronization interval that Cloud Parallel File Storage sets for checking whether data updates exist in the specified prefix of the source OSS bucket. If data updates exist, an automatic synchronization node is started. When the frequency of object modification events in the source OSS exceeds the processing capacity of the Cloud Parallel File Storage data stream, automatic synchronization nodes accumulate, metadata updates are delayed, and the data stream status changes to `Misconfigured`. You can increase the data stream specification or reduce the OSS modification frequency to resolve this issue.
       *     - When automatic synchronization is configured for a prefix in a Cloud Parallel File Storage data stream, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs in the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the Cloud Parallel File Storage data stream.
       *      > The event bus and event rules created by Cloud Parallel File Storage in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event bus or event rules. Otherwise, automatic synchronization does not work Normal.
       *   - Source storage
       *      - Only OSS is supported as source storage. The data stream source storage (SourceStorage) must be an OSS bucket.
       *      - Cloud Parallel File Storage data streams support both encrypted and non-encrypted access to OSS. If you select encrypted (SSL) access to OSS, confirm that the encryption in transit of the OSS bucket supports encrypted access.
       *      - If data streams of multiple Cloud Parallel File Storage file systems, or multiple data streams of the same Cloud Parallel File Storage file system, use the same OSS bucket as source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple Cloud Parallel File Storage file systems export data to the same source.
       *      - Cross-region OSS data streams are not supported. The OSS bucket must be in the same region as the Cloud Parallel File Storage file system.
       *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the Cloud Parallel File Storage data stream can access the data in the bucket. Do not delete or modify this tag while the data stream is in use. Otherwise, the Cloud Parallel File Storage data stream cannot access the data in the bucket.
       * - Usage notes for CPFS for Lingjun.
       *      This section applies to CPFS for Lingjun whose file system IDs start with `bmcpfs-`.
       *   - Source storage
       *       - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
       *       - CPFS for Lingjun data flows support both encrypted and non-encrypted access to OSS. If you select encrypted (SSL) access to OSS, make sure that the encryption in transit of the OSS bucket supports encrypted access.
       *       - If data flows of multiple CPFS for Lingjun file systems, or multiple data flows of the same CPFS for Lingjun file system, use the same OSS bucket as source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
       *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
       *      - CPFS for Lingjun 2.6.0 or later supports creating data flows with cross-account OSS.
       *      - The account ID parameter is required only when you use cross-account OSS.
       *      - When you use cross-account OSS, authorize the accounts first. For more information, see [Cross-account data flow authorization](https://help.aliyun.com/document_detail/2713462.html).
       *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
       *   - Data flow restrictions on file systems.
       *     - In the file system path associated with a data flow, you cannot rename a non-empty directory. Otherwise, a Permission Denied or directory not empty error is returned.
       *      - Use special characters in directory and file names with caution. The following characters are supported: uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
       *     - Excessively long paths are not supported. The maximum path length supported by data flows is 1023 characters.
       *   - Data flow import restrictions.
       *     - After a symlink file is imported to CPFS for Lingjun, it is converted to a regular file that contains data, and the symlink information is lost.
       *     - If the OSS bucket has multiple versions, only the latest version is copied.
       *     - File names or subdirectory names longer than 255 bytes are not supported.
       *   - Data flow export restrictions
       *     - After a symlink file is synchronized to OSS, the file that the symlink points to is not synchronized. Instead, the symlink becomes a regular empty object with no data.
       *     - A hardlink file is synchronized to OSS as a regular file.
       *     - Socket, Device, and Pipe files are converted to regular empty objects with no data when exported to an OSS bucket.
       *     - Directory paths longer than 1023 characters are not supported.
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
       * @description - Notes on CPFS
       *   - Only CPFS 2.2.0 and later support data flow. You can view the version information on the file system details page in the console.
       *   - Data flow tasks are executed asynchronously. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status. The time required for a task depends on the amount of data to be imported or exported. For large amounts of data, split the data into multiple tasks.
       *   - You can create a data flow task only on a data flow in the Running state.
       *   - When you manually run a data flow task, the automatic data update task of the data flow is interrupted and waits.
       *   - When you create an export task, make sure that the total length of the absolute path of the file to be exported from CPFS does not exceed 1,023 characters.
       * - Notes on CPFS for Lingjun
       *   - Only CPFS for Lingjun 2.4.0 and later support data flow. You can view the version information on the file system details page in the console.
       *   - Data flow tasks are executed asynchronously. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status. The time required for a task depends on the amount of data to be imported or exported. For large amounts of data, split the data into multiple tasks.
       *   - You can create a data flow task only on a data flow in the Running state.
       *   - When you create an export task, make sure that the total length of the absolute path of the file to be exported from CPFS for Lingjun does not exceed 1,023 characters.
       *   - CPFS for Lingjun supports two task types: batch tasks and streaming tasks. For more information, see [Task type overview](https://help.aliyun.com/document_detail/2845429.html).
       *
       * @param request CreateDataFlowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataFlowTaskResponse
       */
      Models::CreateDataFlowTaskResponse createDataFlowTaskWithOptions(const Models::CreateDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data flow task.
       *
       * @description - Notes on CPFS
       *   - Only CPFS 2.2.0 and later support data flow. You can view the version information on the file system details page in the console.
       *   - Data flow tasks are executed asynchronously. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status. The time required for a task depends on the amount of data to be imported or exported. For large amounts of data, split the data into multiple tasks.
       *   - You can create a data flow task only on a data flow in the Running state.
       *   - When you manually run a data flow task, the automatic data update task of the data flow is interrupted and waits.
       *   - When you create an export task, make sure that the total length of the absolute path of the file to be exported from CPFS does not exceed 1,023 characters.
       * - Notes on CPFS for Lingjun
       *   - Only CPFS for Lingjun 2.4.0 and later support data flow. You can view the version information on the file system details page in the console.
       *   - Data flow tasks are executed asynchronously. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status. The time required for a task depends on the amount of data to be imported or exported. For large amounts of data, split the data into multiple tasks.
       *   - You can create a data flow task only on a data flow in the Running state.
       *   - When you create an export task, make sure that the total length of the absolute path of the file to be exported from CPFS for Lingjun does not exceed 1,023 characters.
       *   - CPFS for Lingjun supports two task types: batch tasks and streaming tasks. For more information, see [Task type overview](https://help.aliyun.com/document_detail/2845429.html).
       *
       * @param request CreateDataFlowTaskRequest
       * @return CreateDataFlowTaskResponse
       */
      Models::CreateDataFlowTaskResponse createDataFlowTask(const Models::CreateDataFlowTaskRequest &request);

      /**
       * @summary Creates a directory in a file system.
       *
       * @description Only General-purpose NAS NFS protocol file systems support this feature.
       *
       * @param request CreateDirRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDirResponse
       */
      Models::CreateDirResponse createDirWithOptions(const Models::CreateDirRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory in a file system.
       *
       * @description Only General-purpose NAS NFS protocol file systems support this feature.
       *
       * @param request CreateDirRequest
       * @return CreateDirResponse
       */
      Models::CreateDirResponse createDir(const Models::CreateDirRequest &request);

      /**
       * @summary Creates a directory or file.
       *
       * @description - This operation is available only to specific users.
       * - Only General-purpose NAS file systems that use the SMB Protocol Type and have access control enabled are supported. Alibaba Cloud Key Management Service (KMS) must also be activated.
       * ## Prerequisites
       * Before calling this API to create a file, complete the following four steps:
       * 1. **Create an SMB General-purpose NAS file system**: Call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation with ProtocolType set to SMB to create a General-purpose NAS file system that supports the SMB protocol.
       * 2. **Activate KMS**: Activate KMS by using one of the following methods:
       *    - Call the Kms.OpenKmsService API operation.
       *    - Go to the [console activation page](https://common-buy.aliyun.com/?commodityCode=kms#/open).
       * 3. **Enable SMB ACL**: Call the [EnableSmbAcl](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablesmbacl) operation to enable the SMB ACL feature. Recommended configuration:
       *    - AuthMethod=NTLM
       *    - AuthCenter=EDS
       *    - This configuration does not require an AD domain Keytab and is easier to use.
       * 4. **Call CreateFile**: After completing the preceding steps, call this operation to create a directory or file.
       *
       * @param request CreateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFileWithOptions(const Models::CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory or file.
       *
       * @description - This operation is available only to specific users.
       * - Only General-purpose NAS file systems that use the SMB Protocol Type and have access control enabled are supported. Alibaba Cloud Key Management Service (KMS) must also be activated.
       * ## Prerequisites
       * Before calling this API to create a file, complete the following four steps:
       * 1. **Create an SMB General-purpose NAS file system**: Call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation with ProtocolType set to SMB to create a General-purpose NAS file system that supports the SMB protocol.
       * 2. **Activate KMS**: Activate KMS by using one of the following methods:
       *    - Call the Kms.OpenKmsService API operation.
       *    - Go to the [console activation page](https://common-buy.aliyun.com/?commodityCode=kms#/open).
       * 3. **Enable SMB ACL**: Call the [EnableSmbAcl](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablesmbacl) operation to enable the SMB ACL feature. Recommended configuration:
       *    - AuthMethod=NTLM
       *    - AuthCenter=EDS
       *    - This configuration does not require an AD domain Keytab and is easier to use.
       * 4. **Call CreateFile**: After completing the preceding steps, call this operation to create a directory or file.
       *
       * @param request CreateFileRequest
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFile(const Models::CreateFileRequest &request);

      /**
       * @summary Creates a file system.
       *
       * @description <props="china">
       * - Before you call this operation, make sure that you fully understand the billing and pricing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/).
       * - To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * - When you invoke this operation, the NAS service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
       * <props="intl">
       * - Before you call this operation, make sure that you fully understand the billing and pricing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.alibabacloud.com/zh/product/nas/pricing?_p_lc=1&spm=a2796.7960336.8215766810.64.414bb91aiZQiRG&spm=a2c4g.11186623.help-menu-27516.d_5_1_4_2_0.572a1880hEiKCk).
       * - To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * - When you invoke this operation, the NAS service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
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
       * - Before you call this operation, make sure that you fully understand the billing and pricing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/).
       * - To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * - When you invoke this operation, the NAS service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
       * <props="intl">
       * - Before you call this operation, make sure that you fully understand the billing and pricing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.alibabacloud.com/zh/product/nas/pricing?_p_lc=1&spm=a2796.7960336.8215766810.64.414bb91aiZQiRG&spm=a2c4g.11186623.help-menu-27516.d_5_1_4_2_0.572a1880hEiKCk).
       * - To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
       * - When you invoke this operation, the NAS service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateFileSystemRequest
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystem(const Models::CreateFileSystemRequest &request);

      /**
       * @summary Creates a fileset.
       *
       * @description - Usage notes for CPFS.
       *   - Only CPFS 2.2.0 and later support fileset creation. You can view the version information on the file system details page in the console.
       *   - A maximum of 10 filesets can be created for a single CPFS file system.
       *   - The parent directory must be an existing directory.
       *   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
       *   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets.
       *   - A fileset supports a maximum of 1,000,000 files. If the number of files exceeds this limit, adding new files returns a `no space` error message.
       * - Usage notes for CPFS for Lingjun
       *   - Only CPFS for Lingjun 2.7.0 and later support fileset creation. You can view the version information on the file system details page in the console.
       *   - A maximum of 500 filesets can be created for a single CPFS file system.
       *   - The fileset path must be a new path and cannot be an existing path. Renaming a fileset path is not supported, and the path cannot be a symbolic link.
       *   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
       *   - If the fileset path contains multiple directory levels, the parent directory must be an existing directory.
       *   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets. Only one quota is supported for each fileset path.
       *   - The minimum capacity quota for a fileset is 10 GiB, and the capacity can be increased in increments of 1 GiB.
       *   - A fileset supports a maximum of 10,000,000,000 files or directories, with a minimum of 10,000 and an increment of 1.
       *   - When you modify a directory quota, the quota capacity or file count must be greater than the used capacity or file count.
       *   - Quota statistics have a 15-minute delay. The current actual usage takes effect after 15 minutes.
       *
       * @param request CreateFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFilesetResponse
       */
      Models::CreateFilesetResponse createFilesetWithOptions(const Models::CreateFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a fileset.
       *
       * @description - Usage notes for CPFS.
       *   - Only CPFS 2.2.0 and later support fileset creation. You can view the version information on the file system details page in the console.
       *   - A maximum of 10 filesets can be created for a single CPFS file system.
       *   - The parent directory must be an existing directory.
       *   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
       *   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets.
       *   - A fileset supports a maximum of 1,000,000 files. If the number of files exceeds this limit, adding new files returns a `no space` error message.
       * - Usage notes for CPFS for Lingjun
       *   - Only CPFS for Lingjun 2.7.0 and later support fileset creation. You can view the version information on the file system details page in the console.
       *   - A maximum of 500 filesets can be created for a single CPFS file system.
       *   - The fileset path must be a new path and cannot be an existing path. Renaming a fileset path is not supported, and the path cannot be a symbolic link.
       *   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
       *   - If the fileset path contains multiple directory levels, the parent directory must be an existing directory.
       *   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets. Only one quota is supported for each fileset path.
       *   - The minimum capacity quota for a fileset is 10 GiB, and the capacity can be increased in increments of 1 GiB.
       *   - A fileset supports a maximum of 10,000,000,000 files or directories, with a minimum of 10,000 and an increment of 1.
       *   - When you modify a directory quota, the quota capacity or file count must be greater than the used capacity or file count.
       *   - Quota statistics have a 15-minute delay. The current actual usage takes effect after 15 minutes.
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
       * @description - Only General-purpose NAS file systems and CPFS for Lingjun support creating lifecycle management policies.
       * - Each CPFS for Lingjun file system supports up to 10 Auto-type and 100 OnDemand-type lifecycle management policies.
       * - Up to 20 lifecycle management policies for General-purpose NAS can be created in each region.
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
       * - Each CPFS for Lingjun file system supports up to 10 Auto-type and 100 OnDemand-type lifecycle management policies.
       * - Up to 20 lifecycle management policies for General-purpose NAS can be created in each region.
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
       * @description - When you call the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. After the CreateMountTarget operation succeeds, call the DescribeMountTargets operation to query the mount target status. Mount the file system only after the mount target status changes to **Active**. Otherwise, the mount operation may fail.
       * - Calling this operation triggers the automatic creation of the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTargetWithOptions(const Models::CreateMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mount target.
       *
       * @description - When you call the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. After the CreateMountTarget operation succeeds, call the DescribeMountTargets operation to query the mount target status. Mount the file system only after the mount target status changes to **Active**. Otherwise, the mount operation may fail.
       * - Calling this operation triggers the automatic creation of the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
       *
       * @param request CreateMountTargetRequest
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTarget(const Models::CreateMountTargetRequest &request);

      /**
       * @summary Creates an export directory for a protocol service.
       *
       * @description -  This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * -  Before you begin
       *   
       *    The target CPFS file system must be in the Running state, and a protocol service must have been created.
       * - Other information
       *     - The VPC CIDR block of the protocol service export must not overlap with the VPC CIDR block of the file system.
       *     - The VPC CIDR blocks of multiple exports on the same protocol service must not overlap with each other.
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
       * @description -  This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * -  Before you begin
       *   
       *    The target CPFS file system must be in the Running state, and a protocol service must have been created.
       * - Other information
       *     - The VPC CIDR block of the protocol service export must not overlap with the VPC CIDR block of the file system.
       *     - The VPC CIDR blocks of multiple exports on the same protocol service must not overlap with each other.
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
       * @description - This operation applies only to CPFS file systems.
       * -  Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of a file system.
       * - Protocol service specifications.
       *   Protocol services include two Protocol Types: General and Cache. Compared with the General type, the Cache type provides hot spot data caching. When the cache is hit, the bandwidth of the Cache type protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
       *   
       *     -   General: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. You do not need to configure a POSIX client cluster management. This feature is free of charge.
       *     -  Cache: Provides server-side in-memory caching based on the LRU policy on top of the General type. When data is cached in memory, CPFS can provide higher internal network bandwidth. The Cache type protocol service is available in two specifications: Cache L1 and Cache L2, which differ in internal network bandwidth and memory cache size.
       *      >  The Cache type protocol service is a paid service and is in invitational preview. For information about the billing of the Cache type protocol service, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk user group (group ID: 31045006299) to communicate with CPFS engineers.
       * - Protocol type.
       *   Only NFSv3 is supported.
       * - Before you begin.
       *   The CPFS file system must be created and in the Running state.
       * - Other information.
       *     - Only one protocol service can be created for each CPFS file system.
       *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the vSwitch has sufficient IP address resources.
       *
       * @param request CreateProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProtocolServiceResponse
       */
      Models::CreateProtocolServiceResponse createProtocolServiceWithOptions(const Models::CreateProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation process takes approximately 5 to 10 minutes.
       *
       * @description - This operation applies only to CPFS file systems.
       * -  Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of a file system.
       * - Protocol service specifications.
       *   Protocol services include two Protocol Types: General and Cache. Compared with the General type, the Cache type provides hot spot data caching. When the cache is hit, the bandwidth of the Cache type protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
       *   
       *     -   General: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. You do not need to configure a POSIX client cluster management. This feature is free of charge.
       *     -  Cache: Provides server-side in-memory caching based on the LRU policy on top of the General type. When data is cached in memory, CPFS can provide higher internal network bandwidth. The Cache type protocol service is available in two specifications: Cache L1 and Cache L2, which differ in internal network bandwidth and memory cache size.
       *      >  The Cache type protocol service is a paid service and is in invitational preview. For information about the billing of the Cache type protocol service, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk user group (group ID: 31045006299) to communicate with CPFS engineers.
       * - Protocol type.
       *   Only NFSv3 is supported.
       * - Before you begin.
       *   The CPFS file system must be created and in the Running state.
       * - Other information.
       *     - Only one protocol service can be created for each CPFS file system.
       *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the vSwitch has sufficient IP address resources.
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
       * - Mount the file system by using NFS or SMB (you must use an ECS instance in the same VPC to mount the file system), and then delete the target file from the mount directory to move it to the recycle bin.
       * - When you permanently delete a directory, the contents in the directory are recursively deleted.
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
       * - Mount the file system by using NFS or SMB (you must use an ECS instance in the same VPC to mount the file system), and then delete the target file from the mount directory to move it to the recycle bin.
       * - When you permanently delete a directory, the contents in the directory are recursively deleted.
       * - Only one permanent deletion task can be run at a time for a single file system. While a file or directory is being permanently deleted, you cannot initiate a new restoration or cleanup task.
       *
       * @param request CreateRecycleBinDeleteJobRequest
       * @return CreateRecycleBinDeleteJobResponse
       */
      Models::CreateRecycleBinDeleteJobResponse createRecycleBinDeleteJob(const Models::CreateRecycleBinDeleteJobRequest &request);

      /**
       * @summary Restores a file from the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - A single file system can run only one file restoration or cleanup task at a time. While a file is being restored, you cannot initiate a new file restoration or cleanup task.
       * - A single restoration task can restore only one file or directory. Restoring a specified directory recursively restores all files in the directory.
       * - After a file is restored, data reorganization is performed. Read request performance slightly decreases during data reorganization.
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
       * - A single file system can run only one file restoration or cleanup task at a time. While a file is being restored, you cannot initiate a new file restoration or cleanup task.
       * - A single restoration task can restore only one file or directory. Restoring a specified directory recursively restores all files in the directory.
       * - After a file is restored, data reorganization is performed. Read request performance slightly decreases during data reorganization.
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
       * @description - Only NFS protocol file systems of General-purpose NAS support this feature.
       * - After you delete an access point, all I/O operations that are accessing the folder through the access point are immediately interrupted. Proceed with caution.
       *
       * @param request DeleteAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessPointResponse
       */
      Models::DeleteAccessPointResponse deleteAccessPointWithOptions(const Models::DeleteAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access point.
       *
       * @description - Only NFS protocol file systems of General-purpose NAS support this feature.
       * - After you delete an access point, all I/O operations that are accessing the folder through the access point are immediately interrupted. Proceed with caution.
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
       * @summary Deletes a dataflow.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * - You can delete only dataflows in the `Running` or `Stopped` state.
       * - After a dataflow is deleted, the related resources are released and cannot be recovered. To use a dataflow again, create a new one.
       *
       * @param request DeleteDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataFlowResponse
       */
      Models::DeleteDataFlowResponse deleteDataFlowWithOptions(const Models::DeleteDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataflow.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * - You can delete only dataflows in the `Running` or `Stopped` state.
       * - After a dataflow is deleted, the related resources are released and cannot be recovered. To use a dataflow again, create a new one.
       *
       * @param request DeleteDataFlowRequest
       * @return DeleteDataFlowResponse
       */
      Models::DeleteDataFlowResponse deleteDataFlow(const Models::DeleteDataFlowRequest &request);

      /**
       * @summary Deletes a file system.
       *
       * @description - You can delete a file system only when the number of mount targets on the file system is 0.
       * - You can delete a file system only when no lifecycle policy is created for the file system.
       * - After a file system is deleted, the data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystemWithOptions(const Models::DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file system.
       *
       * @description - You can delete a file system only when the number of mount targets on the file system is 0.
       * - You can delete a file system only when no lifecycle policy is created for the file system.
       * - After a file system is deleted, the data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteFileSystemRequest
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystem(const Models::DeleteFileSystemRequest &request);

      /**
       * @summary Deletes a fileset.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support fileset deletion. After a fileset is deleted, all data in the directory is permanently deleted and cannot be recovered. Proceed with caution.
       * - If deletion protection is enabled, you must disable deletion protection before you can delete the fileset.
       * - All filesets on the target file system must be in the CREATED desired state before you can perform the delete operation.
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
       * - If deletion protection is enabled, you must disable deletion protection before you can delete the fileset.
       * - All filesets on the target file system must be in the CREATED desired state before you can perform the delete operation.
       * - Deleting a CPFS general-purpose fileset immediately releases disk space. Deleting a CPFS for Lingjun fileset gradually releases disk space. Deleted data cannot be recovered. Proceed with caution.
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
       * @description After a mount target is deleted, it cannot be recovered. Proceed with caution.
       *
       * @param request DeleteMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTargetWithOptions(const Models::DeleteMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an existing mount target.
       *
       * @description After a mount target is deleted, it cannot be recovered. Proceed with caution.
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
       * @summary Deletes a protocol service from a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - This operation applies only to CPFS file systems.
       * - When you delete a protocol service, all export directories in the protocol service are also deleted.
       *
       * @param request DeleteProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProtocolServiceResponse
       */
      Models::DeleteProtocolServiceResponse deleteProtocolServiceWithOptions(const Models::DeleteProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protocol service from a Cloud Parallel File Storage (CPFS) file system.
       *
       * @description - This operation applies only to CPFS file systems.
       * - When you delete a protocol service, all export directories in the protocol service are also deleted.
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
       * Before you call this operation, create resources in the following order:
       * 1. **Create an Agentic file system**: When you call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, see the console.
       * 2. **Query the AgenticSpace list**: After the file system is created and its status changes to Running, call the DescribeAgenticSpaces operation to query the AgenticSpace list under the file system.
       *    - If Agentic spaces are created under the file system, the complete list is returned.
       *    - If no Agentic spaces are created under the file system, an empty list is returned.
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
       * Before you call this operation, create resources in the following order:
       * 1. **Create an Agentic file system**: When you call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, see the console.
       * 2. **Query the AgenticSpace list**: After the file system is created and its status changes to Running, call the DescribeAgenticSpaces operation to query the AgenticSpace list under the file system.
       *    - If Agentic spaces are created under the file system, the complete list is returned.
       *    - If no Agentic spaces are created under the file system, an empty list is returned.
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
       * @summary Queries the list of clients mounted to an access point of a CPFS for Lingjun file system.
       *
       * @description Queries the list of clients mounted to an access point of a CPFS for Lingjun file system.
       *
       * @param request DescribeCpfsAccessPointMountedClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCpfsAccessPointMountedClientsResponse
       */
      Models::DescribeCpfsAccessPointMountedClientsResponse describeCpfsAccessPointMountedClientsWithOptions(const Models::DescribeCpfsAccessPointMountedClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of clients mounted to an access point of a CPFS for Lingjun file system.
       *
       * @description Queries the list of clients mounted to an access point of a CPFS for Lingjun file system.
       *
       * @param request DescribeCpfsAccessPointMountedClientsRequest
       * @return DescribeCpfsAccessPointMountedClientsResponse
       */
      Models::DescribeCpfsAccessPointMountedClientsResponse describeCpfsAccessPointMountedClients(const Models::DescribeCpfsAccessPointMountedClientsRequest &request);

      /**
       * @summary Queries access points of CPFS for Lingjun.
       *
       * @description Queries access points of CPFS for Lingjun.
       *
       * @param request DescribeCpfsAccessPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCpfsAccessPointsResponse
       */
      Models::DescribeCpfsAccessPointsResponse describeCpfsAccessPointsWithOptions(const Models::DescribeCpfsAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access points of CPFS for Lingjun.
       *
       * @description Queries access points of CPFS for Lingjun.
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
       * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support querying data flow tasks. You can view the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowTasksResponse
       */
      Models::DescribeDataFlowTasksResponse describeDataFlowTasksWithOptions(const Models::DescribeDataFlowTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of data flow tasks.
       *
       * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support querying data flow tasks. You can view the version information on the file system details page in the console.
       *
       * @param request DescribeDataFlowTasksRequest
       * @return DescribeDataFlowTasksResponse
       */
      Models::DescribeDataFlowTasksResponse describeDataFlowTasks(const Models::DescribeDataFlowTasksRequest &request);

      /**
       * @summary Queries data flow information of a CPFS file system.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - For filter keys (Filters), FsetIds, DataFlowIds, SourceStorage, ThroughputList, and Status require exact match. FileSystemPath, Description, and SourceStoragePath support fuzzy match.
       * - Combined queries are supported.
       *
       * @param request DescribeDataFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataFlowsResponse
       */
      Models::DescribeDataFlowsResponse describeDataFlowsWithOptions(const Models::DescribeDataFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data flow information of a CPFS file system.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - For filter keys (Filters), FsetIds, DataFlowIds, SourceStorage, ThroughputList, and Status require exact match. FileSystemPath, Description, and SourceStoragePath support fuzzy match.
       * - Combined queries are supported.
       *
       * @param request DescribeDataFlowsRequest
       * @return DescribeDataFlowsResponse
       */
      Models::DescribeDataFlowsResponse describeDataFlows(const Models::DescribeDataFlowsRequest &request);

      /**
       * @summary Retrieves the details of each directory quota in a file system.
       *
       * @description Only General-purpose NAS NFS file systems support the directory quota feature.
       *
       * @param request DescribeDirQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirQuotasResponse
       */
      Models::DescribeDirQuotasResponse describeDirQuotasWithOptions(const Models::DescribeDirQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of each directory quota in a file system.
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
       * @summary Queries the list of created filesets.
       *
       * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support filesets. You can view the version information on the file system details page in the console.
       * - For filter keys (Filters), FsetIds requires an exact match, while FileSystemPath and Description support fuzzy match.
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
       * - For filter keys (Filters), FsetIds requires an exact match, while FileSystemPath and Description support fuzzy match.
       * - Combination queries are supported.
       *
       * @param request DescribeFilesetsRequest
       * @return DescribeFilesetsResponse
       */
      Models::DescribeFilesetsResponse describeFilesets(const Models::DescribeFilesetsRequest &request);

      /**
       * @summary Queries the list of HpnZones associated with file systems. When compute nodes are located in an associated HpnZone, access to the file system achieves optimal performance.
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
       * @summary Queries the list of HpnZones associated with file systems. When compute nodes are located in an associated HpnZone, access to the file system achieves optimal performance.
       *
       * @description - Only CPFS for Lingjun file systems are supported.
       * - This is a batch operation that allows you to query up to 20 file systems at a time.
       *
       * @param request DescribeFilesystemsAssociatedHpnZonesRequest
       * @return DescribeFilesystemsAssociatedHpnZonesResponse
       */
      Models::DescribeFilesystemsAssociatedHpnZonesResponse describeFilesystemsAssociatedHpnZones(const Models::DescribeFilesystemsAssociatedHpnZonesRequest &request);

      /**
       * @summary Queries the virtual storage channel information associated with file systems.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch execution is supported. In batch execution mode, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be the same.
       * - To query the association results between file systems and virtual storage channels, call AttachVscToFilesystems to complete the association first. You can call ListVscs of Lingjun Intelligent Computing eflo-controller/2022-12-15 to query VscIds. If no virtual storage channel has been created, call CreateVsc to create one.
       *
       * @param request DescribeFilesystemsVscAttachInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFilesystemsVscAttachInfoResponse
       */
      Models::DescribeFilesystemsVscAttachInfoResponse describeFilesystemsVscAttachInfoWithOptions(const Models::DescribeFilesystemsVscAttachInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual storage channel information associated with file systems.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch execution is supported. In batch execution mode, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be the same.
       * - To query the association results between file systems and virtual storage channels, call AttachVscToFilesystems to complete the association first. You can call ListVscs of Lingjun Intelligent Computing eflo-controller/2022-12-15 to query VscIds. If no virtual storage channel has been created, call CreateVsc to create one.
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
       * @summary Queries the execution logs of a lifecycle policy. You can query the logs generated within the last 90 days or up to 1,000 log entries. Only CPFS for Lingjun is supported.
       *
       * @description Queries the execution logs of a lifecycle policy. You can query the logs generated within the last 90 days or up to 1,000 log entries. Only CPFS for Lingjun is supported.
       * ## Before you begin
       * - Make sure that the file system specified by FileSystemId is a CPFS for Lingjun file system.
       * - Before you call this operation, call [DescribeLifecyclePolicies](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describelifecyclepolicies) to query and obtain a valid LifecyclePolicyId.
       *
       * @param request DescribeLifecyclePolicyLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLifecyclePolicyLogsResponse
       */
      Models::DescribeLifecyclePolicyLogsResponse describeLifecyclePolicyLogsWithOptions(const Models::DescribeLifecyclePolicyLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution logs of a lifecycle policy. You can query the logs generated within the last 90 days or up to 1,000 log entries. Only CPFS for Lingjun is supported.
       *
       * @description Queries the execution logs of a lifecycle policy. You can query the logs generated within the last 90 days or up to 1,000 log entries. Only CPFS for Lingjun is supported.
       * ## Before you begin
       * - Make sure that the file system specified by FileSystemId is a CPFS for Lingjun file system.
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
       * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTargetWithOptions(const Models::DescribeProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export directories of a protocol service.
       *
       * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolMountTargetRequest
       * @return DescribeProtocolMountTargetResponse
       */
      Models::DescribeProtocolMountTargetResponse describeProtocolMountTarget(const Models::DescribeProtocolMountTargetRequest &request);

      /**
       * @summary Queries protocol service information.
       *
       * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       *
       * @param request DescribeProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProtocolServiceResponse
       */
      Models::DescribeProtocolServiceResponse describeProtocolServiceWithOptions(const Models::DescribeProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries protocol service information.
       *
       * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
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
       * @summary Dissociates a Virtual Storage Channel (VSC) device from a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemId values. This means the ResourceIds.VscId values must be the same.
       *
       * @param request DetachVscFromFilesystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachVscFromFilesystemsResponse
       */
      Models::DetachVscFromFilesystemsResponse detachVscFromFilesystemsWithOptions(const Models::DetachVscFromFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a Virtual Storage Channel (VSC) device from a file system.
       *
       * @description - Only CPFS for Lingjun supports this feature.
       * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemId values. This means the ResourceIds.VscId values must be the same.
       *
       * @param request DetachVscFromFilesystemsRequest
       * @return DetachVscFromFilesystemsResponse
       */
      Models::DetachVscFromFilesystemsResponse detachVscFromFilesystems(const Models::DetachVscFromFilesystemsRequest &request);

      /**
       * @summary Disables the recycle bin feature for a General-purpose NAS file system and deletes all data in the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - Disabling the recycle bin permanently deletes all files in the recycle bin.
       * - After a disabled recycle bin is re-enabled, the recycle bin is empty. Files deleted before the recycle bin was re-enabled cannot be recovered.
       *
       * @param request DisableAndCleanRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAndCleanRecycleBinResponse
       */
      Models::DisableAndCleanRecycleBinResponse disableAndCleanRecycleBinWithOptions(const Models::DisableAndCleanRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the recycle bin feature for a General-purpose NAS file system and deletes all data in the recycle bin.
       *
       * @description - Only General-purpose NAS file systems support this feature.
       * - Disabling the recycle bin permanently deletes all files in the recycle bin.
       * - After a disabled recycle bin is re-enabled, the recycle bin is empty. Files deleted before the recycle bin was re-enabled cannot be recovered.
       *
       * @param request DisableAndCleanRecycleBinRequest
       * @return DisableAndCleanRecycleBinResponse
       */
      Models::DisableAndCleanRecycleBinResponse disableAndCleanRecycleBin(const Models::DisableAndCleanRecycleBinRequest &request);

      /**
       * @summary Disables EBS Lens.
       *
       * @description - This operation is currently in invitational preview. To use this feature, submit a ticket.
       *
       * @param request DisableDataInsightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDataInsightResponse
       */
      Models::DisableDataInsightResponse disableDataInsightWithOptions(const Models::DisableDataInsightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables EBS Lens.
       *
       * @description - This operation is currently in invitational preview. To use this feature, submit a ticket.
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
       * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
       *
       * @param request EnableDataInsightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDataInsightResponse
       */
      Models::EnableDataInsightResponse enableDataInsightWithOptions(const Models::EnableDataInsightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables EBS Lens.
       *
       * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
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
       * @description Only General-purpose NAS file systems support this operation.
       *
       * @param request EnableRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableRecycleBinResponse
       */
      Models::EnableRecycleBinResponse enableRecycleBinWithOptions(const Models::EnableRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the recycle bin feature.
       *
       * @description Only General-purpose NAS file systems support this operation.
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
       * @description Applies to agentic-type file systems.
       *
       * @param request GetAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgenticSpaceResponse
       */
      Models::GetAgenticSpaceResponse getAgenticSpaceWithOptions(const Models::GetAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an Agentic space.
       *
       * @description Applies to agentic-type file systems.
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
       * @summary Queries information about a created Fileset.
       *
       * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support Filesets. You can view the version information on the file system details page in the console.
       *
       * @param request GetFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFilesetResponse
       */
      Models::GetFilesetResponse getFilesetWithOptions(const Models::GetFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a created Fileset.
       *
       * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support Filesets. You can view the version information on the file system details page in the console.
       *
       * @param request GetFilesetRequest
       * @return GetFilesetResponse
       */
      Models::GetFilesetResponse getFileset(const Models::GetFilesetRequest &request);

      /**
       * @summary Queries the export directory information of a protocol service.
       *
       * @description Queries the export directory information of a protocol service.
       * **Before you begin**
       * Before you call this operation, make sure that each dependent resource in the following three-layer resource model already exists:
       * 1. **File system (FileSystem)**: Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to obtain the FileSystemId.
       * 2. **Protocol service (ProtocolService)**: Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to obtain the ProtocolServiceId, or call [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) to create one.
       * 3. **Export directory (ProtocolMountTarget)**: Call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create an export directory and obtain the ExportId, or call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the ExportId.
       *
       * @param request GetProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProtocolMountTargetResponse
       */
      Models::GetProtocolMountTargetResponse getProtocolMountTargetWithOptions(const Models::GetProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export directory information of a protocol service.
       *
       * @description Queries the export directory information of a protocol service.
       * **Before you begin**
       * Before you call this operation, make sure that each dependent resource in the following three-layer resource model already exists:
       * 1. **File system (FileSystem)**: Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to obtain the FileSystemId.
       * 2. **Protocol service (ProtocolService)**: Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to obtain the ProtocolServiceId, or call [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) to create one.
       * 3. **Export directory (ProtocolMountTarget)**: Call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create an export directory and obtain the ExportId, or call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the ExportId.
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
       * @summary Retrieves the directory structure of EBS Lens.
       *
       * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
       *
       * @param request ListDataInsightDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataInsightDirectoriesResponse
       */
      Models::ListDataInsightDirectoriesResponse listDataInsightDirectoriesWithOptions(const Models::ListDataInsightDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the directory structure of EBS Lens.
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
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request ListRecycledDirectoriesAndFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecycledDirectoriesAndFilesResponse
       */
      Models::ListRecycledDirectoriesAndFilesResponse listRecycledDirectoriesAndFilesWithOptions(const Models::ListRecycledDirectoriesAndFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries deleted files or directories.
       *
       * @description Only General-purpose NAS file systems support this feature.
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
       * @description **Prerequisites**
       * Before you call this operation, complete the following preparations:
       * 1. **Obtain an AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
       * 2. **Create an Agentic file system**: When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) operation to create a file system, set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Complete call chain example:
       *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
       *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
       *   3. Call ModifyAgenticSpace to modify the Agentic space configurations.
       *
       * @param request ModifyAgenticSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAgenticSpaceResponse
       */
      Models::ModifyAgenticSpaceResponse modifyAgenticSpaceWithOptions(const Models::ModifyAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Agentic space.
       *
       * @description **Prerequisites**
       * Before you call this operation, complete the following preparations:
       * 1. **Obtain an AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
       * 2. **Create an Agentic file system**: When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) operation to create a file system, set the following parameters:
       *    - `StorageType`: Set to `Agentic`.
       *    - `ProtocolType`: Set to `NFS`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Complete call chain example:
       *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
       *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
       *   3. Call ModifyAgenticSpace to modify the Agentic space configurations.
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
       * @summary Modifies an access point of a CPFS for Lingjun file system.
       *
       * @description Modifies an access point of a CPFS for Lingjun file system.
       *
       * @param request ModifyCpfsAccessPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCpfsAccessPointResponse
       */
      Models::ModifyCpfsAccessPointResponse modifyCpfsAccessPointWithOptions(const Models::ModifyCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an access point of a CPFS for Lingjun file system.
       *
       * @description Modifies an access point of a CPFS for Lingjun file system.
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
       * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support modifying fileset information.
       *
       * @param request ModifyFilesetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFilesetResponse
       */
      Models::ModifyFilesetResponse modifyFilesetWithOptions(const Models::ModifyFilesetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a fileset.
       *
       * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support modifying fileset information.
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
       * @summary Modifies the export directory parameters of a protocol service. You can modify only the permission group and description. The VPC ID and vSwitch ID cannot be modified. To change them, delete the export directory and create a new one.
       *
       * @description - Before you begin: This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Status prerequisite: Before calling this operation, the export directory corresponding to ExportId must be in the AVAILABLE state. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the status and wait until the creation is complete before retrying.
       * - Dependency chain:
       *   1. Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describefilesystems-cpfs) (with FileSystemType set to cpfs) to obtain the CPFS file system.
       *   2. Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to verify that the protocol service is in the Running state.
       *   3. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to verify that the export directory is in the AVAILABLE state.
       *   4. If no export directory exists, call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create one first.
       *
       * @param request ModifyProtocolMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProtocolMountTargetResponse
       */
      Models::ModifyProtocolMountTargetResponse modifyProtocolMountTargetWithOptions(const Models::ModifyProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the export directory parameters of a protocol service. You can modify only the permission group and description. The VPC ID and vSwitch ID cannot be modified. To change them, delete the export directory and create a new one.
       *
       * @description - Before you begin: This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Status prerequisite: Before calling this operation, the export directory corresponding to ExportId must be in the AVAILABLE state. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the status and wait until the creation is complete before retrying.
       * - Dependency chain:
       *   1. Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describefilesystems-cpfs) (with FileSystemType set to cpfs) to obtain the CPFS file system.
       *   2. Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to verify that the protocol service is in the Running state.
       *   3. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to verify that the export directory is in the AVAILABLE state.
       *   4. If no export directory exists, call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create one first.
       *
       * @param request ModifyProtocolMountTargetRequest
       * @return ModifyProtocolMountTargetResponse
       */
      Models::ModifyProtocolMountTargetResponse modifyProtocolMountTarget(const Models::ModifyProtocolMountTargetRequest &request);

      /**
       * @summary Modifies a protocol service. You can modify the description of a protocol service.
       *
       * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - This operation allows you to modify the description of a protocol service.
       * - You can obtain the protocol service ID (ProtocolServiceId) in the following ways:
       *   - From the response of the [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) operation after you create a protocol service.
       *   - From the response of the [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) operation that queries existing protocol services.
       *
       * @param request ModifyProtocolServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProtocolServiceResponse
       */
      Models::ModifyProtocolServiceResponse modifyProtocolServiceWithOptions(const Models::ModifyProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a protocol service. You can modify the description of a protocol service.
       *
       * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - This operation allows you to modify the description of a protocol service.
       * - You can obtain the protocol service ID (ProtocolServiceId) in the following ways:
       *   - From the response of the [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) operation after you create a protocol service.
       *   - From the response of the [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) operation that queries existing protocol services.
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
       * @summary Activates the Apsara File Storage NAS (NAS) service.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenNASServiceResponse
       */
      Models::OpenNASServiceResponse openNASServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the Apsara File Storage NAS (NAS) service.
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
       * Before you call this operation, complete the following preparations:
       * 1. **Obtain an AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
       * 2. **Create an Agentic file system**: When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) operation to create a file system, set `StorageType=Agentic`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Quota statistics have a 15-minute delay. The actual usage takes effect 15 minutes later.
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
       * Before you call this operation, complete the following preparations:
       * 1. **Obtain an AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
       * 2. **Create an Agentic file system**: When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) operation to create a file system, set `StorageType=Agentic`.
       *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
       * **Usage notes**
       * - This operation applies only to Agentic file systems.
       * - Quota statistics have a 15-minute delay. The actual usage takes effect 15 minutes later.
       *
       * @param request SetAgenticSpaceQuotaRequest
       * @return SetAgenticSpaceQuotaResponse
       */
      Models::SetAgenticSpaceQuotaResponse setAgenticSpaceQuota(const Models::SetAgenticSpaceQuotaRequest &request);

      /**
       * @summary Sets a directory quota for a file system.
       *
       * @description Only General-purpose NAS file systems support the directory quota feature.
       *
       * @param request SetDirQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDirQuotaResponse
       */
      Models::SetDirQuotaResponse setDirQuotaWithOptions(const Models::SetDirQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a directory quota for a file system.
       *
       * @description Only General-purpose NAS file systems support the directory quota feature.
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
       * @summary Enables a data flow.
       *
       * @description - This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - You can enable only a data flow that is in the `Stopped` state.
       * - If DryRun is set to `true`, you can check whether sufficient resources are available to enable a data flow of the specified specifications. If inventory resources are insufficient, the data flow cannot be enabled.
       * - Enabling a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the data flow status.
       *
       * @param request StartDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDataFlowResponse
       */
      Models::StartDataFlowResponse startDataFlowWithOptions(const Models::StartDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a data flow.
       *
       * @description - This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
       * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
       * - You can enable only a data flow that is in the `Stopped` state.
       * - If DryRun is set to `true`, you can check whether sufficient resources are available to enable a data flow of the specified specifications. If inventory resources are insufficient, the data flow cannot be enabled.
       * - Enabling a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the data flow status.
       *
       * @param request StartDataFlowRequest
       * @return StartDataFlowResponse
       */
      Models::StartDataFlowResponse startDataFlow(const Models::StartDataFlowRequest &request);

      /**
       * @summary Starts the execution of a lifecycle management policy.
       *
       * @description Starts the execution of a lifecycle management policy.
       * This operation is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
       *
       * @param request StartLifecyclePolicyExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLifecyclePolicyExecutionResponse
       */
      Models::StartLifecyclePolicyExecutionResponse startLifecyclePolicyExecutionWithOptions(const Models::StartLifecyclePolicyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the execution of a lifecycle management policy.
       *
       * @description Starts the execution of a lifecycle management policy.
       * This operation is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
       *
       * @param request StartLifecyclePolicyExecutionRequest
       * @return StartLifecyclePolicyExecutionResponse
       */
      Models::StartLifecyclePolicyExecutionResponse startLifecyclePolicyExecution(const Models::StartLifecyclePolicyExecutionRequest &request);

      /**
       * @summary Disables a dataflow.
       *
       * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Only CPFS 2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * - You can disable only a dataflow in the `Running` state.
       * - After a dataflow is disabled, you cannot create dataflow tasks for it. If automatic update is configured, data updates on the source are not synchronized to CPFS.
       * - After a dataflow is disabled, the dataflow bandwidth is no longer billed because resources are reclaimed. However, re-enabling the dataflow may fail due to insufficient inventory.
       * - Disabling a dataflow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) to query the dataflow status.
       *
       * @param request StopDataFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDataFlowResponse
       */
      Models::StopDataFlowResponse stopDataFlowWithOptions(const Models::StopDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a dataflow.
       *
       * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
       * - Only CPFS 2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
       * - You can disable only a dataflow in the `Running` state.
       * - After a dataflow is disabled, you cannot create dataflow tasks for it. If automatic update is configured, data updates on the source are not synchronized to CPFS.
       * - After a dataflow is disabled, the dataflow bandwidth is no longer billed because resources are reclaimed. However, re-enabling the dataflow may fail due to insufficient inventory.
       * - Disabling a dataflow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) to query the dataflow status.
       *
       * @param request StopDataFlowRequest
       * @return StopDataFlowResponse
       */
      Models::StopDataFlowResponse stopDataFlow(const Models::StopDataFlowRequest &request);

      /**
       * @summary Stops the execution of a lifecycle policy.
       *
       * @description Stops the execution of a lifecycle policy.
       * This operation is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
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
       * This operation is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
       *
       * @param request StopLifecyclePolicyExecutionRequest
       * @return StopLifecyclePolicyExecutionResponse
       */
      Models::StopLifecyclePolicyExecutionResponse stopLifecyclePolicyExecution(const Models::StopLifecyclePolicyExecutionRequest &request);

      /**
       * @summary Creates and attaches tags to specified resources. File systems and access points are supported.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to specified resources. File systems and access points are supported.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deletes the tags of a specified resource.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the tags of a specified resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the rules of a lifecycle management policy. Only CPFS for Lingjun is supported.
       * UpdateLifecyclePolicy uses overwrite semantics. If an optional parameter is left empty, the corresponding field is deleted. To append lifecycle rules, first call the DescribeLifecyclePolicies operation to obtain the current lifecycle rule configurations, append the new lifecycle rule configurations, and then call the UpdateLifecyclePolicy operation to update the lifecycle rule configurations.
       *
       * @param request UpdateLifecyclePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLifecyclePolicyResponse
       */
      Models::UpdateLifecyclePolicyResponse updateLifecyclePolicyWithOptions(const Models::UpdateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the rules of a lifecycle management policy. Only CPFS for Lingjun is supported.
       * UpdateLifecyclePolicy uses overwrite semantics. If an optional parameter is left empty, the corresponding field is deleted. To append lifecycle rules, first call the DescribeLifecyclePolicies operation to obtain the current lifecycle rule configurations, append the new lifecycle rule configurations, and then call the UpdateLifecyclePolicy operation to update the lifecycle rule configurations.
       *
       * @param request UpdateLifecyclePolicyRequest
       * @return UpdateLifecyclePolicyResponse
       */
      Models::UpdateLifecyclePolicyResponse updateLifecyclePolicy(const Models::UpdateLifecyclePolicyRequest &request);

      /**
       * @summary Modifies the retention period of data in a recycle bin.
       *
       * @description Only General-purpose NAS file systems support this feature.
       *
       * @param request UpdateRecycleBinAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecycleBinAttributeResponse
       */
      Models::UpdateRecycleBinAttributeResponse updateRecycleBinAttributeWithOptions(const Models::UpdateRecycleBinAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the retention period of data in a recycle bin.
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
