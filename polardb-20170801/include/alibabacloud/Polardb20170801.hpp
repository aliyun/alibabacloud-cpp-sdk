// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_POLARDB20170801_HPP_
#define ALIBABACLOUD_POLARDB20170801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Polardb20170801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Polardb20170801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Cancels O\\&M events at a time.
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels O\\&M events at a time.
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Cancels scheduled tasks that are not yet started.
       *
       * @param request CancelScheduleTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelScheduleTasksResponse
       */
      Models::CancelScheduleTasksResponse cancelScheduleTasksWithOptions(const Models::CancelScheduleTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels scheduled tasks that are not yet started.
       *
       * @param request CancelScheduleTasksRequest
       * @return CancelScheduleTasksResponse
       */
      Models::CancelScheduleTasksResponse cancelScheduleTasks(const Models::CancelScheduleTasksRequest &request);

      /**
       * @summary Checks whether an account name is valid or unique in a cluster.
       *
       * @param request CheckAccountNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountNameResponse
       */
      Models::CheckAccountNameResponse checkAccountNameWithOptions(const Models::CheckAccountNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether an account name is valid or unique in a cluster.
       *
       * @param request CheckAccountNameRequest
       * @return CheckAccountNameResponse
       */
      Models::CheckAccountNameResponse checkAccountName(const Models::CheckAccountNameRequest &request);

      /**
       * @summary Checks whether a database name is valid or whether the name is already used by another database in the current cluster.
       *
       * @param request CheckDBNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDBNameResponse
       */
      Models::CheckDBNameResponse checkDBNameWithOptions(const Models::CheckDBNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a database name is valid or whether the name is already used by another database in the current cluster.
       *
       * @param request CheckDBNameRequest
       * @return CheckDBNameResponse
       */
      Models::CheckDBNameResponse checkDBName(const Models::CheckDBNameRequest &request);

      /**
       * @summary Queries whether the cluster is authorized to use Key Management Service (KMS).
       *
       * @param request CheckKMSAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckKMSAuthorizedResponse
       */
      Models::CheckKMSAuthorizedResponse checkKMSAuthorizedWithOptions(const Models::CheckKMSAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the cluster is authorized to use Key Management Service (KMS).
       *
       * @param request CheckKMSAuthorizedRequest
       * @return CheckKMSAuthorizedResponse
       */
      Models::CheckKMSAuthorizedResponse checkKMSAuthorized(const Models::CheckKMSAuthorizedRequest &request);

      /**
       * @summary Checks whether a service-linked role (SLR) is created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a service-linked role (SLR) is created.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary 关闭DB4AI
       *
       * @param request CloseAITaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseAITaskResponse
       */
      Models::CloseAITaskResponse closeAITaskWithOptions(const Models::CloseAITaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭DB4AI
       *
       * @param request CloseAITaskRequest
       * @return CloseAITaskResponse
       */
      Models::CloseAITaskResponse closeAITask(const Models::CloseAITaskRequest &request);

      /**
       * @summary Cancels or completes the migration task that upgrades an RDS cluster to a PolarDB cluster.
       *
       * @description *   You can call this operation to cancel the migration task before data migration.
       * *   You can call this operation to perform the migration task after data migration.
       * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create an upgrade task. Set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request CloseDBClusterMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseDBClusterMigrationResponse
       */
      Models::CloseDBClusterMigrationResponse closeDBClusterMigrationWithOptions(const Models::CloseDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels or completes the migration task that upgrades an RDS cluster to a PolarDB cluster.
       *
       * @description *   You can call this operation to cancel the migration task before data migration.
       * *   You can call this operation to perform the migration task after data migration.
       * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create an upgrade task. Set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request CloseDBClusterMigrationRequest
       * @return CloseDBClusterMigrationResponse
       */
      Models::CloseDBClusterMigrationResponse closeDBClusterMigration(const Models::CloseDBClusterMigrationRequest &request);

      /**
       * @summary Creates a database account for a PolarDB cluster.
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database account for a PolarDB cluster.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Generates a lightweight license activation code.
       *
       * @param request CreateActivationCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateActivationCodeResponse
       */
      Models::CreateActivationCodeResponse createActivationCodeWithOptions(const Models::CreateActivationCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a lightweight license activation code.
       *
       * @param request CreateActivationCodeRequest
       * @return CreateActivationCodeResponse
       */
      Models::CreateActivationCodeResponse createActivationCode(const Models::CreateActivationCodeRequest &request);

      /**
       * @summary Creates a full snapshot backup for a PolarDB cluster.
       *
       * @description > 
       * *   You can manually create up to three backups for each cluster.
       * *   The `Exceeding the daily backup times of this DB cluster` error message indicates that three manual backups already exist in your cluster. You must delete existing backups before you call this operation to manually create backups. For more information about how to delete backups, see [Delete backups](https://help.aliyun.com/document_detail/98101.html).
       * *   After you call this operation, a backup task is created in the backend. The task may be time-consuming if you want to back up large amounts of data.
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a full snapshot backup for a PolarDB cluster.
       *
       * @description > 
       * *   You can manually create up to three backups for each cluster.
       * *   The `Exceeding the daily backup times of this DB cluster` error message indicates that three manual backups already exist in your cluster. You must delete existing backups before you call this operation to manually create backups. For more information about how to delete backups, see [Delete backups](https://help.aliyun.com/document_detail/98101.html).
       * *   After you call this operation, a backup task is created in the backend. The task may be time-consuming if you want to back up large amounts of data.
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates a cluster that is used to store cold data.
       *
       * @param request CreateColdStorageInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateColdStorageInstanceResponse
       */
      Models::CreateColdStorageInstanceResponse createColdStorageInstanceWithOptions(const Models::CreateColdStorageInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster that is used to store cold data.
       *
       * @param request CreateColdStorageInstanceRequest
       * @return CreateColdStorageInstanceResponse
       */
      Models::CreateColdStorageInstanceResponse createColdStorageInstance(const Models::CreateColdStorageInstanceRequest &request);

      /**
       * @summary CreateDBCluster.
       *
       * @param request CreateDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBClusterWithOptions(const Models::CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateDBCluster.
       *
       * @param request CreateDBClusterRequest
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBCluster(const Models::CreateDBClusterRequest &request);

      /**
       * @summary Creates a custom cluster endpoint for a PolarDB cluster.
       *
       * @param request CreateDBClusterEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterEndpointResponse
       */
      Models::CreateDBClusterEndpointResponse createDBClusterEndpointWithOptions(const Models::CreateDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom cluster endpoint for a PolarDB cluster.
       *
       * @param request CreateDBClusterEndpointRequest
       * @return CreateDBClusterEndpointResponse
       */
      Models::CreateDBClusterEndpointResponse createDBClusterEndpoint(const Models::CreateDBClusterEndpointRequest &request);

      /**
       * @summary Creates a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
       *
       * @description > You can create a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
       *
       * @param request CreateDBEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBEndpointAddressResponse
       */
      Models::CreateDBEndpointAddressResponse createDBEndpointAddressWithOptions(const Models::CreateDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
       *
       * @description > You can create a public endpoint for the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
       *
       * @param request CreateDBEndpointAddressRequest
       * @return CreateDBEndpointAddressResponse
       */
      Models::CreateDBEndpointAddressResponse createDBEndpointAddress(const Models::CreateDBEndpointAddressRequest &request);

      /**
       * @summary Creates a database link.
       *
       * @description A database link can be used to connect two PolarDB for PostgreSQL(Compatible with Oracle) clusters, or connect a PolarDB for PostgreSQL(Compatible with Oracle) cluster to a user-created PostgreSQL database that is hosted on an Elastic Compute Service (ECS) instance. You can use database links to query data across clusters.
       * > *   You can create up to 10 database links for a cluster.
       * > *   Each database link connects a source cluster and a destination cluster.
       * > *   The source cluster and the destination cluster or the destination ECS instance must be located in the same region.
       *
       * @param request CreateDBLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBLinkResponse
       */
      Models::CreateDBLinkResponse createDBLinkWithOptions(const Models::CreateDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database link.
       *
       * @description A database link can be used to connect two PolarDB for PostgreSQL(Compatible with Oracle) clusters, or connect a PolarDB for PostgreSQL(Compatible with Oracle) cluster to a user-created PostgreSQL database that is hosted on an Elastic Compute Service (ECS) instance. You can use database links to query data across clusters.
       * > *   You can create up to 10 database links for a cluster.
       * > *   Each database link connects a source cluster and a destination cluster.
       * > *   The source cluster and the destination cluster or the destination ECS instance must be located in the same region.
       *
       * @param request CreateDBLinkRequest
       * @return CreateDBLinkResponse
       */
      Models::CreateDBLinkResponse createDBLink(const Models::CreateDBLinkRequest &request);

      /**
       * @summary Adds a read-only node to a PolarDB cluster.
       *
       * @param request CreateDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodesWithOptions(const Models::CreateDBNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a read-only node to a PolarDB cluster.
       *
       * @param request CreateDBNodesRequest
       * @return CreateDBNodesResponse
       */
      Models::CreateDBNodesResponse createDBNodes(const Models::CreateDBNodesRequest &request);

      /**
       * @summary Creates a database for a PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the following requirements are met:
       * *   The cluster is in the Running state.
       * *   The cluster is unlocked.
       *
       * @param request CreateDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabaseWithOptions(const Models::CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database for a PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the following requirements are met:
       * *   The cluster is in the Running state.
       * *   The cluster is unlocked.
       *
       * @param request CreateDatabaseRequest
       * @return CreateDatabaseResponse
       */
      Models::CreateDatabaseResponse createDatabase(const Models::CreateDatabaseRequest &request);

      /**
       * @summary 创建全球数据网络
       *
       * @param request CreateGlobalDataNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalDataNetworkResponse
       */
      Models::CreateGlobalDataNetworkResponse createGlobalDataNetworkWithOptions(const Models::CreateGlobalDataNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建全球数据网络
       *
       * @param request CreateGlobalDataNetworkRequest
       * @return CreateGlobalDataNetworkResponse
       */
      Models::CreateGlobalDataNetworkResponse createGlobalDataNetwork(const Models::CreateGlobalDataNetworkRequest &request);

      /**
       * @summary Creates a global database network (GDN).
       *
       * @description >  A cluster belongs to only one GDN.
       *
       * @param request CreateGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalDatabaseNetworkResponse
       */
      Models::CreateGlobalDatabaseNetworkResponse createGlobalDatabaseNetworkWithOptions(const Models::CreateGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a global database network (GDN).
       *
       * @description >  A cluster belongs to only one GDN.
       *
       * @param request CreateGlobalDatabaseNetworkRequest
       * @return CreateGlobalDatabaseNetworkResponse
       */
      Models::CreateGlobalDatabaseNetworkResponse createGlobalDatabaseNetwork(const Models::CreateGlobalDatabaseNetworkRequest &request);

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
       * @summary Creates or obtains a virtual license order.
       *
       * @param request CreateOrGetVirtualLicenseOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrGetVirtualLicenseOrderResponse
       */
      Models::CreateOrGetVirtualLicenseOrderResponse createOrGetVirtualLicenseOrderWithOptions(const Models::CreateOrGetVirtualLicenseOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or obtains a virtual license order.
       *
       * @param request CreateOrGetVirtualLicenseOrderRequest
       * @return CreateOrGetVirtualLicenseOrderResponse
       */
      Models::CreateOrGetVirtualLicenseOrderResponse createOrGetVirtualLicenseOrder(const Models::CreateOrGetVirtualLicenseOrderRequest &request);

      /**
       * @summary Creates a parameter template.
       *
       * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * > You can call this operation only on a PolarDB for MySQL cluster.
       *
       * @param request CreateParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroupWithOptions(const Models::CreateParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a parameter template.
       *
       * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * > You can call this operation only on a PolarDB for MySQL cluster.
       *
       * @param request CreateParameterGroupRequest
       * @return CreateParameterGroupResponse
       */
      Models::CreateParameterGroupResponse createParameterGroup(const Models::CreateParameterGroupRequest &request);

      /**
       * @summary Creates a service-linked role (SLR).
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role (SLR).
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Purchases a storage plan.
       *
       * @param request CreateStoragePlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStoragePlanResponse
       */
      Models::CreateStoragePlanResponse createStoragePlanWithOptions(const Models::CreateStoragePlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a storage plan.
       *
       * @param request CreateStoragePlanRequest
       * @return CreateStoragePlanResponse
       */
      Models::CreateStoragePlanResponse createStoragePlan(const Models::CreateStoragePlanRequest &request);

      /**
       * @summary Deletes a database account for a PolarDB cluster.
       *
       * @description > Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database account for a PolarDB cluster.
       *
       * @description > Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary 删除PolarDB应用
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除PolarDB应用
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deletes the backup sets of a PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the cluster meets the following requirements:
       * *   The cluster is in the Running state.
       * *   The backup sets are in the Success state.
       * > *   You can call the [DescribeBackups](https://help.aliyun.com/document_detail/98102.html) operation to query the status of backup sets.
       * >*   After you delete the backup set file, the storage space that is occupied by the file is released. The released storage space is smaller than the size of the file because your snapshots share some data blocks
       *
       * @param request DeleteBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the backup sets of a PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the cluster meets the following requirements:
       * *   The cluster is in the Running state.
       * *   The backup sets are in the Success state.
       * > *   You can call the [DescribeBackups](https://help.aliyun.com/document_detail/98102.html) operation to query the status of backup sets.
       * >*   After you delete the backup set file, the storage space that is occupied by the file is released. The released storage space is smaller than the size of the file because your snapshots share some data blocks
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Releases a pay-as-you-go PolarDB cluster.
       *
       * @param request DeleteDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBClusterWithOptions(const Models::DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go PolarDB cluster.
       *
       * @param request DeleteDBClusterRequest
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBCluster(const Models::DeleteDBClusterRequest &request);

      /**
       * @summary Releases a custom cluster endpoint of a PolarDB cluster.
       *
       * @param request DeleteDBClusterEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterEndpointResponse
       */
      Models::DeleteDBClusterEndpointResponse deleteDBClusterEndpointWithOptions(const Models::DeleteDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a custom cluster endpoint of a PolarDB cluster.
       *
       * @param request DeleteDBClusterEndpointRequest
       * @return DeleteDBClusterEndpointResponse
       */
      Models::DeleteDBClusterEndpointResponse deleteDBClusterEndpoint(const Models::DeleteDBClusterEndpointRequest &request);

      /**
       * @summary Releases the public endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, and custom cluster endpoint.
       *
       * @description > *   You can delete a public-facing or classic network endpoint of the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
       * > *   Classic network endpoints are supported only on the China site (aliyun.com). Therefore, you do not need to delete classic network endpoints on the International site (alibabacloud.com).
       *
       * @param request DeleteDBEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBEndpointAddressResponse
       */
      Models::DeleteDBEndpointAddressResponse deleteDBEndpointAddressWithOptions(const Models::DeleteDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, and custom cluster endpoint.
       *
       * @description > *   You can delete a public-facing or classic network endpoint of the primary endpoint, the default cluster endpoint, or a custom cluster endpoint.
       * > *   Classic network endpoints are supported only on the China site (aliyun.com). Therefore, you do not need to delete classic network endpoints on the International site (alibabacloud.com).
       *
       * @param request DeleteDBEndpointAddressRequest
       * @return DeleteDBEndpointAddressResponse
       */
      Models::DeleteDBEndpointAddressResponse deleteDBEndpointAddress(const Models::DeleteDBEndpointAddressRequest &request);

      /**
       * @summary Deletes a database link from a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
       *
       * @param request DeleteDBLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBLinkResponse
       */
      Models::DeleteDBLinkResponse deleteDBLinkWithOptions(const Models::DeleteDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database link from a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
       *
       * @param request DeleteDBLinkRequest
       * @return DeleteDBLinkResponse
       */
      Models::DeleteDBLinkResponse deleteDBLink(const Models::DeleteDBLinkRequest &request);

      /**
       * @summary Deletes a read-only node from a PolarDB cluster.
       *
       * @param request DeleteDBNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodesWithOptions(const Models::DeleteDBNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a read-only node from a PolarDB cluster.
       *
       * @param request DeleteDBNodesRequest
       * @return DeleteDBNodesResponse
       */
      Models::DeleteDBNodesResponse deleteDBNodes(const Models::DeleteDBNodesRequest &request);

      /**
       * @summary Deletes a database from a PolarDB cluster.
       *
       * @description >- The cluster must be in the Running state and unlocked. Otherwise, the specified database cannot be deleted.
       * >- The delete operation is performed in an asynchronous manner. A long period of time may be required to delete a large database. A success response for this operation only indicates that the request to delete the database is sent. You must query the database to check whether the database is deleted.
       *
       * @param request DeleteDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabaseWithOptions(const Models::DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database from a PolarDB cluster.
       *
       * @description >- The cluster must be in the Running state and unlocked. Otherwise, the specified database cannot be deleted.
       * >- The delete operation is performed in an asynchronous manner. A long period of time may be required to delete a large database. A success response for this operation only indicates that the request to delete the database is sent. You must query the database to check whether the database is deleted.
       *
       * @param request DeleteDatabaseRequest
       * @return DeleteDatabaseResponse
       */
      Models::DeleteDatabaseResponse deleteDatabase(const Models::DeleteDatabaseRequest &request);

      /**
       * @summary DeleteGlobalDataNetwork
       *
       * @param request DeleteGlobalDataNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalDataNetworkResponse
       */
      Models::DeleteGlobalDataNetworkResponse deleteGlobalDataNetworkWithOptions(const Models::DeleteGlobalDataNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteGlobalDataNetwork
       *
       * @param request DeleteGlobalDataNetworkRequest
       * @return DeleteGlobalDataNetworkResponse
       */
      Models::DeleteGlobalDataNetworkResponse deleteGlobalDataNetwork(const Models::DeleteGlobalDataNetworkRequest &request);

      /**
       * @summary Deletes a global database network (GDN).
       *
       * @description >  You can delete a GDN only when the GDN includes only a primary cluster.
       *
       * @param request DeleteGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalDatabaseNetworkResponse
       */
      Models::DeleteGlobalDatabaseNetworkResponse deleteGlobalDatabaseNetworkWithOptions(const Models::DeleteGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global database network (GDN).
       *
       * @description >  You can delete a GDN only when the GDN includes only a primary cluster.
       *
       * @param request DeleteGlobalDatabaseNetworkRequest
       * @return DeleteGlobalDatabaseNetworkResponse
       */
      Models::DeleteGlobalDatabaseNetworkResponse deleteGlobalDatabaseNetwork(const Models::DeleteGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Deletes a global IP whitelist template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroupWithOptions(const Models::DeleteGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global IP whitelist template.
       *
       * @param request DeleteGlobalSecurityIPGroupRequest
       * @return DeleteGlobalSecurityIPGroupResponse
       */
      Models::DeleteGlobalSecurityIPGroupResponse deleteGlobalSecurityIPGroup(const Models::DeleteGlobalSecurityIPGroupRequest &request);

      /**
       * @summary Deletes a data masking rule.
       *
       * @param request DeleteMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRulesWithOptions(const Models::DeleteMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data masking rule.
       *
       * @param request DeleteMaskingRulesRequest
       * @return DeleteMaskingRulesResponse
       */
      Models::DeleteMaskingRulesResponse deleteMaskingRules(const Models::DeleteMaskingRulesRequest &request);

      /**
       * @summary Deletes a parameter template of a PolarDB cluster.
       *
       * @description You can use parameter templates to manage multiple parameters at a time and quickly apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * >  When you delete a parameter template, the parameter settings that are applied to PolarDB clusters are not affected.
       *
       * @param request DeleteParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroupWithOptions(const Models::DeleteParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a parameter template of a PolarDB cluster.
       *
       * @description You can use parameter templates to manage multiple parameters at a time and quickly apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * >  When you delete a parameter template, the parameter settings that are applied to PolarDB clusters are not affected.
       *
       * @param request DeleteParameterGroupRequest
       * @return DeleteParameterGroupResponse
       */
      Models::DeleteParameterGroupResponse deleteParameterGroup(const Models::DeleteParameterGroupRequest &request);

      /**
       * @summary 获取ai容器性能指标
       *
       * @param request DescribeAIDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAIDBClusterPerformanceResponse
       */
      Models::DescribeAIDBClusterPerformanceResponse describeAIDBClusterPerformanceWithOptions(const Models::DescribeAIDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ai容器性能指标
       *
       * @param request DescribeAIDBClusterPerformanceRequest
       * @return DescribeAIDBClusterPerformanceResponse
       */
      Models::DescribeAIDBClusterPerformanceResponse describeAIDBClusterPerformance(const Models::DescribeAIDBClusterPerformanceRequest &request);

      /**
       * @summary Queries the status of the PolarDB for AI feature.
       *
       * @param request DescribeAITaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAITaskStatusResponse
       */
      Models::DescribeAITaskStatusResponse describeAITaskStatusWithOptions(const Models::DescribeAITaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the PolarDB for AI feature.
       *
       * @param request DescribeAITaskStatusRequest
       * @return DescribeAITaskStatusResponse
       */
      Models::DescribeAITaskStatusResponse describeAITaskStatus(const Models::DescribeAITaskStatusRequest &request);

      /**
       * @summary Queries information about a database account of a PolarDB cluster.
       *
       * @param request DescribeAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccountsWithOptions(const Models::DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a database account of a PolarDB cluster.
       *
       * @param request DescribeAccountsRequest
       * @return DescribeAccountsResponse
       */
      Models::DescribeAccountsResponse describeAccounts(const Models::DescribeAccountsRequest &request);

      /**
       * @summary Queries the details of an activation code.
       *
       * @param request DescribeActivationCodeDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActivationCodeDetailsResponse
       */
      Models::DescribeActivationCodeDetailsResponse describeActivationCodeDetailsWithOptions(const Models::DescribeActivationCodeDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an activation code.
       *
       * @param request DescribeActivationCodeDetailsRequest
       * @return DescribeActivationCodeDetailsResponse
       */
      Models::DescribeActivationCodeDetailsResponse describeActivationCodeDetails(const Models::DescribeActivationCodeDetailsRequest &request);

      /**
       * @summary Queries a list of activation codes.
       *
       * @param request DescribeActivationCodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActivationCodesResponse
       */
      Models::DescribeActivationCodesResponse describeActivationCodesWithOptions(const Models::DescribeActivationCodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of activation codes.
       *
       * @param request DescribeActivationCodesRequest
       * @return DescribeActivationCodesResponse
       */
      Models::DescribeActivationCodesResponse describeActivationCodes(const Models::DescribeActivationCodesRequest &request);

      /**
       * @summary 用户侧查询运维任务
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户侧查询运维任务
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Queries the auto-renewal attributes of a subscription PolarDB cluster.
       *
       * @param request DescribeAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttributeWithOptions(const Models::DescribeAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal attributes of a subscription PolarDB cluster.
       *
       * @param request DescribeAutoRenewAttributeRequest
       * @return DescribeAutoRenewAttributeResponse
       */
      Models::DescribeAutoRenewAttributeResponse describeAutoRenewAttribute(const Models::DescribeAutoRenewAttributeRequest &request);

      /**
       * @summary Queries backup logs and the URLs to download the backup logs.
       *
       * @param request DescribeBackupLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupLogsResponse
       */
      Models::DescribeBackupLogsResponse describeBackupLogsWithOptions(const Models::DescribeBackupLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backup logs and the URLs to download the backup logs.
       *
       * @param request DescribeBackupLogsRequest
       * @return DescribeBackupLogsResponse
       */
      Models::DescribeBackupLogsResponse describeBackupLogs(const Models::DescribeBackupLogsRequest &request);

      /**
       * @summary Queries the automatic backup policy of a PolarDB cluster.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic backup policy of a PolarDB cluster.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the backup tasks of a PolarDB cluster.
       *
       * @param request DescribeBackupTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasksWithOptions(const Models::DescribeBackupTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup tasks of a PolarDB cluster.
       *
       * @param request DescribeBackupTasksRequest
       * @return DescribeBackupTasksResponse
       */
      Models::DescribeBackupTasksResponse describeBackupTasks(const Models::DescribeBackupTasksRequest &request);

      /**
       * @summary Queries the backup details of a PolarDB cluster.
       *
       * @param request DescribeBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup details of a PolarDB cluster.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Queries character sets that are supported by a PolarDB for MySQL cluster.
       *
       * @param request DescribeCharacterSetNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetNameWithOptions(const Models::DescribeCharacterSetNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries character sets that are supported by a PolarDB for MySQL cluster.
       *
       * @param request DescribeCharacterSetNameRequest
       * @return DescribeCharacterSetNameResponse
       */
      Models::DescribeCharacterSetNameResponse describeCharacterSetName(const Models::DescribeCharacterSetNameRequest &request);

      /**
       * @summary Queries the specifications of a cluster.
       *
       * @param request DescribeClassListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClassListResponse
       */
      Models::DescribeClassListResponse describeClassListWithOptions(const Models::DescribeClassListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of a cluster.
       *
       * @param request DescribeClassListRequest
       * @return DescribeClassListResponse
       */
      Models::DescribeClassListResponse describeClassList(const Models::DescribeClassListRequest &request);

      /**
       * @summary Queries the IP address whitelists and security groups of a PolarDB cluster.
       *
       * @param request DescribeDBClusterAccessWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAccessWhitelistResponse
       */
      Models::DescribeDBClusterAccessWhitelistResponse describeDBClusterAccessWhitelistWithOptions(const Models::DescribeDBClusterAccessWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address whitelists and security groups of a PolarDB cluster.
       *
       * @param request DescribeDBClusterAccessWhitelistRequest
       * @return DescribeDBClusterAccessWhitelistResponse
       */
      Models::DescribeDBClusterAccessWhitelistResponse describeDBClusterAccessWhitelist(const Models::DescribeDBClusterAccessWhitelistRequest &request);

      /**
       * @summary Queries information about a PolarDB cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(const Models::DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a PolarDB cluster.
       *
       * @param request DescribeDBClusterAttributeRequest
       * @return DescribeDBClusterAttributeResponse
       */
      Models::DescribeDBClusterAttributeResponse describeDBClusterAttribute(const Models::DescribeDBClusterAttributeRequest &request);

      /**
       * @summary Describe SQL collector for a PolarDB cluster. Features related to SQL collector include audit log and SQL Explorer.
       *
       * @param request DescribeDBClusterAuditLogCollectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAuditLogCollectorResponse
       */
      Models::DescribeDBClusterAuditLogCollectorResponse describeDBClusterAuditLogCollectorWithOptions(const Models::DescribeDBClusterAuditLogCollectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describe SQL collector for a PolarDB cluster. Features related to SQL collector include audit log and SQL Explorer.
       *
       * @param request DescribeDBClusterAuditLogCollectorRequest
       * @return DescribeDBClusterAuditLogCollectorResponse
       */
      Models::DescribeDBClusterAuditLogCollectorResponse describeDBClusterAuditLogCollector(const Models::DescribeDBClusterAuditLogCollectorRequest &request);

      /**
       * @summary Queries available resources in a PolarDB cluster.
       *
       * @param request DescribeDBClusterAvailableResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterAvailableResourcesResponse
       */
      Models::DescribeDBClusterAvailableResourcesResponse describeDBClusterAvailableResourcesWithOptions(const Models::DescribeDBClusterAvailableResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available resources in a PolarDB cluster.
       *
       * @param request DescribeDBClusterAvailableResourcesRequest
       * @return DescribeDBClusterAvailableResourcesResponse
       */
      Models::DescribeDBClusterAvailableResourcesResponse describeDBClusterAvailableResources(const Models::DescribeDBClusterAvailableResourcesRequest &request);

      /**
       * @summary Queries whether the source IP address can access a cluster.
       *
       * @param request DescribeDBClusterConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConnectivityResponse
       */
      Models::DescribeDBClusterConnectivityResponse describeDBClusterConnectivityWithOptions(const Models::DescribeDBClusterConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the source IP address can access a cluster.
       *
       * @param request DescribeDBClusterConnectivityRequest
       * @return DescribeDBClusterConnectivityResponse
       */
      Models::DescribeDBClusterConnectivityResponse describeDBClusterConnectivity(const Models::DescribeDBClusterConnectivityRequest &request);

      /**
       * @summary Queries the endpoints of a PolarDB cluster.
       *
       * @param request DescribeDBClusterEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterEndpointsResponse
       */
      Models::DescribeDBClusterEndpointsResponse describeDBClusterEndpointsWithOptions(const Models::DescribeDBClusterEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoints of a PolarDB cluster.
       *
       * @param request DescribeDBClusterEndpointsRequest
       * @return DescribeDBClusterEndpointsResponse
       */
      Models::DescribeDBClusterEndpointsResponse describeDBClusterEndpoints(const Models::DescribeDBClusterEndpointsRequest &request);

      /**
       * @summary The ID of the synchronous task.
       *
       * @description The ID of the request.
       *
       * @param request DescribeDBClusterMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterMigrationResponse
       */
      Models::DescribeDBClusterMigrationResponse describeDBClusterMigrationWithOptions(const Models::DescribeDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the synchronous task.
       *
       * @description The ID of the request.
       *
       * @param request DescribeDBClusterMigrationRequest
       * @return DescribeDBClusterMigrationResponse
       */
      Models::DescribeDBClusterMigrationResponse describeDBClusterMigration(const Models::DescribeDBClusterMigrationRequest &request);

      /**
       * @summary Queries the interval at which the monitoring data of a PolarDB cluster is collected.
       *
       * @param request DescribeDBClusterMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterMonitorResponse
       */
      Models::DescribeDBClusterMonitorResponse describeDBClusterMonitorWithOptions(const Models::DescribeDBClusterMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the interval at which the monitoring data of a PolarDB cluster is collected.
       *
       * @param request DescribeDBClusterMonitorRequest
       * @return DescribeDBClusterMonitorResponse
       */
      Models::DescribeDBClusterMonitorResponse describeDBClusterMonitor(const Models::DescribeDBClusterMonitorRequest &request);

      /**
       * @summary Queries the parameters of a PolarDB cluster.
       *
       * @param request DescribeDBClusterParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterParametersResponse
       */
      Models::DescribeDBClusterParametersResponse describeDBClusterParametersWithOptions(const Models::DescribeDBClusterParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters of a PolarDB cluster.
       *
       * @param request DescribeDBClusterParametersRequest
       * @return DescribeDBClusterParametersResponse
       */
      Models::DescribeDBClusterParametersResponse describeDBClusterParameters(const Models::DescribeDBClusterParametersRequest &request);

      /**
       * @summary Queries the performance data of a PolarDB cluster.
       *
       * @description *   When the monitoring data is collected every 5 seconds:
       *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * *   When the monitoring data is collected every 60 seconds:
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * >  By default, the monitoring data is collected once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the data collection interval to every 5 seconds.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(const Models::DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of a PolarDB cluster.
       *
       * @description *   When the monitoring data is collected every 5 seconds:
       *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * *   When the monitoring data is collected every 60 seconds:
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * >  By default, the monitoring data is collected once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the data collection interval to every 5 seconds.
       *
       * @param request DescribeDBClusterPerformanceRequest
       * @return DescribeDBClusterPerformanceResponse
       */
      Models::DescribeDBClusterPerformanceResponse describeDBClusterPerformance(const Models::DescribeDBClusterPerformanceRequest &request);

      /**
       * @summary Queries the Secure Sockets Layer (SSL) settings of a PolarDB cluster.
       *
       * @param request DescribeDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSLWithOptions(const Models::DescribeDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Secure Sockets Layer (SSL) settings of a PolarDB cluster.
       *
       * @param request DescribeDBClusterSSLRequest
       * @return DescribeDBClusterSSLResponse
       */
      Models::DescribeDBClusterSSLResponse describeDBClusterSSL(const Models::DescribeDBClusterSSLRequest &request);

      /**
       * @summary Queries the serverless configurations of a serverless cluster.
       *
       * @param request DescribeDBClusterServerlessConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterServerlessConfResponse
       */
      Models::DescribeDBClusterServerlessConfResponse describeDBClusterServerlessConfWithOptions(const Models::DescribeDBClusterServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the serverless configurations of a serverless cluster.
       *
       * @param request DescribeDBClusterServerlessConfRequest
       * @return DescribeDBClusterServerlessConfResponse
       */
      Models::DescribeDBClusterServerlessConfResponse describeDBClusterServerlessConf(const Models::DescribeDBClusterServerlessConfRequest &request);

      /**
       * @summary Queries the transparent data encryption (TDE) settings of a PolarDB cluster.
       *
       * @param request DescribeDBClusterTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterTDEResponse
       */
      Models::DescribeDBClusterTDEResponse describeDBClusterTDEWithOptions(const Models::DescribeDBClusterTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transparent data encryption (TDE) settings of a PolarDB cluster.
       *
       * @param request DescribeDBClusterTDERequest
       * @return DescribeDBClusterTDEResponse
       */
      Models::DescribeDBClusterTDEResponse describeDBClusterTDE(const Models::DescribeDBClusterTDERequest &request);

      /**
       * @summary Queries the information about the database engine version of a PolarDB for MySQL cluster.
       *
       * @param request DescribeDBClusterVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterVersionResponse
       */
      Models::DescribeDBClusterVersionResponse describeDBClusterVersionWithOptions(const Models::DescribeDBClusterVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the database engine version of a PolarDB for MySQL cluster.
       *
       * @param request DescribeDBClusterVersionRequest
       * @return DescribeDBClusterVersionResponse
       */
      Models::DescribeDBClusterVersionResponse describeDBClusterVersion(const Models::DescribeDBClusterVersionRequest &request);

      /**
       * @summary Queries PolarDB clusters or the clusters that can be accessed by an authorized RAM user.
       *
       * @param request DescribeDBClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClustersWithOptions(const Models::DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries PolarDB clusters or the clusters that can be accessed by an authorized RAM user.
       *
       * @param request DescribeDBClustersRequest
       * @return DescribeDBClustersResponse
       */
      Models::DescribeDBClustersResponse describeDBClusters(const Models::DescribeDBClustersRequest &request);

      /**
       * @summary Queries the information about PolarDB clusters that contain backup sets in a region.
       *
       * @param request DescribeDBClustersWithBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClustersWithBackupsResponse
       */
      Models::DescribeDBClustersWithBackupsResponse describeDBClustersWithBackupsWithOptions(const Models::DescribeDBClustersWithBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about PolarDB clusters that contain backup sets in a region.
       *
       * @param request DescribeDBClustersWithBackupsRequest
       * @return DescribeDBClustersWithBackupsResponse
       */
      Models::DescribeDBClustersWithBackupsResponse describeDBClustersWithBackups(const Models::DescribeDBClustersWithBackupsRequest &request);

      /**
       * @summary Queries attributes such as character sets and collations supported by a database in a PolarDB cluster.
       *
       * @param request DescribeDBInitializeVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInitializeVariableResponse
       */
      Models::DescribeDBInitializeVariableResponse describeDBInitializeVariableWithOptions(const Models::DescribeDBInitializeVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries attributes such as character sets and collations supported by a database in a PolarDB cluster.
       *
       * @param request DescribeDBInitializeVariableRequest
       * @return DescribeDBInitializeVariableResponse
       */
      Models::DescribeDBInitializeVariableResponse describeDBInitializeVariable(const Models::DescribeDBInitializeVariableRequest &request);

      /**
       * @summary Queries the database links of a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
       *
       * @description > You can query only the database links that use a PolarDB for Oracle cluster as the source.
       *
       * @param request DescribeDBLinksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBLinksResponse
       */
      Models::DescribeDBLinksResponse describeDBLinksWithOptions(const Models::DescribeDBLinksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database links of a PolarDB for PostgreSQL (Compatible with Oracle) cluster.
       *
       * @description > You can query only the database links that use a PolarDB for Oracle cluster as the source.
       *
       * @param request DescribeDBLinksRequest
       * @return DescribeDBLinksResponse
       */
      Models::DescribeDBLinksResponse describeDBLinks(const Models::DescribeDBLinksRequest &request);

      /**
       * @summary Queries the performance data of a node in a PolarDB cluster.
       *
       * @description *   When the monitoring data is collected every 5 seconds:
       *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * *   When the monitoring data is collected every 60 seconds:
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * >  By default, the monitoring data is collected once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the data collection interval to every 5 seconds.
       *
       * @param request DescribeDBNodePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBNodePerformanceResponse
       */
      Models::DescribeDBNodePerformanceResponse describeDBNodePerformanceWithOptions(const Models::DescribeDBNodePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of a node in a PolarDB cluster.
       *
       * @description *   When the monitoring data is collected every 5 seconds:
       *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * *   When the monitoring data is collected every 60 seconds:
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * >  By default, the monitoring data is collected once every 60 seconds. You can call the [ModifyDBClusterMonitor](https://help.aliyun.com/document_detail/159557.html) operation to set the data collection interval to every 5 seconds.
       *
       * @param request DescribeDBNodePerformanceRequest
       * @return DescribeDBNodePerformanceResponse
       */
      Models::DescribeDBNodePerformanceResponse describeDBNodePerformance(const Models::DescribeDBNodePerformanceRequest &request);

      /**
       * @summary Queries the parameters of a specified node in a cluster.
       *
       * @param request DescribeDBNodesParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBNodesParametersResponse
       */
      Models::DescribeDBNodesParametersResponse describeDBNodesParametersWithOptions(const Models::DescribeDBNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters of a specified node in a cluster.
       *
       * @param request DescribeDBNodesParametersRequest
       * @return DescribeDBNodesParametersResponse
       */
      Models::DescribeDBNodesParametersResponse describeDBNodesParameters(const Models::DescribeDBNodesParametersRequest &request);

      /**
       * @summary Queries the performance data of PolarProxy.
       *
       * @description > This operation is applicable only to PolarDB for MySQL clusters.
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformanceWithOptions(const Models::DescribeDBProxyPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of PolarProxy.
       *
       * @description > This operation is applicable only to PolarDB for MySQL clusters.
       *
       * @param request DescribeDBProxyPerformanceRequest
       * @return DescribeDBProxyPerformanceResponse
       */
      Models::DescribeDBProxyPerformanceResponse describeDBProxyPerformance(const Models::DescribeDBProxyPerformanceRequest &request);

      /**
       * @summary Queries the configurations of a cluster in Database Autonomy Service (DAS).
       *
       * @param request DescribeDasConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDasConfigResponse
       */
      Models::DescribeDasConfigResponse describeDasConfigWithOptions(const Models::DescribeDasConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a cluster in Database Autonomy Service (DAS).
       *
       * @param request DescribeDasConfigRequest
       * @return DescribeDasConfigResponse
       */
      Models::DescribeDasConfigResponse describeDasConfig(const Models::DescribeDasConfigRequest &request);

      /**
       * @summary Queries the information about databases in a PolarDB cluster.
       *
       * @param request DescribeDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabasesWithOptions(const Models::DescribeDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about databases in a PolarDB cluster.
       *
       * @param request DescribeDatabasesRequest
       * @return DescribeDatabasesResponse
       */
      Models::DescribeDatabasesResponse describeDatabases(const Models::DescribeDatabasesRequest &request);

      /**
       * @summary Queries the information about the backup sets in a released PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the PolarDB cluster is in the **Released** state. You must also confirm that the **Retain All Backups Permanently** or **Retain Last Automatic Backup Permanently** backup retention policy takes effect after you release the cluster. If you delete all backup sets after the cluster is released, you cannot use this API operation to query the cluster.
       * >  You can call the [DescribeDBClusterAttribute](https://help.aliyun.com/document_detail/98181.html) operation to query the cluster status.
       *
       * @param request DescribeDetachedBackupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackupsWithOptions(const Models::DescribeDetachedBackupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the backup sets in a released PolarDB cluster.
       *
       * @description Before you call this operation, make sure that the PolarDB cluster is in the **Released** state. You must also confirm that the **Retain All Backups Permanently** or **Retain Last Automatic Backup Permanently** backup retention policy takes effect after you release the cluster. If you delete all backup sets after the cluster is released, you cannot use this API operation to query the cluster.
       * >  You can call the [DescribeDBClusterAttribute](https://help.aliyun.com/document_detail/98181.html) operation to query the cluster status.
       *
       * @param request DescribeDetachedBackupsRequest
       * @return DescribeDetachedBackupsResponse
       */
      Models::DescribeDetachedBackupsResponse describeDetachedBackups(const Models::DescribeDetachedBackupsRequest &request);

      /**
       * @summary DescribeGlobalDataNetworkList
       *
       * @param request DescribeGlobalDataNetworkListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDataNetworkListResponse
       */
      Models::DescribeGlobalDataNetworkListResponse describeGlobalDataNetworkListWithOptions(const Models::DescribeGlobalDataNetworkListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeGlobalDataNetworkList
       *
       * @param request DescribeGlobalDataNetworkListRequest
       * @return DescribeGlobalDataNetworkListResponse
       */
      Models::DescribeGlobalDataNetworkListResponse describeGlobalDataNetworkList(const Models::DescribeGlobalDataNetworkListRequest &request);

      /**
       * @summary Queries the information about a Global Database Network (GDN).
       *
       * @param request DescribeGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDatabaseNetworkResponse
       */
      Models::DescribeGlobalDatabaseNetworkResponse describeGlobalDatabaseNetworkWithOptions(const Models::DescribeGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Global Database Network (GDN).
       *
       * @param request DescribeGlobalDatabaseNetworkRequest
       * @return DescribeGlobalDatabaseNetworkResponse
       */
      Models::DescribeGlobalDatabaseNetworkResponse describeGlobalDatabaseNetwork(const Models::DescribeGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Queries the information about all Global Database Networks (GDNs) that belong to an account.
       *
       * @param request DescribeGlobalDatabaseNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalDatabaseNetworksResponse
       */
      Models::DescribeGlobalDatabaseNetworksResponse describeGlobalDatabaseNetworksWithOptions(const Models::DescribeGlobalDatabaseNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all Global Database Networks (GDNs) that belong to an account.
       *
       * @param request DescribeGlobalDatabaseNetworksRequest
       * @return DescribeGlobalDatabaseNetworksResponse
       */
      Models::DescribeGlobalDatabaseNetworksResponse describeGlobalDatabaseNetworks(const Models::DescribeGlobalDatabaseNetworksRequest &request);

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
       * @summary Queries the relationship between a cluster and a global IP whitelist template.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelationWithOptions(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the relationship between a cluster and a global IP whitelist template.
       *
       * @param request DescribeGlobalSecurityIPGroupRelationRequest
       * @return DescribeGlobalSecurityIPGroupRelationResponse
       */
      Models::DescribeGlobalSecurityIPGroupRelationResponse describeGlobalSecurityIPGroupRelation(const Models::DescribeGlobalSecurityIPGroupRelationRequest &request);

      /**
       * @summary 查询实例高可用相关日志
       *
       * @param request DescribeHALogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHALogsResponse
       */
      Models::DescribeHALogsResponse describeHALogsWithOptions(const Models::DescribeHALogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例高可用相关日志
       *
       * @param request DescribeHALogsRequest
       * @return DescribeHALogsResponse
       */
      Models::DescribeHALogsResponse describeHALogs(const Models::DescribeHALogsRequest &request);

      /**
       * @summary 任务中心任务列表
       *
       * @param request DescribeHistoryTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasksWithOptions(const Models::DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务中心任务列表
       *
       * @param request DescribeHistoryTasksRequest
       * @return DescribeHistoryTasksResponse
       */
      Models::DescribeHistoryTasksResponse describeHistoryTasks(const Models::DescribeHistoryTasksRequest &request);

      /**
       * @summary Queries the information of a license order.
       *
       * @param request DescribeLicenseOrderDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLicenseOrderDetailsResponse
       */
      Models::DescribeLicenseOrderDetailsResponse describeLicenseOrderDetailsWithOptions(const Models::DescribeLicenseOrderDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a license order.
       *
       * @param request DescribeLicenseOrderDetailsRequest
       * @return DescribeLicenseOrderDetailsResponse
       */
      Models::DescribeLicenseOrderDetailsResponse describeLicenseOrderDetails(const Models::DescribeLicenseOrderDetailsRequest &request);

      /**
       * @summary Queries a list of license orders.
       *
       * @param request DescribeLicenseOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLicenseOrdersResponse
       */
      Models::DescribeLicenseOrdersResponse describeLicenseOrdersWithOptions(const Models::DescribeLicenseOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of license orders.
       *
       * @param request DescribeLicenseOrdersRequest
       * @return DescribeLicenseOrdersResponse
       */
      Models::DescribeLicenseOrdersResponse describeLicenseOrders(const Models::DescribeLicenseOrdersRequest &request);

      /**
       * @summary Queries the retention policy of log backups in a PolarDB cluster.
       *
       * @param request DescribeLogBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogBackupPolicyResponse
       */
      Models::DescribeLogBackupPolicyResponse describeLogBackupPolicyWithOptions(const Models::DescribeLogBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the retention policy of log backups in a PolarDB cluster.
       *
       * @param request DescribeLogBackupPolicyRequest
       * @return DescribeLogBackupPolicyResponse
       */
      Models::DescribeLogBackupPolicyResponse describeLogBackupPolicy(const Models::DescribeLogBackupPolicyRequest &request);

      /**
       * @summary Queries the data masking rules of a PolarDB cluster or the information about a specified masking rule.
       *
       * @param request DescribeMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRulesWithOptions(const Models::DescribeMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data masking rules of a PolarDB cluster or the information about a specified masking rule.
       *
       * @param request DescribeMaskingRulesRequest
       * @return DescribeMaskingRulesResponse
       */
      Models::DescribeMaskingRulesResponse describeMaskingRules(const Models::DescribeMaskingRulesRequest &request);

      /**
       * @summary Queries the details of the databases or tables that can be restored.
       *
       * @param request DescribeMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaListWithOptions(const Models::DescribeMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the databases or tables that can be restored.
       *
       * @param request DescribeMetaListRequest
       * @return DescribeMetaListResponse
       */
      Models::DescribeMetaListResponse describeMetaList(const Models::DescribeMetaListRequest &request);

      /**
       * @summary Queries the information about a parameter template.
       *
       * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * > This parameter is valid only for a PolarDB for MySQL cluster.
       *
       * @param request DescribeParameterGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroupWithOptions(const Models::DescribeParameterGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a parameter template.
       *
       * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * > This parameter is valid only for a PolarDB for MySQL cluster.
       *
       * @param request DescribeParameterGroupRequest
       * @return DescribeParameterGroupResponse
       */
      Models::DescribeParameterGroupResponse describeParameterGroup(const Models::DescribeParameterGroupRequest &request);

      /**
       * @summary Queries parameter templates that are available in a specified region.
       *
       * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * > This operation is applicable only to PolarDB for MySQL clusters.
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries parameter templates that are available in a specified region.
       *
       * @description You can use parameter templates to manage multiple parameters at a time and apply existing parameters to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * > This operation is applicable only to PolarDB for MySQL clusters.
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @summary Queries the default parameters in a cluster.
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default parameters in a cluster.
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Queries the information about a pending event.
       *
       * @param request DescribePendingMaintenanceActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePendingMaintenanceActionResponse
       */
      Models::DescribePendingMaintenanceActionResponse describePendingMaintenanceActionWithOptions(const Models::DescribePendingMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a pending event.
       *
       * @param request DescribePendingMaintenanceActionRequest
       * @return DescribePendingMaintenanceActionResponse
       */
      Models::DescribePendingMaintenanceActionResponse describePendingMaintenanceAction(const Models::DescribePendingMaintenanceActionRequest &request);

      /**
       * @summary Queries the numbers of scheduled events for different types of tasks.
       *
       * @param request DescribePendingMaintenanceActionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePendingMaintenanceActionsResponse
       */
      Models::DescribePendingMaintenanceActionsResponse describePendingMaintenanceActionsWithOptions(const Models::DescribePendingMaintenanceActionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the numbers of scheduled events for different types of tasks.
       *
       * @param request DescribePendingMaintenanceActionsRequest
       * @return DescribePendingMaintenanceActionsResponse
       */
      Models::DescribePendingMaintenanceActionsResponse describePendingMaintenanceActions(const Models::DescribePendingMaintenanceActionsRequest &request);

      /**
       * @summary Queries whether the SQL Explorer feature is enabled for the cluster.
       *
       * @param request DescribePolarSQLCollectorPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarSQLCollectorPolicyResponse
       */
      Models::DescribePolarSQLCollectorPolicyResponse describePolarSQLCollectorPolicyWithOptions(const Models::DescribePolarSQLCollectorPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the SQL Explorer feature is enabled for the cluster.
       *
       * @param request DescribePolarSQLCollectorPolicyRequest
       * @return DescribePolarSQLCollectorPolicyResponse
       */
      Models::DescribePolarSQLCollectorPolicyResponse describePolarSQLCollectorPolicy(const Models::DescribePolarSQLCollectorPolicyRequest &request);

      /**
       * @summary Queries the regions and zones available for PolarDB.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions and zones available for PolarDB.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the details of all scheduled tasks.
       *
       * @param request DescribeScheduleTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduleTasksResponse
       */
      Models::DescribeScheduleTasksResponse describeScheduleTasksWithOptions(const Models::DescribeScheduleTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all scheduled tasks.
       *
       * @param request DescribeScheduleTasksRequest
       * @return DescribeScheduleTasksResponse
       */
      Models::DescribeScheduleTasksResponse describeScheduleTasks(const Models::DescribeScheduleTasksRequest &request);

      /**
       * @summary Slow Log Details
       *
       * @description >- Only PolarDB MySQL Edition clusters support calling this interface.
       * >- Starting from September 1, 2024, due to the optimization of the SQL template algorithm, when calling this interface, the value of the SQLHash field will change. For more details, please refer to [Notice] Optimization of Slow SQL Template Algorithm (~~2845725~~).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Slow Log Details
       *
       * @description >- Only PolarDB MySQL Edition clusters support calling this interface.
       * >- Starting from September 1, 2024, due to the optimization of the SQL template algorithm, when calling this interface, the value of the SQLHash field will change. For more details, please refer to [Notice] Optimization of Slow SQL Template Algorithm (~~2845725~~).
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries the statistics about the slow query logs of a PolarDB cluster.
       *
       * @description > This operation is applicable only to PolarDB for MySQL clusters.
       *
       * @param request DescribeSlowLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogsWithOptions(const Models::DescribeSlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics about the slow query logs of a PolarDB cluster.
       *
       * @description > This operation is applicable only to PolarDB for MySQL clusters.
       *
       * @param request DescribeSlowLogsRequest
       * @return DescribeSlowLogsResponse
       */
      Models::DescribeSlowLogsResponse describeSlowLogs(const Models::DescribeSlowLogsRequest &request);

      /**
       * @summary Queries the status of the tasks that are generated based on API operations, such as the status of instance creation tasks.
       *
       * @description *   You can call this operation to view the details of a task that is generated by a specific API operation or in the PolarDB console. The system calls the specific API operation when you perform an operation in the PolarDB console. For example, you can view the details of the task when you call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation or [create a cluster](https://help.aliyun.com/document_detail/58769.html) in the PolarDB console.
       * *   You can view the details of tasks that are generated only when you call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create a cluster and `CreationOption` is not set to `CreateGdnStandby`.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the tasks that are generated based on API operations, such as the status of instance creation tasks.
       *
       * @description *   You can call this operation to view the details of a task that is generated by a specific API operation or in the PolarDB console. The system calls the specific API operation when you perform an operation in the PolarDB console. For example, you can view the details of the task when you call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation or [create a cluster](https://help.aliyun.com/document_detail/58769.html) in the PolarDB console.
       * *   You can view the details of tasks that are generated only when you call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create a cluster and `CreationOption` is not set to `CreateGdnStandby`.
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Queries the Key Management Service (KMS)-managed customer master keys (CMKs) that are used to encrypt data in a PolarDB cluster.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(const Models::DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Key Management Service (KMS)-managed customer master keys (CMKs) that are used to encrypt data in a PolarDB cluster.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(const Models::DescribeUserEncryptionKeyListRequest &request);

      /**
       * @summary Queries a vSwitch.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a vSwitch.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Disables a stable serverless cluster.
       *
       * @param request DisableDBClusterServerlessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDBClusterServerlessResponse
       */
      Models::DisableDBClusterServerlessResponse disableDBClusterServerlessWithOptions(const Models::DisableDBClusterServerlessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a stable serverless cluster.
       *
       * @param request DisableDBClusterServerlessRequest
       * @return DisableDBClusterServerlessResponse
       */
      Models::DisableDBClusterServerlessResponse disableDBClusterServerless(const Models::DisableDBClusterServerlessRequest &request);

      /**
       * @summary Enables a stable serverless cluster.
       *
       * @param request EnableDBClusterServerlessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDBClusterServerlessResponse
       */
      Models::EnableDBClusterServerlessResponse enableDBClusterServerlessWithOptions(const Models::EnableDBClusterServerlessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a stable serverless cluster.
       *
       * @param request EnableDBClusterServerlessRequest
       * @return EnableDBClusterServerlessResponse
       */
      Models::EnableDBClusterServerlessResponse enableDBClusterServerless(const Models::EnableDBClusterServerlessRequest &request);

      /**
       * @summary Modifies the status of SQL firewall rules for a cluster.
       *
       * @param request EnableFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableFirewallRulesResponse
       */
      Models::EnableFirewallRulesResponse enableFirewallRulesWithOptions(const Models::EnableFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of SQL firewall rules for a cluster.
       *
       * @param request EnableFirewallRulesRequest
       * @return EnableFirewallRulesResponse
       */
      Models::EnableFirewallRulesResponse enableFirewallRules(const Models::EnableFirewallRulesRequest &request);

      /**
       * @summary Evaluates available resources.
       *
       * @param request EvaluateRegionResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateRegionResourceResponse
       */
      Models::EvaluateRegionResourceResponse evaluateRegionResourceWithOptions(const Models::EvaluateRegionResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Evaluates available resources.
       *
       * @param request EvaluateRegionResourceRequest
       * @return EvaluateRegionResourceResponse
       */
      Models::EvaluateRegionResourceResponse evaluateRegionResource(const Models::EvaluateRegionResourceRequest &request);

      /**
       * @summary Performs a manual failover to promote a read-only node to the primary node in a PolarDB cluster.
       *
       * @param request FailoverDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FailoverDBClusterResponse
       */
      Models::FailoverDBClusterResponse failoverDBClusterWithOptions(const Models::FailoverDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a manual failover to promote a read-only node to the primary node in a PolarDB cluster.
       *
       * @param request FailoverDBClusterRequest
       * @return FailoverDBClusterResponse
       */
      Models::FailoverDBClusterResponse failoverDBCluster(const Models::FailoverDBClusterRequest &request);

      /**
       * @summary Grants a standard account the permissions to access one or more databases in a specified PolarDB cluster.
       *
       * @description > *   An account can be authorized to access one or more databases.
       * > *   If the specified account already has the access permissions on the specified databases, the operation returns a successful response.
       * > *   Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
       * > *   You can call this operation only on a PolarDB for MySQL cluster.
       * > *   By default, a privileged account for a cluster has all the permissions on the databases in the cluster.
       *
       * @param request GrantAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilegeWithOptions(const Models::GrantAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a standard account the permissions to access one or more databases in a specified PolarDB cluster.
       *
       * @description > *   An account can be authorized to access one or more databases.
       * > *   If the specified account already has the access permissions on the specified databases, the operation returns a successful response.
       * > *   Before you call this operation, make sure that the cluster is in the Running state. Otherwise, the operation fails.
       * > *   You can call this operation only on a PolarDB for MySQL cluster.
       * > *   By default, a privileged account for a cluster has all the permissions on the databases in the cluster.
       *
       * @param request GrantAccountPrivilegeRequest
       * @return GrantAccountPrivilegeResponse
       */
      Models::GrantAccountPrivilegeResponse grantAccountPrivilege(const Models::GrantAccountPrivilegeRequest &request);

      /**
       * @summary Queries the tags that are added to one or more PolarDB clusters, or the PolarDB clusters to which one or more tags are added.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to one or more PolarDB clusters, or the PolarDB clusters to which one or more tags are added.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Manually starts a cluster.
       *
       * @param request ManuallyStartDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManuallyStartDBClusterResponse
       */
      Models::ManuallyStartDBClusterResponse manuallyStartDBClusterWithOptions(const Models::ManuallyStartDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually starts a cluster.
       *
       * @param request ManuallyStartDBClusterRequest
       * @return ManuallyStartDBClusterResponse
       */
      Models::ManuallyStartDBClusterResponse manuallyStartDBCluster(const Models::ManuallyStartDBClusterRequest &request);

      /**
       * @summary Modifies the description of a database account of a PolarDB cluster.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database account of a PolarDB cluster.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Changes the password of a database account for a specified PolarDB cluster.
       *
       * @param request ModifyAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPasswordWithOptions(const Models::ModifyAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the password of a database account for a specified PolarDB cluster.
       *
       * @param request ModifyAccountPasswordRequest
       * @return ModifyAccountPasswordResponse
       */
      Models::ModifyAccountPasswordResponse modifyAccountPassword(const Models::ModifyAccountPasswordRequest &request);

      /**
       * @summary Modifies the switching time of scheduled O\\&M events for an instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switching time of scheduled O\\&M events for an instance.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Modifies the auto-renewal attributes of a subscription PolarDB cluster.
       *
       * @param request ModifyAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttributeWithOptions(const Models::ModifyAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the auto-renewal attributes of a subscription PolarDB cluster.
       *
       * @param request ModifyAutoRenewAttributeRequest
       * @return ModifyAutoRenewAttributeResponse
       */
      Models::ModifyAutoRenewAttributeResponse modifyAutoRenewAttribute(const Models::ModifyAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies the automatic backup policy of a PolarDB cluster.
       *
       * @description > You can also modify the automatic backup policy of a PolarDB cluster in the console. For more information, see [Backup settings](https://help.aliyun.com/document_detail/280422.html).
       *
       * @param tmpReq ModifyBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(const Models::ModifyBackupPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic backup policy of a PolarDB cluster.
       *
       * @description > You can also modify the automatic backup policy of a PolarDB cluster in the console. For more information, see [Backup settings](https://help.aliyun.com/document_detail/280422.html).
       *
       * @param request ModifyBackupPolicyRequest
       * @return ModifyBackupPolicyResponse
       */
      Models::ModifyBackupPolicyResponse modifyBackupPolicy(const Models::ModifyBackupPolicyRequest &request);

      /**
       * @summary Modifies the configurations of a PolarDB for MySQL cluster.
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a PolarDB for MySQL cluster.
       *
       * @param request ModifyDBClusterRequest
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBCluster(const Models::ModifyDBClusterRequest &request);

      /**
       * @summary Creates or modifies the whitelists (IP whitelists and security groups) of a specified cluster.
       *
       * @param request ModifyDBClusterAccessWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAccessWhitelistResponse
       */
      Models::ModifyDBClusterAccessWhitelistResponse modifyDBClusterAccessWhitelistWithOptions(const Models::ModifyDBClusterAccessWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies the whitelists (IP whitelists and security groups) of a specified cluster.
       *
       * @param request ModifyDBClusterAccessWhitelistRequest
       * @return ModifyDBClusterAccessWhitelistResponse
       */
      Models::ModifyDBClusterAccessWhitelistResponse modifyDBClusterAccessWhitelist(const Models::ModifyDBClusterAccessWhitelistRequest &request);

      /**
       * @summary Modifies cluster parameters and applies them to specified nodes.
       *
       * @param request ModifyDBClusterAndNodesParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAndNodesParametersResponse
       */
      Models::ModifyDBClusterAndNodesParametersResponse modifyDBClusterAndNodesParametersWithOptions(const Models::ModifyDBClusterAndNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies cluster parameters and applies them to specified nodes.
       *
       * @param request ModifyDBClusterAndNodesParametersRequest
       * @return ModifyDBClusterAndNodesParametersResponse
       */
      Models::ModifyDBClusterAndNodesParametersResponse modifyDBClusterAndNodesParameters(const Models::ModifyDBClusterAndNodesParametersRequest &request);

      /**
       * @summary Changes the high availability mode of the cluster.
       *
       * @param request ModifyDBClusterArchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterArchResponse
       */
      Models::ModifyDBClusterArchResponse modifyDBClusterArchWithOptions(const Models::ModifyDBClusterArchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the high availability mode of the cluster.
       *
       * @param request ModifyDBClusterArchRequest
       * @return ModifyDBClusterArchResponse
       */
      Models::ModifyDBClusterArchResponse modifyDBClusterArch(const Models::ModifyDBClusterArchRequest &request);

      /**
       * @summary Enables or disables SQL collector for a PolarDB cluster. The features related to SQL collector include Audit Logs and SQL Explorer.
       *
       * @param request ModifyDBClusterAuditLogCollectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterAuditLogCollectorResponse
       */
      Models::ModifyDBClusterAuditLogCollectorResponse modifyDBClusterAuditLogCollectorWithOptions(const Models::ModifyDBClusterAuditLogCollectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables SQL collector for a PolarDB cluster. The features related to SQL collector include Audit Logs and SQL Explorer.
       *
       * @param request ModifyDBClusterAuditLogCollectorRequest
       * @return ModifyDBClusterAuditLogCollectorResponse
       */
      Models::ModifyDBClusterAuditLogCollectorResponse modifyDBClusterAuditLogCollector(const Models::ModifyDBClusterAuditLogCollectorRequest &request);

      /**
       * @summary Enables or disables the cluster lock feature for a PolarDB cluster.
       *
       * @param request ModifyDBClusterDeletionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDeletionResponse
       */
      Models::ModifyDBClusterDeletionResponse modifyDBClusterDeletionWithOptions(const Models::ModifyDBClusterDeletionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the cluster lock feature for a PolarDB cluster.
       *
       * @param request ModifyDBClusterDeletionRequest
       * @return ModifyDBClusterDeletionResponse
       */
      Models::ModifyDBClusterDeletionResponse modifyDBClusterDeletion(const Models::ModifyDBClusterDeletionRequest &request);

      /**
       * @summary Modifies the name of a PolarDB cluster.
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(const Models::ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a PolarDB cluster.
       *
       * @param request ModifyDBClusterDescriptionRequest
       * @return ModifyDBClusterDescriptionResponse
       */
      Models::ModifyDBClusterDescriptionResponse modifyDBClusterDescription(const Models::ModifyDBClusterDescriptionRequest &request);

      /**
       * @summary Modifies the attributes of a specified PolarDB cluster endpoint. For example, you can modify the following attributes for the specified cluster endpoint: read/write mode, consistency level, transaction splitting, primary node accepts read requests, and connection pool. You can also call the operation to specify whether newly added nodes are automatically associated with the specified cluster endpoint.
       *
       * @param request ModifyDBClusterEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterEndpointResponse
       */
      Models::ModifyDBClusterEndpointResponse modifyDBClusterEndpointWithOptions(const Models::ModifyDBClusterEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a specified PolarDB cluster endpoint. For example, you can modify the following attributes for the specified cluster endpoint: read/write mode, consistency level, transaction splitting, primary node accepts read requests, and connection pool. You can also call the operation to specify whether newly added nodes are automatically associated with the specified cluster endpoint.
       *
       * @param request ModifyDBClusterEndpointRequest
       * @return ModifyDBClusterEndpointResponse
       */
      Models::ModifyDBClusterEndpointResponse modifyDBClusterEndpoint(const Models::ModifyDBClusterEndpointRequest &request);

      /**
       * @summary Modifies the maintenance window of a PolarDB cluster.
       *
       * @description >  We recommend that you set the routine maintenance window to off-peak hours. Alibaba Cloud maintains your cluster within the specified maintenance window to minimize the negative impacts on your business.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(const Models::ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of a PolarDB cluster.
       *
       * @description >  We recommend that you set the routine maintenance window to off-peak hours. Alibaba Cloud maintains your cluster within the specified maintenance window to minimize the negative impacts on your business.
       *
       * @param request ModifyDBClusterMaintainTimeRequest
       * @return ModifyDBClusterMaintainTimeResponse
       */
      Models::ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(const Models::ModifyDBClusterMaintainTimeRequest &request);

      /**
       * @summary Switches or rolls back the task that migrates data from ApsaraDB for RDS to PolarDB.
       *
       * @description *   You can call this operation to switch the task that migrates data from ApsaraDB for RDS to PolarDB.
       * *   You can call this operation to roll back the task that migrates data from ApsaraDB for RDS to PolarDB.
       * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create an upgrade task. Set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request ModifyDBClusterMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMigrationResponse
       */
      Models::ModifyDBClusterMigrationResponse modifyDBClusterMigrationWithOptions(const Models::ModifyDBClusterMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches or rolls back the task that migrates data from ApsaraDB for RDS to PolarDB.
       *
       * @description *   You can call this operation to switch the task that migrates data from ApsaraDB for RDS to PolarDB.
       * *   You can call this operation to roll back the task that migrates data from ApsaraDB for RDS to PolarDB.
       * > Before you call this operation, ensure that a one-click upgrade task has been created for the cluster. You can call the [CreateDBCluster](https://help.aliyun.com/document_detail/98169.html) operation to create an upgrade task. Set the **CreationOption** parameter to **MigrationFromRDS**. For more information, see [Create a PolarDB for MySQL cluster by using the Migration from RDS method](https://help.aliyun.com/document_detail/121582.html).
       *
       * @param request ModifyDBClusterMigrationRequest
       * @return ModifyDBClusterMigrationResponse
       */
      Models::ModifyDBClusterMigrationResponse modifyDBClusterMigration(const Models::ModifyDBClusterMigrationRequest &request);

      /**
       * @summary Modifies the interval at which the monitoring data of a PolarDB cluster is collected.
       *
       * @description *   When the monitoring data is collected every 5 seconds:
       *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * *   When the monitoring data is collected every 60 seconds:
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       *
       * @param request ModifyDBClusterMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterMonitorResponse
       */
      Models::ModifyDBClusterMonitorResponse modifyDBClusterMonitorWithOptions(const Models::ModifyDBClusterMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the interval at which the monitoring data of a PolarDB cluster is collected.
       *
       * @description *   When the monitoring data is collected every 5 seconds:
       *     *   If the query time range is less than or equal to 1 hour, the data is displayed at intervals of 5 seconds.
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       * *   When the monitoring data is collected every 60 seconds:
       *     *   If the query time range is less than or equal to one day, the data is displayed at intervals of 1 minute.
       *     *   If the query time range is less than or equal to seven days, the data is displayed at intervals of 10 minutes.
       *     *   If the query time range is less than or equal to 30 days, the data is displayed at intervals of 1 hour.
       *     *   When the query time range is greater than 30 days, the data is displayed at intervals of 1 day.
       *
       * @param request ModifyDBClusterMonitorRequest
       * @return ModifyDBClusterMonitorResponse
       */
      Models::ModifyDBClusterMonitorResponse modifyDBClusterMonitor(const Models::ModifyDBClusterMonitorRequest &request);

      /**
       * @summary Modifies the parameters of a specified PolarDB cluster or applies existing parameter templates to a specified cluster.
       *
       * @description PolarDB supports the parameter template feature to centrally manage clusters. You can configure a number of parameters at a time by using a parameter template and apply the template to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * **
       * **Only PolarDB for MySQL clusters support parameter templates.
       *
       * @param request ModifyDBClusterParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterParametersResponse
       */
      Models::ModifyDBClusterParametersResponse modifyDBClusterParametersWithOptions(const Models::ModifyDBClusterParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a specified PolarDB cluster or applies existing parameter templates to a specified cluster.
       *
       * @description PolarDB supports the parameter template feature to centrally manage clusters. You can configure a number of parameters at a time by using a parameter template and apply the template to a PolarDB cluster. For more information, see [Use a parameter template](https://help.aliyun.com/document_detail/207009.html).
       * **
       * **Only PolarDB for MySQL clusters support parameter templates.
       *
       * @param request ModifyDBClusterParametersRequest
       * @return ModifyDBClusterParametersResponse
       */
      Models::ModifyDBClusterParametersResponse modifyDBClusterParameters(const Models::ModifyDBClusterParametersRequest &request);

      /**
       * @summary Changes the primary zone of a PolarDB cluster.
       *
       * @param request ModifyDBClusterPrimaryZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterPrimaryZoneResponse
       */
      Models::ModifyDBClusterPrimaryZoneResponse modifyDBClusterPrimaryZoneWithOptions(const Models::ModifyDBClusterPrimaryZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the primary zone of a PolarDB cluster.
       *
       * @param request ModifyDBClusterPrimaryZoneRequest
       * @return ModifyDBClusterPrimaryZoneResponse
       */
      Models::ModifyDBClusterPrimaryZoneResponse modifyDBClusterPrimaryZone(const Models::ModifyDBClusterPrimaryZoneRequest &request);

      /**
       * @summary Modifies the configurations of a resource group for a database cluster.
       *
       * @param request ModifyDBClusterResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResourceGroupResponse
       */
      Models::ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroupWithOptions(const Models::ModifyDBClusterResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a resource group for a database cluster.
       *
       * @param request ModifyDBClusterResourceGroupRequest
       * @return ModifyDBClusterResourceGroupResponse
       */
      Models::ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroup(const Models::ModifyDBClusterResourceGroupRequest &request);

      /**
       * @summary Enables or disables the SSL encryption feature for a PolarDB cluster, or updates the CA certificate of the cluster.
       *
       * @param request ModifyDBClusterSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSLWithOptions(const Models::ModifyDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the SSL encryption feature for a PolarDB cluster, or updates the CA certificate of the cluster.
       *
       * @param request ModifyDBClusterSSLRequest
       * @return ModifyDBClusterSSLResponse
       */
      Models::ModifyDBClusterSSLResponse modifyDBClusterSSL(const Models::ModifyDBClusterSSLRequest &request);

      /**
       * @summary Modifies the configurations of a serverless cluster.
       *
       * @param request ModifyDBClusterServerlessConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterServerlessConfResponse
       */
      Models::ModifyDBClusterServerlessConfResponse modifyDBClusterServerlessConfWithOptions(const Models::ModifyDBClusterServerlessConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a serverless cluster.
       *
       * @param request ModifyDBClusterServerlessConfRequest
       * @return ModifyDBClusterServerlessConfResponse
       */
      Models::ModifyDBClusterServerlessConfResponse modifyDBClusterServerlessConf(const Models::ModifyDBClusterServerlessConfRequest &request);

      /**
       * @summary 修改存储性能
       *
       * @param request ModifyDBClusterStoragePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterStoragePerformanceResponse
       */
      Models::ModifyDBClusterStoragePerformanceResponse modifyDBClusterStoragePerformanceWithOptions(const Models::ModifyDBClusterStoragePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改存储性能
       *
       * @param request ModifyDBClusterStoragePerformanceRequest
       * @return ModifyDBClusterStoragePerformanceResponse
       */
      Models::ModifyDBClusterStoragePerformanceResponse modifyDBClusterStoragePerformance(const Models::ModifyDBClusterStoragePerformanceRequest &request);

      /**
       * @summary Changes the storage capacity of a pay-as-you-go cluster of Enterprise Edition or a cluster of Standard Edition.
       *
       * @param request ModifyDBClusterStorageSpaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterStorageSpaceResponse
       */
      Models::ModifyDBClusterStorageSpaceResponse modifyDBClusterStorageSpaceWithOptions(const Models::ModifyDBClusterStorageSpaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the storage capacity of a pay-as-you-go cluster of Enterprise Edition or a cluster of Standard Edition.
       *
       * @param request ModifyDBClusterStorageSpaceRequest
       * @return ModifyDBClusterStorageSpaceResponse
       */
      Models::ModifyDBClusterStorageSpaceResponse modifyDBClusterStorageSpace(const Models::ModifyDBClusterStorageSpaceRequest &request);

      /**
       * @summary Enables the transparent data encryption (TDE) feature for a PolarDB cluster.
       *
       * @description > *   To perform this operation, you must activate KMS first. For more information, see [Purchase a dedicated KMS instance](https://help.aliyun.com/document_detail/153781.html).
       * > *   After TDE is enabled, you cannot disable TDE.
       *
       * @param request ModifyDBClusterTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterTDEResponse
       */
      Models::ModifyDBClusterTDEResponse modifyDBClusterTDEWithOptions(const Models::ModifyDBClusterTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the transparent data encryption (TDE) feature for a PolarDB cluster.
       *
       * @description > *   To perform this operation, you must activate KMS first. For more information, see [Purchase a dedicated KMS instance](https://help.aliyun.com/document_detail/153781.html).
       * > *   After TDE is enabled, you cannot disable TDE.
       *
       * @param request ModifyDBClusterTDERequest
       * @return ModifyDBClusterTDEResponse
       */
      Models::ModifyDBClusterTDEResponse modifyDBClusterTDE(const Models::ModifyDBClusterTDERequest &request);

      /**
       * @summary Modifies the description of a database in a PolarDB for MySQL cluster.
       *
       * @param request ModifyDBDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescriptionWithOptions(const Models::ModifyDBDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a database in a PolarDB for MySQL cluster.
       *
       * @param request ModifyDBDescriptionRequest
       * @return ModifyDBDescriptionResponse
       */
      Models::ModifyDBDescriptionResponse modifyDBDescription(const Models::ModifyDBDescriptionRequest &request);

      /**
       * @summary Modifies the endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, custom cluster endpoint, and private domain name.
       *
       * @param request ModifyDBEndpointAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBEndpointAddressResponse
       */
      Models::ModifyDBEndpointAddressResponse modifyDBEndpointAddressWithOptions(const Models::ModifyDBEndpointAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the endpoints of a PolarDB cluster, including the primary endpoint, default cluster endpoint, custom cluster endpoint, and private domain name.
       *
       * @param request ModifyDBEndpointAddressRequest
       * @return ModifyDBEndpointAddressResponse
       */
      Models::ModifyDBEndpointAddressResponse modifyDBEndpointAddress(const Models::ModifyDBEndpointAddressRequest &request);

      /**
       * @summary Changes the node specifications of a PolarDB cluster.
       *
       * @param request ModifyDBNodeClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeClassResponse
       */
      Models::ModifyDBNodeClassResponse modifyDBNodeClassWithOptions(const Models::ModifyDBNodeClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the node specifications of a PolarDB cluster.
       *
       * @param request ModifyDBNodeClassRequest
       * @return ModifyDBNodeClassResponse
       */
      Models::ModifyDBNodeClassResponse modifyDBNodeClass(const Models::ModifyDBNodeClassRequest &request);

      /**
       * @summary 修改物理节点描述
       *
       * @param request ModifyDBNodeDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeDescriptionResponse
       */
      Models::ModifyDBNodeDescriptionResponse modifyDBNodeDescriptionWithOptions(const Models::ModifyDBNodeDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改物理节点描述
       *
       * @param request ModifyDBNodeDescriptionRequest
       * @return ModifyDBNodeDescriptionResponse
       */
      Models::ModifyDBNodeDescriptionResponse modifyDBNodeDescription(const Models::ModifyDBNodeDescriptionRequest &request);

      /**
       * @summary Enables or disables the failover with hot replica feature for a node in a cluster.
       *
       * @param request ModifyDBNodeHotReplicaModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodeHotReplicaModeResponse
       */
      Models::ModifyDBNodeHotReplicaModeResponse modifyDBNodeHotReplicaModeWithOptions(const Models::ModifyDBNodeHotReplicaModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the failover with hot replica feature for a node in a cluster.
       *
       * @param request ModifyDBNodeHotReplicaModeRequest
       * @return ModifyDBNodeHotReplicaModeResponse
       */
      Models::ModifyDBNodeHotReplicaModeResponse modifyDBNodeHotReplicaMode(const Models::ModifyDBNodeHotReplicaModeRequest &request);

      /**
       * @summary Changes the specifications of a node in a PolarDB cluster.
       *
       * @param request ModifyDBNodesClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodesClassResponse
       */
      Models::ModifyDBNodesClassResponse modifyDBNodesClassWithOptions(const Models::ModifyDBNodesClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the specifications of a node in a PolarDB cluster.
       *
       * @param request ModifyDBNodesClassRequest
       * @return ModifyDBNodesClassResponse
       */
      Models::ModifyDBNodesClassResponse modifyDBNodesClass(const Models::ModifyDBNodesClassRequest &request);

      /**
       * @summary Modifies the parameters of a node and applies them to specified nodes.
       *
       * @param request ModifyDBNodesParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBNodesParametersResponse
       */
      Models::ModifyDBNodesParametersResponse modifyDBNodesParametersWithOptions(const Models::ModifyDBNodesParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a node and applies them to specified nodes.
       *
       * @param request ModifyDBNodesParametersRequest
       * @return ModifyDBNodesParametersResponse
       */
      Models::ModifyDBNodesParametersResponse modifyDBNodesParameters(const Models::ModifyDBNodesParametersRequest &request);

      /**
       * @summary Modifies a global database network (GDN).
       *
       * @param request ModifyGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalDatabaseNetworkResponse
       */
      Models::ModifyGlobalDatabaseNetworkResponse modifyGlobalDatabaseNetworkWithOptions(const Models::ModifyGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a global database network (GDN).
       *
       * @param request ModifyGlobalDatabaseNetworkRequest
       * @return ModifyGlobalDatabaseNetworkResponse
       */
      Models::ModifyGlobalDatabaseNetworkResponse modifyGlobalDatabaseNetwork(const Models::ModifyGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Modifies an IP whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupResponse
       */
      Models::ModifyGlobalSecurityIPGroupResponse modifyGlobalSecurityIPGroupWithOptions(const Models::ModifyGlobalSecurityIPGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an IP whitelist template.
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
       * @summary Modifies the relationship between a cluster and a global IP whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalSecurityIPGroupRelationResponse
       */
      Models::ModifyGlobalSecurityIPGroupRelationResponse modifyGlobalSecurityIPGroupRelationWithOptions(const Models::ModifyGlobalSecurityIPGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the relationship between a cluster and a global IP whitelist template.
       *
       * @param request ModifyGlobalSecurityIPGroupRelationRequest
       * @return ModifyGlobalSecurityIPGroupRelationResponse
       */
      Models::ModifyGlobalSecurityIPGroupRelationResponse modifyGlobalSecurityIPGroupRelation(const Models::ModifyGlobalSecurityIPGroupRelationRequest &request);

      /**
       * @summary Modifies the retention policy of the log backups in a PolarDB cluster.
       *
       * @param request ModifyLogBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLogBackupPolicyResponse
       */
      Models::ModifyLogBackupPolicyResponse modifyLogBackupPolicyWithOptions(const Models::ModifyLogBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the retention policy of the log backups in a PolarDB cluster.
       *
       * @param request ModifyLogBackupPolicyRequest
       * @return ModifyLogBackupPolicyResponse
       */
      Models::ModifyLogBackupPolicyResponse modifyLogBackupPolicy(const Models::ModifyLogBackupPolicyRequest &request);

      /**
       * @summary Modifies or adds a data masking rule.
       *
       * @param request ModifyMaskingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRulesWithOptions(const Models::ModifyMaskingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies or adds a data masking rule.
       *
       * @param request ModifyMaskingRulesRequest
       * @return ModifyMaskingRulesResponse
       */
      Models::ModifyMaskingRulesResponse modifyMaskingRules(const Models::ModifyMaskingRulesRequest &request);

      /**
       * @summary Modifies the switching time of a pending event.
       *
       * @param request ModifyPendingMaintenanceActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPendingMaintenanceActionResponse
       */
      Models::ModifyPendingMaintenanceActionResponse modifyPendingMaintenanceActionWithOptions(const Models::ModifyPendingMaintenanceActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the switching time of a pending event.
       *
       * @param request ModifyPendingMaintenanceActionRequest
       * @return ModifyPendingMaintenanceActionResponse
       */
      Models::ModifyPendingMaintenanceActionResponse modifyPendingMaintenanceAction(const Models::ModifyPendingMaintenanceActionRequest &request);

      /**
       * @summary Enables the PolarDB for AI feature for a cluster.
       *
       * @param request OpenAITaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenAITaskResponse
       */
      Models::OpenAITaskResponse openAITaskWithOptions(const Models::OpenAITaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the PolarDB for AI feature for a cluster.
       *
       * @param request OpenAITaskRequest
       * @return OpenAITaskResponse
       */
      Models::OpenAITaskResponse openAITask(const Models::OpenAITaskRequest &request);

      /**
       * @summary Reactivates the backup feature.
       *
       * @param request ReactivateDBClusterBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReactivateDBClusterBackupResponse
       */
      Models::ReactivateDBClusterBackupResponse reactivateDBClusterBackupWithOptions(const Models::ReactivateDBClusterBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reactivates the backup feature.
       *
       * @param request ReactivateDBClusterBackupRequest
       * @return ReactivateDBClusterBackupResponse
       */
      Models::ReactivateDBClusterBackupResponse reactivateDBClusterBackup(const Models::ReactivateDBClusterBackupRequest &request);

      /**
       * @summary Updates the storage usage of a cluster.
       *
       * @param request RefreshDBClusterStorageUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshDBClusterStorageUsageResponse
       */
      Models::RefreshDBClusterStorageUsageResponse refreshDBClusterStorageUsageWithOptions(const Models::RefreshDBClusterStorageUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the storage usage of a cluster.
       *
       * @param request RefreshDBClusterStorageUsageRequest
       * @return RefreshDBClusterStorageUsageResponse
       */
      Models::RefreshDBClusterStorageUsageResponse refreshDBClusterStorageUsage(const Models::RefreshDBClusterStorageUsageRequest &request);

      /**
       * @summary Removes a secondary cluster from a GDN.
       *
       * @description >  You cannot remove the primary cluster from a GDN.
       *
       * @param request RemoveDBClusterFromGDNRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDBClusterFromGDNResponse
       */
      Models::RemoveDBClusterFromGDNResponse removeDBClusterFromGDNWithOptions(const Models::RemoveDBClusterFromGDNRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a secondary cluster from a GDN.
       *
       * @description >  You cannot remove the primary cluster from a GDN.
       *
       * @param request RemoveDBClusterFromGDNRequest
       * @return RemoveDBClusterFromGDNResponse
       */
      Models::RemoveDBClusterFromGDNResponse removeDBClusterFromGDN(const Models::RemoveDBClusterFromGDNRequest &request);

      /**
       * @summary Resets the permissions of a privileged account for a PolarDB cluster.
       *
       * @description >- Only PolarDB for MySQL clusters support this operation.
       * >- If the privileged account of your cluster encounters exceptions, you can call this operation to reset the permissions. For example, the permissions are accidentally revoked.
       *
       * @param request ResetAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccountWithOptions(const Models::ResetAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the permissions of a privileged account for a PolarDB cluster.
       *
       * @description >- Only PolarDB for MySQL clusters support this operation.
       * >- If the privileged account of your cluster encounters exceptions, you can call this operation to reset the permissions. For example, the permissions are accidentally revoked.
       *
       * @param request ResetAccountRequest
       * @return ResetAccountResponse
       */
      Models::ResetAccountResponse resetAccount(const Models::ResetAccountRequest &request);

      /**
       * @summary Rebuilds a secondary cluster in a Global Database Network (GDN).
       *
       * @param request ResetGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetGlobalDatabaseNetworkResponse
       */
      Models::ResetGlobalDatabaseNetworkResponse resetGlobalDatabaseNetworkWithOptions(const Models::ResetGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds a secondary cluster in a Global Database Network (GDN).
       *
       * @param request ResetGlobalDatabaseNetworkRequest
       * @return ResetGlobalDatabaseNetworkResponse
       */
      Models::ResetGlobalDatabaseNetworkResponse resetGlobalDatabaseNetwork(const Models::ResetGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Restarts database links.
       *
       * @param request RestartDBLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBLinkResponse
       */
      Models::RestartDBLinkResponse restartDBLinkWithOptions(const Models::RestartDBLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts database links.
       *
       * @param request RestartDBLinkRequest
       * @return RestartDBLinkResponse
       */
      Models::RestartDBLinkResponse restartDBLink(const Models::RestartDBLinkRequest &request);

      /**
       * @summary Restarts a node in a PolarDB cluster.
       *
       * @param request RestartDBNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBNodeResponse
       */
      Models::RestartDBNodeResponse restartDBNodeWithOptions(const Models::RestartDBNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a node in a PolarDB cluster.
       *
       * @param request RestartDBNodeRequest
       * @return RestartDBNodeResponse
       */
      Models::RestartDBNodeResponse restartDBNode(const Models::RestartDBNodeRequest &request);

      /**
       * @summary Restores PolarDB databases and tables.
       *
       * @param request RestoreTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTableWithOptions(const Models::RestoreTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores PolarDB databases and tables.
       *
       * @param request RestoreTableRequest
       * @return RestoreTableResponse
       */
      Models::RestoreTableResponse restoreTable(const Models::RestoreTableRequest &request);

      /**
       * @summary Revokes the access permissions on one or more databases from a specified PolarDB standard account.
       *
       * @param request RevokeAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilegeWithOptions(const Models::RevokeAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the access permissions on one or more databases from a specified PolarDB standard account.
       *
       * @param request RevokeAccountPrivilegeRequest
       * @return RevokeAccountPrivilegeResponse
       */
      Models::RevokeAccountPrivilegeResponse revokeAccountPrivilege(const Models::RevokeAccountPrivilegeRequest &request);

      /**
       * @param request SwitchOverGlobalDatabaseNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchOverGlobalDatabaseNetworkResponse
       */
      Models::SwitchOverGlobalDatabaseNetworkResponse switchOverGlobalDatabaseNetworkWithOptions(const Models::SwitchOverGlobalDatabaseNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SwitchOverGlobalDatabaseNetworkRequest
       * @return SwitchOverGlobalDatabaseNetworkResponse
       */
      Models::SwitchOverGlobalDatabaseNetworkResponse switchOverGlobalDatabaseNetwork(const Models::SwitchOverGlobalDatabaseNetworkRequest &request);

      /**
       * @summary Creates tags for a PolarDB cluster.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags for a PolarDB cluster.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Temporarily changes the node configurations.
       *
       * @param request TempModifyDBNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TempModifyDBNodeResponse
       */
      Models::TempModifyDBNodeResponse tempModifyDBNodeWithOptions(const Models::TempModifyDBNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Temporarily changes the node configurations.
       *
       * @param request TempModifyDBNodeRequest
       * @return TempModifyDBNodeResponse
       */
      Models::TempModifyDBNodeResponse tempModifyDBNode(const Models::TempModifyDBNodeRequest &request);

      /**
       * @summary Changes the billing method of a PolarDB cluster.
       *
       * @description > 
       * *   PolarDB clusters support the subscription and pay-as-you-go billing methods. You can change the billing method from subscription to pay-as-you-go or from pay-as-you-go to subscription based on your business requirements. For more information, see [Change the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/172886.html) and [Change the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/84076.html).
       * *   You cannot change the billing method from pay-as-you-go to subscription if your account balance is insufficient.
       * *   If you change the billing method from subscription to pay-as-you-go, the system automatically refunds the balance of the prepaid subscription fees.
       *
       * @param request TransformDBClusterPayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransformDBClusterPayTypeResponse
       */
      Models::TransformDBClusterPayTypeResponse transformDBClusterPayTypeWithOptions(const Models::TransformDBClusterPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a PolarDB cluster.
       *
       * @description > 
       * *   PolarDB clusters support the subscription and pay-as-you-go billing methods. You can change the billing method from subscription to pay-as-you-go or from pay-as-you-go to subscription based on your business requirements. For more information, see [Change the billing method from subscription to pay-as-you-go](https://help.aliyun.com/document_detail/172886.html) and [Change the billing method from pay-as-you-go to subscription](https://help.aliyun.com/document_detail/84076.html).
       * *   You cannot change the billing method from pay-as-you-go to subscription if your account balance is insufficient.
       * *   If you change the billing method from subscription to pay-as-you-go, the system automatically refunds the balance of the prepaid subscription fees.
       *
       * @param request TransformDBClusterPayTypeRequest
       * @return TransformDBClusterPayTypeResponse
       */
      Models::TransformDBClusterPayTypeResponse transformDBClusterPayType(const Models::TransformDBClusterPayTypeRequest &request);

      /**
       * @summary Unbinds tags from PolarDB clusters.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from PolarDB clusters.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades the kernel version of a PolarDB for MySQL cluster.
       *
       * @description > *  You can update only the revision version of a PolarDB for MySQL cluster, for example, from 8.0.1.1.3 to 8.0.1.1.4.
       * >*   You can use only your Alibaba Cloud account to create scheduled tasks that update the kernel version of a PolarDB for MySQL cluster. RAM users are not authorized to update the kernel version of a PolarDB for MySQL cluster.
       *
       * @param request UpgradeDBClusterVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBClusterVersionResponse
       */
      Models::UpgradeDBClusterVersionResponse upgradeDBClusterVersionWithOptions(const Models::UpgradeDBClusterVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the kernel version of a PolarDB for MySQL cluster.
       *
       * @description > *  You can update only the revision version of a PolarDB for MySQL cluster, for example, from 8.0.1.1.3 to 8.0.1.1.4.
       * >*   You can use only your Alibaba Cloud account to create scheduled tasks that update the kernel version of a PolarDB for MySQL cluster. RAM users are not authorized to update the kernel version of a PolarDB for MySQL cluster.
       *
       * @param request UpgradeDBClusterVersionRequest
       * @return UpgradeDBClusterVersionResponse
       */
      Models::UpgradeDBClusterVersionResponse upgradeDBClusterVersion(const Models::UpgradeDBClusterVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
