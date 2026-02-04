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
       * @summary Adds one or more data shards to a Tair cluster instance.
       *
       * @description This operation is available only for cluster instances that use cloud disks.
       *
       * @param request AddShardingNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddShardingNodeResponse
       */
      Models::AddShardingNodeResponse addShardingNodeWithOptions(const Models::AddShardingNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more data shards to a Tair cluster instance.
       *
       * @description This operation is available only for cluster instances that use cloud disks.
       *
       * @param request AddShardingNodeRequest
       * @return AddShardingNodeResponse
       */
      Models::AddShardingNodeResponse addShardingNode(const Models::AddShardingNodeRequest &request);

      /**
       * @summary Applies for a private endpoint for a Tair (Redis OSS-compatible) instance.
       *
       * @description Clients can bypass proxy nodes and use private endpoints to connect to cluster instances. This is similar to the connection to native Redis clusters. The direct connection mode can reduce communication overheads and the response time of Tair (Redis OSS-compatible).
       * To call this operation, make sure that the instance meets the following requirements:
       * *   The instance is a cluster instance.
       * *   The instance is deployed in classic mode.
       * *   The instance is deployed in a virtual private cloud (VPC). If the instance is deployed in the classic network, you can call the [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html) operation to change the network type to VPC.
       * *   SSL encryption is disabled for the instance. If SSL encryption is enabled, you can call the [ModifyInstanceSSL](https://help.aliyun.com/document_detail/473838.html) operation to disable SSL encryption.
       *
       * @param request AllocateDirectConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateDirectConnectionResponse
       */
      Models::AllocateDirectConnectionResponse allocateDirectConnectionWithOptions(const Models::AllocateDirectConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a private endpoint for a Tair (Redis OSS-compatible) instance.
       *
       * @description Clients can bypass proxy nodes and use private endpoints to connect to cluster instances. This is similar to the connection to native Redis clusters. The direct connection mode can reduce communication overheads and the response time of Tair (Redis OSS-compatible).
       * To call this operation, make sure that the instance meets the following requirements:
       * *   The instance is a cluster instance.
       * *   The instance is deployed in classic mode.
       * *   The instance is deployed in a virtual private cloud (VPC). If the instance is deployed in the classic network, you can call the [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html) operation to change the network type to VPC.
       * *   SSL encryption is disabled for the instance. If SSL encryption is enabled, you can call the [ModifyInstanceSSL](https://help.aliyun.com/document_detail/473838.html) operation to disable SSL encryption.
       *
       * @param request AllocateDirectConnectionRequest
       * @return AllocateDirectConnectionResponse
       */
      Models::AllocateDirectConnectionResponse allocateDirectConnection(const Models::AllocateDirectConnectionRequest &request);

      /**
       * @summary Applies for a public endpoint for an ApsaraDB for Redis instance.
       *
       * @description You can also apply for public endpoints in the ApsaraDB for Redis console. For more information, see [Use a public endpoint to connect to an ApsaraDB for Redis instance](https://help.aliyun.com/document_detail/43850.html).
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a public endpoint for an ApsaraDB for Redis instance.
       *
       * @description You can also apply for public endpoints in the ApsaraDB for Redis console. For more information, see [Use a public endpoint to connect to an ApsaraDB for Redis instance](https://help.aliyun.com/document_detail/43850.html).
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @summary Cancels O\\\\\\&M events at a time.
       *
       * @description O\\&M events cannot be canceled in the following scenarios:
       * *   The allowCancel parameter is set to 0.
       * *   The current time is later than the start time of the O\\&M event.
       * *   The state value of the O\\&M event is not 3.
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels O\\\\\\&M events at a time.
       *
       * @description O\\&M events cannot be canceled in the following scenarios:
       * *   The allowCancel parameter is set to 0.
       * *   The current time is later than the start time of the O\\&M event.
       * *   The state value of the O\\&M event is not 3.
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Queries whether a Tair (Redis OSS-compatible) instance has the permissions to use Key Management Service (KMS).
       *
       * @description *   For information about Transparent Data Encryption (TDE) and the usage notes of TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       * *   If the Tair (Redis OSS-compatible) instance is authorized to use KMS, you can call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) operation to enable TDE.
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(const Models::CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a Tair (Redis OSS-compatible) instance has the permissions to use Key Management Service (KMS).
       *
       * @description *   For information about Transparent Data Encryption (TDE) and the usage notes of TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       * *   If the Tair (Redis OSS-compatible) instance is authorized to use KMS, you can call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) operation to enable TDE.
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(const Models::CheckCloudResourceAuthorizedRequest &request);

      /**
       * @summary Creates an account that has specific permissions for a Tair (Redis OSS-compatible) instance.
       *
       * @description *   This operation is supported only for instances that are compatible with Redis 4.0 or later.
       * *   The instance must be in the running state.
       * *   You can create up to 18 accounts for an instance.
       * >  For more information about how to create an account in the console, see [Manage database accounts](https://help.aliyun.com/document_detail/92665.html).
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account that has specific permissions for a Tair (Redis OSS-compatible) instance.
       *
       * @description *   This operation is supported only for instances that are compatible with Redis 4.0 or later.
       * *   The instance must be in the running state.
       * *   You can create up to 18 accounts for an instance.
       * >  For more information about how to create an account in the console, see [Manage database accounts](https://help.aliyun.com/document_detail/92665.html).
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Backs up a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also back up an instance in the Tair (Redis OSS-compatible) console. For more information, see [Backup and recovery](https://help.aliyun.com/document_detail/43886.html).
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Backs up a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also back up an instance in the Tair (Redis OSS-compatible) console. For more information, see [Backup and recovery](https://help.aliyun.com/document_detail/43886.html).
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates a cache analysis task.
       *
       * @description This operation is no longer available. Use the new operation. For more information, see [Real-time key statistics and offline key analysis](https://help.aliyun.com/document_detail/184226.html).
       *
       * @param request CreateCacheAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCacheAnalysisTaskResponse
       */
      Models::CreateCacheAnalysisTaskResponse createCacheAnalysisTaskWithOptions(const Models::CreateCacheAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cache analysis task.
       *
       * @description This operation is no longer available. Use the new operation. For more information, see [Real-time key statistics and offline key analysis](https://help.aliyun.com/document_detail/184226.html).
       *
       * @param request CreateCacheAnalysisTaskRequest
       * @return CreateCacheAnalysisTaskResponse
       */
      Models::CreateCacheAnalysisTaskResponse createCacheAnalysisTask(const Models::CreateCacheAnalysisTaskRequest &request);

      /**
       * @summary Converts an existing Tair DRAM-based classic instance to the first child instance of a distributed instance.
       *
       * @description You can call this operation to convert an existing instance to the first child instance of a distributed instance. After the instance is converted, the distributed instance is created. Before you call this operation, make sure that the following requirements are met:
       * *   The instance that you want to convert must be a Tair [DRAM-based](https://help.aliyun.com/document_detail/126164.html) instance that uses the classic deployment mode.
       * *   If the existing instance is a cluster instance, the direct connection mode must be disabled for the instance. For more information, see [Release a private endpoint](https://help.aliyun.com/document_detail/150047.html).
       * >  You can also call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation to create an instance that is specified as the first child instance of a distributed instance. After the child instance is created, the distributed instance to which the child instance belongs is created.
       *
       * @param request CreateGlobalDistributeCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalDistributeCacheResponse
       */
      Models::CreateGlobalDistributeCacheResponse createGlobalDistributeCacheWithOptions(const Models::CreateGlobalDistributeCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts an existing Tair DRAM-based classic instance to the first child instance of a distributed instance.
       *
       * @description You can call this operation to convert an existing instance to the first child instance of a distributed instance. After the instance is converted, the distributed instance is created. Before you call this operation, make sure that the following requirements are met:
       * *   The instance that you want to convert must be a Tair [DRAM-based](https://help.aliyun.com/document_detail/126164.html) instance that uses the classic deployment mode.
       * *   If the existing instance is a cluster instance, the direct connection mode must be disabled for the instance. For more information, see [Release a private endpoint](https://help.aliyun.com/document_detail/150047.html).
       * >  You can also call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation to create an instance that is specified as the first child instance of a distributed instance. After the child instance is created, the distributed instance to which the child instance belongs is created.
       *
       * @param request CreateGlobalDistributeCacheRequest
       * @return CreateGlobalDistributeCacheResponse
       */
      Models::CreateGlobalDistributeCacheResponse createGlobalDistributeCache(const Models::CreateGlobalDistributeCacheRequest &request);

      /**
       * @summary Creates a global IP whitelist template.
       *
       * @param request CreateGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalSecurityIPGroupResponse
       */
      Models::CreateGlobalSecurityIPGroupResponse createGlobalSecurityIPGroupWithOptions(const Models::CreateGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a global IP whitelist template.
       *
       * @param request CreateGlobalSecurityIPGroupRequest
       * @return CreateGlobalSecurityIPGroupResponse
       */
      Models::CreateGlobalSecurityIPGroupResponse createGlobalSecurityIPGroup(const Models::CreateGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Creates a Tair (Redis OSS-compatible) instance. If you want to create a Tair (Enterprise Edition) cloud-native instance, you can call the CreateTairInstance operation.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
       * You can call this operation to create a Tair (Redis OSS-compatible) instance or a classic Tair DRAM-based instance. To create a cloud-native Tair instance, call the [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation.
       * > For more information about how to create an instance that meets your requirements in the Tair (Redis OSS-compatible) console, see [Step 1: Create an instance](https://help.aliyun.com/document_detail/26351.html).
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Tair (Redis OSS-compatible) instance. If you want to create a Tair (Enterprise Edition) cloud-native instance, you can call the CreateTairInstance operation.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
       * You can call this operation to create a Tair (Redis OSS-compatible) instance or a classic Tair DRAM-based instance. To create a cloud-native Tair instance, call the [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation.
       * > For more information about how to create an instance that meets your requirements in the Tair (Redis OSS-compatible) console, see [Step 1: Create an instance](https://help.aliyun.com/document_detail/26351.html).
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates multiple Tair (Redis OSS-compatible) instances at a time.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
       * >  You can call this operation to create classic Redis Open-Source Edition instances or classic Tair DRAM-based instances. We recommend that you use an API operation for creating a single instance:
       * *   [CreateInstance](https://help.aliyun.com/document_detail/473757.html): creates a Redis Open-Source instance or a classic Tair DRAM-based instance.
       * *   [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html): creates a Tair (Enterprise Edition) instance. The instance can be a DRAM-based, persistent memory-optimized, or ESSD/SSD-based instance.
       *
       * @param request CreateInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstancesResponse
       */
      Models::CreateInstancesResponse createInstancesWithOptions(const Models::CreateInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple Tair (Redis OSS-compatible) instances at a time.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
       * >  You can call this operation to create classic Redis Open-Source Edition instances or classic Tair DRAM-based instances. We recommend that you use an API operation for creating a single instance:
       * *   [CreateInstance](https://help.aliyun.com/document_detail/473757.html): creates a Redis Open-Source instance or a classic Tair DRAM-based instance.
       * *   [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html): creates a Tair (Enterprise Edition) instance. The instance can be a DRAM-based, persistent memory-optimized, or ESSD/SSD-based instance.
       *
       * @param request CreateInstancesRequest
       * @return CreateInstancesResponse
       */
      Models::CreateInstancesResponse createInstances(const Models::CreateInstancesRequest &request);

      /**
       * @summary Creates a parameter template.
       *
       * @param request CreateParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroupWithOptions(const Models::CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a parameter template.
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
       * @summary Creates a Tair (Enterprise Edition) cloud-native instance.
       *
       * @description For information about instance selection, see [Instructions for selecting an appropriate Tair (Redis OSS-compatible) instance](https://help.aliyun.com/document_detail/223808.html).
       * Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
       * > 
       * *   For information about how to create an instance in the console, see [Step 1: Create an instance](https://help.aliyun.com/document_detail/26351.html).
       * *   To create other types of instances, such as Redis Open-Source Edition instances or [Tair DRAM-based](https://help.aliyun.com/document_detail/126164.html) instances, you can call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation.
       *
       * @param request CreateTairInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTairInstanceResponse
       */
      Models::CreateTairInstanceResponse createTairInstanceWithOptions(const Models::CreateTairInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Tair (Enterprise Edition) cloud-native instance.
       *
       * @description For information about instance selection, see [Instructions for selecting an appropriate Tair (Redis OSS-compatible) instance](https://help.aliyun.com/document_detail/223808.html).
       * Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of Tair (Redis OSS-compatible).
       * > 
       * *   For information about how to create an instance in the console, see [Step 1: Create an instance](https://help.aliyun.com/document_detail/26351.html).
       * *   To create other types of instances, such as Redis Open-Source Edition instances or [Tair DRAM-based](https://help.aliyun.com/document_detail/126164.html) instances, you can call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) operation.
       *
       * @param request CreateTairInstanceRequest
       * @return CreateTairInstanceResponse
       */
      Models::CreateTairInstanceResponse createTairInstance(const Models::CreateTairInstanceRequest &request);

      /**
       * @summary Creates a Tair VNode instance.
       *
       * @param request CreateTairKVCacheVNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTairKVCacheVNodeResponse
       */
      Models::CreateTairKVCacheVNodeResponse createTairKVCacheVNodeWithOptions(const Models::CreateTairKVCacheVNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Tair VNode instance.
       *
       * @param request CreateTairKVCacheVNodeRequest
       * @return CreateTairKVCacheVNodeResponse
       */
      Models::CreateTairKVCacheVNodeResponse createTairKVCacheVNode(const Models::CreateTairKVCacheVNodeRequest &request);

      /**
       * @summary Deletes an account from a Tair (Redis OSS-compatible) instance.
       *
       * @description *   This operation is supported only for instances that are compatible with Redis 4.0 or later.
       * *   The instance must be in the Running state.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an account from a Tair (Redis OSS-compatible) instance.
       *
       * @description *   This operation is supported only for instances that are compatible with Redis 4.0 or later.
       * *   The instance must be in the Running state.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes a specified backup set. However, you can delete only backup sets that are manually backed up.
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified backup set. However, you can delete only backup sets that are manually backed up.
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Deletes a global IP whitelist template.
       *
       * @description Before you delete an IP whitelist template, you must unbind (disassociate) the instances that are currently associated with the template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroupWithOptions(const Models::DeleteGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global IP whitelist template.
       *
       * @description Before you delete an IP whitelist template, you must unbind (disassociate) the instances that are currently associated with the template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroup(const Models::DeleteGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Release the Redis instance.
       *
       * @description For more information about how to perform the corresponding operation in the console, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
       * Before you call this operation, make sure that the following requirements are met:
       * *   The instance is in the running state.
       * *   The instance is charged on a pay-as-you-go basis.
       * >  You cannot call this operation to release a subscription instance, which is automatically released when it expires. To release a subscription instance before it expires, submit a ticket.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Release the Redis instance.
       *
       * @description For more information about how to perform the corresponding operation in the console, see [Release an instance](https://help.aliyun.com/document_detail/43882.html).
       * Before you call this operation, make sure that the following requirements are met:
       * *   The instance is in the running state.
       * *   The instance is charged on a pay-as-you-go basis.
       * >  You cannot call this operation to release a subscription instance, which is automatically released when it expires. To release a subscription instance before it expires, submit a ticket.
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
       * @summary Removes one or more data shards from a Tair (Redis OSS-compatible) cluster instance.
       *
       * @description You can also remove data shards from an instance in the Tair (Redis OSS-compatible) console. For more information, see [Adjust the number of shards for an instance with cloud disks](https://help.aliyun.com/document_detail/198082.html).\\
       * Before you call this operation, make sure that the instance meets the following requirements:
       * *   The instance is a persistent memory-optimized instance in the cluster architecture. For more information about persistent memory-optimized instances, see [Persistent memory-optimized instances](https://help.aliyun.com/document_detail/183956.html).
       * *   The instance has more than one data shard.
       *
       * @param request DeleteShardingNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteShardingNodeResponse
       */
      Models::DeleteShardingNodeResponse deleteShardingNodeWithOptions(const Models::DeleteShardingNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more data shards from a Tair (Redis OSS-compatible) cluster instance.
       *
       * @description You can also remove data shards from an instance in the Tair (Redis OSS-compatible) console. For more information, see [Adjust the number of shards for an instance with cloud disks](https://help.aliyun.com/document_detail/198082.html).\\
       * Before you call this operation, make sure that the instance meets the following requirements:
       * *   The instance is a persistent memory-optimized instance in the cluster architecture. For more information about persistent memory-optimized instances, see [Persistent memory-optimized instances](https://help.aliyun.com/document_detail/183956.html).
       * *   The instance has more than one data shard.
       *
       * @param request DeleteShardingNodeRequest
       * @return DeleteShardingNodeResponse
       */
      Models::DeleteShardingNodeResponse deleteShardingNode(const Models::DeleteShardingNodeRequest &request);

      /**
       * @summary Queries a specified account of a Tair (Redis OSS-compatible) instance.
       *
       * @description >  Only Tair (Redis OSS-compatible) instances of Redis 4.0 or later are supported.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified account of a Tair (Redis OSS-compatible) instance.
       *
       * @description >  Only Tair (Redis OSS-compatible) instances of Redis 4.0 or later are supported.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the O\\\\\\&M task configurations of an instance.
       *
       * @param request DescribeActiveOperationMaintenanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintenanceConfigResponse
       */
      Models::DescribeActiveOperationMaintenanceConfigResponse describeActiveOperationMaintenanceConfigWithOptions(const Models::DescribeActiveOperationMaintenanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the O\\\\\\&M task configurations of an instance.
       *
       * @param request DescribeActiveOperationMaintenanceConfigRequest
       * @return DescribeActiveOperationMaintenanceConfigResponse
       */
      Models::DescribeActiveOperationMaintenanceConfigResponse describeActiveOperationMaintenanceConfig(const Models::DescribeActiveOperationMaintenanceConfigRequest &request);

      /**
       * @summary Queries the details of the O\\&M tasks of a Tair (Redis OSS-compatible) instance.
       *
       * @description After you have called this API operation and queried the information about a specific O&M task, you can also call the [ModifyActiveOperationTask](https://help.aliyun.com/document_detail/473864.html) operation to modify the scheduled switchover time of the O&M task.
       *
       * @param request DescribeActiveOperationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskResponse
       */
      Models::DescribeActiveOperationTaskResponse describeActiveOperationTaskWithOptions(const Models::DescribeActiveOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the O\\&M tasks of a Tair (Redis OSS-compatible) instance.
       *
       * @description After you have called this API operation and queried the information about a specific O&M task, you can also call the [ModifyActiveOperationTask](https://help.aliyun.com/document_detail/473864.html) operation to modify the scheduled switchover time of the O&M task.
       *
       * @param request DescribeActiveOperationTaskRequest
       * @return DescribeActiveOperationTaskResponse
       */
      Models::DescribeActiveOperationTaskResponse describeActiveOperationTask(const Models::DescribeActiveOperationTaskRequest &request);

      /**
       * @summary Queries the number of O\\\\\\&M tasks on a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCountWithOptions(const Models::DescribeActiveOperationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of O\\\\\\&M tasks on a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCount(const Models::DescribeActiveOperationTaskCountRequest &request);

      /**
       * @summary Queries the O\\\\\\\\\\\\&M event details of an instance.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the O\\\\\\\\\\\\&M event details of an instance.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Queries the audit log configurations of a Tair (Redis OSS-compatible) instance. The configurations include whether the audit log feature is enabled and the retention period of audit logs.
       *
       * @description Before you call this operation, you must enable the audit log feature for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html) or [Enable the audit log feature](https://help.aliyun.com/document_detail/102015.html).
       *
       * @param request DescribeAuditLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogConfigResponse
       */
      Models::DescribeAuditLogConfigResponse describeAuditLogConfigWithOptions(const Models::DescribeAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audit log configurations of a Tair (Redis OSS-compatible) instance. The configurations include whether the audit log feature is enabled and the retention period of audit logs.
       *
       * @description Before you call this operation, you must enable the audit log feature for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html) or [Enable the audit log feature](https://help.aliyun.com/document_detail/102015.html).
       *
       * @param request DescribeAuditLogConfigRequest
       * @return DescribeAuditLogConfigResponse
       */
      Models::DescribeAuditLogConfigResponse describeAuditLogConfig(const Models::DescribeAuditLogConfigRequest &request);

      /**
       * @summary Queries the audit logs of a Tair (Redis OSS-compatible) instance.
       *
       * @description Before you call this operation, you must enable the audit log feature for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html).
       *
       * @param request DescribeAuditRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditRecordsResponse
       */
      Models::DescribeAuditRecordsResponse describeAuditRecordsWithOptions(const Models::DescribeAuditRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audit logs of a Tair (Redis OSS-compatible) instance.
       *
       * @description Before you call this operation, you must enable the audit log feature for the instance. For more information, see [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html).
       *
       * @param request DescribeAuditRecordsRequest
       * @return DescribeAuditRecordsResponse
       */
      Models::DescribeAuditRecordsResponse describeAuditRecords(const Models::DescribeAuditRecordsRequest &request);

      /**
       * @summary Queries the types of Tair (Redis OSS-compatible) instances that can be created in a specified zone.
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Models::DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of Tair (Redis OSS-compatible) instances that can be created in a specified zone.
       *
       * @param request DescribeAvailableResourceRequest
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource(const Models::DescribeAvailableResourceRequest &request);

      /**
       * @summary Queries the backup policy of a Tair (Redis OSS-compatible) instance, including the backup cycle and backup time.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup policy of a Tair (Redis OSS-compatible) instance, including the backup cycle and backup time.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the execution status of backup tasks for a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeBackupTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasksWithOptions(const Models::DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of backup tasks for a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeBackupTasksRequest
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasks(const Models::DescribeBackupTasksRequest &request);

      /**
       * @summary Queries the backup files of the Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup files of the Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries the cache analysis report of an instance on a specified date.
       *
       * @description > Tair (Redis OSS-compatible) has optimized the cache analytics feature to improve user experience. This API operation is phased out. You can use the new API operation for cache analytics. For more information, see [API operations for cache analytics are upgraded](https://help.aliyun.com/document_detail/186019.html).
       * Before you call this operation, make sure that the instance meets the following requirements:
       * *   The engine version of the instance is Redis 4.0 or later.
       * *   The instance uses the latest minor version. For more information about how to check whether to update the minor version of an instance, see [How do I check whether the minor version of a Tair (Redis OSS-compatible) instance is the latest?](https://help.aliyun.com/document_detail/129203.html)
       *
       * @param request DescribeCacheAnalysisReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCacheAnalysisReportResponse
       */
      Models::DescribeCacheAnalysisReportResponse describeCacheAnalysisReportWithOptions(const Models::DescribeCacheAnalysisReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cache analysis report of an instance on a specified date.
       *
       * @description > Tair (Redis OSS-compatible) has optimized the cache analytics feature to improve user experience. This API operation is phased out. You can use the new API operation for cache analytics. For more information, see [API operations for cache analytics are upgraded](https://help.aliyun.com/document_detail/186019.html).
       * Before you call this operation, make sure that the instance meets the following requirements:
       * *   The engine version of the instance is Redis 4.0 or later.
       * *   The instance uses the latest minor version. For more information about how to check whether to update the minor version of an instance, see [How do I check whether the minor version of a Tair (Redis OSS-compatible) instance is the latest?](https://help.aliyun.com/document_detail/129203.html)
       *
       * @param request DescribeCacheAnalysisReportRequest
       * @return DescribeCacheAnalysisReportResponse
       */
      Models::DescribeCacheAnalysisReportResponse describeCacheAnalysisReport(const Models::DescribeCacheAnalysisReportRequest &request);

      /**
       * @summary Queries a list of cache analysis reports for an instance.
       *
       * @description > Tair (Redis OSS-compatible) has optimized the cache analytics feature to improve user experience. This API operation is phased out. You can use the new API operation for cache analytics. For more information, see [API operations for cache analytics are upgraded](https://help.aliyun.com/document_detail/186019.html).
       * Before you call this operation, make sure that the instance meets the following requirements:
       * *   The engine version of the instance is Redis 4.0 or later.
       * *   The instance uses the latest minor version. For more information about how to check whether to update the minor version of an instance, see [How do I check whether the minor version of a Tair (Redis OSS-compatible) instance is the latest?](https://help.aliyun.com/document_detail/129203.html)
       *
       * @param request DescribeCacheAnalysisReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCacheAnalysisReportListResponse
       */
      Models::DescribeCacheAnalysisReportListResponse describeCacheAnalysisReportListWithOptions(const Models::DescribeCacheAnalysisReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of cache analysis reports for an instance.
       *
       * @description > Tair (Redis OSS-compatible) has optimized the cache analytics feature to improve user experience. This API operation is phased out. You can use the new API operation for cache analytics. For more information, see [API operations for cache analytics are upgraded](https://help.aliyun.com/document_detail/186019.html).
       * Before you call this operation, make sure that the instance meets the following requirements:
       * *   The engine version of the instance is Redis 4.0 or later.
       * *   The instance uses the latest minor version. For more information about how to check whether to update the minor version of an instance, see [How do I check whether the minor version of a Tair (Redis OSS-compatible) instance is the latest?](https://help.aliyun.com/document_detail/129203.html)
       *
       * @param request DescribeCacheAnalysisReportListRequest
       * @return DescribeCacheAnalysisReportListResponse
       */
      Models::DescribeCacheAnalysisReportListResponse describeCacheAnalysisReportList(const Models::DescribeCacheAnalysisReportListRequest &request);

      /**
       * @summary Queries the backup sets of a Tair (Redis OSS-compatible) cluster instance.
       *
       * @description This operation is applicable only to cloud-native instances.
       *
       * @param request DescribeClusterBackupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterBackupListResponse
       */
      Models::DescribeClusterBackupListResponse describeClusterBackupListWithOptions(const Models::DescribeClusterBackupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup sets of a Tair (Redis OSS-compatible) cluster instance.
       *
       * @description This operation is applicable only to cloud-native instances.
       *
       * @param request DescribeClusterBackupListRequest
       * @return DescribeClusterBackupListResponse
       */
      Models::DescribeClusterBackupListResponse describeClusterBackupList(const Models::DescribeClusterBackupListRequest &request);

      /**
       * @summary Queries the configuration information of nodes in a Tair (Redis OSS-compatible) cluster instance, such as the specifications and the maximum number of connections.
       *
       * @description > This API operation is applicable only to Tair (Redis OSS-compatible) instances that use [cloud disks](https://help.aliyun.com/document_detail/188068.html) and the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
       *
       * @param request DescribeClusterMemberInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterMemberInfoResponse
       */
      Models::DescribeClusterMemberInfoResponse describeClusterMemberInfoWithOptions(const Models::DescribeClusterMemberInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of nodes in a Tair (Redis OSS-compatible) cluster instance, such as the specifications and the maximum number of connections.
       *
       * @description > This API operation is applicable only to Tair (Redis OSS-compatible) instances that use [cloud disks](https://help.aliyun.com/document_detail/188068.html) and the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
       *
       * @param request DescribeClusterMemberInfoRequest
       * @return DescribeClusterMemberInfoResponse
       */
      Models::DescribeClusterMemberInfoResponse describeClusterMemberInfo(const Models::DescribeClusterMemberInfoRequest &request);

      /**
       * @summary Queries the collection frequency of monitoring data for a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitorWithOptions(const Models::DescribeDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the collection frequency of monitoring data for a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitor(const Models::DescribeDBInstanceMonitorRequest &request);

      /**
       * @summary Queries the network information of an ApsaraDB for Redis instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(const Models::DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information of an ApsaraDB for Redis instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(const Models::DescribeDBInstanceNetInfoRequest &request);

      /**
       * @summary Queries the information about virtual IP addresses (VIPs) of child instances of a cluster instance in direct connection mode.
       *
       * @description > Only instances that use cloud disks support this operation.
       *
       * @param request DescribeDBNodeDirectVipInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBNodeDirectVipInfoResponse
       */
      Models::DescribeDBNodeDirectVipInfoResponse describeDBNodeDirectVipInfoWithOptions(const Models::DescribeDBNodeDirectVipInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about virtual IP addresses (VIPs) of child instances of a cluster instance in direct connection mode.
       *
       * @description > Only instances that use cloud disks support this operation.
       *
       * @param request DescribeDBNodeDirectVipInfoRequest
       * @return DescribeDBNodeDirectVipInfoResponse
       */
      Models::DescribeDBNodeDirectVipInfoResponse describeDBNodeDirectVipInfo(const Models::DescribeDBNodeDirectVipInfoRequest &request);

      /**
       * @summary Checks the connectivity between the client IP address and the instance.
       *
       * @param request DescribeDbInstanceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDbInstanceConnectivityResponse
       */
      Models::DescribeDbInstanceConnectivityResponse describeDbInstanceConnectivityWithOptions(const Models::DescribeDbInstanceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the connectivity between the client IP address and the instance.
       *
       * @param request DescribeDbInstanceConnectivityRequest
       * @return DescribeDbInstanceConnectivityResponse
       */
      Models::DescribeDbInstanceConnectivityResponse describeDbInstanceConnectivity(const Models::DescribeDbInstanceConnectivityRequest &request);

      /**
       * @summary Queries the information of Tair (Redis OSS-compatible) instances deployed in a dedicated cluster.
       *
       * @description > If you want to query the information about Tair (Redis OSS-compatible) instances that are not deployed in a dedicated cluster, call the [DescribeInstanceAttribute](https://help.aliyun.com/document_detail/473779.html) operation.
       *
       * @param request DescribeDedicatedClusterInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedClusterInstanceListResponse
       */
      Models::DescribeDedicatedClusterInstanceListResponse describeDedicatedClusterInstanceListWithOptions(const Models::DescribeDedicatedClusterInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of Tair (Redis OSS-compatible) instances deployed in a dedicated cluster.
       *
       * @description > If you want to query the information about Tair (Redis OSS-compatible) instances that are not deployed in a dedicated cluster, call the [DescribeInstanceAttribute](https://help.aliyun.com/document_detail/473779.html) operation.
       *
       * @param request DescribeDedicatedClusterInstanceListRequest
       * @return DescribeDedicatedClusterInstanceListResponse
       */
      Models::DescribeDedicatedClusterInstanceListResponse describeDedicatedClusterInstanceList(const Models::DescribeDedicatedClusterInstanceListRequest &request);

      /**
       * @summary Queries the details of a custom key for a Tair (Redis OSS-compatible) instance to use transparent data encryption (TDE).
       *
       * @description Before you call this operation, TDE must be enabled for the Tair (Redis OSS-compatible) instance by using a custom key. For more information, see [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html).
       * > For more information about TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request DescribeEncryptionKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEncryptionKeyResponse
       */
      Models::DescribeEncryptionKeyResponse describeEncryptionKeyWithOptions(const Models::DescribeEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom key for a Tair (Redis OSS-compatible) instance to use transparent data encryption (TDE).
       *
       * @description Before you call this operation, TDE must be enabled for the Tair (Redis OSS-compatible) instance by using a custom key. For more information, see [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html).
       * > For more information about TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request DescribeEncryptionKeyRequest
       * @return DescribeEncryptionKeyResponse
       */
      Models::DescribeEncryptionKeyResponse describeEncryptionKey(const Models::DescribeEncryptionKeyRequest &request);

      /**
       * @summary Queries a list of custom keys used by Tair (Redis OSS-compatible) instances.
       *
       * @description *   You can specify a custom key when you call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) operation to enable Transparent Data Encryption (TDE). You can call the DescribeEncryptionKeyList operation to query the custom keys that are in use. To create a custom key, you can call the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation of Key Management Service (KMS).
       * *   For more information about TDE and the usage notes of TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request DescribeEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEncryptionKeyListResponse
       */
      Models::DescribeEncryptionKeyListResponse describeEncryptionKeyListWithOptions(const Models::DescribeEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom keys used by Tair (Redis OSS-compatible) instances.
       *
       * @description *   You can specify a custom key when you call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) operation to enable Transparent Data Encryption (TDE). You can call the DescribeEncryptionKeyList operation to query the custom keys that are in use. To create a custom key, you can call the [CreateKey](https://help.aliyun.com/document_detail/28947.html) operation of Key Management Service (KMS).
       * *   For more information about TDE and the usage notes of TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request DescribeEncryptionKeyListRequest
       * @return DescribeEncryptionKeyListResponse
       */
      Models::DescribeEncryptionKeyListResponse describeEncryptionKeyList(const Models::DescribeEncryptionKeyListRequest &request);

      /**
       * @summary Queries the major version and minor version of a Tair (Redis OSS-compatible) instance and the release notes for minor versions.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=R-kvstore\\&api=DescribeEngineVersion\\&type=RPC\\&version=2015-01-01)
       *
       * @param request DescribeEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEngineVersionResponse
       */
      Models::DescribeEngineVersionResponse describeEngineVersionWithOptions(const Models::DescribeEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the major version and minor version of a Tair (Redis OSS-compatible) instance and the release notes for minor versions.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=R-kvstore\\&api=DescribeEngineVersion\\&type=RPC\\&version=2015-01-01)
       *
       * @param request DescribeEngineVersionRequest
       * @return DescribeEngineVersionResponse
       */
      Models::DescribeEngineVersionResponse describeEngineVersion(const Models::DescribeEngineVersionRequest &request);

      /**
       * @summary Queries the details of a distributed Tair (Redis OSS-compatible) instance.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=R-kvstore\\&api=DescribeGlobalDistributeCache\\&type=RPC\\&version=2015-01-01)
       *
       * @param request DescribeGlobalDistributeCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDistributeCacheResponse
       */
      Models::DescribeGlobalDistributeCacheResponse describeGlobalDistributeCacheWithOptions(const Models::DescribeGlobalDistributeCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a distributed Tair (Redis OSS-compatible) instance.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=R-kvstore\\&api=DescribeGlobalDistributeCache\\&type=RPC\\&version=2015-01-01)
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
       * @summary Queries information about the global IP whitelist templates associated with an instance.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelationWithOptions(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the global IP whitelist templates associated with an instance.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelation(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request);

      /**
       * @summary DescribeHistoryEvents
       *
       * @param request DescribeHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEventsWithOptions(const Models::DescribeHistoryEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeHistoryEvents
       *
       * @param request DescribeHistoryEventsRequest
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEvents(const Models::DescribeHistoryEventsRequest &request);

      /**
       * @summary Queries the statistics of historical events.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStatWithOptions(const Models::DescribeHistoryEventsStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of historical events.
       *
       * @param request DescribeHistoryEventsStatRequest
       * @return DescribeHistoryEventsStatResponse
       */
      Models::DescribeHistoryEventsStatResponse describeHistoryEventsStat(const Models::DescribeHistoryEventsStatRequest &request);

      /**
       * @summary Queries the performance monitoring data of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also query the performance monitoring data of an instance in the Tair console. For more information, see [Metrics](https://help.aliyun.com/document_detail/43887.html).
       *
       * @param request DescribeHistoryMonitorValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryMonitorValuesResponse
       */
      Models::DescribeHistoryMonitorValuesResponse describeHistoryMonitorValuesWithOptions(const Models::DescribeHistoryMonitorValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance monitoring data of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also query the performance monitoring data of an instance in the Tair console. For more information, see [Metrics](https://help.aliyun.com/document_detail/43887.html).
       *
       * @param request DescribeHistoryMonitorValuesRequest
       * @return DescribeHistoryMonitorValuesResponse
       */
      Models::DescribeHistoryMonitorValuesResponse describeHistoryMonitorValues(const Models::DescribeHistoryMonitorValuesRequest &request);

      /**
       * @summary Queries a list of tasks in the task center.
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tasks in the task center.
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary Queries the task statistics in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task statistics in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStat(const Models::DescribeHistoryTasksStatRequest &request);

      /**
       * @summary Queries the attribute of Tair (Redis OSS-compatible) instances.
       *
       * @param request DescribeInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttributeWithOptions(const Models::DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attribute of Tair (Redis OSS-compatible) instances.
       *
       * @param request DescribeInstanceAttributeRequest
       * @return DescribeInstanceAttributeResponse
       */
      Models::DescribeInstanceAttributeResponse describeInstanceAttribute(const Models::DescribeInstanceAttributeRequest &request);

      /**
       * @summary Queries whether auto-renewal is enabled for a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(const Models::DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether auto-renewal is enabled for a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(const Models::DescribeInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Queries the default parameter configurations of a Tair (Redis OSS-compatible) instance.
       *
       * @description This operation is available only for instances that use cloud disks.
       * > You can call the [DescribeParameters](https://help.aliyun.com/document_detail/473847.html) operation to query the parameter settings of instances that use local disks.
       *
       * @param request DescribeInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceConfigResponse
       */
      Models::DescribeInstanceConfigResponse describeInstanceConfigWithOptions(const Models::DescribeInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default parameter configurations of a Tair (Redis OSS-compatible) instance.
       *
       * @description This operation is available only for instances that use cloud disks.
       * > You can call the [DescribeParameters](https://help.aliyun.com/document_detail/473847.html) operation to query the parameter settings of instances that use local disks.
       *
       * @param request DescribeInstanceConfigRequest
       * @return DescribeInstanceConfigResponse
       */
      Models::DescribeInstanceConfigResponse describeInstanceConfig(const Models::DescribeInstanceConfigRequest &request);

      /**
       * @summary Queries whether TLS (SSL) encryption is enabled for an instance.
       *
       * @description SSL encryption is supported for Tair (Redis OSS-compatible) 2.8 standard master-replica instances, Tair (Redis OSS-compatible) 2.8 master-replica cluster instances, and Tair (Redis OSS-compatible) 4.0 master-replica cluster instances. You can enable SSL encryption to enhance data transmission security.
       * You can use one of the following methods to enable or disable SSL encryption or update the SSL certificate for a Tair (Redis OSS-compatible) instance:
       * *   Call the [ModifyInstanceSSL](https://help.aliyun.com/document_detail/473838.html) operation.
       * *   Enable or disable SSL encryption or update the SSL certificate in the Tair (Redis OSS-compatible) console. For more information, see [Configure SSL encryption](https://help.aliyun.com/document_detail/84898.html).
       * > After SSL encryption is enabled, the instance may respond slower.
       *
       * @param request DescribeInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSLWithOptions(const Models::DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether TLS (SSL) encryption is enabled for an instance.
       *
       * @description SSL encryption is supported for Tair (Redis OSS-compatible) 2.8 standard master-replica instances, Tair (Redis OSS-compatible) 2.8 master-replica cluster instances, and Tair (Redis OSS-compatible) 4.0 master-replica cluster instances. You can enable SSL encryption to enhance data transmission security.
       * You can use one of the following methods to enable or disable SSL encryption or update the SSL certificate for a Tair (Redis OSS-compatible) instance:
       * *   Call the [ModifyInstanceSSL](https://help.aliyun.com/document_detail/473838.html) operation.
       * *   Enable or disable SSL encryption or update the SSL certificate in the Tair (Redis OSS-compatible) console. For more information, see [Configure SSL encryption](https://help.aliyun.com/document_detail/84898.html).
       * > After SSL encryption is enabled, the instance may respond slower.
       *
       * @param request DescribeInstanceSSLRequest
       * @return DescribeInstanceSSLResponse
       */
      Models::DescribeInstanceSSLResponse describeInstanceSSL(const Models::DescribeInstanceSSLRequest &request);

      /**
       * @summary Queries whether transparent data encryption (TDE) is enabled for a Tair (Redis OSS-compatible) instance.
       *
       * @description For more information about TDE and the usage notes of TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       * >  You can call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable or disable TDE.
       *
       * @param request DescribeInstanceTDEStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTDEStatusResponse
       */
      Models::DescribeInstanceTDEStatusResponse describeInstanceTDEStatusWithOptions(const Models::DescribeInstanceTDEStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether transparent data encryption (TDE) is enabled for a Tair (Redis OSS-compatible) instance.
       *
       * @description For more information about TDE and the usage notes of TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       * >  You can call the [ModifyInstanceTDE](https://help.aliyun.com/document_detail/473859.html) to enable or disable TDE.
       *
       * @param request DescribeInstanceTDEStatusRequest
       * @return DescribeInstanceTDEStatusResponse
       */
      Models::DescribeInstanceTDEStatusResponse describeInstanceTDEStatus(const Models::DescribeInstanceTDEStatusRequest &request);

      /**
       * @summary Queries the information about one or more Tair (Redis OSS-compatible) instances.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more Tair (Redis OSS-compatible) instances.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the overview information of one or more Tair (Redis OSS-compatible) instances.
       *
       * @description If you do not specify the InstanceIds parameter when you call this operation, the overview information of all instances is returned.
       * > This operation returns non-paged results.
       *
       * @param request DescribeInstancesOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesOverviewResponse
       */
      Models::DescribeInstancesOverviewResponse describeInstancesOverviewWithOptions(const Models::DescribeInstancesOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview information of one or more Tair (Redis OSS-compatible) instances.
       *
       * @description If you do not specify the InstanceIds parameter when you call this operation, the overview information of all instances is returned.
       * > This operation returns non-paged results.
       *
       * @param request DescribeInstancesOverviewRequest
       * @return DescribeInstancesOverviewResponse
       */
      Models::DescribeInstancesOverviewResponse describeInstancesOverview(const Models::DescribeInstancesOverviewRequest &request);

      /**
       * @summary Queries the internal bandwidth of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to increase the internal bandwidth of an instance.
       *
       * @param request DescribeIntranetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntranetAttributeResponse
       */
      Models::DescribeIntranetAttributeResponse describeIntranetAttributeWithOptions(const Models::DescribeIntranetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the internal bandwidth of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to increase the internal bandwidth of an instance.
       *
       * @param request DescribeIntranetAttributeRequest
       * @return DescribeIntranetAttributeResponse
       */
      Models::DescribeIntranetAttributeResponse describeIntranetAttribute(const Models::DescribeIntranetAttributeRequest &request);

      /**
       * @summary Queries the logical topology of a Tair (Redis OSS-compatible) instance.
       *
       * @description This parameter is supported only for cluster and read/write splitting instances.
       *
       * @param request DescribeLogicInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogicInstanceTopologyResponse
       */
      Models::DescribeLogicInstanceTopologyResponse describeLogicInstanceTopologyWithOptions(const Models::DescribeLogicInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logical topology of a Tair (Redis OSS-compatible) instance.
       *
       * @description This parameter is supported only for cluster and read/write splitting instances.
       *
       * @param request DescribeLogicInstanceTopologyRequest
       * @return DescribeLogicInstanceTopologyResponse
       */
      Models::DescribeLogicInstanceTopologyResponse describeLogicInstanceTopology(const Models::DescribeLogicInstanceTopologyRequest &request);

      /**
       * @summary Queries the metrics of a Tair (Redis OSS-compatible) instance.
       *
       * @description >  To improve user experience, Tair has upgraded the monitoring metrics. The DescribeMonitorItems operation is phased out. For more information, see [The DescribeMonitorItems operation of Tair (Redis OSS-compatible) is phased out](https://help.aliyun.com/document_detail/189893.html).
       * After you call this operation to retrieve a list of metrics for a specified instance, you can call the [DescribeHistoryMonitorValues](https://help.aliyun.com/document_detail/473827.html) operation to query the monitoring history of the instance.
       *
       * @param request DescribeMonitorItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorItemsResponse
       */
      Models::DescribeMonitorItemsResponse describeMonitorItemsWithOptions(const Models::DescribeMonitorItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics of a Tair (Redis OSS-compatible) instance.
       *
       * @description >  To improve user experience, Tair has upgraded the monitoring metrics. The DescribeMonitorItems operation is phased out. For more information, see [The DescribeMonitorItems operation of Tair (Redis OSS-compatible) is phased out](https://help.aliyun.com/document_detail/189893.html).
       * After you call this operation to retrieve a list of metrics for a specified instance, you can call the [DescribeHistoryMonitorValues](https://help.aliyun.com/document_detail/473827.html) operation to query the monitoring history of the instance.
       *
       * @param request DescribeMonitorItemsRequest
       * @return DescribeMonitorItemsResponse
       */
      Models::DescribeMonitorItemsResponse describeMonitorItems(const Models::DescribeMonitorItemsRequest &request);

      /**
       * @summary Queries the basic information about a parameter template.
       *
       * @param request DescribeParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroupWithOptions(const Models::DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a parameter template.
       *
       * @param request DescribeParameterGroupRequest
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroup(const Models::DescribeParameterGroupRequest &request);

      /**
       * @summary Queries the parameters that can be configured in parameter templates across different database versions.
       *
       * @param request DescribeParameterGroupSupportParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupSupportParamResponse
       */
      Models::DescribeParameterGroupSupportParamResponse describeParameterGroupSupportParamWithOptions(const Models::DescribeParameterGroupSupportParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters that can be configured in parameter templates across different database versions.
       *
       * @param request DescribeParameterGroupSupportParamRequest
       * @return DescribeParameterGroupSupportParamResponse
       */
      Models::DescribeParameterGroupSupportParamResponse describeParameterGroupSupportParam(const Models::DescribeParameterGroupSupportParamRequest &request);

      /**
       * @summary Queries the information about the parameters that can be configured in a parameter template, such as the default values, value ranges, and descriptions.
       *
       * @param request DescribeParameterGroupTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupTemplateListResponse
       */
      Models::DescribeParameterGroupTemplateListResponse describeParameterGroupTemplateListWithOptions(const Models::DescribeParameterGroupTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the parameters that can be configured in a parameter template, such as the default values, value ranges, and descriptions.
       *
       * @param request DescribeParameterGroupTemplateListRequest
       * @return DescribeParameterGroupTemplateListResponse
       */
      Models::DescribeParameterGroupTemplateListResponse describeParameterGroupTemplateList(const Models::DescribeParameterGroupTemplateListRequest &request);

      /**
       * @summary Queries a list of available parameter templates.
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available parameter templates.
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @summary Queries the parameter modification history of a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeParameterModificationHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterModificationHistoryResponse
       */
      Models::DescribeParameterModificationHistoryResponse describeParameterModificationHistoryWithOptions(const Models::DescribeParameterModificationHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter modification history of a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeParameterModificationHistoryRequest
       * @return DescribeParameterModificationHistoryResponse
       */
      Models::DescribeParameterModificationHistoryResponse describeParameterModificationHistory(const Models::DescribeParameterModificationHistoryRequest &request);

      /**
       * @summary Queries the parameters and their default values that are supported by Tair (Redis OSS-compatible) instances of different architectures and major versions.
       *
       * @description After you call this operation to query the parameters and default values of an instance, you can call the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to reconfigure the parameters of the instance.
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters and their default values that are supported by Tair (Redis OSS-compatible) instances of different architectures and major versions.
       *
       * @description After you call this operation to query the parameters and default values of an instance, you can call the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to reconfigure the parameters of the instance.
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Queries the configuration parameters and running parameters of a Tair (Redis OSS-compatible) instance.
       *
       * @description This operation is applicable only to classic instances.
       * >  If the instance is deployed in cloud-native mode, you can use the [DescribeInstanceConfig](https://help.aliyun.com/document_detail/473846.html) operation to query the configuration and operational parameters of the instance.
       *
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration parameters and running parameters of a Tair (Redis OSS-compatible) instance.
       *
       * @description This operation is applicable only to classic instances.
       * >  If the instance is deployed in cloud-native mode, you can use the [DescribeInstanceConfig](https://help.aliyun.com/document_detail/473846.html) operation to query the configuration and operational parameters of the instance.
       *
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary Queries the fees that you must pay when you create, upgrade, or renew a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fees that you must pay when you create, upgrade, or renew a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Queries the regions in which ApsaraDB for Redis instances can be created.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions in which ApsaraDB for Redis instances can be created.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the role, type, minor version, and zone of each node in a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeRoleZoneInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoleZoneInfoResponse
       */
      Models::DescribeRoleZoneInfoResponse describeRoleZoneInfoWithOptions(const Models::DescribeRoleZoneInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the role, type, minor version, and zone of each node in a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeRoleZoneInfoRequest
       * @return DescribeRoleZoneInfoResponse
       */
      Models::DescribeRoleZoneInfoResponse describeRoleZoneInfo(const Models::DescribeRoleZoneInfoRequest &request);

      /**
       * @summary Queries the operational logs of a Tair (Redis OSS-compatible) instance.
       *
       * @description For more information about how to view the operational logs of an instance in the Tair (Redis OSS-compatible) console, see [View active logs](https://help.aliyun.com/document_detail/101713.html).
       * This operation can be called up to 100 times per minute.
       *
       * @param request DescribeRunningLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRunningLogRecordsResponse
       */
      Models::DescribeRunningLogRecordsResponse describeRunningLogRecordsWithOptions(const Models::DescribeRunningLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operational logs of a Tair (Redis OSS-compatible) instance.
       *
       * @description For more information about how to view the operational logs of an instance in the Tair (Redis OSS-compatible) console, see [View active logs](https://help.aliyun.com/document_detail/101713.html).
       * This operation can be called up to 100 times per minute.
       *
       * @param request DescribeRunningLogRecordsRequest
       * @return DescribeRunningLogRecordsResponse
       */
      Models::DescribeRunningLogRecordsResponse describeRunningLogRecords(const Models::DescribeRunningLogRecordsRequest &request);

      /**
       * @summary Queries the security groups that are added to the whitelists of a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfigurationWithOptions(const Models::DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security groups that are added to the whitelists of a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfiguration(const Models::DescribeSecurityGroupConfigurationRequest &request);

      /**
       * @summary Queries the IP address whitelists of a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeSecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIpsWithOptions(const Models::DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelists of a Tair (Redis OSS-compatible) instance.
       *
       * @param request DescribeSecurityIpsRequest
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIps(const Models::DescribeSecurityIpsRequest &request);

      /**
       * @summary Queries whether the related service-linked role is created for Tair (Redis OSS-compatible) in the current account.
       *
       * @description You can call this operation to query whether the service-lined role AliyunServiceRoleForKvstore is created for Tair (Redis OSS-compatible). For more information, see [Service-linked role of Tair (Redis OSS-compatible)](https://help.aliyun.com/document_detail/184337.html).
       *
       * @param request DescribeServiceLinkedRoleExistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceLinkedRoleExistsResponse
       */
      Models::DescribeServiceLinkedRoleExistsResponse describeServiceLinkedRoleExistsWithOptions(const Models::DescribeServiceLinkedRoleExistsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the related service-linked role is created for Tair (Redis OSS-compatible) in the current account.
       *
       * @description You can call this operation to query whether the service-lined role AliyunServiceRoleForKvstore is created for Tair (Redis OSS-compatible). For more information, see [Service-linked role of Tair (Redis OSS-compatible)](https://help.aliyun.com/document_detail/184337.html).
       *
       * @param request DescribeServiceLinkedRoleExistsRequest
       * @return DescribeServiceLinkedRoleExistsResponse
       */
      Models::DescribeServiceLinkedRoleExistsResponse describeServiceLinkedRoleExists(const Models::DescribeServiceLinkedRoleExistsRequest &request);

      /**
       * @summary Queries the slow query logs of a Tair (Redis OSS-compatible) instance that are generated within a specified period of time.
       *
       * @description You can also query slow logs in the Tair (Redis OSS-compatible) console. For more information, see [Query slow logs of an instance](https://help.aliyun.com/document_detail/95874.html). This operation can be called up to 100 times per minute.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the slow query logs of a Tair (Redis OSS-compatible) instance that are generated within a specified period of time.
       *
       * @description You can also query slow logs in the Tair (Redis OSS-compatible) console. For more information, see [Query slow logs of an instance](https://help.aliyun.com/document_detail/95874.html). This operation can be called up to 100 times per minute.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries all tags in a region.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all tags in a region.
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
       * @summary Queries the information of one or more Tair (Redis OSS-compatible) KVCache instances.
       *
       * @description You can call this operation to query the following Tair (Redis OSS-compatible) KVCache instances: inference operator instances, virtual cluster instances, and cache service instances.
       *
       * @param request DescribeTairKVCacheInferInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTairKVCacheInferInstancesResponse
       */
      Models::DescribeTairKVCacheInferInstancesResponse describeTairKVCacheInferInstancesWithOptions(const Models::DescribeTairKVCacheInferInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of one or more Tair (Redis OSS-compatible) KVCache instances.
       *
       * @description You can call this operation to query the following Tair (Redis OSS-compatible) KVCache instances: inference operator instances, virtual cluster instances, and cache service instances.
       *
       * @param request DescribeTairKVCacheInferInstancesRequest
       * @return DescribeTairKVCacheInferInstancesResponse
       */
      Models::DescribeTairKVCacheInferInstancesResponse describeTairKVCacheInferInstances(const Models::DescribeTairKVCacheInferInstancesRequest &request);

      /**
       * @summary Queries the zones available for Tair (Redis OSS-compatible).
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones available for Tair (Redis OSS-compatible).
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Permanently destroys instances and their data backups in the recycle bin.
       *
       * @description Before you call this operation, instances must be available in the recycle bin. For more information, see [Instance recycle bin](https://help.aliyun.com/document_detail/86114.html).
       * > Calling this operation permanently deletes the instances and their data backups in the recycle bin.
       * **
       * **Warning** After you destroy the instance, data in the instance is permanently deleted and can no longer be restored. Proceed with caution.
       *
       * @param request DestroyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DestroyInstanceResponse
       */
      Models::DestroyInstanceResponse destroyInstanceWithOptions(const Models::DestroyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Permanently destroys instances and their data backups in the recycle bin.
       *
       * @description Before you call this operation, instances must be available in the recycle bin. For more information, see [Instance recycle bin](https://help.aliyun.com/document_detail/86114.html).
       * > Calling this operation permanently deletes the instances and their data backups in the recycle bin.
       * **
       * **Warning** After you destroy the instance, data in the instance is permanently deleted and can no longer be restored. Proceed with caution.
       *
       * @param request DestroyInstanceRequest
       * @return DestroyInstanceResponse
       */
      Models::DestroyInstanceResponse destroyInstance(const Models::DestroyInstanceRequest &request);

      /**
       * @summary Adjusts the bandwidth of a Tair (Redis OSS-compatible) instance. Only the pay-as-you-go billing method is supported for bandwidth adjustment. You need to specify the InstanceId, NodeId (optional), Bandwidth, and ChargeType parameters.
       *
       * @description If you enable the bandwidth auto scaling feature and call this operation at the same time, bandwidth auto scaling takes precedence. During bandwidth scale-back, the instance is scaled back to the default bandwidth of the instance type. For more information about the limits, costs, and FAQ about this feature, see [Adjust the bandwidth of an instance](https://help.aliyun.com/document_detail/102588.html).
       * >  Before you call this operation, you can call the [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/473782.html) operation to query the current bandwidth of each data node in an instance.
       *
       * @param request EnableAdditionalBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAdditionalBandwidthResponse
       */
      Models::EnableAdditionalBandwidthResponse enableAdditionalBandwidthWithOptions(const Models::EnableAdditionalBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjusts the bandwidth of a Tair (Redis OSS-compatible) instance. Only the pay-as-you-go billing method is supported for bandwidth adjustment. You need to specify the InstanceId, NodeId (optional), Bandwidth, and ChargeType parameters.
       *
       * @description If you enable the bandwidth auto scaling feature and call this operation at the same time, bandwidth auto scaling takes precedence. During bandwidth scale-back, the instance is scaled back to the default bandwidth of the instance type. For more information about the limits, costs, and FAQ about this feature, see [Adjust the bandwidth of an instance](https://help.aliyun.com/document_detail/102588.html).
       * >  Before you call this operation, you can call the [DescribeRoleZoneInfo](https://help.aliyun.com/document_detail/473782.html) operation to query the current bandwidth of each data node in an instance.
       *
       * @param request EnableAdditionalBandwidthRequest
       * @return EnableAdditionalBandwidthResponse
       */
      Models::EnableAdditionalBandwidthResponse enableAdditionalBandwidth(const Models::EnableAdditionalBandwidthRequest &request);

      /**
       * @summary Clears all expired keys in a Tair (Redis OSS-compatible) instance.
       *
       * @description For more information about how to clear the expired keys in the Tair (Redis OSS-compatible) console, see [Clear data](https://help.aliyun.com/document_detail/43881.html).
       * >  Expired keys cannot be recovered after they are deleted. Exercise caution when you call this operation.
       *
       * @param request FlushExpireKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlushExpireKeysResponse
       */
      Models::FlushExpireKeysResponse flushExpireKeysWithOptions(const Models::FlushExpireKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears all expired keys in a Tair (Redis OSS-compatible) instance.
       *
       * @description For more information about how to clear the expired keys in the Tair (Redis OSS-compatible) console, see [Clear data](https://help.aliyun.com/document_detail/43881.html).
       * >  Expired keys cannot be recovered after they are deleted. Exercise caution when you call this operation.
       *
       * @param request FlushExpireKeysRequest
       * @return FlushExpireKeysResponse
       */
      Models::FlushExpireKeysResponse flushExpireKeys(const Models::FlushExpireKeysRequest &request);

      /**
       * @summary Clears the data of a Tair (Redis OSS-compatible) instance. The cleared data cannot be restored.
       *
       * @param request FlushInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlushInstanceResponse
       */
      Models::FlushInstanceResponse flushInstanceWithOptions(const Models::FlushInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the data of a Tair (Redis OSS-compatible) instance. The cleared data cannot be restored.
       *
       * @param request FlushInstanceRequest
       * @return FlushInstanceResponse
       */
      Models::FlushInstanceResponse flushInstance(const Models::FlushInstanceRequest &request);

      /**
       * @summary Cleans the data of specified databases in a Tair (Redis OSS-compatible) instance.
       *
       * @description Each Tair (Redis OSS-compatible) instance can contain up to 256 databases named from DB0 to DB255. Each database does not have a separate memory usage limit. The memory capacity that a database can use is subject to the total memory limit of the instance. You can execute the `SELECT` statement to switch between databases. For more information, see [What is the size of each database on a Tair (Redis OSS-compatible) instance, and how can I choose databases?](https://help.aliyun.com/document_detail/38688.html)
       * >  This operation is available only for cloud-native instances that use cloud disks.
       *
       * @param request FlushInstanceForDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlushInstanceForDBResponse
       */
      Models::FlushInstanceForDBResponse flushInstanceForDBWithOptions(const Models::FlushInstanceForDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cleans the data of specified databases in a Tair (Redis OSS-compatible) instance.
       *
       * @description Each Tair (Redis OSS-compatible) instance can contain up to 256 databases named from DB0 to DB255. Each database does not have a separate memory usage limit. The memory capacity that a database can use is subject to the total memory limit of the instance. You can execute the `SELECT` statement to switch between databases. For more information, see [What is the size of each database on a Tair (Redis OSS-compatible) instance, and how can I choose databases?](https://help.aliyun.com/document_detail/38688.html)
       * >  This operation is available only for cloud-native instances that use cloud disks.
       *
       * @param request FlushInstanceForDBRequest
       * @return FlushInstanceForDBResponse
       */
      Models::FlushInstanceForDBResponse flushInstanceForDB(const Models::FlushInstanceForDBRequest &request);

      /**
       * @summary Modifies the permissions of an account for a Tair (Redis OSS-compatible) instance.
       *
       * @description > 
       * *   Only Tair (Redis OSS-compatible) instances of Redis 4.0 or later are supported.
       * *   The Tair (Redis OSS-compatible) instance must be in the running state.
       *
       * @param request GrantAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(const Models::GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of an account for a Tair (Redis OSS-compatible) instance.
       *
       * @description > 
       * *   Only Tair (Redis OSS-compatible) instances of Redis 4.0 or later are supported.
       * *   The Tair (Redis OSS-compatible) instance must be in the running state.
       *
       * @param request GrantAccountPrivilegeRequest
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilege(const Models::GrantAccountPrivilegeRequest &request);

      /**
       * @summary Assigns a service-linked role to Tair (Redis OSS-compatible).
       *
       * @description The log management feature of Tair (Redis OSS-compatible) requires the resources of [Simple Log Service](https://help.aliyun.com/document_detail/48869.html). To use the log management feature, you can call this operation to assign the AliyunServiceRoleForKvstore service-linked role to Tair (Redis OSS-compatible). For more information, see [Service-linked role of Tair (Redis OSS-compatible)](https://help.aliyun.com/document_detail/184337.html).
       *
       * @param request InitializeKvstorePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeKvstorePermissionResponse
       */
      Models::InitializeKvstorePermissionResponse initializeKvstorePermissionWithOptions(const Models::InitializeKvstorePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns a service-linked role to Tair (Redis OSS-compatible).
       *
       * @description The log management feature of Tair (Redis OSS-compatible) requires the resources of [Simple Log Service](https://help.aliyun.com/document_detail/48869.html). To use the log management feature, you can call this operation to assign the AliyunServiceRoleForKvstore service-linked role to Tair (Redis OSS-compatible). For more information, see [Service-linked role of Tair (Redis OSS-compatible)](https://help.aliyun.com/document_detail/184337.html).
       *
       * @param request InitializeKvstorePermissionRequest
       * @return InitializeKvstorePermissionResponse
       */
      Models::InitializeKvstorePermissionResponse initializeKvstorePermission(const Models::InitializeKvstorePermissionRequest &request);

      /**
       * @summary Queries the relationships between Tair (Redis OSS-compatible) instances and tags.
       *
       * @description You can also query the relationships between instances and tags in the Tair (Redis OSS-compatible) console. For more information, see [Filter Tair (Redis OSS-compatible) instances by tag](https://help.aliyun.com/document_detail/119160.html) and [View tags bound to an instance](https://help.aliyun.com/document_detail/134038.html).
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the relationships between Tair (Redis OSS-compatible) instances and tags.
       *
       * @description You can also query the relationships between instances and tags in the Tair (Redis OSS-compatible) console. For more information, see [Filter Tair (Redis OSS-compatible) instances by tag](https://help.aliyun.com/document_detail/119160.html) and [View tags bound to an instance](https://help.aliyun.com/document_detail/134038.html).
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Places a write lock on an instance. After the instance is locked, it supports only read operations.
       *
       * @param request LockDBInstanceWriteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockDBInstanceWriteResponse
       */
      Models::LockDBInstanceWriteResponse lockDBInstanceWriteWithOptions(const Models::LockDBInstanceWriteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Places a write lock on an instance. After the instance is locked, it supports only read operations.
       *
       * @param request LockDBInstanceWriteRequest
       * @return LockDBInstanceWriteResponse
       */
      Models::LockDBInstanceWriteResponse lockDBInstanceWrite(const Models::LockDBInstanceWriteRequest &request);

      /**
       * @summary Simulates database node failures.
       *
       * @param request MasterNodeShutDownFailOverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MasterNodeShutDownFailOverResponse
       */
      Models::MasterNodeShutDownFailOverResponse masterNodeShutDownFailOverWithOptions(const Models::MasterNodeShutDownFailOverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Simulates database node failures.
       *
       * @param request MasterNodeShutDownFailOverRequest
       * @return MasterNodeShutDownFailOverResponse
       */
      Models::MasterNodeShutDownFailOverResponse masterNodeShutDownFailOver(const Models::MasterNodeShutDownFailOverRequest &request);

      /**
       * @summary Migrates a Tair (Redis OSS-compatible) instance to another zone in the same region.
       *
       * @description Before you call this operation, you must release the public endpoint (if any) of the instance. For more information, see [Migrate an instance across zones](https://help.aliyun.com/document_detail/106272.html).
       * > 
       * *   If the network type of an Tair (Redis OSS-compatible) instance is switched from classic network to Virtual Private Cloud (VPC), and the classic network endpoint is retained, you can migrate the instance across zones only after the classic network endpoint is released upon expiration.
       * *   After the instance is migrated, the endpoint of the instance remains unchanged. However, the virtual IP address (VIP) is changed. We recommend that you use the endpoint instead of the VIP to connect to the instance.
       *
       * @param request MigrateToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(const Models::MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates a Tair (Redis OSS-compatible) instance to another zone in the same region.
       *
       * @description Before you call this operation, you must release the public endpoint (if any) of the instance. For more information, see [Migrate an instance across zones](https://help.aliyun.com/document_detail/106272.html).
       * > 
       * *   If the network type of an Tair (Redis OSS-compatible) instance is switched from classic network to Virtual Private Cloud (VPC), and the classic network endpoint is retained, you can migrate the instance across zones only after the classic network endpoint is released upon expiration.
       * *   After the instance is migrated, the endpoint of the instance remains unchanged. However, the virtual IP address (VIP) is changed. We recommend that you use the endpoint instead of the VIP to connect to the instance.
       *
       * @param request MigrateToOtherZoneRequest
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZone(const Models::MigrateToOtherZoneRequest &request);

      /**
       * @summary Modifies the description of an account for a Tair (Redis OSS-compatible) instance.
       *
       * @description This operation is supported only for instances that run Redis 4.0 or later.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an account for a Tair (Redis OSS-compatible) instance.
       *
       * @description This operation is supported only for instances that run Redis 4.0 or later.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Changes the password of a specific account for a Tair (Redis OSS-compatible) instance.
       *
       * @param request ModifyAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPasswordWithOptions(const Models::ModifyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the password of a specific account for a Tair (Redis OSS-compatible) instance.
       *
       * @param request ModifyAccountPasswordRequest
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPassword(const Models::ModifyAccountPasswordRequest &request);

      /**
       * @summary ModifyActiveOperationMaintainConf
       *
       * @param request ModifyActiveOperationMaintainConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationMaintainConfigResponse
       */
      Models::ModifyActiveOperationMaintainConfigResponse modifyActiveOperationMaintainConfigWithOptions(const Models::ModifyActiveOperationMaintainConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyActiveOperationMaintainConf
       *
       * @param request ModifyActiveOperationMaintainConfigRequest
       * @return ModifyActiveOperationMaintainConfigResponse
       */
      Models::ModifyActiveOperationMaintainConfigResponse modifyActiveOperationMaintainConfig(const Models::ModifyActiveOperationMaintainConfigRequest &request);

      /**
       * @summary Changes the scheduled switchover time of an O&M task.
       *
       * @description You can receive notifications for Tair (Redis OSS-compatible) events such as instance migration and version upgrade by text message, phone call, email, internal message, or by using the console. You can also change the scheduled switchover time of a task by using the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/187022.html).
       *
       * @param request ModifyActiveOperationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTaskResponse
       */
      Models::ModifyActiveOperationTaskResponse modifyActiveOperationTaskWithOptions(const Models::ModifyActiveOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the scheduled switchover time of an O&M task.
       *
       * @description You can receive notifications for Tair (Redis OSS-compatible) events such as instance migration and version upgrade by text message, phone call, email, internal message, or by using the console. You can also change the scheduled switchover time of a task by using the console. For more information, see [Query or manage pending events](https://help.aliyun.com/document_detail/187022.html).
       *
       * @param request ModifyActiveOperationTaskRequest
       * @return ModifyActiveOperationTaskResponse
       */
      Models::ModifyActiveOperationTaskResponse modifyActiveOperationTask(const Models::ModifyActiveOperationTaskRequest &request);

      /**
       * @summary Modifies the switching time of scheduled O\\\\\\&M events for an instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switching time of scheduled O\\\\\\&M events for an instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Enables the audit log feature or modifies the audit log settings for a Tair (Redis OSS-compatible) instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of the audit log feature.
       * Before you call this operation, make sure that the Tair (Redis OSS-compatible) instance meets the following requirements:
       * *   The instance is a Tair (Redis OSS-compatible) Community Edition instance or Tair [DRAM-based instance](https://help.aliyun.com/document_detail/126164.html).
       * *   The engine version of the instance is Redis 4.0 or later, and the latest minor version is used. You can call the [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) operation to check whether the instance uses the latest major version and minor version.
       *
       * @param request ModifyAuditLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAuditLogConfigResponse
       */
      Models::ModifyAuditLogConfigResponse modifyAuditLogConfigWithOptions(const Models::ModifyAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the audit log feature or modifies the audit log settings for a Tair (Redis OSS-compatible) instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/54532.html) of the audit log feature.
       * Before you call this operation, make sure that the Tair (Redis OSS-compatible) instance meets the following requirements:
       * *   The instance is a Tair (Redis OSS-compatible) Community Edition instance or Tair [DRAM-based instance](https://help.aliyun.com/document_detail/126164.html).
       * *   The engine version of the instance is Redis 4.0 or later, and the latest minor version is used. You can call the [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) operation to check whether the instance uses the latest major version and minor version.
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
       * @summary Modifies the automatic backup policy of a Tair (Redis OSS-compatible) instance.
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic backup policy of a Tair (Redis OSS-compatible) instance.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Modifies the setting related to the automatic update of minor versions for an instance.
       *
       * @param request ModifyDBInstanceAutoUpgradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAutoUpgradeResponse
       */
      Models::ModifyDBInstanceAutoUpgradeResponse modifyDBInstanceAutoUpgradeWithOptions(const Models::ModifyDBInstanceAutoUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the setting related to the automatic update of minor versions for an instance.
       *
       * @param request ModifyDBInstanceAutoUpgradeRequest
       * @return ModifyDBInstanceAutoUpgradeResponse
       */
      Models::ModifyDBInstanceAutoUpgradeResponse modifyDBInstanceAutoUpgrade(const Models::ModifyDBInstanceAutoUpgradeRequest &request);

      /**
       * @summary Changes the endpoint or port number of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also modify the endpoint or port number of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Change the endpoint or port number of an instance](https://help.aliyun.com/document_detail/85683.html).
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the endpoint or port number of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also modify the endpoint or port number of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Change the endpoint or port number of an instance](https://help.aliyun.com/document_detail/85683.html).
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary Modifies the monitoring granularity of a Tair (Redis OSS-compatible) instance.
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitorWithOptions(const Models::ModifyDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the monitoring granularity of a Tair (Redis OSS-compatible) instance.
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitor(const Models::ModifyDBInstanceMonitorRequest &request);

      /**
       * @summary 事件中心修改事件信息
       *
       * @param request ModifyEventInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfoWithOptions(const Models::ModifyEventInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 事件中心修改事件信息
       *
       * @param request ModifyEventInfoRequest
       * @return ModifyEventInfoResponse
       */
      Models::ModifyEventInfoResponse modifyEventInfo(const Models::ModifyEventInfoRequest &request);

      /**
       * @summary Modifies a global IP whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroupWithOptions(const Models::ModifyGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a global IP whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroup(const Models::ModifyGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Modifies the name of a global IP whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupNameResponse
       */
      Models::ModifyGlobalSecurityIPGroupNameResponse modifyGlobalSecurityIPGroupNameWithOptions(const Models::ModifyGlobalSecurityIPGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a global IP whitelist template.
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
       * @summary Modifies the specific information of a Tair (Redis OSS-compatible) instance, such as the password and the name.
       *
       * @description You can also modify the information of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Change or reset the password](https://help.aliyun.com/document_detail/43874.html).
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specific information of a Tair (Redis OSS-compatible) instance, such as the password and the name.
       *
       * @description You can also modify the information of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Change or reset the password](https://help.aliyun.com/document_detail/43874.html).
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary Enables or disables auto-renewal for a Tair (Redis OSS-compatible) instance.
       *
       * @description > Auto-renewal is triggered seven days before the expiration date of the instance.
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttributeWithOptions(const Models::ModifyInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables auto-renewal for a Tair (Redis OSS-compatible) instance.
       *
       * @description > Auto-renewal is triggered seven days before the expiration date of the instance.
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttribute(const Models::ModifyInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Sets the intended bandwidth value of a Tair (Redis OSS-compatible) instance.
       *
       * @description *   Before you call this operation, make sure that you understand the billing methods and pricing of instance bandwidth. Tair (Redis OSS-compatible) charges fees per hour based on the amount and usage duration of the extra bandwidth that you purchase. The fees vary based on the region that you select. For more information, see [Billable items](https://help.aliyun.com/document_detail/54532.html).
       * *   The bandwidth of an instance or a shard can be increased by up to six times the default bandwidth of the instance, but the increase in bandwidth cannot exceed 192 Mbit/s. For example, if the default bandwidth of a Tair DRAM-based master-replica instance equipped with 2 GB of memory is 96 Mbit/s, you can increase the bandwidth of the instance by up to 192 Mbit/s. As a result, the maximum bandwidth of the instance is 288 Mbit/s. If the default bandwidth of a Redis Open-Source Edition master-replica instance equipped with 256 MB of memory is 10 Mbit/s, you can increase the bandwidth of the instance by up to 60 Mbit/s. As a result, the maximum bandwidth of the instance is 70 Mbit/s.
       *
       * @param request ModifyInstanceBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceBandwidthResponse
       */
      Models::ModifyInstanceBandwidthResponse modifyInstanceBandwidthWithOptions(const Models::ModifyInstanceBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the intended bandwidth value of a Tair (Redis OSS-compatible) instance.
       *
       * @description *   Before you call this operation, make sure that you understand the billing methods and pricing of instance bandwidth. Tair (Redis OSS-compatible) charges fees per hour based on the amount and usage duration of the extra bandwidth that you purchase. The fees vary based on the region that you select. For more information, see [Billable items](https://help.aliyun.com/document_detail/54532.html).
       * *   The bandwidth of an instance or a shard can be increased by up to six times the default bandwidth of the instance, but the increase in bandwidth cannot exceed 192 Mbit/s. For example, if the default bandwidth of a Tair DRAM-based master-replica instance equipped with 2 GB of memory is 96 Mbit/s, you can increase the bandwidth of the instance by up to 192 Mbit/s. As a result, the maximum bandwidth of the instance is 288 Mbit/s. If the default bandwidth of a Redis Open-Source Edition master-replica instance equipped with 256 MB of memory is 10 Mbit/s, you can increase the bandwidth of the instance by up to 60 Mbit/s. As a result, the maximum bandwidth of the instance is 70 Mbit/s.
       *
       * @param request ModifyInstanceBandwidthRequest
       * @return ModifyInstanceBandwidthResponse
       */
      Models::ModifyInstanceBandwidthResponse modifyInstanceBandwidth(const Models::ModifyInstanceBandwidthRequest &request);

      /**
       * @summary Modifies the parameter settings of a Tair (Redis OSS-compatible) instance.
       *
       * @param request ModifyInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameter settings of a Tair (Redis OSS-compatible) instance.
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

      /**
       * @summary Modifies the maintenance window of an Tair (Redis OSS-compatible) instance. Alibaba Cloud maintains Tair (Redis OSS-compatible) instances during the specified maintenance window.
       *
       * @description You can also modify the maintenance window of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Set a maintenance window](https://help.aliyun.com/document_detail/55252.html).
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTimeWithOptions(const Models::ModifyInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an Tair (Redis OSS-compatible) instance. Alibaba Cloud maintains Tair (Redis OSS-compatible) instances during the specified maintenance window.
       *
       * @description You can also modify the maintenance window of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Set a maintenance window](https://help.aliyun.com/document_detail/55252.html).
       *
       * @param request ModifyInstanceMaintainTimeRequest
       * @return ModifyInstanceMaintainTimeResponse
       */
      Models::ModifyInstanceMaintainTimeResponse modifyInstanceMaintainTime(const Models::ModifyInstanceMaintainTimeRequest &request);

      /**
       * @summary Upgrades the major version of a Tair (Redis OSS-compatible) instance.
       *
       * @description For more information about the precautions and impacts of the upgrade, see [Upgrade the major version](https://help.aliyun.com/document_detail/101764.html).
       *
       * @param request ModifyInstanceMajorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMajorVersionResponse
       */
      Models::ModifyInstanceMajorVersionResponse modifyInstanceMajorVersionWithOptions(const Models::ModifyInstanceMajorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the major version of a Tair (Redis OSS-compatible) instance.
       *
       * @description For more information about the precautions and impacts of the upgrade, see [Upgrade the major version](https://help.aliyun.com/document_detail/101764.html).
       *
       * @param request ModifyInstanceMajorVersionRequest
       * @return ModifyInstanceMajorVersionResponse
       */
      Models::ModifyInstanceMajorVersionResponse modifyInstanceMajorVersion(const Models::ModifyInstanceMajorVersionRequest &request);

      /**
       * @summary Updates the minor version of a Tair (Redis OSS-compatible) instance.
       *
       * @description The procedure to update the minor version of an instance varies based on types of Tair (Redis OSS-compatible) instances. For more information, see [Upgrade the minor version](https://help.aliyun.com/document_detail/56450.html).
       * > 
       * *   Before you call this operation, you can call the [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) operation to query the minor version of the current instance.
       * *   When you switch your workloads over from the original instance to a new instance or from the master node to the replica node in the original instance, you may experience disconnections that last a few seconds. The original instance stays in the read-only state within 60 seconds until all data is synchronized. We recommend that you upgrade the original instance during off-peak hours and make sure that your application is configured to automatically reconnect to the original instance.
       *
       * @param request ModifyInstanceMinorVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceMinorVersionResponse
       */
      Models::ModifyInstanceMinorVersionResponse modifyInstanceMinorVersionWithOptions(const Models::ModifyInstanceMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the minor version of a Tair (Redis OSS-compatible) instance.
       *
       * @description The procedure to update the minor version of an instance varies based on types of Tair (Redis OSS-compatible) instances. For more information, see [Upgrade the minor version](https://help.aliyun.com/document_detail/56450.html).
       * > 
       * *   Before you call this operation, you can call the [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) operation to query the minor version of the current instance.
       * *   When you switch your workloads over from the original instance to a new instance or from the master node to the replica node in the original instance, you may experience disconnections that last a few seconds. The original instance stays in the read-only state within 60 seconds until all data is synchronized. We recommend that you upgrade the original instance during off-peak hours and make sure that your application is configured to automatically reconnect to the original instance.
       *
       * @param request ModifyInstanceMinorVersionRequest
       * @return ModifyInstanceMinorVersionResponse
       */
      Models::ModifyInstanceMinorVersionResponse modifyInstanceMinorVersion(const Models::ModifyInstanceMinorVersionRequest &request);

      /**
       * @summary Extends the retention period of the classic network endpoint of a Tair (Redis OSS-compatible) instance. You can call this operation after you change the network type of the Tair (Redis OSS-compatible) instance from classic network to Virtual Private Cloud (VPC) with the classic network endpoint retained.
       *
       * @description You can also perform this operation in the Tair (Redis OSS-compatible) console. For more information, see [Change the expiration time for the endpoint of the classic network](https://help.aliyun.com/document_detail/60062.html).
       * > For more information about how to switch the network type of a Tair (Redis OSS-compatible) instance from classic network to VPC, see [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html).
       *
       * @param request ModifyInstanceNetExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetExpireTimeResponse
       */
      Models::ModifyInstanceNetExpireTimeResponse modifyInstanceNetExpireTimeWithOptions(const Models::ModifyInstanceNetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the retention period of the classic network endpoint of a Tair (Redis OSS-compatible) instance. You can call this operation after you change the network type of the Tair (Redis OSS-compatible) instance from classic network to Virtual Private Cloud (VPC) with the classic network endpoint retained.
       *
       * @description You can also perform this operation in the Tair (Redis OSS-compatible) console. For more information, see [Change the expiration time for the endpoint of the classic network](https://help.aliyun.com/document_detail/60062.html).
       * > For more information about how to switch the network type of a Tair (Redis OSS-compatible) instance from classic network to VPC, see [SwitchNetwork](https://help.aliyun.com/document_detail/473797.html).
       *
       * @param request ModifyInstanceNetExpireTimeRequest
       * @return ModifyInstanceNetExpireTimeResponse
       */
      Models::ModifyInstanceNetExpireTimeResponse modifyInstanceNetExpireTime(const Models::ModifyInstanceNetExpireTimeRequest &request);

      /**
       * @summary Applies a parameter template to specific instances. This indicates that the parameter values in the template take effect on the instances. After you modify a parameter template, you must reapply it to specific instances for the new parameter values to take effect on the instances.
       *
       * @param request ModifyInstanceParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceParameterResponse
       */
      Models::ModifyInstanceParameterResponse modifyInstanceParameterWithOptions(const Models::ModifyInstanceParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies a parameter template to specific instances. This indicates that the parameter values in the template take effect on the instances. After you modify a parameter template, you must reapply it to specific instances for the new parameter values to take effect on the instances.
       *
       * @param request ModifyInstanceParameterRequest
       * @return ModifyInstanceParameterResponse
       */
      Models::ModifyInstanceParameterResponse modifyInstanceParameter(const Models::ModifyInstanceParameterRequest &request);

      /**
       * @summary Enables Transport Layer Security (TLS) for a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also configure SSL encryption in the console. For more information, see [Configure SSL encryption](https://help.aliyun.com/document_detail/84898.html).
       * >  To specify the earliest supported SSL version, you can call the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the required parameter.
       *
       * @param request ModifyInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSLWithOptions(const Models::ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables Transport Layer Security (TLS) for a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also configure SSL encryption in the console. For more information, see [Configure SSL encryption](https://help.aliyun.com/document_detail/84898.html).
       * >  To specify the earliest supported SSL version, you can call the [ModifyInstanceConfig](https://help.aliyun.com/document_detail/473844.html) operation to modify the required parameter.
       *
       * @param request ModifyInstanceSSLRequest
       * @return ModifyInstanceSSLResponse
       */
      Models::ModifyInstanceSSLResponse modifyInstanceSSL(const Models::ModifyInstanceSSLRequest &request);

      /**
       * @summary Changes the configurations of a Tair (Redis OSS-compatible) instance.
       *
       * @description >  For more information about the procedure, impacts, limits, and fees of this operation, see [Change the configurations of an instance](https://help.aliyun.com/document_detail/26353.html).
       *
       * @param request ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the configurations of a Tair (Redis OSS-compatible) instance.
       *
       * @description >  For more information about the procedure, impacts, limits, and fees of this operation, see [Change the configurations of an instance](https://help.aliyun.com/document_detail/26353.html).
       *
       * @param request ModifyInstanceSpecRequest
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpec(const Models::ModifyInstanceSpecRequest &request);

      /**
       * @summary Enables transparent data encryption (TDE) for a Tair (Redis OSS-compatible) instance. You can use existing custom keys.
       *
       * @description > For more information about TDE and the impact of TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request ModifyInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceTDEResponse
       */
      Models::ModifyInstanceTDEResponse modifyInstanceTDEWithOptions(const Models::ModifyInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables transparent data encryption (TDE) for a Tair (Redis OSS-compatible) instance. You can use existing custom keys.
       *
       * @description > For more information about TDE and the impact of TDE, see [Enable TDE](https://help.aliyun.com/document_detail/265913.html).
       *
       * @param request ModifyInstanceTDERequest
       * @return ModifyInstanceTDEResponse
       */
      Models::ModifyInstanceTDEResponse modifyInstanceTDE(const Models::ModifyInstanceTDERequest &request);

      /**
       * @summary Enables or disables password-free access for a Tair (Redis OSS-compatible) instance. This way, you can connect to a database in a convenient and secure manner.
       *
       * @description When the password-free access feature is enabled, Elastic Compute Service (ECS) instances in the same virtual private cloud (VPC) can connect to the Tair instance without a password. You can also use the username and password to connect to the Tair instance.
       * > The Tair instance is deployed in a VPC. For more information, see [Enable password-free access](https://help.aliyun.com/document_detail/85168.html).
       *
       * @param request ModifyInstanceVpcAuthModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVpcAuthModeResponse
       */
      Models::ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthModeWithOptions(const Models::ModifyInstanceVpcAuthModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables password-free access for a Tair (Redis OSS-compatible) instance. This way, you can connect to a database in a convenient and secure manner.
       *
       * @description When the password-free access feature is enabled, Elastic Compute Service (ECS) instances in the same virtual private cloud (VPC) can connect to the Tair instance without a password. You can also use the username and password to connect to the Tair instance.
       * > The Tair instance is deployed in a VPC. For more information, see [Enable password-free access](https://help.aliyun.com/document_detail/85168.html).
       *
       * @param request ModifyInstanceVpcAuthModeRequest
       * @return ModifyInstanceVpcAuthModeResponse
       */
      Models::ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthMode(const Models::ModifyInstanceVpcAuthModeRequest &request);

      /**
       * @summary Temporarily adjusts the internal bandwidth of a Tair (Redis OSS-compatible) instance that is deployed in a dedicated cluster.
       *
       * @description > 
       * *   This operation is applicable only to an instance that is deployed in a dedicated cluster. To adjust the bandwidth of a standard instance, call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation.
       *
       * @param request ModifyIntranetAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIntranetAttributeResponse
       */
      Models::ModifyIntranetAttributeResponse modifyIntranetAttributeWithOptions(const Models::ModifyIntranetAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Temporarily adjusts the internal bandwidth of a Tair (Redis OSS-compatible) instance that is deployed in a dedicated cluster.
       *
       * @description > 
       * *   This operation is applicable only to an instance that is deployed in a dedicated cluster. To adjust the bandwidth of a standard instance, call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation.
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
       * @summary Changes the resource group to which a Tair (Redis OSS-compatible) instance belongs.
       *
       * @description You can also perform this operation in the [Resource Management](https://resourcemanager.console.aliyun.com/resource-center) console. For more information, see [Transfer resources across resource groups](https://help.aliyun.com/document_detail/94487.html).
       * >  Resource Group allows you to sort resources owned by your Alibaba Cloud account into groups. This simplifies the resource and permission management within your Alibaba Cloud account. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ModifyResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroupWithOptions(const Models::ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a Tair (Redis OSS-compatible) instance belongs.
       *
       * @description You can also perform this operation in the [Resource Management](https://resourcemanager.console.aliyun.com/resource-center) console. For more information, see [Transfer resources across resource groups](https://help.aliyun.com/document_detail/94487.html).
       * >  Resource Group allows you to sort resources owned by your Alibaba Cloud account into groups. This simplifies the resource and permission management within your Alibaba Cloud account. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ModifyResourceGroupRequest
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroup(const Models::ModifyResourceGroupRequest &request);

      /**
       * @summary Resets the security groups that are added to the whitelists of a Tair (Redis OSS-compatible) instance.
       *
       * @description > After you call this operation, the security groups that are added to the whitelists of the Tair instance are deleted, and the security group specified by the **SecurityGroupId** parameter is added to the whitelists. For more information about how to reset security groups in the Tair console, see [Add security groups](https://help.aliyun.com/document_detail/148267.html).
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfigurationWithOptions(const Models::ModifySecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the security groups that are added to the whitelists of a Tair (Redis OSS-compatible) instance.
       *
       * @description > After you call this operation, the security groups that are added to the whitelists of the Tair instance are deleted, and the security group specified by the **SecurityGroupId** parameter is added to the whitelists. For more information about how to reset security groups in the Tair console, see [Add security groups](https://help.aliyun.com/document_detail/148267.html).
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfiguration(const Models::ModifySecurityGroupConfigurationRequest &request);

      /**
       * @summary Modifies the IP address whitelists of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also modify the whitelists of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Configure a whitelist for an instance](https://help.aliyun.com/document_detail/56464.html).
       *
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP address whitelists of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also modify the whitelists of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Configure a whitelist for an instance](https://help.aliyun.com/document_detail/56464.html).
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
       * @summary Modifies the task information, such as the task execution time.
       *
       * @param request ModifyTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfoWithOptions(const Models::ModifyTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the task information, such as the task execution time.
       *
       * @param request ModifyTaskInfoRequest
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfo(const Models::ModifyTaskInfoRequest &request);

      /**
       * @summary Restarts the proxy node of a running Tair (Redis OSS-compatible) instance.
       *
       * @description This operation supports only instances that use the read/write splitting architecture or the cluster architecture in proxy mode. For more information, see [Restart or rebuild proxy nodes](https://help.aliyun.com/document_detail/164224.html).
       *
       * @param request RebootProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootProxyResponse
       */
      Models::RebootProxyResponse rebootProxyWithOptions(const Models::RebootProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts the proxy node of a running Tair (Redis OSS-compatible) instance.
       *
       * @description This operation supports only instances that use the read/write splitting architecture or the cluster architecture in proxy mode. For more information, see [Restart or rebuild proxy nodes](https://help.aliyun.com/document_detail/164224.html).
       *
       * @param request RebootProxyRequest
       * @return RebootProxyResponse
       */
      Models::RebootProxyResponse rebootProxy(const Models::RebootProxyRequest &request);

      /**
       * @summary Releases the private endpoint of an ApsaraDB for Redis cluster instance.
       *
       * @description In direct connection mode, clients can bypass proxy nodes and use private endpoints to connect to ApsaraDB for Redis instances. This is similar to the connection to a native Redis cluster. The direct connection mode can reduce communication overheads and the response time of ApsaraDB for Redis. For more information, see [Enable the direct connection mode](https://help.aliyun.com/document_detail/146901.html).
       *
       * @param request ReleaseDirectConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseDirectConnectionResponse
       */
      Models::ReleaseDirectConnectionResponse releaseDirectConnectionWithOptions(const Models::ReleaseDirectConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the private endpoint of an ApsaraDB for Redis cluster instance.
       *
       * @description In direct connection mode, clients can bypass proxy nodes and use private endpoints to connect to ApsaraDB for Redis instances. This is similar to the connection to a native Redis cluster. The direct connection mode can reduce communication overheads and the response time of ApsaraDB for Redis. For more information, see [Enable the direct connection mode](https://help.aliyun.com/document_detail/146901.html).
       *
       * @param request ReleaseDirectConnectionRequest
       * @return ReleaseDirectConnectionResponse
       */
      Models::ReleaseDirectConnectionResponse releaseDirectConnection(const Models::ReleaseDirectConnectionRequest &request);

      /**
       * @summary Releases the public endpoint of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also release the public endpoint for an instance in the Tair (Redis OSS-compatible) console. For more information, see [Release public endpoints](https://help.aliyun.com/document_detail/125424.html).
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of a Tair (Redis OSS-compatible) instance.
       *
       * @description You can also release the public endpoint for an instance in the Tair (Redis OSS-compatible) console. For more information, see [Release public endpoints](https://help.aliyun.com/document_detail/125424.html).
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @summary Removes a child instance from a distributed instance.
       *
       * @description The operation that you want to perform. Set the value to **RemoveSubInstance**.
       *
       * @param request RemoveSubInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSubInstanceResponse
       */
      Models::RemoveSubInstanceResponse removeSubInstanceWithOptions(const Models::RemoveSubInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a child instance from a distributed instance.
       *
       * @description The operation that you want to perform. Set the value to **RemoveSubInstance**.
       *
       * @param request RemoveSubInstanceRequest
       * @return RemoveSubInstanceResponse
       */
      Models::RemoveSubInstanceResponse removeSubInstance(const Models::RemoveSubInstanceRequest &request);

      /**
       * @summary This operation is not recommended now. The billing method for bandwidth of a Tair (Redis OSS-compatible) instance is changed to pay-as-you-go.
       *
       * @description You can adjust the bandwidth of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Adjust the bandwidth of an instance](https://help.aliyun.com/document_detail/102588.html). You can also call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to purchase bandwidth for an instance.
       *
       * @param request RenewAdditionalBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAdditionalBandwidthResponse
       */
      Models::RenewAdditionalBandwidthResponse renewAdditionalBandwidthWithOptions(const Models::RenewAdditionalBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation is not recommended now. The billing method for bandwidth of a Tair (Redis OSS-compatible) instance is changed to pay-as-you-go.
       *
       * @description You can adjust the bandwidth of an instance in the Tair (Redis OSS-compatible) console. For more information, see [Adjust the bandwidth of an instance](https://help.aliyun.com/document_detail/102588.html). You can also call the [EnableAdditionalBandwidth](https://help.aliyun.com/document_detail/473771.html) operation to purchase bandwidth for an instance.
       *
       * @param request RenewAdditionalBandwidthRequest
       * @return RenewAdditionalBandwidthResponse
       */
      Models::RenewAdditionalBandwidthResponse renewAdditionalBandwidth(const Models::RenewAdditionalBandwidthRequest &request);

      /**
       * @summary Renews an ApsaraDB for Redis instance.
       *
       * @description This operation is applicable only to subscription instances.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews an ApsaraDB for Redis instance.
       *
       * @description This operation is applicable only to subscription instances.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Resets the password of an account for a Tair (Redis OSS-compatible) instance.
       *
       * @description >  Only Tair (Redis OSS-compatible) instances of Redis 4.0 or later are supported.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of an account for a Tair (Redis OSS-compatible) instance.
       *
       * @description >  Only Tair (Redis OSS-compatible) instances of Redis 4.0 or later are supported.
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
       * @summary Restarts a running ApsaraDB for Redis instance.
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a running ApsaraDB for Redis instance.
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
       * @summary Restores the data in a backup file to a specified Tair (Redis OSS-compatible) instance.
       *
       * @description *   If your instance is a [DRAM-based instance](https://help.aliyun.com/document_detail/126164.html) or a [persistent memory-optimized instance](https://help.aliyun.com/document_detail/183956.html) and has the [data flashback](https://help.aliyun.com/document_detail/148479.html) feature enabled, you can call this operation to restore the entire instance or specific keys to a specific point in time accurate to the second. This way, you can achieve more fine-grained data restoration.
       * *   For other types of instances, we recommend that you call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) or [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation to restore the backup data to a new instance.
       *
       * @param request RestoreInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstanceWithOptions(const Models::RestoreInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores the data in a backup file to a specified Tair (Redis OSS-compatible) instance.
       *
       * @description *   If your instance is a [DRAM-based instance](https://help.aliyun.com/document_detail/126164.html) or a [persistent memory-optimized instance](https://help.aliyun.com/document_detail/183956.html) and has the [data flashback](https://help.aliyun.com/document_detail/148479.html) feature enabled, you can call this operation to restore the entire instance or specific keys to a specific point in time accurate to the second. This way, you can achieve more fine-grained data restoration.
       * *   For other types of instances, we recommend that you call the [CreateInstance](https://help.aliyun.com/document_detail/473757.html) or [CreateTairInstance](https://help.aliyun.com/document_detail/473770.html) operation to restore the backup data to a new instance.
       *
       * @param request RestoreInstanceRequest
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstance(const Models::RestoreInstanceRequest &request);

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
       * @summary Performs a master-replica switchover to switch node roles. This operation is applicable to disaster recovery drills and nearby access to applications that are deployed across zones.
       *
       * @description > For more information about nearby access to applications that are deployed across zones, see [Switch node roles](https://help.aliyun.com/document_detail/164222.html).
       * The instance must be a Redis Open-Source Edition instance or Tair (Enterprise Edition) [DRAM-based](https://help.aliyun.com/document_detail/126164.html) instance that uses local disks.
       * A call to this operation has the following impacts on your instance:
       * *   The data shards in the instance may change to the read-only state and experience transient connections within seconds. Make sure that your application is configured to automatically reconnect to the instance.
       * *   If the instance enters the switching state, you cannot manage this instance. For example, you cannot modify the instance configurations or migrate the instance to another zone.
       *
       * @param request SwitchInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchInstanceHAResponse
       */
      Models::SwitchInstanceHAResponse switchInstanceHAWithOptions(const Models::SwitchInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a master-replica switchover to switch node roles. This operation is applicable to disaster recovery drills and nearby access to applications that are deployed across zones.
       *
       * @description > For more information about nearby access to applications that are deployed across zones, see [Switch node roles](https://help.aliyun.com/document_detail/164222.html).
       * The instance must be a Redis Open-Source Edition instance or Tair (Enterprise Edition) [DRAM-based](https://help.aliyun.com/document_detail/126164.html) instance that uses local disks.
       * A call to this operation has the following impacts on your instance:
       * *   The data shards in the instance may change to the read-only state and experience transient connections within seconds. Make sure that your application is configured to automatically reconnect to the instance.
       * *   If the instance enters the switching state, you cannot manage this instance. For example, you cannot modify the instance configurations or migrate the instance to another zone.
       *
       * @param request SwitchInstanceHARequest
       * @return SwitchInstanceHAResponse
       */
      Models::SwitchInstanceHAResponse switchInstanceHA(const Models::SwitchInstanceHARequest &request);

      /**
       * @summary Enables or disables the proxy mode for a Tair (Redis OSS-compatible) cluster instance in a dedicated cluster.
       *
       * @description For more information about the proxy mode, see [Features of proxy servers](https://help.aliyun.com/document_detail/142959.html). Before you call this operation, make sure that the following requirements are met:
       * *   The instance is created by using a dedicated cluster. For more information, see [What is ApsaraDB for MyBase?](https://help.aliyun.com/document_detail/141455.html)
       * *   The instance uses the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
       * >  Before you call the SwitchInstanceProxy operation, you must call the [DescribeDedicatedClusterInstanceList](https://help.aliyun.com/document_detail/473867.html) operation and view the value of the **ProxyCount** response parameter to check whether the proxy mode is enabled. A value of 0 indicates that the proxy mode is disabled. A value that is greater than 0 indicates that the proxy mode is enabled.
       *
       * @param request SwitchInstanceProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchInstanceProxyResponse
       */
      Models::SwitchInstanceProxyResponse switchInstanceProxyWithOptions(const Models::SwitchInstanceProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the proxy mode for a Tair (Redis OSS-compatible) cluster instance in a dedicated cluster.
       *
       * @description For more information about the proxy mode, see [Features of proxy servers](https://help.aliyun.com/document_detail/142959.html). Before you call this operation, make sure that the following requirements are met:
       * *   The instance is created by using a dedicated cluster. For more information, see [What is ApsaraDB for MyBase?](https://help.aliyun.com/document_detail/141455.html)
       * *   The instance uses the [cluster architecture](https://help.aliyun.com/document_detail/52228.html).
       * >  Before you call the SwitchInstanceProxy operation, you must call the [DescribeDedicatedClusterInstanceList](https://help.aliyun.com/document_detail/473867.html) operation and view the value of the **ProxyCount** response parameter to check whether the proxy mode is enabled. A value of 0 indicates that the proxy mode is disabled. A value that is greater than 0 indicates that the proxy mode is enabled.
       *
       * @param request SwitchInstanceProxyRequest
       * @return SwitchInstanceProxyResponse
       */
      Models::SwitchInstanceProxyResponse switchInstanceProxy(const Models::SwitchInstanceProxyRequest &request);

      /**
       * @summary Switches an instance from the current zone to the specified zone in the event of a fault.
       *
       * @param request SwitchInstanceZoneFailOverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchInstanceZoneFailOverResponse
       */
      Models::SwitchInstanceZoneFailOverResponse switchInstanceZoneFailOverWithOptions(const Models::SwitchInstanceZoneFailOverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches an instance from the current zone to the specified zone in the event of a fault.
       *
       * @param request SwitchInstanceZoneFailOverRequest
       * @return SwitchInstanceZoneFailOverResponse
       */
      Models::SwitchInstanceZoneFailOverResponse switchInstanceZoneFailOver(const Models::SwitchInstanceZoneFailOverRequest &request);

      /**
       * @summary Changes the VPC or vSwitch of a Tair (Redis OSS-compatible) instance. If the instance is deployed in the classic network, the network type of the instance is changed from the classic network to VPC.
       *
       * @param request SwitchNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchNetworkResponse
       */
      Models::SwitchNetworkResponse switchNetworkWithOptions(const Models::SwitchNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the VPC or vSwitch of a Tair (Redis OSS-compatible) instance. If the instance is deployed in the classic network, the network type of the instance is changed from the classic network to VPC.
       *
       * @param request SwitchNetworkRequest
       * @return SwitchNetworkResponse
       */
      Models::SwitchNetworkResponse switchNetwork(const Models::SwitchNetworkRequest &request);

      /**
       * @summary Disables configuration changes for a Tair (Redis OSS-compatible) instance before you use Data Transmission Service (DTS) to migrate or synchronize data of the instance. This prevents migration and synchronization task failures due to configuration changes.
       *
       * @param request SyncDtsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncDtsStatusResponse
       */
      Models::SyncDtsStatusResponse syncDtsStatusWithOptions(const Models::SyncDtsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables configuration changes for a Tair (Redis OSS-compatible) instance before you use Data Transmission Service (DTS) to migrate or synchronize data of the instance. This prevents migration and synchronization task failures due to configuration changes.
       *
       * @param request SyncDtsStatusRequest
       * @return SyncDtsStatusResponse
       */
      Models::SyncDtsStatusResponse syncDtsStatus(const Models::SyncDtsStatusRequest &request);

      /**
       * @summary Adds tags to Tair (Redis OSS-compatible) instances.
       *
       * @description If you have a large number of instances, you can create multiple tags and add these tags to the instances. Then, you can filter instances by tag.
       * *   A tag consists of a key and a value. Each key must be unique in a region for an Alibaba Cloud account. Different keys can be mapped to the same value.
       * *   If the tag that you specify does not exist, this tag is automatically created and added to the specified instance.
       * *   If the key of the specified tag is the same as that of an existing tag, the specified tag overwrites the existing tag.
       * *   You can add up to 20 tags to each instance.
       * *   You can add tags to up to 50 instances in each request.
       * You can also add tags to instances in the Tair (Redis OSS-compatible) console. For more information, see [Create a tag](https://help.aliyun.com/document_detail/118779.html).
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to Tair (Redis OSS-compatible) instances.
       *
       * @description If you have a large number of instances, you can create multiple tags and add these tags to the instances. Then, you can filter instances by tag.
       * *   A tag consists of a key and a value. Each key must be unique in a region for an Alibaba Cloud account. Different keys can be mapped to the same value.
       * *   If the tag that you specify does not exist, this tag is automatically created and added to the specified instance.
       * *   If the key of the specified tag is the same as that of an existing tag, the specified tag overwrites the existing tag.
       * *   You can add up to 20 tags to each instance.
       * *   You can add tags to up to 50 instances in each request.
       * You can also add tags to instances in the Tair (Redis OSS-compatible) console. For more information, see [Create a tag](https://help.aliyun.com/document_detail/118779.html).
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Changes the billing method of a Tair (Redis OSS-compatible) instance from subscription to pay-as-you-go or from pay-as-you-go to subscription.
       *
       * @description Before you call this operation, make sure that you understand relevant precautions and billing rules. For more information, see the following topics:
       * *   [Change the billing method to subscription](https://help.aliyun.com/document_detail/54542.html).
       * *   [Change the billing method to pay-as-you-go](https://help.aliyun.com/document_detail/211549.html).
       *
       * @param request TransformInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformInstanceChargeTypeResponse
       */
      Models::TransformInstanceChargeTypeResponse transformInstanceChargeTypeWithOptions(const Models::TransformInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a Tair (Redis OSS-compatible) instance from subscription to pay-as-you-go or from pay-as-you-go to subscription.
       *
       * @description Before you call this operation, make sure that you understand relevant precautions and billing rules. For more information, see the following topics:
       * *   [Change the billing method to subscription](https://help.aliyun.com/document_detail/54542.html).
       * *   [Change the billing method to pay-as-you-go](https://help.aliyun.com/document_detail/211549.html).
       *
       * @param request TransformInstanceChargeTypeRequest
       * @return TransformInstanceChargeTypeResponse
       */
      Models::TransformInstanceChargeTypeResponse transformInstanceChargeType(const Models::TransformInstanceChargeTypeRequest &request);

      /**
       * @summary Converts an instance use local disks to a cloud-native instance.
       *
       * @param request TransformToEcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformToEcsResponse
       */
      Models::TransformToEcsResponse transformToEcsWithOptions(const Models::TransformToEcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts an instance use local disks to a cloud-native instance.
       *
       * @param request TransformToEcsRequest
       * @return TransformToEcsResponse
       */
      Models::TransformToEcsResponse transformToEcs(const Models::TransformToEcsRequest &request);

      /**
       * @summary Changes a pay-as-you-go Tair (Redis OSS-compatible) instance to a subscription instance.
       *
       * @description For more information about how to change the billing method in the Tair (Redis OSS-compatible) console, see [Switch to subscription](https://help.aliyun.com/document_detail/54542.html).
       * >  You cannot change the billing method of a Tair (Redis OSS-compatible) instance from subscription to pay-as-you-go.
       *
       * @param request TransformToPrePaidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformToPrePaidResponse
       */
      Models::TransformToPrePaidResponse transformToPrePaidWithOptions(const Models::TransformToPrePaidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes a pay-as-you-go Tair (Redis OSS-compatible) instance to a subscription instance.
       *
       * @description For more information about how to change the billing method in the Tair (Redis OSS-compatible) console, see [Switch to subscription](https://help.aliyun.com/document_detail/54542.html).
       * >  You cannot change the billing method of a Tair (Redis OSS-compatible) instance from subscription to pay-as-you-go.
       *
       * @param request TransformToPrePaidRequest
       * @return TransformToPrePaidResponse
       */
      Models::TransformToPrePaidResponse transformToPrePaid(const Models::TransformToPrePaidRequest &request);

      /**
       * @summary Removes the write lock from an instance. After the instance is unlocked, it supports both read and write operations.
       *
       * @param request UnlockDBInstanceWriteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockDBInstanceWriteResponse
       */
      Models::UnlockDBInstanceWriteResponse unlockDBInstanceWriteWithOptions(const Models::UnlockDBInstanceWriteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the write lock from an instance. After the instance is unlocked, it supports both read and write operations.
       *
       * @param request UnlockDBInstanceWriteRequest
       * @return UnlockDBInstanceWriteResponse
       */
      Models::UnlockDBInstanceWriteResponse unlockDBInstanceWrite(const Models::UnlockDBInstanceWriteRequest &request);

      /**
       * @summary Removes tags from Tair (Redis OSS-compatible) instances.
       *
       * @description *   You can remove up to 20 tags at a time.
       * *   If a tag is removed from an instance and is not added to other instances, the tag is deleted.
       * You can also remove tags from instances in the Tair (Redis OSS-compatible) console. For more information, see [Remove a tag](https://help.aliyun.com/document_detail/119157.html).
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from Tair (Redis OSS-compatible) instances.
       *
       * @description *   You can remove up to 20 tags at a time.
       * *   If a tag is removed from an instance and is not added to other instances, the tag is deleted.
       * You can also remove tags from instances in the Tair (Redis OSS-compatible) console. For more information, see [Remove a tag](https://help.aliyun.com/document_detail/119157.html).
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the proxy node of a cluster instance to the latest version.
       *
       * @description The procedure and impacts for updating the minor version of an instance varies based on the instance architecture. For more information, see [Update the minor version of an instance](https://help.aliyun.com/document_detail/56450.html).
       * > 
       * *   Before you call this operation, you can call the [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) operation to query the current minor version of the proxy node.
       * *   The connection to the instance is interrupted during the update. We recommend that perform an update during off-peak hours. Make sure your application can reconnect to the instance after the update. For more information, see [Minor version update](https://help.aliyun.com/document_detail/56450.html).
       *
       * @param request UpgradeProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeProxyResponse
       */
      Models::UpgradeProxyResponse upgradeProxyWithOptions(const Models::UpgradeProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the proxy node of a cluster instance to the latest version.
       *
       * @description The procedure and impacts for updating the minor version of an instance varies based on the instance architecture. For more information, see [Update the minor version of an instance](https://help.aliyun.com/document_detail/56450.html).
       * > 
       * *   Before you call this operation, you can call the [DescribeEngineVersion](https://help.aliyun.com/document_detail/473781.html) operation to query the current minor version of the proxy node.
       * *   The connection to the instance is interrupted during the update. We recommend that perform an update during off-peak hours. Make sure your application can reconnect to the instance after the update. For more information, see [Minor version update](https://help.aliyun.com/document_detail/56450.html).
       *
       * @param request UpgradeProxyRequest
       * @return UpgradeProxyResponse
       */
      Models::UpgradeProxyResponse upgradeProxy(const Models::UpgradeProxyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
