// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_POLARDBX20200202_HPP_
#define ALIBABACLOUD_POLARDBX20200202_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Polardbx20200202Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Polardbx20200202.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AlignStoragePrimaryAzoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AlignStoragePrimaryAzoneResponse
       */
      Models::AlignStoragePrimaryAzoneResponse alignStoragePrimaryAzoneWithOptions(const Models::AlignStoragePrimaryAzoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AlignStoragePrimaryAzoneRequest
       * @return AlignStoragePrimaryAzoneResponse
       */
      Models::AlignStoragePrimaryAzoneResponse alignStoragePrimaryAzone(const Models::AlignStoragePrimaryAzoneRequest &request);

      /**
       * @summary Calls the AllocateColdDataVolume operation.
       *
       * @param request AllocateColdDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateColdDataVolumeResponse
       */
      Models::AllocateColdDataVolumeResponse allocateColdDataVolumeWithOptions(const Models::AllocateColdDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the AllocateColdDataVolume operation.
       *
       * @param request AllocateColdDataVolumeRequest
       * @return AllocateColdDataVolumeResponse
       */
      Models::AllocateColdDataVolumeResponse allocateColdDataVolume(const Models::AllocateColdDataVolumeRequest &request);

      /**
       * @summary Calls the AllocateInstancePublicConnection operation to create a public IP address.
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the AllocateInstancePublicConnection operation to create a public IP address.
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @summary Enables a public domain name for a Mem0 instance.
       *
       * @description This operation is used to confirm that no active connections exist before a rollback task, to ensure operation safety.
       *
       * @param request AllocateMem0PublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateMem0PublicConnectionResponse
       */
      Models::AllocateMem0PublicConnectionResponse allocateMem0PublicConnectionWithOptions(const Models::AllocateMem0PublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a public domain name for a Mem0 instance.
       *
       * @description This operation is used to confirm that no active connections exist before a rollback task, to ensure operation safety.
       *
       * @param request AllocateMem0PublicConnectionRequest
       * @return AllocateMem0PublicConnectionResponse
       */
      Models::AllocateMem0PublicConnectionResponse allocateMem0PublicConnection(const Models::AllocateMem0PublicConnectionRequest &request);

      /**
       * @summary Mounts a columnar instance to a specified primary database instance.
       *
       * @param request AttachColumnarInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachColumnarInstanceResponse
       */
      Models::AttachColumnarInstanceResponse attachColumnarInstanceWithOptions(const Models::AttachColumnarInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mounts a columnar instance to a specified primary database instance.
       *
       * @param request AttachColumnarInstanceRequest
       * @return AttachColumnarInstanceResponse
       */
      Models::AttachColumnarInstanceResponse attachColumnarInstance(const Models::AttachColumnarInstanceRequest &request);

      /**
       * @summary Cancels active O&M event tasks by calling the CancelActiveOperationTasks operation.
       *
       * @param request CancelActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(const Models::CancelActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels active O&M event tasks by calling the CancelActiveOperationTasks operation.
       *
       * @param request CancelActiveOperationTasksRequest
       * @return CancelActiveOperationTasksResponse
       */
      Models::CancelActiveOperationTasksResponse cancelActiveOperationTasks(const Models::CancelActiveOperationTasksRequest &request);

      /**
       * @summary Modifies the resource group of an instance.
       *
       * @description Note: 
       * - The **endpoint** differs from other operations. Use **polardbx.aliyuncs.com** for Chinese mainland regions and Singapore. For other regions, use **polardbx.{region id}.aliyunc.com**.
       * - When testing this API operation, if a service unavailable error is returned, verify that the **endpoint** is correct. You can switch the **service address** to **Dubai** or **India** to change the **endpoint** to **polardbx.aliyuncs.com**.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group of an instance.
       *
       * @description Note: 
       * - The **endpoint** differs from other operations. Use **polardbx.aliyuncs.com** for Chinese mainland regions and Singapore. For other regions, use **polardbx.{region id}.aliyunc.com**.
       * - When testing this API operation, if a service unavailable error is returned, verify that the **endpoint** is correct. You can switch the **service address** to **Dubai** or **India** to change the **endpoint** to **polardbx.aliyuncs.com**.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Checks whether a PolarDB-X instance is authorized to use Key Management Service (KMS).
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(const Models::CheckCloudResourceAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a PolarDB-X instance is authorized to use Key Management Service (KMS).
       *
       * @param request CheckCloudResourceAuthorizedRequest
       * @return CheckCloudResourceAuthorizedResponse
       */
      Models::CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(const Models::CheckCloudResourceAuthorizedRequest &request);

      /**
       * @summary Performs a service health check.
       *
       * @param request CheckHealthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckHealthResponse
       */
      Models::CheckHealthResponse checkHealthWithOptions(const Models::CheckHealthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a service health check.
       *
       * @param request CheckHealthRequest
       * @return CheckHealthResponse
       */
      Models::CheckHealthResponse checkHealth(const Models::CheckHealthRequest &request);

      /**
       * @summary Checks whether SQL audit logs of a specified database instance have been successfully connected to Simple Log Service (SLS).
       * After the call, the system returns the connection status between the SQL audit feature and SLS for the current instance, the project and Logstore configuration information, and whether synchronization is normal.
       *
       * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Simple Log Service charges fees for storage space, read traffic, number of requests, data transformation, and data delivery. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request CheckSqlAuditSlsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSqlAuditSlsStatusResponse
       */
      Models::CheckSqlAuditSlsStatusResponse checkSqlAuditSlsStatusWithOptions(const Models::CheckSqlAuditSlsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether SQL audit logs of a specified database instance have been successfully connected to Simple Log Service (SLS).
       * After the call, the system returns the connection status between the SQL audit feature and SLS for the current instance, the project and Logstore configuration information, and whether synchronization is normal.
       *
       * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Simple Log Service charges fees for storage space, read traffic, number of requests, data transformation, and data delivery. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request CheckSqlAuditSlsStatusRequest
       * @return CheckSqlAuditSlsStatusResponse
       */
      Models::CheckSqlAuditSlsStatusResponse checkSqlAuditSlsStatus(const Models::CheckSqlAuditSlsStatusRequest &request);

      /**
       * @summary Closes the database engine migration process for a specified instance. After you start a data migration task from another database (such as a self-managed MySQL database or an ApsaraDB RDS instance) to PolarDB-X, you can call this operation to safely stop the migration process if you need to terminate or clean up the migration state.
       *
       * @param request CloseEngineMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseEngineMigrationResponse
       */
      Models::CloseEngineMigrationResponse closeEngineMigrationWithOptions(const Models::CloseEngineMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes the database engine migration process for a specified instance. After you start a data migration task from another database (such as a self-managed MySQL database or an ApsaraDB RDS instance) to PolarDB-X, you can call this operation to safely stop the migration process if you need to terminate or clean up the migration state.
       *
       * @param request CloseEngineMigrationRequest
       * @return CloseEngineMigrationResponse
       */
      Models::CloseEngineMigrationResponse closeEngineMigration(const Models::CloseEngineMigrationRequest &request);

      /**
       * @summary Confirms that no active connections exist before performing a rollback switchover.
       *
       * @description Confirms that no active connections exist before a rollback task to ensure operation safety.
       *
       * @param request ConfirmNoConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmNoConnectionResponse
       */
      Models::ConfirmNoConnectionResponse confirmNoConnectionWithOptions(const Models::ConfirmNoConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms that no active connections exist before performing a rollback switchover.
       *
       * @description Confirms that no active connections exist before a rollback task to ensure operation safety.
       *
       * @param request ConfirmNoConnectionRequest
       * @return ConfirmNoConnectionResponse
       */
      Models::ConfirmNoConnectionResponse confirmNoConnection(const Models::ConfirmNoConnectionRequest &request);

      /**
       * @summary Creates an account by calling the CreateAccount operation.
       *
       * @param request CreateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccountWithOptions(const Models::CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account by calling the CreateAccount operation.
       *
       * @param request CreateAccountRequest
       * @return CreateAccountResponse
       */
      Models::CreateAccountResponse createAccount(const Models::CreateAccountRequest &request);

      /**
       * @summary Calls the CreateBackup operation to create a backup.
       *
       * @param request CreateBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackupWithOptions(const Models::CreateBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateBackup operation to create a backup.
       *
       * @param request CreateBackupRequest
       * @return CreateBackupResponse
       */
      Models::CreateBackupResponse createBackup(const Models::CreateBackupRequest &request);

      /**
       * @summary Creates a custom endpoint for a database instance.
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html)..
       *
       * @param request CreateCustomEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomEndpointResponse
       */
      Models::CreateCustomEndpointResponse createCustomEndpointWithOptions(const Models::CreateCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom endpoint for a database instance.
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html)..
       *
       * @param request CreateCustomEndpointRequest
       * @return CreateCustomEndpointResponse
       */
      Models::CreateCustomEndpointResponse createCustomEndpoint(const Models::CreateCustomEndpointRequest &request);

      /**
       * @summary Creates a database by calling the CreateDB operation.
       *
       * @param request CreateDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBResponse
       */
      Models::CreateDBResponse createDBWithOptions(const Models::CreateDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database by calling the CreateDB operation.
       *
       * @param request CreateDBRequest
       * @return CreateDBResponse
       */
      Models::CreateDBResponse createDB(const Models::CreateDBRequest &request);

      /**
       * @summary Calls the CreateDBInstance operation to create a PolarDB-X instance.
       *
       * @description ****
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateDBInstance operation to create a PolarDB-X instance.
       *
       * @description ****
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates a data import task to import external data files, such as SQL scripts and CSV files, into a target database instance.
       *
       * @description Creates a data import task that imports SQL or CSV files stored in OSS or ECS, or directly provided files, into a target database instance. By specifying the instance ID, database name, engine type, data source (such as an OSS path), and import type, the system performs data write operations asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
       *
       * @param request CreateDataImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataImportTaskResponse
       */
      Models::CreateDataImportTaskResponse createDataImportTaskWithOptions(const Models::CreateDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data import task to import external data files, such as SQL scripts and CSV files, into a target database instance.
       *
       * @description Creates a data import task that imports SQL or CSV files stored in OSS or ECS, or directly provided files, into a target database instance. By specifying the instance ID, database name, engine type, data source (such as an OSS path), and import type, the system performs data write operations asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
       *
       * @param request CreateDataImportTaskRequest
       * @return CreateDataImportTaskResponse
       */
      Models::CreateDataImportTaskResponse createDataImportTask(const Models::CreateDataImportTaskRequest &request);

      /**
       * @summary Creates an AI gateway consumer for a PolarDB-X instance.
       *
       * @description ****.
       *
       * @param request CreateGatewayConsumerForPolarDBXRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayConsumerForPolarDBXResponse
       */
      Models::CreateGatewayConsumerForPolarDBXResponse createGatewayConsumerForPolarDBXWithOptions(const Models::CreateGatewayConsumerForPolarDBXRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AI gateway consumer for a PolarDB-X instance.
       *
       * @description ****.
       *
       * @param request CreateGatewayConsumerForPolarDBXRequest
       * @return CreateGatewayConsumerForPolarDBXResponse
       */
      Models::CreateGatewayConsumerForPolarDBXResponse createGatewayConsumerForPolarDBX(const Models::CreateGatewayConsumerForPolarDBXRequest &request);

      /**
       * @summary Creates a Global Database Network (GDN) instance.
       *
       * @param request CreateGdnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGdnInstanceResponse
       */
      Models::CreateGdnInstanceResponse createGdnInstanceWithOptions(const Models::CreateGdnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Global Database Network (GDN) instance.
       *
       * @param request CreateGdnInstanceRequest
       * @return CreateGdnInstanceResponse
       */
      Models::CreateGdnInstanceResponse createGdnInstance(const Models::CreateGdnInstanceRequest &request);

      /**
       * @summary 创建GDN从实例
       *
       * @description <props="china">更多关于实例账号的信息，请参见[账号管理](https://help.aliyun.com/document_detail/172163.html)。
       *
       * @param request CreateGdnStandbyMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGdnStandbyMemberResponse
       */
      Models::CreateGdnStandbyMemberResponse createGdnStandbyMemberWithOptions(const Models::CreateGdnStandbyMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建GDN从实例
       *
       * @description <props="china">更多关于实例账号的信息，请参见[账号管理](https://help.aliyun.com/document_detail/172163.html)。
       *
       * @param request CreateGdnStandbyMemberRequest
       * @return CreateGdnStandbyMemberResponse
       */
      Models::CreateGdnStandbyMemberResponse createGdnStandbyMember(const Models::CreateGdnStandbyMemberRequest &request);

      /**
       * @summary Enable Memory Engine
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
       *
       * @param request CreateMem0Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMem0Response
       */
      Models::CreateMem0Response createMem0WithOptions(const Models::CreateMem0Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable Memory Engine
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
       *
       * @param request CreateMem0Request
       * @return CreateMem0Response
       */
      Models::CreateMem0Response createMem0(const Models::CreateMem0Request &request);

      /**
       * @summary Creates a Supabase instance.
       *
       * @description ****
       *
       * @param request CreatePolardbxSupabaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolardbxSupabaseInstanceResponse
       */
      Models::CreatePolardbxSupabaseInstanceResponse createPolardbxSupabaseInstanceWithOptions(const Models::CreatePolardbxSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Supabase instance.
       *
       * @description ****
       *
       * @param request CreatePolardbxSupabaseInstanceRequest
       * @return CreatePolardbxSupabaseInstanceResponse
       */
      Models::CreatePolardbxSupabaseInstanceResponse createPolardbxSupabaseInstance(const Models::CreatePolardbxSupabaseInstanceRequest &request);

      /**
       * @summary Performs a health check on the replication task during data migration.
       *
       * @description During the data synchronization phase, proactively initiates a diagnostic task for the replication task to check for issues such as latency, replication interruption, or data inconsistency.
       *
       * @param request CreateRplInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRplInspectionTaskResponse
       */
      Models::CreateRplInspectionTaskResponse createRplInspectionTaskWithOptions(const Models::CreateRplInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a health check on the replication task during data migration.
       *
       * @description During the data synchronization phase, proactively initiates a diagnostic task for the replication task to check for issues such as latency, replication interruption, or data inconsistency.
       *
       * @param request CreateRplInspectionTaskRequest
       * @return CreateRplInspectionTaskResponse
       */
      Models::CreateRplInspectionTaskResponse createRplInspectionTask(const Models::CreateRplInspectionTaskRequest &request);

      /**
       * @summary Creates a SQL statement assessment task. You submit SQL statements through this operation, and the system performs static analysis and risk assessment to identify execution risks and compatibility issues on the target database instance.
       *
       * @param request CreateSQLEvaluateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSQLEvaluateTaskResponse
       */
      Models::CreateSQLEvaluateTaskResponse createSQLEvaluateTaskWithOptions(const Models::CreateSQLEvaluateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a SQL statement assessment task. You submit SQL statements through this operation, and the system performs static analysis and risk assessment to identify execution risks and compatibility issues on the target database instance.
       *
       * @param request CreateSQLEvaluateTaskRequest
       * @return CreateSQLEvaluateTaskResponse
       */
      Models::CreateSQLEvaluateTaskResponse createSQLEvaluateTask(const Models::CreateSQLEvaluateTaskRequest &request);

      /**
       * @summary Creates a service account.
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
       *
       * @param request CreateServiceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceAccountResponse
       */
      Models::CreateServiceAccountResponse createServiceAccountWithOptions(const Models::CreateServiceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service account.
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
       *
       * @param request CreateServiceAccountRequest
       * @return CreateServiceAccountResponse
       */
      Models::CreateServiceAccountResponse createServiceAccount(const Models::CreateServiceAccountRequest &request);

      /**
       * @summary Creates a resource storage pool.
       *
       * @param request CreateStoragePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStoragePoolResponse
       */
      Models::CreateStoragePoolResponse createStoragePoolWithOptions(const Models::CreateStoragePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource storage pool.
       *
       * @param request CreateStoragePoolRequest
       * @return CreateStoragePoolResponse
       */
      Models::CreateStoragePoolResponse createStoragePool(const Models::CreateStoragePoolRequest &request);

      /**
       * @summary Creates a database schema import task. This operation allows you to import SQL script files or text content that contains DDL statements into a target database instance, and automatically performs schema operations such as creating tables, indexes, views, and stored procedures.
       *
       * @param request CreateStructureImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStructureImportTaskResponse
       */
      Models::CreateStructureImportTaskResponse createStructureImportTaskWithOptions(const Models::CreateStructureImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a database schema import task. This operation allows you to import SQL script files or text content that contains DDL statements into a target database instance, and automatically performs schema operations such as creating tables, indexes, views, and stored procedures.
       *
       * @param request CreateStructureImportTaskRequest
       * @return CreateStructureImportTaskResponse
       */
      Models::CreateStructureImportTaskResponse createStructureImportTask(const Models::CreateStructureImportTaskRequest &request);

      /**
       * @summary Creates a custom endpoint.
       *
       * @description ****
       *
       * @param request CreateSubCNInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubCNInstanceResponse
       */
      Models::CreateSubCNInstanceResponse createSubCNInstanceWithOptions(const Models::CreateSubCNInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom endpoint.
       *
       * @description ****
       *
       * @param request CreateSubCNInstanceRequest
       * @return CreateSubCNInstanceResponse
       */
      Models::CreateSubCNInstanceResponse createSubCNInstance(const Models::CreateSubCNInstanceRequest &request);

      /**
       * @summary Enables the public endpoint for a Supabase instance.
       *
       * @description ****
       *
       * @param request CreateSupabaseNetTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSupabaseNetTypeResponse
       */
      Models::CreateSupabaseNetTypeResponse createSupabaseNetTypeWithOptions(const Models::CreateSupabaseNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the public endpoint for a Supabase instance.
       *
       * @description ****
       *
       * @param request CreateSupabaseNetTypeRequest
       * @return CreateSupabaseNetTypeResponse
       */
      Models::CreateSupabaseNetTypeResponse createSupabaseNetType(const Models::CreateSupabaseNetTypeRequest &request);

      /**
       * @summary Creates a privileged user. Each instance can have only one privileged user.
       *
       * @param request CreateSuperAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSuperAccountResponse
       */
      Models::CreateSuperAccountResponse createSuperAccountWithOptions(const Models::CreateSuperAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a privileged user. Each instance can have only one privileged user.
       *
       * @param request CreateSuperAccountRequest
       * @return CreateSuperAccountResponse
       */
      Models::CreateSuperAccountResponse createSuperAccount(const Models::CreateSuperAccountRequest &request);

      /**
       * @summary Creates a conversion task to change a specific status or configuration of an instance.
       *
       * @param request CreateTransformOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransformOperationResponse
       */
      Models::CreateTransformOperationResponse createTransformOperationWithOptions(const Models::CreateTransformOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a conversion task to change a specific status or configuration of an instance.
       *
       * @param request CreateTransformOperationRequest
       * @return CreateTransformOperationResponse
       */
      Models::CreateTransformOperationResponse createTransformOperation(const Models::CreateTransformOperationRequest &request);

      /**
       * @summary Deletes an account by calling the DeleteAccount operation.
       *
       * @param request DeleteAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccountWithOptions(const Models::DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an account by calling the DeleteAccount operation.
       *
       * @param request DeleteAccountRequest
       * @return DeleteAccountResponse
       */
      Models::DeleteAccountResponse deleteAccount(const Models::DeleteAccountRequest &request);

      /**
       * @summary Deletes a custom endpoint domain name.
       *
       * @description Deletes the custom endpoint of a specified database instance and disables access through the domain name.
       *
       * @param request DeleteCustomEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomEndpointResponse
       */
      Models::DeleteCustomEndpointResponse deleteCustomEndpointWithOptions(const Models::DeleteCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom endpoint domain name.
       *
       * @description Deletes the custom endpoint of a specified database instance and disables access through the domain name.
       *
       * @param request DeleteCustomEndpointRequest
       * @return DeleteCustomEndpointResponse
       */
      Models::DeleteCustomEndpointResponse deleteCustomEndpoint(const Models::DeleteCustomEndpointRequest &request);

      /**
       * @summary Deletes a database by calling the DeleteDB operation.
       *
       * @param request DeleteDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBResponse
       */
      Models::DeleteDBResponse deleteDBWithOptions(const Models::DeleteDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a database by calling the DeleteDB operation.
       *
       * @param request DeleteDBRequest
       * @return DeleteDBResponse
       */
      Models::DeleteDBResponse deleteDB(const Models::DeleteDBRequest &request);

      /**
       * @summary Calls the DeleteDBInstance operation to delete an instance.
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteDBInstance operation to delete an instance.
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary Deletes an evaluation import task.
       *
       * @description Deletes a created evaluation task and performs subsequent data import operations.
       *
       * @param request DeleteEvaluateAndImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEvaluateAndImportTaskResponse
       */
      Models::DeleteEvaluateAndImportTaskResponse deleteEvaluateAndImportTaskWithOptions(const Models::DeleteEvaluateAndImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an evaluation import task.
       *
       * @description Deletes a created evaluation task and performs subsequent data import operations.
       *
       * @param request DeleteEvaluateAndImportTaskRequest
       * @return DeleteEvaluateAndImportTaskResponse
       */
      Models::DeleteEvaluateAndImportTaskResponse deleteEvaluateAndImportTask(const Models::DeleteEvaluateAndImportTaskRequest &request);

      /**
       * @summary Deletes a global database network (GDN) instance.
       *
       * @param request DeleteGdnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGdnInstanceResponse
       */
      Models::DeleteGdnInstanceResponse deleteGdnInstanceWithOptions(const Models::DeleteGdnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global database network (GDN) instance.
       *
       * @param request DeleteGdnInstanceRequest
       * @return DeleteGdnInstanceResponse
       */
      Models::DeleteGdnInstanceResponse deleteGdnInstance(const Models::DeleteGdnInstanceRequest &request);

      /**
       * @summary Disables the memory engine.
       *
       * @description Deletes the custom endpoint of a specified database instance and disables the access entry for the domain name.
       *
       * @param request DeleteMem0Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMem0Response
       */
      Models::DeleteMem0Response deleteMem0WithOptions(const Models::DeleteMem0Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the memory engine.
       *
       * @description Deletes the custom endpoint of a specified database instance and disables the access entry for the domain name.
       *
       * @param request DeleteMem0Request
       * @return DeleteMem0Response
       */
      Models::DeleteMem0Response deleteMem0(const Models::DeleteMem0Request &request);

      /**
       * @summary Deletes a Supabase instance.
       *
       * @description ****
       *
       * @param request DeletePolardbxSupabaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolardbxSupabaseInstanceResponse
       */
      Models::DeletePolardbxSupabaseInstanceResponse deletePolardbxSupabaseInstanceWithOptions(const Models::DeletePolardbxSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Supabase instance.
       *
       * @description ****
       *
       * @param request DeletePolardbxSupabaseInstanceRequest
       * @return DeletePolardbxSupabaseInstanceResponse
       */
      Models::DeletePolardbxSupabaseInstanceResponse deletePolardbxSupabaseInstance(const Models::DeletePolardbxSupabaseInstanceRequest &request);

      /**
       * @summary Deletes a service account.
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
       *
       * @param request DeleteServiceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceAccountResponse
       */
      Models::DeleteServiceAccountResponse deleteServiceAccountWithOptions(const Models::DeleteServiceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service account.
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
       *
       * @param request DeleteServiceAccountRequest
       * @return DeleteServiceAccountResponse
       */
      Models::DeleteServiceAccountResponse deleteServiceAccount(const Models::DeleteServiceAccountRequest &request);

      /**
       * @summary 删除自定义地址
       *
       * @description ****
       *
       * @param request DeleteSubCNInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubCNInstanceResponse
       */
      Models::DeleteSubCNInstanceResponse deleteSubCNInstanceWithOptions(const Models::DeleteSubCNInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义地址
       *
       * @description ****
       *
       * @param request DeleteSubCNInstanceRequest
       * @return DeleteSubCNInstanceResponse
       */
      Models::DeleteSubCNInstanceResponse deleteSubCNInstance(const Models::DeleteSubCNInstanceRequest &request);

      /**
       * @summary Releases the public endpoint of a Supabase instance.
       *
       * @description ****
       *
       * @param request DeleteSupabaseNetTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSupabaseNetTypeResponse
       */
      Models::DeleteSupabaseNetTypeResponse deleteSupabaseNetTypeWithOptions(const Models::DeleteSupabaseNetTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of a Supabase instance.
       *
       * @description ****
       *
       * @param request DeleteSupabaseNetTypeRequest
       * @return DeleteSupabaseNetTypeResponse
       */
      Models::DeleteSupabaseNetTypeResponse deleteSupabaseNetType(const Models::DeleteSupabaseNetTypeRequest &request);

      /**
       * @summary Queries the list of accounts by calling the DescribeAccountList operation.
       *
       * @param request DescribeAccountListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountListResponse
       */
      Models::DescribeAccountListResponse describeAccountListWithOptions(const Models::DescribeAccountListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of accounts by calling the DescribeAccountList operation.
       *
       * @param request DescribeAccountListRequest
       * @return DescribeAccountListResponse
       */
      Models::DescribeAccountListResponse describeAccountList(const Models::DescribeAccountListRequest &request);

      /**
       * @summary Calls the DescribeActiveOperationMaintainConf operation to display the O&M window configuration.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConfWithOptions(const Models::DescribeActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeActiveOperationMaintainConf operation to display the O&M window configuration.
       *
       * @param request DescribeActiveOperationMaintainConfRequest
       * @return DescribeActiveOperationMaintainConfResponse
       */
      Models::DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConf(const Models::DescribeActiveOperationMaintainConfRequest &request);

      /**
       * @summary Retrieves the total number of O&M events.
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCountWithOptions(const Models::DescribeActiveOperationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the total number of O&M events.
       *
       * @param request DescribeActiveOperationTaskCountRequest
       * @return DescribeActiveOperationTaskCountResponse
       */
      Models::DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCount(const Models::DescribeActiveOperationTaskCountRequest &request);

      /**
       * @summary Queries O&M events by calling the DescribeActiveOperationTasks operation.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(const Models::DescribeActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries O&M events by calling the DescribeActiveOperationTasks operation.
       *
       * @param request DescribeActiveOperationTasksRequest
       * @return DescribeActiveOperationTasksResponse
       */
      Models::DescribeActiveOperationTasksResponse describeActiveOperationTasks(const Models::DescribeActiveOperationTasksRequest &request);

      /**
       * @summary Lists cold storage tables.
       *
       * @param request DescribeArchiveTableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeArchiveTableListResponse
       */
      Models::DescribeArchiveTableListResponse describeArchiveTableListWithOptions(const Models::DescribeArchiveTableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists cold storage tables.
       *
       * @param request DescribeArchiveTableListRequest
       * @return DescribeArchiveTableListResponse
       */
      Models::DescribeArchiveTableListResponse describeArchiveTableList(const Models::DescribeArchiveTableListRequest &request);

      /**
       * @summary Queries the list of available regions that support cross-region operations, typically used for multi-region deployment or data replication scenarios.
       *
       * @param request DescribeAvailableCrossRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableCrossRegionsResponse
       */
      Models::DescribeAvailableCrossRegionsResponse describeAvailableCrossRegionsWithOptions(const Models::DescribeAvailableCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available regions that support cross-region operations, typically used for multi-region deployment or data replication scenarios.
       *
       * @param request DescribeAvailableCrossRegionsRequest
       * @return DescribeAvailableCrossRegionsResponse
       */
      Models::DescribeAvailableCrossRegionsResponse describeAvailableCrossRegions(const Models::DescribeAvailableCrossRegionsRequest &request);

      /**
       * @summary Calls the DescribeBackupPolicy operation to query the backup settings of an instance.
       *
       * @param request DescribeBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicyWithOptions(const Models::DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeBackupPolicy operation to query the backup settings of an instance.
       *
       * @param request DescribeBackupPolicyRequest
       * @return DescribeBackupPolicyResponse
       */
      Models::DescribeBackupPolicyResponse describeBackupPolicy(const Models::DescribeBackupPolicyRequest &request);

      /**
       * @summary Queries the details of a backup set by calling the DescribeBackupSet operation.
       *
       * @param request DescribeBackupSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupSetResponse
       */
      Models::DescribeBackupSetResponse describeBackupSetWithOptions(const Models::DescribeBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a backup set by calling the DescribeBackupSet operation.
       *
       * @param request DescribeBackupSetRequest
       * @return DescribeBackupSetResponse
       */
      Models::DescribeBackupSetResponse describeBackupSet(const Models::DescribeBackupSetRequest &request);

      /**
       * @summary Calls the DescribeBackupSetList operation to query the list of backup sets.
       *
       * @param request DescribeBackupSetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupSetListResponse
       */
      Models::DescribeBackupSetListResponse describeBackupSetListWithOptions(const Models::DescribeBackupSetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeBackupSetList operation to query the list of backup sets.
       *
       * @param request DescribeBackupSetListRequest
       * @return DescribeBackupSetListResponse
       */
      Models::DescribeBackupSetListResponse describeBackupSetList(const Models::DescribeBackupSetListRequest &request);

      /**
       * @summary Calls the DescribeBinaryLogList operation to query binlog logs.
       *
       * @description - Binlog files are retained for 15 days by default.
       * - The returned log list includes all logs whose record end time is after the query start time and whose record start time is before the query end time.
       * - When the DownloadLink is not NULL, you can use this URL to download the backup file. This URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeBinaryLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBinaryLogListResponse
       */
      Models::DescribeBinaryLogListResponse describeBinaryLogListWithOptions(const Models::DescribeBinaryLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeBinaryLogList operation to query binlog logs.
       *
       * @description - Binlog files are retained for 15 days by default.
       * - The returned log list includes all logs whose record end time is after the query start time and whose record start time is before the query end time.
       * - When the DownloadLink is not NULL, you can use this URL to download the backup file. This URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeBinaryLogListRequest
       * @return DescribeBinaryLogListResponse
       */
      Models::DescribeBinaryLogListResponse describeBinaryLogList(const Models::DescribeBinaryLogListRequest &request);

      /**
       * @summary Queries the list of instance specifications.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
       * - If DownloadLink is not NULL, you can use this URL to download the backup file. This URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeCdcClassListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdcClassListResponse
       */
      Models::DescribeCdcClassListResponse describeCdcClassListWithOptions(const Models::DescribeCdcClassListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of instance specifications.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
       * - If DownloadLink is not NULL, you can use this URL to download the backup file. This URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeCdcClassListRequest
       * @return DescribeCdcClassListResponse
       */
      Models::DescribeCdcClassListResponse describeCdcClassList(const Models::DescribeCdcClassListRequest &request);

      /**
       * @summary Queries CDC information.
       *
       * @param request DescribeCdcInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdcInfoResponse
       */
      Models::DescribeCdcInfoResponse describeCdcInfoWithOptions(const Models::DescribeCdcInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries CDC information.
       *
       * @param request DescribeCdcInfoRequest
       * @return DescribeCdcInfoResponse
       */
      Models::DescribeCdcInfoResponse describeCdcInfo(const Models::DescribeCdcInfoRequest &request);

      /**
       * @summary Retrieves the list of CDC versions.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
       * - When DownloadLink is not NULL, you can download the backup file from this URL. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeCdcVersionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdcVersionListResponse
       */
      Models::DescribeCdcVersionListResponse describeCdcVersionListWithOptions(const Models::DescribeCdcVersionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of CDC versions.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
       * - When DownloadLink is not NULL, you can download the backup file from this URL. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeCdcVersionListRequest
       * @return DescribeCdcVersionListResponse
       */
      Models::DescribeCdcVersionListResponse describeCdcVersionList(const Models::DescribeCdcVersionListRequest &request);

      /**
       * @summary Invokes the DescribeCharacterSet operation to query the character set types supported by databases in a target instance.
       *
       * @param request DescribeCharacterSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCharacterSetResponse
       */
      Models::DescribeCharacterSetResponse describeCharacterSetWithOptions(const Models::DescribeCharacterSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DescribeCharacterSet operation to query the character set types supported by databases in a target instance.
       *
       * @param request DescribeCharacterSetRequest
       * @return DescribeCharacterSetResponse
       */
      Models::DescribeCharacterSetResponse describeCharacterSet(const Models::DescribeCharacterSetRequest &request);

      /**
       * @summary The cold storage basic information.
       *
       * @param request DescribeColdDataBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColdDataBasicInfoResponse
       */
      Models::DescribeColdDataBasicInfoResponse describeColdDataBasicInfoWithOptions(const Models::DescribeColdDataBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The cold storage basic information.
       *
       * @param request DescribeColdDataBasicInfoRequest
       * @return DescribeColdDataBasicInfoResponse
       */
      Models::DescribeColdDataBasicInfoResponse describeColdDataBasicInfo(const Models::DescribeColdDataBasicInfoRequest &request);

      /**
       * @summary Queries the list of column store specifications for an instance.
       *
       * @param request DescribeColumnarClassListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnarClassListResponse
       */
      Models::DescribeColumnarClassListResponse describeColumnarClassListWithOptions(const Models::DescribeColumnarClassListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of column store specifications for an instance.
       *
       * @param request DescribeColumnarClassListRequest
       * @return DescribeColumnarClassListResponse
       */
      Models::DescribeColumnarClassListResponse describeColumnarClassList(const Models::DescribeColumnarClassListRequest &request);

      /**
       * @summary Queries column store information.
       *
       * @param request DescribeColumnarInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnarInfoResponse
       */
      Models::DescribeColumnarInfoResponse describeColumnarInfoWithOptions(const Models::DescribeColumnarInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries column store information.
       *
       * @param request DescribeColumnarInfoRequest
       * @return DescribeColumnarInfoResponse
       */
      Models::DescribeColumnarInfoResponse describeColumnarInfo(const Models::DescribeColumnarInfoRequest &request);

      /**
       * @summary Queries column store version information.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
       * - When DownloadLink is not NULL, you can download the backup file from this URL. This URL is valid for 2 days after it is generated. Download the file before the expiration time.
       *
       * @param request DescribeColumnarVersionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeColumnarVersionListResponse
       */
      Models::DescribeColumnarVersionListResponse describeColumnarVersionListWithOptions(const Models::DescribeColumnarVersionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries column store version information.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is after the query start time and whose log record start time is before the query end time.
       * - When DownloadLink is not NULL, you can download the backup file from this URL. This URL is valid for 2 days after it is generated. Download the file before the expiration time.
       *
       * @param request DescribeColumnarVersionListRequest
       * @return DescribeColumnarVersionListResponse
       */
      Models::DescribeColumnarVersionListResponse describeColumnarVersionList(const Models::DescribeColumnarVersionListRequest &request);

      /**
       * @summary Retrieves the property information of a specified component, including property names and types.
       *
       * @param request DescribeComponentPropetiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentPropetiesResponse
       */
      Models::DescribeComponentPropetiesResponse describeComponentPropetiesWithOptions(const Models::DescribeComponentPropetiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the property information of a specified component, including property names and types.
       *
       * @param request DescribeComponentPropetiesRequest
       * @return DescribeComponentPropetiesResponse
       */
      Models::DescribeComponentPropetiesResponse describeComponentPropeties(const Models::DescribeComponentPropetiesRequest &request);

      /**
       * @summary Queries the list of custom endpoints defined by the user.
       *
       * @description Queries the list of custom endpoints configured by the user. You can use this operation to manage and view the settings of private connections or VPC endpoint services.
       *
       * @param request DescribeCustomEndpointListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomEndpointListResponse
       */
      Models::DescribeCustomEndpointListResponse describeCustomEndpointListWithOptions(const Models::DescribeCustomEndpointListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of custom endpoints defined by the user.
       *
       * @description Queries the list of custom endpoints configured by the user. You can use this operation to manage and view the settings of private connections or VPC endpoint services.
       *
       * @param request DescribeCustomEndpointListRequest
       * @return DescribeCustomEndpointListResponse
       */
      Models::DescribeCustomEndpointListResponse describeCustomEndpointList(const Models::DescribeCustomEndpointListRequest &request);

      /**
       * @summary Calls the DescribeDBInstanceAttribute operation to retrieve instance attributes.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDBInstanceAttribute operation to retrieve instance attributes.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary Calls the DescribeDBInstanceConfig operation to retrieve the configuration parameters of an instance.
       *
       * @param request DescribeDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceConfigResponse
       */
      Models::DescribeDBInstanceConfigResponse describeDBInstanceConfigWithOptions(const Models::DescribeDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDBInstanceConfig operation to retrieve the configuration parameters of an instance.
       *
       * @param request DescribeDBInstanceConfigRequest
       * @return DescribeDBInstanceConfigResponse
       */
      Models::DescribeDBInstanceConfigResponse describeDBInstanceConfig(const Models::DescribeDBInstanceConfigRequest &request);

      /**
       * @summary 查询endpoint列表
       *
       * @description 该接口用于获取用户已配置的自定义终端节点（Endpoint）列表，便于管理和查看私有连接或VPC终端服务的设置。
       *
       * @param request DescribeDBInstanceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceEndpointResponse
       */
      Models::DescribeDBInstanceEndpointResponse describeDBInstanceEndpointWithOptions(const Models::DescribeDBInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询endpoint列表
       *
       * @description 该接口用于获取用户已配置的自定义终端节点（Endpoint）列表，便于管理和查看私有连接或VPC终端服务的设置。
       *
       * @param request DescribeDBInstanceEndpointRequest
       * @return DescribeDBInstanceEndpointResponse
       */
      Models::DescribeDBInstanceEndpointResponse describeDBInstanceEndpoint(const Models::DescribeDBInstanceEndpointRequest &request);

      /**
       * @summary Queries the high availability (HA) information of an instance.
       *
       * @param request DescribeDBInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceHAResponse
       */
      Models::DescribeDBInstanceHAResponse describeDBInstanceHAWithOptions(const Models::DescribeDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the high availability (HA) information of an instance.
       *
       * @param request DescribeDBInstanceHARequest
       * @return DescribeDBInstanceHAResponse
       */
      Models::DescribeDBInstanceHAResponse describeDBInstanceHA(const Models::DescribeDBInstanceHARequest &request);

      /**
       * @summary Views SSL information.
       *
       * @param request DescribeDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(const Models::DescribeDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views SSL information.
       *
       * @param request DescribeDBInstanceSSLRequest
       * @return DescribeDBInstanceSSLResponse
       */
      Models::DescribeDBInstanceSSLResponse describeDBInstanceSSL(const Models::DescribeDBInstanceSSLRequest &request);

      /**
       * @summary Calls the DescribeDBInstanceTDE operation to retrieve the details of Transparent Data Encryption (TDE) for an instance.
       *
       * @param request DescribeDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDEWithOptions(const Models::DescribeDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDBInstanceTDE operation to retrieve the details of Transparent Data Encryption (TDE) for an instance.
       *
       * @param request DescribeDBInstanceTDERequest
       * @return DescribeDBInstanceTDEResponse
       */
      Models::DescribeDBInstanceTDEResponse describeDBInstanceTDE(const Models::DescribeDBInstanceTDERequest &request);

      /**
       * @summary Calls the DescribeDBInstanceTopology operation to retrieve the topology information of an instance.
       *
       * @param request DescribeDBInstanceTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceTopologyResponse
       */
      Models::DescribeDBInstanceTopologyResponse describeDBInstanceTopologyWithOptions(const Models::DescribeDBInstanceTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDBInstanceTopology operation to retrieve the topology information of an instance.
       *
       * @param request DescribeDBInstanceTopologyRequest
       * @return DescribeDBInstanceTopologyResponse
       */
      Models::DescribeDBInstanceTopologyResponse describeDBInstanceTopology(const Models::DescribeDBInstanceTopologyRequest &request);

      /**
       * @summary Retrieves the basic information about an instance by using the endpoint of the instance.
       *
       * @param request DescribeDBInstanceViaEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceViaEndpointResponse
       */
      Models::DescribeDBInstanceViaEndpointResponse describeDBInstanceViaEndpointWithOptions(const Models::DescribeDBInstanceViaEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information about an instance by using the endpoint of the instance.
       *
       * @param request DescribeDBInstanceViaEndpointRequest
       * @return DescribeDBInstanceViaEndpointResponse
       */
      Models::DescribeDBInstanceViaEndpointResponse describeDBInstanceViaEndpoint(const Models::DescribeDBInstanceViaEndpointRequest &request);

      /**
       * @summary Calls the DescribeDBInstances operation to query a list of instances.
       *
       * @param request DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDBInstances operation to query a list of instances.
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @summary Queries the performance data of an instance by calling the DescribeDBNodePerformance operation.
       *
       * @description Note: 
       * - The **endpoint** differs from other API operations. Use **polardbx.aliyuncs.com** for Chinese regions and Singapore. For other regions, use **polardbx.{region id}.aliyunc.com**.
       * - When debugging this API operation, if a service not active error is returned, confirm that the **endpoint** is correct. You can switch the **service address** to **Dubai** or **India** and change the **endpoint** to **polardbx.aliyuncs.com**.
       *
       * @param request DescribeDBNodePerformanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBNodePerformanceResponse
       */
      Models::DescribeDBNodePerformanceResponse describeDBNodePerformanceWithOptions(const Models::DescribeDBNodePerformanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance data of an instance by calling the DescribeDBNodePerformance operation.
       *
       * @description Note: 
       * - The **endpoint** differs from other API operations. Use **polardbx.aliyuncs.com** for Chinese regions and Singapore. For other regions, use **polardbx.{region id}.aliyunc.com**.
       * - When debugging this API operation, if a service not active error is returned, confirm that the **endpoint** is correct. You can switch the **service address** to **Dubai** or **India** and change the **endpoint** to **polardbx.aliyuncs.com**.
       *
       * @param request DescribeDBNodePerformanceRequest
       * @return DescribeDBNodePerformanceResponse
       */
      Models::DescribeDBNodePerformanceResponse describeDBNodePerformance(const Models::DescribeDBNodePerformanceRequest &request);

      /**
       * @summary Queries the execution details of a data import task.
       *
       * @param request DescribeDataImportTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataImportTaskInfoResponse
       */
      Models::DescribeDataImportTaskInfoResponse describeDataImportTaskInfoWithOptions(const Models::DescribeDataImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution details of a data import task.
       *
       * @param request DescribeDataImportTaskInfoRequest
       * @return DescribeDataImportTaskInfoResponse
       */
      Models::DescribeDataImportTaskInfoResponse describeDataImportTaskInfo(const Models::DescribeDataImportTaskInfoRequest &request);

      /**
       * @summary Queries the list of databases by calling the DescribeDbList operation.
       *
       * @param request DescribeDbListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDbListResponse
       */
      Models::DescribeDbListResponse describeDbListWithOptions(const Models::DescribeDbListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of databases by calling the DescribeDbList operation.
       *
       * @param request DescribeDbListRequest
       * @return DescribeDbListResponse
       */
      Models::DescribeDbListResponse describeDbList(const Models::DescribeDbListRequest &request);

      /**
       * @summary Calls the DescribeDistributeTableList operation to retrieve the list of database tables.
       *
       * @param request DescribeDistributeTableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDistributeTableListResponse
       */
      Models::DescribeDistributeTableListResponse describeDistributeTableListWithOptions(const Models::DescribeDistributeTableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeDistributeTableList operation to retrieve the list of database tables.
       *
       * @param request DescribeDistributeTableListRequest
       * @return DescribeDistributeTableListResponse
       */
      Models::DescribeDistributeTableListResponse describeDistributeTableList(const Models::DescribeDistributeTableListRequest &request);

      /**
       * @summary Queries the currently enabled cross-zone configurations.
       *
       * @param request DescribeEnabledCrossRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnabledCrossRegionsResponse
       */
      Models::DescribeEnabledCrossRegionsResponse describeEnabledCrossRegionsWithOptions(const Models::DescribeEnabledCrossRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the currently enabled cross-zone configurations.
       *
       * @param request DescribeEnabledCrossRegionsRequest
       * @return DescribeEnabledCrossRegionsResponse
       */
      Models::DescribeEnabledCrossRegionsResponse describeEnabledCrossRegions(const Models::DescribeEnabledCrossRegionsRequest &request);

      /**
       * @summary Queries the list of PolarDB-X assessment import tasks. (Single).
       *
       * @param request DescribeEvaluateAndImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEvaluateAndImportTaskResponse
       */
      Models::DescribeEvaluateAndImportTaskResponse describeEvaluateAndImportTaskWithOptions(const Models::DescribeEvaluateAndImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of PolarDB-X assessment import tasks. (Single).
       *
       * @param request DescribeEvaluateAndImportTaskRequest
       * @return DescribeEvaluateAndImportTaskResponse
       */
      Models::DescribeEvaluateAndImportTaskResponse describeEvaluateAndImportTask(const Models::DescribeEvaluateAndImportTaskRequest &request);

      /**
       * @summary Queries a list of assessment import tasks for PolarDB-X.
       *
       * @description Creates a data import task. You can use this operation to import SQL or CSV files stored in OSS or ECS, or directly provided files, into a destination database instance. By specifying the instance ID, database name, engine type, data source (such as an OSS path), and import type, the system performs data write operations asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
       *
       * @param request DescribeEvaluateAndImportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEvaluateAndImportTasksResponse
       */
      Models::DescribeEvaluateAndImportTasksResponse describeEvaluateAndImportTasksWithOptions(const Models::DescribeEvaluateAndImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of assessment import tasks for PolarDB-X.
       *
       * @description Creates a data import task. You can use this operation to import SQL or CSV files stored in OSS or ECS, or directly provided files, into a destination database instance. By specifying the instance ID, database name, engine type, data source (such as an OSS path), and import type, the system performs data write operations asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
       *
       * @param request DescribeEvaluateAndImportTasksRequest
       * @return DescribeEvaluateAndImportTasksResponse
       */
      Models::DescribeEvaluateAndImportTasksResponse describeEvaluateAndImportTasks(const Models::DescribeEvaluateAndImportTasksRequest &request);

      /**
       * @summary Retrieves historical events.
       *
       * @param request DescribeEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEventsWithOptions(const Models::DescribeEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves historical events.
       *
       * @param request DescribeEventsRequest
       * @return DescribeEventsResponse
       */
      Models::DescribeEventsResponse describeEvents(const Models::DescribeEventsRequest &request);

      /**
       * @summary Retrieves a list of global database network (GDN) instances.
       *
       * @param request DescribeGdnInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGdnInstancesResponse
       */
      Models::DescribeGdnInstancesResponse describeGdnInstancesWithOptions(const Models::DescribeGdnInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of global database network (GDN) instances.
       *
       * @param request DescribeGdnInstancesRequest
       * @return DescribeGdnInstancesResponse
       */
      Models::DescribeGdnInstancesResponse describeGdnInstances(const Models::DescribeGdnInstancesRequest &request);

      /**
       * @summary View Memory Engine Information
       *
       * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Log Service charges fees for storage space, read traffic, the number of requests, data transformation, and data shipping. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request DescribeMem0InfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMem0InfoResponse
       */
      Models::DescribeMem0InfoResponse describeMem0InfoWithOptions(const Models::DescribeMem0InfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View Memory Engine Information
       *
       * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Log Service charges fees for storage space, read traffic, the number of requests, data transformation, and data shipping. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request DescribeMem0InfoRequest
       * @return DescribeMem0InfoResponse
       */
      Models::DescribeMem0InfoResponse describeMem0Info(const Models::DescribeMem0InfoRequest &request);

      /**
       * @summary Queries the whitelist of a memory engine.
       *
       * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Log Service charges fees for storage space, read traffic, number of requests, data processing, and data shipping. For more information about the SQL audit feature, see [Enable SQL Audit and Analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request DescribeMem0SecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMem0SecurityIpsResponse
       */
      Models::DescribeMem0SecurityIpsResponse describeMem0SecurityIpsWithOptions(const Models::DescribeMem0SecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist of a memory engine.
       *
       * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Log Service charges fees for storage space, read traffic, number of requests, data processing, and data shipping. For more information about the SQL audit feature, see [Enable SQL Audit and Analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request DescribeMem0SecurityIpsRequest
       * @return DescribeMem0SecurityIpsResponse
       */
      Models::DescribeMem0SecurityIpsResponse describeMem0SecurityIps(const Models::DescribeMem0SecurityIpsRequest &request);

      /**
       * @summary Exposes instance topology information and download links for commercial backup sets to support offline restoration of cloud instances.
       *
       * @param request DescribeOpenBackupSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpenBackupSetResponse
       */
      Models::DescribeOpenBackupSetResponse describeOpenBackupSetWithOptions(const Models::DescribeOpenBackupSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exposes instance topology information and download links for commercial backup sets to support offline restoration of cloud instances.
       *
       * @param request DescribeOpenBackupSetRequest
       * @return DescribeOpenBackupSetResponse
       */
      Models::DescribeOpenBackupSetResponse describeOpenBackupSet(const Models::DescribeOpenBackupSetRequest &request);

      /**
       * @summary Queries the list of database parameter templates created by users or supported by the system, including basic information, associated engine types, and modification times of each parameter template.
       *
       * @param request DescribeParameterGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroupsWithOptions(const Models::DescribeParameterGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of database parameter templates created by users or supported by the system, including basic information, associated engine types, and modification times of each parameter template.
       *
       * @param request DescribeParameterGroupsRequest
       * @return DescribeParameterGroupsResponse
       */
      Models::DescribeParameterGroupsResponse describeParameterGroups(const Models::DescribeParameterGroupsRequest &request);

      /**
       * @summary Calls the DescribeParameterTemplates operation to retrieve the parameter template list for an instance.
       *
       * @param request DescribeParameterTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(const Models::DescribeParameterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeParameterTemplates operation to retrieve the parameter template list for an instance.
       *
       * @param request DescribeParameterTemplatesRequest
       * @return DescribeParameterTemplatesResponse
       */
      Models::DescribeParameterTemplatesResponse describeParameterTemplates(const Models::DescribeParameterTemplatesRequest &request);

      /**
       * @summary Calls the DescribeParameters operation to retrieve instance parameters.
       *
       * @param request DescribeParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParametersWithOptions(const Models::DescribeParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeParameters operation to retrieve instance parameters.
       *
       * @param request DescribeParametersRequest
       * @return DescribeParametersResponse
       */
      Models::DescribeParametersResponse describeParameters(const Models::DescribeParametersRequest &request);

      /**
       * @summary Queries the details of all data nodes (Data Nodes) in a PolarDB-X instance, including node status, storage usage, and network addresses, to facilitate operations management and monitoring.
       *
       * @param request DescribePolarxDataNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolarxDataNodesResponse
       */
      Models::DescribePolarxDataNodesResponse describePolarxDataNodesWithOptions(const Models::DescribePolarxDataNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all data nodes (Data Nodes) in a PolarDB-X instance, including node status, storage usage, and network addresses, to facilitate operations management and monitoring.
       *
       * @param request DescribePolarxDataNodesRequest
       * @return DescribePolarxDataNodesResponse
       */
      Models::DescribePolarxDataNodesResponse describePolarxDataNodes(const Models::DescribePolarxDataNodesRequest &request);

      /**
       * @summary Queries the list of VPCs available for PolarDB-X.
       *
       * @description Queries the list of Virtual Private Clouds (VPCs) available under your account for database instances. You can use this operation to select an appropriate network environment when creating or managing database instances.
       *
       * @param request DescribeRdsVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcsWithOptions(const Models::DescribeRdsVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of VPCs available for PolarDB-X.
       *
       * @description Queries the list of Virtual Private Clouds (VPCs) available under your account for database instances. You can use this operation to select an appropriate network environment when creating or managing database instances.
       *
       * @param request DescribeRdsVpcsRequest
       * @return DescribeRdsVpcsResponse
       */
      Models::DescribeRdsVpcsResponse describeRdsVpcs(const Models::DescribeRdsVpcsRequest &request);

      /**
       * @summary Queries the list of available vSwitches in a virtual private cloud (VPC) for an ApsaraDB RDS instance.
       *
       * @description Queries the list of available virtual private clouds (VPCs) under your account for an instance, so that you can select an appropriate network environment when creating or managing a database instance.
       *
       * @param request DescribeRdsVswitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdsVswitchesResponse
       */
      Models::DescribeRdsVswitchesResponse describeRdsVswitchesWithOptions(const Models::DescribeRdsVswitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available vSwitches in a virtual private cloud (VPC) for an ApsaraDB RDS instance.
       *
       * @description Queries the list of available virtual private clouds (VPCs) under your account for an instance, so that you can select an appropriate network environment when creating or managing a database instance.
       *
       * @param request DescribeRdsVswitchesRequest
       * @return DescribeRdsVswitchesResponse
       */
      Models::DescribeRdsVswitchesResponse describeRdsVswitches(const Models::DescribeRdsVswitchesRequest &request);

      /**
       * @summary Calls the DescribeRegions operation to obtain the list of regions.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeRegions operation to obtain the list of regions.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Queries the details of a replication lag inspection task for an instance.
       *
       * @description During the data synchronization phase, proactively initiates a diagnostic task for the replication task to check for exceptions such as latency, interruption, or data inconsistency.
       *
       * @param request DescribeRplInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRplInspectionTaskResponse
       */
      Models::DescribeRplInspectionTaskResponse describeRplInspectionTaskWithOptions(const Models::DescribeRplInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a replication lag inspection task for an instance.
       *
       * @description During the data synchronization phase, proactively initiates a diagnostic task for the replication task to check for exceptions such as latency, interruption, or data inconsistency.
       *
       * @param request DescribeRplInspectionTaskRequest
       * @return DescribeRplInspectionTaskResponse
       */
      Models::DescribeRplInspectionTaskResponse describeRplInspectionTask(const Models::DescribeRplInspectionTaskRequest &request);

      /**
       * @summary Display the ScaleOut migration task progress.
       *
       * @param request DescribeScaleOutMigrateTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScaleOutMigrateTaskListResponse
       */
      Models::DescribeScaleOutMigrateTaskListResponse describeScaleOutMigrateTaskListWithOptions(const Models::DescribeScaleOutMigrateTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Display the ScaleOut migration task progress.
       *
       * @param request DescribeScaleOutMigrateTaskListRequest
       * @return DescribeScaleOutMigrateTaskListResponse
       */
      Models::DescribeScaleOutMigrateTaskListResponse describeScaleOutMigrateTaskList(const Models::DescribeScaleOutMigrateTaskListRequest &request);

      /**
       * @summary Calls the DescribeSecurityIps operation to view the IP whitelist of an instance.
       *
       * @param request DescribeSecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIpsWithOptions(const Models::DescribeSecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeSecurityIps operation to view the IP whitelist of an instance.
       *
       * @param request DescribeSecurityIpsRequest
       * @return DescribeSecurityIpsResponse
       */
      Models::DescribeSecurityIpsResponse describeSecurityIps(const Models::DescribeSecurityIpsRequest &request);

      /**
       * @summary Queries the status of a service account.
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
       *
       * @param request DescribeServiceAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceAccountResponse
       */
      Models::DescribeServiceAccountResponse describeServiceAccountWithOptions(const Models::DescribeServiceAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a service account.
       *
       * @description <props="china">For more information about instance accounts, see [Account management](https://help.aliyun.com/document_detail/172163.html).
       *
       * @param request DescribeServiceAccountRequest
       * @return DescribeServiceAccountResponse
       */
      Models::DescribeServiceAccountResponse describeServiceAccount(const Models::DescribeServiceAccountRequest &request);

      /**
       * @summary Queries the storage usage details of an instance, including the total capacity, used space, remaining space, and other information.
       *
       * @param request DescribeShowStorageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeShowStorageInfoResponse
       */
      Models::DescribeShowStorageInfoResponse describeShowStorageInfoWithOptions(const Models::DescribeShowStorageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage usage details of an instance, including the total capacity, used space, remaining space, and other information.
       *
       * @param request DescribeShowStorageInfoRequest
       * @return DescribeShowStorageInfoResponse
       */
      Models::DescribeShowStorageInfoResponse describeShowStorageInfo(const Models::DescribeShowStorageInfoRequest &request);

      /**
       * @summary Queries the details of slow SQL statements on compute nodes and storage nodes of a PolarDB-X instance.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(const Models::DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of slow SQL statements on compute nodes and storage nodes of a PolarDB-X instance.
       *
       * @param request DescribeSlowLogRecordsRequest
       * @return DescribeSlowLogRecordsResponse
       */
      Models::DescribeSlowLogRecordsResponse describeSlowLogRecords(const Models::DescribeSlowLogRecordsRequest &request);

      /**
       * @summary Queries SQL audit information.
       *
       * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Simple Log Service charges fees for storage space, read traffic, number of requests, data transformation, and data delivery. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request DescribeSqlAuditInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSqlAuditInfoResponse
       */
      Models::DescribeSqlAuditInfoResponse describeSqlAuditInfoWithOptions(const Models::DescribeSqlAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries SQL audit information.
       *
       * @description > * The SQL audit and analysis feature of PolarDB-X 2.0 is free of charge. However, Simple Log Service charges fees for storage space, read traffic, number of requests, data transformation, and data delivery. For more information about the SQL audit feature, see [Enable SQL audit and analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request DescribeSqlAuditInfoRequest
       * @return DescribeSqlAuditInfoResponse
       */
      Models::DescribeSqlAuditInfoResponse describeSqlAuditInfo(const Models::DescribeSqlAuditInfoRequest &request);

      /**
       * @summary Queries the list of SQL flashback tasks by calling the DescribeSqlFlashbackTaskList operation.
       *
       * @param request DescribeSqlFlashbackTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSqlFlashbackTaskListResponse
       */
      Models::DescribeSqlFlashbackTaskListResponse describeSqlFlashbackTaskListWithOptions(const Models::DescribeSqlFlashbackTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of SQL flashback tasks by calling the DescribeSqlFlashbackTaskList operation.
       *
       * @param request DescribeSqlFlashbackTaskListRequest
       * @return DescribeSqlFlashbackTaskListResponse
       */
      Models::DescribeSqlFlashbackTaskListResponse describeSqlFlashbackTaskList(const Models::DescribeSqlFlashbackTaskListRequest &request);

      /**
       * @summary Queries the details of a storage pool, including capacity, usage, and status.
       *
       * @param request DescribeStoragePoolInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStoragePoolInfoResponse
       */
      Models::DescribeStoragePoolInfoResponse describeStoragePoolInfoWithOptions(const Models::DescribeStoragePoolInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a storage pool, including capacity, usage, and status.
       *
       * @param request DescribeStoragePoolInfoRequest
       * @return DescribeStoragePoolInfoResponse
       */
      Models::DescribeStoragePoolInfoResponse describeStoragePoolInfo(const Models::DescribeStoragePoolInfoRequest &request);

      /**
       * @summary Queries the details of a database schema import task.
       *
       * @description The CreateDataImportTask operation creates a data import task. You can use this operation to import SQL or CSV files stored in OSS or ECS, or directly provided, into a destination database instance. Specify the instance ID, database name, engine type, data source (such as an OSS path), and import type. The system performs the data write operation asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
       *
       * @param request DescribeStructureImportTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStructureImportTaskInfoResponse
       */
      Models::DescribeStructureImportTaskInfoResponse describeStructureImportTaskInfoWithOptions(const Models::DescribeStructureImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a database schema import task.
       *
       * @description The CreateDataImportTask operation creates a data import task. You can use this operation to import SQL or CSV files stored in OSS or ECS, or directly provided, into a destination database instance. Specify the instance ID, database name, engine type, data source (such as an OSS path), and import type. The system performs the data write operation asynchronously or synchronously. This operation is applicable to scenarios such as data migration, initialization, and data backfill. A task ID is returned for subsequent status queries and management.
       *
       * @param request DescribeStructureImportTaskInfoRequest
       * @return DescribeStructureImportTaskInfoResponse
       */
      Models::DescribeStructureImportTaskInfoResponse describeStructureImportTaskInfo(const Models::DescribeStructureImportTaskInfoRequest &request);

      /**
       * @summary Queries the Supabase API key.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is later than the query start time and whose log record start time is earlier than the query end time.
       * - If DownloadLink is not NULL, you can use this URL to download the backup file. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeSupabaseApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupabaseApiKeyResponse
       */
      Models::DescribeSupabaseApiKeyResponse describeSupabaseApiKeyWithOptions(const Models::DescribeSupabaseApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Supabase API key.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is later than the query start time and whose log record start time is earlier than the query end time.
       * - If DownloadLink is not NULL, you can use this URL to download the backup file. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeSupabaseApiKeyRequest
       * @return DescribeSupabaseApiKeyResponse
       */
      Models::DescribeSupabaseApiKeyResponse describeSupabaseApiKey(const Models::DescribeSupabaseApiKeyRequest &request);

      /**
       * @summary Queries the details of a Supabase instance.
       *
       * @description ****
       *
       * @param request DescribeSupabaseInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupabaseInstanceAttributeResponse
       */
      Models::DescribeSupabaseInstanceAttributeResponse describeSupabaseInstanceAttributeWithOptions(const Models::DescribeSupabaseInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Supabase instance.
       *
       * @description ****
       *
       * @param request DescribeSupabaseInstanceAttributeRequest
       * @return DescribeSupabaseInstanceAttributeResponse
       */
      Models::DescribeSupabaseInstanceAttributeResponse describeSupabaseInstanceAttribute(const Models::DescribeSupabaseInstanceAttributeRequest &request);

      /**
       * @summary Queries a list of Supabase instances.
       *
       * @description Queries the list of custom endpoints configured by the user for managing and viewing private connection or VPC endpoint service settings.
       *
       * @param request DescribeSupabaseInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupabaseInstancesResponse
       */
      Models::DescribeSupabaseInstancesResponse describeSupabaseInstancesWithOptions(const Models::DescribeSupabaseInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Supabase instances.
       *
       * @description Queries the list of custom endpoints configured by the user for managing and viewing private connection or VPC endpoint service settings.
       *
       * @param request DescribeSupabaseInstancesRequest
       * @return DescribeSupabaseInstancesResponse
       */
      Models::DescribeSupabaseInstancesResponse describeSupabaseInstances(const Models::DescribeSupabaseInstancesRequest &request);

      /**
       * @summary Queries the IP whitelist of a Supabase instance.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is later than the specified query start time and whose log record start time is earlier than the specified query end time.
       * - If DownloadLink is not NULL, you can use this URL to download the backup file. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeSupabaseIpWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupabaseIpWhitelistResponse
       */
      Models::DescribeSupabaseIpWhitelistResponse describeSupabaseIpWhitelistWithOptions(const Models::DescribeSupabaseIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP whitelist of a Supabase instance.
       *
       * @description - Binary log files are retained for 15 days by default.
       * - The returned log list includes all logs whose log record end time is later than the specified query start time and whose log record start time is earlier than the specified query end time.
       * - If DownloadLink is not NULL, you can use this URL to download the backup file. The URL is valid for 2 days after it is generated. Download the file before the URL expires.
       *
       * @param request DescribeSupabaseIpWhitelistRequest
       * @return DescribeSupabaseIpWhitelistResponse
       */
      Models::DescribeSupabaseIpWhitelistResponse describeSupabaseIpWhitelist(const Models::DescribeSupabaseIpWhitelistRequest &request);

      /**
       * @summary Retrieves tag information.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves tag information.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Retrieves the task list of an instance.
       *
       * @param request DescribeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasksWithOptions(const Models::DescribeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the task list of an instance.
       *
       * @param request DescribeTasksRequest
       * @return DescribeTasksResponse
       */
      Models::DescribeTasksResponse describeTasks(const Models::DescribeTasksRequest &request);

      /**
       * @summary Queries the current status of a task that upgrades or converts a standard instance to an Enterprise instance.
       *
       * @param request DescribeTransformStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransformStatusResponse
       */
      Models::DescribeTransformStatusResponse describeTransformStatusWithOptions(const Models::DescribeTransformStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current status of a task that upgrades or converts a standard instance to an Enterprise instance.
       *
       * @param request DescribeTransformStatusRequest
       * @return DescribeTransformStatusResponse
       */
      Models::DescribeTransformStatusResponse describeTransformStatus(const Models::DescribeTransformStatusRequest &request);

      /**
       * @summary Calls the DescribeUserEncryptionKeyList operation to retrieve the list of Transparent Data Encryption (TDE) keys for a user.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(const Models::DescribeUserEncryptionKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeUserEncryptionKeyList operation to retrieve the list of Transparent Data Encryption (TDE) keys for a user.
       *
       * @param request DescribeUserEncryptionKeyListRequest
       * @return DescribeUserEncryptionKeyListResponse
       */
      Models::DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(const Models::DescribeUserEncryptionKeyListRequest &request);

      /**
       * @summary Disables three-role mode.
       *
       * @param request DisableRightsSeparationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableRightsSeparationResponse
       */
      Models::DisableRightsSeparationResponse disableRightsSeparationWithOptions(const Models::DisableRightsSeparationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables three-role mode.
       *
       * @param request DisableRightsSeparationRequest
       * @return DisableRightsSeparationResponse
       */
      Models::DisableRightsSeparationResponse disableRightsSeparation(const Models::DisableRightsSeparationRequest &request);

      /**
       * @summary Disables the SQL audit feature.
       *
       * @description > After the SQL audit and analysis feature is disabled, data is no longer written to Simple Log Service. However, you can still view historical data, which incurs storage and indexing fees. You can delete all data to deactivate Simple Log Service. After Simple Log Service is deactivated, no further fees are incurred. For more information about deactivating Simple Log Service, see [Deactivate Simple Log Service](https://help.aliyun.com/document_detail/90650.html).
       *
       * @param request DisableSqlAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSqlAuditResponse
       */
      Models::DisableSqlAuditResponse disableSqlAuditWithOptions(const Models::DisableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the SQL audit feature.
       *
       * @description > After the SQL audit and analysis feature is disabled, data is no longer written to Simple Log Service. However, you can still view historical data, which incurs storage and indexing fees. You can delete all data to deactivate Simple Log Service. After Simple Log Service is deactivated, no further fees are incurred. For more information about deactivating Simple Log Service, see [Deactivate Simple Log Service](https://help.aliyun.com/document_detail/90650.html).
       *
       * @param request DisableSqlAuditRequest
       * @return DisableSqlAuditResponse
       */
      Models::DisableSqlAuditResponse disableSqlAudit(const Models::DisableSqlAuditRequest &request);

      /**
       * @summary Enables three-role mode.
       *
       * @param request EnableRightsSeparationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableRightsSeparationResponse
       */
      Models::EnableRightsSeparationResponse enableRightsSeparationWithOptions(const Models::EnableRightsSeparationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables three-role mode.
       *
       * @param request EnableRightsSeparationRequest
       * @return EnableRightsSeparationResponse
       */
      Models::EnableRightsSeparationResponse enableRightsSeparation(const Models::EnableRightsSeparationRequest &request);

      /**
       * @summary Enables the SQL audit feature.
       *
       * @description > * The PolarDB-X 2.0 SQL audit and analysis feature itself is free of charge. However, Log Service charges fees for storage space, read traffic, number of requests, data transformation, data shipping, and other services. For more information about the SQL audit feature, see [Enable SQL Audit and Analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request EnableSqlAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSqlAuditResponse
       */
      Models::EnableSqlAuditResponse enableSqlAuditWithOptions(const Models::EnableSqlAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the SQL audit feature.
       *
       * @description > * The PolarDB-X 2.0 SQL audit and analysis feature itself is free of charge. However, Log Service charges fees for storage space, read traffic, number of requests, data transformation, data shipping, and other services. For more information about the SQL audit feature, see [Enable SQL Audit and Analysis](https://help.aliyun.com/document_detail/184619.html).
       *
       * @param request EnableSqlAuditRequest
       * @return EnableSqlAuditResponse
       */
      Models::EnableSqlAuditResponse enableSqlAudit(const Models::EnableSqlAuditRequest &request);

      /**
       * @summary Executes a metadata query.
       *
       * @description Deletes a custom endpoint of a specified database instance and disables access through the domain name.
       *
       * @param request ExecuteMetaQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteMetaQueryResponse
       */
      Models::ExecuteMetaQueryResponse executeMetaQueryWithOptions(const Models::ExecuteMetaQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a metadata query.
       *
       * @description Deletes a custom endpoint of a specified database instance and disables access through the domain name.
       *
       * @param request ExecuteMetaQueryRequest
       * @return ExecuteMetaQueryResponse
       */
      Models::ExecuteMetaQueryResponse executeMetaQuery(const Models::ExecuteMetaQueryRequest &request);

      /**
       * @summary Retrieves a list of labels.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of labels.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Migrates an instance from one zone to another.
       *
       * @param request MigrateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstanceWithOptions(const Models::MigrateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an instance from one zone to another.
       *
       * @param request MigrateDBInstanceRequest
       * @return MigrateDBInstanceResponse
       */
      Models::MigrateDBInstanceResponse migrateDBInstance(const Models::MigrateDBInstanceRequest &request);

      /**
       * @summary Calls the ModifyAccountDescription operation to modify the description of an account.
       *
       * @param request ModifyAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(const Models::ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyAccountDescription operation to modify the description of an account.
       *
       * @param request ModifyAccountDescriptionRequest
       * @return ModifyAccountDescriptionResponse
       */
      Models::ModifyAccountDescriptionResponse modifyAccountDescription(const Models::ModifyAccountDescriptionRequest &request);

      /**
       * @summary Modifies the permissions of a standard account.
       *
       * @param request ModifyAccountPrivilegeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAccountPrivilegeResponse
       */
      Models::ModifyAccountPrivilegeResponse modifyAccountPrivilegeWithOptions(const Models::ModifyAccountPrivilegeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a standard account.
       *
       * @param request ModifyAccountPrivilegeRequest
       * @return ModifyAccountPrivilegeResponse
       */
      Models::ModifyAccountPrivilegeResponse modifyAccountPrivilege(const Models::ModifyAccountPrivilegeRequest &request);

      /**
       * @summary Calls the ModifyActiveOperationMaintainConf operation to modify the time configuration of O&M events.
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConfWithOptions(const Models::ModifyActiveOperationMaintainConfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyActiveOperationMaintainConf operation to modify the time configuration of O&M events.
       *
       * @param request ModifyActiveOperationMaintainConfRequest
       * @return ModifyActiveOperationMaintainConfResponse
       */
      Models::ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConf(const Models::ModifyActiveOperationMaintainConfRequest &request);

      /**
       * @summary Calls the ModifyActiveOperationTasks operation to modify the execution time of O&M events.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(const Models::ModifyActiveOperationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyActiveOperationTasks operation to modify the execution time of O&M events.
       *
       * @param request ModifyActiveOperationTasksRequest
       * @return ModifyActiveOperationTasksResponse
       */
      Models::ModifyActiveOperationTasksResponse modifyActiveOperationTasks(const Models::ModifyActiveOperationTasksRequest &request);

      /**
       * @summary Modifies the CDC configuration.
       *
       * @description ****.
       *
       * @param request ModifyCdcClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCdcClassResponse
       */
      Models::ModifyCdcClassResponse modifyCdcClassWithOptions(const Models::ModifyCdcClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the CDC configuration.
       *
       * @description ****.
       *
       * @param request ModifyCdcClassRequest
       * @return ModifyCdcClassResponse
       */
      Models::ModifyCdcClassResponse modifyCdcClass(const Models::ModifyCdcClassRequest &request);

      /**
       * @summary Modifies the column store specifications.
       *
       * @description ****.
       *
       * @param request ModifyColumnarClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyColumnarClassResponse
       */
      Models::ModifyColumnarClassResponse modifyColumnarClassWithOptions(const Models::ModifyColumnarClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the column store specifications.
       *
       * @description ****.
       *
       * @param request ModifyColumnarClassRequest
       * @return ModifyColumnarClassResponse
       */
      Models::ModifyColumnarClassResponse modifyColumnarClass(const Models::ModifyColumnarClassRequest &request);

      /**
       * @summary Modifies the configuration of a custom endpoint.
       *
       * @description In PolarDB-X, in addition to the default primary endpoint and read-only endpoint, you can create custom endpoints to implement more flexible read/write splitting, load balancing, or business isolation strategies. The ModifyCustomEndpoint operation allows you to dynamically adjust the attributes of these custom endpoints without restarting the instance.
       *
       * @param request ModifyCustomEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomEndpointResponse
       */
      Models::ModifyCustomEndpointResponse modifyCustomEndpointWithOptions(const Models::ModifyCustomEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a custom endpoint.
       *
       * @description In PolarDB-X, in addition to the default primary endpoint and read-only endpoint, you can create custom endpoints to implement more flexible read/write splitting, load balancing, or business isolation strategies. The ModifyCustomEndpoint operation allows you to dynamically adjust the attributes of these custom endpoints without restarting the instance.
       *
       * @param request ModifyCustomEndpointRequest
       * @return ModifyCustomEndpointResponse
       */
      Models::ModifyCustomEndpointResponse modifyCustomEndpoint(const Models::ModifyCustomEndpointRequest &request);

      /**
       * @summary Modifies the network configurations of a custom network endpoint, such as the subnet, security group, and public network access settings.
       *
       * @description Deletes the custom endpoint of a specified database instance and disables access through the domain name.
       *
       * @param request ModifyCustomEndpointNetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomEndpointNetResponse
       */
      Models::ModifyCustomEndpointNetResponse modifyCustomEndpointNetWithOptions(const Models::ModifyCustomEndpointNetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network configurations of a custom network endpoint, such as the subnet, security group, and public network access settings.
       *
       * @description Deletes the custom endpoint of a specified database instance and disables access through the domain name.
       *
       * @param request ModifyCustomEndpointNetRequest
       * @return ModifyCustomEndpointNetResponse
       */
      Models::ModifyCustomEndpointNetResponse modifyCustomEndpointNet(const Models::ModifyCustomEndpointNetRequest &request);

      /**
       * @summary Calls the ModifyDBInstanceClass operation to modify the specifications of an instance.
       *
       * @param request ModifyDBInstanceClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceClassResponse
       */
      Models::ModifyDBInstanceClassResponse modifyDBInstanceClassWithOptions(const Models::ModifyDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyDBInstanceClass operation to modify the specifications of an instance.
       *
       * @param request ModifyDBInstanceClassRequest
       * @return ModifyDBInstanceClassResponse
       */
      Models::ModifyDBInstanceClassResponse modifyDBInstanceClass(const Models::ModifyDBInstanceClassRequest &request);

      /**
       * @summary Calls the ModifyDBInstanceConfig operation to modify instance configuration items.
       *
       * @param request ModifyDBInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(const Models::ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyDBInstanceConfig operation to modify instance configuration items.
       *
       * @param request ModifyDBInstanceConfigRequest
       * @return ModifyDBInstanceConfigResponse
       */
      Models::ModifyDBInstanceConfigResponse modifyDBInstanceConfig(const Models::ModifyDBInstanceConfigRequest &request);

      /**
       * @summary Modifies the connection string of an instance.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(const Models::ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the connection string of an instance.
       *
       * @param request ModifyDBInstanceConnectionStringRequest
       * @return ModifyDBInstanceConnectionStringResponse
       */
      Models::ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(const Models::ModifyDBInstanceConnectionStringRequest &request);

      /**
       * @summary Calls the ModifyDBInstanceDescription operation to modify the description of an instance.
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(const Models::ModifyDBInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyDBInstanceDescription operation to modify the description of an instance.
       *
       * @param request ModifyDBInstanceDescriptionRequest
       * @return ModifyDBInstanceDescriptionResponse
       */
      Models::ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(const Models::ModifyDBInstanceDescriptionRequest &request);

      /**
       * @summary Modifies the maintenance window of an instance.
       *
       * @description ****.
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(const Models::ModifyDBInstanceMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window of an instance.
       *
       * @description ****.
       *
       * @param request ModifyDBInstanceMaintainTimeRequest
       * @return ModifyDBInstanceMaintainTimeResponse
       */
      Models::ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(const Models::ModifyDBInstanceMaintainTimeRequest &request);

      /**
       * @summary Modifies the virtual IP (VIP) address or network properties bound to a database instance. This operation supports changing the internal IP address, adjusting the vSwitch, migrating across zones, and other operations.
       *
       * @description ****.
       *
       * @param request ModifyDBInstanceVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceVipResponse
       */
      Models::ModifyDBInstanceVipResponse modifyDBInstanceVipWithOptions(const Models::ModifyDBInstanceVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the virtual IP (VIP) address or network properties bound to a database instance. This operation supports changing the internal IP address, adjusting the vSwitch, migrating across zones, and other operations.
       *
       * @description ****.
       *
       * @param request ModifyDBInstanceVipRequest
       * @return ModifyDBInstanceVipResponse
       */
      Models::ModifyDBInstanceVipResponse modifyDBInstanceVip(const Models::ModifyDBInstanceVipRequest &request);

      /**
       * @summary Calls the ModifyDatabaseDescription operation to modify the description of a database.
       *
       * @param request ModifyDatabaseDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseDescriptionResponse
       */
      Models::ModifyDatabaseDescriptionResponse modifyDatabaseDescriptionWithOptions(const Models::ModifyDatabaseDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyDatabaseDescription operation to modify the description of a database.
       *
       * @param request ModifyDatabaseDescriptionRequest
       * @return ModifyDatabaseDescriptionResponse
       */
      Models::ModifyDatabaseDescriptionResponse modifyDatabaseDescription(const Models::ModifyDatabaseDescriptionRequest &request);

      /**
       * @summary Modifies the configuration or migration parameters of a database engine migration task, such as the source database, destination database, migration objects, or migration mode.
       *
       * @description ****.
       *
       * @param request ModifyEngineMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEngineMigrationResponse
       */
      Models::ModifyEngineMigrationResponse modifyEngineMigrationWithOptions(const Models::ModifyEngineMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration or migration parameters of a database engine migration task, such as the source database, destination database, migration objects, or migration mode.
       *
       * @description ****.
       *
       * @param request ModifyEngineMigrationRequest
       * @return ModifyEngineMigrationResponse
       */
      Models::ModifyEngineMigrationResponse modifyEngineMigration(const Models::ModifyEngineMigrationRequest &request);

      /**
       * @summary Modifies the whitelist of a memory engine.
       *
       * @description ****
       *
       * @param request ModifyMem0SecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMem0SecurityIpsResponse
       */
      Models::ModifyMem0SecurityIpsResponse modifyMem0SecurityIpsWithOptions(const Models::ModifyMem0SecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the whitelist of a memory engine.
       *
       * @description ****
       *
       * @param request ModifyMem0SecurityIpsRequest
       * @return ModifyMem0SecurityIpsResponse
       */
      Models::ModifyMem0SecurityIpsResponse modifyMem0SecurityIps(const Models::ModifyMem0SecurityIpsRequest &request);

      /**
       * @summary Calls the ModifyParameter operation to modify instance parameters, including compute layer and storage layer parameters.
       *
       * @param request ModifyParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameterWithOptions(const Models::ModifyParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyParameter operation to modify instance parameters, including compute layer and storage layer parameters.
       *
       * @param request ModifyParameterRequest
       * @return ModifyParameterResponse
       */
      Models::ModifyParameterResponse modifyParameter(const Models::ModifyParameterRequest &request);

      /**
       * @summary Calls the ModifySecurityIps operation to modify the whitelist of an instance.
       *
       * @param request ModifySecurityIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIpsWithOptions(const Models::ModifySecurityIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifySecurityIps operation to modify the whitelist of an instance.
       *
       * @param request ModifySecurityIpsRequest
       * @return ModifySecurityIpsResponse
       */
      Models::ModifySecurityIpsResponse modifySecurityIps(const Models::ModifySecurityIpsRequest &request);

      /**
       * @summary Modifies the Supabase Dashboard password.
       *
       * @description ****
       *
       * @param request ModifySupabaseDashboardPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySupabaseDashboardPasswordResponse
       */
      Models::ModifySupabaseDashboardPasswordResponse modifySupabaseDashboardPasswordWithOptions(const Models::ModifySupabaseDashboardPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the Supabase Dashboard password.
       *
       * @description ****
       *
       * @param request ModifySupabaseDashboardPasswordRequest
       * @return ModifySupabaseDashboardPasswordResponse
       */
      Models::ModifySupabaseDashboardPasswordResponse modifySupabaseDashboardPassword(const Models::ModifySupabaseDashboardPasswordRequest &request);

      /**
       * @summary Modifies the IP whitelist of a Supabase instance.
       *
       * @description ****
       *
       * @param request ModifySupabaseSecurityIPListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySupabaseSecurityIPListResponse
       */
      Models::ModifySupabaseSecurityIPListResponse modifySupabaseSecurityIPListWithOptions(const Models::ModifySupabaseSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP whitelist of a Supabase instance.
       *
       * @description ****
       *
       * @param request ModifySupabaseSecurityIPListRequest
       * @return ModifySupabaseSecurityIPListResponse
       */
      Models::ModifySupabaseSecurityIPListResponse modifySupabaseSecurityIPList(const Models::ModifySupabaseSecurityIPListRequest &request);

      /**
       * @summary Performs a pre-check and feasibility assessment for a recovery task before you execute SQL flashback recovery.
       *
       * @param request PreCheckSqlFlashbackTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreCheckSqlFlashbackTaskResponse
       */
      Models::PreCheckSqlFlashbackTaskResponse preCheckSqlFlashbackTaskWithOptions(const Models::PreCheckSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a pre-check and feasibility assessment for a recovery task before you execute SQL flashback recovery.
       *
       * @param request PreCheckSqlFlashbackTaskRequest
       * @return PreCheckSqlFlashbackTaskResponse
       */
      Models::PreCheckSqlFlashbackTaskResponse preCheckSqlFlashbackTask(const Models::PreCheckSqlFlashbackTaskRequest &request);

      /**
       * @summary Refreshes the metadata of an import task.
       *
       * @param request RefreshImportMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshImportMetaResponse
       */
      Models::RefreshImportMetaResponse refreshImportMetaWithOptions(const Models::RefreshImportMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the metadata of an import task.
       *
       * @param request RefreshImportMetaRequest
       * @return RefreshImportMetaResponse
       */
      Models::RefreshImportMetaResponse refreshImportMeta(const Models::RefreshImportMetaRequest &request);

      /**
       * @summary Calls the ReleaseColdDataVolume operation.
       *
       * @param request ReleaseColdDataVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseColdDataVolumeResponse
       */
      Models::ReleaseColdDataVolumeResponse releaseColdDataVolumeWithOptions(const Models::ReleaseColdDataVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ReleaseColdDataVolume operation.
       *
       * @param request ReleaseColdDataVolumeRequest
       * @return ReleaseColdDataVolumeResponse
       */
      Models::ReleaseColdDataVolumeResponse releaseColdDataVolume(const Models::ReleaseColdDataVolumeRequest &request);

      /**
       * @summary Releases the public network connection of an instance by calling the ReleaseInstancePublicConnection operation.
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public network connection of an instance by calling the ReleaseInstancePublicConnection operation.
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @summary Releases the public domain name for a Mem0 instance.
       *
       * @description This operation is used to verify that no active connections exist before a rollback task to ensure operational safety.
       *
       * @param request ReleaseMem0PublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseMem0PublicConnectionResponse
       */
      Models::ReleaseMem0PublicConnectionResponse releaseMem0PublicConnectionWithOptions(const Models::ReleaseMem0PublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public domain name for a Mem0 instance.
       *
       * @description This operation is used to verify that no active connections exist before a rollback task to ensure operational safety.
       *
       * @param request ReleaseMem0PublicConnectionRequest
       * @return ReleaseMem0PublicConnectionResponse
       */
      Models::ReleaseMem0PublicConnectionResponse releaseMem0PublicConnection(const Models::ReleaseMem0PublicConnectionRequest &request);

      /**
       * @summary Resets the password of an account.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of an account.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Resets the password of an account.
       *
       * @description ****.
       *
       * @param request ResetAccountPasswordRestrictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordRestrictResponse
       */
      Models::ResetAccountPasswordRestrictResponse resetAccountPasswordRestrictWithOptions(const Models::ResetAccountPasswordRestrictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of an account.
       *
       * @description ****.
       *
       * @param request ResetAccountPasswordRestrictRequest
       * @return ResetAccountPasswordRestrictResponse
       */
      Models::ResetAccountPasswordRestrictResponse resetAccountPasswordRestrict(const Models::ResetAccountPasswordRestrictRequest &request);

      /**
       * @summary Resets the API key of the memory engine.
       *
       * @description ****.
       *
       * @param request ResetMem0AccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetMem0AccountPasswordResponse
       */
      Models::ResetMem0AccountPasswordResponse resetMem0AccountPasswordWithOptions(const Models::ResetMem0AccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the API key of the memory engine.
       *
       * @description ****.
       *
       * @param request ResetMem0AccountPasswordRequest
       * @return ResetMem0AccountPasswordResponse
       */
      Models::ResetMem0AccountPasswordResponse resetMem0AccountPassword(const Models::ResetMem0AccountPasswordRequest &request);

      /**
       * @summary Restarts an instance by calling the RestartDBInstance operation.
       *
       * @param request RestartDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstanceWithOptions(const Models::RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an instance by calling the RestartDBInstance operation.
       *
       * @param request RestartDBInstanceRequest
       * @return RestartDBInstanceResponse
       */
      Models::RestartDBInstanceResponse restartDBInstance(const Models::RestartDBInstanceRequest &request);

      /**
       * @summary Restarts a data import task.
       *
       * @param request RestartDataImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDataImportTaskResponse
       */
      Models::RestartDataImportTaskResponse restartDataImportTaskWithOptions(const Models::RestartDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a data import task.
       *
       * @param request RestartDataImportTaskRequest
       * @return RestartDataImportTaskResponse
       */
      Models::RestartDataImportTaskResponse restartDataImportTask(const Models::RestartDataImportTaskRequest &request);

      /**
       * @summary Restarts a Supabase instance.
       *
       * @description ****
       *
       * @param request RestartSupabaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartSupabaseInstanceResponse
       */
      Models::RestartSupabaseInstanceResponse restartSupabaseInstanceWithOptions(const Models::RestartSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a Supabase instance.
       *
       * @description ****
       *
       * @param request RestartSupabaseInstanceRequest
       * @return RestartSupabaseInstanceResponse
       */
      Models::RestartSupabaseInstanceResponse restartSupabaseInstance(const Models::RestartSupabaseInstanceRequest &request);

      /**
       * @summary 克隆PolarDB-X实例
       *
       * @description ****
       *
       * @param request RestoreDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreDBInstanceResponse
       */
      Models::RestoreDBInstanceResponse restoreDBInstanceWithOptions(const Models::RestoreDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 克隆PolarDB-X实例
       *
       * @description ****
       *
       * @param request RestoreDBInstanceRequest
       * @return RestoreDBInstanceResponse
       */
      Models::RestoreDBInstanceResponse restoreDBInstance(const Models::RestoreDBInstanceRequest &request);

      /**
       * @summary This API is used to skip the current step.
       *
       * @param request SkipCurrentStepRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipCurrentStepResponse
       */
      Models::SkipCurrentStepResponse skipCurrentStepWithOptions(const Models::SkipCurrentStepRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to skip the current step.
       *
       * @param request SkipCurrentStepRequest
       * @return SkipCurrentStepResponse
       */
      Models::SkipCurrentStepResponse skipCurrentStep(const Models::SkipCurrentStepRequest &request);

      /**
       * @summary Starts a database cutover for a database migration or synchronization task.
       *
       * @param request StartSwitchDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSwitchDatabaseResponse
       */
      Models::StartSwitchDatabaseResponse startSwitchDatabaseWithOptions(const Models::StartSwitchDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a database cutover for a database migration or synchronization task.
       *
       * @param request StartSwitchDatabaseRequest
       * @return StartSwitchDatabaseResponse
       */
      Models::StartSwitchDatabaseResponse startSwitchDatabase(const Models::StartSwitchDatabaseRequest &request);

      /**
       * @summary Stops a data import task.
       *
       * @param request StopDataImportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDataImportTaskResponse
       */
      Models::StopDataImportTaskResponse stopDataImportTaskWithOptions(const Models::StopDataImportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a data import task.
       *
       * @param request StopDataImportTaskRequest
       * @return StopDataImportTaskResponse
       */
      Models::StopDataImportTaskResponse stopDataImportTask(const Models::StopDataImportTaskRequest &request);

      /**
       * @summary Creates a SQL flashback task by calling the SubmitSqlFlashbackTask operation.
       *
       * @param request SubmitSqlFlashbackTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSqlFlashbackTaskResponse
       */
      Models::SubmitSqlFlashbackTaskResponse submitSqlFlashbackTaskWithOptions(const Models::SubmitSqlFlashbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a SQL flashback task by calling the SubmitSqlFlashbackTask operation.
       *
       * @param request SubmitSqlFlashbackTaskRequest
       * @return SubmitSqlFlashbackTaskResponse
       */
      Models::SubmitSqlFlashbackTaskResponse submitSqlFlashbackTask(const Models::SubmitSqlFlashbackTaskRequest &request);

      /**
       * @param request SwitchDBInstanceHARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHAWithOptions(const Models::SwitchDBInstanceHARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SwitchDBInstanceHARequest
       * @return SwitchDBInstanceHAResponse
       */
      Models::SwitchDBInstanceHAResponse switchDBInstanceHA(const Models::SwitchDBInstanceHARequest &request);

      /**
       * @summary Performs a primary/secondary switchover for a global database network (GDN).
       *
       * @param request SwitchGdnMemberRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchGdnMemberRoleResponse
       */
      Models::SwitchGdnMemberRoleResponse switchGdnMemberRoleWithOptions(const Models::SwitchGdnMemberRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a primary/secondary switchover for a global database network (GDN).
       *
       * @param request SwitchGdnMemberRoleRequest
       * @return SwitchGdnMemberRoleResponse
       */
      Models::SwitchGdnMemberRoleResponse switchGdnMemberRole(const Models::SwitchGdnMemberRoleRequest &request);

      /**
       * @summary Calls the TagResources operation to add tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the TagResources operation to add tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Calls the UpdateBackupPolicy operation to modify the backup policy of an instance.
       *
       * @param request UpdateBackupPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicyWithOptions(const Models::UpdateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateBackupPolicy operation to modify the backup policy of an instance.
       *
       * @param request UpdateBackupPolicyRequest
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicy(const Models::UpdateBackupPolicyRequest &request);

      /**
       * @summary 更新实例的管控参数
       *
       * @description <props="china">更多关于实例账号的信息，请参见[账号管理](https://help.aliyun.com/document_detail/172163.html)。
       *
       * @param request UpdateCustinsParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustinsParamResponse
       */
      Models::UpdateCustinsParamResponse updateCustinsParamWithOptions(const Models::UpdateCustinsParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例的管控参数
       *
       * @description <props="china">更多关于实例账号的信息，请参见[账号管理](https://help.aliyun.com/document_detail/172163.html)。
       *
       * @param request UpdateCustinsParamRequest
       * @return UpdateCustinsParamResponse
       */
      Models::UpdateCustinsParamResponse updateCustinsParam(const Models::UpdateCustinsParamRequest &request);

      /**
       * @summary Updates the SSL configuration of an instance.
       *
       * @param request UpdateDBInstanceSSLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDBInstanceSSLResponse
       */
      Models::UpdateDBInstanceSSLResponse updateDBInstanceSSLWithOptions(const Models::UpdateDBInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the SSL configuration of an instance.
       *
       * @param request UpdateDBInstanceSSLRequest
       * @return UpdateDBInstanceSSLResponse
       */
      Models::UpdateDBInstanceSSLResponse updateDBInstanceSSL(const Models::UpdateDBInstanceSSLRequest &request);

      /**
       * @summary Enables Transparent Data Encryption (TDE) for an instance by calling the UpdateDBInstanceTDE operation.
       *
       * @param request UpdateDBInstanceTDERequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDBInstanceTDEResponse
       */
      Models::UpdateDBInstanceTDEResponse updateDBInstanceTDEWithOptions(const Models::UpdateDBInstanceTDERequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables Transparent Data Encryption (TDE) for an instance by calling the UpdateDBInstanceTDE operation.
       *
       * @param request UpdateDBInstanceTDERequest
       * @return UpdateDBInstanceTDEResponse
       */
      Models::UpdateDBInstanceTDEResponse updateDBInstanceTDE(const Models::UpdateDBInstanceTDERequest &request);

      /**
       * @summary Calls the UpdatePolarDBXInstanceNode operation to change the number of nodes for an instance, including scaling out and scaling in. This request generates a billable order.
       *
       * @param request UpdatePolarDBXInstanceNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolarDBXInstanceNodeResponse
       */
      Models::UpdatePolarDBXInstanceNodeResponse updatePolarDBXInstanceNodeWithOptions(const Models::UpdatePolarDBXInstanceNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdatePolarDBXInstanceNode operation to change the number of nodes for an instance, including scaling out and scaling in. This request generates a billable order.
       *
       * @param request UpdatePolarDBXInstanceNodeRequest
       * @return UpdatePolarDBXInstanceNodeResponse
       */
      Models::UpdatePolarDBXInstanceNodeResponse updatePolarDBXInstanceNode(const Models::UpdatePolarDBXInstanceNodeRequest &request);

      /**
       * @summary Upgrades the CDC node version of a PolarDB-X instance.
       *
       * @param request UpgradeCDCVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeCDCVersionResponse
       */
      Models::UpgradeCDCVersionResponse upgradeCDCVersionWithOptions(const Models::UpgradeCDCVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the CDC node version of a PolarDB-X instance.
       *
       * @param request UpgradeCDCVersionRequest
       * @return UpgradeCDCVersionResponse
       */
      Models::UpgradeCDCVersionResponse upgradeCDCVersion(const Models::UpgradeCDCVersionRequest &request);

      /**
       * @summary Updates the column store version.
       *
       * @param request UpgradeColumnarVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeColumnarVersionResponse
       */
      Models::UpgradeColumnarVersionResponse upgradeColumnarVersionWithOptions(const Models::UpgradeColumnarVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the column store version.
       *
       * @param request UpgradeColumnarVersionRequest
       * @return UpgradeColumnarVersionResponse
       */
      Models::UpgradeColumnarVersionResponse upgradeColumnarVersion(const Models::UpgradeColumnarVersionRequest &request);

      /**
       * @summary Invokes the UpgradeDBInstanceKernelVersion operation to update the kernel version of an instance.
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(const Models::UpgradeDBInstanceKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UpgradeDBInstanceKernelVersion operation to update the kernel version of an instance.
       *
       * @param request UpgradeDBInstanceKernelVersionRequest
       * @return UpgradeDBInstanceKernelVersionResponse
       */
      Models::UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(const Models::UpgradeDBInstanceKernelVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
