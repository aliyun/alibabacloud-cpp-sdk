// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RKVSTORE20150101_HPP_
#define ALIBABACLOUD_RKVSTORE20150101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/RKvstore20150101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/RKvstore20150101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds data shard nodes to a cluster instance. This operation supports only cloud-native Cluster Edition instances.
       *
       * @param request AddShardingNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddShardingNodeResponse
       */
      Models::AddShardingNodeResponse addShardingNodeWithOptions(const Models::AddShardingNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds data shard nodes to a cluster instance. This operation supports only cloud-native Cluster Edition instances.
       *
       * @param request AddShardingNodeRequest
       * @return AddShardingNodeResponse
       */
      Models::AddShardingNodeResponse addShardingNode(const Models::AddShardingNodeRequest &request);

      /**
       * @summary Applies for a direct connection endpoint for an ApsaraDB Tair (Redis® OSS-Compatible) database cluster instance.
       *
       * @description Clients can use the direct connection endpoint to bypass the proxy and connect to the cluster instance in the same way as they connect to a native Redis cluster. This reduces link overhead and further improves the response speed of the ApsaraDB Tair (Redis® OSS-Compatible) database service.
       * The instance for which you invoke this operation must meet the following conditions:
       * * The instance uses the cluster architecture.
       * * The deployment pattern is classic.
       * * The network type of the instance is VPC. If the instance is connected to the classic network, you can invoke the [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html) operation to switch the network type to VPC.
       * * The Secure Sockets Layer (SSL) encryption feature is disabled for the instance. If the Secure Sockets Layer (SSL) encryption feature is enabled, you can invoke the [ModifyInstanceSSL](https://help.aliyun.com/document_detail/473838.html) operation for shutdown.
       *
       * @param request AllocateDirectConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateDirectConnectionResponse
       */
      Models::AllocateDirectConnectionResponse allocateDirectConnectionWithOptions(const Models::AllocateDirectConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a direct connection endpoint for an ApsaraDB Tair (Redis® OSS-Compatible) database cluster instance.
       *
       * @description Clients can use the direct connection endpoint to bypass the proxy and connect to the cluster instance in the same way as they connect to a native Redis cluster. This reduces link overhead and further improves the response speed of the ApsaraDB Tair (Redis® OSS-Compatible) database service.
       * The instance for which you invoke this operation must meet the following conditions:
       * * The instance uses the cluster architecture.
       * * The deployment pattern is classic.
       * * The network type of the instance is VPC. If the instance is connected to the classic network, you can invoke the [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html) operation to switch the network type to VPC.
       * * The Secure Sockets Layer (SSL) encryption feature is disabled for the instance. If the Secure Sockets Layer (SSL) encryption feature is enabled, you can invoke the [ModifyInstanceSSL](https://help.aliyun.com/document_detail/473838.html) operation for shutdown.
       *
       * @param request AllocateDirectConnectionRequest
       * @return AllocateDirectConnectionResponse
       */
      Models::AllocateDirectConnectionResponse allocateDirectConnection(const Models::AllocateDirectConnectionRequest &request);

      /**
       * @summary Applies for a public endpoint for a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the corresponding console operation, see [Apply for a public endpoint](https://help.aliyun.com/document_detail/124920.html).
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a public endpoint for a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the corresponding console operation, see [Apply for a public endpoint](https://help.aliyun.com/document_detail/124920.html).
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @summary Cancels O&M events in batches.
       *
       * @description Scenarios in which O&M events cannot be canceled
       * - allowCancel is 0.
       * - The current time is later than the start time of the O&M event.
       * - The status of the O&M event is not 3 (waiting for execution).
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels O&M events in batches.
       *
       * @description Scenarios in which O&M events cannot be canceled
       * - allowCancel is 0.
       * - The current time is later than the start time of the O&M event.
       * - The status of the O&M event is not 3 (waiting for execution).
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Disables an AI assistant inspection task.
       *
       * @param request CancelInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelInspectionTaskResponse
       */
      Models::CancelInspectionTaskResponse cancelInspectionTaskWithOptions(const Models::CancelInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an AI assistant inspection task.
       *
       * @param request CancelInspectionTaskRequest
       * @return CancelInspectionTaskResponse
       */
      Models::CancelInspectionTaskResponse cancelInspectionTask(const Models::CancelInspectionTaskRequest &request);

      /**
       * @summary Queries whether an ApsaraDB for Redis (Tair) instance has been granted authorization to use the Key Management Service (KMS).
       *
       * @description * For more information about Transparent Data Encryption (TDE) and related precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       * * After you call this operation to confirm that the authorization is complete, you can call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) operation to enable TDE.
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(const Models::CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an ApsaraDB for Redis (Tair) instance has been granted authorization to use the Key Management Service (KMS).
       *
       * @description * For more information about Transparent Data Encryption (TDE) and related precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       * * After you call this operation to confirm that the authorization is complete, you can call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) operation to enable TDE.
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(const Models::CheckCloudResourceAuthorizedRequest &request);

      /**
       * @summary Creates an account for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description * This operation supports only instances that are compatible with Redis 4.0 or later.
       *  * The instance status must be Running when you call this operation. 
       *  * You can create up to 18 accounts for each instance.
       * > For the console operation that corresponds to this API operation, see [Account management](https://help.aliyun.com/document_detail/92665.html).
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description * This operation supports only instances that are compatible with Redis 4.0 or later.
       *  * The instance status must be Running when you call this operation. 
       *  * You can create up to 18 accounts for each instance.
       * > For the console operation that corresponds to this API operation, see [Account management](https://help.aliyun.com/document_detail/92665.html).
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a data backup for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the console operation that corresponds to this API operation, see [Backup and recovery](https://help.aliyun.com/document_detail/43886.html).
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data backup for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the console operation that corresponds to this API operation, see [Backup and recovery](https://help.aliyun.com/document_detail/43886.html).
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Manually initiates a cache analysis task for an instance.
       *
       * @description This operation is no longer recommended. Use the new operation [Real-time Top Key Statistics and Offline Full Key Analysis](https://help.aliyun.com/document_detail/184226.html) instead.
       *
       * @param request CreateCacheAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCacheAnalysisTaskResponse
       */
      Models::CreateCacheAnalysisTaskResponse createCacheAnalysisTaskWithOptions(const Models::CreateCacheAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually initiates a cache analysis task for an instance.
       *
       * @description This operation is no longer recommended. Use the new operation [Real-time Top Key Statistics and Offline Full Key Analysis](https://help.aliyun.com/document_detail/184226.html) instead.
       *
       * @param request CreateCacheAnalysisTaskRequest
       * @return CreateCacheAnalysisTaskResponse
       */
      Models::CreateCacheAnalysisTaskResponse createCacheAnalysisTask(const Models::CreateCacheAnalysisTaskRequest &request);

      /**
       * @summary Converts an existing Tair memory-optimized (Classic Edition) instance into the first child instance of a distributed instance.
       *
       * @description You can call this operation to convert an existing instance into the first child instance of a distributed instance. After the conversion, the distributed instance to which the instance belongs is created.
       * The instance to be converted must meet the following requirements:
       * * The instance is a Tair [memory-optimized](https://help.aliyun.com/document_detail/126164.html) (Classic Edition) instance.
       * * If the instance uses a cluster architecture, you must disable the direct connection mode. For more information, see [Release a direct connection endpoint](https://help.aliyun.com/document_detail/150047.html).
       * > You can also call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation to create an instance as the first child instance of a distributed instance. After the child instance is created, the distributed instance to which it belongs is created.
       *
       * @param request CreateGlobalDistributeCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalDistributeCacheResponse
       */
      Models::CreateGlobalDistributeCacheResponse createGlobalDistributeCacheWithOptions(const Models::CreateGlobalDistributeCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts an existing Tair memory-optimized (Classic Edition) instance into the first child instance of a distributed instance.
       *
       * @description You can call this operation to convert an existing instance into the first child instance of a distributed instance. After the conversion, the distributed instance to which the instance belongs is created.
       * The instance to be converted must meet the following requirements:
       * * The instance is a Tair [memory-optimized](https://help.aliyun.com/document_detail/126164.html) (Classic Edition) instance.
       * * If the instance uses a cluster architecture, you must disable the direct connection mode. For more information, see [Release a direct connection endpoint](https://help.aliyun.com/document_detail/150047.html).
       * > You can also call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation to create an instance as the first child instance of a distributed instance. After the child instance is created, the distributed instance to which it belongs is created.
       *
       * @param request CreateGlobalDistributeCacheRequest
       * @return CreateGlobalDistributeCacheResponse
       */
      Models::CreateGlobalDistributeCacheResponse createGlobalDistributeCache(const Models::CreateGlobalDistributeCacheRequest &request);

      /**
       * @summary Creates a global IP address whitelist template.
       *
       * @param request CreateGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalSecurityIPGroupResponse
       */
      Models::CreateGlobalSecurityIPGroupResponse createGlobalSecurityIPGroupWithOptions(const Models::CreateGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a global IP address whitelist template.
       *
       * @param request CreateGlobalSecurityIPGroupRequest
       * @return CreateGlobalSecurityIPGroupResponse
       */
      Models::CreateGlobalSecurityIPGroupResponse createGlobalSecurityIPGroup(const Models::CreateGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Creates a scheduled inspection task configuration.
       *
       * @param request CreateInspectionScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInspectionScheduleResponse
       */
      Models::CreateInspectionScheduleResponse createInspectionScheduleWithOptions(const Models::CreateInspectionScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled inspection task configuration.
       *
       * @param request CreateInspectionScheduleRequest
       * @return CreateInspectionScheduleResponse
       */
      Models::CreateInspectionScheduleResponse createInspectionSchedule(const Models::CreateInspectionScheduleRequest &request);

      /**
       * @summary Creates a manual inspection task.
       *
       * @param request CreateInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInspectionTaskResponse
       */
      Models::CreateInspectionTaskResponse createInspectionTaskWithOptions(const Models::CreateInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a manual inspection task.
       *
       * @param request CreateInspectionTaskRequest
       * @return CreateInspectionTaskResponse
       */
      Models::CreateInspectionTaskResponse createInspectionTask(const Models::CreateInspectionTaskRequest &request);

      /**
       * @summary Creates an ApsaraDB for Redis Community Edition instance with the classic or cloud-native architecture, or a Tair in-memory instance with the classic architecture. To create a Tair instance with the cloud-native architecture, call the CreateTairInstance operation.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
       * This operation can be used to create an ApsaraDB for Redis Community Edition instance or a Tair in-memory instance with the classic architecture. To create a Tair instance with the cloud-native architecture, call the [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation.
       * > For information about how to create an ApsaraDB for Redis instance in the console and how to select an instance type, see [Create an ApsaraDB for Redis instance](https://help.aliyun.com/document_detail/26351.html).
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB for Redis Community Edition instance with the classic or cloud-native architecture, or a Tair in-memory instance with the classic architecture. To create a Tair instance with the cloud-native architecture, call the CreateTairInstance operation.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
       * This operation can be used to create an ApsaraDB for Redis Community Edition instance or a Tair in-memory instance with the classic architecture. To create a Tair instance with the cloud-native architecture, call the [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation.
       * > For information about how to create an ApsaraDB for Redis instance in the console and how to select an instance type, see [Create an ApsaraDB for Redis instance](https://help.aliyun.com/document_detail/26351.html).
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates multiple VIPs for an instance.
       *
       * @param request CreateInstanceMultiVIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceMultiVIPResponse
       */
      Models::CreateInstanceMultiVIPResponse createInstanceMultiVIPWithOptions(const Models::CreateInstanceMultiVIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple VIPs for an instance.
       *
       * @param request CreateInstanceMultiVIPRequest
       * @return CreateInstanceMultiVIPResponse
       */
      Models::CreateInstanceMultiVIPResponse createInstanceMultiVIP(const Models::CreateInstanceMultiVIPRequest &request);

      /**
       * @summary Creates multiple ApsaraDB for Tair (Redis OSS-compatible) database Classic Edition instances.
       *
       * @description Make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of the ApsaraDB for Tair (Redis OSS-compatible) database before you call this API operation.
       * > This API operation only supports creating Classic Edition instances.
       * Use the following operations to create a single instance:
       * > - [CreateInstance](https://help.aliyun.com/document_detail/473757.html): creates an open-source Redis instance or a Tair memory-optimized Classic Edition instance.
       * > - [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html): creates a Tair cloud-native instance (including memory-optimized, persistent memory-optimized, and disk-optimized instances).
       *
       * @param request CreateInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstancesResponse
       */
      Models::CreateInstancesResponse createInstancesWithOptions(const Models::CreateInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple ApsaraDB for Tair (Redis OSS-compatible) database Classic Edition instances.
       *
       * @description Make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of the ApsaraDB for Tair (Redis OSS-compatible) database before you call this API operation.
       * > This API operation only supports creating Classic Edition instances.
       * Use the following operations to create a single instance:
       * > - [CreateInstance](https://help.aliyun.com/document_detail/473757.html): creates an open-source Redis instance or a Tair memory-optimized Classic Edition instance.
       * > - [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html): creates a Tair cloud-native instance (including memory-optimized, persistent memory-optimized, and disk-optimized instances).
       *
       * @param request CreateInstancesRequest
       * @return CreateInstancesResponse
       */
      Models::CreateInstancesResponse createInstances(const Models::CreateInstancesRequest &request);

      /**
       * @summary Creates a parameter template.
       *
       * @description Parameter templates are applicable only to instances deployed in cloud-native deployment mode (formerly cloud disk instances).
       *
       * @param request CreateParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroupWithOptions(const Models::CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a parameter template.
       *
       * @description Parameter templates are applicable only to instances deployed in cloud-native deployment mode (formerly cloud disk instances).
       *
       * @param request CreateParameterGroupRequest
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroup(const Models::CreateParameterGroupRequest &request);

      /**
       * @summary 创建TairCustom实例
       *
       * @param request CreateTCInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTCInstanceResponse
       */
      Models::CreateTCInstanceResponse createTCInstanceWithOptions(const Models::CreateTCInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建TairCustom实例
       *
       * @param request CreateTCInstanceRequest
       * @return CreateTCInstanceResponse
       */
      Models::CreateTCInstanceResponse createTCInstance(const Models::CreateTCInstanceRequest &request);

      /**
       * @summary Creates a cloud-native Tair (Enterprise Edition) instance.
       *
       * @description For selection reference, see [Must-read for selecting Tair database (Redis OSS-Compatible)](https://help.aliyun.com/document_detail/223808.html).
       * Make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair database (Redis OSS-Compatible) before you invoke this operation.
       * > * For instructions on how to perform this operation in the console, see [Create a Tair instance](https://help.aliyun.com/document_detail/26351.html).
       * > * To create other types of instances, such as open-source instances or [Tair memory-optimized](https://help.aliyun.com/document_detail/126164.html) classic instances, you can invoke the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation.
       *
       * @param request CreateTairInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTairInstanceResponse
       */
      Models::CreateTairInstanceResponse createTairInstanceWithOptions(const Models::CreateTairInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud-native Tair (Enterprise Edition) instance.
       *
       * @description For selection reference, see [Must-read for selecting Tair database (Redis OSS-Compatible)](https://help.aliyun.com/document_detail/223808.html).
       * Make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair database (Redis OSS-Compatible) before you invoke this operation.
       * > * For instructions on how to perform this operation in the console, see [Create a Tair instance](https://help.aliyun.com/document_detail/26351.html).
       * > * To create other types of instances, such as open-source instances or [Tair memory-optimized](https://help.aliyun.com/document_detail/126164.html) classic instances, you can invoke the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation.
       *
       * @param request CreateTairInstanceRequest
       * @return CreateTairInstanceResponse
       */
      Models::CreateTairInstanceResponse createTairInstance(const Models::CreateTairInstanceRequest &request);

      /**
       * @summary Creates a Tair VNode virtual node instance.
       *
       * @param request CreateTairKVCacheVNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTairKVCacheVNodeResponse
       */
      Models::CreateTairKVCacheVNodeResponse createTairKVCacheVNodeWithOptions(const Models::CreateTairKVCacheVNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Tair VNode virtual node instance.
       *
       * @param request CreateTairKVCacheVNodeRequest
       * @return CreateTairKVCacheVNodeResponse
       */
      Models::CreateTairKVCacheVNodeResponse createTairKVCacheVNode(const Models::CreateTairKVCacheVNodeRequest &request);

      /**
       * @summary Creates a Tair Serverless KV table instance.
       *
       * @description ## Operation description
       * - Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.htm) of ApsaraDB for Redis.
       *
       * @param request CreateTairSkvDdbTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTairSkvDdbTableResponse
       */
      Models::CreateTairSkvDdbTableResponse createTairSkvDdbTableWithOptions(const Models::CreateTairSkvDdbTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Tair Serverless KV table instance.
       *
       * @description ## Operation description
       * - Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.htm) of ApsaraDB for Redis.
       *
       * @param request CreateTairSkvDdbTableRequest
       * @return CreateTairSkvDdbTableResponse
       */
      Models::CreateTairSkvDdbTableResponse createTairSkvDdbTable(const Models::CreateTairSkvDdbTableRequest &request);

      /**
       * @summary Creates a Tair Serverless KV workspace instance.
       *
       * @description ## Request description
       * - Before you call this operation, make sure that you understand the billing methods and [pricing details](https://help.aliyun.com/document_detail/54532.htm) of ApsaraDB for Redis.
       * - To create a Tair Serverless KV table instance, call the `CreateTairSkvDdbTable` operation.
       *
       * @param request CreateTairSkvDdbWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTairSkvDdbWorkspaceResponse
       */
      Models::CreateTairSkvDdbWorkspaceResponse createTairSkvDdbWorkspaceWithOptions(const Models::CreateTairSkvDdbWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Tair Serverless KV workspace instance.
       *
       * @description ## Request description
       * - Before you call this operation, make sure that you understand the billing methods and [pricing details](https://help.aliyun.com/document_detail/54532.htm) of ApsaraDB for Redis.
       * - To create a Tair Serverless KV table instance, call the `CreateTairSkvDdbTable` operation.
       *
       * @param request CreateTairSkvDdbWorkspaceRequest
       * @return CreateTairSkvDdbWorkspaceResponse
       */
      Models::CreateTairSkvDdbWorkspaceResponse createTairSkvDdbWorkspace(const Models::CreateTairSkvDdbWorkspaceRequest &request);

      /**
       * @summary Deletes an account of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description * This API operation supports only instances that are compatible with Redis 4.0 or later.
       * * You can call this API operation only when the instance is in the Running state.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an account of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description * This API operation supports only instances that are compatible with Redis 4.0 or later.
       * * You can call this API operation only when the instance is in the Running state.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes a specified backup set. Only manual backup sets can be deleted.
       *
       * @description * This operation supports only cloud-native edition instances.
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified backup set. Only manual backup sets can be deleted.
       *
       * @description * This operation supports only cloud-native edition instances.
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Deletes a global IP address whitelist template.
       *
       * @description Before you delete an IP whitelist template, dissociate all instances that are associated with the template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroupWithOptions(const Models::DeleteGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global IP address whitelist template.
       *
       * @description Before you delete an IP whitelist template, dissociate all instances that are associated with the template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroup(const Models::DeleteGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Deletes a scheduled inspection task.
       *
       * @description For the console operation that corresponds to this API, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
       * When you invoke this operation, the instance must meet the following conditions:
       * * The instance status is Running.
       * * The payer of the instance is pay-as-you-go.
       * > Upfront (subscription) instances cannot be deleted by invoking this operation. They will undergo automatic release when they expire. To release a subscription instance in advance, perform the operation in the console.
       *
       * @param request DeleteInspectionScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInspectionScheduleResponse
       */
      Models::DeleteInspectionScheduleResponse deleteInspectionScheduleWithOptions(const Models::DeleteInspectionScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled inspection task.
       *
       * @description For the console operation that corresponds to this API, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
       * When you invoke this operation, the instance must meet the following conditions:
       * * The instance status is Running.
       * * The payer of the instance is pay-as-you-go.
       * > Upfront (subscription) instances cannot be deleted by invoking this operation. They will undergo automatic release when they expire. To release a subscription instance in advance, perform the operation in the console.
       *
       * @param request DeleteInspectionScheduleRequest
       * @return DeleteInspectionScheduleResponse
       */
      Models::DeleteInspectionScheduleResponse deleteInspectionSchedule(const Models::DeleteInspectionScheduleRequest &request);

      /**
       * @summary Releases an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the console operation that corresponds to this API operation, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
       * When you invoke this operation, the instance must meet the following conditions:
       * * The instance status is Running.
       * * The payer uses the pay-as-you-go billing method.
       * > Upfront (subscription) instances cannot be deleted by invoking this operation. They will undergo automatic release after they expire. To release a subscription instance in advance, perform the operation in the console.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the console operation that corresponds to this API operation, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
       * When you invoke this operation, the instance must meet the following conditions:
       * * The instance status is Running.
       * * The payer uses the pay-as-you-go billing method.
       * > Upfront (subscription) instances cannot be deleted by invoking this operation. They will undergo automatic release after they expire. To release a subscription instance in advance, perform the operation in the console.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a parameter template.
       *
       * @param request DeleteParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroupWithOptions(const Models::DeleteParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a parameter template.
       *
       * @param request DeleteParameterGroupRequest
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroup(const Models::DeleteParameterGroupRequest &request);

      /**
       * @summary Deletes data shard nodes from a cluster instance. This operation is supported only for cloud-native instances in the cluster architecture.
       *
       * @param request DeleteShardingNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteShardingNodeResponse
       */
      Models::DeleteShardingNodeResponse deleteShardingNodeWithOptions(const Models::DeleteShardingNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes data shard nodes from a cluster instance. This operation is supported only for cloud-native instances in the cluster architecture.
       *
       * @param request DeleteShardingNodeRequest
       * @return DeleteShardingNodeResponse
       */
      Models::DeleteShardingNodeResponse deleteShardingNode(const Models::DeleteShardingNodeRequest &request);

      /**
       * @summary Queries the information about an account in a specified ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an account in a specified ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the O&M task configuration of an instance.
       *
       * @param request DescribeActiveOperationMaintenanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintenanceConfigResponse
       */
      Models::DescribeActiveOperationMaintenanceConfigResponse describeActiveOperationMaintenanceConfigWithOptions(const Models::DescribeActiveOperationMaintenanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the O&M task configuration of an instance.
       *
       * @param request DescribeActiveOperationMaintenanceConfigRequest
       * @return DescribeActiveOperationMaintenanceConfigResponse
       */
      Models::DescribeActiveOperationMaintenanceConfigResponse describeActiveOperationMaintenanceConfig(const Models::DescribeActiveOperationMaintenanceConfigRequest &request);

      /**
       * @summary Queries the details of O&M tasks for an ApsaraDB for Redis (Tair) instance.
       *
       * @description After you call this operation to check whether O&M tasks exist, you can call [ModifyActiveOperationTask](https://help.aliyun.com/document_detail/473864.html) to modify the scheduled switchover time of an O&M task.
       *
       * @param request DescribeActiveOperationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskResponse
       */
      Models::DescribeActiveOperationTaskResponse describeActiveOperationTaskWithOptions(const Models::DescribeActiveOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of O&M tasks for an ApsaraDB for Redis (Tair) instance.
       *
       * @description After you call this operation to check whether O&M tasks exist, you can call [ModifyActiveOperationTask](https://help.aliyun.com/document_detail/473864.html) to modify the scheduled switchover time of an O&M task.
       *
       * @param request DescribeActiveOperationTaskRequest
       * @return DescribeActiveOperationTaskResponse
       */
      Models::DescribeActiveOperationTaskResponse describeActiveOperationTask(const Models::DescribeActiveOperationTaskRequest &request);

      /**
       * @summary Queries the number of O&M tasks for a Tair instance.
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCountWithOptions(const Models::DescribeActiveOperationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of O&M tasks for a Tair instance.
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCount(const Models::DescribeActiveOperationTaskCountRequest &request);

      /**
       * @summary Queries the details of O&M events for an instance.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of O&M events for an instance.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Queries the audit log configuration of a Tair (Redis® OSS-Compatible) instance, such as whether audit logging is enabled and the log retention period.
       *
       * @description Before calling this operation, audit logging must be enabled for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html) or [Audit logs](https://help.aliyun.com/document_detail/102015.html).
       *
       * @param request DescribeAuditLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogConfigResponse
       */
      Models::DescribeAuditLogConfigResponse describeAuditLogConfigWithOptions(const Models::DescribeAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audit log configuration of a Tair (Redis® OSS-Compatible) instance, such as whether audit logging is enabled and the log retention period.
       *
       * @description Before calling this operation, audit logging must be enabled for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html) or [Audit logs](https://help.aliyun.com/document_detail/102015.html).
       *
       * @param request DescribeAuditLogConfigRequest
       * @return DescribeAuditLogConfigResponse
       */
      Models::DescribeAuditLogConfigResponse describeAuditLogConfig(const Models::DescribeAuditLogConfigRequest &request);

      /**
       * @summary Queries the audit logs of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description When you call this operation, the audit log feature must be enabled for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html).
       *
       * @param request DescribeAuditRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditRecordsResponse
       */
      Models::DescribeAuditRecordsResponse describeAuditRecordsWithOptions(const Models::DescribeAuditRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audit logs of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description When you call this operation, the audit log feature must be enabled for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html).
       *
       * @param request DescribeAuditRecordsRequest
       * @return DescribeAuditRecordsResponse
       */
      Models::DescribeAuditRecordsResponse describeAuditRecords(const Models::DescribeAuditRecordsRequest &request);

      /**
       * @summary Queries the instance types available for creation in a specified zone.
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Models::DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance types available for creation in a specified zone.
       *
       * @param request DescribeAvailableResourceRequest
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource(const Models::DescribeAvailableResourceRequest &request);

      /**
       * @summary Queries the backup policy of a Tair (Redis® OSS-Compatible) instance, including the backup cycle and backup time.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup policy of a Tair (Redis® OSS-Compatible) instance, including the backup cycle and backup time.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the execution status of backup tasks for a Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeBackupTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasksWithOptions(const Models::DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of backup tasks for a Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeBackupTasksRequest
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasks(const Models::DescribeBackupTasksRequest &request);

      /**
       * @summary Queries the backup file information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description This operation is not applicable to cloud-native cluster architecture instances. If needed, use the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup file information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description This operation is not applicable to cloud-native cluster architecture instances. If needed, use the [DescribeClusterBackupList](https://help.aliyun.com/document_detail/2679168.html) operation.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Retrieves the cache analysis report for an instance on a specified date.
       *
       * @description This API operation is deprecated. Use the new operation [Real-time top key statistics and offline full key analysis](https://help.aliyun.com/document_detail/184226.html) instead.
       *
       * @param request DescribeCacheAnalysisReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCacheAnalysisReportResponse
       */
      Models::DescribeCacheAnalysisReportResponse describeCacheAnalysisReportWithOptions(const Models::DescribeCacheAnalysisReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the cache analysis report for an instance on a specified date.
       *
       * @description This API operation is deprecated. Use the new operation [Real-time top key statistics and offline full key analysis](https://help.aliyun.com/document_detail/184226.html) instead.
       *
       * @param request DescribeCacheAnalysisReportRequest
       * @return DescribeCacheAnalysisReportResponse
       */
      Models::DescribeCacheAnalysisReportResponse describeCacheAnalysisReport(const Models::DescribeCacheAnalysisReportRequest &request);

      /**
       * @summary Queries the list of cache analysis reports of an instance.
       *
       * @description This operation is no longer recommended. Use the new operation [Real-time top key statistics and offline full key analysis](https://help.aliyun.com/document_detail/184226.html).
       *
       * @param request DescribeCacheAnalysisReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCacheAnalysisReportListResponse
       */
      Models::DescribeCacheAnalysisReportListResponse describeCacheAnalysisReportListWithOptions(const Models::DescribeCacheAnalysisReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cache analysis reports of an instance.
       *
       * @description This operation is no longer recommended. Use the new operation [Real-time top key statistics and offline full key analysis](https://help.aliyun.com/document_detail/184226.html).
       *
       * @param request DescribeCacheAnalysisReportListRequest
       * @return DescribeCacheAnalysisReportListResponse
       */
      Models::DescribeCacheAnalysisReportListResponse describeCacheAnalysisReportList(const Models::DescribeCacheAnalysisReportListRequest &request);

      /**
       * @summary Queries the backup list of an ApsaraDB for Tair (Redis-compatible) database cluster instance.
       *
       * @description This operation is applicable only to cloud-native instances.
       *
       * @param request DescribeClusterBackupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterBackupListResponse
       */
      Models::DescribeClusterBackupListResponse describeClusterBackupListWithOptions(const Models::DescribeClusterBackupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup list of an ApsaraDB for Tair (Redis-compatible) database cluster instance.
       *
       * @description This operation is applicable only to cloud-native instances.
       *
       * @param request DescribeClusterBackupListRequest
       * @return DescribeClusterBackupListResponse
       */
      Models::DescribeClusterBackupListResponse describeClusterBackupList(const Models::DescribeClusterBackupListRequest &request);

      /**
       * @summary Queries the node configuration information of a Tair (Redis® OSS-Compatible) cluster instance, such as specifications and maximum connections.
       *
       * @description > This operation is applicable only to [cloud-native instances](https://help.aliyun.com/document_detail/188068.html) in the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
       *
       * @param request DescribeClusterMemberInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterMemberInfoResponse
       */
      Models::DescribeClusterMemberInfoResponse describeClusterMemberInfoWithOptions(const Models::DescribeClusterMemberInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the node configuration information of a Tair (Redis® OSS-Compatible) cluster instance, such as specifications and maximum connections.
       *
       * @description > This operation is applicable only to [cloud-native instances](https://help.aliyun.com/document_detail/188068.html) in the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
       *
       * @param request DescribeClusterMemberInfoRequest
       * @return DescribeClusterMemberInfoResponse
       */
      Models::DescribeClusterMemberInfoResponse describeClusterMemberInfo(const Models::DescribeClusterMemberInfoRequest &request);

      /**
       * @summary Queries the monitoring collection granularity of a Tair instance.
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitorWithOptions(const Models::DescribeDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring collection granularity of a Tair instance.
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitor(const Models::DescribeDBInstanceMonitorRequest &request);

      /**
       * @summary Queries the network information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(const Models::DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(const Models::DescribeDBInstanceNetInfoRequest &request);

      /**
       * @summary Queries the virtual IP address (VIP) information of the child instances of a cluster instance in direct connection mode.
       *
       * @description <notice>Only cloud-native instances support this operation.</notice>
       *
       * @param request DescribeDBNodeDirectVipInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBNodeDirectVipInfoResponse
       */
      Models::DescribeDBNodeDirectVipInfoResponse describeDBNodeDirectVipInfoWithOptions(const Models::DescribeDBNodeDirectVipInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual IP address (VIP) information of the child instances of a cluster instance in direct connection mode.
       *
       * @description <notice>Only cloud-native instances support this operation.</notice>
       *
       * @param request DescribeDBNodeDirectVipInfoRequest
       * @return DescribeDBNodeDirectVipInfoResponse
       */
      Models::DescribeDBNodeDirectVipInfoResponse describeDBNodeDirectVipInfo(const Models::DescribeDBNodeDirectVipInfoRequest &request);

      /**
       * @summary Checks the connectivity from a source client IP address to an instance.
       *
       * @param request DescribeDbInstanceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDbInstanceConnectivityResponse
       */
      Models::DescribeDbInstanceConnectivityResponse describeDbInstanceConnectivityWithOptions(const Models::DescribeDbInstanceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connectivity from a source client IP address to an instance.
       *
       * @param request DescribeDbInstanceConnectivityRequest
       * @return DescribeDbInstanceConnectivityResponse
       */
      Models::DescribeDbInstanceConnectivityResponse describeDbInstanceConnectivity(const Models::DescribeDbInstanceConnectivityRequest &request);

      /**
       * @summary Queries the information about ApsaraDB for Tair (Redis-compatible) database instances in a dedicated cluster.
       *
       * @description > To query the information about instances that are not in a dedicated cluster, call [DescribeInstanceAttribute](https://help.aliyun.com/document_detail/473779.html).
       *
       * @param request DescribeDedicatedClusterInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedClusterInstanceListResponse
       */
      Models::DescribeDedicatedClusterInstanceListResponse describeDedicatedClusterInstanceListWithOptions(const Models::DescribeDedicatedClusterInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about ApsaraDB for Tair (Redis-compatible) database instances in a dedicated cluster.
       *
       * @description > To query the information about instances that are not in a dedicated cluster, call [DescribeInstanceAttribute](https://help.aliyun.com/document_detail/473779.html).
       *
       * @param request DescribeDedicatedClusterInstanceListRequest
       * @return DescribeDedicatedClusterInstanceListResponse
       */
      Models::DescribeDedicatedClusterInstanceListResponse describeDedicatedClusterInstanceList(const Models::DescribeDedicatedClusterInstanceListRequest &request);

      /**
       * @summary Queries the details of a custom Transparent Data Encryption (TDE) key for an ApsaraDB for Redis (Tair) instance.
       *
       * @description Before you call this operation, make sure that TDE (Transparent Data Encryption) has been enabled for the instance by using a custom key. For more information about the related operation, see [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html).
       * > For more information about TDE and precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request DescribeEncryptionKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEncryptionKeyResponse
       */
      Models::DescribeEncryptionKeyResponse describeEncryptionKeyWithOptions(const Models::DescribeEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom Transparent Data Encryption (TDE) key for an ApsaraDB for Redis (Tair) instance.
       *
       * @description Before you call this operation, make sure that TDE (Transparent Data Encryption) has been enabled for the instance by using a custom key. For more information about the related operation, see [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html).
       * > For more information about TDE and precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request DescribeEncryptionKeyRequest
       * @return DescribeEncryptionKeyResponse
       */
      Models::DescribeEncryptionKeyResponse describeEncryptionKey(const Models::DescribeEncryptionKeyRequest &request);

      /**
       * @summary Queries the list of custom keys used by an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description * When you invoke [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable transparent data encryption (TDE), you can use a custom key. This operation helps you query the custom keys used by an instance. To create a custom key, invoke the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation of Key Management Service.
       * * For more information about transparent data encryption (TDE) and precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request DescribeEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEncryptionKeyListResponse
       */
      Models::DescribeEncryptionKeyListResponse describeEncryptionKeyListWithOptions(const Models::DescribeEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of custom keys used by an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description * When you invoke [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable transparent data encryption (TDE), you can use a custom key. This operation helps you query the custom keys used by an instance. To create a custom key, invoke the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation of Key Management Service.
       * * For more information about transparent data encryption (TDE) and precautions, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request DescribeEncryptionKeyListRequest
       * @return DescribeEncryptionKeyListResponse
       */
      Models::DescribeEncryptionKeyListResponse describeEncryptionKeyList(const Models::DescribeEncryptionKeyListRequest &request);

      /**
       * @summary Queries the major and minor version information of a Tair (Redis® OSS-Compatible) database instance, as well as the release notes for the minor version.
       *
       * @param request DescribeEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEngineVersionResponse
       */
      Models::DescribeEngineVersionResponse describeEngineVersionWithOptions(const Models::DescribeEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the major and minor version information of a Tair (Redis® OSS-Compatible) database instance, as well as the release notes for the minor version.
       *
       * @param request DescribeEngineVersionRequest
       * @return DescribeEngineVersionResponse
       */
      Models::DescribeEngineVersionResponse describeEngineVersion(const Models::DescribeEngineVersionRequest &request);

      /**
       * @summary Queries the details of a distributed instance.
       *
       * @param request DescribeGlobalDistributeCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDistributeCacheResponse
       */
      Models::DescribeGlobalDistributeCacheResponse describeGlobalDistributeCacheWithOptions(const Models::DescribeGlobalDistributeCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a distributed instance.
       *
       * @param request DescribeGlobalDistributeCacheRequest
       * @return DescribeGlobalDistributeCacheResponse
       */
      Models::DescribeGlobalDistributeCacheResponse describeGlobalDistributeCache(const Models::DescribeGlobalDistributeCacheRequest &request);

      /**
       * @summary Queries global IP whitelist templates.
       *
       * @param request DescribeGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalSecurityIPGroupResponse
       */
      Models::DescribeGlobalSecurityIPGroupResponse describeGlobalSecurityIPGroupWithOptions(const Models::DescribeGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries global IP whitelist templates.
       *
       * @param request DescribeGlobalSecurityIPGroupRequest
       * @return DescribeGlobalSecurityIPGroupResponse
       */
      Models::DescribeGlobalSecurityIPGroupResponse describeGlobalSecurityIPGroup(const Models::DescribeGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Queries the information about global IP whitelist templates associated with an instance.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelationWithOptions(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about global IP whitelist templates associated with an instance.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelation(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request);

      /**
       * @summary Queries historical events in Event Center.
       *
       * @param request DescribeHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEventsWithOptions(const Models::DescribeHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical events in Event Center.
       *
       * @param request DescribeHistoryEventsRequest
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEvents(const Models::DescribeHistoryEventsRequest &request);

      /**
       * @summary Queries historical event statistics.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStatWithOptions(const Models::DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical event statistics.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStat(const Models::DescribeHistoryEventsStatRequest &request);

      /**
       * @summary Queries the performance monitoring information of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the console operation that corresponds to this API, see [Performance monitoring](https://help.aliyun.com/document_detail/43887.html).
       *
       * @param request DescribeHistoryMonitorValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryMonitorValuesResponse
       */
      Models::DescribeHistoryMonitorValuesResponse describeHistoryMonitorValuesWithOptions(const Models::DescribeHistoryMonitorValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance monitoring information of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the console operation that corresponds to this API, see [Performance monitoring](https://help.aliyun.com/document_detail/43887.html).
       *
       * @param request DescribeHistoryMonitorValuesRequest
       * @return DescribeHistoryMonitorValuesResponse
       */
      Models::DescribeHistoryMonitorValuesResponse describeHistoryMonitorValues(const Models::DescribeHistoryMonitorValuesRequest &request);

      /**
       * @summary Queries the task list in the task center.
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task list in the task center.
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary Queries task statistics in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries task statistics in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStat(const Models::DescribeHistoryTasksStatRequest &request);

      /**
       * @summary Queries the historical inspection reports for timed scheduling.
       *
       * @param request DescribeInspectionScheduleReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInspectionScheduleReportsResponse
       */
      Models::DescribeInspectionScheduleReportsResponse describeInspectionScheduleReportsWithOptions(const Models::DescribeInspectionScheduleReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical inspection reports for timed scheduling.
       *
       * @param request DescribeInspectionScheduleReportsRequest
       * @return DescribeInspectionScheduleReportsResponse
       */
      Models::DescribeInspectionScheduleReportsResponse describeInspectionScheduleReports(const Models::DescribeInspectionScheduleReportsRequest &request);

      /**
       * @summary Queries the configurations of scheduled inspection tasks.
       *
       * @param request DescribeInspectionSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInspectionSchedulesResponse
       */
      Models::DescribeInspectionSchedulesResponse describeInspectionSchedulesWithOptions(const Models::DescribeInspectionSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of scheduled inspection tasks.
       *
       * @param request DescribeInspectionSchedulesRequest
       * @return DescribeInspectionSchedulesResponse
       */
      Models::DescribeInspectionSchedulesResponse describeInspectionSchedules(const Models::DescribeInspectionSchedulesRequest &request);

      /**
       * @summary Queries the report of a specific inspection task.
       *
       * @param request DescribeInspectionTaskReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInspectionTaskReportResponse
       */
      Models::DescribeInspectionTaskReportResponse describeInspectionTaskReportWithOptions(const Models::DescribeInspectionTaskReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the report of a specific inspection task.
       *
       * @param request DescribeInspectionTaskReportRequest
       * @return DescribeInspectionTaskReportResponse
       */
      Models::DescribeInspectionTaskReportResponse describeInspectionTaskReport(const Models::DescribeInspectionTaskReportRequest &request);

      /**
       * @summary Query the list of smart inspection tasks
       *
       * @param request DescribeInspectionTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInspectionTasksResponse
       */
      Models::DescribeInspectionTasksResponse describeInspectionTasksWithOptions(const Models::DescribeInspectionTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of smart inspection tasks
       *
       * @param request DescribeInspectionTasksRequest
       * @return DescribeInspectionTasksResponse
       */
      Models::DescribeInspectionTasksResponse describeInspectionTasks(const Models::DescribeInspectionTasksRequest &request);

      /**
       * @summary Queries the detailed information of a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(const Models::DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information of a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeInstanceAttributeRequest
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttribute(const Models::DescribeInstanceAttributeRequest &request);

      /**
       * @summary Queries whether auto-renewal is enabled for a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(const Models::DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether auto-renewal is enabled for a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(const Models::DescribeInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Queries some default configuration parameters of a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceConfigResponse
       */
      Models::DescribeInstanceConfigResponse describeInstanceConfigWithOptions(const Models::DescribeInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries some default configuration parameters of a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeInstanceConfigRequest
       * @return DescribeInstanceConfigResponse
       */
      Models::DescribeInstanceConfigResponse describeInstanceConfig(const Models::DescribeInstanceConfigRequest &request);

      /**
       * @summary Queries the load balancer (LB) information of an instance.
       *
       * @description For more information about multiple LBs, see.
       *
       * @param request DescribeInstanceMultiVIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMultiVIPResponse
       */
      Models::DescribeInstanceMultiVIPResponse describeInstanceMultiVIPWithOptions(const Models::DescribeInstanceMultiVIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the load balancer (LB) information of an instance.
       *
       * @description For more information about multiple LBs, see.
       *
       * @param request DescribeInstanceMultiVIPRequest
       * @return DescribeInstanceMultiVIPResponse
       */
      Models::DescribeInstanceMultiVIPResponse describeInstanceMultiVIP(const Models::DescribeInstanceMultiVIPRequest &request);

      /**
       * @summary Queries whether TLS (SSL) encryption authentication is enabled for a Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSLWithOptions(const Models::DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether TLS (SSL) encryption authentication is enabled for a Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeInstanceSSLRequest
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSL(const Models::DescribeInstanceSSLRequest &request);

      /**
       * @summary Queries whether the TDE data encryption feature is enabled for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For more information about the transparent data encryption (TDE) feature and precautions, see [Enable transparent data encryption TDE](https://help.aliyun.com/document_detail/265913.html).
       * > You can invoke [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable or shutdown the TDE encrypt feature.
       *
       * @param request DescribeInstanceTDEStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTDEStatusResponse
       */
      Models::DescribeInstanceTDEStatusResponse describeInstanceTDEStatusWithOptions(const Models::DescribeInstanceTDEStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the TDE data encryption feature is enabled for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For more information about the transparent data encryption (TDE) feature and precautions, see [Enable transparent data encryption TDE](https://help.aliyun.com/document_detail/265913.html).
       * > You can invoke [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable or shutdown the TDE encrypt feature.
       *
       * @param request DescribeInstanceTDEStatusRequest
       * @return DescribeInstanceTDEStatusResponse
       */
      Models::DescribeInstanceTDEStatusResponse describeInstanceTDEStatus(const Models::DescribeInstanceTDEStatusRequest &request);

      /**
       * @summary Queries the information of one or more Tair (Redis® OSS-Compatible) instances.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of one or more Tair (Redis® OSS-Compatible) instances.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the overview information of one or more ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
       *
       * @description If you do not specify any request parameters, the overview information of all instances is returned.
       * > This operation does not support pagination for the returned results.
       *
       * @param request DescribeInstancesOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesOverviewResponse
       */
      Models::DescribeInstancesOverviewResponse describeInstancesOverviewWithOptions(const Models::DescribeInstancesOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview information of one or more ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
       *
       * @description If you do not specify any request parameters, the overview information of all instances is returned.
       * > This operation does not support pagination for the returned results.
       *
       * @param request DescribeInstancesOverviewRequest
       * @return DescribeInstancesOverviewResponse
       */
      Models::DescribeInstancesOverviewResponse describeInstancesOverview(const Models::DescribeInstancesOverviewRequest &request);

      /**
       * @summary Queries the current bandwidth of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description You can call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to purchase bandwidth for an instance.
       *
       * @param request DescribeIntranetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntranetAttributeResponse
       */
      Models::DescribeIntranetAttributeResponse describeIntranetAttributeWithOptions(const Models::DescribeIntranetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current bandwidth of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description You can call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to purchase bandwidth for an instance.
       *
       * @param request DescribeIntranetAttributeRequest
       * @return DescribeIntranetAttributeResponse
       */
      Models::DescribeIntranetAttributeResponse describeIntranetAttribute(const Models::DescribeIntranetAttributeRequest &request);

      /**
       * @summary Queries the logical topology structure of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description This operation is supported only for cluster and read/write splitting instances.
       *
       * @param request DescribeLogicInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogicInstanceTopologyResponse
       */
      Models::DescribeLogicInstanceTopologyResponse describeLogicInstanceTopologyWithOptions(const Models::DescribeLogicInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logical topology structure of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description This operation is supported only for cluster and read/write splitting instances.
       *
       * @param request DescribeLogicInstanceTopologyRequest
       * @return DescribeLogicInstanceTopologyResponse
       */
      Models::DescribeLogicInstanceTopologyResponse describeLogicInstanceTopology(const Models::DescribeLogicInstanceTopologyRequest &request);

      /**
       * @summary Queries the list of monitoring items supported by a Tair (Redis® OSS-Compatible) instance.
       *
       * @description > To improve user experience, Tair (Redis® OSS-Compatible) has upgraded its performance monitoring. This operation will be taken offline. For more information, see [Notice: Tair (Redis® OSS-Compatible) DescribeMonitorItems operation offline](https://help.aliyun.com/document_detail/189893.html).
       * After you call this operation to obtain the list of monitoring items, you can call the [DescribeHistoryMonitorValues](https://help.aliyun.com/document_detail/473827.html) operation to query the historical monitoring information of an instance.
       *
       * @param request DescribeMonitorItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorItemsResponse
       */
      Models::DescribeMonitorItemsResponse describeMonitorItemsWithOptions(const Models::DescribeMonitorItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of monitoring items supported by a Tair (Redis® OSS-Compatible) instance.
       *
       * @description > To improve user experience, Tair (Redis® OSS-Compatible) has upgraded its performance monitoring. This operation will be taken offline. For more information, see [Notice: Tair (Redis® OSS-Compatible) DescribeMonitorItems operation offline](https://help.aliyun.com/document_detail/189893.html).
       * After you call this operation to obtain the list of monitoring items, you can call the [DescribeHistoryMonitorValues](https://help.aliyun.com/document_detail/473827.html) operation to query the historical monitoring information of an instance.
       *
       * @param request DescribeMonitorItemsRequest
       * @return DescribeMonitorItemsResponse
       */
      Models::DescribeMonitorItemsResponse describeMonitorItems(const Models::DescribeMonitorItemsRequest &request);

      /**
       * @summary Queries the basic information about a query parameter template.
       *
       * @param request DescribeParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroupWithOptions(const Models::DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a query parameter template.
       *
       * @param request DescribeParameterGroupRequest
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroup(const Models::DescribeParameterGroupRequest &request);

      /**
       * @summary Queries the list of parameters that can be configured in parameter templates of different versions.
       *
       * @param request DescribeParameterGroupSupportParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupSupportParamResponse
       */
      Models::DescribeParameterGroupSupportParamResponse describeParameterGroupSupportParamWithOptions(const Models::DescribeParameterGroupSupportParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of parameters that can be configured in parameter templates of different versions.
       *
       * @param request DescribeParameterGroupSupportParamRequest
       * @return DescribeParameterGroupSupportParamResponse
       */
      Models::DescribeParameterGroupSupportParamResponse describeParameterGroupSupportParam(const Models::DescribeParameterGroupSupportParamRequest &request);

      /**
       * @summary Queries the details of configurable query parameters in a parameter template, such as default values, value ranges, and descriptions.
       *
       * @param request DescribeParameterGroupTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupTemplateListResponse
       */
      Models::DescribeParameterGroupTemplateListResponse describeParameterGroupTemplateListWithOptions(const Models::DescribeParameterGroupTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of configurable query parameters in a parameter template, such as default values, value ranges, and descriptions.
       *
       * @param request DescribeParameterGroupTemplateListRequest
       * @return DescribeParameterGroupTemplateListResponse
       */
      Models::DescribeParameterGroupTemplateListResponse describeParameterGroupTemplateList(const Models::DescribeParameterGroupTemplateListRequest &request);

      /**
       * @summary Queries available parameter templates.
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available parameter templates.
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @summary Queries the parameter modification history of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeParameterModificationHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterModificationHistoryResponse
       */
      Models::DescribeParameterModificationHistoryResponse describeParameterModificationHistoryWithOptions(const Models::DescribeParameterModificationHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter modification history of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeParameterModificationHistoryRequest
       * @return DescribeParameterModificationHistoryResponse
       */
      Models::DescribeParameterModificationHistoryResponse describeParameterModificationHistory(const Models::DescribeParameterModificationHistoryRequest &request);

      /**
       * @summary Queries the parameters and default values of ApsaraDB Tair (Redis® OSS-Compatible) database instances across different architectures and major engine versions.
       *
       * @description After you call this operation to retrieve the parameter list and default values, you can call the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the parameters of a Redis instance as needed.
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters and default values of ApsaraDB Tair (Redis® OSS-Compatible) database instances across different architectures and major engine versions.
       *
       * @description After you call this operation to retrieve the parameter list and default values, you can call the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the parameters of a Redis instance as needed.
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Queries the configuration parameters and running parameters of a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration parameters and running parameters of a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary Queries the fees generated by operations such as creating a Tair (Redis® OSS-Compatible) database instance, upgrading the instance configuration, or renewing the instance.
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fees generated by operations such as creating a Tair (Redis® OSS-Compatible) database instance, upgrading the instance configuration, or renewing the instance.
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Queries all regions and their corresponding active zones supported by ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all regions and their corresponding active zones supported by ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the roles, types, minor versions, and zones of nodes in a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeRoleZoneInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoleZoneInfoResponse
       */
      Models::DescribeRoleZoneInfoResponse describeRoleZoneInfoWithOptions(const Models::DescribeRoleZoneInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the roles, types, minor versions, and zones of nodes in a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeRoleZoneInfoRequest
       * @return DescribeRoleZoneInfoResponse
       */
      Models::DescribeRoleZoneInfoResponse describeRoleZoneInfo(const Models::DescribeRoleZoneInfoRequest &request);

      /**
       * @summary Queries the running logs of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the corresponding console operation of this API, see [Query running logs](https://help.aliyun.com/document_detail/101713.html). The maximum call frequency of DescribeRunningLogRecords is 100 calls per minute.
       *
       * @param request DescribeRunningLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRunningLogRecordsResponse
       */
      Models::DescribeRunningLogRecordsResponse describeRunningLogRecordsWithOptions(const Models::DescribeRunningLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running logs of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the corresponding console operation of this API, see [Query running logs](https://help.aliyun.com/document_detail/101713.html). The maximum call frequency of DescribeRunningLogRecords is 100 calls per minute.
       *
       * @param request DescribeRunningLogRecordsRequest
       * @return DescribeRunningLogRecordsResponse
       */
      Models::DescribeRunningLogRecordsResponse describeRunningLogRecords(const Models::DescribeRunningLogRecordsRequest &request);

      /**
       * @summary Queries the security groups in the Settings of the whitelist for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfigurationWithOptions(const Models::DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security groups in the Settings of the whitelist for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfiguration(const Models::DescribeSecurityGroupConfigurationRequest &request);

      /**
       * @summary Queries the IP address whitelist of a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeSecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIpsWithOptions(const Models::DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelist of a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request DescribeSecurityIpsRequest
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIps(const Models::DescribeSecurityIpsRequest &request);

      /**
       * @summary Queries whether the service-linked role has been authorized for Tair (Redis® OSS-Compatible).
       *
       * @description Call this operation to query whether the associated role named AliyunServiceRoleForKvstore has been authorized for use by Tair (Redis® OSS-Compatible) database under the current account. For more information, see [Service-linked role for Tair (Redis® OSS-Compatible) database](https://help.aliyun.com/document_detail/184337.html).
       *
       * @param request DescribeServiceLinkedRoleExistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceLinkedRoleExistsResponse
       */
      Models::DescribeServiceLinkedRoleExistsResponse describeServiceLinkedRoleExistsWithOptions(const Models::DescribeServiceLinkedRoleExistsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the service-linked role has been authorized for Tair (Redis® OSS-Compatible).
       *
       * @description Call this operation to query whether the associated role named AliyunServiceRoleForKvstore has been authorized for use by Tair (Redis® OSS-Compatible) database under the current account. For more information, see [Service-linked role for Tair (Redis® OSS-Compatible) database](https://help.aliyun.com/document_detail/184337.html).
       *
       * @param request DescribeServiceLinkedRoleExistsRequest
       * @return DescribeServiceLinkedRoleExistsResponse
       */
      Models::DescribeServiceLinkedRoleExistsResponse describeServiceLinkedRoleExists(const Models::DescribeServiceLinkedRoleExistsRequest &request);

      /**
       * @summary Queries the slow query logs generated by a Tair (Redis® OSS-Compatible) database instance within a specified time period.
       *
       * @description For the corresponding console operation, see [Query slow query logs](https://help.aliyun.com/document_detail/95874.html).
       * The maximum number of calls to DescribeSlowLogRecords is 100 per minute.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the slow query logs generated by a Tair (Redis® OSS-Compatible) database instance within a specified time period.
       *
       * @description For the corresponding console operation, see [Query slow query logs](https://help.aliyun.com/document_detail/95874.html).
       * The maximum number of calls to DescribeSlowLogRecords is 100 per minute.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries all tags in the specified region.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all tags in the specified region.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary 查看TairCustom实例
       *
       * @param request DescribeTairKVCacheCustomInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTairKVCacheCustomInstanceAttributeResponse
       */
      Models::DescribeTairKVCacheCustomInstanceAttributeResponse describeTairKVCacheCustomInstanceAttributeWithOptions(const Models::DescribeTairKVCacheCustomInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看TairCustom实例
       *
       * @param request DescribeTairKVCacheCustomInstanceAttributeRequest
       * @return DescribeTairKVCacheCustomInstanceAttributeResponse
       */
      Models::DescribeTairKVCacheCustomInstanceAttributeResponse describeTairKVCacheCustomInstanceAttribute(const Models::DescribeTairKVCacheCustomInstanceAttributeRequest &request);

      /**
       * @summary 查询TairCustom主机监控
       *
       * @param request DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse
       */
      Models::DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse describeTairKVCacheCustomInstanceHistoryMonitorValuesWithOptions(const Models::DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询TairCustom主机监控
       *
       * @param request DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest
       * @return DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse
       */
      Models::DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponse describeTairKVCacheCustomInstanceHistoryMonitorValues(const Models::DescribeTairKVCacheCustomInstanceHistoryMonitorValuesRequest &request);

      /**
       * @summary 查看TairCustom实例
       *
       * @param request DescribeTairKVCacheCustomInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTairKVCacheCustomInstancesResponse
       */
      Models::DescribeTairKVCacheCustomInstancesResponse describeTairKVCacheCustomInstancesWithOptions(const Models::DescribeTairKVCacheCustomInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看TairCustom实例
       *
       * @param request DescribeTairKVCacheCustomInstancesRequest
       * @return DescribeTairKVCacheCustomInstancesResponse
       */
      Models::DescribeTairKVCacheCustomInstancesResponse describeTairKVCacheCustomInstances(const Models::DescribeTairKVCacheCustomInstancesRequest &request);

      /**
       * @summary 查看TairInfer实例
       *
       * @param request DescribeTairKVCacheInferInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTairKVCacheInferInstanceAttributeResponse
       */
      Models::DescribeTairKVCacheInferInstanceAttributeResponse describeTairKVCacheInferInstanceAttributeWithOptions(const Models::DescribeTairKVCacheInferInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看TairInfer实例
       *
       * @param request DescribeTairKVCacheInferInstanceAttributeRequest
       * @return DescribeTairKVCacheInferInstanceAttributeResponse
       */
      Models::DescribeTairKVCacheInferInstanceAttributeResponse describeTairKVCacheInferInstanceAttribute(const Models::DescribeTairKVCacheInferInstanceAttributeRequest &request);

      /**
       * @summary Queries the details of one or more Tair KVCache instances.
       *
       * @description This operation queries inference operator instances, virtual cluster instances, and cache service instances of Tair KVCache.
       *
       * @param request DescribeTairKVCacheInferInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTairKVCacheInferInstancesResponse
       */
      Models::DescribeTairKVCacheInferInstancesResponse describeTairKVCacheInferInstancesWithOptions(const Models::DescribeTairKVCacheInferInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more Tair KVCache instances.
       *
       * @description This operation queries inference operator instances, virtual cluster instances, and cache service instances of Tair KVCache.
       *
       * @param request DescribeTairKVCacheInferInstancesRequest
       * @return DescribeTairKVCacheInferInstancesResponse
       */
      Models::DescribeTairKVCacheInferInstancesResponse describeTairKVCacheInferInstances(const Models::DescribeTairKVCacheInferInstancesRequest &request);

      /**
       * @summary Queries all Tair Serverless KV table instances in a specified workspace.
       *
       * @description ## Operation description
       * - You must specify the `InstanceId` parameter when you call this operation.
       * - The response includes basic information about each table, such as the table ID, name, bandwidth, and maximum number of connections.
       *
       * @param request DescribeTairSkvDdbTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTairSkvDdbTableResponse
       */
      Models::DescribeTairSkvDdbTableResponse describeTairSkvDdbTableWithOptions(const Models::DescribeTairSkvDdbTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Tair Serverless KV table instances in a specified workspace.
       *
       * @description ## Operation description
       * - You must specify the `InstanceId` parameter when you call this operation.
       * - The response includes basic information about each table, such as the table ID, name, bandwidth, and maximum number of connections.
       *
       * @param request DescribeTairSkvDdbTableRequest
       * @return DescribeTairSkvDdbTableResponse
       */
      Models::DescribeTairSkvDdbTableResponse describeTairSkvDdbTable(const Models::DescribeTairSkvDdbTableRequest &request);

      /**
       * @summary Retrieves the table schema and configuration information of a specified instance.
       *
       * @description ## Operation description
       * - This operation queries the table schema configuration of a Tair Serverless KV table instance.
       * - When you invoke this operation, you must specify the InstanceId parameter. The value of this parameter is the instance ID of the instance that you want to query.
       * - The BackupId parameter specifies the backup set of the table to query.
       * - The response packet includes the time-to-live (TTL) specifications and detailed table structure definition.
       *
       * @param request DescribeTairSkvDdbTableSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTairSkvDdbTableSchemaResponse
       */
      Models::DescribeTairSkvDdbTableSchemaResponse describeTairSkvDdbTableSchemaWithOptions(const Models::DescribeTairSkvDdbTableSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the table schema and configuration information of a specified instance.
       *
       * @description ## Operation description
       * - This operation queries the table schema configuration of a Tair Serverless KV table instance.
       * - When you invoke this operation, you must specify the InstanceId parameter. The value of this parameter is the instance ID of the instance that you want to query.
       * - The BackupId parameter specifies the backup set of the table to query.
       * - The response packet includes the time-to-live (TTL) specifications and detailed table structure definition.
       *
       * @param request DescribeTairSkvDdbTableSchemaRequest
       * @return DescribeTairSkvDdbTableSchemaResponse
       */
      Models::DescribeTairSkvDdbTableSchemaResponse describeTairSkvDdbTableSchema(const Models::DescribeTairSkvDdbTableSchemaRequest &request);

      /**
       * @summary Queries the details of a node.
       *
       * @param request DescribeTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskDetailResponse
       */
      Models::DescribeTaskDetailResponse describeTaskDetailWithOptions(const Models::DescribeTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a node.
       *
       * @param request DescribeTaskDetailRequest
       * @return DescribeTaskDetailResponse
       */
      Models::DescribeTaskDetailResponse describeTaskDetail(const Models::DescribeTaskDetailRequest &request);

      /**
       * @summary Queries the zones supported by Tair (Redis® OSS-Compatible) in a specified region. To query the zones that are active for purchase, call the DescribeAvailableResource operation.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones supported by Tair (Redis® OSS-Compatible) in a specified region. To query the zones that are active for purchase, call the DescribeAvailableResource operation.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Permanently destroys an instance and its data backups from the recycle bin.
       *
       * @description When you call this operation, the instance must exist in the recycle bin. For more information, see [Cluster recycle bin](https://help.aliyun.com/document_detail/86114.html).
       * > After you call this operation, the instance and its data backups in the recycle bin are permanently deleted.
       * <danger>After this operation is performed, the data of the instance is permanently deleted and cannot be recovered. Proceed with caution.
       *
       * @param request DestroyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DestroyInstanceResponse
       */
      Models::DestroyInstanceResponse destroyInstanceWithOptions(const Models::DestroyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently destroys an instance and its data backups from the recycle bin.
       *
       * @description When you call this operation, the instance must exist in the recycle bin. For more information, see [Cluster recycle bin](https://help.aliyun.com/document_detail/86114.html).
       * > After you call this operation, the instance and its data backups in the recycle bin are permanently deleted.
       * <danger>After this operation is performed, the data of the instance is permanently deleted and cannot be recovered. Proceed with caution.
       *
       * @param request DestroyInstanceRequest
       * @return DestroyInstanceResponse
       */
      Models::DestroyInstanceResponse destroyInstance(const Models::DestroyInstanceRequest &request);

      /**
       * @summary Adjusts the bandwidth of an ApsaraDB Tair (Redis® OSS-Compatible) instance. Currently, only the pay-as-you-go billing method is supported. You only need to specify the InstanceId, NodeId (optional), Bandwidth, and ChargeType parameters.
       *
       * @description If you enable the elastic elastic scaling feature for the instance while calling this operation, the instance preferentially uses the elastic elastic scaling feature. When the bandwidth is elastically scaled down, it is scaled down to the default bandwidth of the instance specifications. For more information about the limits, billing, and FAQ of this feature, see [Adjust the bandwidth of an instance](https://help.aliyun.com/document_detail/102588.html).
       * > Before you call this operation, you can call [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/473782.html) to query the current bandwidth of each data node in the instance.
       *
       * @param request EnableAdditionalBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAdditionalBandwidthResponse
       */
      Models::EnableAdditionalBandwidthResponse enableAdditionalBandwidthWithOptions(const Models::EnableAdditionalBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjusts the bandwidth of an ApsaraDB Tair (Redis® OSS-Compatible) instance. Currently, only the pay-as-you-go billing method is supported. You only need to specify the InstanceId, NodeId (optional), Bandwidth, and ChargeType parameters.
       *
       * @description If you enable the elastic elastic scaling feature for the instance while calling this operation, the instance preferentially uses the elastic elastic scaling feature. When the bandwidth is elastically scaled down, it is scaled down to the default bandwidth of the instance specifications. For more information about the limits, billing, and FAQ of this feature, see [Adjust the bandwidth of an instance](https://help.aliyun.com/document_detail/102588.html).
       * > Before you call this operation, you can call [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/473782.html) to query the current bandwidth of each data node in the instance.
       *
       * @param request EnableAdditionalBandwidthRequest
       * @return EnableAdditionalBandwidthResponse
       */
      Models::EnableAdditionalBandwidthResponse enableAdditionalBandwidth(const Models::EnableAdditionalBandwidthRequest &request);

      /**
       * @summary Purges expired keys from a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the corresponding console operation, see [Clear data](https://help.aliyun.com/document_detail/43881.html).
       * > Expired keys cannot be recovered after they are cleared. Use this API operation with caution.
       *
       * @param request FlushExpireKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlushExpireKeysResponse
       */
      Models::FlushExpireKeysResponse flushExpireKeysWithOptions(const Models::FlushExpireKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purges expired keys from a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the corresponding console operation, see [Clear data](https://help.aliyun.com/document_detail/43881.html).
       * > Expired keys cannot be recovered after they are cleared. Use this API operation with caution.
       *
       * @param request FlushExpireKeysRequest
       * @return FlushExpireKeysResponse
       */
      Models::FlushExpireKeysResponse flushExpireKeys(const Models::FlushExpireKeysRequest &request);

      /**
       * @summary Flushes all data from an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. The data cannot be recovered.
       *
       * @description For the corresponding console operation, refer to [Purge data](https://help.aliyun.com/document_detail/43881.html).
       * > Before calling this API to delete data, back up your data or confirm that a backup is not required.
       *
       * @param request FlushInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlushInstanceResponse
       */
      Models::FlushInstanceResponse flushInstanceWithOptions(const Models::FlushInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Flushes all data from an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. The data cannot be recovered.
       *
       * @description For the corresponding console operation, refer to [Purge data](https://help.aliyun.com/document_detail/43881.html).
       * > Before calling this API to delete data, back up your data or confirm that a backup is not required.
       *
       * @param request FlushInstanceRequest
       * @return FlushInstanceResponse
       */
      Models::FlushInstanceResponse flushInstance(const Models::FlushInstanceRequest &request);

      /**
       * @summary Clears data from a specified database in an ApsaraDB for Tair (Redis® OSS-Compatible) instance.
       *
       * @description ApsaraDB for Tair (Redis® OSS-Compatible) instances support 256 databases, from DB0 to DB255. Each database does not have a separate memory usage limit. The memory capacity available to a database is subject to the total memory limit of the instance. You can run the `SELECT` command to switch between databases. For more information, see [Tair DB](https://help.aliyun.com/document_detail/38688.html).
       * > This operation supports only cloud-native instances (formerly cloud disk-based instances) in cluster architecture.
       *
       * @param request FlushInstanceForDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlushInstanceForDBResponse
       */
      Models::FlushInstanceForDBResponse flushInstanceForDBWithOptions(const Models::FlushInstanceForDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears data from a specified database in an ApsaraDB for Tair (Redis® OSS-Compatible) instance.
       *
       * @description ApsaraDB for Tair (Redis® OSS-Compatible) instances support 256 databases, from DB0 to DB255. Each database does not have a separate memory usage limit. The memory capacity available to a database is subject to the total memory limit of the instance. You can run the `SELECT` command to switch between databases. For more information, see [Tair DB](https://help.aliyun.com/document_detail/38688.html).
       * > This operation supports only cloud-native instances (formerly cloud disk-based instances) in cluster architecture.
       *
       * @param request FlushInstanceForDBRequest
       * @return FlushInstanceForDBResponse
       */
      Models::FlushInstanceForDBResponse flushInstanceForDB(const Models::FlushInstanceForDBRequest &request);

      /**
       * @summary Modifies the permissions of an ApsaraDB for Tair (Redis® OSS-Compatible) database account.
       *
       * @param request GrantAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(const Models::GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of an ApsaraDB for Tair (Redis® OSS-Compatible) database account.
       *
       * @param request GrantAccountPrivilegeRequest
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilege(const Models::GrantAccountPrivilegeRequest &request);

      /**
       * @summary Associates the service-linked role named AliyunServiceRoleForKvstore with Tair (Redis® OSS-Compatible) database.
       *
       * @description The Log Management feature of Tair (Redis® OSS-Compatible) database requires resources from [Simple Log Service](https://help.aliyun.com/document_detail/48869.html). Before using the Log Management feature, call this operation to associate the service-linked role named AliyunServiceRoleForKvstore with Tair (Redis® OSS-Compatible) database. For more information, see [Service-linked role for Tair (Redis® OSS-Compatible) database](https://help.aliyun.com/document_detail/184337.html).
       *
       * @param request InitializeKvstorePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeKvstorePermissionResponse
       */
      Models::InitializeKvstorePermissionResponse initializeKvstorePermissionWithOptions(const Models::InitializeKvstorePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates the service-linked role named AliyunServiceRoleForKvstore with Tair (Redis® OSS-Compatible) database.
       *
       * @description The Log Management feature of Tair (Redis® OSS-Compatible) database requires resources from [Simple Log Service](https://help.aliyun.com/document_detail/48869.html). Before using the Log Management feature, call this operation to associate the service-linked role named AliyunServiceRoleForKvstore with Tair (Redis® OSS-Compatible) database. For more information, see [Service-linked role for Tair (Redis® OSS-Compatible) database](https://help.aliyun.com/document_detail/184337.html).
       *
       * @param request InitializeKvstorePermissionRequest
       * @return InitializeKvstorePermissionResponse
       */
      Models::InitializeKvstorePermissionResponse initializeKvstorePermission(const Models::InitializeKvstorePermissionRequest &request);

      /**
       * @summary Queries the labels you attach to ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
       *
       * @description For the corresponding console operations of this API, refer to [Filter instances by tag](https://help.aliyun.com/document_detail/119160.html) and [View tags bound to an instance](https://help.aliyun.com/document_detail/134038.html).
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the labels you attach to ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
       *
       * @description For the corresponding console operations of this API, refer to [Filter instances by tag](https://help.aliyun.com/document_detail/119160.html) and [View tags bound to an instance](https://help.aliyun.com/document_detail/134038.html).
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Locks an instance so that it supports only data reads and does not support writes.
       *
       * @param request LockDBInstanceWriteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockDBInstanceWriteResponse
       */
      Models::LockDBInstanceWriteResponse lockDBInstanceWriteWithOptions(const Models::LockDBInstanceWriteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks an instance so that it supports only data reads and does not support writes.
       *
       * @param request LockDBInstanceWriteRequest
       * @return LockDBInstanceWriteResponse
       */
      Models::LockDBInstanceWriteResponse lockDBInstanceWrite(const Models::LockDBInstanceWriteRequest &request);

      /**
       * @summary Simulates a failure of a specified data node or proxy node in Tair (Redis® OSS-Compatible). The instance automatically performs a primary/secondary switchover to ensure high availability.
       *
       * @description - When you call this operation, the specified node is shut down. The instance automatically triggers a primary/secondary switchover to promote the secondary node to the primary node.
       * - The node with the simulated failure automatically recovers later.
       * - This operation is not supported for single-node (single-replica) instances.
       *
       * @param request MasterNodeShutDownFailOverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MasterNodeShutDownFailOverResponse
       */
      Models::MasterNodeShutDownFailOverResponse masterNodeShutDownFailOverWithOptions(const Models::MasterNodeShutDownFailOverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Simulates a failure of a specified data node or proxy node in Tair (Redis® OSS-Compatible). The instance automatically performs a primary/secondary switchover to ensure high availability.
       *
       * @description - When you call this operation, the specified node is shut down. The instance automatically triggers a primary/secondary switchover to promote the secondary node to the primary node.
       * - The node with the simulated failure automatically recovers later.
       * - This operation is not supported for single-node (single-replica) instances.
       *
       * @param request MasterNodeShutDownFailOverRequest
       * @return MasterNodeShutDownFailOverResponse
       */
      Models::MasterNodeShutDownFailOverResponse masterNodeShutDownFailOver(const Models::MasterNodeShutDownFailOverRequest &request);

      /**
       * @summary Migrates an ApsaraDB Tair (Redis OSS-Compatible) instance to another zone in the same region.
       *
       * @description Before you call this operation, you must release the public endpoint. For more information, see [Migrate an instance across zones](https://help.aliyun.com/document_detail/106272.html).
       * > * If the instance was switched from the classic network to a VPC and retains the classic network endpoint, you must wait until the classic network endpoint expires and is released before you can migrate the instance across zones.
       * > * After the migration, the endpoint of the instance remains unchanged, but the virtual IP address (VIP) changes. Use the endpoint instead of the VIP to connect to the instance in your business applications.
       *
       * @param request MigrateToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(const Models::MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an ApsaraDB Tair (Redis OSS-Compatible) instance to another zone in the same region.
       *
       * @description Before you call this operation, you must release the public endpoint. For more information, see [Migrate an instance across zones](https://help.aliyun.com/document_detail/106272.html).
       * > * If the instance was switched from the classic network to a VPC and retains the classic network endpoint, you must wait until the classic network endpoint expires and is released before you can migrate the instance across zones.
       * > * After the migration, the endpoint of the instance remains unchanged, but the virtual IP address (VIP) changes. Use the endpoint instead of the VIP to connect to the instance in your business applications.
       *
       * @param request MigrateToOtherZoneRequest
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZone(const Models::MigrateToOtherZoneRequest &request);

      /**
       * @summary Modifies the account description of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description This API operation supports only instances that are compatible with Redis 4.0 or later.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the account description of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description This API operation supports only instances that are compatible with Redis 4.0 or later.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modifies account parameters.
       *
       * @description Currently, only Tair Serverless KV instances are supported.
       *
       * @param request ModifyAccountParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountParameterResponse
       */
      Models::ModifyAccountParameterResponse modifyAccountParameterWithOptions(const Models::ModifyAccountParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies account parameters.
       *
       * @description Currently, only Tair Serverless KV instances are supported.
       *
       * @param request ModifyAccountParameterRequest
       * @return ModifyAccountParameterResponse
       */
      Models::ModifyAccountParameterResponse modifyAccountParameter(const Models::ModifyAccountParameterRequest &request);

      /**
       * @summary Modifies the password of a specified account in a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request ModifyAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPasswordWithOptions(const Models::ModifyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password of a specified account in a Tair (Redis® OSS-Compatible) instance.
       *
       * @param request ModifyAccountPasswordRequest
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPassword(const Models::ModifyAccountPasswordRequest &request);

      /**
       * @summary Modifies the configuration of an O&M task.
       *
       * @param request ModifyActiveOperationMaintainConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationMaintainConfigResponse
       */
      Models::ModifyActiveOperationMaintainConfigResponse modifyActiveOperationMaintainConfigWithOptions(const Models::ModifyActiveOperationMaintainConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an O&M task.
       *
       * @param request ModifyActiveOperationMaintainConfigRequest
       * @return ModifyActiveOperationMaintainConfigResponse
       */
      Models::ModifyActiveOperationMaintainConfigResponse modifyActiveOperationMaintainConfig(const Models::ModifyActiveOperationMaintainConfigRequest &request);

      /**
       * @summary Modifies the scheduled switchover time of an O&M task.
       *
       * @description O&M events of Tair (Redis® OSS-Compatible) instances, such as instance migration and version upgrades, are notified through text messages, phone calls, emails, or internal messages, and are also displayed in the console. In addition to invoking this operation to modify the scheduled switchover time, you can also modify it in the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/187022.html).
       *
       * @param request ModifyActiveOperationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTaskResponse
       */
      Models::ModifyActiveOperationTaskResponse modifyActiveOperationTaskWithOptions(const Models::ModifyActiveOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scheduled switchover time of an O&M task.
       *
       * @description O&M events of Tair (Redis® OSS-Compatible) instances, such as instance migration and version upgrades, are notified through text messages, phone calls, emails, or internal messages, and are also displayed in the console. In addition to invoking this operation to modify the scheduled switchover time, you can also modify it in the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/187022.html).
       *
       * @param request ModifyActiveOperationTaskRequest
       * @return ModifyActiveOperationTaskResponse
       */
      Models::ModifyActiveOperationTaskResponse modifyActiveOperationTask(const Models::ModifyActiveOperationTaskRequest &request);

      /**
       * @summary Modifies the switchover time of scheduled O&M events for an instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switchover time of scheduled O&M events for an instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Enables or modifies the audit log settings of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing and [pricing](https://help.aliyun.com/document_detail/54532.html) of audit logs.
       *
       * @param request ModifyAuditLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAuditLogConfigResponse
       */
      Models::ModifyAuditLogConfigResponse modifyAuditLogConfigWithOptions(const Models::ModifyAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or modifies the audit log settings of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing and [pricing](https://help.aliyun.com/document_detail/54532.html) of audit logs.
       *
       * @param request ModifyAuditLogConfigRequest
       * @return ModifyAuditLogConfigResponse
       */
      Models::ModifyAuditLogConfigResponse modifyAuditLogConfig(const Models::ModifyAuditLogConfigRequest &request);

      /**
       * @summary Extends the expiration time of manual backup data.
       *
       * @param request ModifyBackupExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupExpireTimeResponse
       */
      Models::ModifyBackupExpireTimeResponse modifyBackupExpireTimeWithOptions(const Models::ModifyBackupExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the expiration time of manual backup data.
       *
       * @param request ModifyBackupExpireTimeRequest
       * @return ModifyBackupExpireTimeResponse
       */
      Models::ModifyBackupExpireTimeResponse modifyBackupExpireTime(const Models::ModifyBackupExpireTimeRequest &request);

      /**
       * @summary Modifies the automatic backup policy of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic backup policy of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Modifies the automatic minor engine version update switch for an instance.
       *
       * @param request ModifyDBInstanceAutoUpgradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAutoUpgradeResponse
       */
      Models::ModifyDBInstanceAutoUpgradeResponse modifyDBInstanceAutoUpgradeWithOptions(const Models::ModifyDBInstanceAutoUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic minor engine version update switch for an instance.
       *
       * @param request ModifyDBInstanceAutoUpgradeRequest
       * @return ModifyDBInstanceAutoUpgradeResponse
       */
      Models::ModifyDBInstanceAutoUpgradeResponse modifyDBInstanceAutoUpgrade(const Models::ModifyDBInstanceAutoUpgradeRequest &request);

      /**
       * @summary Modifies the endpoint and port of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the console operation that corresponds to this API operation, see [Modify an endpoint](https://help.aliyun.com/document_detail/85683.html).
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the endpoint and port of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the console operation that corresponds to this API operation, see [Modify an endpoint](https://help.aliyun.com/document_detail/85683.html).
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary Modifies the monitoring collection granularity of a Tair instance.
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitorWithOptions(const Models::ModifyDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the monitoring collection granularity of a Tair instance.
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitor(const Models::ModifyDBInstanceMonitorRequest &request);

      /**
       * @summary Modifies event information.
       *
       * @param request ModifyEventInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfoWithOptions(const Models::ModifyEventInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies event information.
       *
       * @param request ModifyEventInfoRequest
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfo(const Models::ModifyEventInfoRequest &request);

      /**
       * @summary Modifies a global IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroupWithOptions(const Models::ModifyGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a global IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroup(const Models::ModifyGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Modifies the name of a global IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupNameResponse
       */
      Models::ModifyGlobalSecurityIPGroupNameResponse modifyGlobalSecurityIPGroupNameWithOptions(const Models::ModifyGlobalSecurityIPGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a global IP address whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupNameRequest
       * @return ModifyGlobalSecurityIPGroupNameResponse
       */
      Models::ModifyGlobalSecurityIPGroupNameResponse modifyGlobalSecurityIPGroupName(const Models::ModifyGlobalSecurityIPGroupNameRequest &request);

      /**
       * @summary Adds a specified instance to a specified IP whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupRelationResponse
       */
      Models::ModifyGlobalSecurityIPGroupRelationResponse modifyGlobalSecurityIPGroupRelationWithOptions(const Models::ModifyGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a specified instance to a specified IP whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRelationRequest
       * @return ModifyGlobalSecurityIPGroupRelationResponse
       */
      Models::ModifyGlobalSecurityIPGroupRelationResponse modifyGlobalSecurityIPGroupRelation(const Models::ModifyGlobalSecurityIPGroupRelationRequest &request);

      /**
       * @summary Modifies the scheduled inspection configuration.
       *
       * @param request ModifyInspectionScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInspectionScheduleResponse
       */
      Models::ModifyInspectionScheduleResponse modifyInspectionScheduleWithOptions(const Models::ModifyInspectionScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scheduled inspection configuration.
       *
       * @param request ModifyInspectionScheduleRequest
       * @return ModifyInspectionScheduleResponse
       */
      Models::ModifyInspectionScheduleResponse modifyInspectionSchedule(const Models::ModifyInspectionScheduleRequest &request);

      /**
       * @summary Modifies partial information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance, including the instance password and name.
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies partial information of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance, including the instance password and name.
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary Enables or disables the auto-renewal feature for a Tair (Redis® OSS-Compatible) instance before it expires.
       *
       * @description > Auto-renewal is triggered 7 days before the instance expires.
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttributeWithOptions(const Models::ModifyInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the auto-renewal feature for a Tair (Redis® OSS-Compatible) instance before it expires.
       *
       * @description > Auto-renewal is triggered 7 days before the instance expires.
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttribute(const Models::ModifyInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Sets the target bandwidth value for a Tair (Redis® OSS-Compatible) database instance.
       *
       * @description - Before calling this operation, make sure that you fully understand the bandwidth billing method and pricing of the instance. Tair (Redis® OSS-Compatible) charges fees on an hourly basis based on the increased bandwidth and usage duration. The pricing varies by region. For more information, see [Billable items](https://help.aliyun.com/document_detail/54532.html).
       * - The bandwidth of an instance (or a single shard) can be increased by up to 6 times the default bandwidth of the instance, with a maximum increase of 192 MB/s. For example, the default bandwidth of a Tair memory-optimized 2 GB standard architecture instance is 96 MB/s. The bandwidth of this instance type can be increased by up to 192 MB/s, resulting in a maximum bandwidth of 288 MB/s. The default bandwidth of a Redis Community Edition 256 MB standard architecture instance is 10 MB/s. The bandwidth of this instance type can be increased by up to 60 MB/s, resulting in a maximum bandwidth of 70 MB/s.
       *
       * @param request ModifyInstanceBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceBandwidthResponse
       */
      Models::ModifyInstanceBandwidthResponse modifyInstanceBandwidthWithOptions(const Models::ModifyInstanceBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the target bandwidth value for a Tair (Redis® OSS-Compatible) database instance.
       *
       * @description - Before calling this operation, make sure that you fully understand the bandwidth billing method and pricing of the instance. Tair (Redis® OSS-Compatible) charges fees on an hourly basis based on the increased bandwidth and usage duration. The pricing varies by region. For more information, see [Billable items](https://help.aliyun.com/document_detail/54532.html).
       * - The bandwidth of an instance (or a single shard) can be increased by up to 6 times the default bandwidth of the instance, with a maximum increase of 192 MB/s. For example, the default bandwidth of a Tair memory-optimized 2 GB standard architecture instance is 96 MB/s. The bandwidth of this instance type can be increased by up to 192 MB/s, resulting in a maximum bandwidth of 288 MB/s. The default bandwidth of a Redis Community Edition 256 MB standard architecture instance is 10 MB/s. The bandwidth of this instance type can be increased by up to 60 MB/s, resulting in a maximum bandwidth of 70 MB/s.
       *
       * @param request ModifyInstanceBandwidthRequest
       * @return ModifyInstanceBandwidthResponse
       */
      Models::ModifyInstanceBandwidthResponse modifyInstanceBandwidth(const Models::ModifyInstanceBandwidthRequest &request);

      /**
       * @summary Modifies the parameter settings of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request ModifyInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameter settings of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

      /**
       * @summary Modifies the maintenance window of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. Alibaba Cloud performs routine maintenance on the instance within the specified maintenance window.
       *
       * @description For the console operation that corresponds to this API operation, see [Set a maintenance window](https://help.aliyun.com/document_detail/55252.html).
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTimeWithOptions(const Models::ModifyInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. Alibaba Cloud performs routine maintenance on the instance within the specified maintenance window.
       *
       * @description For the console operation that corresponds to this API operation, see [Set a maintenance window](https://help.aliyun.com/document_detail/55252.html).
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTime(const Models::ModifyInstanceMaintainTimeRequest &request);

      /**
       * @summary Upgrades the major engine version of a Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the precautions and impacts of this API operation, see [Upgrade the major version](https://help.aliyun.com/document_detail/101764.html).
       *
       * @param request ModifyInstanceMajorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMajorVersionResponse
       */
      Models::ModifyInstanceMajorVersionResponse modifyInstanceMajorVersionWithOptions(const Models::ModifyInstanceMajorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the major engine version of a Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the precautions and impacts of this API operation, see [Upgrade the major version](https://help.aliyun.com/document_detail/101764.html).
       *
       * @param request ModifyInstanceMajorVersionRequest
       * @return ModifyInstanceMajorVersionResponse
       */
      Models::ModifyInstanceMajorVersionResponse modifyInstanceMajorVersion(const Models::ModifyInstanceMajorVersionRequest &request);

      /**
       * @summary Upgrades the minor version of an ApsaraDB Tair (Redis® OSS-Compatible) database instance.
       *
       * @description The upgrade process varies by architecture. For more information, see [How minor version upgrades work](https://help.aliyun.com/document_detail/56450.html).
       * > * Before you call this operation, you can call [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) to query the current minor version of the instance.
       * > * During an instance switchover or primary/secondary switchover, the instance enters a read-only state for up to 60 seconds to wait for full data synchronization. Transient disconnections that last for a few seconds may also occur. Perform the upgrade during off-peak hours and ensure that your application has a reconnection mechanism.
       *
       * @param request ModifyInstanceMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMinorVersionResponse
       */
      Models::ModifyInstanceMinorVersionResponse modifyInstanceMinorVersionWithOptions(const Models::ModifyInstanceMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the minor version of an ApsaraDB Tair (Redis® OSS-Compatible) database instance.
       *
       * @description The upgrade process varies by architecture. For more information, see [How minor version upgrades work](https://help.aliyun.com/document_detail/56450.html).
       * > * Before you call this operation, you can call [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) to query the current minor version of the instance.
       * > * During an instance switchover or primary/secondary switchover, the instance enters a read-only state for up to 60 seconds to wait for full data synchronization. Transient disconnections that last for a few seconds may also occur. Perform the upgrade during off-peak hours and ensure that your application has a reconnection mechanism.
       *
       * @param request ModifyInstanceMinorVersionRequest
       * @return ModifyInstanceMinorVersionResponse
       */
      Models::ModifyInstanceMinorVersionResponse modifyInstanceMinorVersion(const Models::ModifyInstanceMinorVersionRequest &request);

      /**
       * @summary Extends the retention period of the classic network endpoint for a Tair (Redis® OSS-Compatible) database instance that retains the classic network endpoint after a switch from the classic network to a VPC.
       *
       * @description For the corresponding console operation of this API, refer to [Modify the retention period of the original classic network endpoint](https://help.aliyun.com/document_detail/60062.html).
       * > For information about how to switch an instance from the classic network to a VPC, refer to [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html).
       *
       * @param request ModifyInstanceNetExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetExpireTimeResponse
       */
      Models::ModifyInstanceNetExpireTimeResponse modifyInstanceNetExpireTimeWithOptions(const Models::ModifyInstanceNetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the retention period of the classic network endpoint for a Tair (Redis® OSS-Compatible) database instance that retains the classic network endpoint after a switch from the classic network to a VPC.
       *
       * @description For the corresponding console operation of this API, refer to [Modify the retention period of the original classic network endpoint](https://help.aliyun.com/document_detail/60062.html).
       * > For information about how to switch an instance from the classic network to a VPC, refer to [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html).
       *
       * @param request ModifyInstanceNetExpireTimeRequest
       * @return ModifyInstanceNetExpireTimeResponse
       */
      Models::ModifyInstanceNetExpireTimeResponse modifyInstanceNetExpireTime(const Models::ModifyInstanceNetExpireTimeRequest &request);

      /**
       * @summary Applies a parameter template to a specified instance. This assigns the parameter values from the template to the specified instance. After you modify a parameter template, you must reapply it to the specified instance for the modified parameter values to take effect.
       *
       * @param request ModifyInstanceParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceParameterResponse
       */
      Models::ModifyInstanceParameterResponse modifyInstanceParameterWithOptions(const Models::ModifyInstanceParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies a parameter template to a specified instance. This assigns the parameter values from the template to the specified instance. After you modify a parameter template, you must reapply it to the specified instance for the modified parameter values to take effect.
       *
       * @param request ModifyInstanceParameterRequest
       * @return ModifyInstanceParameterResponse
       */
      Models::ModifyInstanceParameterResponse modifyInstanceParameter(const Models::ModifyInstanceParameterRequest &request);

      /**
       * @summary Enables the Transport Layer Security (TLS) encryption protocol for an ApsaraDB Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the corresponding console operation, see [Secure Sockets Layer (SSL) encryption settings](https://help.aliyun.com/document_detail/84898.html).
       * > To specify the minimum SSL version, you can invoke the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the relevant parameter.
       *
       * @param request ModifyInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSLWithOptions(const Models::ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Transport Layer Security (TLS) encryption protocol for an ApsaraDB Tair (Redis® OSS-Compatible) database instance.
       *
       * @description For the corresponding console operation, see [Secure Sockets Layer (SSL) encryption settings](https://help.aliyun.com/document_detail/84898.html).
       * > To specify the minimum SSL version, you can invoke the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the relevant parameter.
       *
       * @param request ModifyInstanceSSLRequest
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSL(const Models::ModifyInstanceSSLRequest &request);

      /**
       * @summary Modifies the specifications of an ApsaraDB Tair (Redis OSS-Compatible) instance.
       *
       * @description > For information about the execution process, impacts, feature limits, and billing of modifying instance specifications, refer to [Change instance configurations](https://help.aliyun.com/document_detail/26353.html).
       *
       * @param request ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications of an ApsaraDB Tair (Redis OSS-Compatible) instance.
       *
       * @description > For information about the execution process, impacts, feature limits, and billing of modifying instance specifications, refer to [Change instance configurations](https://help.aliyun.com/document_detail/26353.html).
       *
       * @param request ModifyInstanceSpecRequest
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpec(const Models::ModifyInstanceSpecRequest &request);

      /**
       * @summary Enables the transparent data encryption (TDE) feature for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance, with support for custom keys.
       *
       * @description > For more information about Transparent Data Encryption (TDE) and the impacts of enabling TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request ModifyInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceTDEResponse
       */
      Models::ModifyInstanceTDEResponse modifyInstanceTDEWithOptions(const Models::ModifyInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the transparent data encryption (TDE) feature for an ApsaraDB for Tair (Redis® OSS-Compatible) database instance, with support for custom keys.
       *
       * @description > For more information about Transparent Data Encryption (TDE) and the impacts of enabling TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request ModifyInstanceTDERequest
       * @return ModifyInstanceTDEResponse
       */
      Models::ModifyInstanceTDEResponse modifyInstanceTDE(const Models::ModifyInstanceTDERequest &request);

      /**
       * @summary Enables or initiates a shutdown of password-free access over a VPC. After this feature is enabled, cloud servers in the same VPC can connect to the ApsaraDB for Tair (Redis® OSS-Compatible) database instance without a password. Connections using a username and password are still supported.
       *
       * @description For information about how to perform this operation in the console, see [Enable password-free access](https://help.aliyun.com/document_detail/85168.html).
       *
       * @param request ModifyInstanceVpcAuthModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVpcAuthModeResponse
       */
      Models::ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthModeWithOptions(const Models::ModifyInstanceVpcAuthModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or initiates a shutdown of password-free access over a VPC. After this feature is enabled, cloud servers in the same VPC can connect to the ApsaraDB for Tair (Redis® OSS-Compatible) database instance without a password. Connections using a username and password are still supported.
       *
       * @description For information about how to perform this operation in the console, see [Enable password-free access](https://help.aliyun.com/document_detail/85168.html).
       *
       * @param request ModifyInstanceVpcAuthModeRequest
       * @return ModifyInstanceVpcAuthModeResponse
       */
      Models::ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthMode(const Models::ModifyInstanceVpcAuthModeRequest &request);

      /**
       * @summary Temporarily adjusts the internal network bandwidth of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance in a dedicated cluster.
       *
       * @description > * This operation applies only to instances created in dedicated clusters<props="china">. For information about the related console operations and limits, see [Modify bandwidth policy](https://help.aliyun.com/document_detail/206257.html). To adjust the bandwidth of a regular instance, call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation.
       *
       * @param request ModifyIntranetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIntranetAttributeResponse
       */
      Models::ModifyIntranetAttributeResponse modifyIntranetAttributeWithOptions(const Models::ModifyIntranetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Temporarily adjusts the internal network bandwidth of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance in a dedicated cluster.
       *
       * @description > * This operation applies only to instances created in dedicated clusters<props="china">. For information about the related console operations and limits, see [Modify bandwidth policy](https://help.aliyun.com/document_detail/206257.html). To adjust the bandwidth of a regular instance, call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation.
       *
       * @param request ModifyIntranetAttributeRequest
       * @return ModifyIntranetAttributeResponse
       */
      Models::ModifyIntranetAttributeResponse modifyIntranetAttribute(const Models::ModifyIntranetAttributeRequest &request);

      /**
       * @summary Modifies the settings of a parameter template.
       *
       * @param request ModifyParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterGroupResponse
       */
      Models::ModifyParameterGroupResponse modifyParameterGroupWithOptions(const Models::ModifyParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of a parameter template.
       *
       * @param request ModifyParameterGroupRequest
       * @return ModifyParameterGroupResponse
       */
      Models::ModifyParameterGroupResponse modifyParameterGroup(const Models::ModifyParameterGroupRequest &request);

      /**
       * @summary Modifies the resource group to which a Tair (Redis® OSS-Compatible) instance belongs.
       *
       * @description You can also perform this operation in the [Resource Management](https://resourcemanager.console.aliyun.com/resource-center) console. For more information, see [Move resources across resource groups](https://help.aliyun.com/document_detail/94487.html).
       * > A resource group is a mechanism for managing resources in groups within an Alibaba Cloud account. Resource groups help you address the complexity of resource grouping and authorization management within a single Alibaba Cloud account. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ModifyResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroupWithOptions(const Models::ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a Tair (Redis® OSS-Compatible) instance belongs.
       *
       * @description You can also perform this operation in the [Resource Management](https://resourcemanager.console.aliyun.com/resource-center) console. For more information, see [Move resources across resource groups](https://help.aliyun.com/document_detail/94487.html).
       * > A resource group is a mechanism for managing resources in groups within an Alibaba Cloud account. Resource groups help you address the complexity of resource grouping and authorization management within a single Alibaba Cloud account. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ModifyResourceGroupRequest
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroup(const Models::ModifyResourceGroupRequest &request);

      /**
       * @summary Settings the security groups in the whitelist of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description This operation overwrites the existing security groups in the instance whitelist and adds the security groups specified by the **SecurityGroupId** parameter to the whitelist. For the corresponding console operation, see [Add a security group](https://help.aliyun.com/document_detail/148267.html).
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfigurationWithOptions(const Models::ModifySecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Settings the security groups in the whitelist of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description This operation overwrites the existing security groups in the instance whitelist and adds the security groups specified by the **SecurityGroupId** parameter to the whitelist. For the corresponding console operation, see [Add a security group](https://help.aliyun.com/document_detail/148267.html).
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfiguration(const Models::ModifySecurityGroupConfigurationRequest &request);

      /**
       * @summary Configures the IP whitelist of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the console operation that corresponds to this API operation, see [Configure an IP whitelist](https://help.aliyun.com/document_detail/56464.html).
       *
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the IP whitelist of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the console operation that corresponds to this API operation, see [Configure an IP whitelist](https://help.aliyun.com/document_detail/56464.html).
       *
       * @param request ModifySecurityIpsRequest
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIps(const Models::ModifySecurityIpsRequest &request);

      /**
       * @summary 修改TairCustom实例基本参数
       *
       * @param request ModifyTairKVCacheCustomInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTairKVCacheCustomInstanceAttributeResponse
       */
      Models::ModifyTairKVCacheCustomInstanceAttributeResponse modifyTairKVCacheCustomInstanceAttributeWithOptions(const Models::ModifyTairKVCacheCustomInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改TairCustom实例基本参数
       *
       * @param request ModifyTairKVCacheCustomInstanceAttributeRequest
       * @return ModifyTairKVCacheCustomInstanceAttributeResponse
       */
      Models::ModifyTairKVCacheCustomInstanceAttributeResponse modifyTairKVCacheCustomInstanceAttribute(const Models::ModifyTairKVCacheCustomInstanceAttributeRequest &request);

      /**
       * @summary Performs a node operation. Currently, this operation supports modifying the execution time of a node.
       *
       * @param request ModifyTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfoWithOptions(const Models::ModifyTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a node operation. Currently, this operation supports modifying the execution time of a node.
       *
       * @param request ModifyTaskInfoRequest
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfo(const Models::ModifyTaskInfoRequest &request);

      /**
       * @summary Restarts the proxy nodes of a running Tair (Redis® OSS-Compatible) database instance.
       *
       * @description This operation is supported only for instances that use the cluster architecture in proxy mode or the read/write splitting architecture. For more information, see [Restart or rebuild proxy nodes](https://help.aliyun.com/document_detail/164224.html).
       *
       * @param request RebootProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootProxyResponse
       */
      Models::RebootProxyResponse rebootProxyWithOptions(const Models::RebootProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts the proxy nodes of a running Tair (Redis® OSS-Compatible) database instance.
       *
       * @description This operation is supported only for instances that use the cluster architecture in proxy mode or the read/write splitting architecture. For more information, see [Restart or rebuild proxy nodes](https://help.aliyun.com/document_detail/164224.html).
       *
       * @param request RebootProxyRequest
       * @return RebootProxyResponse
       */
      Models::RebootProxyResponse rebootProxy(const Models::RebootProxyRequest &request);

      /**
       * @summary Releases the direct connection address of a Tair (Redis® OSS-Compatible) cluster instance.
       *
       * @description A client can use the direct connection address to bypass the proxy and connect to a Tair (Redis® OSS-Compatible) database cluster in the same way as connecting to a native Redis cluster. This reduces link overhead and further improves the response speed of the instance. For more information, see [Enable direct connection access](https://help.aliyun.com/document_detail/146901.html).
       *
       * @param request ReleaseDirectConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseDirectConnectionResponse
       */
      Models::ReleaseDirectConnectionResponse releaseDirectConnectionWithOptions(const Models::ReleaseDirectConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the direct connection address of a Tair (Redis® OSS-Compatible) cluster instance.
       *
       * @description A client can use the direct connection address to bypass the proxy and connect to a Tair (Redis® OSS-Compatible) database cluster in the same way as connecting to a native Redis cluster. This reduces link overhead and further improves the response speed of the instance. For more information, see [Enable direct connection access](https://help.aliyun.com/document_detail/146901.html).
       *
       * @param request ReleaseDirectConnectionRequest
       * @return ReleaseDirectConnectionResponse
       */
      Models::ReleaseDirectConnectionResponse releaseDirectConnection(const Models::ReleaseDirectConnectionRequest &request);

      /**
       * @summary Releases the public endpoint of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the corresponding console operation, refer to [Release a public endpoint](https://help.aliyun.com/document_detail/125424.html).
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of a Tair (Redis® OSS-Compatible) instance.
       *
       * @description For the corresponding console operation, refer to [Release a public endpoint](https://help.aliyun.com/document_detail/125424.html).
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @summary Removes a child instance from a distributed instance and converts it to a standard instance. Data is retained.
       *
       * @description > After the conversion is complete, the child instance becomes a standard instance. You can find and manage the instance in the instance list of the corresponding region.
       *
       * @param request RemoveSubInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSubInstanceResponse
       */
      Models::RemoveSubInstanceResponse removeSubInstanceWithOptions(const Models::RemoveSubInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a child instance from a distributed instance and converts it to a standard instance. Data is retained.
       *
       * @description > After the conversion is complete, the child instance becomes a standard instance. You can find and manage the instance in the instance list of the corresponding region.
       *
       * @param request RemoveSubInstanceRequest
       * @return RemoveSubInstanceResponse
       */
      Models::RemoveSubInstanceResponse removeSubInstance(const Models::RemoveSubInstanceRequest &request);

      /**
       * @summary The bandwidth of ApsaraDB for Tair (Redis® OSS-Compatible) database instances has been upgraded to the pay-as-you-go pattern. This operation is no longer recommended.
       *
       * @description This operation is no longer recommended. You can adjust instance bandwidth through the console ([Modify instance bandwidth](https://help.aliyun.com/document_detail/102588.html)) or by calling [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html).
       *
       * @param request RenewAdditionalBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAdditionalBandwidthResponse
       */
      Models::RenewAdditionalBandwidthResponse renewAdditionalBandwidthWithOptions(const Models::RenewAdditionalBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The bandwidth of ApsaraDB for Tair (Redis® OSS-Compatible) database instances has been upgraded to the pay-as-you-go pattern. This operation is no longer recommended.
       *
       * @description This operation is no longer recommended. You can adjust instance bandwidth through the console ([Modify instance bandwidth](https://help.aliyun.com/document_detail/102588.html)) or by calling [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html).
       *
       * @param request RenewAdditionalBandwidthRequest
       * @return RenewAdditionalBandwidthResponse
       */
      Models::RenewAdditionalBandwidthResponse renewAdditionalBandwidth(const Models::RenewAdditionalBandwidthRequest &request);

      /**
       * @summary Creates a renewal order for a subscription ApsaraDB for Tair (Redis OSS-Compatible) instance.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a renewal order for a subscription ApsaraDB for Tair (Redis OSS-Compatible) instance.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Resets the password of an ApsaraDB for Tair (Redis® OSS-Compatible) database account.
       *
       * @description > This operation is supported only for Redis instances that run version 4.0 or later.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of an ApsaraDB for Tair (Redis® OSS-Compatible) database account.
       *
       * @description > This operation is supported only for Redis instances that run version 4.0 or later.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary 重置TairCustom上主机密码
       *
       * @param request ResetTairKVCacheCustomInstancePasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetTairKVCacheCustomInstancePasswordResponse
       */
      Models::ResetTairKVCacheCustomInstancePasswordResponse resetTairKVCacheCustomInstancePasswordWithOptions(const Models::ResetTairKVCacheCustomInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置TairCustom上主机密码
       *
       * @param request ResetTairKVCacheCustomInstancePasswordRequest
       * @return ResetTairKVCacheCustomInstancePasswordResponse
       */
      Models::ResetTairKVCacheCustomInstancePasswordResponse resetTairKVCacheCustomInstancePassword(const Models::ResetTairKVCacheCustomInstancePasswordRequest &request);

      /**
       * @summary 变配TairCustom的主机的磁盘
       *
       * @param request ResizeTairKVCacheCustomInstanceDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeTairKVCacheCustomInstanceDiskResponse
       */
      Models::ResizeTairKVCacheCustomInstanceDiskResponse resizeTairKVCacheCustomInstanceDiskWithOptions(const Models::ResizeTairKVCacheCustomInstanceDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变配TairCustom的主机的磁盘
       *
       * @param request ResizeTairKVCacheCustomInstanceDiskRequest
       * @return ResizeTairKVCacheCustomInstanceDiskResponse
       */
      Models::ResizeTairKVCacheCustomInstanceDiskResponse resizeTairKVCacheCustomInstanceDisk(const Models::ResizeTairKVCacheCustomInstanceDiskRequest &request);

      /**
       * @summary Restarts a running Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a running Tair (Redis® OSS-Compatible) database instance.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary 重启TairCustom的主机
       *
       * @param request RestartTairKVCacheCustomInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartTairKVCacheCustomInstanceResponse
       */
      Models::RestartTairKVCacheCustomInstanceResponse restartTairKVCacheCustomInstanceWithOptions(const Models::RestartTairKVCacheCustomInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启TairCustom的主机
       *
       * @param request RestartTairKVCacheCustomInstanceRequest
       * @return RestartTairKVCacheCustomInstanceResponse
       */
      Models::RestartTairKVCacheCustomInstanceResponse restartTairKVCacheCustomInstance(const Models::RestartTairKVCacheCustomInstanceRequest &request);

      /**
       * @summary Restores data from a specified backup file to a Tair (Redis OSS-Compatible) database instance.
       *
       * @description * If your instance is a Tair (Enterprise Edition) memory-optimized instance of the classic architecture, you can call this operation to restore specified keys in the current instance to a specific point in time accurate to seconds. This enables more fine-grained data restoration.
       * * For instances other than the preceding type, call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) or [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation to restore backup data to a new instance.
       *
       * @param request RestoreInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstanceWithOptions(const Models::RestoreInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores data from a specified backup file to a Tair (Redis OSS-Compatible) database instance.
       *
       * @description * If your instance is a Tair (Enterprise Edition) memory-optimized instance of the classic architecture, you can call this operation to restore specified keys in the current instance to a specific point in time accurate to seconds. This enables more fine-grained data restoration.
       * * For instances other than the preceding type, call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) or [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation to restore backup data to a new instance.
       *
       * @param request RestoreInstanceRequest
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstance(const Models::RestoreInstanceRequest &request);

      /**
       * @summary Manually retries an inspection task.
       *
       * @param request RetryInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryInspectionTaskResponse
       */
      Models::RetryInspectionTaskResponse retryInspectionTaskWithOptions(const Models::RetryInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually retries an inspection task.
       *
       * @param request RetryInspectionTaskRequest
       * @return RetryInspectionTaskResponse
       */
      Models::RetryInspectionTaskResponse retryInspectionTask(const Models::RetryInspectionTaskRequest &request);

      /**
       * @summary 启动TairCustom的主机
       *
       * @param request StartTairKVCacheCustomInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTairKVCacheCustomInstanceResponse
       */
      Models::StartTairKVCacheCustomInstanceResponse startTairKVCacheCustomInstanceWithOptions(const Models::StartTairKVCacheCustomInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动TairCustom的主机
       *
       * @param request StartTairKVCacheCustomInstanceRequest
       * @return StartTairKVCacheCustomInstanceResponse
       */
      Models::StartTairKVCacheCustomInstanceResponse startTairKVCacheCustomInstance(const Models::StartTairKVCacheCustomInstanceRequest &request);

      /**
       * @summary 停止TairCustom的主机
       *
       * @param request StopTairKVCacheCustomInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTairKVCacheCustomInstanceResponse
       */
      Models::StopTairKVCacheCustomInstanceResponse stopTairKVCacheCustomInstanceWithOptions(const Models::StopTairKVCacheCustomInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止TairCustom的主机
       *
       * @param request StopTairKVCacheCustomInstanceRequest
       * @return StopTairKVCacheCustomInstanceResponse
       */
      Models::StopTairKVCacheCustomInstanceResponse stopTairKVCacheCustomInstance(const Models::StopTairKVCacheCustomInstanceRequest &request);

      /**
       * @summary Performs a primary/secondary switchover to switch node roles. This operation is applicable to scenarios such as disaster recovery drills and nearest access for applications in multi-zone deployments.
       *
       * @description > For more information about nearest access for applications in multi-zone deployment scenarios, see [Scenario examples](https://help.aliyun.com/document_detail/164222.html).
       * When you call this operation, the instance must be of the high-availability or dual-replica type.
       * Calling this operation has the following impacts:
       * * After the node role switchover is triggered, the data node on which the switchover is performed will enter a read-only state for a few seconds and experience transient disconnections. Make sure that your application has a reconnection mechanism.
       * * While the instance is in the switching state, you cannot perform instance-level operations, such as changing configurations or migrating zones.
       *
       * @param request SwitchInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchInstanceHAResponse
       */
      Models::SwitchInstanceHAResponse switchInstanceHAWithOptions(const Models::SwitchInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a primary/secondary switchover to switch node roles. This operation is applicable to scenarios such as disaster recovery drills and nearest access for applications in multi-zone deployments.
       *
       * @description > For more information about nearest access for applications in multi-zone deployment scenarios, see [Scenario examples](https://help.aliyun.com/document_detail/164222.html).
       * When you call this operation, the instance must be of the high-availability or dual-replica type.
       * Calling this operation has the following impacts:
       * * After the node role switchover is triggered, the data node on which the switchover is performed will enter a read-only state for a few seconds and experience transient disconnections. Make sure that your application has a reconnection mechanism.
       * * While the instance is in the switching state, you cannot perform instance-level operations, such as changing configurations or migrating zones.
       *
       * @param request SwitchInstanceHARequest
       * @return SwitchInstanceHAResponse
       */
      Models::SwitchInstanceHAResponse switchInstanceHA(const Models::SwitchInstanceHARequest &request);

      /**
       * @summary Enables or shuts down the proxy mode for a Tair (Redis® OSS-Compatible) database cluster instance in a dedicated cluster.
       *
       * @description For more information about the proxy mode, see [Proxy features](https://help.aliyun.com/document_detail/142959.html).
       * Before calling this operation, ensure that the following conditions are met:
       * * The instance is created in a dedicated cluster. For more information, see [ApsaraDB MyBase dedicated cluster](https://help.aliyun.com/document_detail/141455.html).
       * * The instance uses the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
       * > Before calling this operation, call the [DescribeDedicatedClusterInstanceList](https://help.aliyun.com/document_detail/473867.html) operation and check the value of the **ProxyCount** response parameter to determine whether the proxy mode is enabled for the instance. For example, a value of 0 indicates that the proxy mode is disabled. A value greater than 0 indicates that the proxy mode is enabled.
       *
       * @param request SwitchInstanceProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchInstanceProxyResponse
       */
      Models::SwitchInstanceProxyResponse switchInstanceProxyWithOptions(const Models::SwitchInstanceProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or shuts down the proxy mode for a Tair (Redis® OSS-Compatible) database cluster instance in a dedicated cluster.
       *
       * @description For more information about the proxy mode, see [Proxy features](https://help.aliyun.com/document_detail/142959.html).
       * Before calling this operation, ensure that the following conditions are met:
       * * The instance is created in a dedicated cluster. For more information, see [ApsaraDB MyBase dedicated cluster](https://help.aliyun.com/document_detail/141455.html).
       * * The instance uses the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
       * > Before calling this operation, call the [DescribeDedicatedClusterInstanceList](https://help.aliyun.com/document_detail/473867.html) operation and check the value of the **ProxyCount** response parameter to determine whether the proxy mode is enabled for the instance. For example, a value of 0 indicates that the proxy mode is disabled. A value greater than 0 indicates that the proxy mode is enabled.
       *
       * @param request SwitchInstanceProxyRequest
       * @return SwitchInstanceProxyResponse
       */
      Models::SwitchInstanceProxyResponse switchInstanceProxy(const Models::SwitchInstanceProxyRequest &request);

      /**
       * @summary Switches an instance to a specified zone.
       *
       * @description This operation is supported only for cloud-native architecture instances.
       *
       * @param request SwitchInstanceToTargetZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchInstanceToTargetZoneResponse
       */
      Models::SwitchInstanceToTargetZoneResponse switchInstanceToTargetZoneWithOptions(const Models::SwitchInstanceToTargetZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches an instance to a specified zone.
       *
       * @description This operation is supported only for cloud-native architecture instances.
       *
       * @param request SwitchInstanceToTargetZoneRequest
       * @return SwitchInstanceToTargetZoneResponse
       */
      Models::SwitchInstanceToTargetZoneResponse switchInstanceToTargetZone(const Models::SwitchInstanceToTargetZoneRequest &request);

      /**
       * @summary Performs an impersonation of a zone-level failure of an active ApsaraDB for Tair (Redis® OSS-Compatible) cluster architecture database instance, triggering an automatic switchover to the secondary zone.
       *
       * @description - This operation applies only to active multi-zone (dual-zone) cluster architecture instances.
       * - The node subjected to failure impersonation automatically recovers later. However, the primary node is located in the secondary zone and the secondary node is located in the primary zone. This may cause cross-data-center access between the instance and other services. To resolve this issue, you can perform a manual switchover of zones on the Service Availability page in the console.
       *
       * @param request SwitchInstanceZoneFailOverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchInstanceZoneFailOverResponse
       */
      Models::SwitchInstanceZoneFailOverResponse switchInstanceZoneFailOverWithOptions(const Models::SwitchInstanceZoneFailOverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs an impersonation of a zone-level failure of an active ApsaraDB for Tair (Redis® OSS-Compatible) cluster architecture database instance, triggering an automatic switchover to the secondary zone.
       *
       * @description - This operation applies only to active multi-zone (dual-zone) cluster architecture instances.
       * - The node subjected to failure impersonation automatically recovers later. However, the primary node is located in the secondary zone and the secondary node is located in the primary zone. This may cause cross-data-center access between the instance and other services. To resolve this issue, you can perform a manual switchover of zones on the Service Availability page in the console.
       *
       * @param request SwitchInstanceZoneFailOverRequest
       * @return SwitchInstanceZoneFailOverResponse
       */
      Models::SwitchInstanceZoneFailOverResponse switchInstanceZoneFailOver(const Models::SwitchInstanceZoneFailOverRequest &request);

      /**
       * @summary Switches the virtual private cloud (VPC) or vSwitch of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. If the instance uses the classic network, the instance is switched to a VPC.
       *
       * @param request SwitchNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchNetworkResponse
       */
      Models::SwitchNetworkResponse switchNetworkWithOptions(const Models::SwitchNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the virtual private cloud (VPC) or vSwitch of an ApsaraDB for Tair (Redis® OSS-Compatible) database instance. If the instance uses the classic network, the instance is switched to a VPC.
       *
       * @param request SwitchNetworkRequest
       * @return SwitchNetworkResponse
       */
      Models::SwitchNetworkResponse switchNetwork(const Models::SwitchNetworkRequest &request);

      /**
       * @summary Before you use Data Transmission Service (DTS) to migrate or synchronize data of an ApsaraDB for Tair (Redis OSS-Compatible) database instance, you can invoke this operation to restrict the instance so that it does not execute Upgrade/Downgrade operations. This prevents data migration or synchronization nodes from becoming failed due to Upgrade/Downgrade.
       *
       * @description - This operation applies only to Classic Edition instances.
       * - After the data migration or synchronization task is completed, you can call this operation again to remove the specification change restrictions.
       *
       * @param request SyncDtsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDtsStatusResponse
       */
      Models::SyncDtsStatusResponse syncDtsStatusWithOptions(const Models::SyncDtsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Before you use Data Transmission Service (DTS) to migrate or synchronize data of an ApsaraDB for Tair (Redis OSS-Compatible) database instance, you can invoke this operation to restrict the instance so that it does not execute Upgrade/Downgrade operations. This prevents data migration or synchronization nodes from becoming failed due to Upgrade/Downgrade.
       *
       * @description - This operation applies only to Classic Edition instances.
       * - After the data migration or synchronization task is completed, you can call this operation again to remove the specification change restrictions.
       *
       * @param request SyncDtsStatusRequest
       * @return SyncDtsStatusResponse
       */
      Models::SyncDtsStatusResponse syncDtsStatus(const Models::SyncDtsStatusRequest &request);

      /**
       * @summary Attaches labels to one or more ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
       *
       * @description If you have a large number of instances, you can create multiple labels and attach different labels to the instances for categorization. You can then filter instances by label.
       * * A label consists of a key-value pair. The key must be unique within the same account and region, while the value has no such restriction.
       * * If the label in Settings does not exist, automatic creation of the label is performed and it is attached to the target instance.
       * * If the instance is already attached to a label with the same key, the new label overwrites the existing one.
       * * You can attach up to 20 labels to each instance.
       * * You can attach labels to up to 50 instances each time you invoke the API.
       * For the corresponding console operation, see [Create a label](https://help.aliyun.com/document_detail/118779.html).
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches labels to one or more ApsaraDB for Tair (Redis® OSS-Compatible) database instances.
       *
       * @description If you have a large number of instances, you can create multiple labels and attach different labels to the instances for categorization. You can then filter instances by label.
       * * A label consists of a key-value pair. The key must be unique within the same account and region, while the value has no such restriction.
       * * If the label in Settings does not exist, automatic creation of the label is performed and it is attached to the target instance.
       * * If the instance is already attached to a label with the same key, the new label overwrites the existing one.
       * * You can attach up to 20 labels to each instance.
       * * You can attach labels to up to 50 instances each time you invoke the API.
       * For the corresponding console operation, see [Create a label](https://help.aliyun.com/document_detail/118779.html).
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Changes the billing method of a Tair (Redis® OSS-Compatible) database instance. You can switch between the pay-as-you-go and subscription billing methods.
       *
       * @description Before you call this operation, make sure that you understand the precautions and billing instructions. For more information, see:
       * * [Switch from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/54542.html).
       * * [Switch from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/211549.html).
       *
       * @param request TransformInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformInstanceChargeTypeResponse
       */
      Models::TransformInstanceChargeTypeResponse transformInstanceChargeTypeWithOptions(const Models::TransformInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a Tair (Redis® OSS-Compatible) database instance. You can switch between the pay-as-you-go and subscription billing methods.
       *
       * @description Before you call this operation, make sure that you understand the precautions and billing instructions. For more information, see:
       * * [Switch from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/54542.html).
       * * [Switch from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/211549.html).
       *
       * @param request TransformInstanceChargeTypeRequest
       * @return TransformInstanceChargeTypeResponse
       */
      Models::TransformInstanceChargeTypeResponse transformInstanceChargeType(const Models::TransformInstanceChargeTypeRequest &request);

      /**
       * @summary Converts a classic architecture instance to cloud-native.
       *
       * @param request TransformToEcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformToEcsResponse
       */
      Models::TransformToEcsResponse transformToEcsWithOptions(const Models::TransformToEcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a classic architecture instance to cloud-native.
       *
       * @param request TransformToEcsRequest
       * @return TransformToEcsResponse
       */
      Models::TransformToEcsResponse transformToEcs(const Models::TransformToEcsRequest &request);

      /**
       * @summary Transforms a pay-as-you-go Tair (Redis® OSS-Compatible) database instance into a subscription instance.
       *
       * @description For the corresponding console operation, see [Change the billing method to subscription](https://help.aliyun.com/document_detail/54542.html).
       *
       * @param request TransformToPrePaidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformToPrePaidResponse
       */
      Models::TransformToPrePaidResponse transformToPrePaidWithOptions(const Models::TransformToPrePaidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transforms a pay-as-you-go Tair (Redis® OSS-Compatible) database instance into a subscription instance.
       *
       * @description For the corresponding console operation, see [Change the billing method to subscription](https://help.aliyun.com/document_detail/54542.html).
       *
       * @param request TransformToPrePaidRequest
       * @return TransformToPrePaidResponse
       */
      Models::TransformToPrePaidResponse transformToPrePaid(const Models::TransformToPrePaidRequest &request);

      /**
       * @summary Unlocks a write-locked instance. After the instance is unlocked, the instance supports both reading and writing data.
       *
       * @param request UnlockDBInstanceWriteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockDBInstanceWriteResponse
       */
      Models::UnlockDBInstanceWriteResponse unlockDBInstanceWriteWithOptions(const Models::UnlockDBInstanceWriteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a write-locked instance. After the instance is unlocked, the instance supports both reading and writing data.
       *
       * @param request UnlockDBInstanceWriteRequest
       * @return UnlockDBInstanceWriteResponse
       */
      Models::UnlockDBInstanceWriteResponse unlockDBInstanceWrite(const Models::UnlockDBInstanceWriteRequest &request);

      /**
       * @summary Removes labels from an ApsaraDB for Tair (Redis OSS-compatible) database instance.
       *
       * @description * You can remove up to 20 tags at a time.
       * * If a tag is removed from an instance and is not attached to any other instances, the tag is automatically deleted.
       * For the corresponding console operation, see [Remove tags](https://help.aliyun.com/document_detail/119157.html).
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes labels from an ApsaraDB for Tair (Redis OSS-compatible) database instance.
       *
       * @description * You can remove up to 20 tags at a time.
       * * If a tag is removed from an instance and is not attached to any other instances, the tag is automatically deleted.
       * For the corresponding console operation, see [Remove tags](https://help.aliyun.com/document_detail/119157.html).
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades the proxy nodes of a cluster instance to the latest version.
       *
       * @description The upgrade process and impact vary depending on the architecture. For more information, see [Minor engine version update](https://help.aliyun.com/document_detail/56450.html).
       * > * Before you call this operation, you can call [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) to query the current minor version of the proxy nodes.
       * > * The upgrade causes connection interruptions. Perform the upgrade during off-peak hours and make sure that your application has a reconnection mechanism. For more information about the impact, see [Minor engine version update](https://help.aliyun.com/document_detail/56450.html).
       *
       * @param request UpgradeProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeProxyResponse
       */
      Models::UpgradeProxyResponse upgradeProxyWithOptions(const Models::UpgradeProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the proxy nodes of a cluster instance to the latest version.
       *
       * @description The upgrade process and impact vary depending on the architecture. For more information, see [Minor engine version update](https://help.aliyun.com/document_detail/56450.html).
       * > * Before you call this operation, you can call [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) to query the current minor version of the proxy nodes.
       * > * The upgrade causes connection interruptions. Perform the upgrade during off-peak hours and make sure that your application has a reconnection mechanism. For more information about the impact, see [Minor engine version update](https://help.aliyun.com/document_detail/56450.html).
       *
       * @param request UpgradeProxyRequest
       * @return UpgradeProxyResponse
       */
      Models::UpgradeProxyResponse upgradeProxy(const Models::UpgradeProxyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
