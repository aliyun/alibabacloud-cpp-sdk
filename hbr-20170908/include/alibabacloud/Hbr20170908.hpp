// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HBR20170908_HPP_
#define ALIBABACLOUD_HBR20170908_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Hbr20170908Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Hbr20170908.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Registers a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request AddContainerClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddContainerClusterResponse
       */
      Models::AddContainerClusterResponse addContainerClusterWithOptions(const Models::AddContainerClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a Container Service for Kubernetes (ACK) cluster.
       *
       * @param request AddContainerClusterRequest
       * @return AddContainerClusterResponse
       */
      Models::AddContainerClusterResponse addContainerCluster(const Models::AddContainerClusterRequest &request);

      /**
       * @summary Create a cross-account management relationship.
       *
       * @param request AddCrossAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCrossAccountResponse
       */
      Models::AddCrossAccountResponse addCrossAccountWithOptions(const Models::AddCrossAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a cross-account management relationship.
       *
       * @param request AddCrossAccountRequest
       * @return AddCrossAccountResponse
       */
      Models::AddCrossAccountResponse addCrossAccount(const Models::AddCrossAccountRequest &request);

      /**
       * @summary Creates a data source.
       *
       * @description - The local NAS backup feature supports the local NAS (`COMMON_NAS`) data source type.
       * - The CPFS backup feature supports the following data source types: CPFS (`CPFS`), CPFS AI-Computing Edition (`BMCPFS`), and other large-scale file system (`COMMON_FILE_SYSTEM`).
       * - The archive feature supports the following data source types: local NAS (`COMMON_NAS`), HDFS (`HDFS`), and S3 (`S3`).
       *
       * @param request AddDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataSourceResponse
       */
      Models::AddDataSourceResponse addDataSourceWithOptions(const Models::AddDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data source.
       *
       * @description - The local NAS backup feature supports the local NAS (`COMMON_NAS`) data source type.
       * - The CPFS backup feature supports the following data source types: CPFS (`CPFS`), CPFS AI-Computing Edition (`BMCPFS`), and other large-scale file system (`COMMON_FILE_SYSTEM`).
       * - The archive feature supports the following data source types: local NAS (`COMMON_NAS`), HDFS (`HDFS`), and S3 (`S3`).
       *
       * @param request AddDataSourceRequest
       * @return AddDataSourceResponse
       */
      Models::AddDataSourceResponse addDataSource(const Models::AddDataSourceRequest &request);

      /**
       * @summary Browses the list of backup files in a specified backup snapshot.
       *
       * @param request BrowseFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BrowseFilesResponse
       */
      Models::BrowseFilesResponse browseFilesWithOptions(const Models::BrowseFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Browses the list of backup files in a specified backup snapshot.
       *
       * @param request BrowseFilesRequest
       * @return BrowseFilesResponse
       */
      Models::BrowseFilesResponse browseFiles(const Models::BrowseFilesRequest &request);

      /**
       * @summary Cancels a backup job.
       *
       * @param request CancelBackupJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelBackupJobResponse
       */
      Models::CancelBackupJobResponse cancelBackupJobWithOptions(const Models::CancelBackupJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a backup job.
       *
       * @param request CancelBackupJobRequest
       * @return CancelBackupJobResponse
       */
      Models::CancelBackupJobResponse cancelBackupJob(const Models::CancelBackupJobRequest &request);

      /**
       * @summary Cancels a restore job.
       *
       * @param request CancelRestoreJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRestoreJobResponse
       */
      Models::CancelRestoreJobResponse cancelRestoreJobWithOptions(const Models::CancelRestoreJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a restore job.
       *
       * @param request CancelRestoreJobRequest
       * @return CancelRestoreJobResponse
       */
      Models::CancelRestoreJobResponse cancelRestoreJob(const Models::CancelRestoreJobRequest &request);

      /**
       * @summary Changes the resource group to which an instance belongs.
       *
       * @description *   In the Cloud Backup console, you can use resource groups to manage resources such as backup vaults, Cloud Backup clients, and SAP HANA instances.
       * *   A resource is a cloud service entity that you create on Alibaba Cloud, such as an Elastic Compute Service (ECS) instance, a backup vault, or an SAP HANA instance.
       * *   You can sort resources owned by your Alibaba Cloud account into various resource groups. Resource groups facilitate resource management among multiple projects or applications within your Alibaba Cloud account and simplify permission management.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which an instance belongs.
       *
       * @description *   In the Cloud Backup console, you can use resource groups to manage resources such as backup vaults, Cloud Backup clients, and SAP HANA instances.
       * *   A resource is a cloud service entity that you create on Alibaba Cloud, such as an Elastic Compute Service (ECS) instance, a backup vault, or an SAP HANA instance.
       * *   You can sort resources owned by your Alibaba Cloud account into various resource groups. Resource groups facilitate resource management among multiple projects or applications within your Alibaba Cloud account and simplify permission management.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Checks whether the current user has permissions to access a specific resource or page.
       *
       * @param request CheckRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckRoleResponse
       */
      Models::CheckRoleResponse checkRoleWithOptions(const Models::CheckRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the current user has permissions to access a specific resource or page.
       *
       * @param request CheckRoleRequest
       * @return CheckRoleResponse
       */
      Models::CheckRoleResponse checkRole(const Models::CheckRoleRequest &request);

      /**
       * @summary Creates a backup job.
       *
       * @param tmpReq CreateBackupJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupJobResponse
       */
      Models::CreateBackupJobResponse createBackupJobWithOptions(const Models::CreateBackupJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup job.
       *
       * @param request CreateBackupJobRequest
       * @return CreateBackupJobResponse
       */
      Models::CreateBackupJobResponse createBackupJob(const Models::CreateBackupJobRequest &request);

      /**
       * @summary Creates a backup plan.
       *
       * @description >Notice: 
       * - To use features such as ECS File Backup Essential Edition, cloud disk backup, container backup, Tablestore backup free trial, archiving, or data synchronization, call this operation.
       * - To use the 30-day free trial of NAS backup or OSS backup, call the CreateTrialBackupPlan operation.
       * - To use standard capabilities of ECS File Backup Standard Edition, local file backup, ECS full-copy backup, NAS backup, OSS backup, or CPFS backup, call the CreatePolicyV2 and CreatePolicyBindings operations.
       * - A backup plan associates a data source with a backup policy and other information required for backup. After a backup plan is executed, a backup job is generated to record the backup progress and result. If the backup job succeeds, a backup snapshot is generated. You can use the backup snapshot to create a restore job.
       * - A backup plan supports only one data source.
       * - A backup plan supports only a single backup cycle policy with a fixed interval.
       * - A backup plan can back up data to only one vault.
       *
       * @param tmpReq CreateBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupPlanResponse
       */
      Models::CreateBackupPlanResponse createBackupPlanWithOptions(const Models::CreateBackupPlanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup plan.
       *
       * @description >Notice: 
       * - To use features such as ECS File Backup Essential Edition, cloud disk backup, container backup, Tablestore backup free trial, archiving, or data synchronization, call this operation.
       * - To use the 30-day free trial of NAS backup or OSS backup, call the CreateTrialBackupPlan operation.
       * - To use standard capabilities of ECS File Backup Standard Edition, local file backup, ECS full-copy backup, NAS backup, OSS backup, or CPFS backup, call the CreatePolicyV2 and CreatePolicyBindings operations.
       * - A backup plan associates a data source with a backup policy and other information required for backup. After a backup plan is executed, a backup job is generated to record the backup progress and result. If the backup job succeeds, a backup snapshot is generated. You can use the backup snapshot to create a restore job.
       * - A backup plan supports only one data source.
       * - A backup plan supports only a single backup cycle policy with a fixed interval.
       * - A backup plan can back up data to only one vault.
       *
       * @param request CreateBackupPlanRequest
       * @return CreateBackupPlanResponse
       */
      Models::CreateBackupPlanResponse createBackupPlan(const Models::CreateBackupPlanRequest &request);

      /**
       * @summary Installs one or more Cloud Backup clients on specified instances.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of Cloud Backup. For more information, see [Billing methods and billable items](https://help.aliyun.com/document_detail/89062.html).
       *
       * @param request CreateClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientsResponse
       */
      Models::CreateClientsResponse createClientsWithOptions(const Models::CreateClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs one or more Cloud Backup clients on specified instances.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of Cloud Backup. For more information, see [Billing methods and billable items](https://help.aliyun.com/document_detail/89062.html).
       *
       * @param request CreateClientsRequest
       * @return CreateClientsResponse
       */
      Models::CreateClientsResponse createClients(const Models::CreateClientsRequest &request);

      /**
       * @summary Creates a backup plan for an SAP HANA instance.
       *
       * @description *   A backup plan defines the data source, backup policy, and other configurations. After you execute a backup plan, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
       * *   You can specify only one type of data source in a backup plan.
       * *   You can specify only one interval as a backup cycle in a backup plan.
       * *   Each backup plan allows you to back up data to only one backup vault.
       *
       * @param request CreateHanaBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHanaBackupPlanResponse
       */
      Models::CreateHanaBackupPlanResponse createHanaBackupPlanWithOptions(const Models::CreateHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup plan for an SAP HANA instance.
       *
       * @description *   A backup plan defines the data source, backup policy, and other configurations. After you execute a backup plan, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
       * *   You can specify only one type of data source in a backup plan.
       * *   You can specify only one interval as a backup cycle in a backup plan.
       * *   Each backup plan allows you to back up data to only one backup vault.
       *
       * @param request CreateHanaBackupPlanRequest
       * @return CreateHanaBackupPlanResponse
       */
      Models::CreateHanaBackupPlanResponse createHanaBackupPlan(const Models::CreateHanaBackupPlanRequest &request);

      /**
       * @summary Registers an SAP HANA instance.
       *
       * @description To register an SAP HANA instance, you must configure the SAP HANA connection information. After the SAP HANA instance is registered, Cloud Backup installs a backup client on the node of the SAP HANA instance.
       *
       * @param request CreateHanaInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHanaInstanceResponse
       */
      Models::CreateHanaInstanceResponse createHanaInstanceWithOptions(const Models::CreateHanaInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers an SAP HANA instance.
       *
       * @description To register an SAP HANA instance, you must configure the SAP HANA connection information. After the SAP HANA instance is registered, Cloud Backup installs a backup client on the node of the SAP HANA instance.
       *
       * @param request CreateHanaInstanceRequest
       * @return CreateHanaInstanceResponse
       */
      Models::CreateHanaInstanceResponse createHanaInstance(const Models::CreateHanaInstanceRequest &request);

      /**
       * @summary Creates a restore job for an SAP HANA database.
       *
       * @description If you call this operation to restore a database, the database is restored to a specified state. Proceed with caution. For more information, see [Restore databases to an SAP HANA instance](https://help.aliyun.com/document_detail/101178.html).
       *
       * @param request CreateHanaRestoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHanaRestoreResponse
       */
      Models::CreateHanaRestoreResponse createHanaRestoreWithOptions(const Models::CreateHanaRestoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a restore job for an SAP HANA database.
       *
       * @description If you call this operation to restore a database, the database is restored to a specified state. Proceed with caution. For more information, see [Restore databases to an SAP HANA instance](https://help.aliyun.com/document_detail/101178.html).
       *
       * @param request CreateHanaRestoreRequest
       * @return CreateHanaRestoreResponse
       */
      Models::CreateHanaRestoreResponse createHanaRestore(const Models::CreateHanaRestoreRequest &request);

      /**
       * @summary Binds one or more data sources to a policy.
       *
       * @description - Each call supports binding only data sources of the same type to a single policy.
       * - ECS instances (full server backup) can be bound to only one policy.
       *
       * @param tmpReq CreatePolicyBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyBindingsResponse
       */
      Models::CreatePolicyBindingsResponse createPolicyBindingsWithOptions(const Models::CreatePolicyBindingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds one or more data sources to a policy.
       *
       * @description - Each call supports binding only data sources of the same type to a single policy.
       * - ECS instances (full server backup) can be bound to only one policy.
       *
       * @param request CreatePolicyBindingsRequest
       * @return CreatePolicyBindingsResponse
       */
      Models::CreatePolicyBindingsResponse createPolicyBindings(const Models::CreatePolicyBindingsRequest &request);

      /**
       * @summary Creates a policy.
       *
       * @description A backup policy records the information required for backup. After a backup policy is executed, a backup job is generated to record the backup progress and result. If the backup job succeeds, a backup snapshot is generated. You can use the backup snapshot to create a restore job.
       * - A backup policy supports multiple data source types, including NAS backup, OSS backup, ECS instance backup, ECS File Backup Essential Edition, local file backup, Tablestore backup, and CPFS backup.
       * - A backup policy supports only a single backup cycle policy with a fixed interval.
       * - A backup policy can back up data to only one backup vault.
       *
       * @param tmpReq CreatePolicyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyV2Response
       */
      Models::CreatePolicyV2Response createPolicyV2WithOptions(const Models::CreatePolicyV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy.
       *
       * @description A backup policy records the information required for backup. After a backup policy is executed, a backup job is generated to record the backup progress and result. If the backup job succeeds, a backup snapshot is generated. You can use the backup snapshot to create a restore job.
       * - A backup policy supports multiple data source types, including NAS backup, OSS backup, ECS instance backup, ECS File Backup Essential Edition, local file backup, Tablestore backup, and CPFS backup.
       * - A backup policy supports only a single backup cycle policy with a fixed interval.
       * - A backup policy can back up data to only one backup vault.
       *
       * @param request CreatePolicyV2Request
       * @return CreatePolicyV2Response
       */
      Models::CreatePolicyV2Response createPolicyV2(const Models::CreatePolicyV2Request &request);

      /**
       * @summary **[Deprecated]** Creates a replication target vault and configures cross-region replication. This API operation does not support cross-account replication and is deprecated. Use CreateVault and CreateVaultReplication instead for full capabilities.
       *
       * @description After the backup vault is created, its status is INITIALIZING, and an initialization task is automatically initiated. After the task succeeds, the vault status changes to CREATED.
       * Call this operation in the region where the replication target vault resides (VaultRegionId).
       *
       * @param request CreateReplicationVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReplicationVaultResponse
       */
      Models::CreateReplicationVaultResponse createReplicationVaultWithOptions(const Models::CreateReplicationVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary **[Deprecated]** Creates a replication target vault and configures cross-region replication. This API operation does not support cross-account replication and is deprecated. Use CreateVault and CreateVaultReplication instead for full capabilities.
       *
       * @description After the backup vault is created, its status is INITIALIZING, and an initialization task is automatically initiated. After the task succeeds, the vault status changes to CREATED.
       * Call this operation in the region where the replication target vault resides (VaultRegionId).
       *
       * @param request CreateReplicationVaultRequest
       * @return CreateReplicationVaultResponse
       */
      Models::CreateReplicationVaultResponse createReplicationVault(const Models::CreateReplicationVaultRequest &request);

      /**
       * @summary Creates a restore job.
       *
       * @description - Creates a restore job based on the selected snapshot and restore destination.
       * - The data source type and the restore destination data source type must be the same.
       *
       * @param tmpReq CreateRestoreJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRestoreJobResponse
       */
      Models::CreateRestoreJobResponse createRestoreJobWithOptions(const Models::CreateRestoreJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a restore job.
       *
       * @description - Creates a restore job based on the selected snapshot and restore destination.
       * - The data source type and the restore destination data source type must be the same.
       *
       * @param request CreateRestoreJobRequest
       * @return CreateRestoreJobResponse
       */
      Models::CreateRestoreJobResponse createRestoreJob(const Models::CreateRestoreJobRequest &request);

      /**
       * @summary Generates the parameters and signature required for a file upload URL.
       *
       * @description 1.  You can directly upload a file to Object Storage Service (OSS) by using a form based on the returned value of this operation.
       * 2.  For more information about how to upload a file to OSS by using a form, see OSS documentation.
       * 3.  The system periodically deletes files that are uploaded to OSS.
       *
       * @param request CreateTempFileUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTempFileUploadUrlResponse
       */
      Models::CreateTempFileUploadUrlResponse createTempFileUploadUrlWithOptions(const Models::CreateTempFileUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates the parameters and signature required for a file upload URL.
       *
       * @description 1.  You can directly upload a file to Object Storage Service (OSS) by using a form based on the returned value of this operation.
       * 2.  For more information about how to upload a file to OSS by using a form, see OSS documentation.
       * 3.  The system periodically deletes files that are uploaded to OSS.
       *
       * @param request CreateTempFileUploadUrlRequest
       * @return CreateTempFileUploadUrlResponse
       */
      Models::CreateTempFileUploadUrlResponse createTempFileUploadUrl(const Models::CreateTempFileUploadUrlRequest &request);

      /**
       * @summary Creates a backup vault.
       *
       * @description - Each Alibaba Cloud account can create a maximum of 100 backup vaults.
       * - After a backup vault is created, its status is INITIALIZING and an initialization task automatically starts. After the task is successfully completed, the status changes to CREATED. The backup vault can be used for backup jobs only when its status is CREATED.
       *   >Notice: 
       *   Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/detail/hbr?) of Cloud Backup.
       *
       * @param request CreateVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVaultResponse
       */
      Models::CreateVaultResponse createVaultWithOptions(const Models::CreateVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup vault.
       *
       * @description - Each Alibaba Cloud account can create a maximum of 100 backup vaults.
       * - After a backup vault is created, its status is INITIALIZING and an initialization task automatically starts. After the task is successfully completed, the status changes to CREATED. The backup vault can be used for backup jobs only when its status is CREATED.
       *   >Notice: 
       *   Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.aliyun.com/price/detail/hbr?) of Cloud Backup.
       *
       * @param request CreateVaultRequest
       * @return CreateVaultResponse
       */
      Models::CreateVaultResponse createVault(const Models::CreateVaultRequest &request);

      /**
       * @summary Configures backup vault replication.
       *
       * @description Call this method in the region where the destination backup vault is located. Before you use this API, review the billing methods and pricing of Cloud Backup.
       *
       * @param request CreateVaultReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVaultReplicationResponse
       */
      Models::CreateVaultReplicationResponse createVaultReplicationWithOptions(const Models::CreateVaultReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures backup vault replication.
       *
       * @description Call this method in the region where the destination backup vault is located. Before you use this API, review the billing methods and pricing of Cloud Backup.
       *
       * @param request CreateVaultReplicationRequest
       * @return CreateVaultReplicationResponse
       */
      Models::CreateVaultReplicationResponse createVaultReplication(const Models::CreateVaultReplicationRequest &request);

      /**
       * @deprecated OpenAPI DeleteAirEcsInstance is deprecated
       *
       * @summary Removes a restore-only ECS instance from ECS Backup Essential Edition.
       *
       * @param tmpReq DeleteAirEcsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAirEcsInstanceResponse
       */
      Models::DeleteAirEcsInstanceResponse deleteAirEcsInstanceWithOptions(const Models::DeleteAirEcsInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteAirEcsInstance is deprecated
       *
       * @summary Removes a restore-only ECS instance from ECS Backup Essential Edition.
       *
       * @param request DeleteAirEcsInstanceRequest
       * @return DeleteAirEcsInstanceResponse
       */
      Models::DeleteAirEcsInstanceResponse deleteAirEcsInstance(const Models::DeleteAirEcsInstanceRequest &request);

      /**
       * @summary Deletes a Cloud Backup client.
       *
       * @description - You cannot delete the active Cloud Backup clients that receive heartbeat packets within 1 hour. You can call the UninstallBackupClients operation to uninstall a Cloud Backup client. Then, the client becomes inactive.
       * - When you perform this operation, resources that are associated with the client are also deleted, including:
       *   - Backup plans
       *   - Backup jobs
       *   - Snapshots
       *
       * @param request DeleteBackupClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupClientResponse
       */
      Models::DeleteBackupClientResponse deleteBackupClientWithOptions(const Models::DeleteBackupClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Cloud Backup client.
       *
       * @description - You cannot delete the active Cloud Backup clients that receive heartbeat packets within 1 hour. You can call the UninstallBackupClients operation to uninstall a Cloud Backup client. Then, the client becomes inactive.
       * - When you perform this operation, resources that are associated with the client are also deleted, including:
       *   - Backup plans
       *   - Backup jobs
       *   - Snapshots
       *
       * @param request DeleteBackupClientRequest
       * @return DeleteBackupClientResponse
       */
      Models::DeleteBackupClientResponse deleteBackupClient(const Models::DeleteBackupClientRequest &request);

      /**
       * @summary Deletes the resources of a backup client.
       *
       * @description This operation does not delete the backup client. It only deletes the resources of the backup client, such as backup plans, backup jobs, and snapshots.
       *
       * @param tmpReq DeleteBackupClientResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupClientResourceResponse
       */
      Models::DeleteBackupClientResourceResponse deleteBackupClientResourceWithOptions(const Models::DeleteBackupClientResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the resources of a backup client.
       *
       * @description This operation does not delete the backup client. It only deletes the resources of the backup client, such as backup plans, backup jobs, and snapshots.
       *
       * @param request DeleteBackupClientResourceRequest
       * @return DeleteBackupClientResourceResponse
       */
      Models::DeleteBackupClientResourceResponse deleteBackupClientResource(const Models::DeleteBackupClientResourceRequest &request);

      /**
       * @summary Deletes a backup plan.
       *
       * @description - Deleting a backup plan also deletes the associated backup jobs.
       * - Deleting a backup plan does not delete existing snapshots.
       *
       * @param request DeleteBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPlanResponse
       */
      Models::DeleteBackupPlanResponse deleteBackupPlanWithOptions(const Models::DeleteBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backup plan.
       *
       * @description - Deleting a backup plan also deletes the associated backup jobs.
       * - Deleting a backup plan does not delete existing snapshots.
       *
       * @param request DeleteBackupPlanRequest
       * @return DeleteBackupPlanResponse
       */
      Models::DeleteBackupPlanResponse deleteBackupPlan(const Models::DeleteBackupPlanRequest &request);

      /**
       * @summary Deletes a client.
       *
       * @param request DeleteClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientResponse
       */
      Models::DeleteClientResponse deleteClientWithOptions(const Models::DeleteClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a client.
       *
       * @param request DeleteClientRequest
       * @return DeleteClientResponse
       */
      Models::DeleteClientResponse deleteClient(const Models::DeleteClientRequest &request);

      /**
       * @summary Unregisters a container cluster record in Cloud Backup. After you unregister the cluster, you cannot recover backups of the cluster.
       *
       * @param request DeleteContainerClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContainerClusterResponse
       */
      Models::DeleteContainerClusterResponse deleteContainerClusterWithOptions(const Models::DeleteContainerClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unregisters a container cluster record in Cloud Backup. After you unregister the cluster, you cannot recover backups of the cluster.
       *
       * @param request DeleteContainerClusterRequest
       * @return DeleteContainerClusterResponse
       */
      Models::DeleteContainerClusterResponse deleteContainerCluster(const Models::DeleteContainerClusterRequest &request);

      /**
       * @summary Deletes a cross-account management relationship.
       *
       * @param request DeleteCrossAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCrossAccountResponse
       */
      Models::DeleteCrossAccountResponse deleteCrossAccountWithOptions(const Models::DeleteCrossAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cross-account management relationship.
       *
       * @param request DeleteCrossAccountRequest
       * @return DeleteCrossAccountResponse
       */
      Models::DeleteCrossAccountResponse deleteCrossAccount(const Models::DeleteCrossAccountRequest &request);

      /**
       * @summary Deletes an SAP HANA backup plan.
       *
       * @param request DeleteHanaBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHanaBackupPlanResponse
       */
      Models::DeleteHanaBackupPlanResponse deleteHanaBackupPlanWithOptions(const Models::DeleteHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SAP HANA backup plan.
       *
       * @param request DeleteHanaBackupPlanRequest
       * @return DeleteHanaBackupPlanResponse
       */
      Models::DeleteHanaBackupPlanResponse deleteHanaBackupPlan(const Models::DeleteHanaBackupPlanRequest &request);

      /**
       * @summary Deletes an SAP HANA instance.
       *
       * @description If you delete an SAP HANA instance, the existing backup data is also deleted and the running backup and restore jobs fail to be completed. Before you delete the SAP HANA instance, make sure that you no longer need the backup data of the instance and no backup or restore jobs are running for the instance. To delete an SAP HANA instance, you must specify the security identifier (SID) of the instance. The SID is three characters in length and starts with a letter. For more information, see [How to find sid user and instance number of HANA db?](https://answers.sap.com/questions/555192/how-to-find-sid-user-and-instance-number-of-hana-d.html?)
       *
       * @param request DeleteHanaInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHanaInstanceResponse
       */
      Models::DeleteHanaInstanceResponse deleteHanaInstanceWithOptions(const Models::DeleteHanaInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SAP HANA instance.
       *
       * @description If you delete an SAP HANA instance, the existing backup data is also deleted and the running backup and restore jobs fail to be completed. Before you delete the SAP HANA instance, make sure that you no longer need the backup data of the instance and no backup or restore jobs are running for the instance. To delete an SAP HANA instance, you must specify the security identifier (SID) of the instance. The SID is three characters in length and starts with a letter. For more information, see [How to find sid user and instance number of HANA db?](https://answers.sap.com/questions/555192/how-to-find-sid-user-and-instance-number-of-hana-d.html?)
       *
       * @param request DeleteHanaInstanceRequest
       * @return DeleteHanaInstanceResponse
       */
      Models::DeleteHanaInstanceResponse deleteHanaInstance(const Models::DeleteHanaInstanceRequest &request);

      /**
       * @summary Dissociates a data source from a policy. After the dissociation, the policy can no longer protect the data source. Proceed with caution.
       *
       * @param tmpReq DeletePolicyBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyBindingResponse
       */
      Models::DeletePolicyBindingResponse deletePolicyBindingWithOptions(const Models::DeletePolicyBindingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a data source from a policy. After the dissociation, the policy can no longer protect the data source. Proceed with caution.
       *
       * @param request DeletePolicyBindingRequest
       * @return DeletePolicyBindingResponse
       */
      Models::DeletePolicyBindingResponse deletePolicyBinding(const Models::DeletePolicyBindingRequest &request);

      /**
       * @summary Deletes a policy.
       *
       * @description When you delete a policy, it is detached from all associated data sources. Proceed with caution.
       *
       * @param request DeletePolicyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyV2Response
       */
      Models::DeletePolicyV2Response deletePolicyV2WithOptions(const Models::DeletePolicyV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy.
       *
       * @description When you delete a policy, it is detached from all associated data sources. Proceed with caution.
       *
       * @param request DeletePolicyV2Request
       * @return DeletePolicyV2Response
       */
      Models::DeletePolicyV2Response deletePolicyV2(const Models::DeletePolicyV2Request &request);

      /**
       * @summary Deletes a backup snapshot.
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backup snapshot.
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Cancels a protected disk.
       *
       * @param request DeleteUdmDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUdmDiskResponse
       */
      Models::DeleteUdmDiskResponse deleteUdmDiskWithOptions(const Models::DeleteUdmDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a protected disk.
       *
       * @param request DeleteUdmDiskRequest
       * @return DeleteUdmDiskResponse
       */
      Models::DeleteUdmDiskResponse deleteUdmDisk(const Models::DeleteUdmDiskRequest &request);

      /**
       * @summary Stops protection for Elastic Compute Service (ECS) instance backup.
       *
       * @param request DeleteUdmEcsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUdmEcsInstanceResponse
       */
      Models::DeleteUdmEcsInstanceResponse deleteUdmEcsInstanceWithOptions(const Models::DeleteUdmEcsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops protection for Elastic Compute Service (ECS) instance backup.
       *
       * @param request DeleteUdmEcsInstanceRequest
       * @return DeleteUdmEcsInstanceResponse
       */
      Models::DeleteUdmEcsInstanceResponse deleteUdmEcsInstance(const Models::DeleteUdmEcsInstanceRequest &request);

      /**
       * @summary Deletes a backup vault.
       *
       * @description *   You cannot delete a backup vault within 2 hours after the backup vault is created or a backup vault that is in the INITIALIZING state.
       * *   After you delete a backup vault, all resources that are associated with the backup vault are deleted. The resources include the Cloud Backup client of the old version, backup plans, backup jobs, snapshots, and restore jobs.
       *
       * @param request DeleteVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVaultResponse
       */
      Models::DeleteVaultResponse deleteVaultWithOptions(const Models::DeleteVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backup vault.
       *
       * @description *   You cannot delete a backup vault within 2 hours after the backup vault is created or a backup vault that is in the INITIALIZING state.
       * *   After you delete a backup vault, all resources that are associated with the backup vault are deleted. The resources include the Cloud Backup client of the old version, backup plans, backup jobs, snapshots, and restore jobs.
       *
       * @param request DeleteVaultRequest
       * @return DeleteVaultResponse
       */
      Models::DeleteVaultResponse deleteVault(const Models::DeleteVaultRequest &request);

      /**
       * @summary Stops backup vault replication.
       *
       * @description You can call this method in the region of the destination backup vault.
       *
       * @param request DeleteVaultReplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVaultReplicationResponse
       */
      Models::DeleteVaultReplicationResponse deleteVaultReplicationWithOptions(const Models::DeleteVaultReplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops backup vault replication.
       *
       * @description You can call this method in the region of the destination backup vault.
       *
       * @param request DeleteVaultReplicationRequest
       * @return DeleteVaultReplicationResponse
       */
      Models::DeleteVaultReplicationResponse deleteVaultReplication(const Models::DeleteVaultReplicationRequest &request);

      /**
       * @summary Retrieves information about one or more backup clients that meet the specified conditions.
       *
       * @param tmpReq DescribeBackupClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupClientsResponse
       */
      Models::DescribeBackupClientsResponse describeBackupClientsWithOptions(const Models::DescribeBackupClientsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about one or more backup clients that meet the specified conditions.
       *
       * @param request DescribeBackupClientsRequest
       * @return DescribeBackupClientsResponse
       */
      Models::DescribeBackupClientsResponse describeBackupClients(const Models::DescribeBackupClientsRequest &request);

      /**
       * @summary Queries backup jobs that meet the specified criteria.
       *
       * @param request DescribeBackupJobs2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupJobs2Response
       */
      Models::DescribeBackupJobs2Response describeBackupJobs2WithOptions(const Models::DescribeBackupJobs2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backup jobs that meet the specified criteria.
       *
       * @param request DescribeBackupJobs2Request
       * @return DescribeBackupJobs2Response
       */
      Models::DescribeBackupJobs2Response describeBackupJobs2(const Models::DescribeBackupJobs2Request &request);

      /**
       * @summary Retrieves one or more backup plans that meet the specified conditions.
       *
       * @param request DescribeBackupPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPlansResponse
       */
      Models::DescribeBackupPlansResponse describeBackupPlansWithOptions(const Models::DescribeBackupPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves one or more backup plans that meet the specified conditions.
       *
       * @param request DescribeBackupPlansRequest
       * @return DescribeBackupPlansResponse
       */
      Models::DescribeBackupPlansResponse describeBackupPlans(const Models::DescribeBackupPlansRequest &request);

      /**
       * @summary Queries one or more Cloud Backup clients that meet the specified conditions.
       *
       * @description This operation is applicable only to SAP HANA backup. For Cloud Backup clients of other data sources, call the DescribeBackupClients operation.
       *
       * @param request DescribeClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClientsResponse
       */
      Models::DescribeClientsResponse describeClientsWithOptions(const Models::DescribeClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more Cloud Backup clients that meet the specified conditions.
       *
       * @description This operation is applicable only to SAP HANA backup. For Cloud Backup clients of other data sources, call the DescribeBackupClients operation.
       *
       * @param request DescribeClientsRequest
       * @return DescribeClientsResponse
       */
      Models::DescribeClientsResponse describeClients(const Models::DescribeClientsRequest &request);

      /**
       * @summary Queries one or more container clusters that meet the specified conditions.
       *
       * @description Supported only for Container Service for Kubernetes (ACK) integration.
       *
       * @param request DescribeContainerClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerClusterResponse
       */
      Models::DescribeContainerClusterResponse describeContainerClusterWithOptions(const Models::DescribeContainerClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more container clusters that meet the specified conditions.
       *
       * @description Supported only for Container Service for Kubernetes (ACK) integration.
       *
       * @param request DescribeContainerClusterRequest
       * @return DescribeContainerClusterResponse
       */
      Models::DescribeContainerClusterResponse describeContainerCluster(const Models::DescribeContainerClusterRequest &request);

      /**
       * @summary Queries the list of container cluster resources.
       *
       * @param request DescribeContainerResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContainerResourceResponse
       */
      Models::DescribeContainerResourceResponse describeContainerResourceWithOptions(const Models::DescribeContainerResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of container cluster resources.
       *
       * @param request DescribeContainerResourceRequest
       * @return DescribeContainerResourceResponse
       */
      Models::DescribeContainerResourceResponse describeContainerResource(const Models::DescribeContainerResourceRequest &request);

      /**
       * @summary Queries cross-account management relationships.
       *
       * @param request DescribeCrossAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCrossAccountsResponse
       */
      Models::DescribeCrossAccountsResponse describeCrossAccountsWithOptions(const Models::DescribeCrossAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cross-account management relationships.
       *
       * @param request DescribeCrossAccountsRequest
       * @return DescribeCrossAccountsResponse
       */
      Models::DescribeCrossAccountsResponse describeCrossAccounts(const Models::DescribeCrossAccountsRequest &request);

      /**
       * @summary Queries a list of data sources. Filter results by data source type, data source ID, data source name, or client group ID.
       *
       * @param request DescribeDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSourcesResponse
       */
      Models::DescribeDataSourcesResponse describeDataSourcesWithOptions(const Models::DescribeDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data sources. Filter results by data source type, data source ID, data source name, or client group ID.
       *
       * @param request DescribeDataSourcesRequest
       * @return DescribeDataSourcesResponse
       */
      Models::DescribeDataSourcesResponse describeDataSources(const Models::DescribeDataSourcesRequest &request);

      /**
       * @summary Queries for one or more SAP HANA backup plans that match specified criteria.
       *
       * @param request DescribeHanaBackupPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHanaBackupPlansResponse
       */
      Models::DescribeHanaBackupPlansResponse describeHanaBackupPlansWithOptions(const Models::DescribeHanaBackupPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries for one or more SAP HANA backup plans that match specified criteria.
       *
       * @param request DescribeHanaBackupPlansRequest
       * @return DescribeHanaBackupPlansResponse
       */
      Models::DescribeHanaBackupPlansResponse describeHanaBackupPlans(const Models::DescribeHanaBackupPlansRequest &request);

      /**
       * @summary Queries the backup parameters of an SAP HANA database.
       *
       * @description If you want to query the backup retention period of a database, you can call the DescribeHanaRetentionSetting operation.
       *
       * @param request DescribeHanaBackupSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHanaBackupSettingResponse
       */
      Models::DescribeHanaBackupSettingResponse describeHanaBackupSettingWithOptions(const Models::DescribeHanaBackupSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup parameters of an SAP HANA database.
       *
       * @description If you want to query the backup retention period of a database, you can call the DescribeHanaRetentionSetting operation.
       *
       * @param request DescribeHanaBackupSettingRequest
       * @return DescribeHanaBackupSettingResponse
       */
      Models::DescribeHanaBackupSettingResponse describeHanaBackupSetting(const Models::DescribeHanaBackupSettingRequest &request);

      /**
       * @summary Queries one or more SAP HANA backups that meet the specified conditions.
       *
       * @description After you call the DescribeHanaBackupsAsync operation to query the SAP HANA backups that meet the specified conditions, call the DescribeTask operation to query the final result.
       *
       * @param request DescribeHanaBackupsAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHanaBackupsAsyncResponse
       */
      Models::DescribeHanaBackupsAsyncResponse describeHanaBackupsAsyncWithOptions(const Models::DescribeHanaBackupsAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more SAP HANA backups that meet the specified conditions.
       *
       * @description After you call the DescribeHanaBackupsAsync operation to query the SAP HANA backups that meet the specified conditions, call the DescribeTask operation to query the final result.
       *
       * @param request DescribeHanaBackupsAsyncRequest
       * @return DescribeHanaBackupsAsyncResponse
       */
      Models::DescribeHanaBackupsAsyncResponse describeHanaBackupsAsync(const Models::DescribeHanaBackupsAsyncRequest &request);

      /**
       * @summary Queries the information about SAP HANA databases.
       *
       * @description After you register an SAP HANA instance and install a Cloud Backup client on the instance, you can call this operation to query the information about SAP HANA databases. You can call the StartHanaDatabaseAsync operation to start a database and call the StopHanaDatabaseAsync operation to stop a database.
       *
       * @param request DescribeHanaDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHanaDatabasesResponse
       */
      Models::DescribeHanaDatabasesResponse describeHanaDatabasesWithOptions(const Models::DescribeHanaDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about SAP HANA databases.
       *
       * @description After you register an SAP HANA instance and install a Cloud Backup client on the instance, you can call this operation to query the information about SAP HANA databases. You can call the StartHanaDatabaseAsync operation to start a database and call the StopHanaDatabaseAsync operation to stop a database.
       *
       * @param request DescribeHanaDatabasesRequest
       * @return DescribeHanaDatabasesResponse
       */
      Models::DescribeHanaDatabasesResponse describeHanaDatabases(const Models::DescribeHanaDatabasesRequest &request);

      /**
       * @summary Queries one or more SAP HANA instances that meet the specified conditions.
       *
       * @param request DescribeHanaInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHanaInstancesResponse
       */
      Models::DescribeHanaInstancesResponse describeHanaInstancesWithOptions(const Models::DescribeHanaInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more SAP HANA instances that meet the specified conditions.
       *
       * @param request DescribeHanaInstancesRequest
       * @return DescribeHanaInstancesResponse
       */
      Models::DescribeHanaInstancesResponse describeHanaInstances(const Models::DescribeHanaInstancesRequest &request);

      /**
       * @summary Queries one or more SAP HANA restore jobs that meet the specified conditions.
       *
       * @param request DescribeHanaRestoresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHanaRestoresResponse
       */
      Models::DescribeHanaRestoresResponse describeHanaRestoresWithOptions(const Models::DescribeHanaRestoresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more SAP HANA restore jobs that meet the specified conditions.
       *
       * @param request DescribeHanaRestoresRequest
       * @return DescribeHanaRestoresResponse
       */
      Models::DescribeHanaRestoresResponse describeHanaRestores(const Models::DescribeHanaRestoresRequest &request);

      /**
       * @summary Queries the backup retention period of an SAP HANA database.
       *
       * @description *   If you want to query the backup parameters of a database, you can call the DescribeHanaBackupSetting operation.
       * *   Cloud Backup deletes the expired catalogs and data that are related to Backint and file backup. The deleted catalogs and data cannot be restored. We recommend that you set the retention period based on your business requirements.
       *
       * @param request DescribeHanaRetentionSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHanaRetentionSettingResponse
       */
      Models::DescribeHanaRetentionSettingResponse describeHanaRetentionSettingWithOptions(const Models::DescribeHanaRetentionSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backup retention period of an SAP HANA database.
       *
       * @description *   If you want to query the backup parameters of a database, you can call the DescribeHanaBackupSetting operation.
       * *   Cloud Backup deletes the expired catalogs and data that are related to Backint and file backup. The deleted catalogs and data cannot be restored. We recommend that you set the retention period based on your business requirements.
       *
       * @param request DescribeHanaRetentionSettingRequest
       * @return DescribeHanaRetentionSettingResponse
       */
      Models::DescribeHanaRetentionSettingResponse describeHanaRetentionSetting(const Models::DescribeHanaRetentionSettingRequest &request);

      /**
       * @summary Queries the details about Tablestore instances that are backed up.
       *
       * @param request DescribeOtsTableSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOtsTableSnapshotsResponse
       */
      Models::DescribeOtsTableSnapshotsResponse describeOtsTableSnapshotsWithOptions(const Models::DescribeOtsTableSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about Tablestore instances that are backed up.
       *
       * @param request DescribeOtsTableSnapshotsRequest
       * @return DescribeOtsTableSnapshotsResponse
       */
      Models::DescribeOtsTableSnapshotsResponse describeOtsTableSnapshots(const Models::DescribeOtsTableSnapshotsRequest &request);

      /**
       * @summary Queries one or more policies.
       *
       * @param tmpReq DescribePoliciesV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePoliciesV2Response
       */
      Models::DescribePoliciesV2Response describePoliciesV2WithOptions(const Models::DescribePoliciesV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more policies.
       *
       * @param request DescribePoliciesV2Request
       * @return DescribePoliciesV2Response
       */
      Models::DescribePoliciesV2Response describePoliciesV2(const Models::DescribePoliciesV2Request &request);

      /**
       * @summary Queries one or more data sources bound to a policy, or queries one or more policies bound to a data source.
       *
       * @param tmpReq DescribePolicyBindingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyBindingsResponse
       */
      Models::DescribePolicyBindingsResponse describePolicyBindingsWithOptions(const Models::DescribePolicyBindingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more data sources bound to a policy, or queries one or more policies bound to a data source.
       *
       * @param request DescribePolicyBindingsRequest
       * @return DescribePolicyBindingsResponse
       */
      Models::DescribePolicyBindingsResponse describePolicyBindings(const Models::DescribePolicyBindingsRequest &request);

      /**
       * @summary Queries the tables of a restorable Tablestore instance.
       *
       * @param request DescribeRecoverableOtsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecoverableOtsInstancesResponse
       */
      Models::DescribeRecoverableOtsInstancesResponse describeRecoverableOtsInstancesWithOptions(const Models::DescribeRecoverableOtsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tables of a restorable Tablestore instance.
       *
       * @param request DescribeRecoverableOtsInstancesRequest
       * @return DescribeRecoverableOtsInstancesResponse
       */
      Models::DescribeRecoverableOtsInstancesResponse describeRecoverableOtsInstances(const Models::DescribeRecoverableOtsInstancesRequest &request);

      /**
       * @summary Queries available regions.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Queries restore jobs that match specified criteria.
       *
       * @param request DescribeRestoreJobs2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRestoreJobs2Response
       */
      Models::DescribeRestoreJobs2Response describeRestoreJobs2WithOptions(const Models::DescribeRestoreJobs2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries restore jobs that match specified criteria.
       *
       * @param request DescribeRestoreJobs2Request
       * @return DescribeRestoreJobs2Response
       */
      Models::DescribeRestoreJobs2Response describeRestoreJobs2(const Models::DescribeRestoreJobs2Request &request);

      /**
       * @summary Queries an asynchronous job.
       *
       * @param request DescribeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskResponse
       */
      Models::DescribeTaskResponse describeTaskWithOptions(const Models::DescribeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an asynchronous job.
       *
       * @param request DescribeTaskRequest
       * @return DescribeTaskResponse
       */
      Models::DescribeTaskResponse describeTask(const Models::DescribeTaskRequest &request);

      /**
       * @summary Queries the snapshots of full backups.
       *
       * @param tmpReq DescribeUdmSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUdmSnapshotsResponse
       */
      Models::DescribeUdmSnapshotsResponse describeUdmSnapshotsWithOptions(const Models::DescribeUdmSnapshotsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshots of full backups.
       *
       * @param request DescribeUdmSnapshotsRequest
       * @return DescribeUdmSnapshotsResponse
       */
      Models::DescribeUdmSnapshotsResponse describeUdmSnapshots(const Models::DescribeUdmSnapshotsRequest &request);

      /**
       * @summary Queries the regions that support cross-region replication.
       *
       * @param request DescribeVaultReplicationRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVaultReplicationRegionsResponse
       */
      Models::DescribeVaultReplicationRegionsResponse describeVaultReplicationRegionsWithOptions(const Models::DescribeVaultReplicationRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions that support cross-region replication.
       *
       * @param request DescribeVaultReplicationRegionsRequest
       * @return DescribeVaultReplicationRegionsResponse
       */
      Models::DescribeVaultReplicationRegionsResponse describeVaultReplicationRegions(const Models::DescribeVaultReplicationRegionsRequest &request);

      /**
       * @summary Retrieves information about one or more backup vaults that meet the specified conditions.
       *
       * @param request DescribeVaultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVaultsResponse
       */
      Models::DescribeVaultsResponse describeVaultsWithOptions(const Models::DescribeVaultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about one or more backup vaults that meet the specified conditions.
       *
       * @param request DescribeVaultsRequest
       * @return DescribeVaultsResponse
       */
      Models::DescribeVaultsResponse describeVaults(const Models::DescribeVaultsRequest &request);

      /**
       * @summary Deletes an internal mount target created by Cloud Backup.
       *
       * @description - If the request is successful, the mount target is deleted.
       * - After you create a backup plan for an Apsara File Storage NAS file system, HBR automatically creates a mount target for the file system. Call this operation to delete the mount target. In the **Status** column of the mount target of the NAS file system, the following information is displayed: **This mount target is created by an Alibaba Cloud internal service and cannot be operated. Service name: HBR**.
       *
       * @param request DetachNasFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachNasFileSystemResponse
       */
      Models::DetachNasFileSystemResponse detachNasFileSystemWithOptions(const Models::DetachNasFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an internal mount target created by Cloud Backup.
       *
       * @description - If the request is successful, the mount target is deleted.
       * - After you create a backup plan for an Apsara File Storage NAS file system, HBR automatically creates a mount target for the file system. Call this operation to delete the mount target. In the **Status** column of the mount target of the NAS file system, the following information is displayed: **This mount target is created by an Alibaba Cloud internal service and cannot be operated. Service name: HBR**.
       *
       * @param request DetachNasFileSystemRequest
       * @return DetachNasFileSystemResponse
       */
      Models::DetachNasFileSystemResponse detachNasFileSystem(const Models::DetachNasFileSystemRequest &request);

      /**
       * @summary Disables a backup plan.
       *
       * @description If the call is successful, the backup plan is disabled. The value of the Disabled parameter is then returned as true in the response of the DescribeBackupPlans operation.
       *
       * @param request DisableBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableBackupPlanResponse
       */
      Models::DisableBackupPlanResponse disableBackupPlanWithOptions(const Models::DisableBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a backup plan.
       *
       * @description If the call is successful, the backup plan is disabled. The value of the Disabled parameter is then returned as true in the response of the DescribeBackupPlans operation.
       *
       * @param request DisableBackupPlanRequest
       * @return DisableBackupPlanResponse
       */
      Models::DisableBackupPlanResponse disableBackupPlan(const Models::DisableBackupPlanRequest &request);

      /**
       * @summary Disables an SAP HANA backup plan.
       *
       * @description To enable the backup plan again, call the EnableHanaBackupPlan operation.
       *
       * @param request DisableHanaBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableHanaBackupPlanResponse
       */
      Models::DisableHanaBackupPlanResponse disableHanaBackupPlanWithOptions(const Models::DisableHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an SAP HANA backup plan.
       *
       * @description To enable the backup plan again, call the EnableHanaBackupPlan operation.
       *
       * @param request DisableHanaBackupPlanRequest
       * @return DisableHanaBackupPlanResponse
       */
      Models::DisableHanaBackupPlanResponse disableHanaBackupPlan(const Models::DisableHanaBackupPlanRequest &request);

      /**
       * @summary Resumes a backup plan.
       *
       * @description If the call is successful, the backup plan is enabled. The plan then executes backups according to its policy. In the response of the DescribeBackupPlans operation, the value of the Disabled parameter is false.
       *
       * @param request EnableBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableBackupPlanResponse
       */
      Models::EnableBackupPlanResponse enableBackupPlanWithOptions(const Models::EnableBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a backup plan.
       *
       * @description If the call is successful, the backup plan is enabled. The plan then executes backups according to its policy. In the response of the DescribeBackupPlans operation, the value of the Disabled parameter is false.
       *
       * @param request EnableBackupPlanRequest
       * @return EnableBackupPlanResponse
       */
      Models::EnableBackupPlanResponse enableBackupPlan(const Models::EnableBackupPlanRequest &request);

      /**
       * @summary Enables an SAP HANA backup plan.
       *
       * @description To disable the backup plan again, call the DisableHanaBackupPlan operation.
       *
       * @param request EnableHanaBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHanaBackupPlanResponse
       */
      Models::EnableHanaBackupPlanResponse enableHanaBackupPlanWithOptions(const Models::EnableHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an SAP HANA backup plan.
       *
       * @description To disable the backup plan again, call the DisableHanaBackupPlan operation.
       *
       * @param request EnableHanaBackupPlanRequest
       * @return EnableHanaBackupPlanResponse
       */
      Models::EnableHanaBackupPlanResponse enableHanaBackupPlan(const Models::EnableHanaBackupPlanRequest &request);

      /**
       * @summary Executes a backup plan.
       *
       * @param request ExecuteBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteBackupPlanResponse
       */
      Models::ExecuteBackupPlanResponse executeBackupPlanWithOptions(const Models::ExecuteBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a backup plan.
       *
       * @param request ExecuteBackupPlanRequest
       * @return ExecuteBackupPlanResponse
       */
      Models::ExecuteBackupPlanResponse executeBackupPlan(const Models::ExecuteBackupPlanRequest &request);

      /**
       * @summary Execute a policy for one or all bound data sources.
       *
       * @param request ExecutePolicyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecutePolicyV2Response
       */
      Models::ExecutePolicyV2Response executePolicyV2WithOptions(const Models::ExecutePolicyV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Execute a policy for one or all bound data sources.
       *
       * @param request ExecutePolicyV2Request
       * @return ExecutePolicyV2Response
       */
      Models::ExecutePolicyV2Response executePolicyV2(const Models::ExecutePolicyV2Request &request);

      /**
       * @summary Generates a Resource Access Management (RAM) policy.
       *
       * @param request GenerateRamPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateRamPolicyResponse
       */
      Models::GenerateRamPolicyResponse generateRamPolicyWithOptions(const Models::GenerateRamPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a Resource Access Management (RAM) policy.
       *
       * @param request GenerateRamPolicyRequest
       * @return GenerateRamPolicyResponse
       */
      Models::GenerateRamPolicyResponse generateRamPolicy(const Models::GenerateRamPolicyRequest &request);

      /**
       * @summary Retrieves basic statistics for Backup.
       *
       * @param request GetBasicStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicStatisticsResponse
       */
      Models::GetBasicStatisticsResponse getBasicStatisticsWithOptions(const Models::GetBasicStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves basic statistics for Backup.
       *
       * @param request GetBasicStatisticsRequest
       * @return GetBasicStatisticsResponse
       */
      Models::GetBasicStatisticsResponse getBasicStatistics(const Models::GetBasicStatisticsRequest &request);

      /**
       * @summary Obtains download links of files such as job reports.
       *
       * @param request GetTempFileDownloadLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTempFileDownloadLinkResponse
       */
      Models::GetTempFileDownloadLinkResponse getTempFileDownloadLinkWithOptions(const Models::GetTempFileDownloadLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains download links of files such as job reports.
       *
       * @param request GetTempFileDownloadLinkRequest
       * @return GetTempFileDownloadLinkResponse
       */
      Models::GetTempFileDownloadLinkResponse getTempFileDownloadLink(const Models::GetTempFileDownloadLinkRequest &request);

      /**
       * @summary Installs backup clients on one or more ECS instances.
       *
       * @description - This operation creates a background asynchronous task. The task uses Cloud Assistant to install backup clients on ECS instances.
       * - Call the [DescribeTask](https://help.aliyun.com/document_detail/431265.html) operation to get the task result.
       * - The task timeout is 15 minutes. After the task is created, wait 60 seconds before making the first query. Then, query the result every 30 seconds.
       *
       * @param tmpReq InstallBackupClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallBackupClientsResponse
       */
      Models::InstallBackupClientsResponse installBackupClientsWithOptions(const Models::InstallBackupClientsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs backup clients on one or more ECS instances.
       *
       * @description - This operation creates a background asynchronous task. The task uses Cloud Assistant to install backup clients on ECS instances.
       * - Call the [DescribeTask](https://help.aliyun.com/document_detail/431265.html) operation to get the task result.
       * - The task timeout is 15 minutes. After the task is created, wait 60 seconds before making the first query. Then, query the result every 30 seconds.
       *
       * @param request InstallBackupClientsRequest
       * @return InstallBackupClientsResponse
       */
      Models::InstallBackupClientsResponse installBackupClients(const Models::InstallBackupClientsRequest &request);

      /**
       * @summary Queries the list of protected resources.
       *
       * @param request ListProtectedResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProtectedResourcesResponse
       */
      Models::ListProtectedResourcesResponse listProtectedResourcesWithOptions(const Models::ListProtectedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of protected resources.
       *
       * @param request ListProtectedResourcesRequest
       * @return ListProtectedResourcesResponse
       */
      Models::ListProtectedResourcesResponse listProtectedResources(const Models::ListProtectedResourcesRequest &request);

      /**
       * @summary Activates Cloud Backup.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenHbrServiceResponse
       */
      Models::OpenHbrServiceResponse openHbrServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Cloud Backup.
       *
       * @return OpenHbrServiceResponse
       */
      Models::OpenHbrServiceResponse openHbrService();

      /**
       * @summary Deletes a data source.
       *
       * @description >Warning: 
       * Deleting a data source can cause data loss or render related data unqueryable. Before you delete the data source, ensure that you have removed all associated backup data and backup plans.
       *
       * @param request RemoveDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDataSourceResponse
       */
      Models::RemoveDataSourceResponse removeDataSourceWithOptions(const Models::RemoveDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source.
       *
       * @description >Warning: 
       * Deleting a data source can cause data loss or render related data unqueryable. Before you delete the data source, ensure that you have removed all associated backup data and backup plans.
       *
       * @param request RemoveDataSourceRequest
       * @return RemoveDataSourceResponse
       */
      Models::RemoveDataSourceResponse removeDataSource(const Models::RemoveDataSourceRequest &request);

      /**
       * @summary Retrieves one or more historical backup snapshots that meet the specified criteria.
       *
       * @param tmpReq SearchHistoricalSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchHistoricalSnapshotsResponse
       */
      Models::SearchHistoricalSnapshotsResponse searchHistoricalSnapshotsWithOptions(const Models::SearchHistoricalSnapshotsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves one or more historical backup snapshots that meet the specified criteria.
       *
       * @param request SearchHistoricalSnapshotsRequest
       * @return SearchHistoricalSnapshotsResponse
       */
      Models::SearchHistoricalSnapshotsResponse searchHistoricalSnapshots(const Models::SearchHistoricalSnapshotsRequest &request);

      /**
       * @summary Starts an SAP HANA database.
       *
       * @description To stop the database again, call the StopHanaDatabaseAsync operation.
       *
       * @param request StartHanaDatabaseAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartHanaDatabaseAsyncResponse
       */
      Models::StartHanaDatabaseAsyncResponse startHanaDatabaseAsyncWithOptions(const Models::StartHanaDatabaseAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an SAP HANA database.
       *
       * @description To stop the database again, call the StopHanaDatabaseAsync operation.
       *
       * @param request StartHanaDatabaseAsyncRequest
       * @return StartHanaDatabaseAsyncResponse
       */
      Models::StartHanaDatabaseAsyncResponse startHanaDatabaseAsync(const Models::StartHanaDatabaseAsyncRequest &request);

      /**
       * @summary Stops an SAP HANA database.
       *
       * @description To start the database again, call the StartHanaDatabaseAsync operation.
       *
       * @param request StopHanaDatabaseAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopHanaDatabaseAsyncResponse
       */
      Models::StopHanaDatabaseAsyncResponse stopHanaDatabaseAsyncWithOptions(const Models::StopHanaDatabaseAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an SAP HANA database.
       *
       * @description To start the database again, call the StartHanaDatabaseAsync operation.
       *
       * @param request StopHanaDatabaseAsyncRequest
       * @return StopHanaDatabaseAsyncResponse
       */
      Models::StopHanaDatabaseAsyncResponse stopHanaDatabaseAsync(const Models::StopHanaDatabaseAsyncRequest &request);

      /**
       * @summary Uninstalls a Cloud Backup client from one or more Elastic Compute Service (ECS) instance.
       *
       * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to uninstall a backup client from an ECS instance.
       * *   You can call the DescribeTask operation to query the execution result of an asynchronous job.
       * *   The timeout period of an asynchronous job is 15 minutes. We recommend that you call the DescribeTask operation to run the first query 30 seconds after you call the UninstallBackupClients operation to uninstall backup clients. Then, run the next queries at an interval of 30 seconds.
       *
       * @param tmpReq UninstallBackupClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallBackupClientsResponse
       */
      Models::UninstallBackupClientsResponse uninstallBackupClientsWithOptions(const Models::UninstallBackupClientsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls a Cloud Backup client from one or more Elastic Compute Service (ECS) instance.
       *
       * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to uninstall a backup client from an ECS instance.
       * *   You can call the DescribeTask operation to query the execution result of an asynchronous job.
       * *   The timeout period of an asynchronous job is 15 minutes. We recommend that you call the DescribeTask operation to run the first query 30 seconds after you call the UninstallBackupClients operation to uninstall backup clients. Then, run the next queries at an interval of 30 seconds.
       *
       * @param request UninstallBackupClientsRequest
       * @return UninstallBackupClientsResponse
       */
      Models::UninstallBackupClientsResponse uninstallBackupClients(const Models::UninstallBackupClientsRequest &request);

      /**
       * @summary Uninstalls an HBR client.
       *
       * @description If you call this operation, the specified HBR client is uninstalled. To reinstall the HBR client, call the CreateClients operation.
       *
       * @param request UninstallClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallClientResponse
       */
      Models::UninstallClientResponse uninstallClientWithOptions(const Models::UninstallClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls an HBR client.
       *
       * @description If you call this operation, the specified HBR client is uninstalled. To reinstall the HBR client, call the CreateClients operation.
       *
       * @param request UninstallClientRequest
       * @return UninstallClientResponse
       */
      Models::UninstallClientResponse uninstallClient(const Models::UninstallClientRequest &request);

      /**
       * @summary Updates a backup plan.
       *
       * @param tmpReq UpdateBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupPlanResponse
       */
      Models::UpdateBackupPlanResponse updateBackupPlanWithOptions(const Models::UpdateBackupPlanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a backup plan.
       *
       * @param request UpdateBackupPlanRequest
       * @return UpdateBackupPlanResponse
       */
      Models::UpdateBackupPlanResponse updateBackupPlan(const Models::UpdateBackupPlanRequest &request);

      /**
       * @summary Updates the configuration of a backup client.
       *
       * @description Applies to updating both legacy and new clients.
       *
       * @param request UpdateClientSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientSettingsResponse
       */
      Models::UpdateClientSettingsResponse updateClientSettingsWithOptions(const Models::UpdateClientSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a backup client.
       *
       * @description Applies to updating both legacy and new clients.
       *
       * @param request UpdateClientSettingsRequest
       * @return UpdateClientSettingsResponse
       */
      Models::UpdateClientSettingsResponse updateClientSettings(const Models::UpdateClientSettingsRequest &request);

      /**
       * @summary Update container cluster information, including the container cluster name, network type, etc.
       *
       * @param request UpdateContainerClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContainerClusterResponse
       */
      Models::UpdateContainerClusterResponse updateContainerClusterWithOptions(const Models::UpdateContainerClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update container cluster information, including the container cluster name, network type, etc.
       *
       * @param request UpdateContainerClusterRequest
       * @return UpdateContainerClusterResponse
       */
      Models::UpdateContainerClusterResponse updateContainerCluster(const Models::UpdateContainerClusterRequest &request);

      /**
       * @summary Updates the data source configuration.
       *
       * @param request UpdateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSourceWithOptions(const Models::UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the data source configuration.
       *
       * @param request UpdateDataSourceRequest
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSource(const Models::UpdateDataSourceRequest &request);

      /**
       * @summary Updates an SAP HANA backup plan.
       *
       * @description *   A backup plan defines the data source, backup policy, and other configurations. After you execute a backup plan, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
       * *   You can specify only one type of data source in a backup plan.
       * *   You can specify only one interval as a backup cycle in a backup plan.
       * *   Each backup plan allows you to back up data to only one backup vault.
       *
       * @param request UpdateHanaBackupPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHanaBackupPlanResponse
       */
      Models::UpdateHanaBackupPlanResponse updateHanaBackupPlanWithOptions(const Models::UpdateHanaBackupPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an SAP HANA backup plan.
       *
       * @description *   A backup plan defines the data source, backup policy, and other configurations. After you execute a backup plan, a backup job is generated to record the backup progress and the backup result. If a backup job is completed, a backup snapshot is generated. You can use a backup snapshot to create a restore job.
       * *   You can specify only one type of data source in a backup plan.
       * *   You can specify only one interval as a backup cycle in a backup plan.
       * *   Each backup plan allows you to back up data to only one backup vault.
       *
       * @param request UpdateHanaBackupPlanRequest
       * @return UpdateHanaBackupPlanResponse
       */
      Models::UpdateHanaBackupPlanResponse updateHanaBackupPlan(const Models::UpdateHanaBackupPlanRequest &request);

      /**
       * @summary Updates the backup parameters of an SAP HANA database.
       *
       * @description You can call the UpdateHanaRetentionSetting operation to update the backup retention period of a database.
       *
       * @param request UpdateHanaBackupSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHanaBackupSettingResponse
       */
      Models::UpdateHanaBackupSettingResponse updateHanaBackupSettingWithOptions(const Models::UpdateHanaBackupSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the backup parameters of an SAP HANA database.
       *
       * @description You can call the UpdateHanaRetentionSetting operation to update the backup retention period of a database.
       *
       * @param request UpdateHanaBackupSettingRequest
       * @return UpdateHanaBackupSettingResponse
       */
      Models::UpdateHanaBackupSettingResponse updateHanaBackupSetting(const Models::UpdateHanaBackupSettingRequest &request);

      /**
       * @summary Updates an SAP HANA instance.
       *
       * @param request UpdateHanaInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHanaInstanceResponse
       */
      Models::UpdateHanaInstanceResponse updateHanaInstanceWithOptions(const Models::UpdateHanaInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an SAP HANA instance.
       *
       * @param request UpdateHanaInstanceRequest
       * @return UpdateHanaInstanceResponse
       */
      Models::UpdateHanaInstanceResponse updateHanaInstance(const Models::UpdateHanaInstanceRequest &request);

      /**
       * @summary Updates the backup retention period of an SAP HANA database.
       *
       * @description *   If you want to update the backup parameters of a database, you can call the UpdateHanaBackupSetting operation.
       * *   Cloud Backup deletes the expired catalogs and data that are related to Backint and file backup. The deleted catalogs and data cannot be restored. We recommend that you set the retention period based on your business requirements.
       *
       * @param request UpdateHanaRetentionSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHanaRetentionSettingResponse
       */
      Models::UpdateHanaRetentionSettingResponse updateHanaRetentionSettingWithOptions(const Models::UpdateHanaRetentionSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the backup retention period of an SAP HANA database.
       *
       * @description *   If you want to update the backup parameters of a database, you can call the UpdateHanaBackupSetting operation.
       * *   Cloud Backup deletes the expired catalogs and data that are related to Backint and file backup. The deleted catalogs and data cannot be restored. We recommend that you set the retention period based on your business requirements.
       *
       * @param request UpdateHanaRetentionSettingRequest
       * @return UpdateHanaRetentionSettingResponse
       */
      Models::UpdateHanaRetentionSettingResponse updateHanaRetentionSetting(const Models::UpdateHanaRetentionSettingRequest &request);

      /**
       * @summary Modifies the association between a policy and a data source.
       *
       * @param tmpReq UpdatePolicyBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyBindingResponse
       */
      Models::UpdatePolicyBindingResponse updatePolicyBindingWithOptions(const Models::UpdatePolicyBindingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the association between a policy and a data source.
       *
       * @param request UpdatePolicyBindingRequest
       * @return UpdatePolicyBindingResponse
       */
      Models::UpdatePolicyBindingResponse updatePolicyBinding(const Models::UpdatePolicyBindingRequest &request);

      /**
       * @summary Modifies a policy.
       *
       * @description Modifications to a policy take effect on all associated data sources. Proceed with caution.
       *
       * @param tmpReq UpdatePolicyV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyV2Response
       */
      Models::UpdatePolicyV2Response updatePolicyV2WithOptions(const Models::UpdatePolicyV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a policy.
       *
       * @description Modifications to a policy take effect on all associated data sources. Proceed with caution.
       *
       * @param request UpdatePolicyV2Request
       * @return UpdatePolicyV2Response
       */
      Models::UpdatePolicyV2Response updatePolicyV2(const Models::UpdatePolicyV2Request &request);

      /**
       * @summary Updates the configuration information about the backup vault.
       *
       * @param request UpdateVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVaultResponse
       */
      Models::UpdateVaultResponse updateVaultWithOptions(const Models::UpdateVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration information about the backup vault.
       *
       * @param request UpdateVaultRequest
       * @return UpdateVaultResponse
       */
      Models::UpdateVaultResponse updateVault(const Models::UpdateVaultRequest &request);

      /**
       * @summary Upgrades an HBR client on one or more Elastic Compute Service (ECS) instances.
       *
       * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to upgrade an HBR client that is installed on an ECS instance.
       * *   You can call the DescribeTask operation to query the execution result of an asynchronous job.
       * *   The timeout period of an asynchronous job is 15 minutes.
       *
       * @param tmpReq UpgradeBackupClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeBackupClientsResponse
       */
      Models::UpgradeBackupClientsResponse upgradeBackupClientsWithOptions(const Models::UpgradeBackupClientsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades an HBR client on one or more Elastic Compute Service (ECS) instances.
       *
       * @description *   This operation creates an asynchronous job at the backend and calls Cloud Assistant to upgrade an HBR client that is installed on an ECS instance.
       * *   You can call the DescribeTask operation to query the execution result of an asynchronous job.
       * *   The timeout period of an asynchronous job is 15 minutes.
       *
       * @param request UpgradeBackupClientsRequest
       * @return UpgradeBackupClientsResponse
       */
      Models::UpgradeBackupClientsResponse upgradeBackupClients(const Models::UpgradeBackupClientsRequest &request);

      /**
       * @summary Upgrades the Cloud Backup client.
       *
       * @description Upgrades a Cloud Backup client to the latest version. After the upgrade succeeds, the client version cannot be rolled back.
       *
       * @param request UpgradeClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClientResponse
       */
      Models::UpgradeClientResponse upgradeClientWithOptions(const Models::UpgradeClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the Cloud Backup client.
       *
       * @description Upgrades a Cloud Backup client to the latest version. After the upgrade succeeds, the client version cannot be rolled back.
       *
       * @param request UpgradeClientRequest
       * @return UpgradeClientResponse
       */
      Models::UpgradeClientResponse upgradeClient(const Models::UpgradeClientRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
