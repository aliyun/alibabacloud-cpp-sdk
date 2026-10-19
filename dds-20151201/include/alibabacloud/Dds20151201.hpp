// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DDS20151201_HPP_
#define ALIBABACLOUD_DDS20151201_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dds20151201Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dds20151201.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Applies for an SRV address for an ApsaraDB for MongoDB instance.
       *
       * @description This operation applies only to replica set instances and sharded cluster instances that use cloud disks.
       *
       * @param request AllocateDBInstanceSrvNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateDBInstanceSrvNetworkAddressResponse
       */
      Models::AllocateDBInstanceSrvNetworkAddressResponse allocateDBInstanceSrvNetworkAddressWithOptions(const Models::AllocateDBInstanceSrvNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for an SRV address for an ApsaraDB for MongoDB instance.
       *
       * @description This operation applies only to replica set instances and sharded cluster instances that use cloud disks.
       *
       * @param request AllocateDBInstanceSrvNetworkAddressRequest
       * @return AllocateDBInstanceSrvNetworkAddressResponse
       */
      Models::AllocateDBInstanceSrvNetworkAddressResponse allocateDBInstanceSrvNetworkAddress(const Models::AllocateDBInstanceSrvNetworkAddressRequest &request);

      /**
       * @summary Applies for an internal network endpoint for a shard or ConfigServer node of an ApsaraDB for MongoDB database sharded cluster instance.
       *
       * @description This operation applies only to sharded cluster instances. For more details, see [Apply for an endpoint for a shard or ConfigServer node](https://help.aliyun.com/document_detail/134037.html).
       * > The allocated endpoint supports only internal network access. If you require public network access, invoke the [AllocatePublicNetworkAddress](https://help.aliyun.com/document_detail/67602.html) operation to apply for a public endpoint.
       *
       * @param request AllocateNodePrivateNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateNodePrivateNetworkAddressResponse
       */
      Models::AllocateNodePrivateNetworkAddressResponse allocateNodePrivateNetworkAddressWithOptions(const Models::AllocateNodePrivateNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for an internal network endpoint for a shard or ConfigServer node of an ApsaraDB for MongoDB database sharded cluster instance.
       *
       * @description This operation applies only to sharded cluster instances. For more details, see [Apply for an endpoint for a shard or ConfigServer node](https://help.aliyun.com/document_detail/134037.html).
       * > The allocated endpoint supports only internal network access. If you require public network access, invoke the [AllocatePublicNetworkAddress](https://help.aliyun.com/document_detail/67602.html) operation to apply for a public endpoint.
       *
       * @param request AllocateNodePrivateNetworkAddressRequest
       * @return AllocateNodePrivateNetworkAddressResponse
       */
      Models::AllocateNodePrivateNetworkAddressResponse allocateNodePrivateNetworkAddress(const Models::AllocateNodePrivateNetworkAddressRequest &request);

      /**
       * @summary Allocates a public endpoint.
       *
       * @param request AllocatePublicNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocatePublicNetworkAddressResponse
       */
      Models::AllocatePublicNetworkAddressResponse allocatePublicNetworkAddressWithOptions(const Models::AllocatePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Allocates a public endpoint.
       *
       * @param request AllocatePublicNetworkAddressRequest
       * @return AllocatePublicNetworkAddressResponse
       */
      Models::AllocatePublicNetworkAddressResponse allocatePublicNetworkAddress(const Models::AllocatePublicNetworkAddressRequest &request);

      /**
       * @summary Cancels multiple O&M events in batches.
       *
       * @description Scenarios where O&M events cannot be canceled:
       * - The event cannot be canceled (AllowCancel is 0).
       * - The current time is later than the start time of the O&M event.
       * - The status of the O&M event is not Pending Execution (Status is not 3).
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels multiple O&M events in batches.
       *
       * @description Scenarios where O&M events cannot be canceled:
       * - The event cannot be canceled (AllowCancel is 0).
       * - The current time is later than the start time of the O&M event.
       * - The status of the O&M event is not Pending Execution (Status is not 3).
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Queries whether a Key Management Service (KMS) key is authorized for a MongoDB instance.
       *
       * @description Before you invoke the [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html) operation to enable transparent data encryption (TDE), invoke this operation to query the authorization of the KMS key for the MongoDB instance.
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(const Models::CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a Key Management Service (KMS) key is authorized for a MongoDB instance.
       *
       * @description Before you invoke the [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html) operation to enable transparent data encryption (TDE), invoke this operation to query the authorization of the KMS key for the MongoDB instance.
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(const Models::CheckCloudResourceAuthorizedRequest &request);

      /**
       * @summary Checks whether a MongoDB instance meets the conditions for data restoration.
       *
       * @description This operation is applicable to replica set instances or sharded cluster instances.
       * > After you call this operation to confirm that the conditions for data restoration are met, you can call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation to restore data to a new instance.
       *
       * @param request CheckRecoveryConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckRecoveryConditionResponse
       */
      Models::CheckRecoveryConditionResponse checkRecoveryConditionWithOptions(const Models::CheckRecoveryConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a MongoDB instance meets the conditions for data restoration.
       *
       * @description This operation is applicable to replica set instances or sharded cluster instances.
       * > After you call this operation to confirm that the conditions for data restoration are met, you can call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation to restore data to a new instance.
       *
       * @param request CheckRecoveryConditionRequest
       * @return CheckRecoveryConditionResponse
       */
      Models::CheckRecoveryConditionResponse checkRecoveryCondition(const Models::CheckRecoveryConditionRequest &request);

      /**
       * @summary Queries whether a service-linked role (SLR) has been created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a service-linked role (SLR) has been created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary Creates a read-only shard account for an ApsaraDB for MongoDB sharded cluster instance with cloud disks.
       *
       * @description - Shard accounts can be created only for ApsaraDB for MongoDB sharded cluster instances with cloud disks.
       * - Shard accounts are granted fixed read-only permissions.
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a read-only shard account for an ApsaraDB for MongoDB sharded cluster instance with cloud disks.
       *
       * @description - Shard accounts can be created only for ApsaraDB for MongoDB sharded cluster instances with cloud disks.
       * - Shard accounts are granted fixed read-only permissions.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Creates a backup for an ApsaraDB for MongoDB instance.
       *
       * @description The instance status must be running when you invoke the CreateBackup operation.
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup for an ApsaraDB for MongoDB instance.
       *
       * @description The instance status must be running when you invoke the CreateBackup operation.
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates or clones an ApsaraDB for MongoDB replica set instance.
       *
       * @description Before using this operation, make sure you understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       * For information about instance specifications, see [Instance specifications](https://help.aliyun.com/document_detail/57141.html).
       * To create a sharded cluster instance, call the [CreateShardingDBInstance](https://help.aliyun.com/document_detail/61884.html) operation.
       *
       * @param request CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or clones an ApsaraDB for MongoDB replica set instance.
       *
       * @description Before using this operation, make sure you understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       * For information about instance specifications, see [Instance specifications](https://help.aliyun.com/document_detail/57141.html).
       * To create a sharded cluster instance, call the [CreateShardingDBInstance](https://help.aliyun.com/document_detail/61884.html) operation.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

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
       * @summary Adds a shard node or a mongos node to an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description Before calling this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       * This operation is applicable only to sharded cluster instances.
       *
       * @param request CreateNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeResponse
       */
      Models::CreateNodeResponse createNodeWithOptions(const Models::CreateNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a shard node or a mongos node to an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description Before calling this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       * This operation is applicable only to sharded cluster instances.
       *
       * @param request CreateNodeRequest
       * @return CreateNodeResponse
       */
      Models::CreateNodeResponse createNode(const Models::CreateNodeRequest &request);

      /**
       * @summary Adds multiple Mongos or shard nodes to an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
       * This operation is applicable only to ApsaraDB for MongoDB sharded cluster instances.
       *
       * @param request CreateNodeBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeBatchResponse
       */
      Models::CreateNodeBatchResponse createNodeBatchWithOptions(const Models::CreateNodeBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple Mongos or shard nodes to an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
       * This operation is applicable only to ApsaraDB for MongoDB sharded cluster instances.
       *
       * @param request CreateNodeBatchRequest
       * @return CreateNodeBatchResponse
       */
      Models::CreateNodeBatchResponse createNodeBatch(const Models::CreateNodeBatchRequest &request);

      /**
       * @summary Creates a role tag for an instance node.
       *
       * @param request CreateNodeRoleTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeRoleTagResponse
       */
      Models::CreateNodeRoleTagResponse createNodeRoleTagWithOptions(const Models::CreateNodeRoleTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a role tag for an instance node.
       *
       * @param request CreateNodeRoleTagRequest
       * @return CreateNodeRoleTagResponse
       */
      Models::CreateNodeRoleTagResponse createNodeRoleTag(const Models::CreateNodeRoleTagRequest &request);

      /**
       * @summary Creates or clones an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description - Before calling this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       * - For more information about the specifications of ApsaraDB for MongoDB instances, see [Instance specifications](https://help.aliyun.com/document_detail/57141.html).
       * - To create a standalone instance or a replica set instance, call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation.
       *
       * @param request CreateShardingDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateShardingDBInstanceResponse
       */
      Models::CreateShardingDBInstanceResponse createShardingDBInstanceWithOptions(const Models::CreateShardingDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or clones an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description - Before calling this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       * - For more information about the specifications of ApsaraDB for MongoDB instances, see [Instance specifications](https://help.aliyun.com/document_detail/57141.html).
       * - To create a standalone instance or a replica set instance, call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation.
       *
       * @param request CreateShardingDBInstanceRequest
       * @return CreateShardingDBInstanceResponse
       */
      Models::CreateShardingDBInstanceResponse createShardingDBInstance(const Models::CreateShardingDBInstanceRequest &request);

      /**
       * @summary Deletes a MongoDB backup set.
       *
       * @description Only manual backups can be deleted.
       * Only MongoDB instances with cloud disks are supported.
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a MongoDB backup set.
       *
       * @description Only manual backups can be deleted.
       * Only MongoDB instances with cloud disks are supported.
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Releases a pay-as-you-go MongoDB instance.
       *
       * @description The instance must meet the following conditions:
       * - The instance status is running.
       * - The billing method of the instance is pay-as-you-go.
       * > After an instance is released, its data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go MongoDB instance.
       *
       * @description The instance must meet the following conditions:
       * - The instance status is running.
       * - The billing method of the instance is pay-as-you-go.
       * > After an instance is released, its data cannot be recovered. Proceed with caution.
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary Deletes a global IP address whitelist template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroupWithOptions(const Models::DeleteGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global IP address whitelist template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroup(const Models::DeleteGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Deletes a shard or mongos node from an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description When you invoke this operation, the instance must meet the following requirements: 
       * - The instance status is Running.
       * - The instance is a sharded cluster instance.
       * - The billing method of the instance is pay-as-you-go.
       * - The number of shard or mongos nodes in the instance is greater than 2.
       *
       * @param request DeleteNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNodeResponse
       */
      Models::DeleteNodeResponse deleteNodeWithOptions(const Models::DeleteNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a shard or mongos node from an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description When you invoke this operation, the instance must meet the following requirements: 
       * - The instance status is Running.
       * - The instance is a sharded cluster instance.
       * - The billing method of the instance is pay-as-you-go.
       * - The number of shard or mongos nodes in the instance is greater than 2.
       *
       * @param request DeleteNodeRequest
       * @return DeleteNodeResponse
       */
      Models::DeleteNodeResponse deleteNode(const Models::DeleteNodeRequest &request);

      /**
       * @summary Queries the database account information of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database account information of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the Operation and Maintenance (O&M) task configuration for a MongoDB instance.
       *
       * @param request DescribeActiveOperationMaintenanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintenanceConfigResponse
       */
      Models::DescribeActiveOperationMaintenanceConfigResponse describeActiveOperationMaintenanceConfigWithOptions(const Models::DescribeActiveOperationMaintenanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Operation and Maintenance (O&M) task configuration for a MongoDB instance.
       *
       * @param request DescribeActiveOperationMaintenanceConfigRequest
       * @return DescribeActiveOperationMaintenanceConfigResponse
       */
      Models::DescribeActiveOperationMaintenanceConfigResponse describeActiveOperationMaintenanceConfig(const Models::DescribeActiveOperationMaintenanceConfigRequest &request);

      /**
       * @summary Queries the details of O&M tasks.
       *
       * @param request DescribeActiveOperationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskResponse
       */
      Models::DescribeActiveOperationTaskResponse describeActiveOperationTaskWithOptions(const Models::DescribeActiveOperationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of O&M tasks.
       *
       * @param request DescribeActiveOperationTaskRequest
       * @return DescribeActiveOperationTaskResponse
       */
      Models::DescribeActiveOperationTaskResponse describeActiveOperationTask(const Models::DescribeActiveOperationTaskRequest &request);

      /**
       * @summary Queries the number of operation and maintenance tasks on an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCountWithOptions(const Models::DescribeActiveOperationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of operation and maintenance tasks on an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCount(const Models::DescribeActiveOperationTaskCountRequest &request);

      /**
       * @summary Queries the types and number of O&M tasks for a MongoDB instance.
       *
       * @param request DescribeActiveOperationTaskRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskRegionResponse
       */
      Models::DescribeActiveOperationTaskRegionResponse describeActiveOperationTaskRegionWithOptions(const Models::DescribeActiveOperationTaskRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types and number of O&M tasks for a MongoDB instance.
       *
       * @param request DescribeActiveOperationTaskRegionRequest
       * @return DescribeActiveOperationTaskRegionResponse
       */
      Models::DescribeActiveOperationTaskRegionResponse describeActiveOperationTaskRegion(const Models::DescribeActiveOperationTaskRegionRequest &request);

      /**
       * @summary Queries the types of Operation and Maintenance tasks and the number of tasks of each type for an ApsaraDB for MongoDB instance.
       *
       * @description This operation is no longer updated and will be unavailable.
       *
       * @param request DescribeActiveOperationTaskTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskTypeResponse
       */
      Models::DescribeActiveOperationTaskTypeResponse describeActiveOperationTaskTypeWithOptions(const Models::DescribeActiveOperationTaskTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of Operation and Maintenance tasks and the number of tasks of each type for an ApsaraDB for MongoDB instance.
       *
       * @description This operation is no longer updated and will be unavailable.
       *
       * @param request DescribeActiveOperationTaskTypeRequest
       * @return DescribeActiveOperationTaskTypeResponse
       */
      Models::DescribeActiveOperationTaskTypeResponse describeActiveOperationTaskType(const Models::DescribeActiveOperationTaskTypeRequest &request);

      /**
       * @summary Queries O&M task details for MongoDB instances.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries O&M task details for MongoDB instances.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Queries advanced backup policies.
       *
       * @description Queries advanced backup policies. This operation is supported only for cloud disk replica set and cloud disk sharded cluster instances.
       *
       * @param request DescribeAdvancedBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvancedBackupPolicyResponse
       */
      Models::DescribeAdvancedBackupPolicyResponse describeAdvancedBackupPolicyWithOptions(const Models::DescribeAdvancedBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries advanced backup policies.
       *
       * @description Queries advanced backup policies. This operation is supported only for cloud disk replica set and cloud disk sharded cluster instances.
       *
       * @param request DescribeAdvancedBackupPolicyRequest
       * @return DescribeAdvancedBackupPolicyResponse
       */
      Models::DescribeAdvancedBackupPolicyResponse describeAdvancedBackupPolicy(const Models::DescribeAdvancedBackupPolicyRequest &request);

      /**
       * @summary Queries whether advanced backup is enabled.
       *
       * @description Queries whether advanced backup is enabled. This operation supports only cloud disk replica set instances and cloud disk sharded cluster instances.
       *
       * @param request DescribeAdvancedBackupStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvancedBackupStatusResponse
       */
      Models::DescribeAdvancedBackupStatusResponse describeAdvancedBackupStatusWithOptions(const Models::DescribeAdvancedBackupStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether advanced backup is enabled.
       *
       * @description Queries whether advanced backup is enabled. This operation supports only cloud disk replica set instances and cloud disk sharded cluster instances.
       *
       * @param request DescribeAdvancedBackupStatusRequest
       * @return DescribeAdvancedBackupStatusResponse
       */
      Models::DescribeAdvancedBackupStatusResponse describeAdvancedBackupStatus(const Models::DescribeAdvancedBackupStatusRequest &request);

      /**
       * @summary Queries the audit log types collected for a MongoDB instance.
       *
       * @description - The instance must be in the running state when you call this operation.
       * - This operation is applicable only to **general-purpose local-disk** and **dedicated local-disk** instances.
       * - You can call this operation up to 30 times per minute. To call this operation at a higher frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeAuditLogFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditLogFilterResponse
       */
      Models::DescribeAuditLogFilterResponse describeAuditLogFilterWithOptions(const Models::DescribeAuditLogFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audit log types collected for a MongoDB instance.
       *
       * @description - The instance must be in the running state when you call this operation.
       * - This operation is applicable only to **general-purpose local-disk** and **dedicated local-disk** instances.
       * - You can call this operation up to 30 times per minute. To call this operation at a higher frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeAuditLogFilterRequest
       * @return DescribeAuditLogFilterResponse
       */
      Models::DescribeAuditLogFilterResponse describeAuditLogFilter(const Models::DescribeAuditLogFilterRequest &request);

      /**
       * @summary Checks whether audit logging is enabled for a MongoDB instance.
       *
       * @description - The instance must be in the running state.
       * - This operation is available only for **General-purpose Local Disk Edition** and **Dedicated Local Disk Edition** instances.
       * - You can call this operation up to 30 times per minute. Calls that exceed this limit are throttled. To make frequent calls, use Log Service. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeAuditPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditPolicyResponse
       */
      Models::DescribeAuditPolicyResponse describeAuditPolicyWithOptions(const Models::DescribeAuditPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether audit logging is enabled for a MongoDB instance.
       *
       * @description - The instance must be in the running state.
       * - This operation is available only for **General-purpose Local Disk Edition** and **Dedicated Local Disk Edition** instances.
       * - You can call this operation up to 30 times per minute. Calls that exceed this limit are throttled. To make frequent calls, use Log Service. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeAuditPolicyRequest
       * @return DescribeAuditPolicyResponse
       */
      Models::DescribeAuditPolicyResponse describeAuditPolicy(const Models::DescribeAuditPolicyRequest &request);

      /**
       * @summary Queries the audit logs of a MongoDB instance.
       *
       * @description - The audit log feature must be enabled for the instance before you call this operation. Otherwise, the returned audit log content is empty.
       * - This operation applies to instances of the **General-purpose local disk** and **Dedicated local disk** specification types.
       * - This operation can be called up to 30 times per minute. Calls that exceed this limit are throttled. Do not call this operation at a high frequency. If high-frequency calls are required, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeAuditRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditRecordsResponse
       */
      Models::DescribeAuditRecordsResponse describeAuditRecordsWithOptions(const Models::DescribeAuditRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audit logs of a MongoDB instance.
       *
       * @description - The audit log feature must be enabled for the instance before you call this operation. Otherwise, the returned audit log content is empty.
       * - This operation applies to instances of the **General-purpose local disk** and **Dedicated local disk** specification types.
       * - This operation can be called up to 30 times per minute. Calls that exceed this limit are throttled. Do not call this operation at a high frequency. If high-frequency calls are required, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeAuditRecordsRequest
       * @return DescribeAuditRecordsResponse
       */
      Models::DescribeAuditRecordsResponse describeAuditRecords(const Models::DescribeAuditRecordsRequest &request);

      /**
       * @summary Queries a list of the zones that are supported by an ApsaraDB for MongoDB instance.
       *
       * @description Queries the zones in which an ApsaraDB for MongoDB instance can be deployed under specified purchase conditions. The region ID is required in the purchase condition.
       *
       * @param request DescribeAvailabilityZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailabilityZonesResponse
       */
      Models::DescribeAvailabilityZonesResponse describeAvailabilityZonesWithOptions(const Models::DescribeAvailabilityZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of the zones that are supported by an ApsaraDB for MongoDB instance.
       *
       * @description Queries the zones in which an ApsaraDB for MongoDB instance can be deployed under specified purchase conditions. The region ID is required in the purchase condition.
       *
       * @param request DescribeAvailabilityZonesRequest
       * @return DescribeAvailabilityZonesResponse
       */
      Models::DescribeAvailabilityZonesResponse describeAvailabilityZones(const Models::DescribeAvailabilityZonesRequest &request);

      /**
       * @summary Queries the engine versions to which an ApsaraDB for MongoDB instance can be upgraded.
       *
       * @param request DescribeAvailableEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableEngineVersionResponse
       */
      Models::DescribeAvailableEngineVersionResponse describeAvailableEngineVersionWithOptions(const Models::DescribeAvailableEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the engine versions to which an ApsaraDB for MongoDB instance can be upgraded.
       *
       * @param request DescribeAvailableEngineVersionRequest
       * @return DescribeAvailableEngineVersionResponse
       */
      Models::DescribeAvailableEngineVersionResponse describeAvailableEngineVersion(const Models::DescribeAvailableEngineVersionRequest &request);

      /**
       * @summary Queries the available resources in the specified zone.
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Models::DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available resources in the specified zone.
       *
       * @param request DescribeAvailableResourceRequest
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource(const Models::DescribeAvailableResourceRequest &request);

      /**
       * @summary Queries the databases at a specified time or the databases in a specified backup set before you restore a database for an ApsaraDB for MongoDB instance.
       *
       * @description You can call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation to restore a database for an ApsaraDB for MongoDB instance. For more information, see [Restore one database of an ApsaraDB for MongoDB instance](https://help.aliyun.com/document_detail/112274.html).
       * Before you call this operation, make sure that the instance meets the following requirements:
       * - The instance was created after March 26, 2019.
       * - The instance is located in the China (Qingdao), China (Beijing), China (Zhangjiakou), China (Hohhot), China (Hangzhou), China (Shanghai), China (Shenzhen), or Singapore region. Other regions are not supported.
       * - The instance is a replica set instance.
       * - The instance runs MongoDB 3.4, MongoDB 4.0, or MongoDB 4.2. In addition, the instance uses local disks to store data.
       * - The storage engine of the instance is WiredTiger.
       *
       * @param request DescribeBackupDBsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupDBsResponse
       */
      Models::DescribeBackupDBsResponse describeBackupDBsWithOptions(const Models::DescribeBackupDBsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the databases at a specified time or the databases in a specified backup set before you restore a database for an ApsaraDB for MongoDB instance.
       *
       * @description You can call the [CreateDBInstance](https://help.aliyun.com/document_detail/61763.html) operation to restore a database for an ApsaraDB for MongoDB instance. For more information, see [Restore one database of an ApsaraDB for MongoDB instance](https://help.aliyun.com/document_detail/112274.html).
       * Before you call this operation, make sure that the instance meets the following requirements:
       * - The instance was created after March 26, 2019.
       * - The instance is located in the China (Qingdao), China (Beijing), China (Zhangjiakou), China (Hohhot), China (Hangzhou), China (Shanghai), China (Shenzhen), or Singapore region. Other regions are not supported.
       * - The instance is a replica set instance.
       * - The instance runs MongoDB 3.4, MongoDB 4.0, or MongoDB 4.2. In addition, the instance uses local disks to store data.
       * - The storage engine of the instance is WiredTiger.
       *
       * @param request DescribeBackupDBsRequest
       * @return DescribeBackupDBsResponse
       */
      Models::DescribeBackupDBsResponse describeBackupDBs(const Models::DescribeBackupDBsRequest &request);

      /**
       * @summary Queries the backup policy of a MongoDB instance.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup policy of a MongoDB instance.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the backup usage for a MongoDB replica set or sharded cluster instance that uses cloud disks.
       *
       * @description Backup usage for a sharded cluster is billed on a per-shard basis. You can use this operation to query the backup usage for a single shard.
       *
       * @param request DescribeBackupStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupStorageResponse
       */
      Models::DescribeBackupStorageResponse describeBackupStorageWithOptions(const Models::DescribeBackupStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup usage for a MongoDB replica set or sharded cluster instance that uses cloud disks.
       *
       * @description Backup usage for a sharded cluster is billed on a per-shard basis. You can use this operation to query the backup usage for a single shard.
       *
       * @param request DescribeBackupStorageRequest
       * @return DescribeBackupStorageResponse
       */
      Models::DescribeBackupStorageResponse describeBackupStorage(const Models::DescribeBackupStorageRequest &request);

      /**
       * @summary Queries ongoing backup jobs for MongoDB ReplicaSet or sharded cluster instances that use cloud disks.
       *
       * @param request DescribeBackupTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasksWithOptions(const Models::DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries ongoing backup jobs for MongoDB ReplicaSet or sharded cluster instances that use cloud disks.
       *
       * @param request DescribeBackupTasksRequest
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasks(const Models::DescribeBackupTasksRequest &request);

      /**
       * @summary Queries the backup list of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup list of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Query log backup files for an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeBinlogFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBinlogFilesResponse
       */
      Models::DescribeBinlogFilesResponse describeBinlogFilesWithOptions(const Models::DescribeBinlogFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query log backup files for an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeBinlogFilesRequest
       * @return DescribeBinlogFilesResponse
       */
      Models::DescribeBinlogFilesResponse describeBinlogFiles(const Models::DescribeBinlogFilesRequest &request);

      /**
       * @summary Queries the cluster backup sets for an ApsaraDB for MongoDB sharded cluster instance that uses cloud disks.
       *
       * @description For sharded cluster instances that use cloud disks and were created before October 19, 2023, you must first call the [TransferClusterBackup](https://help.aliyun.com/document_detail/2587931.html) operation to convert shard backups to cluster backups.
       * Sharded cluster instances that use cloud disks and were created after October 19, 2023 use cluster backups by default.
       *
       * @param request DescribeClusterBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterBackupsResponse
       */
      Models::DescribeClusterBackupsResponse describeClusterBackupsWithOptions(const Models::DescribeClusterBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cluster backup sets for an ApsaraDB for MongoDB sharded cluster instance that uses cloud disks.
       *
       * @description For sharded cluster instances that use cloud disks and were created before October 19, 2023, you must first call the [TransferClusterBackup](https://help.aliyun.com/document_detail/2587931.html) operation to convert shard backups to cluster backups.
       * Sharded cluster instances that use cloud disks and were created after October 19, 2023 use cluster backups by default.
       *
       * @param request DescribeClusterBackupsRequest
       * @return DescribeClusterBackupsResponse
       */
      Models::DescribeClusterBackupsResponse describeClusterBackups(const Models::DescribeClusterBackupsRequest &request);

      /**
       * @summary Queries the restorable time range of a sharded cluster instance that uses cloud disks in ApsaraDB for MongoDB.
       *
       * @description - The MongoDB instance must be a sharded cluster instance that runs major engine version 4.4 or later and uses standard SSDs as the storage pattern.
       * - Only instances created before October 19, 2023 need to invoke the TransferClusterBackup operation to switch to the cluster backup mode. Instances that have been switched to the cluster backup mode or sharded cluster instances with cloud disks created on or after October 19, 2023 can directly invoke this operation.
       *
       * @param request DescribeClusterRecoverTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterRecoverTimeResponse
       */
      Models::DescribeClusterRecoverTimeResponse describeClusterRecoverTimeWithOptions(const Models::DescribeClusterRecoverTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the restorable time range of a sharded cluster instance that uses cloud disks in ApsaraDB for MongoDB.
       *
       * @description - The MongoDB instance must be a sharded cluster instance that runs major engine version 4.4 or later and uses standard SSDs as the storage pattern.
       * - Only instances created before October 19, 2023 need to invoke the TransferClusterBackup operation to switch to the cluster backup mode. Instances that have been switched to the cluster backup mode or sharded cluster instances with cloud disks created on or after October 19, 2023 can directly invoke this operation.
       *
       * @param request DescribeClusterRecoverTimeRequest
       * @return DescribeClusterRecoverTimeResponse
       */
      Models::DescribeClusterRecoverTimeResponse describeClusterRecoverTime(const Models::DescribeClusterRecoverTimeRequest &request);

      /**
       * @summary Queries the information of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary Queries the details of a specific key for a MongoDB instance.
       *
       * @description When you invoke the DescribeDBInstanceEncryptionKey operation, transparent data encryption (TDE) must be enabled for the instance by using Bring Your Own Key (BYOK). You can invoke [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html) to enable TDE.
       *
       * @param request DescribeDBInstanceEncryptionKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceEncryptionKeyResponse
       */
      Models::DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKeyWithOptions(const Models::DescribeDBInstanceEncryptionKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific key for a MongoDB instance.
       *
       * @description When you invoke the DescribeDBInstanceEncryptionKey operation, transparent data encryption (TDE) must be enabled for the instance by using Bring Your Own Key (BYOK). You can invoke [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html) to enable TDE.
       *
       * @param request DescribeDBInstanceEncryptionKeyRequest
       * @return DescribeDBInstanceEncryptionKeyResponse
       */
      Models::DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKey(const Models::DescribeDBInstanceEncryptionKeyRequest &request);

      /**
       * @summary Queries the collection frequency of monitoring data for an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitorWithOptions(const Models::DescribeDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the collection frequency of monitoring data for an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeDBInstanceMonitorRequest
       * @return DescribeDBInstanceMonitorResponse
       */
      Models::DescribeDBInstanceMonitorResponse describeDBInstanceMonitor(const Models::DescribeDBInstanceMonitorRequest &request);

      /**
       * @summary Queries the performance data of a MongoDB instance.
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(const Models::DescribeDBInstancePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of a MongoDB instance.
       *
       * @param request DescribeDBInstancePerformanceRequest
       * @return DescribeDBInstancePerformanceResponse
       */
      Models::DescribeDBInstancePerformanceResponse describeDBInstancePerformance(const Models::DescribeDBInstancePerformanceRequest &request);

      /**
       * @summary Query SSL configuration details for a MongoDB instance.
       *
       * @description To use this operation, the instance must meet the following requirements:
       * - The instance status is Running.
       * - The instance is a replica set instance or a sharded cluster instance.
       *   - The replica set instance must be version 3.4 or later.
       *   - The sharded cluster instance must use Enhanced SSDs (ESSDs).
       *
       * @param request DescribeDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(const Models::DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query SSL configuration details for a MongoDB instance.
       *
       * @description To use this operation, the instance must meet the following requirements:
       * - The instance status is Running.
       * - The instance is a replica set instance or a sharded cluster instance.
       *   - The replica set instance must be version 3.4 or later.
       *   - The sharded cluster instance must use Enhanced SSDs (ESSDs).
       *
       * @param request DescribeDBInstanceSSLRequest
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSL(const Models::DescribeDBInstanceSSLRequest &request);

      /**
       * @summary Gets instance type details.
       *
       * @param request DescribeDBInstanceSpecInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSpecInfoResponse
       */
      Models::DescribeDBInstanceSpecInfoResponse describeDBInstanceSpecInfoWithOptions(const Models::DescribeDBInstanceSpecInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets instance type details.
       *
       * @param request DescribeDBInstanceSpecInfoRequest
       * @return DescribeDBInstanceSpecInfoResponse
       */
      Models::DescribeDBInstanceSpecInfoResponse describeDBInstanceSpecInfo(const Models::DescribeDBInstanceSpecInfoRequest &request);

      /**
       * @summary Queries the primary/secondary switching logs of an ApsaraDB for MongoDB instance.
       *
       * @description Before you call this operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
       * - The instance is a replica set or sharded cluster instance.
       * - The instance uses local physical disks to store data.
       *
       * @param request DescribeDBInstanceSwitchLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSwitchLogResponse
       */
      Models::DescribeDBInstanceSwitchLogResponse describeDBInstanceSwitchLogWithOptions(const Models::DescribeDBInstanceSwitchLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the primary/secondary switching logs of an ApsaraDB for MongoDB instance.
       *
       * @description Before you call this operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
       * - The instance is a replica set or sharded cluster instance.
       * - The instance uses local physical disks to store data.
       *
       * @param request DescribeDBInstanceSwitchLogRequest
       * @return DescribeDBInstanceSwitchLogResponse
       */
      Models::DescribeDBInstanceSwitchLogResponse describeDBInstanceSwitchLog(const Models::DescribeDBInstanceSwitchLogRequest &request);

      /**
       * @summary Queries whether Transparent Data Encryption (TDE) is enabled for an ApsaraDB for MongoDB instance.
       *
       * @description > For more information about this feature, see [Settings for transparent data encryption TDE](https://help.aliyun.com/document_detail/131048.html).
       * When you invoke this operation, the instance must meet the following conditions:
       * - The instance is a replica set instance or a sharded cluster instance.
       * - The storage DPI engine of the instance is WiredTiger.
       * - The database DPI engine version of the instance is 4.0 or 4.2. If the database DPI engine version is earlier than the required version, you can invoke the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database DPI engine version.
       *
       * @param request DescribeDBInstanceTDEInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceTDEInfoResponse
       */
      Models::DescribeDBInstanceTDEInfoResponse describeDBInstanceTDEInfoWithOptions(const Models::DescribeDBInstanceTDEInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Transparent Data Encryption (TDE) is enabled for an ApsaraDB for MongoDB instance.
       *
       * @description > For more information about this feature, see [Settings for transparent data encryption TDE](https://help.aliyun.com/document_detail/131048.html).
       * When you invoke this operation, the instance must meet the following conditions:
       * - The instance is a replica set instance or a sharded cluster instance.
       * - The storage DPI engine of the instance is WiredTiger.
       * - The database DPI engine version of the instance is 4.0 or 4.2. If the database DPI engine version is earlier than the required version, you can invoke the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database DPI engine version.
       *
       * @param request DescribeDBInstanceTDEInfoRequest
       * @return DescribeDBInstanceTDEInfoResponse
       */
      Models::DescribeDBInstanceTDEInfoResponse describeDBInstanceTDEInfo(const Models::DescribeDBInstanceTDEInfoRequest &request);

      /**
       * @summary Queries a list of MongoDB instances.
       *
       * @description <props="china">By default, this operation queries the list of replica set instances (including single-node instances). If the request parameter **DBInstanceType** is not specified, the default value of this parameter is **replicate**. To query the list of sharded cluster instances, set **DBInstanceType** to **sharding**. To query the list of Serverless instances, set **DBInstanceType** to **serverless**.
       * <props="intl">By default, this operation queries the list of replica set instances (including single-node instances). If the request parameter **DBInstanceType** is not specified, the default value of this parameter is **replicate**. To query the list of sharded cluster instances, set **DBInstanceType** to **sharding**.
       *
       * @param request DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of MongoDB instances.
       *
       * @description <props="china">By default, this operation queries the list of replica set instances (including single-node instances). If the request parameter **DBInstanceType** is not specified, the default value of this parameter is **replicate**. To query the list of sharded cluster instances, set **DBInstanceType** to **sharding**. To query the list of Serverless instances, set **DBInstanceType** to **serverless**.
       * <props="intl">By default, this operation queries the list of replica set instances (including single-node instances). If the request parameter **DBInstanceType** is not specified, the default value of this parameter is **replicate**. To query the list of sharded cluster instances, set **DBInstanceType** to **sharding**.
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @summary Queries the overview of one or more ApsaraDB for MongoDB instances.
       *
       * @description - If you do not specify any instances, the operation returns overview information for all instances in the destination region associated with your Alibaba Cloud account.
       * - The results of this operation are not paginated.
       *
       * @param request DescribeDBInstancesOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesOverviewResponse
       */
      Models::DescribeDBInstancesOverviewResponse describeDBInstancesOverviewWithOptions(const Models::DescribeDBInstancesOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview of one or more ApsaraDB for MongoDB instances.
       *
       * @description - If you do not specify any instances, the operation returns overview information for all instances in the destination region associated with your Alibaba Cloud account.
       * - The results of this operation are not paginated.
       *
       * @param request DescribeDBInstancesOverviewRequest
       * @return DescribeDBInstancesOverviewResponse
       */
      Models::DescribeDBInstancesOverviewResponse describeDBInstancesOverview(const Models::DescribeDBInstancesOverviewRequest &request);

      /**
       * @summary Queries the error logs of a MongoDB instance.
       *
       * @description - This operation applies to instances of the **General-purpose Local Disk** and **Dedicated Local Disk** specification types.
       * - This operation is limited to 30 calls per minute. Exceeding this limit triggers throttling. Do not call this operation at a high frequency. For high-frequency access, use Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeErrorLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeErrorLogRecordsResponse
       */
      Models::DescribeErrorLogRecordsResponse describeErrorLogRecordsWithOptions(const Models::DescribeErrorLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the error logs of a MongoDB instance.
       *
       * @description - This operation applies to instances of the **General-purpose Local Disk** and **Dedicated Local Disk** specification types.
       * - This operation is limited to 30 calls per minute. Exceeding this limit triggers throttling. Do not call this operation at a high frequency. For high-frequency access, use Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeErrorLogRecordsRequest
       * @return DescribeErrorLogRecordsResponse
       */
      Models::DescribeErrorLogRecordsResponse describeErrorLogRecords(const Models::DescribeErrorLogRecordsRequest &request);

      /**
       * @summary Queries the global IP whitelist templates.
       *
       * @param request DescribeGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalSecurityIPGroupResponse
       */
      Models::DescribeGlobalSecurityIPGroupResponse describeGlobalSecurityIPGroupWithOptions(const Models::DescribeGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global IP whitelist templates.
       *
       * @param request DescribeGlobalSecurityIPGroupRequest
       * @return DescribeGlobalSecurityIPGroupResponse
       */
      Models::DescribeGlobalSecurityIPGroupResponse describeGlobalSecurityIPGroup(const Models::DescribeGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Queries the mapping between an instance and a global IP address whitelist template.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelationWithOptions(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mapping between an instance and a global IP address whitelist template.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelation(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request);

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
       * @summary Queries the overview of a task in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStatWithOptions(const Models::DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview of a task in the task center.
       *
       * @param request DescribeHistoryTasksStatRequest
       * @return DescribeHistoryTasksStatResponse
       */
      Models::DescribeHistoryTasksStatResponse describeHistoryTasksStat(const Models::DescribeHistoryTasksStatRequest &request);

      /**
       * @summary Queries the auto-renewal status of MongoDB instances.
       *
       * @description This operation is applicable to subscription instances.
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(const Models::DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal status of MongoDB instances.
       *
       * @description This operation is applicable to subscription instances.
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(const Models::DescribeInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Queries the restorable time ranges of an ApsaraDB for MongoDB replica set instance with cloud disks.
       *
       * @param request DescribeInstanceRecoverTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRecoverTimeResponse
       */
      Models::DescribeInstanceRecoverTimeResponse describeInstanceRecoverTimeWithOptions(const Models::DescribeInstanceRecoverTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the restorable time ranges of an ApsaraDB for MongoDB replica set instance with cloud disks.
       *
       * @param request DescribeInstanceRecoverTimeRequest
       * @return DescribeInstanceRecoverTimeResponse
       */
      Models::DescribeInstanceRecoverTimeResponse describeInstanceRecoverTime(const Models::DescribeInstanceRecoverTimeRequest &request);

      /**
       * @summary Queries the release notes of minor engine versions for a MongoDB instance.
       *
       * @param request DescribeKernelReleaseNotesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKernelReleaseNotesResponse
       */
      Models::DescribeKernelReleaseNotesResponse describeKernelReleaseNotesWithOptions(const Models::DescribeKernelReleaseNotesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the release notes of minor engine versions for a MongoDB instance.
       *
       * @param request DescribeKernelReleaseNotesRequest
       * @return DescribeKernelReleaseNotesResponse
       */
      Models::DescribeKernelReleaseNotesResponse describeKernelReleaseNotes(const Models::DescribeKernelReleaseNotesRequest &request);

      /**
       * @summary Queries Key Management Service (KMS) keys that are available for disk encryption.
       *
       * @description Queried keys are available only for disk encryption.
       *
       * @param request DescribeKmsKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKmsKeysResponse
       */
      Models::DescribeKmsKeysResponse describeKmsKeysWithOptions(const Models::DescribeKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Key Management Service (KMS) keys that are available for disk encryption.
       *
       * @description Queried keys are available only for disk encryption.
       *
       * @param request DescribeKmsKeysRequest
       * @return DescribeKmsKeysResponse
       */
      Models::DescribeKmsKeysResponse describeKmsKeys(const Models::DescribeKmsKeysRequest &request);

      /**
       * @summary You can view the configuration of MongoDB Log Service.
       *
       * @description This API applies to General-purpose and Dedicated instances that use local disks.
       * You can enable the audit log feature for ApsaraDB for MongoDB as needed. For more information, see [Enable audit logs](https://help.aliyun.com/document_detail/59903.html).
       * - As of January 6, 2022, the official version of the audit log feature is being rolled out to all regions. New requests for the free trial version are no longer accepted. For more information, see [[Notice\\] ApsaraDB for MongoDB launches pay-as-you-go audit logs and discontinues the free trial](~~377480~~).
       * - The official version of the audit log feature is pay-as-you-go. Charges are based on storage usage and retention period. For pricing details, see <props="china">[ApsaraDB for MongoDB pricing](https://www.aliyun.com/price/product?#/mongodb/detail/badds)<props="intl">[ApsaraDB for MongoDB pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
       *
       * @param request DescribeMongoDBLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMongoDBLogConfigResponse
       */
      Models::DescribeMongoDBLogConfigResponse describeMongoDBLogConfigWithOptions(const Models::DescribeMongoDBLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can view the configuration of MongoDB Log Service.
       *
       * @description This API applies to General-purpose and Dedicated instances that use local disks.
       * You can enable the audit log feature for ApsaraDB for MongoDB as needed. For more information, see [Enable audit logs](https://help.aliyun.com/document_detail/59903.html).
       * - As of January 6, 2022, the official version of the audit log feature is being rolled out to all regions. New requests for the free trial version are no longer accepted. For more information, see [[Notice\\] ApsaraDB for MongoDB launches pay-as-you-go audit logs and discontinues the free trial](~~377480~~).
       * - The official version of the audit log feature is pay-as-you-go. Charges are based on storage usage and retention period. For pricing details, see <props="china">[ApsaraDB for MongoDB pricing](https://www.aliyun.com/price/product?#/mongodb/detail/badds)<props="intl">[ApsaraDB for MongoDB pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
       *
       * @param request DescribeMongoDBLogConfigRequest
       * @return DescribeMongoDBLogConfigResponse
       */
      Models::DescribeMongoDBLogConfigResponse describeMongoDBLogConfig(const Models::DescribeMongoDBLogConfigRequest &request);

      /**
       * @summary Queries the parameter modification records of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeParameterModificationHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterModificationHistoryResponse
       */
      Models::DescribeParameterModificationHistoryResponse describeParameterModificationHistoryWithOptions(const Models::DescribeParameterModificationHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter modification records of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeParameterModificationHistoryRequest
       * @return DescribeParameterModificationHistoryResponse
       */
      Models::DescribeParameterModificationHistoryResponse describeParameterModificationHistory(const Models::DescribeParameterModificationHistoryRequest &request);

      /**
       * @summary Queries the default parameter templates for MongoDB instances.
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default parameter templates for MongoDB instances.
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Queries the parameter settings of a MongoDB instance.
       *
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter settings of a MongoDB instance.
       *
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary Queries pricing information.
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries pricing information.
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Retrieves a list of vSwitches.
       *
       * @description Queries the vSwitches that are available in a specified region and zone. Use this before creating an ApsaraDB for MongoDB instance to select a vSwitch.
       *
       * @param request DescribeRdsVSwitchsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVSwitchsResponse
       */
      Models::DescribeRdsVSwitchsResponse describeRdsVSwitchsWithOptions(const Models::DescribeRdsVSwitchsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of vSwitches.
       *
       * @description Queries the vSwitches that are available in a specified region and zone. Use this before creating an ApsaraDB for MongoDB instance to select a vSwitch.
       *
       * @param request DescribeRdsVSwitchsRequest
       * @return DescribeRdsVSwitchsResponse
       */
      Models::DescribeRdsVSwitchsResponse describeRdsVSwitchs(const Models::DescribeRdsVSwitchsRequest &request);

      /**
       * @summary Retrieves a list of VPCs.
       *
       * @description Queries available VPCs in a specified region and zone. Use this before creating an ApsaraDB for MongoDB instance to select a VPC.
       *
       * @param request DescribeRdsVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcsWithOptions(const Models::DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of VPCs.
       *
       * @description Queries available VPCs in a specified region and zone. Use this before creating an ApsaraDB for MongoDB instance to select a VPC.
       *
       * @param request DescribeRdsVpcsRequest
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcs(const Models::DescribeRdsVpcsRequest &request);

      /**
       * @summary Queries all regions and zones supported for an ApsaraDB for MongoDB instance.
       *
       * @description > To query available regions and zones in which an ApsaraDB for MongoDB instance can be created, call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all regions and zones supported for an ApsaraDB for MongoDB instance.
       *
       * @description > To query available regions and zones in which an ApsaraDB for MongoDB instance can be created, call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Get the price to renew a specific MongoDB instance for one month.
       *
       * @description This operation applies to subscription MongoDB instances.
       *
       * @param request DescribeRenewalPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPriceWithOptions(const Models::DescribeRenewalPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the price to renew a specific MongoDB instance for one month.
       *
       * @description This operation applies to subscription MongoDB instances.
       *
       * @param request DescribeRenewalPriceRequest
       * @return DescribeRenewalPriceResponse
       */
      Models::DescribeRenewalPriceResponse describeRenewalPrice(const Models::DescribeRenewalPriceRequest &request);

      /**
       * @summary Retrieves the role information and connection details for a MongoDB instance.
       *
       * @description This operation applies to replica set instances and single-node instances. It does not apply to sharded cluster instances.
       *
       * @param request DescribeReplicaSetRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReplicaSetRoleResponse
       */
      Models::DescribeReplicaSetRoleResponse describeReplicaSetRoleWithOptions(const Models::DescribeReplicaSetRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the role information and connection details for a MongoDB instance.
       *
       * @description This operation applies to replica set instances and single-node instances. It does not apply to sharded cluster instances.
       *
       * @param request DescribeReplicaSetRoleRequest
       * @return DescribeReplicaSetRoleResponse
       */
      Models::DescribeReplicaSetRoleResponse describeReplicaSetRole(const Models::DescribeReplicaSetRoleRequest &request);

      /**
       * @summary Queries the backup and restoration instances of a MongoDB instance within the last 7 days.
       *
       * @param request DescribeRestoreDBInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreDBInstanceListResponse
       */
      Models::DescribeRestoreDBInstanceListResponse describeRestoreDBInstanceListWithOptions(const Models::DescribeRestoreDBInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup and restoration instances of a MongoDB instance within the last 7 days.
       *
       * @param request DescribeRestoreDBInstanceListRequest
       * @return DescribeRestoreDBInstanceListResponse
       */
      Models::DescribeRestoreDBInstanceListResponse describeRestoreDBInstanceList(const Models::DescribeRestoreDBInstanceListRequest &request);

      /**
       * @summary Describes the status of a tag for a node.
       *
       * @param request DescribeRoleTagStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoleTagStatusResponse
       */
      Models::DescribeRoleTagStatusResponse describeRoleTagStatusWithOptions(const Models::DescribeRoleTagStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the status of a tag for a node.
       *
       * @param request DescribeRoleTagStatusRequest
       * @return DescribeRoleTagStatusResponse
       */
      Models::DescribeRoleTagStatusResponse describeRoleTagStatus(const Models::DescribeRoleTagStatusRequest &request);

      /**
       * @summary Queries the roles and zones of each node in a MongoDB instance.
       *
       * @description > For more information, see [View the zone of a node](https://help.aliyun.com/document_detail/123825.html).
       * This operation is applicable to replica set instances and sharded cluster instances. Standalone instances are not supported.
       *
       * @param request DescribeRoleZoneInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoleZoneInfoResponse
       */
      Models::DescribeRoleZoneInfoResponse describeRoleZoneInfoWithOptions(const Models::DescribeRoleZoneInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the roles and zones of each node in a MongoDB instance.
       *
       * @description > For more information, see [View the zone of a node](https://help.aliyun.com/document_detail/123825.html).
       * This operation is applicable to replica set instances and sharded cluster instances. Standalone instances are not supported.
       *
       * @param request DescribeRoleZoneInfoRequest
       * @return DescribeRoleZoneInfoResponse
       */
      Models::DescribeRoleZoneInfoResponse describeRoleZoneInfo(const Models::DescribeRoleZoneInfoRequest &request);

      /**
       * @summary Queries the running logs of an ApsaraDB for MongoDB instance.
       *
       * @description - This operation is applicable to instances of the **shared local disk**, **dedicated local disk**, and **cloud disk** specification types.
       * - This operation is limited to 30 calls per minute. If this limit is exceeded, the calls are throttled. Do not call this operation at a high frequency. If you need to call this operation at a high frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeRunningLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRunningLogRecordsResponse
       */
      Models::DescribeRunningLogRecordsResponse describeRunningLogRecordsWithOptions(const Models::DescribeRunningLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running logs of an ApsaraDB for MongoDB instance.
       *
       * @description - This operation is applicable to instances of the **shared local disk**, **dedicated local disk**, and **cloud disk** specification types.
       * - This operation is limited to 30 calls per minute. If this limit is exceeded, the calls are throttled. Do not call this operation at a high frequency. If you need to call this operation at a high frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeRunningLogRecordsRequest
       * @return DescribeRunningLogRecordsResponse
       */
      Models::DescribeRunningLogRecordsResponse describeRunningLogRecords(const Models::DescribeRunningLogRecordsRequest &request);

      /**
       * @summary Queries the Elastic Compute Service (ECS) security groups that are associated with an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfigurationWithOptions(const Models::DescribeSecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Elastic Compute Service (ECS) security groups that are associated with an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeSecurityGroupConfigurationRequest
       * @return DescribeSecurityGroupConfigurationResponse
       */
      Models::DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfiguration(const Models::DescribeSecurityGroupConfigurationRequest &request);

      /**
       * @summary Retrieves the IP whitelists of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeSecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIpsWithOptions(const Models::DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the IP whitelists of an ApsaraDB for MongoDB instance.
       *
       * @param request DescribeSecurityIpsRequest
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIps(const Models::DescribeSecurityIpsRequest &request);

      /**
       * @summary Retrieves the connection information for a MongoDB sharded cluster instance.
       *
       * @description This API is for sharded cluster instances only.
       *
       * @param request DescribeShardingNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeShardingNetworkAddressResponse
       */
      Models::DescribeShardingNetworkAddressResponse describeShardingNetworkAddressWithOptions(const Models::DescribeShardingNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the connection information for a MongoDB sharded cluster instance.
       *
       * @description This API is for sharded cluster instances only.
       *
       * @param request DescribeShardingNetworkAddressRequest
       * @return DescribeShardingNetworkAddressResponse
       */
      Models::DescribeShardingNetworkAddressResponse describeShardingNetworkAddress(const Models::DescribeShardingNetworkAddressRequest &request);

      /**
       * @summary Queries slow query log entries for a MongoDB instance.
       *
       * @description - This operation is applicable only to **general-purpose local-disk** and **dedicated local-disk** instances.
       * - You can call this operation up to 30 times per minute. To call this operation at a higher frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries slow query log entries for a MongoDB instance.
       *
       * @description - This operation is applicable only to **general-purpose local-disk** and **dedicated local-disk** instances.
       * - You can call this operation up to 30 times per minute. To call this operation at a higher frequency, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries all tags in a specified region.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all tags in a specified region.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the custom key list of an instance.
       *
       * @description You can use the custom keys obtained by calling DescribeUserEncryptionKeyList to enable transparent data encryption (TDE). For more information, see [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html).
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(const Models::DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom key list of an instance.
       *
       * @description You can use the custom keys obtained by calling DescribeUserEncryptionKeyList to enable transparent data encryption (TDE). For more information, see [ModifyDBInstanceTDE](https://help.aliyun.com/document_detail/131267.html).
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(const Models::DescribeUserEncryptionKeyListRequest &request);

      /**
       * @summary Retrieves a paginated list of VPCs.
       *
       * @param request DescribeVpcsForMongoDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcsForMongoDBResponse
       */
      Models::DescribeVpcsForMongoDBResponse describeVpcsForMongoDBWithOptions(const Models::DescribeVpcsForMongoDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of VPCs.
       *
       * @param request DescribeVpcsForMongoDBRequest
       * @return DescribeVpcsForMongoDBResponse
       */
      Models::DescribeVpcsForMongoDBResponse describeVpcsForMongoDB(const Models::DescribeVpcsForMongoDBRequest &request);

      /**
       * @summary Destroys an ApsaraDB for MongoDB instance.
       *
       * @description Before you call this operation, make sure that the instance meets the following requirements:
       * *   The instance is a replica set instance or a sharded cluster instance that uses local disks.
       * *   The billing method of the instance is subscription.
       * *   The instance has expired and is in the **Locking** state.
       * **
       * **Warning** Data cannot be restored after the instance is destroyed. Proceed with caution.
       *
       * @param request DestroyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DestroyInstanceResponse
       */
      Models::DestroyInstanceResponse destroyInstanceWithOptions(const Models::DestroyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Destroys an ApsaraDB for MongoDB instance.
       *
       * @description Before you call this operation, make sure that the instance meets the following requirements:
       * *   The instance is a replica set instance or a sharded cluster instance that uses local disks.
       * *   The billing method of the instance is subscription.
       * *   The instance has expired and is in the **Locking** state.
       * **
       * **Warning** Data cannot be restored after the instance is destroyed. Proceed with caution.
       *
       * @param request DestroyInstanceRequest
       * @return DestroyInstanceResponse
       */
      Models::DestroyInstanceResponse destroyInstance(const Models::DestroyInstanceRequest &request);

      /**
       * @summary Evaluates whether sufficient resources are available before you create an instance or change the specifications of an instance.
       *
       * @description This operation evaluates resources for ApsaraDB for MongoDB replica set and sharded cluster instances. It supports resource evaluation for creating replica set and sharded cluster instances, changing instance specifications, and adding nodes to sharded cluster instances.
       * > You can call this operation up to 200 times per minute. Exceeding this limit triggers throttling.
       *
       * @param request EvaluateResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateResourceResponse
       */
      Models::EvaluateResourceResponse evaluateResourceWithOptions(const Models::EvaluateResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Evaluates whether sufficient resources are available before you create an instance or change the specifications of an instance.
       *
       * @description This operation evaluates resources for ApsaraDB for MongoDB replica set and sharded cluster instances. It supports resource evaluation for creating replica set and sharded cluster instances, changing instance specifications, and adding nodes to sharded cluster instances.
       * > You can call this operation up to 200 times per minute. Exceeding this limit triggers throttling.
       *
       * @param request EvaluateResourceRequest
       * @return EvaluateResourceResponse
       */
      Models::EvaluateResourceResponse evaluateResource(const Models::EvaluateResourceRequest &request);

      /**
       * @summary Queries the relationship between ApsaraDB for MongoDB instances and tags.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the relationship between ApsaraDB for MongoDB instances and tags.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Migrates the zone of a MongoDB instance.
       *
       * @description - The MigrateAvailableZone operation does not support standalone instances. It is applicable to active cloud disk instances and local disk instances.
       * - The transparent data encryption (TDE) feature is not enabled for the instance.
       * - The destination zone and the current zone of the instance are in the same region.
       * - If the instance is deployed in a VPC, make sure that a vSwitch is created in the destination zone before you migrate the zone. For more information, see [Create a vSwitch](https://help.aliyun.com/document_detail/65387.html).
       *
       * @param request MigrateAvailableZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateAvailableZoneResponse
       */
      Models::MigrateAvailableZoneResponse migrateAvailableZoneWithOptions(const Models::MigrateAvailableZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates the zone of a MongoDB instance.
       *
       * @description - The MigrateAvailableZone operation does not support standalone instances. It is applicable to active cloud disk instances and local disk instances.
       * - The transparent data encryption (TDE) feature is not enabled for the instance.
       * - The destination zone and the current zone of the instance are in the same region.
       * - If the instance is deployed in a VPC, make sure that a vSwitch is created in the destination zone before you migrate the zone. For more information, see [Create a vSwitch](https://help.aliyun.com/document_detail/65387.html).
       *
       * @param request MigrateAvailableZoneRequest
       * @return MigrateAvailableZoneResponse
       */
      Models::MigrateAvailableZoneResponse migrateAvailableZone(const Models::MigrateAvailableZoneRequest &request);

      /**
       * @summary Migrates a MongoDB instance to another zone.
       *
       * @description - This operation is applicable to replica set instances. Standalone instances and sharded cluster instances are not supported.
       * - Transparent Data Encryption (TDE) is not enabled for the instance.
       * - The destination zone and the current zone of the instance must be in the same region.
       * - If the instance is deployed in a virtual private cloud (VPC), make sure that a vSwitch is created in the destination zone before you migrate the instance. For more information, see [Create a vSwitch](https://help.aliyun.com/document_detail/65387.html).
       *
       * @param request MigrateToOtherZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(const Models::MigrateToOtherZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates a MongoDB instance to another zone.
       *
       * @description - This operation is applicable to replica set instances. Standalone instances and sharded cluster instances are not supported.
       * - Transparent Data Encryption (TDE) is not enabled for the instance.
       * - The destination zone and the current zone of the instance must be in the same region.
       * - If the instance is deployed in a virtual private cloud (VPC), make sure that a vSwitch is created in the destination zone before you migrate the instance. For more information, see [Create a vSwitch](https://help.aliyun.com/document_detail/65387.html).
       *
       * @param request MigrateToOtherZoneRequest
       * @return MigrateToOtherZoneResponse
       */
      Models::MigrateToOtherZoneResponse migrateToOtherZone(const Models::MigrateToOtherZoneRequest &request);

      /**
       * @summary Modifies the description of the root account in an ApsaraDB for MongoDB instance.
       *
       * @description This operation is not supported for sharded cluster instances.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of the root account in an ApsaraDB for MongoDB instance.
       *
       * @description This operation is not supported for sharded cluster instances.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modifies the O&M task configuration of a MongoDB instance.
       *
       * @param request ModifyActiveOperationMaintenanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationMaintenanceConfigResponse
       */
      Models::ModifyActiveOperationMaintenanceConfigResponse modifyActiveOperationMaintenanceConfigWithOptions(const Models::ModifyActiveOperationMaintenanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the O&M task configuration of a MongoDB instance.
       *
       * @param request ModifyActiveOperationMaintenanceConfigRequest
       * @return ModifyActiveOperationMaintenanceConfigResponse
       */
      Models::ModifyActiveOperationMaintenanceConfigResponse modifyActiveOperationMaintenanceConfig(const Models::ModifyActiveOperationMaintenanceConfigRequest &request);

      /**
       * @summary Modifies the switchover time of scheduled O&M tasks for an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switchover time of scheduled O&M tasks for an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Modifies the advanced backup policy.
       *
       * @description Geo-redundancy applies only to cloud disk replica set and cloud disk sharded instances.
       *
       * @param tmpReq ModifyAdvancedBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAdvancedBackupPolicyResponse
       */
      Models::ModifyAdvancedBackupPolicyResponse modifyAdvancedBackupPolicyWithOptions(const Models::ModifyAdvancedBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the advanced backup policy.
       *
       * @description Geo-redundancy applies only to cloud disk replica set and cloud disk sharded instances.
       *
       * @param request ModifyAdvancedBackupPolicyRequest
       * @return ModifyAdvancedBackupPolicyResponse
       */
      Models::ModifyAdvancedBackupPolicyResponse modifyAdvancedBackupPolicy(const Models::ModifyAdvancedBackupPolicyRequest &request);

      /**
       * @summary Enables advanced backup.
       *
       * @description Enables advanced backup. This feature is supported only for cloud disk replica set and sharded cluster instances.
       *
       * @param request ModifyAdvancedBackupStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAdvancedBackupStatusResponse
       */
      Models::ModifyAdvancedBackupStatusResponse modifyAdvancedBackupStatusWithOptions(const Models::ModifyAdvancedBackupStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables advanced backup.
       *
       * @description Enables advanced backup. This feature is supported only for cloud disk replica set and sharded cluster instances.
       *
       * @param request ModifyAdvancedBackupStatusRequest
       * @return ModifyAdvancedBackupStatusResponse
       */
      Models::ModifyAdvancedBackupStatusResponse modifyAdvancedBackupStatus(const Models::ModifyAdvancedBackupStatusRequest &request);

      /**
       * @summary Modifies the collection types of audit logs for an ApsaraDB for MongoDB instance.
       *
       * @description - The instance must be in the Running instance status when you invoke this operation.
       * - This operation is limited to 30 calls per minute. If this limit is exceeded, the calls are throttled. Do not invoke this operation at a high frequency. If you require high-frequency calls, use a Logstore. For details, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request ModifyAuditLogFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAuditLogFilterResponse
       */
      Models::ModifyAuditLogFilterResponse modifyAuditLogFilterWithOptions(const Models::ModifyAuditLogFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the collection types of audit logs for an ApsaraDB for MongoDB instance.
       *
       * @description - The instance must be in the Running instance status when you invoke this operation.
       * - This operation is limited to 30 calls per minute. If this limit is exceeded, the calls are throttled. Do not invoke this operation at a high frequency. If you require high-frequency calls, use a Logstore. For details, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request ModifyAuditLogFilterRequest
       * @return ModifyAuditLogFilterResponse
       */
      Models::ModifyAuditLogFilterResponse modifyAuditLogFilter(const Models::ModifyAuditLogFilterRequest &request);

      /**
       * @summary Settings the audit log switch or log storage duration for an ApsaraDB for MongoDB instance.
       *
       * @description - This operation is limited to 30 calls per minute. If this limit is exceeded, the request is throttled. Do not call this operation at a high frequency. For high-frequency calls, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request ModifyAuditPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAuditPolicyResponse
       */
      Models::ModifyAuditPolicyResponse modifyAuditPolicyWithOptions(const Models::ModifyAuditPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Settings the audit log switch or log storage duration for an ApsaraDB for MongoDB instance.
       *
       * @description - This operation is limited to 30 calls per minute. If this limit is exceeded, the request is throttled. Do not call this operation at a high frequency. For high-frequency calls, use a Logstore. For more information, see [Manage a Logstore](https://help.aliyun.com/document_detail/48990.html).
       *
       * @param request ModifyAuditPolicyRequest
       * @return ModifyAuditPolicyResponse
       */
      Models::ModifyAuditPolicyResponse modifyAuditPolicy(const Models::ModifyAuditPolicyRequest &request);

      /**
       * @summary Modifies the time-to-live (TTL) of a MongoDB backup set.
       *
       * @description You can modify the TTL only for manual backups.
       * This operation is applicable only to MongoDB instances that use cloud disks.
       *
       * @param request ModifyBackupExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupExpireTimeResponse
       */
      Models::ModifyBackupExpireTimeResponse modifyBackupExpireTimeWithOptions(const Models::ModifyBackupExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the time-to-live (TTL) of a MongoDB backup set.
       *
       * @description You can modify the TTL only for manual backups.
       * This operation is applicable only to MongoDB instances that use cloud disks.
       *
       * @param request ModifyBackupExpireTimeRequest
       * @return ModifyBackupExpireTimeResponse
       */
      Models::ModifyBackupExpireTimeResponse modifyBackupExpireTime(const Models::ModifyBackupExpireTimeRequest &request);

      /**
       * @summary Modifies the backup policy of a MongoDB instance.
       *
       * @description Cross-region backup is applicable only to replica set and sharded cluster instances that use cloud disks.
       *
       * @param request ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the backup policy of a MongoDB instance.
       *
       * @description Cross-region backup is applicable only to replica set and sharded cluster instances that use cloud disks.
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Modifies instance release protection configuration.
       *
       * @description This operation is applicable only to pay-as-you-go instances.
       *
       * @param request ModifyDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAttributeResponse
       */
      Models::ModifyDBInstanceAttributeResponse modifyDBInstanceAttributeWithOptions(const Models::ModifyDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies instance release protection configuration.
       *
       * @description This operation is applicable only to pay-as-you-go instances.
       *
       * @param request ModifyDBInstanceAttributeRequest
       * @return ModifyDBInstanceAttributeResponse
       */
      Models::ModifyDBInstanceAttributeResponse modifyDBInstanceAttribute(const Models::ModifyDBInstanceAttributeRequest &request);

      /**
       * @summary Modifies instance configuration
       *
       * @param request ModifyDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(const Models::ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies instance configuration
       *
       * @param request ModifyDBInstanceConfigRequest
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfig(const Models::ModifyDBInstanceConfigRequest &request);

      /**
       * @summary Modifies the endpoint and port of an ApsaraDB for MongoDB instance.
       *
       * @description The instance types that support modifying the endpoint and port are as follows:
       * - You can modify the endpoints of instances with local disks and cloud disks.
       * - For sharded cluster instances, you can modify only the endpoints of Mongos nodes.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the endpoint and port of an ApsaraDB for MongoDB instance.
       *
       * @description The instance types that support modifying the endpoint and port are as follows:
       * - You can modify the endpoints of instances with local disks and cloud disks.
       * - For sharded cluster instances, you can modify only the endpoints of Mongos nodes.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary Modifies the name of an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(const Models::ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(const Models::ModifyDBInstanceDescriptionRequest &request);

      /**
       * @summary Modifies the disk type of an ApsaraDB for MongoDB instance.
       *
       * @description - This feature is not supported for instances with less than 40 GB of disk space.
       * - You can change the disk type only to an ESSD AutoPL disk (cloud_auto).
       * - The interval between two consecutive modifications to the provisioned input/output operations per second (IOPS) of an instance must be longer than one hour. For more information, see [Modify the performance of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
       *
       * @param request ModifyDBInstanceDiskTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDiskTypeResponse
       */
      Models::ModifyDBInstanceDiskTypeResponse modifyDBInstanceDiskTypeWithOptions(const Models::ModifyDBInstanceDiskTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the disk type of an ApsaraDB for MongoDB instance.
       *
       * @description - This feature is not supported for instances with less than 40 GB of disk space.
       * - You can change the disk type only to an ESSD AutoPL disk (cloud_auto).
       * - The interval between two consecutive modifications to the provisioned input/output operations per second (IOPS) of an instance must be longer than one hour. For more information, see [Modify the performance of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
       *
       * @param request ModifyDBInstanceDiskTypeRequest
       * @return ModifyDBInstanceDiskTypeResponse
       */
      Models::ModifyDBInstanceDiskTypeResponse modifyDBInstanceDiskType(const Models::ModifyDBInstanceDiskTypeRequest &request);

      /**
       * @summary Modifies the maintenance window of an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(const Models::ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(const Models::ModifyDBInstanceMaintainTimeRequest &request);

      /**
       * @summary Set the monitoring collection granularity for a MongoDB instance.
       *
       * @description > Due to changes in the monitoring collection granularity adjustment feature, this operation is only applicable to the previous version of the MongoDB console.
       * To use this operation, the instance must meet the following requirements:
       * - A replica set or sharded cluster instance is used.
       * - MongoDB 3.4 (the latest minor version) or MongoDB 4.0 is selected.
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitorWithOptions(const Models::ModifyDBInstanceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the monitoring collection granularity for a MongoDB instance.
       *
       * @description > Due to changes in the monitoring collection granularity adjustment feature, this operation is only applicable to the previous version of the MongoDB console.
       * To use this operation, the instance must meet the following requirements:
       * - A replica set or sharded cluster instance is used.
       * - MongoDB 3.4 (the latest minor version) or MongoDB 4.0 is selected.
       *
       * @param request ModifyDBInstanceMonitorRequest
       * @return ModifyDBInstanceMonitorResponse
       */
      Models::ModifyDBInstanceMonitorResponse modifyDBInstanceMonitor(const Models::ModifyDBInstanceMonitorRequest &request);

      /**
       * @summary Extends the classic network retention period for a MongoDB instance.
       *
       * @description When you call this operation, the instance must meet the following conditions:
       * * The instance is in the Running state.
       * * The network type of the instance is hybrid access mode.
       * > This operation is applicable to replica set instances and sharded cluster instances. Standalone instances are not supported.
       *
       * @param request ModifyDBInstanceNetExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetExpireTimeResponse
       */
      Models::ModifyDBInstanceNetExpireTimeResponse modifyDBInstanceNetExpireTimeWithOptions(const Models::ModifyDBInstanceNetExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Extends the classic network retention period for a MongoDB instance.
       *
       * @description When you call this operation, the instance must meet the following conditions:
       * * The instance is in the Running state.
       * * The network type of the instance is hybrid access mode.
       * > This operation is applicable to replica set instances and sharded cluster instances. Standalone instances are not supported.
       *
       * @param request ModifyDBInstanceNetExpireTimeRequest
       * @return ModifyDBInstanceNetExpireTimeResponse
       */
      Models::ModifyDBInstanceNetExpireTimeResponse modifyDBInstanceNetExpireTime(const Models::ModifyDBInstanceNetExpireTimeRequest &request);

      /**
       * @summary Switches the network type of a MongoDB instance.
       *
       * @description - This operation applies to replica set instances and sharded cluster instances. Single-node instances are not supported. Only the transform from the classic network type to the VPC network type is supported.
       * - This operation supports only instances that run MongoDB 4.2 or earlier and use local disks.
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkTypeWithOptions(const Models::ModifyDBInstanceNetworkTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the network type of a MongoDB instance.
       *
       * @description - This operation applies to replica set instances and sharded cluster instances. Single-node instances are not supported. Only the transform from the classic network type to the VPC network type is supported.
       * - This operation supports only instances that run MongoDB 4.2 or earlier and use local disks.
       *
       * @param request ModifyDBInstanceNetworkTypeRequest
       * @return ModifyDBInstanceNetworkTypeResponse
       */
      Models::ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkType(const Models::ModifyDBInstanceNetworkTypeRequest &request);

      /**
       * @summary Modifies the SSL configuration of a MongoDB instance.
       *
       * @description When you call the ModifyDBInstanceSSL operation, the instance must meet the following conditions: 
       * - The instance is in the Running state.
       * - The instance is a replica set or sharded cluster instance.
       *   - The MongoDB version of a replica set instance must be 3.4 or later.
       *   - The storage mode of a sharded cluster instance must be ESSD cloud disk.
       * > When you enable, update, or disable SSL, the instance restarts once. Perform this operation during off-peak hours.
       *
       * @param request ModifyDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSLWithOptions(const Models::ModifyDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SSL configuration of a MongoDB instance.
       *
       * @description When you call the ModifyDBInstanceSSL operation, the instance must meet the following conditions: 
       * - The instance is in the Running state.
       * - The instance is a replica set or sharded cluster instance.
       *   - The MongoDB version of a replica set instance must be 3.4 or later.
       *   - The storage mode of a sharded cluster instance must be ESSD cloud disk.
       * > When you enable, update, or disable SSL, the instance restarts once. Perform this operation during off-peak hours.
       *
       * @param request ModifyDBInstanceSSLRequest
       * @return ModifyDBInstanceSSLResponse
       */
      Models::ModifyDBInstanceSSLResponse modifyDBInstanceSSL(const Models::ModifyDBInstanceSSLRequest &request);

      /**
       * @summary Modifies the specifications or storage space of ApsaraDB for MongoDB standalone instances, replica set instances, and serverless instances. Serverless instances are supported only on the Alibaba Cloud China site.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       * This operation is applicable only to ApsaraDB for MongoDB <props="china"><ph>standalone instances, replica set instances, and serverless instances</ph><props="intl"><ph>standalone instances and replica set instances</ph>. To modify the configurations of a sharded cluster instance, call the [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html), [CreateNode](https://help.aliyun.com/document_detail/61911.html), [DeleteNode](https://help.aliyun.com/document_detail/61922.html), or [ModifyNodeSpecBatch](https://help.aliyun.com/document_detail/61816.html) operation based on your business requirements.
       *
       * @param request ModifyDBInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceSpecResponse
       */
      Models::ModifyDBInstanceSpecResponse modifyDBInstanceSpecWithOptions(const Models::ModifyDBInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications or storage space of ApsaraDB for MongoDB standalone instances, replica set instances, and serverless instances. Serverless instances are supported only on the Alibaba Cloud China site.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       * This operation is applicable only to ApsaraDB for MongoDB <props="china"><ph>standalone instances, replica set instances, and serverless instances</ph><props="intl"><ph>standalone instances and replica set instances</ph>. To modify the configurations of a sharded cluster instance, call the [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html), [CreateNode](https://help.aliyun.com/document_detail/61911.html), [DeleteNode](https://help.aliyun.com/document_detail/61922.html), or [ModifyNodeSpecBatch](https://help.aliyun.com/document_detail/61816.html) operation based on your business requirements.
       *
       * @param request ModifyDBInstanceSpecRequest
       * @return ModifyDBInstanceSpecResponse
       */
      Models::ModifyDBInstanceSpecResponse modifyDBInstanceSpec(const Models::ModifyDBInstanceSpecRequest &request);

      /**
       * @summary Modifies the Transparent Data Encryption (TDE) status of a MongoDB instance.
       *
       * @description Transparent Data Encryption (TDE) performs real-time I/O encryption and decryption on data files. Data is encrypted before it is written to the disk and decrypted when it is read from the disk into the memory. For more information, see [Configure TDE](https://help.aliyun.com/document_detail/131048.html).
       * > You cannot disable TDE after it is enabled.
       * When you call this operation, the instance must meet the following requirements:
       * - The instance is a replica set instance or a sharded cluster instance.
       * - The storage engine of the instance is WiredTiger.
       * - The storage type of the instance is local disk.
       * - The database version of the instance is 4.0 or 4.2. If the database version is earlier than 4.0, you can call the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database version.
       *
       * @param request ModifyDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceTDEResponse
       */
      Models::ModifyDBInstanceTDEResponse modifyDBInstanceTDEWithOptions(const Models::ModifyDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Transparent Data Encryption (TDE) status of a MongoDB instance.
       *
       * @description Transparent Data Encryption (TDE) performs real-time I/O encryption and decryption on data files. Data is encrypted before it is written to the disk and decrypted when it is read from the disk into the memory. For more information, see [Configure TDE](https://help.aliyun.com/document_detail/131048.html).
       * > You cannot disable TDE after it is enabled.
       * When you call this operation, the instance must meet the following requirements:
       * - The instance is a replica set instance or a sharded cluster instance.
       * - The storage engine of the instance is WiredTiger.
       * - The storage type of the instance is local disk.
       * - The database version of the instance is 4.0 or 4.2. If the database version is earlier than 4.0, you can call the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database version.
       *
       * @param request ModifyDBInstanceTDERequest
       * @return ModifyDBInstanceTDEResponse
       */
      Models::ModifyDBInstanceTDEResponse modifyDBInstanceTDE(const Models::ModifyDBInstanceTDERequest &request);

      /**
       * @summary Modifies the global IP whitelist template associated with an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroupWithOptions(const Models::ModifyGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the global IP whitelist template associated with an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroup(const Models::ModifyGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Modifies the name of a global IP whitelist template associated with an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyGlobalSecurityIPGroupNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupNameResponse
       */
      Models::ModifyGlobalSecurityIPGroupNameResponse modifyGlobalSecurityIPGroupNameWithOptions(const Models::ModifyGlobalSecurityIPGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a global IP whitelist template associated with an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyGlobalSecurityIPGroupNameRequest
       * @return ModifyGlobalSecurityIPGroupNameResponse
       */
      Models::ModifyGlobalSecurityIPGroupNameResponse modifyGlobalSecurityIPGroupName(const Models::ModifyGlobalSecurityIPGroupNameRequest &request);

      /**
       * @summary Modifies the mapping between a global whitelist template and an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupRelationResponse
       */
      Models::ModifyGlobalSecurityIPGroupRelationResponse modifyGlobalSecurityIPGroupRelationWithOptions(const Models::ModifyGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the mapping between a global whitelist template and an ApsaraDB for MongoDB instance.
       *
       * @param request ModifyGlobalSecurityIPGroupRelationRequest
       * @return ModifyGlobalSecurityIPGroupRelationResponse
       */
      Models::ModifyGlobalSecurityIPGroupRelationResponse modifyGlobalSecurityIPGroupRelation(const Models::ModifyGlobalSecurityIPGroupRelationRequest &request);

      /**
       * @summary Enables or disables auto-renewal for an ApsaraDB for MongoDB instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
       * This operation is applicable to subscription instances.
       * >  When auto-renewal is enabled, your payment will be collected nine days before the expiration date of ApsaraDB for MongoDB. Ensure that your account has sufficient balance.
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttributeWithOptions(const Models::ModifyInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables auto-renewal for an ApsaraDB for MongoDB instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
       * This operation is applicable to subscription instances.
       * >  When auto-renewal is enabled, your payment will be collected nine days before the expiration date of ApsaraDB for MongoDB. Ensure that your account has sufficient balance.
       *
       * @param request ModifyInstanceAutoRenewalAttributeRequest
       * @return ModifyInstanceAutoRenewalAttributeResponse
       */
      Models::ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttribute(const Models::ModifyInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Disables password-free access over Virtual Private Cloud (VPC) for an ApsaraDB for MongoDB instance.
       *
       * @description Before you call this operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
       * - The instance is a replica set or sharded cluster instance.
       * - The database engine version of the instance is 4.0 (with the minor version of mongodb_20190408_3.0.11 or later) or 4.2. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/62010.html) operation to view the database engine version of the instance. If necessary, you can call the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database engine version of the instance.
       * - The network type of the instance must be VPC. If the network type of the instance is classic network, you must call the [ModifyDBInstanceNetworkType](https://help.aliyun.com/document_detail/62138.html) operation to change the network type to VPC.
       * - You can only disable but not enable password-free access over VPC.
       *
       * @param request ModifyInstanceVpcAuthModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVpcAuthModeResponse
       */
      Models::ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthModeWithOptions(const Models::ModifyInstanceVpcAuthModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables password-free access over Virtual Private Cloud (VPC) for an ApsaraDB for MongoDB instance.
       *
       * @description Before you call this operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
       * - The instance is a replica set or sharded cluster instance.
       * - The database engine version of the instance is 4.0 (with the minor version of mongodb_20190408_3.0.11 or later) or 4.2. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/62010.html) operation to view the database engine version of the instance. If necessary, you can call the [UpgradeDBInstanceEngineVersion](https://help.aliyun.com/document_detail/67608.html) operation to upgrade the database engine version of the instance.
       * - The network type of the instance must be VPC. If the network type of the instance is classic network, you must call the [ModifyDBInstanceNetworkType](https://help.aliyun.com/document_detail/62138.html) operation to change the network type to VPC.
       * - You can only disable but not enable password-free access over VPC.
       *
       * @param request ModifyInstanceVpcAuthModeRequest
       * @return ModifyInstanceVpcAuthModeResponse
       */
      Models::ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthMode(const Models::ModifyInstanceVpcAuthModeRequest &request);

      /**
       * @summary Modifies the specifications and storage space of nodes in a MongoDB sharded cluster instance.
       *
       * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
       * > This operation is applicable only to sharded cluster instances.
       *
       * @param request ModifyNodeSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodeSpecResponse
       */
      Models::ModifyNodeSpecResponse modifyNodeSpecWithOptions(const Models::ModifyNodeSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications and storage space of nodes in a MongoDB sharded cluster instance.
       *
       * @description Make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
       * > This operation is applicable only to sharded cluster instances.
       *
       * @param request ModifyNodeSpecRequest
       * @return ModifyNodeSpecResponse
       */
      Models::ModifyNodeSpecResponse modifyNodeSpec(const Models::ModifyNodeSpecRequest &request);

      /**
       * @summary Modifies the configurations of one or more Mongos or shard nodes in an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       *  This operation is applicable only to ApsaraDB for MongoDB sharded cluster instances.
       * When you perform batch upgrade or decrease the quota on multiple sharded cluster instances, the target specifications are subject to certain constraints. For example, for storage capacity expansion, the target capacity must be greater than or equal to the current capacity. If the specifications of multiple sharded cluster instances are inconsistent, the system randomly selects the specifications of one sharded cluster instance to construct the constraints, which may cause the upgrade or decrease the quota to fail.
       * If the batch upgrade or decrease the quota process is not Normal, we recommend that you use the ModifyNodeSpec operation to perform an Upgrade/Downgrade on a single sharded cluster instance.
       *
       * @param request ModifyNodeSpecBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodeSpecBatchResponse
       */
      Models::ModifyNodeSpecBatchResponse modifyNodeSpecBatchWithOptions(const Models::ModifyNodeSpecBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of one or more Mongos or shard nodes in an ApsaraDB for MongoDB sharded cluster instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB.
       *  This operation is applicable only to ApsaraDB for MongoDB sharded cluster instances.
       * When you perform batch upgrade or decrease the quota on multiple sharded cluster instances, the target specifications are subject to certain constraints. For example, for storage capacity expansion, the target capacity must be greater than or equal to the current capacity. If the specifications of multiple sharded cluster instances are inconsistent, the system randomly selects the specifications of one sharded cluster instance to construct the constraints, which may cause the upgrade or decrease the quota to fail.
       * If the batch upgrade or decrease the quota process is not Normal, we recommend that you use the ModifyNodeSpec operation to perform an Upgrade/Downgrade on a single sharded cluster instance.
       *
       * @param request ModifyNodeSpecBatchRequest
       * @return ModifyNodeSpecBatchResponse
       */
      Models::ModifyNodeSpecBatchResponse modifyNodeSpecBatch(const Models::ModifyNodeSpecBatchRequest &request);

      /**
       * @summary Modifies the parameters of an ApsaraDB for MongoDB instance.
       *
       * @description - When you call this operation, the instance status must be running.
       * - If you call this operation to modify specific instance parameters that require a restart to take effect, the instance is automatically restarted after the operation is called. You can call the [DescribeParameterTemplates](https://help.aliyun.com/document_detail/67618.html) operation to identify which parameters require an instance restart to take effect after modification.
       *
       * @param request ModifyParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParametersResponse
       */
      Models::ModifyParametersResponse modifyParametersWithOptions(const Models::ModifyParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of an ApsaraDB for MongoDB instance.
       *
       * @description - When you call this operation, the instance status must be running.
       * - If you call this operation to modify specific instance parameters that require a restart to take effect, the instance is automatically restarted after the operation is called. You can call the [DescribeParameterTemplates](https://help.aliyun.com/document_detail/67618.html) operation to identify which parameters require an instance restart to take effect after modification.
       *
       * @param request ModifyParametersRequest
       * @return ModifyParametersResponse
       */
      Models::ModifyParametersResponse modifyParameters(const Models::ModifyParametersRequest &request);

      /**
       * @summary Moves an ApsaraDB for MongoDB instance to a specified resource group.
       *
       * @description Resource Management allows you to build an organizational structure for resources based on your business requirements. You can use resource directories, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ModifyResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroupWithOptions(const Models::ModifyResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves an ApsaraDB for MongoDB instance to a specified resource group.
       *
       * @description Resource Management allows you to build an organizational structure for resources based on your business requirements. You can use resource directories, folders, accounts, and resource groups to hierarchically organize and manage resources. For more information, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
       *
       * @param request ModifyResourceGroupRequest
       * @return ModifyResourceGroupResponse
       */
      Models::ModifyResourceGroupResponse modifyResourceGroup(const Models::ModifyResourceGroupRequest &request);

      /**
       * @summary Modifies the ECS security group bound to an ApsaraDB for MongoDB instance.
       *
       * @description > For a sharded cluster instance, the bound ECS security group takes effect only for mongos nodes.
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfigurationWithOptions(const Models::ModifySecurityGroupConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the ECS security group bound to an ApsaraDB for MongoDB instance.
       *
       * @description > For a sharded cluster instance, the bound ECS security group takes effect only for mongos nodes.
       *
       * @param request ModifySecurityGroupConfigurationRequest
       * @return ModifySecurityGroupConfigurationResponse
       */
      Models::ModifySecurityGroupConfigurationResponse modifySecurityGroupConfiguration(const Models::ModifySecurityGroupConfigurationRequest &request);

      /**
       * @summary Modifies the IP whitelist of a MongoDB instance.
       *
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP whitelist of a MongoDB instance.
       *
       * @param request ModifySecurityIpsRequest
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIps(const Models::ModifySecurityIpsRequest &request);

      /**
       * @summary Modifies the SRV connection address of a MongoDB instance.
       *
       * @description This operation applies only to replica set instances and sharded cluster instances that use disks.
       *
       * @param request ModifySrvNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySrvNetworkAddressResponse
       */
      Models::ModifySrvNetworkAddressResponse modifySrvNetworkAddressWithOptions(const Models::ModifySrvNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the SRV connection address of a MongoDB instance.
       *
       * @description This operation applies only to replica set instances and sharded cluster instances that use disks.
       *
       * @param request ModifySrvNetworkAddressRequest
       * @return ModifySrvNetworkAddressResponse
       */
      Models::ModifySrvNetworkAddressResponse modifySrvNetworkAddress(const Models::ModifySrvNetworkAddressRequest &request);

      /**
       * @summary Modifies the information of a task in the task center for an ApsaraDB for MongoDB instance.
       *
       * @description The actions performed by this operation for a task vary based on the current state of the task. The supported actions for a task can be obtained from the value of the actionInfo parameter in the DescribeHistoryTasks operation.
       *
       * @param request ModifyTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfoWithOptions(const Models::ModifyTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a task in the task center for an ApsaraDB for MongoDB instance.
       *
       * @description The actions performed by this operation for a task vary based on the current state of the task. The supported actions for a task can be obtained from the value of the actionInfo parameter in the DescribeHistoryTasks operation.
       *
       * @param request ModifyTaskInfoRequest
       * @return ModifyTaskInfoResponse
       */
      Models::ModifyTaskInfoResponse modifyTaskInfo(const Models::ModifyTaskInfoRequest &request);

      /**
       * @summary Releases the internal endpoint of a shard or Configserver node for a sharded cluster instance.
       *
       * @description - This operation releases the internal endpoint of a shard or Configserver node for a sharded cluster instance. For more information, see [Release the endpoint of a shard or Configserver node](https://help.aliyun.com/document_detail/134067.html).
       * - To release the public endpoint of a shard or Configserver node for a sharded cluster instance, call the [ReleasePublicNetworkAddress](https://help.aliyun.com/document_detail/67604.html) operation.
       *
       * @param request ReleaseNodePrivateNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseNodePrivateNetworkAddressResponse
       */
      Models::ReleaseNodePrivateNetworkAddressResponse releaseNodePrivateNetworkAddressWithOptions(const Models::ReleaseNodePrivateNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the internal endpoint of a shard or Configserver node for a sharded cluster instance.
       *
       * @description - This operation releases the internal endpoint of a shard or Configserver node for a sharded cluster instance. For more information, see [Release the endpoint of a shard or Configserver node](https://help.aliyun.com/document_detail/134067.html).
       * - To release the public endpoint of a shard or Configserver node for a sharded cluster instance, call the [ReleasePublicNetworkAddress](https://help.aliyun.com/document_detail/67604.html) operation.
       *
       * @param request ReleaseNodePrivateNetworkAddressRequest
       * @return ReleaseNodePrivateNetworkAddressResponse
       */
      Models::ReleaseNodePrivateNetworkAddressResponse releaseNodePrivateNetworkAddress(const Models::ReleaseNodePrivateNetworkAddressRequest &request);

      /**
       * @summary Releases the public endpoint of an ApsaraDB for MongoDB instance.
       *
       * @param request ReleasePublicNetworkAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePublicNetworkAddressResponse
       */
      Models::ReleasePublicNetworkAddressResponse releasePublicNetworkAddressWithOptions(const Models::ReleasePublicNetworkAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an ApsaraDB for MongoDB instance.
       *
       * @param request ReleasePublicNetworkAddressRequest
       * @return ReleasePublicNetworkAddressResponse
       */
      Models::ReleasePublicNetworkAddressResponse releasePublicNetworkAddress(const Models::ReleasePublicNetworkAddressRequest &request);

      /**
       * @summary Manually renews an ApsaraDB for MongoDB subscription instance.
       *
       * @description Make sure that you fully understand the billing methods and pricing of ApsaraDB for MongoDB before you call this operation. For more information about the pricing of ApsaraDB for MongoDB, visit the [pricing tab of the product buy page](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
       * This operation is only applicable to instances that use the subscription billing method.
       *
       * @param request RenewDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewDBInstanceResponse
       */
      Models::RenewDBInstanceResponse renewDBInstanceWithOptions(const Models::RenewDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually renews an ApsaraDB for MongoDB subscription instance.
       *
       * @description Make sure that you fully understand the billing methods and pricing of ApsaraDB for MongoDB before you call this operation. For more information about the pricing of ApsaraDB for MongoDB, visit the [pricing tab of the product buy page](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
       * This operation is only applicable to instances that use the subscription billing method.
       *
       * @param request RenewDBInstanceRequest
       * @return RenewDBInstanceResponse
       */
      Models::RenewDBInstanceResponse renewDBInstance(const Models::RenewDBInstanceRequest &request);

      /**
       * @summary Resets the password of the root account in an ApsaraDB for MongoDB instance.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of the root account in an ApsaraDB for MongoDB instance.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Restarts a MongoDB instance.
       *
       * @description You can call this operation to restart an instance, or a specific shard or mongos node in a sharded cluster instance.
       *
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a MongoDB instance.
       *
       * @description You can call this operation to restart an instance, or a specific shard or mongos node in a sharded cluster instance.
       *
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary Restarts a single node of an ApsaraDB for MongoDB instance.
       *
       * @description Limits:
       * *   The instance is in the running state.
       * *   The instance is a standard replica set or sharded cluster instance.
       *
       * @param request RestartNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartNodeResponse
       */
      Models::RestartNodeResponse restartNodeWithOptions(const Models::RestartNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a single node of an ApsaraDB for MongoDB instance.
       *
       * @description Limits:
       * *   The instance is in the running state.
       * *   The instance is a standard replica set or sharded cluster instance.
       *
       * @param request RestartNodeRequest
       * @return RestartNodeResponse
       */
      Models::RestartNodeResponse restartNode(const Models::RestartNodeRequest &request);

      /**
       * @summary Switches the primary and secondary nodes for an ApsaraDB for MongoDB instance.
       *
       * @description The instance must be running when you call this operation.
       * >
       * - This operation is applicable to replica set instances and sharded cluster instances, but cannot be performed on standalone instances.
       * - On replica set instances, the switch is performed between instances. On sharded cluster instances, the switch is performed between shards.
       *
       * @param request SwitchDBInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHAWithOptions(const Models::SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the primary and secondary nodes for an ApsaraDB for MongoDB instance.
       *
       * @description The instance must be running when you call this operation.
       * >
       * - This operation is applicable to replica set instances and sharded cluster instances, but cannot be performed on standalone instances.
       * - On replica set instances, the switch is performed between instances. On sharded cluster instances, the switch is performed between shards.
       *
       * @param request SwitchDBInstanceHARequest
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHA(const Models::SwitchDBInstanceHARequest &request);

      /**
       * @summary Binds tags to ApsaraDB for MongoDB instances.
       *
       * @description If you have a large number of instances, you can create multiple tags, bind the tags to the instances, and filter the instances by tag.
       * - A tag consists of a key and a value. Each key must be unique in a region for an Alibaba Cloud account. Different keys can be mapped to the same value.
       * - If the tag that you specify does not exist, this tag is automatically created and bound to the specified instance.
       * - If a tag that has the same key is already bound to the instance, the new tag overwrites the existing tag.
       * - You can bind up to 20 tags to each instance.
       * - You can bind tags to up to 50 instances each time you call the operation.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds tags to ApsaraDB for MongoDB instances.
       *
       * @description If you have a large number of instances, you can create multiple tags, bind the tags to the instances, and filter the instances by tag.
       * - A tag consists of a key and a value. Each key must be unique in a region for an Alibaba Cloud account. Different keys can be mapped to the same value.
       * - If the tag that you specify does not exist, this tag is automatically created and bound to the specified instance.
       * - If a tag that has the same key is already bound to the instance, the new tag overwrites the existing tag.
       * - You can bind up to 20 tags to each instance.
       * - You can bind tags to up to 50 instances each time you call the operation.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Switches the backup mode of an ApsaraDB for MongoDB sharded cluster instance to the cluster backup mode. After the instance is switched to the cluster backup mode, the instance supports high-frequency backup.
       *
       * @description - The instance is an ApsaraDB for MongoDB sharded cluster instance that runs MongoDB 4.4 or later and uses enhanced SSDs (ESSDs) to store data.
       * - You can call the TransferClusterBackup operation only for instances that are created before October 19, 2023 to switch the instances to the cluster backup mode. Cloud disk-based sharded cluster instances that are created on or after October 19, 2023 are set to the cluster backup mode by default.
       *
       * @param request TransferClusterBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferClusterBackupResponse
       */
      Models::TransferClusterBackupResponse transferClusterBackupWithOptions(const Models::TransferClusterBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the backup mode of an ApsaraDB for MongoDB sharded cluster instance to the cluster backup mode. After the instance is switched to the cluster backup mode, the instance supports high-frequency backup.
       *
       * @description - The instance is an ApsaraDB for MongoDB sharded cluster instance that runs MongoDB 4.4 or later and uses enhanced SSDs (ESSDs) to store data.
       * - You can call the TransferClusterBackup operation only for instances that are created before October 19, 2023 to switch the instances to the cluster backup mode. Cloud disk-based sharded cluster instances that are created on or after October 19, 2023 are set to the cluster backup mode by default.
       *
       * @param request TransferClusterBackupRequest
       * @return TransferClusterBackupResponse
       */
      Models::TransferClusterBackupResponse transferClusterBackup(const Models::TransferClusterBackupRequest &request);

      /**
       * @summary Transforms the billing method of an ApsaraDB for MongoDB database instance by converting a pay-as-you-go instance to an upfront subscription instance or a subscription instance to a pay-as-you-go instance.
       *
       * @description Ensure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
       * When you call this operation, the instance must meet the following requirements:
       * - The instance status is Running.
       * - The instance does not have unpaid orders for billing method transform.
       * - The instance type is not a legacy instance type (an instance type that is no longer available). For more information about legacy instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
       * > To change the billing method of an instance of a legacy instance type, call the [ModifyDBInstanceSpec](https://help.aliyun.com/document_detail/61816.html) or [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html) operation to change the instance type first.
       *
       * @param request TransformInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformInstanceChargeTypeResponse
       */
      Models::TransformInstanceChargeTypeResponse transformInstanceChargeTypeWithOptions(const Models::TransformInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transforms the billing method of an ApsaraDB for MongoDB database instance by converting a pay-as-you-go instance to an upfront subscription instance or a subscription instance to a pay-as-you-go instance.
       *
       * @description Ensure that you fully understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product#/mongodb/detail)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of ApsaraDB for MongoDB before you call this operation.
       * When you call this operation, the instance must meet the following requirements:
       * - The instance status is Running.
       * - The instance does not have unpaid orders for billing method transform.
       * - The instance type is not a legacy instance type (an instance type that is no longer available). For more information about legacy instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
       * > To change the billing method of an instance of a legacy instance type, call the [ModifyDBInstanceSpec](https://help.aliyun.com/document_detail/61816.html) or [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html) operation to change the instance type first.
       *
       * @param request TransformInstanceChargeTypeRequest
       * @return TransformInstanceChargeTypeResponse
       */
      Models::TransformInstanceChargeTypeResponse transformInstanceChargeType(const Models::TransformInstanceChargeTypeRequest &request);

      /**
       * @summary Changes the billing method of an ApsaraDB for MongoDB instance from pay-as-you-go to subscription.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
       * A subscription instance cannot be changed to a pay-as-you-go instance. To avoid wasting resources, proceed with caution.
       * Before you call this API operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
       * - The instance is in the running state.
       * - The billing method of the instance is pay-as-you-go.
       * - The instance has no unpaid subscription orders.
       * - The instance type is available for purchase. For more information about unavailable instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
       * > To change the billing method of an instance whose instance type is no longer available to subscription, call the [ModifyDBInstanceSpec](https://help.aliyun.com/document_detail/61816.html) or [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html) operation to first change the instance type.
       *
       * @param request TransformToPrePaidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformToPrePaidResponse
       */
      Models::TransformToPrePaidResponse transformToPrePaidWithOptions(const Models::TransformToPrePaidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of an ApsaraDB for MongoDB instance from pay-as-you-go to subscription.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing).
       * A subscription instance cannot be changed to a pay-as-you-go instance. To avoid wasting resources, proceed with caution.
       * Before you call this API operation, make sure that the ApsaraDB for MongoDB instance meets the following requirements:
       * - The instance is in the running state.
       * - The billing method of the instance is pay-as-you-go.
       * - The instance has no unpaid subscription orders.
       * - The instance type is available for purchase. For more information about unavailable instance types, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
       * > To change the billing method of an instance whose instance type is no longer available to subscription, call the [ModifyDBInstanceSpec](https://help.aliyun.com/document_detail/61816.html) or [ModifyNodeSpec](https://help.aliyun.com/document_detail/61923.html) operation to first change the instance type.
       *
       * @param request TransformToPrePaidRequest
       * @return TransformToPrePaidResponse
       */
      Models::TransformToPrePaidResponse transformToPrePaid(const Models::TransformToPrePaidRequest &request);

      /**
       * @summary Removes a tag if the tag is not added to another instance.
       *
       * @description >
       * - You can remove up to 20 tags at a time.
       * - If you remove a tag from all instances, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a tag if the tag is not added to another instance.
       *
       * @description >
       * - You can remove up to 20 tags at a time.
       * - If you remove a tag from all instances, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades the database version of an ApsaraDB for MongoDB instance.
       *
       * @description The instance must be in the running state when you call this operation.
       * > - The available database versions depend on the storage engine used by the instance. For more information, see [Upgrades of MongoDB major versions](https://help.aliyun.com/document_detail/398673.html). You can also call the [DescribeAvailableEngineVersion](https://help.aliyun.com/document_detail/141355.html) operation to query the available database versions.
       * >
       * > - You cannot downgrade the MongoDB version of an instance after you upgrade it.
       * >
       * > - The instance is automatically restarted for two to three times during the upgrade process. Make sure that you upgrade the instance during off-peak hours.
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersionWithOptions(const Models::UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the database version of an ApsaraDB for MongoDB instance.
       *
       * @description The instance must be in the running state when you call this operation.
       * > - The available database versions depend on the storage engine used by the instance. For more information, see [Upgrades of MongoDB major versions](https://help.aliyun.com/document_detail/398673.html). You can also call the [DescribeAvailableEngineVersion](https://help.aliyun.com/document_detail/141355.html) operation to query the available database versions.
       * >
       * > - You cannot downgrade the MongoDB version of an instance after you upgrade it.
       * >
       * > - The instance is automatically restarted for two to three times during the upgrade process. Make sure that you upgrade the instance during off-peak hours.
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersion(const Models::UpgradeDBInstanceEngineVersionRequest &request);

      /**
       * @summary Upgrades the minor version of an ApsaraDB for MongoDB instance.
       *
       * @description When you call the UpgradeDBInstanceKernelVersion operation, the instance must be in the Running state.
       * > * The UpgradeDBInstanceKernelVersion operation is applicable to replica set and sharded cluster instances, but not to standalone instances.
       * > * The instance will be restarted once during the upgrade. Call this operation during off-peak hours.
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(const Models::UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the minor version of an ApsaraDB for MongoDB instance.
       *
       * @description When you call the UpgradeDBInstanceKernelVersion operation, the instance must be in the Running state.
       * > * The UpgradeDBInstanceKernelVersion operation is applicable to replica set and sharded cluster instances, but not to standalone instances.
       * > * The instance will be restarted once during the upgrade. Call this operation during off-peak hours.
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(const Models::UpgradeDBInstanceKernelVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
