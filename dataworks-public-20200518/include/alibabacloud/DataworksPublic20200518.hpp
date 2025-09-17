// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DATAWORKSPUBLIC20200518_HPP_
#define ALIBABACLOUD_DATAWORKSPUBLIC20200518_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DataworksPublic20200518Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DataworksPublic20200518.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Unpublishes a DataService Studio API.
       *
       * @param request AbolishDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbolishDataServiceApiResponse
       */
      Models::AbolishDataServiceApiResponse abolishDataServiceApiWithOptions(const Models::AbolishDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes a DataService Studio API.
       *
       * @param request AbolishDataServiceApiRequest
       * @return AbolishDataServiceApiResponse
       */
      Models::AbolishDataServiceApiResponse abolishDataServiceApi(const Models::AbolishDataServiceApiRequest &request);

      /**
       * @summary Adds an entity to a collection.
       *
       * @param request AddMetaCollectionEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMetaCollectionEntityResponse
       */
      Models::AddMetaCollectionEntityResponse addMetaCollectionEntityWithOptions(const Models::AddMetaCollectionEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an entity to a collection.
       *
       * @param request AddMetaCollectionEntityRequest
       * @return AddMetaCollectionEntityResponse
       */
      Models::AddMetaCollectionEntityResponse addMetaCollectionEntity(const Models::AddMetaCollectionEntityRequest &request);

      /**
       * @summary Assigns a role to a member of a DataWorks workspace. Before you call this operation, you must add your account to a DataWorks workspace as a member.
       *
       * @description *   For information about how to add an account to a DataWorks workspace as a member, see [Add workspace members and assign roles to them](https://help.aliyun.com/document_detail/136941.html).
       * *   If you assign a built-in workspace-level role to a member of a DataWorks workspace, the member is automatically granted the permissions of the mapped role of the MaxCompute compute engine in the development environment. For more information, see [Appendix: Mappings between the built-in workspace-level roles of DataWorks and the roles of MaxCompute](https://help.aliyun.com/document_detail/449397.html).
       *
       * @param request AddProjectMemberToRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddProjectMemberToRoleResponse
       */
      Models::AddProjectMemberToRoleResponse addProjectMemberToRoleWithOptions(const Models::AddProjectMemberToRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns a role to a member of a DataWorks workspace. Before you call this operation, you must add your account to a DataWorks workspace as a member.
       *
       * @description *   For information about how to add an account to a DataWorks workspace as a member, see [Add workspace members and assign roles to them](https://help.aliyun.com/document_detail/136941.html).
       * *   If you assign a built-in workspace-level role to a member of a DataWorks workspace, the member is automatically granted the permissions of the mapped role of the MaxCompute compute engine in the development environment. For more information, see [Appendix: Mappings between the built-in workspace-level roles of DataWorks and the roles of MaxCompute](https://help.aliyun.com/document_detail/449397.html).
       *
       * @param request AddProjectMemberToRoleRequest
       * @return AddProjectMemberToRoleResponse
       */
      Models::AddProjectMemberToRoleResponse addProjectMemberToRole(const Models::AddProjectMemberToRoleRequest &request);

      /**
       * @summary Adds a sensitive field that is defined based on the category and sensitivity level of data in Data Security Guard.
       *
       * @param request AddRecognizeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecognizeRuleResponse
       */
      Models::AddRecognizeRuleResponse addRecognizeRuleWithOptions(const Models::AddRecognizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a sensitive field that is defined based on the category and sensitivity level of data in Data Security Guard.
       *
       * @param request AddRecognizeRuleRequest
       * @return AddRecognizeRuleResponse
       */
      Models::AddRecognizeRuleResponse addRecognizeRule(const Models::AddRecognizeRuleRequest &request);

      /**
       * @summary Adds a metatable to a specified category.
       *
       * @param request AddToMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddToMetaCategoryResponse
       */
      Models::AddToMetaCategoryResponse addToMetaCategoryWithOptions(const Models::AddToMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a metatable to a specified category.
       *
       * @param request AddToMetaCategoryRequest
       * @return AddToMetaCategoryResponse
       */
      Models::AddToMetaCategoryResponse addToMetaCategory(const Models::AddToMetaCategoryRequest &request);

      /**
       * @summary Processes a permission request order.
       *
       * @param request ApprovePermissionApplyOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApprovePermissionApplyOrderResponse
       */
      Models::ApprovePermissionApplyOrderResponse approvePermissionApplyOrderWithOptions(const Models::ApprovePermissionApplyOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Processes a permission request order.
       *
       * @param request ApprovePermissionApplyOrderRequest
       * @return ApprovePermissionApplyOrderResponse
       */
      Models::ApprovePermissionApplyOrderResponse approvePermissionApplyOrder(const Models::ApprovePermissionApplyOrderRequest &request);

      /**
       * @summary Sends the processing result of an extension point event by an extension to DataWorks.
       *
       * @param request CallbackExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CallbackExtensionResponse
       */
      Models::CallbackExtensionResponse callbackExtensionWithOptions(const Models::CallbackExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends the processing result of an extension point event by an extension to DataWorks.
       *
       * @param request CallbackExtensionRequest
       * @return CallbackExtensionResponse
       */
      Models::CallbackExtensionResponse callbackExtension(const Models::CallbackExtensionRequest &request);

      /**
       * @summary Changes the resource group to which a resource belongs.
       *
       * @param request ChangeResourceManagerResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceManagerResourceGroupResponse
       */
      Models::ChangeResourceManagerResourceGroupResponse changeResourceManagerResourceGroupWithOptions(const Models::ChangeResourceManagerResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a resource belongs.
       *
       * @param request ChangeResourceManagerResourceGroupRequest
       * @return ChangeResourceManagerResourceGroupResponse
       */
      Models::ChangeResourceManagerResourceGroupResponse changeResourceManagerResourceGroup(const Models::ChangeResourceManagerResourceGroupRequest &request);

      /**
       * @summary Returns the check events of a file. After you commit your file that is created on the DataStudio page, the system checks the file and returns check events before the system deploys the file. You must determine whether the check can be continued based on the events. You can call this operation to return the check events for the file that you want to deploy to DataWorks.
       *
       * @param request CheckFileDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckFileDeploymentResponse
       */
      Models::CheckFileDeploymentResponse checkFileDeploymentWithOptions(const Models::CheckFileDeploymentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the check events of a file. After you commit your file that is created on the DataStudio page, the system checks the file and returns check events before the system deploys the file. You must determine whether the check can be continued based on the events. You can call this operation to return the check events for the file that you want to deploy to DataWorks.
       *
       * @param request CheckFileDeploymentRequest
       * @return CheckFileDeploymentResponse
       */
      Models::CheckFileDeploymentResponse checkFileDeployment(const Models::CheckFileDeploymentRequest &request);

      /**
       * @summary Checks whether a partition in a MaxCompute metatable exists.
       *
       * @param request CheckMetaPartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMetaPartitionResponse
       */
      Models::CheckMetaPartitionResponse checkMetaPartitionWithOptions(const Models::CheckMetaPartitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a partition in a MaxCompute metatable exists.
       *
       * @param request CheckMetaPartitionRequest
       * @return CheckMetaPartitionResponse
       */
      Models::CheckMetaPartitionResponse checkMetaPartition(const Models::CheckMetaPartitionRequest &request);

      /**
       * @summary Checks whether a metatable exists.
       *
       * @param request CheckMetaTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMetaTableResponse
       */
      Models::CheckMetaTableResponse checkMetaTableWithOptions(const Models::CheckMetaTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a metatable exists.
       *
       * @param request CheckMetaTableRequest
       * @return CheckMetaTableResponse
       */
      Models::CheckMetaTableResponse checkMetaTable(const Models::CheckMetaTableRequest &request);

      /**
       * @summary Creates a baseline.
       *
       * @param request CreateBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBaselineResponse
       */
      Models::CreateBaselineResponse createBaselineWithOptions(const Models::CreateBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a baseline.
       *
       * @param request CreateBaselineRequest
       * @return CreateBaselineResponse
       */
      Models::CreateBaselineResponse createBaseline(const Models::CreateBaselineRequest &request);

      /**
       * @summary Creates a workflow in DataStudio.
       *
       * @param request CreateBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBusinessResponse
       */
      Models::CreateBusinessResponse createBusinessWithOptions(const Models::CreateBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow in DataStudio.
       *
       * @param request CreateBusinessRequest
       * @return CreateBusinessResponse
       */
      Models::CreateBusinessResponse createBusiness(const Models::CreateBusinessRequest &request);

      /**
       * @deprecated OpenAPI CreateConnection is deprecated, please use dataworks-public::2020-05-18::CreateDataSource instead.
       *
       * @summary Adds a data source.
       *
       * @param request CreateConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConnectionResponse
       */
      Models::CreateConnectionResponse createConnectionWithOptions(const Models::CreateConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateConnection is deprecated, please use dataworks-public::2020-05-18::CreateDataSource instead.
       *
       * @summary Adds a data source.
       *
       * @param request CreateConnectionRequest
       * @return CreateConnectionResponse
       */
      Models::CreateConnectionResponse createConnection(const Models::CreateConnectionRequest &request);

      /**
       * @summary Creates an alert rule for a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
       *
       * @param tmpReq CreateDIAlarmRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDIAlarmRuleResponse
       */
      Models::CreateDIAlarmRuleResponse createDIAlarmRuleWithOptions(const Models::CreateDIAlarmRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert rule for a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
       *
       * @param request CreateDIAlarmRuleRequest
       * @return CreateDIAlarmRuleResponse
       */
      Models::CreateDIAlarmRuleResponse createDIAlarmRule(const Models::CreateDIAlarmRuleRequest &request);

      /**
       * @summary Creates a new-version synchronization task. The following types of synchronization tasks are supported: real-time synchronization of all data in a MySQL database to Hologres and batch synchronization of all data in a MySQL database to Hive.
       *
       * @param tmpReq CreateDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDIJobResponse
       */
      Models::CreateDIJobResponse createDIJobWithOptions(const Models::CreateDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new-version synchronization task. The following types of synchronization tasks are supported: real-time synchronization of all data in a MySQL database to Hologres and batch synchronization of all data in a MySQL database to Hive.
       *
       * @param request CreateDIJobRequest
       * @return CreateDIJobResponse
       */
      Models::CreateDIJobResponse createDIJob(const Models::CreateDIJobRequest &request);

      /**
       * @summary Creates a data synchronization task.
       *
       * @description You cannot configure scheduling properties for a task by calling this operation. If you want to configure scheduling properties for a task, you can call the UpdateFile operation.[](~~2780137~~)
       *
       * @param request CreateDISyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDISyncTaskResponse
       */
      Models::CreateDISyncTaskResponse createDISyncTaskWithOptions(const Models::CreateDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data synchronization task.
       *
       * @description You cannot configure scheduling properties for a task by calling this operation. If you want to configure scheduling properties for a task, you can call the UpdateFile operation.[](~~2780137~~)
       *
       * @param request CreateDISyncTaskRequest
       * @return CreateDISyncTaskResponse
       */
      Models::CreateDISyncTaskResponse createDISyncTask(const Models::CreateDISyncTaskRequest &request);

      /**
       * @deprecated OpenAPI CreateDagComplement is deprecated
       *
       * @param request CreateDagComplementRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDagComplementResponse
       */
      Models::CreateDagComplementResponse createDagComplementWithOptions(const Models::CreateDagComplementRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateDagComplement is deprecated
       *
       * @param request CreateDagComplementRequest
       * @return CreateDagComplementResponse
       */
      Models::CreateDagComplementResponse createDagComplement(const Models::CreateDagComplementRequest &request);

      /**
       * @deprecated OpenAPI CreateDagTest is deprecated
       *
       * @param request CreateDagTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDagTestResponse
       */
      Models::CreateDagTestResponse createDagTestWithOptions(const Models::CreateDagTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateDagTest is deprecated
       *
       * @param request CreateDagTestRequest
       * @return CreateDagTestResponse
       */
      Models::CreateDagTestResponse createDagTest(const Models::CreateDagTestRequest &request);

      /**
       * @summary Creates an API.
       *
       * @param request CreateDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataServiceApiResponse
       */
      Models::CreateDataServiceApiResponse createDataServiceApiWithOptions(const Models::CreateDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API.
       *
       * @param request CreateDataServiceApiRequest
       * @return CreateDataServiceApiResponse
       */
      Models::CreateDataServiceApiResponse createDataServiceApi(const Models::CreateDataServiceApiRequest &request);

      /**
       * @summary Grants the access permissions on an API in DataService Studio.
       *
       * @param request CreateDataServiceApiAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataServiceApiAuthorityResponse
       */
      Models::CreateDataServiceApiAuthorityResponse createDataServiceApiAuthorityWithOptions(const Models::CreateDataServiceApiAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants the access permissions on an API in DataService Studio.
       *
       * @param request CreateDataServiceApiAuthorityRequest
       * @return CreateDataServiceApiAuthorityResponse
       */
      Models::CreateDataServiceApiAuthorityResponse createDataServiceApiAuthority(const Models::CreateDataServiceApiAuthorityRequest &request);

      /**
       * @summary Creates a folder in DataService Studio.
       *
       * @param request CreateDataServiceFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataServiceFolderResponse
       */
      Models::CreateDataServiceFolderResponse createDataServiceFolderWithOptions(const Models::CreateDataServiceFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a folder in DataService Studio.
       *
       * @param request CreateDataServiceFolderRequest
       * @return CreateDataServiceFolderResponse
       */
      Models::CreateDataServiceFolderResponse createDataServiceFolder(const Models::CreateDataServiceFolderRequest &request);

      /**
       * @summary Creates a business process.
       *
       * @param request CreateDataServiceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataServiceGroupResponse
       */
      Models::CreateDataServiceGroupResponse createDataServiceGroupWithOptions(const Models::CreateDataServiceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a business process.
       *
       * @param request CreateDataServiceGroupRequest
       * @return CreateDataServiceGroupResponse
       */
      Models::CreateDataServiceGroupResponse createDataServiceGroup(const Models::CreateDataServiceGroupRequest &request);

      /**
       * @summary Adds a data source to DataWorks.
       *
       * @param request CreateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const Models::CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a data source to DataWorks.
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const Models::CreateDataSourceRequest &request);

      /**
       * @summary Creates an export task. You can use this operation to create an export task but cannot use this operation to start the created export task.
       *
       * @param request CreateExportMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExportMigrationResponse
       */
      Models::CreateExportMigrationResponse createExportMigrationWithOptions(const Models::CreateExportMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an export task. You can use this operation to create an export task but cannot use this operation to start the created export task.
       *
       * @param request CreateExportMigrationRequest
       * @return CreateExportMigrationResponse
       */
      Models::CreateExportMigrationResponse createExportMigration(const Models::CreateExportMigrationRequest &request);

      /**
       * @summary Creates a file in DataStudio. You cannot call this operation to create files for Data Integration nodes.
       *
       * @param request CreateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFileWithOptions(const Models::CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file in DataStudio. You cannot call this operation to create files for Data Integration nodes.
       *
       * @param request CreateFileRequest
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFile(const Models::CreateFileRequest &request);

      /**
       * @summary The operation that you want to perform. Set the value to \\*\\*CreateFolder\\*\\*.
       *
       * @param request CreateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolderWithOptions(const Models::CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The operation that you want to perform. Set the value to \\*\\*CreateFolder\\*\\*.
       *
       * @param request CreateFolderRequest
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolder(const Models::CreateFolderRequest &request);

      /**
       * @summary Creates an import task. The import task contains the import packages of data sources, nodes, and tables.
       *
       * @description The import package must be uploaded. Example of the upload method:
       *         Config config = new Config();
       *         config.setAccessKeyId(accessId);
       *         config.setAccessKeySecret(accessKey);
       *         config.setEndpoint(popEndpoint);
       *         config.setRegionId(regionId);
       *         
       *         Client client = new Client(config);
       *         CreateImportMigrationAdvanceRequest request = new CreateImportMigrationAdvanceRequest();
       *         request.setName("test_migration_api_" + System.currentTimeMillis());
       *         request.setProjectId(123456L); 
       *         request.setPackageType("DATAWORKS_MODEL");
       *         request.setPackageFileObject(new FileInputStream("/home/admin/Downloads/test.zip"));
       *         RuntimeOptions runtime = new RuntimeOptions();
       *         CreateImportMigrationResponse response = client.createImportMigrationAdvance(request, runtime);
       *         ...
       *
       * @param request CreateImportMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImportMigrationResponse
       */
      Models::CreateImportMigrationResponse createImportMigrationWithOptions(const Models::CreateImportMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an import task. The import task contains the import packages of data sources, nodes, and tables.
       *
       * @description The import package must be uploaded. Example of the upload method:
       *         Config config = new Config();
       *         config.setAccessKeyId(accessId);
       *         config.setAccessKeySecret(accessKey);
       *         config.setEndpoint(popEndpoint);
       *         config.setRegionId(regionId);
       *         
       *         Client client = new Client(config);
       *         CreateImportMigrationAdvanceRequest request = new CreateImportMigrationAdvanceRequest();
       *         request.setName("test_migration_api_" + System.currentTimeMillis());
       *         request.setProjectId(123456L); 
       *         request.setPackageType("DATAWORKS_MODEL");
       *         request.setPackageFileObject(new FileInputStream("/home/admin/Downloads/test.zip"));
       *         RuntimeOptions runtime = new RuntimeOptions();
       *         CreateImportMigrationResponse response = client.createImportMigrationAdvance(request, runtime);
       *         ...
       *
       * @param request CreateImportMigrationRequest
       * @return CreateImportMigrationResponse
       */
      Models::CreateImportMigrationResponse createImportMigration(const Models::CreateImportMigrationRequest &request);

      Models::CreateImportMigrationResponse createImportMigrationAdvance(const Models::CreateImportMigrationAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateManualDag is deprecated
       *
       * @summary Triggers a manually triggered workflow to run. Before you call this operation, make sure that the manually triggered workflow is committed and deployed. You can find the manually triggered workflow on the Operation Center page only after the manually triggered workflow is committed and deployed.
       *
       * @param request CreateManualDagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateManualDagResponse
       */
      Models::CreateManualDagResponse createManualDagWithOptions(const Models::CreateManualDagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateManualDag is deprecated
       *
       * @summary Triggers a manually triggered workflow to run. Before you call this operation, make sure that the manually triggered workflow is committed and deployed. You can find the manually triggered workflow on the Operation Center page only after the manually triggered workflow is committed and deployed.
       *
       * @param request CreateManualDagRequest
       * @return CreateManualDagResponse
       */
      Models::CreateManualDagResponse createManualDag(const Models::CreateManualDagRequest &request);

      /**
       * @summary Creates a category.
       *
       * @param request CreateMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetaCategoryResponse
       */
      Models::CreateMetaCategoryResponse createMetaCategoryWithOptions(const Models::CreateMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a category.
       *
       * @param request CreateMetaCategoryRequest
       * @return CreateMetaCategoryResponse
       */
      Models::CreateMetaCategoryResponse createMetaCategory(const Models::CreateMetaCategoryRequest &request);

      /**
       * @summary Creates a collection.
       *
       * @description Collections are classified into various types. The names of collections of the same type must be different.
       *
       * @param request CreateMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetaCollectionResponse
       */
      Models::CreateMetaCollectionResponse createMetaCollectionWithOptions(const Models::CreateMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a collection.
       *
       * @description Collections are classified into various types. The names of collections of the same type must be different.
       *
       * @param request CreateMetaCollectionRequest
       * @return CreateMetaCollectionResponse
       */
      Models::CreateMetaCollectionResponse createMetaCollection(const Models::CreateMetaCollectionRequest &request);

      /**
       * @summary Creates a permission request order.
       *
       * @param request CreatePermissionApplyOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePermissionApplyOrderResponse
       */
      Models::CreatePermissionApplyOrderResponse createPermissionApplyOrderWithOptions(const Models::CreatePermissionApplyOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a permission request order.
       *
       * @param request CreatePermissionApplyOrderRequest
       * @return CreatePermissionApplyOrderResponse
       */
      Models::CreatePermissionApplyOrderResponse createPermissionApplyOrder(const Models::CreatePermissionApplyOrderRequest &request);

      /**
       * @summary Creates a DataWorks workspace.
       *
       * @param tmpReq CreateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a DataWorks workspace.
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary Adds a user to a DataWorks workspace.
       *
       * @param request CreateProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectMemberResponse
       */
      Models::CreateProjectMemberResponse createProjectMemberWithOptions(const Models::CreateProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to a DataWorks workspace.
       *
       * @param request CreateProjectMemberRequest
       * @return CreateProjectMemberResponse
       */
      Models::CreateProjectMemberResponse createProjectMember(const Models::CreateProjectMemberRequest &request);

      /**
       * @summary Creates a partition filter expression.
       *
       * @param request CreateQualityEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityEntityResponse
       */
      Models::CreateQualityEntityResponse createQualityEntityWithOptions(const Models::CreateQualityEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a partition filter expression.
       *
       * @param request CreateQualityEntityRequest
       * @return CreateQualityEntityResponse
       */
      Models::CreateQualityEntityResponse createQualityEntity(const Models::CreateQualityEntityRequest &request);

      /**
       * @summary Creates a subscriber for a partition filter expression.
       *
       * @param request CreateQualityFollowerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityFollowerResponse
       */
      Models::CreateQualityFollowerResponse createQualityFollowerWithOptions(const Models::CreateQualityFollowerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscriber for a partition filter expression.
       *
       * @param request CreateQualityFollowerRequest
       * @return CreateQualityFollowerResponse
       */
      Models::CreateQualityFollowerResponse createQualityFollower(const Models::CreateQualityFollowerRequest &request);

      /**
       * @summary Associates a node with a partition filter expression.
       *
       * @param request CreateQualityRelativeNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityRelativeNodeResponse
       */
      Models::CreateQualityRelativeNodeResponse createQualityRelativeNodeWithOptions(const Models::CreateQualityRelativeNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a node with a partition filter expression.
       *
       * @param request CreateQualityRelativeNodeRequest
       * @return CreateQualityRelativeNodeResponse
       */
      Models::CreateQualityRelativeNodeResponse createQualityRelativeNode(const Models::CreateQualityRelativeNodeRequest &request);

      /**
       * @summary Creates a monitoring rule.
       *
       * @param request CreateQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityRuleResponse
       */
      Models::CreateQualityRuleResponse createQualityRuleWithOptions(const Models::CreateQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a monitoring rule.
       *
       * @param request CreateQualityRuleRequest
       * @return CreateQualityRuleResponse
       */
      Models::CreateQualityRuleResponse createQualityRule(const Models::CreateQualityRuleRequest &request);

      /**
       * @summary Creates a custom alert rule.
       *
       * @param request CreateRemindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRemindResponse
       */
      Models::CreateRemindResponse createRemindWithOptions(const Models::CreateRemindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom alert rule.
       *
       * @param request CreateRemindRequest
       * @return CreateRemindResponse
       */
      Models::CreateRemindResponse createRemind(const Models::CreateRemindRequest &request);

      /**
       * @summary Creates or uploads a resource file in DataStudio. The feature that is implemented by calling this operation is the same as the resource creation feature provided in the integrated development environment (IDE).
       *
       * @param request CreateResourceFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceFileResponse
       */
      Models::CreateResourceFileResponse createResourceFileWithOptions(const Models::CreateResourceFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or uploads a resource file in DataStudio. The feature that is implemented by calling this operation is the same as the resource creation feature provided in the integrated development environment (IDE).
       *
       * @param request CreateResourceFileRequest
       * @return CreateResourceFileResponse
       */
      Models::CreateResourceFileResponse createResourceFile(const Models::CreateResourceFileRequest &request);

      Models::CreateResourceFileResponse createResourceFileAdvance(const Models::CreateResourceFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a MaxCompute table or view.
       *
       * @param request CreateTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTableWithOptions(const Models::CreateTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a MaxCompute table or view.
       *
       * @param request CreateTableRequest
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTable(const Models::CreateTableRequest &request);

      /**
       * @summary Creates a table level. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request CreateTableLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableLevelResponse
       */
      Models::CreateTableLevelResponse createTableLevelWithOptions(const Models::CreateTableLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a table level. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request CreateTableLevelRequest
       * @return CreateTableLevelResponse
       */
      Models::CreateTableLevelResponse createTableLevel(const Models::CreateTableLevelRequest &request);

      /**
       * @summary Creates a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request CreateTableThemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableThemeResponse
       */
      Models::CreateTableThemeResponse createTableThemeWithOptions(const Models::CreateTableThemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request CreateTableThemeRequest
       * @return CreateTableThemeResponse
       */
      Models::CreateTableThemeResponse createTableTheme(const Models::CreateTableThemeRequest &request);

      /**
       * @summary Creates a file for a function in DataStudio.
       *
       * @param request CreateUdfFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUdfFileResponse
       */
      Models::CreateUdfFileResponse createUdfFileWithOptions(const Models::CreateUdfFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file for a function in DataStudio.
       *
       * @param request CreateUdfFileRequest
       * @return CreateUdfFileResponse
       */
      Models::CreateUdfFileResponse createUdfFile(const Models::CreateUdfFileRequest &request);

      /**
       * @summary Deletes a baseline based on its ID. You can delete a baseline only if the nodes in the baseline does not have ancestor nodes. You can call the UpdateBaseline operation to delete the relationships between the nodes and their ancestor nodes.
       *
       * @param request DeleteBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBaselineResponse
       */
      Models::DeleteBaselineResponse deleteBaselineWithOptions(const Models::DeleteBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a baseline based on its ID. You can delete a baseline only if the nodes in the baseline does not have ancestor nodes. You can call the UpdateBaseline operation to delete the relationships between the nodes and their ancestor nodes.
       *
       * @param request DeleteBaselineRequest
       * @return DeleteBaselineResponse
       */
      Models::DeleteBaselineResponse deleteBaseline(const Models::DeleteBaselineRequest &request);

      /**
       * @param request DeleteBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBusinessResponse
       */
      Models::DeleteBusinessResponse deleteBusinessWithOptions(const Models::DeleteBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteBusinessRequest
       * @return DeleteBusinessResponse
       */
      Models::DeleteBusinessResponse deleteBusiness(const Models::DeleteBusinessRequest &request);

      /**
       * @deprecated OpenAPI DeleteConnection is deprecated
       *
       * @summary Removes a data source.
       *
       * @param request DeleteConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnectionResponse
       */
      Models::DeleteConnectionResponse deleteConnectionWithOptions(const Models::DeleteConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteConnection is deprecated
       *
       * @summary Removes a data source.
       *
       * @param request DeleteConnectionRequest
       * @return DeleteConnectionResponse
       */
      Models::DeleteConnectionResponse deleteConnection(const Models::DeleteConnectionRequest &request);

      /**
       * @summary Deletes an alert rule for a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks whose MigrationType is set to RealtimeIncremental.
       *
       * @param request DeleteDIAlarmRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDIAlarmRuleResponse
       */
      Models::DeleteDIAlarmRuleResponse deleteDIAlarmRuleWithOptions(const Models::DeleteDIAlarmRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert rule for a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks whose MigrationType is set to RealtimeIncremental.
       *
       * @param request DeleteDIAlarmRuleRequest
       * @return DeleteDIAlarmRuleResponse
       */
      Models::DeleteDIAlarmRuleResponse deleteDIAlarmRule(const Models::DeleteDIAlarmRuleRequest &request);

      /**
       * @summary Deletes a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @param request DeleteDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDIJobResponse
       */
      Models::DeleteDIJobResponse deleteDIJobWithOptions(const Models::DeleteDIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @param request DeleteDIJobRequest
       * @return DeleteDIJobResponse
       */
      Models::DeleteDIJobResponse deleteDIJob(const Models::DeleteDIJobRequest &request);

      /**
       * @summary Deletes a synchronization task. You can call this operation to delete only a real-time synchronization task.
       *
       * @description If you want to delete a batch synchronization task, call the DeleteFile operation. For more information, see [Delete a synchronization task](https://help.aliyun.com/document_detail/321443.html).
       *
       * @param request DeleteDISyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDISyncTaskResponse
       */
      Models::DeleteDISyncTaskResponse deleteDISyncTaskWithOptions(const Models::DeleteDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a synchronization task. You can call this operation to delete only a real-time synchronization task.
       *
       * @description If you want to delete a batch synchronization task, call the DeleteFile operation. For more information, see [Delete a synchronization task](https://help.aliyun.com/document_detail/321443.html).
       *
       * @param request DeleteDISyncTaskRequest
       * @return DeleteDISyncTaskResponse
       */
      Models::DeleteDISyncTaskResponse deleteDISyncTask(const Models::DeleteDISyncTaskRequest &request);

      /**
       * @summary Deletes an API in DataService Studio.
       *
       * @param request DeleteDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataServiceApiResponse
       */
      Models::DeleteDataServiceApiResponse deleteDataServiceApiWithOptions(const Models::DeleteDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API in DataService Studio.
       *
       * @param request DeleteDataServiceApiRequest
       * @return DeleteDataServiceApiResponse
       */
      Models::DeleteDataServiceApiResponse deleteDataServiceApi(const Models::DeleteDataServiceApiRequest &request);

      /**
       * @summary Revokes the access permissions on an API.
       *
       * @param request DeleteDataServiceApiAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataServiceApiAuthorityResponse
       */
      Models::DeleteDataServiceApiAuthorityResponse deleteDataServiceApiAuthorityWithOptions(const Models::DeleteDataServiceApiAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the access permissions on an API.
       *
       * @param request DeleteDataServiceApiAuthorityRequest
       * @return DeleteDataServiceApiAuthorityResponse
       */
      Models::DeleteDataServiceApiAuthorityResponse deleteDataServiceApiAuthority(const Models::DeleteDataServiceApiAuthorityRequest &request);

      /**
       * @summary Removes a data source.
       *
       * @param request DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a data source.
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary Deletes a file from DataStudio. If the file has been committed, an asynchronous process is triggered to delete the file in the scheduling system. The value of the DeploymentId parameter returned is used to call the GetDeployment operation to poll the status of the asynchronous process.
       *
       * @param request DeleteFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFileWithOptions(const Models::DeleteFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file from DataStudio. If the file has been committed, an asynchronous process is triggered to delete the file in the scheduling system. The value of the DeploymentId parameter returned is used to call the GetDeployment operation to poll the status of the asynchronous process.
       *
       * @param request DeleteFileRequest
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFile(const Models::DeleteFileRequest &request);

      /**
       * @param request DeleteFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolderWithOptions(const Models::DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteFolderRequest
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolder(const Models::DeleteFolderRequest &request);

      /**
       * @summary Removes a table from a specified category.
       *
       * @param request DeleteFromMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFromMetaCategoryResponse
       */
      Models::DeleteFromMetaCategoryResponse deleteFromMetaCategoryWithOptions(const Models::DeleteFromMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a table from a specified category.
       *
       * @param request DeleteFromMetaCategoryRequest
       * @return DeleteFromMetaCategoryResponse
       */
      Models::DeleteFromMetaCategoryResponse deleteFromMetaCategory(const Models::DeleteFromMetaCategoryRequest &request);

      /**
       * @summary Delete lineage, supports deleting user-defined lineage relationships
       *
       * @description This API is currently in the trial phase. Users who wish to experience it can apply, and after the administrator adds them to the trial list, they can call this API.
       *
       * @param request DeleteLineageRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLineageRelationResponse
       */
      Models::DeleteLineageRelationResponse deleteLineageRelationWithOptions(const Models::DeleteLineageRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete lineage, supports deleting user-defined lineage relationships
       *
       * @description This API is currently in the trial phase. Users who wish to experience it can apply, and after the administrator adds them to the trial list, they can call this API.
       *
       * @param request DeleteLineageRelationRequest
       * @return DeleteLineageRelationResponse
       */
      Models::DeleteLineageRelationResponse deleteLineageRelation(const Models::DeleteLineageRelationRequest &request);

      /**
       * @summary Deletes a category.
       *
       * @param request DeleteMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetaCategoryResponse
       */
      Models::DeleteMetaCategoryResponse deleteMetaCategoryWithOptions(const Models::DeleteMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a category.
       *
       * @param request DeleteMetaCategoryRequest
       * @return DeleteMetaCategoryResponse
       */
      Models::DeleteMetaCategoryResponse deleteMetaCategory(const Models::DeleteMetaCategoryRequest &request);

      /**
       * @summary Deletes a collection.
       *
       * @param request DeleteMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetaCollectionResponse
       */
      Models::DeleteMetaCollectionResponse deleteMetaCollectionWithOptions(const Models::DeleteMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a collection.
       *
       * @param request DeleteMetaCollectionRequest
       * @return DeleteMetaCollectionResponse
       */
      Models::DeleteMetaCollectionResponse deleteMetaCollection(const Models::DeleteMetaCollectionRequest &request);

      /**
       * @summary Deletes an entity from a collection.
       *
       * @param request DeleteMetaCollectionEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetaCollectionEntityResponse
       */
      Models::DeleteMetaCollectionEntityResponse deleteMetaCollectionEntityWithOptions(const Models::DeleteMetaCollectionEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an entity from a collection.
       *
       * @param request DeleteMetaCollectionEntityRequest
       * @return DeleteMetaCollectionEntityResponse
       */
      Models::DeleteMetaCollectionEntityResponse deleteMetaCollectionEntity(const Models::DeleteMetaCollectionEntityRequest &request);

      /**
       * @summary Removes a user from a DataWorks workspace.
       *
       * @param request DeleteProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectMemberResponse
       */
      Models::DeleteProjectMemberResponse deleteProjectMemberWithOptions(const Models::DeleteProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a user from a DataWorks workspace.
       *
       * @param request DeleteProjectMemberRequest
       * @return DeleteProjectMemberResponse
       */
      Models::DeleteProjectMemberResponse deleteProjectMember(const Models::DeleteProjectMemberRequest &request);

      /**
       * @summary Deletes a partition filter expression.
       *
       * @param request DeleteQualityEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityEntityResponse
       */
      Models::DeleteQualityEntityResponse deleteQualityEntityWithOptions(const Models::DeleteQualityEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a partition filter expression.
       *
       * @param request DeleteQualityEntityRequest
       * @return DeleteQualityEntityResponse
       */
      Models::DeleteQualityEntityResponse deleteQualityEntity(const Models::DeleteQualityEntityRequest &request);

      /**
       * @summary Deletes a subscriber of a partition filter expression.
       *
       * @description In Data Quality, you must configure monitoring rules based on a partition filter expression. Data Quality uses these rules to detect changes in source data and dirty data generated during the process of extract, transform, and load (ETL). This way, you can prevent tasks from producing unexpected dirty data that affects the smooth running of tasks and business decision-making. You can go to the Manage Subscriptions page to add subscribers for a partition filter expression. When the monitoring rule that is created based on the partition filter expression is triggered, the subscribers can receive notifications and troubleshoot errors at the earliest opportunity. For more information, see [Configure monitoring rules](https://help.aliyun.com/document_detail/73690.html).
       *
       * @param request DeleteQualityFollowerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityFollowerResponse
       */
      Models::DeleteQualityFollowerResponse deleteQualityFollowerWithOptions(const Models::DeleteQualityFollowerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a subscriber of a partition filter expression.
       *
       * @description In Data Quality, you must configure monitoring rules based on a partition filter expression. Data Quality uses these rules to detect changes in source data and dirty data generated during the process of extract, transform, and load (ETL). This way, you can prevent tasks from producing unexpected dirty data that affects the smooth running of tasks and business decision-making. You can go to the Manage Subscriptions page to add subscribers for a partition filter expression. When the monitoring rule that is created based on the partition filter expression is triggered, the subscribers can receive notifications and troubleshoot errors at the earliest opportunity. For more information, see [Configure monitoring rules](https://help.aliyun.com/document_detail/73690.html).
       *
       * @param request DeleteQualityFollowerRequest
       * @return DeleteQualityFollowerResponse
       */
      Models::DeleteQualityFollowerResponse deleteQualityFollower(const Models::DeleteQualityFollowerRequest &request);

      /**
       * @param request DeleteQualityRelativeNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityRelativeNodeResponse
       */
      Models::DeleteQualityRelativeNodeResponse deleteQualityRelativeNodeWithOptions(const Models::DeleteQualityRelativeNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteQualityRelativeNodeRequest
       * @return DeleteQualityRelativeNodeResponse
       */
      Models::DeleteQualityRelativeNodeResponse deleteQualityRelativeNode(const Models::DeleteQualityRelativeNodeRequest &request);

      /**
       * @summary Deletes a monitoring rule.
       *
       * @param request DeleteQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityRuleResponse
       */
      Models::DeleteQualityRuleResponse deleteQualityRuleWithOptions(const Models::DeleteQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a monitoring rule.
       *
       * @param request DeleteQualityRuleRequest
       * @return DeleteQualityRuleResponse
       */
      Models::DeleteQualityRuleResponse deleteQualityRule(const Models::DeleteQualityRuleRequest &request);

      /**
       * @summary Deletes sensitive field types.
       *
       * @param request DeleteRecognizeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecognizeRuleResponse
       */
      Models::DeleteRecognizeRuleResponse deleteRecognizeRuleWithOptions(const Models::DeleteRecognizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes sensitive field types.
       *
       * @param request DeleteRecognizeRuleRequest
       * @return DeleteRecognizeRuleResponse
       */
      Models::DeleteRecognizeRuleResponse deleteRecognizeRule(const Models::DeleteRecognizeRuleRequest &request);

      /**
       * @summary Deletes a custom alert rule.
       *
       * @param request DeleteRemindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRemindResponse
       */
      Models::DeleteRemindResponse deleteRemindWithOptions(const Models::DeleteRemindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom alert rule.
       *
       * @param request DeleteRemindRequest
       * @return DeleteRemindResponse
       */
      Models::DeleteRemindResponse deleteRemind(const Models::DeleteRemindRequest &request);

      /**
       * @param request DeleteTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableResponse
       */
      Models::DeleteTableResponse deleteTableWithOptions(const Models::DeleteTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteTableRequest
       * @return DeleteTableResponse
       */
      Models::DeleteTableResponse deleteTable(const Models::DeleteTableRequest &request);

      /**
       * @summary Deletes a table level. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request DeleteTableLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableLevelResponse
       */
      Models::DeleteTableLevelResponse deleteTableLevelWithOptions(const Models::DeleteTableLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a table level. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request DeleteTableLevelRequest
       * @return DeleteTableLevelResponse
       */
      Models::DeleteTableLevelResponse deleteTableLevel(const Models::DeleteTableLevelRequest &request);

      /**
       * @summary Deletes a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request DeleteTableThemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableThemeResponse
       */
      Models::DeleteTableThemeResponse deleteTableThemeWithOptions(const Models::DeleteTableThemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request DeleteTableThemeRequest
       * @return DeleteTableThemeResponse
       */
      Models::DeleteTableThemeResponse deleteTableTheme(const Models::DeleteTableThemeRequest &request);

      /**
       * @summary Deploys a real-time synchronization task.
       *
       * @param request DeployDISyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployDISyncTaskResponse
       */
      Models::DeployDISyncTaskResponse deployDISyncTaskWithOptions(const Models::DeployDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys a real-time synchronization task.
       *
       * @param request DeployDISyncTaskRequest
       * @return DeployDISyncTaskResponse
       */
      Models::DeployDISyncTaskResponse deployDISyncTask(const Models::DeployDISyncTaskRequest &request);

      /**
       * @summary Deploys a file to the production environment.
       *
       * @param request DeployFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployFileResponse
       */
      Models::DeployFileResponse deployFileWithOptions(const Models::DeployFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys a file to the production environment.
       *
       * @param request DeployFileRequest
       * @return DeployFileResponse
       */
      Models::DeployFileResponse deployFile(const Models::DeployFileRequest &request);

      /**
       * @summary Masks data.
       *
       * @param request DesensitizeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DesensitizeDataResponse
       */
      Models::DesensitizeDataResponse desensitizeDataWithOptions(const Models::DesensitizeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Masks data.
       *
       * @param request DesensitizeDataRequest
       * @return DesensitizeDataResponse
       */
      Models::DesensitizeDataResponse desensitizeData(const Models::DesensitizeDataRequest &request);

      /**
       * @summary Adds or modifies a data masking rule.
       *
       * @param tmpReq DsgDesensPlanAddOrUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgDesensPlanAddOrUpdateResponse
       */
      Models::DsgDesensPlanAddOrUpdateResponse dsgDesensPlanAddOrUpdateWithOptions(const Models::DsgDesensPlanAddOrUpdateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies a data masking rule.
       *
       * @param request DsgDesensPlanAddOrUpdateRequest
       * @return DsgDesensPlanAddOrUpdateResponse
       */
      Models::DsgDesensPlanAddOrUpdateResponse dsgDesensPlanAddOrUpdate(const Models::DsgDesensPlanAddOrUpdateRequest &request);

      /**
       * @summary Deletes a data masking rule created in Data Security Guard.
       *
       * @param tmpReq DsgDesensPlanDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgDesensPlanDeleteResponse
       */
      Models::DsgDesensPlanDeleteResponse dsgDesensPlanDeleteWithOptions(const Models::DsgDesensPlanDeleteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data masking rule created in Data Security Guard.
       *
       * @param request DsgDesensPlanDeleteRequest
       * @return DsgDesensPlanDeleteResponse
       */
      Models::DsgDesensPlanDeleteResponse dsgDesensPlanDelete(const Models::DsgDesensPlanDeleteRequest &request);

      /**
       * @summary Queries a list of data masking rules.
       *
       * @param request DsgDesensPlanQueryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgDesensPlanQueryListResponse
       */
      Models::DsgDesensPlanQueryListResponse dsgDesensPlanQueryListWithOptions(const Models::DsgDesensPlanQueryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data masking rules.
       *
       * @param request DsgDesensPlanQueryListRequest
       * @return DsgDesensPlanQueryListResponse
       */
      Models::DsgDesensPlanQueryListResponse dsgDesensPlanQueryList(const Models::DsgDesensPlanQueryListRequest &request);

      /**
       * @summary Modifies the status of a data masking rule.
       *
       * @param tmpReq DsgDesensPlanUpdateStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgDesensPlanUpdateStatusResponse
       */
      Models::DsgDesensPlanUpdateStatusResponse dsgDesensPlanUpdateStatusWithOptions(const Models::DsgDesensPlanUpdateStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of a data masking rule.
       *
       * @param request DsgDesensPlanUpdateStatusRequest
       * @return DsgDesensPlanUpdateStatusResponse
       */
      Models::DsgDesensPlanUpdateStatusResponse dsgDesensPlanUpdateStatus(const Models::DsgDesensPlanUpdateStatusRequest &request);

      /**
       * @summary Queries a list of compute engines of different types in the current tenant.
       *
       * @param request DsgPlatformQueryProjectsAndSchemaFromMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgPlatformQueryProjectsAndSchemaFromMetaResponse
       */
      Models::DsgPlatformQueryProjectsAndSchemaFromMetaResponse dsgPlatformQueryProjectsAndSchemaFromMetaWithOptions(const Models::DsgPlatformQueryProjectsAndSchemaFromMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of compute engines of different types in the current tenant.
       *
       * @param request DsgPlatformQueryProjectsAndSchemaFromMetaRequest
       * @return DsgPlatformQueryProjectsAndSchemaFromMetaResponse
       */
      Models::DsgPlatformQueryProjectsAndSchemaFromMetaResponse dsgPlatformQueryProjectsAndSchemaFromMeta(const Models::DsgPlatformQueryProjectsAndSchemaFromMetaRequest &request);

      /**
       * @summary Queries a list of available sensitive field type templates and the data masking rules supported by the templates. You can refer to the response parameters of this operation to configure a data masking rule.
       *
       * @param request DsgQueryDefaultTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgQueryDefaultTemplatesResponse
       */
      Models::DsgQueryDefaultTemplatesResponse dsgQueryDefaultTemplatesWithOptions(const Models::DsgQueryDefaultTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available sensitive field type templates and the data masking rules supported by the templates. You can refer to the response parameters of this operation to configure a data masking rule.
       *
       * @param request DsgQueryDefaultTemplatesRequest
       * @return DsgQueryDefaultTemplatesResponse
       */
      Models::DsgQueryDefaultTemplatesResponse dsgQueryDefaultTemplates(const Models::DsgQueryDefaultTemplatesRequest &request);

      /**
       * @summary Queries the identification results of sensitive data.
       *
       * @description The query capability of the API operation is similar to the query feature in Data Security Guard in the DataWorks console. The API operation can be used to query the identification results of sensitive data of a tenant based on the association with the tenant ID.
       * *   You can search for a specific identification result based on filter conditions such as data source type and workspace.
       * *   You can sort the identification results of sensitive data of a tenant based on the values of a field in ascending or descending order.
       * *   This operation supports paged query.
       *
       * @param request DsgQuerySensResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgQuerySensResultResponse
       */
      Models::DsgQuerySensResultResponse dsgQuerySensResultWithOptions(const Models::DsgQuerySensResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the identification results of sensitive data.
       *
       * @description The query capability of the API operation is similar to the query feature in Data Security Guard in the DataWorks console. The API operation can be used to query the identification results of sensitive data of a tenant based on the association with the tenant ID.
       * *   You can search for a specific identification result based on filter conditions such as data source type and workspace.
       * *   You can sort the identification results of sensitive data of a tenant based on the values of a field in ascending or descending order.
       * *   This operation supports paged query.
       *
       * @param request DsgQuerySensResultRequest
       * @return DsgQuerySensResultResponse
       */
      Models::DsgQuerySensResultResponse dsgQuerySensResult(const Models::DsgQuerySensResultRequest &request);

      /**
       * @summary Starts a sensitive data identification task in Data Security Guard.
       *
       * @param tmpReq DsgRunSensIdentifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgRunSensIdentifyResponse
       */
      Models::DsgRunSensIdentifyResponse dsgRunSensIdentifyWithOptions(const Models::DsgRunSensIdentifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a sensitive data identification task in Data Security Guard.
       *
       * @param request DsgRunSensIdentifyRequest
       * @return DsgRunSensIdentifyResponse
       */
      Models::DsgRunSensIdentifyResponse dsgRunSensIdentify(const Models::DsgRunSensIdentifyRequest &request);

      /**
       * @summary Adds or modifies a level-2 data masking scenario.
       *
       * @param tmpReq DsgSceneAddOrUpdateSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgSceneAddOrUpdateSceneResponse
       */
      Models::DsgSceneAddOrUpdateSceneResponse dsgSceneAddOrUpdateSceneWithOptions(const Models::DsgSceneAddOrUpdateSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies a level-2 data masking scenario.
       *
       * @param request DsgSceneAddOrUpdateSceneRequest
       * @return DsgSceneAddOrUpdateSceneResponse
       */
      Models::DsgSceneAddOrUpdateSceneResponse dsgSceneAddOrUpdateScene(const Models::DsgSceneAddOrUpdateSceneRequest &request);

      /**
       * @summary Queries a list of data masking scenarios.
       *
       * @param request DsgSceneQuerySceneListByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgSceneQuerySceneListByNameResponse
       */
      Models::DsgSceneQuerySceneListByNameResponse dsgSceneQuerySceneListByNameWithOptions(const Models::DsgSceneQuerySceneListByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data masking scenarios.
       *
       * @param request DsgSceneQuerySceneListByNameRequest
       * @return DsgSceneQuerySceneListByNameResponse
       */
      Models::DsgSceneQuerySceneListByNameResponse dsgSceneQuerySceneListByName(const Models::DsgSceneQuerySceneListByNameRequest &request);

      /**
       * @summary Deletes a level-2 data masking scenario created in Data Security Guard.
       *
       * @param tmpReq DsgScenedDeleteSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgScenedDeleteSceneResponse
       */
      Models::DsgScenedDeleteSceneResponse dsgScenedDeleteSceneWithOptions(const Models::DsgScenedDeleteSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a level-2 data masking scenario created in Data Security Guard.
       *
       * @param request DsgScenedDeleteSceneRequest
       * @return DsgScenedDeleteSceneResponse
       */
      Models::DsgScenedDeleteSceneResponse dsgScenedDeleteScene(const Models::DsgScenedDeleteSceneRequest &request);

      /**
       * @summary Stops a sensitive data identification task.
       *
       * @param request DsgStopSensIdentifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgStopSensIdentifyResponse
       */
      Models::DsgStopSensIdentifyResponse dsgStopSensIdentifyWithOptions(const Models::DsgStopSensIdentifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a sensitive data identification task.
       *
       * @param request DsgStopSensIdentifyRequest
       * @return DsgStopSensIdentifyResponse
       */
      Models::DsgStopSensIdentifyResponse dsgStopSensIdentify(const Models::DsgStopSensIdentifyRequest &request);

      /**
       * @summary Adds or modifies a user group.
       *
       * @param tmpReq DsgUserGroupAddOrUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgUserGroupAddOrUpdateResponse
       */
      Models::DsgUserGroupAddOrUpdateResponse dsgUserGroupAddOrUpdateWithOptions(const Models::DsgUserGroupAddOrUpdateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies a user group.
       *
       * @param request DsgUserGroupAddOrUpdateRequest
       * @return DsgUserGroupAddOrUpdateResponse
       */
      Models::DsgUserGroupAddOrUpdateResponse dsgUserGroupAddOrUpdate(const Models::DsgUserGroupAddOrUpdateRequest &request);

      /**
       * @summary Deletes a user group configured in Data Security Guard.
       *
       * @param tmpReq DsgUserGroupDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgUserGroupDeleteResponse
       */
      Models::DsgUserGroupDeleteResponse dsgUserGroupDeleteWithOptions(const Models::DsgUserGroupDeleteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user group configured in Data Security Guard.
       *
       * @param request DsgUserGroupDeleteRequest
       * @return DsgUserGroupDeleteResponse
       */
      Models::DsgUserGroupDeleteResponse dsgUserGroupDelete(const Models::DsgUserGroupDeleteRequest &request);

      /**
       * @summary Queries a list of MaxCompute roles that can be selected by the members of a user group when the user group is created or modified by the tenant in Data Security Guard.
       *
       * @param request DsgUserGroupGetOdpsRoleGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgUserGroupGetOdpsRoleGroupsResponse
       */
      Models::DsgUserGroupGetOdpsRoleGroupsResponse dsgUserGroupGetOdpsRoleGroupsWithOptions(const Models::DsgUserGroupGetOdpsRoleGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of MaxCompute roles that can be selected by the members of a user group when the user group is created or modified by the tenant in Data Security Guard.
       *
       * @param request DsgUserGroupGetOdpsRoleGroupsRequest
       * @return DsgUserGroupGetOdpsRoleGroupsResponse
       */
      Models::DsgUserGroupGetOdpsRoleGroupsResponse dsgUserGroupGetOdpsRoleGroups(const Models::DsgUserGroupGetOdpsRoleGroupsRequest &request);

      /**
       * @summary Queries a list of user groups in Data Security Guard.
       *
       * @param request DsgUserGroupQueryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgUserGroupQueryListResponse
       */
      Models::DsgUserGroupQueryListResponse dsgUserGroupQueryListWithOptions(const Models::DsgUserGroupQueryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of user groups in Data Security Guard.
       *
       * @param request DsgUserGroupQueryListRequest
       * @return DsgUserGroupQueryListResponse
       */
      Models::DsgUserGroupQueryListResponse dsgUserGroupQueryList(const Models::DsgUserGroupQueryListRequest &request);

      /**
       * @summary Queries a list of users or roles of the current tenant.
       *
       * @param request DsgUserGroupQueryUserListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgUserGroupQueryUserListResponse
       */
      Models::DsgUserGroupQueryUserListResponse dsgUserGroupQueryUserListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of users or roles of the current tenant.
       *
       * @return DsgUserGroupQueryUserListResponse
       */
      Models::DsgUserGroupQueryUserListResponse dsgUserGroupQueryUserList();

      /**
       * @summary Adds or modifies a data masking whitelist.
       *
       * @param tmpReq DsgWhiteListAddOrUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgWhiteListAddOrUpdateResponse
       */
      Models::DsgWhiteListAddOrUpdateResponse dsgWhiteListAddOrUpdateWithOptions(const Models::DsgWhiteListAddOrUpdateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies a data masking whitelist.
       *
       * @param request DsgWhiteListAddOrUpdateRequest
       * @return DsgWhiteListAddOrUpdateResponse
       */
      Models::DsgWhiteListAddOrUpdateResponse dsgWhiteListAddOrUpdate(const Models::DsgWhiteListAddOrUpdateRequest &request);

      /**
       * @summary Deletes a data masking whitelist configured in Data Security Guard.
       *
       * @param tmpReq DsgWhiteListDeleteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgWhiteListDeleteListResponse
       */
      Models::DsgWhiteListDeleteListResponse dsgWhiteListDeleteListWithOptions(const Models::DsgWhiteListDeleteListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data masking whitelist configured in Data Security Guard.
       *
       * @param request DsgWhiteListDeleteListRequest
       * @return DsgWhiteListDeleteListResponse
       */
      Models::DsgWhiteListDeleteListResponse dsgWhiteListDeleteList(const Models::DsgWhiteListDeleteListRequest &request);

      /**
       * @summary Queries a data masking whitelist.
       *
       * @param request DsgWhiteListQueryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DsgWhiteListQueryListResponse
       */
      Models::DsgWhiteListQueryListResponse dsgWhiteListQueryListWithOptions(const Models::DsgWhiteListQueryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a data masking whitelist.
       *
       * @param request DsgWhiteListQueryListRequest
       * @return DsgWhiteListQueryListResponse
       */
      Models::DsgWhiteListQueryListResponse dsgWhiteListQueryList(const Models::DsgWhiteListQueryListRequest &request);

      /**
       * @summary Edits a sensitive field that is defined based on the category and sensitivity level of data in Data Security Guard.
       *
       * @param request EditRecognizeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditRecognizeRuleResponse
       */
      Models::EditRecognizeRuleResponse editRecognizeRuleWithOptions(const Models::EditRecognizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a sensitive field that is defined based on the category and sensitivity level of data in Data Security Guard.
       *
       * @param request EditRecognizeRuleRequest
       * @return EditRecognizeRuleResponse
       */
      Models::EditRecognizeRuleResponse editRecognizeRule(const Models::EditRecognizeRuleRequest &request);

      /**
       * @param request EstablishRelationTableToBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EstablishRelationTableToBusinessResponse
       */
      Models::EstablishRelationTableToBusinessResponse establishRelationTableToBusinessWithOptions(const Models::EstablishRelationTableToBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EstablishRelationTableToBusinessRequest
       * @return EstablishRelationTableToBusinessResponse
       */
      Models::EstablishRelationTableToBusinessResponse establishRelationTableToBusiness(const Models::EstablishRelationTableToBusinessRequest &request);

      /**
       * @summary Exports a list of data sources.
       *
       * @param request ExportDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportDataSourcesResponse
       */
      Models::ExportDataSourcesResponse exportDataSourcesWithOptions(const Models::ExportDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a list of data sources.
       *
       * @param request ExportDataSourcesRequest
       * @return ExportDataSourcesResponse
       */
      Models::ExportDataSourcesResponse exportDataSources(const Models::ExportDataSourcesRequest &request);

      /**
       * @summary Generates an ID for an asynchronous thread that is used to create a synchronization task in Data Integration.
       *
       * @description DataWorks allows you to use the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to directly create a batch synchronization task in Data Integration. To create a real-time synchronization task or another type of synchronization task, you must first call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) operation to generate the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can use the parameters as request parameters of [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) and call the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to create a real-time synchronization task or another type of synchronization task. DataWorks allows you to create real-time synchronization tasks and other types of synchronization tasks in Data Integration only in asynchronous mode.
       *
       * @param request GenerateDISyncTaskConfigForCreatingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDISyncTaskConfigForCreatingResponse
       */
      Models::GenerateDISyncTaskConfigForCreatingResponse generateDISyncTaskConfigForCreatingWithOptions(const Models::GenerateDISyncTaskConfigForCreatingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an ID for an asynchronous thread that is used to create a synchronization task in Data Integration.
       *
       * @description DataWorks allows you to use the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to directly create a batch synchronization task in Data Integration. To create a real-time synchronization task or another type of synchronization task, you must first call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) operation to generate the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can use the parameters as request parameters of [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) and call the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to create a real-time synchronization task or another type of synchronization task. DataWorks allows you to create real-time synchronization tasks and other types of synchronization tasks in Data Integration only in asynchronous mode.
       *
       * @param request GenerateDISyncTaskConfigForCreatingRequest
       * @return GenerateDISyncTaskConfigForCreatingResponse
       */
      Models::GenerateDISyncTaskConfigForCreatingResponse generateDISyncTaskConfigForCreating(const Models::GenerateDISyncTaskConfigForCreatingRequest &request);

      /**
       * @summary Generates the JSON for an asynchronous thread that is used to update a real-time synchronization task in Data Integration.
       *
       * @description DataWorks allows you to use only the [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to update a batch synchronization task in Data Integration. To update a real-time synchronization task, you must first call the GenerateDISyncTaskConfigForUpdating operation to generate the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can call the UpdateDISyncTask operation and use the parameters as request parameters to update a real-time synchronization task in Data Integration. DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
       *
       * @param request GenerateDISyncTaskConfigForUpdatingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDISyncTaskConfigForUpdatingResponse
       */
      Models::GenerateDISyncTaskConfigForUpdatingResponse generateDISyncTaskConfigForUpdatingWithOptions(const Models::GenerateDISyncTaskConfigForUpdatingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates the JSON for an asynchronous thread that is used to update a real-time synchronization task in Data Integration.
       *
       * @description DataWorks allows you to use only the [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to update a batch synchronization task in Data Integration. To update a real-time synchronization task, you must first call the GenerateDISyncTaskConfigForUpdating operation to generate the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can call the UpdateDISyncTask operation and use the parameters as request parameters to update a real-time synchronization task in Data Integration. DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
       *
       * @param request GenerateDISyncTaskConfigForUpdatingRequest
       * @return GenerateDISyncTaskConfigForUpdatingResponse
       */
      Models::GenerateDISyncTaskConfigForUpdatingResponse generateDISyncTaskConfigForUpdating(const Models::GenerateDISyncTaskConfigForUpdatingRequest &request);

      /**
       * @summary Queries alert information based on the alert ID that is specified by the AlertId parameter.
       *
       * @param request GetAlertMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertMessageResponse
       */
      Models::GetAlertMessageResponse getAlertMessageWithOptions(const Models::GetAlertMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert information based on the alert ID that is specified by the AlertId parameter.
       *
       * @param request GetAlertMessageRequest
       * @return GetAlertMessageResponse
       */
      Models::GetAlertMessageResponse getAlertMessage(const Models::GetAlertMessageRequest &request);

      /**
       * @summary Queries the information about a baseline based on its ID.
       *
       * @param request GetBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBaselineResponse
       */
      Models::GetBaselineResponse getBaselineWithOptions(const Models::GetBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a baseline based on its ID.
       *
       * @param request GetBaselineRequest
       * @return GetBaselineResponse
       */
      Models::GetBaselineResponse getBaseline(const Models::GetBaselineRequest &request);

      /**
       * @summary Queries the configurations of a baseline.
       *
       * @param request GetBaselineConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBaselineConfigResponse
       */
      Models::GetBaselineConfigResponse getBaselineConfigWithOptions(const Models::GetBaselineConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a baseline.
       *
       * @param request GetBaselineConfigRequest
       * @return GetBaselineConfigResponse
       */
      Models::GetBaselineConfigResponse getBaselineConfig(const Models::GetBaselineConfigRequest &request);

      /**
       * @summary The information about the events that are associated with the instance.
       *
       * @param request GetBaselineKeyPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBaselineKeyPathResponse
       */
      Models::GetBaselineKeyPathResponse getBaselineKeyPathWithOptions(const Models::GetBaselineKeyPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The information about the events that are associated with the instance.
       *
       * @param request GetBaselineKeyPathRequest
       * @return GetBaselineKeyPathResponse
       */
      Models::GetBaselineKeyPathResponse getBaselineKeyPath(const Models::GetBaselineKeyPathRequest &request);

      /**
       * @summary Queries the details of a baseline instance.
       *
       * @param request GetBaselineStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBaselineStatusResponse
       */
      Models::GetBaselineStatusResponse getBaselineStatusWithOptions(const Models::GetBaselineStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a baseline instance.
       *
       * @param request GetBaselineStatusRequest
       * @return GetBaselineStatusResponse
       */
      Models::GetBaselineStatusResponse getBaselineStatus(const Models::GetBaselineStatusRequest &request);

      /**
       * @summary Queries the information about a workflow.
       *
       * @param request GetBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBusinessResponse
       */
      Models::GetBusinessResponse getBusinessWithOptions(const Models::GetBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a workflow.
       *
       * @param request GetBusinessRequest
       * @return GetBusinessResponse
       */
      Models::GetBusinessResponse getBusiness(const Models::GetBusinessRequest &request);

      /**
       * @summary Queries the status of a table creation, update, or deletion task.
       *
       * @param request GetDDLJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDDLJobStatusResponse
       */
      Models::GetDDLJobStatusResponse getDDLJobStatusWithOptions(const Models::GetDDLJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a table creation, update, or deletion task.
       *
       * @param request GetDDLJobStatusRequest
       * @return GetDDLJobStatusResponse
       */
      Models::GetDDLJobStatusResponse getDDLJobStatus(const Models::GetDDLJobStatusRequest &request);

      /**
       * @summary Queries the details of an alert rule configured for a new-version synchronization task. Only the following types of tasks are supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
       *
       * @param request GetDIAlarmRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDIAlarmRuleResponse
       */
      Models::GetDIAlarmRuleResponse getDIAlarmRuleWithOptions(const Models::GetDIAlarmRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an alert rule configured for a new-version synchronization task. Only the following types of tasks are supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
       *
       * @param request GetDIAlarmRuleRequest
       * @return GetDIAlarmRuleResponse
       */
      Models::GetDIAlarmRuleResponse getDIAlarmRule(const Models::GetDIAlarmRuleRequest &request);

      /**
       * @summary Queries the information about a new-version synchronization task created in Data Integration. The following types of synchronization tasks are supported: real-time synchronization of all data in a MySQL database to Hologres.
       *
       * @param request GetDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDIJobResponse
       */
      Models::GetDIJobResponse getDIJobWithOptions(const Models::GetDIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a new-version synchronization task created in Data Integration. The following types of synchronization tasks are supported: real-time synchronization of all data in a MySQL database to Hologres.
       *
       * @param request GetDIJobRequest
       * @return GetDIJobResponse
       */
      Models::GetDIJobResponse getDIJob(const Models::GetDIJobRequest &request);

      /**
       * @summary Queries the status of a real-time synchronization task or a data synchronization solution.
       *
       * @param request GetDISyncInstanceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDISyncInstanceInfoResponse
       */
      Models::GetDISyncInstanceInfoResponse getDISyncInstanceInfoWithOptions(const Models::GetDISyncInstanceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a real-time synchronization task or a data synchronization solution.
       *
       * @param request GetDISyncInstanceInfoRequest
       * @return GetDISyncInstanceInfoResponse
       */
      Models::GetDISyncInstanceInfoResponse getDISyncInstanceInfo(const Models::GetDISyncInstanceInfoRequest &request);

      /**
       * @summary Queries the details of a real-time synchronization task or a data synchronization solution.
       *
       * @param request GetDISyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDISyncTaskResponse
       */
      Models::GetDISyncTaskResponse getDISyncTaskWithOptions(const Models::GetDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a real-time synchronization task or a data synchronization solution.
       *
       * @param request GetDISyncTaskRequest
       * @return GetDISyncTaskResponse
       */
      Models::GetDISyncTaskResponse getDISyncTask(const Models::GetDISyncTaskRequest &request);

      /**
       * @summary Queries the information about a directed acyclic graph (DAG). You can call the GetDag operation to query the information about the DAG for a manually triggered workflow, a manually triggered node, or a data backfill instance. However, you cannot query the information about the DAG for an auto triggered node or an auto triggered workflow.
       *
       * @description Supported DAG types:
       * *   MANUAL: DAG for a manually triggered workflow
       * *   SMOKE_TEST: DAG for a smoke testing workflow
       * *   SUPPLY_DATA: DAG for a data backfill instance
       * *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
       * Supported DAG states:
       * *   CREATED
       * *   RUNNING
       * *   FAILURE
       * *   SUCCESS
       *
       * @param request GetDagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDagResponse
       */
      Models::GetDagResponse getDagWithOptions(const Models::GetDagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a directed acyclic graph (DAG). You can call the GetDag operation to query the information about the DAG for a manually triggered workflow, a manually triggered node, or a data backfill instance. However, you cannot query the information about the DAG for an auto triggered node or an auto triggered workflow.
       *
       * @description Supported DAG types:
       * *   MANUAL: DAG for a manually triggered workflow
       * *   SMOKE_TEST: DAG for a smoke testing workflow
       * *   SUPPLY_DATA: DAG for a data backfill instance
       * *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
       * Supported DAG states:
       * *   CREATED
       * *   RUNNING
       * *   FAILURE
       * *   SUCCESS
       *
       * @param request GetDagRequest
       * @return GetDagResponse
       */
      Models::GetDagResponse getDag(const Models::GetDagRequest &request);

      /**
       * @summary Queries the details of a DataService Studio API in the development state.
       *
       * @param request GetDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiResponse
       */
      Models::GetDataServiceApiResponse getDataServiceApiWithOptions(const Models::GetDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a DataService Studio API in the development state.
       *
       * @param request GetDataServiceApiRequest
       * @return GetDataServiceApiResponse
       */
      Models::GetDataServiceApiResponse getDataServiceApi(const Models::GetDataServiceApiRequest &request);

      /**
       * @summary Queries the test results of an API in DataService Studio.
       *
       * @param request GetDataServiceApiTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApiTestResponse
       */
      Models::GetDataServiceApiTestResponse getDataServiceApiTestWithOptions(const Models::GetDataServiceApiTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the test results of an API in DataService Studio.
       *
       * @param request GetDataServiceApiTestRequest
       * @return GetDataServiceApiTestResponse
       */
      Models::GetDataServiceApiTestResponse getDataServiceApiTest(const Models::GetDataServiceApiTestRequest &request);

      /**
       * @summary Queries the details of an application.
       *
       * @param request GetDataServiceApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceApplicationResponse
       */
      Models::GetDataServiceApplicationResponse getDataServiceApplicationWithOptions(const Models::GetDataServiceApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an application.
       *
       * @param request GetDataServiceApplicationRequest
       * @return GetDataServiceApplicationResponse
       */
      Models::GetDataServiceApplicationResponse getDataServiceApplication(const Models::GetDataServiceApplicationRequest &request);

      /**
       * @summary Queries a folder.
       *
       * @param request GetDataServiceFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceFolderResponse
       */
      Models::GetDataServiceFolderResponse getDataServiceFolderWithOptions(const Models::GetDataServiceFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a folder.
       *
       * @param request GetDataServiceFolderRequest
       * @return GetDataServiceFolderResponse
       */
      Models::GetDataServiceFolderResponse getDataServiceFolder(const Models::GetDataServiceFolderRequest &request);

      /**
       * @summary Queries a business process.
       *
       * @param request GetDataServiceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServiceGroupResponse
       */
      Models::GetDataServiceGroupResponse getDataServiceGroupWithOptions(const Models::GetDataServiceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a business process.
       *
       * @param request GetDataServiceGroupRequest
       * @return GetDataServiceGroupResponse
       */
      Models::GetDataServiceGroupResponse getDataServiceGroup(const Models::GetDataServiceGroupRequest &request);

      /**
       * @summary Queries the information about a DataService Studio API in the published state.
       *
       * @param request GetDataServicePublishedApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataServicePublishedApiResponse
       */
      Models::GetDataServicePublishedApiResponse getDataServicePublishedApiWithOptions(const Models::GetDataServicePublishedApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a DataService Studio API in the published state.
       *
       * @param request GetDataServicePublishedApiRequest
       * @return GetDataServicePublishedApiResponse
       */
      Models::GetDataServicePublishedApiResponse getDataServicePublishedApi(const Models::GetDataServicePublishedApiRequest &request);

      /**
       * @summary Queries the metadata of a specified data source.
       *
       * @param request GetDataSourceMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceMetaResponse
       */
      Models::GetDataSourceMetaResponse getDataSourceMetaWithOptions(const Models::GetDataSourceMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of a specified data source.
       *
       * @param request GetDataSourceMetaRequest
       * @return GetDataSourceMetaResponse
       */
      Models::GetDataSourceMetaResponse getDataSourceMeta(const Models::GetDataSourceMetaRequest &request);

      /**
       * @summary Queries the information about a deployment package.
       *
       * @param request GetDeploymentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentResponse
       */
      Models::GetDeploymentResponse getDeploymentWithOptions(const Models::GetDeploymentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a deployment package.
       *
       * @param request GetDeploymentRequest
       * @return GetDeploymentResponse
       */
      Models::GetDeploymentResponse getDeployment(const Models::GetDeploymentRequest &request);

      /**
       * @summary Queries the details of an extension.
       *
       * @param request GetExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExtensionResponse
       */
      Models::GetExtensionResponse getExtensionWithOptions(const Models::GetExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an extension.
       *
       * @param request GetExtensionRequest
       * @return GetExtensionResponse
       */
      Models::GetExtensionResponse getExtension(const Models::GetExtensionRequest &request);

      /**
       * @summary Queries the information about a file.
       *
       * @param request GetFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileResponse
       */
      Models::GetFileResponse getFileWithOptions(const Models::GetFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a file.
       *
       * @param request GetFileRequest
       * @return GetFileResponse
       */
      Models::GetFileResponse getFile(const Models::GetFileRequest &request);

      /**
       * @summary Queries the distribution of node types.
       *
       * @param request GetFileTypeStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileTypeStatisticResponse
       */
      Models::GetFileTypeStatisticResponse getFileTypeStatisticWithOptions(const Models::GetFileTypeStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution of node types.
       *
       * @param request GetFileTypeStatisticRequest
       * @return GetFileTypeStatisticResponse
       */
      Models::GetFileTypeStatisticResponse getFileTypeStatistic(const Models::GetFileTypeStatisticRequest &request);

      /**
       * @summary Queries the information about a file version.
       *
       * @param request GetFileVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileVersionResponse
       */
      Models::GetFileVersionResponse getFileVersionWithOptions(const Models::GetFileVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a file version.
       *
       * @param request GetFileVersionRequest
       * @return GetFileVersionResponse
       */
      Models::GetFileVersionResponse getFileVersion(const Models::GetFileVersionRequest &request);

      /**
       * @summary Queries the information about a folder.
       *
       * @param request GetFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolderWithOptions(const Models::GetFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a folder.
       *
       * @param request GetFolderRequest
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolder(const Models::GetFolderRequest &request);

      /**
       * @summary Queries the data snapshot of an extension point based on the ID of a message in DataWorks OpenEvent when the related extension point event is triggered.
       *
       * @param request GetIDEEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIDEEventDetailResponse
       */
      Models::GetIDEEventDetailResponse getIDEEventDetailWithOptions(const Models::GetIDEEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data snapshot of an extension point based on the ID of a message in DataWorks OpenEvent when the related extension point event is triggered.
       *
       * @param request GetIDEEventDetailRequest
       * @return GetIDEEventDetailResponse
       */
      Models::GetIDEEventDetailResponse getIDEEventDetail(const Models::GetIDEEventDetailRequest &request);

      /**
       * @summary Queries the information about an instance.
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @deprecated OpenAPI GetInstanceConsumeTimeRank is deprecated
       *
       * @summary Queries the ranking of the running durations of instances.
       *
       * @param request GetInstanceConsumeTimeRankRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceConsumeTimeRankResponse
       */
      Models::GetInstanceConsumeTimeRankResponse getInstanceConsumeTimeRankWithOptions(const Models::GetInstanceConsumeTimeRankRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetInstanceConsumeTimeRank is deprecated
       *
       * @summary Queries the ranking of the running durations of instances.
       *
       * @param request GetInstanceConsumeTimeRankRequest
       * @return GetInstanceConsumeTimeRankResponse
       */
      Models::GetInstanceConsumeTimeRankResponse getInstanceConsumeTimeRank(const Models::GetInstanceConsumeTimeRankRequest &request);

      /**
       * @deprecated OpenAPI GetInstanceCountTrend is deprecated
       *
       * @summary Queries the quantity trend of auto triggered instances.
       *
       * @param request GetInstanceCountTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceCountTrendResponse
       */
      Models::GetInstanceCountTrendResponse getInstanceCountTrendWithOptions(const Models::GetInstanceCountTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetInstanceCountTrend is deprecated
       *
       * @summary Queries the quantity trend of auto triggered instances.
       *
       * @param request GetInstanceCountTrendRequest
       * @return GetInstanceCountTrendResponse
       */
      Models::GetInstanceCountTrendResponse getInstanceCountTrend(const Models::GetInstanceCountTrendRequest &request);

      /**
       * @deprecated OpenAPI GetInstanceErrorRank is deprecated
       *
       * @summary Queries the ranking of nodes on which errors occur within the last month.
       *
       * @param request GetInstanceErrorRankRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceErrorRankResponse
       */
      Models::GetInstanceErrorRankResponse getInstanceErrorRankWithOptions(const Models::GetInstanceErrorRankRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetInstanceErrorRank is deprecated
       *
       * @summary Queries the ranking of nodes on which errors occur within the last month.
       *
       * @param request GetInstanceErrorRankRequest
       * @return GetInstanceErrorRankResponse
       */
      Models::GetInstanceErrorRankResponse getInstanceErrorRank(const Models::GetInstanceErrorRankRequest &request);

      /**
       * @summary Queries the logs of an instance.
       *
       * @description You may not obtain the instance logs that were generated more than seven days ago.
       *
       * @param request GetInstanceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceLogResponse
       */
      Models::GetInstanceLogResponse getInstanceLogWithOptions(const Models::GetInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of an instance.
       *
       * @description You may not obtain the instance logs that were generated more than seven days ago.
       *
       * @param request GetInstanceLogRequest
       * @return GetInstanceLogResponse
       */
      Models::GetInstanceLogResponse getInstanceLog(const Models::GetInstanceLogRequest &request);

      /**
       * @deprecated OpenAPI GetInstanceStatusCount is deprecated
       *
       * @summary Queries the statistics of instances in different states.
       *
       * @param request GetInstanceStatusCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceStatusCountResponse
       */
      Models::GetInstanceStatusCountResponse getInstanceStatusCountWithOptions(const Models::GetInstanceStatusCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetInstanceStatusCount is deprecated
       *
       * @summary Queries the statistics of instances in different states.
       *
       * @param request GetInstanceStatusCountRequest
       * @return GetInstanceStatusCountResponse
       */
      Models::GetInstanceStatusCountResponse getInstanceStatusCount(const Models::GetInstanceStatusCountRequest &request);

      /**
       * @summary Queries the number of instances that are in each state.
       *
       * @param request GetInstanceStatusStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceStatusStatisticResponse
       */
      Models::GetInstanceStatusStatisticResponse getInstanceStatusStatisticWithOptions(const Models::GetInstanceStatusStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of instances that are in each state.
       *
       * @param request GetInstanceStatusStatisticRequest
       * @return GetInstanceStatusStatisticResponse
       */
      Models::GetInstanceStatusStatisticResponse getInstanceStatusStatistic(const Models::GetInstanceStatusStatisticRequest &request);

      /**
       * @deprecated OpenAPI GetManualDagInstances is deprecated
       *
       * @summary Queries the information about instances in a manually triggered workflow.
       *
       * @param request GetManualDagInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManualDagInstancesResponse
       */
      Models::GetManualDagInstancesResponse getManualDagInstancesWithOptions(const Models::GetManualDagInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetManualDagInstances is deprecated
       *
       * @summary Queries the information about instances in a manually triggered workflow.
       *
       * @param request GetManualDagInstancesRequest
       * @return GetManualDagInstancesResponse
       */
      Models::GetManualDagInstancesResponse getManualDagInstances(const Models::GetManualDagInstancesRequest &request);

      /**
       * @summary Queries the information about a category tree.
       *
       * @param request GetMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaCategoryResponse
       */
      Models::GetMetaCategoryResponse getMetaCategoryWithOptions(const Models::GetMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a category tree.
       *
       * @param request GetMetaCategoryRequest
       * @return GetMetaCategoryResponse
       */
      Models::GetMetaCategoryResponse getMetaCategory(const Models::GetMetaCategoryRequest &request);

      /**
       * @summary Queries the information about a collection.
       *
       * @param request GetMetaCollectionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaCollectionDetailResponse
       */
      Models::GetMetaCollectionDetailResponse getMetaCollectionDetailWithOptions(const Models::GetMetaCollectionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a collection.
       *
       * @param request GetMetaCollectionDetailRequest
       * @return GetMetaCollectionDetailResponse
       */
      Models::GetMetaCollectionDetailResponse getMetaCollectionDetail(const Models::GetMetaCollectionDetailRequest &request);

      /**
       * @summary Queries the lineage of a field in a metatable.
       *
       * @param request GetMetaColumnLineageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaColumnLineageResponse
       */
      Models::GetMetaColumnLineageResponse getMetaColumnLineageWithOptions(const Models::GetMetaColumnLineageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lineage of a field in a metatable.
       *
       * @param request GetMetaColumnLineageRequest
       * @return GetMetaColumnLineageResponse
       */
      Models::GetMetaColumnLineageResponse getMetaColumnLineage(const Models::GetMetaColumnLineageRequest &request);

      /**
       * @summary Queries the basic metadata information about a compute engine instance.
       *
       * @description The ID of the EMR cluster. This parameter is required only if you set the DataSourceType parameter to emr.
       * You can log on to the [EMR console](https://emr.console.aliyun.com/?spm=a2c4g.11186623.0.0.965cc5c2GeiHet#/cn-hangzhou) to obtain the ID of the EMR cluster.
       *
       * @param request GetMetaDBInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaDBInfoResponse
       */
      Models::GetMetaDBInfoResponse getMetaDBInfoWithOptions(const Models::GetMetaDBInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic metadata information about a compute engine instance.
       *
       * @description The ID of the EMR cluster. This parameter is required only if you set the DataSourceType parameter to emr.
       * You can log on to the [EMR console](https://emr.console.aliyun.com/?spm=a2c4g.11186623.0.0.965cc5c2GeiHet#/cn-hangzhou) to obtain the ID of the EMR cluster.
       *
       * @param request GetMetaDBInfoRequest
       * @return GetMetaDBInfoResponse
       */
      Models::GetMetaDBInfoResponse getMetaDBInfo(const Models::GetMetaDBInfoRequest &request);

      /**
       * @summary Queries metatables in a compute engine instance.
       *
       * @param request GetMetaDBTableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaDBTableListResponse
       */
      Models::GetMetaDBTableListResponse getMetaDBTableListWithOptions(const Models::GetMetaDBTableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metatables in a compute engine instance.
       *
       * @param request GetMetaDBTableListRequest
       * @return GetMetaDBTableListResponse
       */
      Models::GetMetaDBTableListResponse getMetaDBTableList(const Models::GetMetaDBTableListRequest &request);

      /**
       * @summary Queries the basic information about a metatable.
       *
       * @param request GetMetaTableBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableBasicInfoResponse
       */
      Models::GetMetaTableBasicInfoResponse getMetaTableBasicInfoWithOptions(const Models::GetMetaTableBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a metatable.
       *
       * @param request GetMetaTableBasicInfoRequest
       * @return GetMetaTableBasicInfoResponse
       */
      Models::GetMetaTableBasicInfoResponse getMetaTableBasicInfo(const Models::GetMetaTableBasicInfoRequest &request);

      /**
       * @summary Queries the change logs of a metatable.
       *
       * @description > This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request GetMetaTableChangeLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableChangeLogResponse
       */
      Models::GetMetaTableChangeLogResponse getMetaTableChangeLogWithOptions(const Models::GetMetaTableChangeLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the change logs of a metatable.
       *
       * @description > This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request GetMetaTableChangeLogRequest
       * @return GetMetaTableChangeLogResponse
       */
      Models::GetMetaTableChangeLogResponse getMetaTableChangeLog(const Models::GetMetaTableChangeLogRequest &request);

      /**
       * @summary Queries the field information of a metatable.
       *
       * @param request GetMetaTableColumnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableColumnResponse
       */
      Models::GetMetaTableColumnResponse getMetaTableColumnWithOptions(const Models::GetMetaTableColumnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the field information of a metatable.
       *
       * @param request GetMetaTableColumnRequest
       * @return GetMetaTableColumnResponse
       */
      Models::GetMetaTableColumnResponse getMetaTableColumn(const Models::GetMetaTableColumnRequest &request);

      /**
       * @summary Queries the complete information about a table, including information about fields in the table.
       *
       * @description You can call this operation to query only the information about a table of the E-MapReduce (EMR) compute engine type.
       *
       * @param request GetMetaTableFullInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableFullInfoResponse
       */
      Models::GetMetaTableFullInfoResponse getMetaTableFullInfoWithOptions(const Models::GetMetaTableFullInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the complete information about a table, including information about fields in the table.
       *
       * @description You can call this operation to query only the information about a table of the E-MapReduce (EMR) compute engine type.
       *
       * @param request GetMetaTableFullInfoRequest
       * @return GetMetaTableFullInfoResponse
       */
      Models::GetMetaTableFullInfoResponse getMetaTableFullInfo(const Models::GetMetaTableFullInfoRequest &request);

      /**
       * @summary Queries the instructions on how to use a table.
       *
       * @param request GetMetaTableIntroWikiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableIntroWikiResponse
       */
      Models::GetMetaTableIntroWikiResponse getMetaTableIntroWikiWithOptions(const Models::GetMetaTableIntroWikiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instructions on how to use a table.
       *
       * @param request GetMetaTableIntroWikiRequest
       * @return GetMetaTableIntroWikiResponse
       */
      Models::GetMetaTableIntroWikiResponse getMetaTableIntroWiki(const Models::GetMetaTableIntroWikiRequest &request);

      /**
       * @summary Queries the lineage of a metatable.
       *
       * @param request GetMetaTableLineageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableLineageResponse
       */
      Models::GetMetaTableLineageResponse getMetaTableLineageWithOptions(const Models::GetMetaTableLineageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the lineage of a metatable.
       *
       * @param request GetMetaTableLineageRequest
       * @return GetMetaTableLineageResponse
       */
      Models::GetMetaTableLineageResponse getMetaTableLineage(const Models::GetMetaTableLineageRequest &request);

      /**
       * @summary Queries metatables in a specified category.
       *
       * @param request GetMetaTableListByCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableListByCategoryResponse
       */
      Models::GetMetaTableListByCategoryResponse getMetaTableListByCategoryWithOptions(const Models::GetMetaTableListByCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metatables in a specified category.
       *
       * @param request GetMetaTableListByCategoryRequest
       * @return GetMetaTableListByCategoryResponse
       */
      Models::GetMetaTableListByCategoryResponse getMetaTableListByCategory(const Models::GetMetaTableListByCategoryRequest &request);

      /**
       * @summary Queries the output information of a metatable.
       *
       * @param request GetMetaTableOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableOutputResponse
       */
      Models::GetMetaTableOutputResponse getMetaTableOutputWithOptions(const Models::GetMetaTableOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the output information of a metatable.
       *
       * @param request GetMetaTableOutputRequest
       * @return GetMetaTableOutputResponse
       */
      Models::GetMetaTableOutputResponse getMetaTableOutput(const Models::GetMetaTableOutputRequest &request);

      /**
       * @summary Obtains a list of partitions in a metatable.
       *
       * @description You can call this operation to query only the partitions of a metatable in a MaxCompute or E-MapReduce (EMR) compute engine. If you query partitions of a metatable in an EMR compute engine, only DataLake clusters that use Data Lake Formation (DLF) to manage metadata and Hadoop clusters whose cluster version is earlier than 3.41.0 or 5.7.0 are supported.
       *
       * @param tmpReq GetMetaTablePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTablePartitionResponse
       */
      Models::GetMetaTablePartitionResponse getMetaTablePartitionWithOptions(const Models::GetMetaTablePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of partitions in a metatable.
       *
       * @description You can call this operation to query only the partitions of a metatable in a MaxCompute or E-MapReduce (EMR) compute engine. If you query partitions of a metatable in an EMR compute engine, only DataLake clusters that use Data Lake Formation (DLF) to manage metadata and Hadoop clusters whose cluster version is earlier than 3.41.0 or 5.7.0 are supported.
       *
       * @param request GetMetaTablePartitionRequest
       * @return GetMetaTablePartitionResponse
       */
      Models::GetMetaTablePartitionResponse getMetaTablePartition(const Models::GetMetaTablePartitionRequest &request);

      /**
       * @summary Queries the output tasks of a metatable.
       *
       * @param request GetMetaTableProducingTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableProducingTasksResponse
       */
      Models::GetMetaTableProducingTasksResponse getMetaTableProducingTasksWithOptions(const Models::GetMetaTableProducingTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the output tasks of a metatable.
       *
       * @param request GetMetaTableProducingTasksRequest
       * @return GetMetaTableProducingTasksResponse
       */
      Models::GetMetaTableProducingTasksResponse getMetaTableProducingTasks(const Models::GetMetaTableProducingTasksRequest &request);

      /**
       * @summary Queries the information about the themes and levels of a metatable.
       *
       * @param request GetMetaTableThemeLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaTableThemeLevelResponse
       */
      Models::GetMetaTableThemeLevelResponse getMetaTableThemeLevelWithOptions(const Models::GetMetaTableThemeLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the themes and levels of a metatable.
       *
       * @param request GetMetaTableThemeLevelRequest
       * @return GetMetaTableThemeLevelResponse
       */
      Models::GetMetaTableThemeLevelResponse getMetaTableThemeLevel(const Models::GetMetaTableThemeLevelRequest &request);

      /**
       * @summary Queries the progress of a migration task.
       *
       * @param request GetMigrationProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMigrationProcessResponse
       */
      Models::GetMigrationProcessResponse getMigrationProcessWithOptions(const Models::GetMigrationProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a migration task.
       *
       * @param request GetMigrationProcessRequest
       * @return GetMigrationProcessResponse
       */
      Models::GetMigrationProcessResponse getMigrationProcess(const Models::GetMigrationProcessRequest &request);

      /**
       * @summary Queries the information about a migration task.
       *
       * @param request GetMigrationSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMigrationSummaryResponse
       */
      Models::GetMigrationSummaryResponse getMigrationSummaryWithOptions(const Models::GetMigrationSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a migration task.
       *
       * @param request GetMigrationSummaryRequest
       * @return GetMigrationSummaryResponse
       */
      Models::GetMigrationSummaryResponse getMigrationSummary(const Models::GetMigrationSummaryRequest &request);

      /**
       * @summary Indicates whether the request is successful.
       *
       * @param request GetNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeResponse
       */
      Models::GetNodeResponse getNodeWithOptions(const Models::GetNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Indicates whether the request is successful.
       *
       * @param request GetNodeRequest
       * @return GetNodeResponse
       */
      Models::GetNodeResponse getNode(const Models::GetNodeRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request GetNodeChildrenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeChildrenResponse
       */
      Models::GetNodeChildrenResponse getNodeChildrenWithOptions(const Models::GetNodeChildrenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request GetNodeChildrenRequest
       * @return GetNodeChildrenResponse
       */
      Models::GetNodeChildrenResponse getNodeChildren(const Models::GetNodeChildrenRequest &request);

      /**
       * @summary Queries the code of a node.
       *
       * @param request GetNodeCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeCodeResponse
       */
      Models::GetNodeCodeResponse getNodeCodeWithOptions(const Models::GetNodeCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the code of a node.
       *
       * @param request GetNodeCodeRequest
       * @return GetNodeCodeResponse
       */
      Models::GetNodeCodeResponse getNodeCode(const Models::GetNodeCodeRequest &request);

      /**
       * @deprecated OpenAPI GetNodeOnBaseline is deprecated
       *
       * @summary Queries the nodes associated with a baseline.
       *
       * @param request GetNodeOnBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeOnBaselineResponse
       */
      Models::GetNodeOnBaselineResponse getNodeOnBaselineWithOptions(const Models::GetNodeOnBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetNodeOnBaseline is deprecated
       *
       * @summary Queries the nodes associated with a baseline.
       *
       * @param request GetNodeOnBaselineRequest
       * @return GetNodeOnBaselineResponse
       */
      Models::GetNodeOnBaselineResponse getNodeOnBaseline(const Models::GetNodeOnBaselineRequest &request);

      /**
       * @summary Queries a list of ancestor nodes of a node.
       *
       * @param request GetNodeParentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeParentsResponse
       */
      Models::GetNodeParentsResponse getNodeParentsWithOptions(const Models::GetNodeParentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ancestor nodes of a node.
       *
       * @param request GetNodeParentsRequest
       * @return GetNodeParentsResponse
       */
      Models::GetNodeParentsResponse getNodeParents(const Models::GetNodeParentsRequest &request);

      /**
       * @deprecated OpenAPI GetNodeTypeListInfo is deprecated
       *
       * @summary Queries the information about node types, including the code and name of a node type.
       *
       * @param request GetNodeTypeListInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeTypeListInfoResponse
       */
      Models::GetNodeTypeListInfoResponse getNodeTypeListInfoWithOptions(const Models::GetNodeTypeListInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetNodeTypeListInfo is deprecated
       *
       * @summary Queries the information about node types, including the code and name of a node type.
       *
       * @param request GetNodeTypeListInfoRequest
       * @return GetNodeTypeListInfoResponse
       */
      Models::GetNodeTypeListInfoResponse getNodeTypeListInfo(const Models::GetNodeTypeListInfoRequest &request);

      /**
       * @summary Queries the records that are generated on a specified date for access to the high-risk sensitive data in all the DataWorks workspaces of a tenant.
       *
       * @param request GetOpRiskDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpRiskDataResponse
       */
      Models::GetOpRiskDataResponse getOpRiskDataWithOptions(const Models::GetOpRiskDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the records that are generated on a specified date for access to the high-risk sensitive data in all the DataWorks workspaces of a tenant.
       *
       * @param request GetOpRiskDataRequest
       * @return GetOpRiskDataResponse
       */
      Models::GetOpRiskDataResponse getOpRiskData(const Models::GetOpRiskDataRequest &request);

      /**
       * @summary Queries the records that are generated on a specified date for access to sensitive data in all the DataWorks workspaces of a tenant.
       *
       * @param request GetOpSensitiveDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpSensitiveDataResponse
       */
      Models::GetOpSensitiveDataResponse getOpSensitiveDataWithOptions(const Models::GetOpSensitiveDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the records that are generated on a specified date for access to sensitive data in all the DataWorks workspaces of a tenant.
       *
       * @param request GetOpSensitiveDataRequest
       * @return GetOpSensitiveDataResponse
       */
      Models::GetOpSensitiveDataResponse getOpSensitiveData(const Models::GetOpSensitiveDataRequest &request);

      /**
       * @summary Queries the option settings of an extension in a workspace.
       *
       * @param request GetOptionValueForProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOptionValueForProjectResponse
       */
      Models::GetOptionValueForProjectResponse getOptionValueForProjectWithOptions(const Models::GetOptionValueForProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the option settings of an extension in a workspace.
       *
       * @param request GetOptionValueForProjectRequest
       * @return GetOptionValueForProjectResponse
       */
      Models::GetOptionValueForProjectResponse getOptionValueForProject(const Models::GetOptionValueForProjectRequest &request);

      /**
       * @summary Queries the details of a permission request order.
       *
       * @param request GetPermissionApplyOrderDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPermissionApplyOrderDetailResponse
       */
      Models::GetPermissionApplyOrderDetailResponse getPermissionApplyOrderDetailWithOptions(const Models::GetPermissionApplyOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a permission request order.
       *
       * @param request GetPermissionApplyOrderDetailRequest
       * @return GetPermissionApplyOrderDetailResponse
       */
      Models::GetPermissionApplyOrderDetailResponse getPermissionApplyOrderDetail(const Models::GetPermissionApplyOrderDetailRequest &request);

      /**
       * @summary Queries the information about a DataWorks workspace.
       *
       * @param request GetProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const Models::GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a DataWorks workspace.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const Models::GetProjectRequest &request);

      /**
       * @deprecated OpenAPI GetProjectDetail is deprecated
       *
       * @summary Queries the information about a DataWorks workspace.
       *
       * @param request GetProjectDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectDetailResponse
       */
      Models::GetProjectDetailResponse getProjectDetailWithOptions(const Models::GetProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetProjectDetail is deprecated
       *
       * @summary Queries the information about a DataWorks workspace.
       *
       * @param request GetProjectDetailRequest
       * @return GetProjectDetailResponse
       */
      Models::GetProjectDetailResponse getProjectDetail(const Models::GetProjectDetailRequest &request);

      /**
       * @param request GetQualityEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityEntityResponse
       */
      Models::GetQualityEntityResponse getQualityEntityWithOptions(const Models::GetQualityEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityEntityRequest
       * @return GetQualityEntityResponse
       */
      Models::GetQualityEntityResponse getQualityEntity(const Models::GetQualityEntityRequest &request);

      /**
       * @summary Queries the subscribers of a partition filter expression.
       *
       * @param request GetQualityFollowerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityFollowerResponse
       */
      Models::GetQualityFollowerResponse getQualityFollowerWithOptions(const Models::GetQualityFollowerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subscribers of a partition filter expression.
       *
       * @param request GetQualityFollowerRequest
       * @return GetQualityFollowerResponse
       */
      Models::GetQualityFollowerResponse getQualityFollower(const Models::GetQualityFollowerRequest &request);

      /**
       * @summary Queries the information about a monitoring rule.
       *
       * @param request GetQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleResponse
       */
      Models::GetQualityRuleResponse getQualityRuleWithOptions(const Models::GetQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a monitoring rule.
       *
       * @param request GetQualityRuleRequest
       * @return GetQualityRuleResponse
       */
      Models::GetQualityRuleResponse getQualityRule(const Models::GetQualityRuleRequest &request);

      /**
       * @summary Queries the information about a custom alert rule.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=GetRemind\\&type=RPC\\&version=2020-05-18)
       *
       * @param request GetRemindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRemindResponse
       */
      Models::GetRemindResponse getRemindWithOptions(const Models::GetRemindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a custom alert rule.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=GetRemind\\&type=RPC\\&version=2020-05-18)
       *
       * @param request GetRemindRequest
       * @return GetRemindResponse
       */
      Models::GetRemindResponse getRemind(const Models::GetRemindRequest &request);

      /**
       * @summary Queries the latest sensitive data in all the DataWorks workspaces of a tenant.
       *
       * @param request GetSensitiveDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSensitiveDataResponse
       */
      Models::GetSensitiveDataResponse getSensitiveDataWithOptions(const Models::GetSensitiveDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest sensitive data in all the DataWorks workspaces of a tenant.
       *
       * @param request GetSensitiveDataRequest
       * @return GetSensitiveDataResponse
       */
      Models::GetSensitiveDataResponse getSensitiveData(const Models::GetSensitiveDataRequest &request);

      /**
       * @deprecated OpenAPI GetSuccessInstanceTrend is deprecated
       *
       * @summary Queries the statistics of instances in different periods of a day.
       *
       * @param request GetSuccessInstanceTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSuccessInstanceTrendResponse
       */
      Models::GetSuccessInstanceTrendResponse getSuccessInstanceTrendWithOptions(const Models::GetSuccessInstanceTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetSuccessInstanceTrend is deprecated
       *
       * @summary Queries the statistics of instances in different periods of a day.
       *
       * @param request GetSuccessInstanceTrendRequest
       * @return GetSuccessInstanceTrendResponse
       */
      Models::GetSuccessInstanceTrendResponse getSuccessInstanceTrend(const Models::GetSuccessInstanceTrendRequest &request);

      /**
       * @summary Queries the information about an event.
       *
       * @description ****
       *
       * @param request GetTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopicWithOptions(const Models::GetTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an event.
       *
       * @description ****
       *
       * @param request GetTopicRequest
       * @return GetTopicResponse
       */
      Models::GetTopicResponse getTopic(const Models::GetTopicRequest &request);

      /**
       * @summary Queries baseline instances affected by an event.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=GetTopicInfluence\\&type=RPC\\&version=2020-05-18)
       *
       * @param request GetTopicInfluenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicInfluenceResponse
       */
      Models::GetTopicInfluenceResponse getTopicInfluenceWithOptions(const Models::GetTopicInfluenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries baseline instances affected by an event.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=GetTopicInfluence\\&type=RPC\\&version=2020-05-18)
       *
       * @param request GetTopicInfluenceRequest
       * @return GetTopicInfluenceResponse
       */
      Models::GetTopicInfluenceResponse getTopicInfluence(const Models::GetTopicInfluenceRequest &request);

      /**
       * @summary Imports data sources from your on-premises machine to a specific DataWorks workspace.
       *
       * @description You can import self-managed data sources or data sources that are exported from other DataWorks workspaces to a specific DataWorks workspace.
       * *   To import a self-managed data source to a DataWorks workspace, the data source type must be supported by DataWorks. For more information about the types of data sources supported by DataWorks, see [Supported data stores](https://help.aliyun.com/document_detail/181656.html).
       * *   For more information about how to export data sources from DataWorks workspaces to your on-premises machine, see [ExportDataSources](https://help.aliyun.com/document_detail/279570.html).
       *
       * @param request ImportDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportDataSourcesResponse
       */
      Models::ImportDataSourcesResponse importDataSourcesWithOptions(const Models::ImportDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports data sources from your on-premises machine to a specific DataWorks workspace.
       *
       * @description You can import self-managed data sources or data sources that are exported from other DataWorks workspaces to a specific DataWorks workspace.
       * *   To import a self-managed data source to a DataWorks workspace, the data source type must be supported by DataWorks. For more information about the types of data sources supported by DataWorks, see [Supported data stores](https://help.aliyun.com/document_detail/181656.html).
       * *   For more information about how to export data sources from DataWorks workspaces to your on-premises machine, see [ExportDataSources](https://help.aliyun.com/document_detail/279570.html).
       *
       * @param request ImportDataSourcesRequest
       * @return ImportDataSourcesResponse
       */
      Models::ImportDataSourcesResponse importDataSources(const Models::ImportDataSourcesRequest &request);

      /**
       * @summary Queries a list of alerts.
       *
       * @param request ListAlertMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertMessagesResponse
       */
      Models::ListAlertMessagesResponse listAlertMessagesWithOptions(const Models::ListAlertMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of alerts.
       *
       * @param request ListAlertMessagesRequest
       * @return ListAlertMessagesResponse
       */
      Models::ListAlertMessagesResponse listAlertMessages(const Models::ListAlertMessagesRequest &request);

      /**
       * @summary Queries a list of baselines.
       *
       * @param request ListBaselineConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaselineConfigsResponse
       */
      Models::ListBaselineConfigsResponse listBaselineConfigsWithOptions(const Models::ListBaselineConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of baselines.
       *
       * @param request ListBaselineConfigsRequest
       * @return ListBaselineConfigsResponse
       */
      Models::ListBaselineConfigsResponse listBaselineConfigs(const Models::ListBaselineConfigsRequest &request);

      /**
       * @summary Queries a list of baseline instances.
       *
       * @param request ListBaselineStatusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaselineStatusesResponse
       */
      Models::ListBaselineStatusesResponse listBaselineStatusesWithOptions(const Models::ListBaselineStatusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of baseline instances.
       *
       * @param request ListBaselineStatusesRequest
       * @return ListBaselineStatusesResponse
       */
      Models::ListBaselineStatusesResponse listBaselineStatuses(const Models::ListBaselineStatusesRequest &request);

      /**
       * @summary Obtains a list of baselines.
       *
       * @param request ListBaselinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBaselinesResponse
       */
      Models::ListBaselinesResponse listBaselinesWithOptions(const Models::ListBaselinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of baselines.
       *
       * @param request ListBaselinesRequest
       * @return ListBaselinesResponse
       */
      Models::ListBaselinesResponse listBaselines(const Models::ListBaselinesRequest &request);

      /**
       * @summary Queries a list of workflows.
       *
       * @param request ListBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusinessResponse
       */
      Models::ListBusinessResponse listBusinessWithOptions(const Models::ListBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workflows.
       *
       * @param request ListBusinessRequest
       * @return ListBusinessResponse
       */
      Models::ListBusinessResponse listBusiness(const Models::ListBusinessRequest &request);

      /**
       * @summary Queries a list of compute engines that are associated with a DataWorks workspace.
       *
       * @param request ListCalcEnginesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCalcEnginesResponse
       */
      Models::ListCalcEnginesResponse listCalcEnginesWithOptions(const Models::ListCalcEnginesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of compute engines that are associated with a DataWorks workspace.
       *
       * @param request ListCalcEnginesRequest
       * @return ListCalcEnginesResponse
       */
      Models::ListCalcEnginesResponse listCalcEngines(const Models::ListCalcEnginesRequest &request);

      /**
       * @summary Queries the check results of extension point events.
       *
       * @param request ListCheckProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCheckProcessesResponse
       */
      Models::ListCheckProcessesResponse listCheckProcessesWithOptions(const Models::ListCheckProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the check results of extension point events.
       *
       * @param request ListCheckProcessesRequest
       * @return ListCheckProcessesResponse
       */
      Models::ListCheckProcessesResponse listCheckProcesses(const Models::ListCheckProcessesRequest &request);

      /**
       * @summary Queries the configurations of submodules in a workspace. You can query information about SPARK parameters.
       *
       * @param request ListClusterConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterConfigsResponse
       */
      Models::ListClusterConfigsResponse listClusterConfigsWithOptions(const Models::ListClusterConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of submodules in a workspace. You can query information about SPARK parameters.
       *
       * @param request ListClusterConfigsRequest
       * @return ListClusterConfigsResponse
       */
      Models::ListClusterConfigsResponse listClusterConfigs(const Models::ListClusterConfigsRequest &request);

      /**
       * @summary Queries clusters that are registered in DataWorks. E-MapReduce (EMR) clusters and Cloudera\\"s Distribution Including Apache Hadoop (CDH) clusters are supported.
       *
       * @param request ListClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries clusters that are registered in DataWorks. E-MapReduce (EMR) clusters and Cloudera\\"s Distribution Including Apache Hadoop (CDH) clusters are supported.
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @deprecated OpenAPI ListConnections is deprecated
       *
       * @summary Queries a list of data sources.
       *
       * @param request ListConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectionsResponse
       */
      Models::ListConnectionsResponse listConnectionsWithOptions(const Models::ListConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListConnections is deprecated
       *
       * @summary Queries a list of data sources.
       *
       * @param request ListConnectionsRequest
       * @return ListConnectionsResponse
       */
      Models::ListConnectionsResponse listConnections(const Models::ListConnectionsRequest &request);

      /**
       * @summary Queries a list of alert rules configured for a new-version synchronization task. The following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
       *
       * @param request ListDIAlarmRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIAlarmRulesResponse
       */
      Models::ListDIAlarmRulesResponse listDIAlarmRulesWithOptions(const Models::ListDIAlarmRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of alert rules configured for a new-version synchronization task. The following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
       *
       * @param request ListDIAlarmRulesRequest
       * @return ListDIAlarmRulesResponse
       */
      Models::ListDIAlarmRulesResponse listDIAlarmRules(const Models::ListDIAlarmRulesRequest &request);

      /**
       * @summary Queries a list of new-version synchronization tasks. The following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can call this operation to obtain only the basic information about the tasks. If you want to obtain the details of a task, call the GetDIJob operation.
       *
       * @param request ListDIJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIJobsResponse
       */
      Models::ListDIJobsResponse listDIJobsWithOptions(const Models::ListDIJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of new-version synchronization tasks. The following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @description You can call this operation to obtain only the basic information about the tasks. If you want to obtain the details of a task, call the GetDIJob operation.
       *
       * @param request ListDIJobsRequest
       * @return ListDIJobsResponse
       */
      Models::ListDIJobsResponse listDIJobs(const Models::ListDIJobsRequest &request);

      /**
       * @summary Queries the default global configurations of synchronization solutions in a specified DataWorks workspace.
       *
       * @description DataWorks allows you to specify a default global configuration only for the processing rules of DDL messages in synchronization solutions. After you configure the **processing rules of DDL messages** in synchronization solutions, the configuration is used as the default global configuration and applies to all real-time synchronization tasks in the solutions. You can modify the **processing rules of DDL messages** based on your business requirements. For more information about how to configure a synchronization solution, see [Synchronization solutions](https://help.aliyun.com/document_detail/199008.html).
       *
       * @param request ListDIProjectConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIProjectConfigResponse
       */
      Models::ListDIProjectConfigResponse listDIProjectConfigWithOptions(const Models::ListDIProjectConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default global configurations of synchronization solutions in a specified DataWorks workspace.
       *
       * @description DataWorks allows you to specify a default global configuration only for the processing rules of DDL messages in synchronization solutions. After you configure the **processing rules of DDL messages** in synchronization solutions, the configuration is used as the default global configuration and applies to all real-time synchronization tasks in the solutions. You can modify the **processing rules of DDL messages** based on your business requirements. For more information about how to configure a synchronization solution, see [Synchronization solutions](https://help.aliyun.com/document_detail/199008.html).
       *
       * @param request ListDIProjectConfigRequest
       * @return ListDIProjectConfigResponse
       */
      Models::ListDIProjectConfigResponse listDIProjectConfig(const Models::ListDIProjectConfigRequest &request);

      /**
       * @summary Queries the details of directed acyclic graphs (DAGs) for a single data backfill instance based on OpSeq.
       *
       * @description Supported DAG types:
       * *   MANUAL: DAG for a manually triggered workflow
       * *   SMOKE_TEST: DAG for a smoke testing workflow
       * *   SUPPLY_DATA: DAG for a data backfill instance
       * *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
       * Supported DAG states:
       * *   CREATED: The DAG is created.
       * *   RUNNING: The DAG is running.
       * *   FAILURE: The DAG fails to run.
       * *   SUCCESS: The DAG is successfully run.
       *
       * @param request ListDagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDagsResponse
       */
      Models::ListDagsResponse listDagsWithOptions(const Models::ListDagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of directed acyclic graphs (DAGs) for a single data backfill instance based on OpSeq.
       *
       * @description Supported DAG types:
       * *   MANUAL: DAG for a manually triggered workflow
       * *   SMOKE_TEST: DAG for a smoke testing workflow
       * *   SUPPLY_DATA: DAG for a data backfill instance
       * *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
       * Supported DAG states:
       * *   CREATED: The DAG is created.
       * *   RUNNING: The DAG is running.
       * *   FAILURE: The DAG fails to run.
       * *   SUCCESS: The DAG is successfully run.
       *
       * @param request ListDagsRequest
       * @return ListDagsResponse
       */
      Models::ListDagsResponse listDags(const Models::ListDagsRequest &request);

      /**
       * @summary Queries the APIs on which other users are granted the access permissions.
       *
       * @param request ListDataServiceApiAuthoritiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApiAuthoritiesResponse
       */
      Models::ListDataServiceApiAuthoritiesResponse listDataServiceApiAuthoritiesWithOptions(const Models::ListDataServiceApiAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs on which other users are granted the access permissions.
       *
       * @param request ListDataServiceApiAuthoritiesRequest
       * @return ListDataServiceApiAuthoritiesResponse
       */
      Models::ListDataServiceApiAuthoritiesResponse listDataServiceApiAuthorities(const Models::ListDataServiceApiAuthoritiesRequest &request);

      /**
       * @summary Queries the test records of a DataService Studio API. This API operation allows you to query only the test records that are generated within the previous month.
       *
       * @param request ListDataServiceApiTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApiTestResponse
       */
      Models::ListDataServiceApiTestResponse listDataServiceApiTestWithOptions(const Models::ListDataServiceApiTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the test records of a DataService Studio API. This API operation allows you to query only the test records that are generated within the previous month.
       *
       * @param request ListDataServiceApiTestRequest
       * @return ListDataServiceApiTestResponse
       */
      Models::ListDataServiceApiTestResponse listDataServiceApiTest(const Models::ListDataServiceApiTestRequest &request);

      /**
       * @summary Queries a list of APIs in the development state.
       *
       * @param request ListDataServiceApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApisResponse
       */
      Models::ListDataServiceApisResponse listDataServiceApisWithOptions(const Models::ListDataServiceApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of APIs in the development state.
       *
       * @param request ListDataServiceApisRequest
       * @return ListDataServiceApisResponse
       */
      Models::ListDataServiceApisResponse listDataServiceApis(const Models::ListDataServiceApisRequest &request);

      /**
       * @summary Queries the basic information of applications.
       *
       * @param request ListDataServiceApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceApplicationsResponse
       */
      Models::ListDataServiceApplicationsResponse listDataServiceApplicationsWithOptions(const Models::ListDataServiceApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of applications.
       *
       * @param request ListDataServiceApplicationsRequest
       * @return ListDataServiceApplicationsResponse
       */
      Models::ListDataServiceApplicationsResponse listDataServiceApplications(const Models::ListDataServiceApplicationsRequest &request);

      /**
       * @summary Queries the APIs that you are authorized to access.
       *
       * @param request ListDataServiceAuthorizedApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceAuthorizedApisResponse
       */
      Models::ListDataServiceAuthorizedApisResponse listDataServiceAuthorizedApisWithOptions(const Models::ListDataServiceAuthorizedApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs that you are authorized to access.
       *
       * @param request ListDataServiceAuthorizedApisRequest
       * @return ListDataServiceAuthorizedApisResponse
       */
      Models::ListDataServiceAuthorizedApisResponse listDataServiceAuthorizedApis(const Models::ListDataServiceAuthorizedApisRequest &request);

      /**
       * @summary Queries folders.
       *
       * @param request ListDataServiceFoldersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceFoldersResponse
       */
      Models::ListDataServiceFoldersResponse listDataServiceFoldersWithOptions(const Models::ListDataServiceFoldersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries folders.
       *
       * @param request ListDataServiceFoldersRequest
       * @return ListDataServiceFoldersResponse
       */
      Models::ListDataServiceFoldersResponse listDataServiceFolders(const Models::ListDataServiceFoldersRequest &request);

      /**
       * @summary Queries business processes.
       *
       * @param request ListDataServiceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServiceGroupsResponse
       */
      Models::ListDataServiceGroupsResponse listDataServiceGroupsWithOptions(const Models::ListDataServiceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries business processes.
       *
       * @param request ListDataServiceGroupsRequest
       * @return ListDataServiceGroupsResponse
       */
      Models::ListDataServiceGroupsResponse listDataServiceGroups(const Models::ListDataServiceGroupsRequest &request);

      /**
       * @summary Queries a list of APIs in the published state.
       *
       * @param request ListDataServicePublishedApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataServicePublishedApisResponse
       */
      Models::ListDataServicePublishedApisResponse listDataServicePublishedApisWithOptions(const Models::ListDataServicePublishedApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of APIs in the published state.
       *
       * @param request ListDataServicePublishedApisRequest
       * @return ListDataServicePublishedApisResponse
       */
      Models::ListDataServicePublishedApisResponse listDataServicePublishedApis(const Models::ListDataServicePublishedApisRequest &request);

      /**
       * @summary Queries the data sources added to a DataWorks workspace.
       *
       * @param request ListDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const Models::ListDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data sources added to a DataWorks workspace.
       *
       * @param request ListDataSourcesRequest
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const Models::ListDataSourcesRequest &request);

      /**
       * @summary Queries a list of deployment packages. This operation is equivalent to viewing a list of deployment packages on the Deployment Packages page of the DataWorks console.
       *
       * @param request ListDeploymentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentsResponse
       */
      Models::ListDeploymentsResponse listDeploymentsWithOptions(const Models::ListDeploymentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of deployment packages. This operation is equivalent to viewing a list of deployment packages on the Deployment Packages page of the DataWorks console.
       *
       * @param request ListDeploymentsRequest
       * @return ListDeploymentsResponse
       */
      Models::ListDeploymentsResponse listDeployments(const Models::ListDeploymentsRequest &request);

      /**
       * @summary Queries a list of built-in and custom extensions that are enabled in a workspace.
       *
       * @description For information about codes of extension point events, see [Development references: Extension point event codes](https://help.aliyun.com/document_detail/463357.html).
       *
       * @param request ListEnabledExtensionsForProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnabledExtensionsForProjectResponse
       */
      Models::ListEnabledExtensionsForProjectResponse listEnabledExtensionsForProjectWithOptions(const Models::ListEnabledExtensionsForProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of built-in and custom extensions that are enabled in a workspace.
       *
       * @description For information about codes of extension point events, see [Development references: Extension point event codes](https://help.aliyun.com/document_detail/463357.html).
       *
       * @param request ListEnabledExtensionsForProjectRequest
       * @return ListEnabledExtensionsForProjectResponse
       */
      Models::ListEnabledExtensionsForProjectResponse listEnabledExtensionsForProject(const Models::ListEnabledExtensionsForProjectRequest &request);

      /**
       * @summary Queries a list of entities by tag. Only entities of the maxcompute-table type are supported.
       *
       * @param tmpReq ListEntitiesByTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEntitiesByTagsResponse
       */
      Models::ListEntitiesByTagsResponse listEntitiesByTagsWithOptions(const Models::ListEntitiesByTagsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of entities by tag. Only entities of the maxcompute-table type are supported.
       *
       * @param request ListEntitiesByTagsRequest
       * @return ListEntitiesByTagsResponse
       */
      Models::ListEntitiesByTagsResponse listEntitiesByTags(const Models::ListEntitiesByTagsRequest &request);

      /**
       * @summary Queries a list of tags of an entity. Only entities of the maxcompute-table type are supported.
       *
       * @param request ListEntityTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEntityTagsResponse
       */
      Models::ListEntityTagsResponse listEntityTagsWithOptions(const Models::ListEntityTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags of an entity. Only entities of the maxcompute-table type are supported.
       *
       * @param request ListEntityTagsRequest
       * @return ListEntityTagsResponse
       */
      Models::ListEntityTagsResponse listEntityTags(const Models::ListEntityTagsRequest &request);

      /**
       * @summary Queries a list of extensions.
       *
       * @param request ListExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExtensionsResponse
       */
      Models::ListExtensionsResponse listExtensionsWithOptions(const Models::ListExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of extensions.
       *
       * @param request ListExtensionsRequest
       * @return ListExtensionsResponse
       */
      Models::ListExtensionsResponse listExtensions(const Models::ListExtensionsRequest &request);

      /**
       * @summary Queries the information about node types, such as the code and name.
       *
       * @param request ListFileTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileTypeResponse
       */
      Models::ListFileTypeResponse listFileTypeWithOptions(const Models::ListFileTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about node types, such as the code and name.
       *
       * @param request ListFileTypeRequest
       * @return ListFileTypeResponse
       */
      Models::ListFileTypeResponse listFileType(const Models::ListFileTypeRequest &request);

      /**
       * @summary Queries a list of file versions.
       *
       * @param request ListFileVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileVersionsResponse
       */
      Models::ListFileVersionsResponse listFileVersionsWithOptions(const Models::ListFileVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of file versions.
       *
       * @param request ListFileVersionsRequest
       * @return ListFileVersionsResponse
       */
      Models::ListFileVersionsResponse listFileVersions(const Models::ListFileVersionsRequest &request);

      /**
       * @summary Queries a list of files.
       *
       * @param request ListFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFilesWithOptions(const Models::ListFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of files.
       *
       * @param request ListFilesRequest
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFiles(const Models::ListFilesRequest &request);

      /**
       * @summary Queries a list of folders.
       *
       * @param request ListFoldersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFoldersResponse
       */
      Models::ListFoldersResponse listFoldersWithOptions(const Models::ListFoldersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of folders.
       *
       * @param request ListFoldersRequest
       * @return ListFoldersResponse
       */
      Models::ListFoldersResponse listFolders(const Models::ListFoldersRequest &request);

      /**
       * @summary Queries information about inner nodes. For example, you can call this operation to query the inner nodes of a node group or a do-while node. You cannot call this operation to query the inner nodes of a PAI node.
       *
       * @param request ListInnerNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInnerNodesResponse
       */
      Models::ListInnerNodesResponse listInnerNodesWithOptions(const Models::ListInnerNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about inner nodes. For example, you can call this operation to query the inner nodes of a node group or a do-while node. You cannot call this operation to query the inner nodes of a PAI node.
       *
       * @param request ListInnerNodesRequest
       * @return ListInnerNodesResponse
       */
      Models::ListInnerNodesResponse listInnerNodes(const Models::ListInnerNodesRequest &request);

      /**
       * @summary Queries the trend of the number of auto triggered node instances within a specified period of time.
       *
       * @param request ListInstanceAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceAmountResponse
       */
      Models::ListInstanceAmountResponse listInstanceAmountWithOptions(const Models::ListInstanceAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of the number of auto triggered node instances within a specified period of time.
       *
       * @param request ListInstanceAmountRequest
       * @return ListInstanceAmountResponse
       */
      Models::ListInstanceAmountResponse listInstanceAmount(const Models::ListInstanceAmountRequest &request);

      /**
       * @summary Queries information about the historical records of all instances. One historical record is generated if an instance is rerun once.
       *
       * @param request ListInstanceHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceHistoryResponse
       */
      Models::ListInstanceHistoryResponse listInstanceHistoryWithOptions(const Models::ListInstanceHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the historical records of all instances. One historical record is generated if an instance is rerun once.
       *
       * @param request ListInstanceHistoryRequest
       * @return ListInstanceHistoryResponse
       */
      Models::ListInstanceHistoryResponse listInstanceHistory(const Models::ListInstanceHistoryRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the ancestor or descendant lineage of an entity.
       *
       * @param request ListLineageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLineageResponse
       */
      Models::ListLineageResponse listLineageWithOptions(const Models::ListLineageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ancestor or descendant lineage of an entity.
       *
       * @param request ListLineageRequest
       * @return ListLineageResponse
       */
      Models::ListLineageResponse listLineage(const Models::ListLineageRequest &request);

      /**
       * @summary Queries the information about instances in a manually triggered workflow.
       *
       * @param request ListManualDagInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManualDagInstancesResponse
       */
      Models::ListManualDagInstancesResponse listManualDagInstancesWithOptions(const Models::ListManualDagInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about instances in a manually triggered workflow.
       *
       * @param request ListManualDagInstancesRequest
       * @return ListManualDagInstancesResponse
       */
      Models::ListManualDagInstancesResponse listManualDagInstances(const Models::ListManualDagInstancesRequest &request);

      /**
       * @summary Queries the statistics on the number of phone call-based alerts or text message-based alerts reported within the tenant to which your account belongs during the previous 30 days.
       *
       * @param request ListMeasureDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMeasureDataResponse
       */
      Models::ListMeasureDataResponse listMeasureDataWithOptions(const Models::ListMeasureDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the number of phone call-based alerts or text message-based alerts reported within the tenant to which your account belongs during the previous 30 days.
       *
       * @param request ListMeasureDataRequest
       * @return ListMeasureDataResponse
       */
      Models::ListMeasureDataResponse listMeasureData(const Models::ListMeasureDataRequest &request);

      /**
       * @summary Queries the entities in a collection.
       *
       * @param request ListMetaCollectionEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetaCollectionEntitiesResponse
       */
      Models::ListMetaCollectionEntitiesResponse listMetaCollectionEntitiesWithOptions(const Models::ListMetaCollectionEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the entities in a collection.
       *
       * @param request ListMetaCollectionEntitiesRequest
       * @return ListMetaCollectionEntitiesResponse
       */
      Models::ListMetaCollectionEntitiesResponse listMetaCollectionEntities(const Models::ListMetaCollectionEntitiesRequest &request);

      /**
       * @summary Queries information about collections. Collections include data albums that are displayed on the Data Map page and categories that are created in the data albums. You can call this API operation to query collections by type.
       *
       * @description The type can be ALBUM or ALBUM_CATEGORY. ALBUM indicates data albums. ALBUM_CATEGORY indicates categories.
       *
       * @param request ListMetaCollectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetaCollectionsResponse
       */
      Models::ListMetaCollectionsResponse listMetaCollectionsWithOptions(const Models::ListMetaCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about collections. Collections include data albums that are displayed on the Data Map page and categories that are created in the data albums. You can call this API operation to query collections by type.
       *
       * @description The type can be ALBUM or ALBUM_CATEGORY. ALBUM indicates data albums. ALBUM_CATEGORY indicates categories.
       *
       * @param request ListMetaCollectionsRequest
       * @return ListMetaCollectionsResponse
       */
      Models::ListMetaCollectionsResponse listMetaCollections(const Models::ListMetaCollectionsRequest &request);

      /**
       * @summary Queries a list of metadatabases.
       *
       * @param request ListMetaDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetaDBResponse
       */
      Models::ListMetaDBResponse listMetaDBWithOptions(const Models::ListMetaDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of metadatabases.
       *
       * @param request ListMetaDBRequest
       * @return ListMetaDBResponse
       */
      Models::ListMetaDBResponse listMetaDB(const Models::ListMetaDBRequest &request);

      /**
       * @summary Queries a list of migration tasks.
       *
       * @param request ListMigrationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMigrationsResponse
       */
      Models::ListMigrationsResponse listMigrationsWithOptions(const Models::ListMigrationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of migration tasks.
       *
       * @param request ListMigrationsRequest
       * @return ListMigrationsResponse
       */
      Models::ListMigrationsResponse listMigrations(const Models::ListMigrationsRequest &request);

      /**
       * @deprecated OpenAPI ListNodeIO is deprecated
       *
       * @summary Queries the information about one level of ancestor or descendant nodes of a node.
       *
       * @param request ListNodeIORequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeIOResponse
       */
      Models::ListNodeIOResponse listNodeIOWithOptions(const Models::ListNodeIORequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListNodeIO is deprecated
       *
       * @summary Queries the information about one level of ancestor or descendant nodes of a node.
       *
       * @param request ListNodeIORequest
       * @return ListNodeIOResponse
       */
      Models::ListNodeIOResponse listNodeIO(const Models::ListNodeIORequest &request);

      /**
       * @summary Queries the input and output information about a node. Only the ancestor or descendant nodes at the nearest level can be queried each time.
       *
       * @param request ListNodeInputOrOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeInputOrOutputResponse
       */
      Models::ListNodeInputOrOutputResponse listNodeInputOrOutputWithOptions(const Models::ListNodeInputOrOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the input and output information about a node. Only the ancestor or descendant nodes at the nearest level can be queried each time.
       *
       * @param request ListNodeInputOrOutputRequest
       * @return ListNodeInputOrOutputResponse
       */
      Models::ListNodeInputOrOutputResponse listNodeInputOrOutput(const Models::ListNodeInputOrOutputRequest &request);

      /**
       * @summary The ID of the workspace.
       *
       * @param request ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the workspace.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary Queries nodes in a baseline.
       *
       * @param request ListNodesByBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesByBaselineResponse
       */
      Models::ListNodesByBaselineResponse listNodesByBaselineWithOptions(const Models::ListNodesByBaselineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries nodes in a baseline.
       *
       * @param request ListNodesByBaselineRequest
       * @return ListNodesByBaselineResponse
       */
      Models::ListNodesByBaselineResponse listNodesByBaseline(const Models::ListNodesByBaselineRequest &request);

      /**
       * @summary Queries nodes based on the output of the nodes.
       *
       * @param request ListNodesByOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesByOutputResponse
       */
      Models::ListNodesByOutputResponse listNodesByOutputWithOptions(const Models::ListNodesByOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries nodes based on the output of the nodes.
       *
       * @param request ListNodesByOutputRequest
       * @return ListNodesByOutputResponse
       */
      Models::ListNodesByOutputResponse listNodesByOutput(const Models::ListNodesByOutputRequest &request);

      /**
       * @summary Views permission requests.
       *
       * @param request ListPermissionApplyOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionApplyOrdersResponse
       */
      Models::ListPermissionApplyOrdersResponse listPermissionApplyOrdersWithOptions(const Models::ListPermissionApplyOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views permission requests.
       *
       * @param request ListPermissionApplyOrdersRequest
       * @return ListPermissionApplyOrdersResponse
       */
      Models::ListPermissionApplyOrdersResponse listPermissionApplyOrders(const Models::ListPermissionApplyOrdersRequest &request);

      /**
       * @deprecated OpenAPI ListProgramTypeCount is deprecated
       *
       * @summary Queries the distribution of different types of nodes.
       *
       * @param request ListProgramTypeCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProgramTypeCountResponse
       */
      Models::ListProgramTypeCountResponse listProgramTypeCountWithOptions(const Models::ListProgramTypeCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListProgramTypeCount is deprecated
       *
       * @summary Queries the distribution of different types of nodes.
       *
       * @param request ListProgramTypeCountRequest
       * @return ListProgramTypeCountResponse
       */
      Models::ListProgramTypeCountResponse listProgramTypeCount(const Models::ListProgramTypeCountRequest &request);

      /**
       * @summary Queries the IDs of the workspaces on which a specific Alibaba Cloud account or RAM user has permissions in a specific region.
       *
       * @description An Alibaba Cloud account can assume a role such as the developer, O\\&M engineer, or workspace administrator role in a workspace. For more information, see [Manage members and roles](https://help.aliyun.com/document_detail/136941.html).
       *
       * @param request ListProjectIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectIdsResponse
       */
      Models::ListProjectIdsResponse listProjectIdsWithOptions(const Models::ListProjectIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IDs of the workspaces on which a specific Alibaba Cloud account or RAM user has permissions in a specific region.
       *
       * @description An Alibaba Cloud account can assume a role such as the developer, O\\&M engineer, or workspace administrator role in a workspace. For more information, see [Manage members and roles](https://help.aliyun.com/document_detail/136941.html).
       *
       * @param request ListProjectIdsRequest
       * @return ListProjectIdsResponse
       */
      Models::ListProjectIdsResponse listProjectIds(const Models::ListProjectIdsRequest &request);

      /**
       * @summary Queries a list of existing members in a DataWorks workspace.
       *
       * @param request ListProjectMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembersWithOptions(const Models::ListProjectMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of existing members in a DataWorks workspace.
       *
       * @param request ListProjectMembersRequest
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembers(const Models::ListProjectMembersRequest &request);

      /**
       * @summary Queries a list of roles in a DataWorks workspace.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=ListProjectRoles\\&type=RPC\\&version=2020-05-18)
       *
       * @param request ListProjectRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectRolesResponse
       */
      Models::ListProjectRolesResponse listProjectRolesWithOptions(const Models::ListProjectRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of roles in a DataWorks workspace.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=ListProjectRoles\\&type=RPC\\&version=2020-05-18)
       *
       * @param request ListProjectRolesRequest
       * @return ListProjectRolesResponse
       */
      Models::ListProjectRolesResponse listProjectRoles(const Models::ListProjectRolesRequest &request);

      /**
       * @summary Queries a list of DataWorks workspaces of the tenant to which a user belongs.
       *
       * @param tmpReq ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of DataWorks workspaces of the tenant to which a user belongs.
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary Queries a list of historical check results based on a partition filter expression.
       *
       * @description ****
       *
       * @param request ListQualityResultsByEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityResultsByEntityResponse
       */
      Models::ListQualityResultsByEntityResponse listQualityResultsByEntityWithOptions(const Models::ListQualityResultsByEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of historical check results based on a partition filter expression.
       *
       * @description ****
       *
       * @param request ListQualityResultsByEntityRequest
       * @return ListQualityResultsByEntityResponse
       */
      Models::ListQualityResultsByEntityResponse listQualityResultsByEntity(const Models::ListQualityResultsByEntityRequest &request);

      /**
       * @summary Queries monitoring results after the data quality of a data source or a compute engine is monitored based on monitoring rules.
       *
       * @param request ListQualityResultsByRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityResultsByRuleResponse
       */
      Models::ListQualityResultsByRuleResponse listQualityResultsByRuleWithOptions(const Models::ListQualityResultsByRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries monitoring results after the data quality of a data source or a compute engine is monitored based on monitoring rules.
       *
       * @param request ListQualityResultsByRuleRequest
       * @return ListQualityResultsByRuleResponse
       */
      Models::ListQualityResultsByRuleResponse listQualityResultsByRule(const Models::ListQualityResultsByRuleRequest &request);

      /**
       * @summary Queries monitoring rules based on a partition filter expression.
       *
       * @param request ListQualityRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQualityRulesResponse
       */
      Models::ListQualityRulesResponse listQualityRulesWithOptions(const Models::ListQualityRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries monitoring rules based on a partition filter expression.
       *
       * @param request ListQualityRulesRequest
       * @return ListQualityRulesResponse
       */
      Models::ListQualityRulesResponse listQualityRules(const Models::ListQualityRulesRequest &request);

      /**
       * @summary Queries synchronization tasks in Data Integration that use a specific data source.
       *
       * @param request ListRefDISyncTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRefDISyncTasksResponse
       */
      Models::ListRefDISyncTasksResponse listRefDISyncTasksWithOptions(const Models::ListRefDISyncTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries synchronization tasks in Data Integration that use a specific data source.
       *
       * @param request ListRefDISyncTasksRequest
       * @return ListRefDISyncTasksResponse
       */
      Models::ListRefDISyncTasksResponse listRefDISyncTasks(const Models::ListRefDISyncTasksRequest &request);

      /**
       * @summary Queries a list of custom alert rules.
       *
       * @param request ListRemindsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRemindsResponse
       */
      Models::ListRemindsResponse listRemindsWithOptions(const Models::ListRemindsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom alert rules.
       *
       * @param request ListRemindsRequest
       * @return ListRemindsResponse
       */
      Models::ListRemindsResponse listReminds(const Models::ListRemindsRequest &request);

      /**
       * @summary Queries a list of resource groups of a specific type.
       *
       * @param tmpReq ListResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of resource groups of a specific type.
       *
       * @param request ListResourceGroupsRequest
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroups(const Models::ListResourceGroupsRequest &request);

      /**
       * @summary Queries a list of on-duty engineers in a shift schedule.
       *
       * @param request ListShiftPersonnelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListShiftPersonnelsResponse
       */
      Models::ListShiftPersonnelsResponse listShiftPersonnelsWithOptions(const Models::ListShiftPersonnelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of on-duty engineers in a shift schedule.
       *
       * @param request ListShiftPersonnelsRequest
       * @return ListShiftPersonnelsResponse
       */
      Models::ListShiftPersonnelsResponse listShiftPersonnels(const Models::ListShiftPersonnelsRequest &request);

      /**
       * @summary Queries a list of shift schedules in Operation Center.
       *
       * @param request ListShiftSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListShiftSchedulesResponse
       */
      Models::ListShiftSchedulesResponse listShiftSchedulesWithOptions(const Models::ListShiftSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of shift schedules in Operation Center.
       *
       * @param request ListShiftSchedulesRequest
       * @return ListShiftSchedulesResponse
       */
      Models::ListShiftSchedulesResponse listShiftSchedules(const Models::ListShiftSchedulesRequest &request);

      /**
       * @summary Queries the trend of the number of auto triggered node instances that are successfully run every hour on the hour of the current day.
       *
       * @param request ListSuccessInstanceAmountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSuccessInstanceAmountResponse
       */
      Models::ListSuccessInstanceAmountResponse listSuccessInstanceAmountWithOptions(const Models::ListSuccessInstanceAmountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of the number of auto triggered node instances that are successfully run every hour on the hour of the current day.
       *
       * @param request ListSuccessInstanceAmountRequest
       * @return ListSuccessInstanceAmountResponse
       */
      Models::ListSuccessInstanceAmountResponse listSuccessInstanceAmount(const Models::ListSuccessInstanceAmountRequest &request);

      /**
       * @summary Queries a list of table levels. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request ListTableLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableLevelResponse
       */
      Models::ListTableLevelResponse listTableLevelWithOptions(const Models::ListTableLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of table levels. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request ListTableLevelRequest
       * @return ListTableLevelResponse
       */
      Models::ListTableLevelResponse listTableLevel(const Models::ListTableLevelRequest &request);

      /**
       * @summary Queries a list of table themes. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request ListTableThemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableThemeResponse
       */
      Models::ListTableThemeResponse listTableThemeWithOptions(const Models::ListTableThemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of table themes. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request ListTableThemeRequest
       * @return ListTableThemeResponse
       */
      Models::ListTableThemeResponse listTableTheme(const Models::ListTableThemeRequest &request);

      /**
       * @summary Obtains tables of different data source types within a tenant by page.
       *
       * @param request ListTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains tables of different data source types within a tenant by page.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary Queries events.
       *
       * @param request ListTopicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopicsWithOptions(const Models::ListTopicsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries events.
       *
       * @param request ListTopicsRequest
       * @return ListTopicsResponse
       */
      Models::ListTopicsResponse listTopics(const Models::ListTopicsRequest &request);

      /**
       * @summary Undeploys a node.
       *
       * @param request OfflineNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineNodeResponse
       */
      Models::OfflineNodeResponse offlineNodeWithOptions(const Models::OfflineNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Undeploys a node.
       *
       * @param request OfflineNodeRequest
       * @return OfflineNodeResponse
       */
      Models::OfflineNodeResponse offlineNode(const Models::OfflineNodeRequest &request);

      /**
       * @summary Publishes an API.
       *
       * @param request PublishDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishDataServiceApiResponse
       */
      Models::PublishDataServiceApiResponse publishDataServiceApiWithOptions(const Models::PublishDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an API.
       *
       * @param request PublishDataServiceApiRequest
       * @return PublishDataServiceApiResponse
       */
      Models::PublishDataServiceApiResponse publishDataServiceApi(const Models::PublishDataServiceApiRequest &request);

      /**
       * @summary Queries the execution results of an asynchronous task.
       *
       * @description DataWorks allows you to call only the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to create a batch synchronization task or the [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to update a batch synchronization task in Data Integration. To create or update a real-time synchronization task, you must first call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) or [GenerateDISyncTaskConfigForUpdating](https://help.aliyun.com/document_detail/383464.html) operation to obtain the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can call the CreateDISyncTask or UpdateDISyncTask operation and use the parameters as request parameters to create or update a real-time synchronization task. DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
       *
       * @param request QueryDISyncTaskConfigProcessResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDISyncTaskConfigProcessResultResponse
       */
      Models::QueryDISyncTaskConfigProcessResultResponse queryDISyncTaskConfigProcessResultWithOptions(const Models::QueryDISyncTaskConfigProcessResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution results of an asynchronous task.
       *
       * @description DataWorks allows you to call only the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to create a batch synchronization task or the [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to update a batch synchronization task in Data Integration. To create or update a real-time synchronization task, you must first call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) or [GenerateDISyncTaskConfigForUpdating](https://help.aliyun.com/document_detail/383464.html) operation to obtain the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can call the CreateDISyncTask or UpdateDISyncTask operation and use the parameters as request parameters to create or update a real-time synchronization task. DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
       *
       * @param request QueryDISyncTaskConfigProcessResultRequest
       * @return QueryDISyncTaskConfigProcessResultResponse
       */
      Models::QueryDISyncTaskConfigProcessResultResponse queryDISyncTaskConfigProcessResult(const Models::QueryDISyncTaskConfigProcessResultRequest &request);

      /**
       * @summary Queries the default data category and data sensitivity level template defined by Data Security Guard.
       *
       * @param request QueryDefaultTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDefaultTemplateResponse
       */
      Models::QueryDefaultTemplateResponse queryDefaultTemplateWithOptions(const Models::QueryDefaultTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default data category and data sensitivity level template defined by Data Security Guard.
       *
       * @param request QueryDefaultTemplateRequest
       * @return QueryDefaultTemplateResponse
       */
      Models::QueryDefaultTemplateResponse queryDefaultTemplate(const Models::QueryDefaultTemplateRequest &request);

      /**
       * @summary Queries information about objects that are created in Data Modeling by using fast modeling language (FML) statements.
       *
       * @description *   Each time you call this API operation, you must use FML statements to query information about objects that are created in Data Modeling.
       * *   The information about the objects can be queried by page, except for data layers, business processes, and data domains. You can add an offset to the end of an FML statement. The num LIMIT num statement specifies the offset when the information about the objects is queried, and the number of pages to return each time. The offset value must be a multiple of the number of pages.
       * *   A maximum of 1,000 entries can be returned each time you call this API operation.
       *
       * @param request QueryPublicModelEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPublicModelEngineResponse
       */
      Models::QueryPublicModelEngineResponse queryPublicModelEngineWithOptions(const Models::QueryPublicModelEngineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about objects that are created in Data Modeling by using fast modeling language (FML) statements.
       *
       * @description *   Each time you call this API operation, you must use FML statements to query information about objects that are created in Data Modeling.
       * *   The information about the objects can be queried by page, except for data layers, business processes, and data domains. You can add an offset to the end of an FML statement. The num LIMIT num statement specifies the offset when the information about the objects is queried, and the number of pages to return each time. The offset value must be a multiple of the number of pages.
       * *   A maximum of 1,000 entries can be returned each time you call this API operation.
       *
       * @param request QueryPublicModelEngineRequest
       * @return QueryPublicModelEngineResponse
       */
      Models::QueryPublicModelEngineResponse queryPublicModelEngine(const Models::QueryPublicModelEngineRequest &request);

      /**
       * @summary Queries the type of a sensitive data identification rule.
       *
       * @param request QueryRecognizeDataByRuleTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecognizeDataByRuleTypeResponse
       */
      Models::QueryRecognizeDataByRuleTypeResponse queryRecognizeDataByRuleTypeWithOptions(const Models::QueryRecognizeDataByRuleTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the type of a sensitive data identification rule.
       *
       * @param request QueryRecognizeDataByRuleTypeRequest
       * @return QueryRecognizeDataByRuleTypeResponse
       */
      Models::QueryRecognizeDataByRuleTypeResponse queryRecognizeDataByRuleType(const Models::QueryRecognizeDataByRuleTypeRequest &request);

      /**
       * @summary Queries the details of a specified sensitive field in Data Security Guard.
       *
       * @param request QueryRecognizeRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecognizeRuleDetailResponse
       */
      Models::QueryRecognizeRuleDetailResponse queryRecognizeRuleDetailWithOptions(const Models::QueryRecognizeRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified sensitive field in Data Security Guard.
       *
       * @param request QueryRecognizeRuleDetailRequest
       * @return QueryRecognizeRuleDetailResponse
       */
      Models::QueryRecognizeRuleDetailResponse queryRecognizeRuleDetail(const Models::QueryRecognizeRuleDetailRequest &request);

      /**
       * @summary Queries the built-in sensitive data identification rule that is used to configure a sensitive field.
       *
       * @param request QueryRecognizeRulesTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecognizeRulesTypeResponse
       */
      Models::QueryRecognizeRulesTypeResponse queryRecognizeRulesTypeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the built-in sensitive data identification rule that is used to configure a sensitive field.
       *
       * @return QueryRecognizeRulesTypeResponse
       */
      Models::QueryRecognizeRulesTypeResponse queryRecognizeRulesType();

      /**
       * @summary Queries data categories.
       *
       * @param request QuerySensClassificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySensClassificationResponse
       */
      Models::QuerySensClassificationResponse querySensClassificationWithOptions(const Models::QuerySensClassificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data categories.
       *
       * @param request QuerySensClassificationRequest
       * @return QuerySensClassificationResponse
       */
      Models::QuerySensClassificationResponse querySensClassification(const Models::QuerySensClassificationRequest &request);

      /**
       * @summary Queries data sensitivity levels in Data Security Guard.
       *
       * @param request QuerySensLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySensLevelResponse
       */
      Models::QuerySensLevelResponse querySensLevelWithOptions(const Models::QuerySensLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data sensitivity levels in Data Security Guard.
       *
       * @param request QuerySensLevelRequest
       * @return QuerySensLevelResponse
       */
      Models::QuerySensLevelResponse querySensLevel(const Models::QuerySensLevelRequest &request);

      /**
       * @summary Queries sensitive data identification rules.
       *
       * @param request QuerySensNodeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySensNodeInfoResponse
       */
      Models::QuerySensNodeInfoResponse querySensNodeInfoWithOptions(const Models::QuerySensNodeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries sensitive data identification rules.
       *
       * @param request QuerySensNodeInfoRequest
       * @return QuerySensNodeInfoResponse
       */
      Models::QuerySensNodeInfoResponse querySensNodeInfo(const Models::QuerySensNodeInfoRequest &request);

      /**
       * @summary Registers the lineage between self-managed entities to DataWorks.
       *
       * @description This operation is in the trial phase. Users who need to call this operation can apply for it. The users can call this operation after the administrator adds the users to the trial list.
       *
       * @param tmpReq RegisterLineageRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterLineageRelationResponse
       */
      Models::RegisterLineageRelationResponse registerLineageRelationWithOptions(const Models::RegisterLineageRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers the lineage between self-managed entities to DataWorks.
       *
       * @description This operation is in the trial phase. Users who need to call this operation can apply for it. The users can call this operation after the administrator adds the users to the trial list.
       *
       * @param request RegisterLineageRelationRequest
       * @return RegisterLineageRelationResponse
       */
      Models::RegisterLineageRelationResponse registerLineageRelation(const Models::RegisterLineageRelationRequest &request);

      /**
       * @summary Removes tags from an entity. Only entities of the maxcompute-table type are supported.
       *
       * @param tmpReq RemoveEntityTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveEntityTagsResponse
       */
      Models::RemoveEntityTagsResponse removeEntityTagsWithOptions(const Models::RemoveEntityTagsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from an entity. Only entities of the maxcompute-table type are supported.
       *
       * @param request RemoveEntityTagsRequest
       * @return RemoveEntityTagsResponse
       */
      Models::RemoveEntityTagsResponse removeEntityTags(const Models::RemoveEntityTagsRequest &request);

      /**
       * @summary Removes a role from a user in a DataWorks workspace.
       *
       * @param request RemoveProjectMemberFromRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveProjectMemberFromRoleResponse
       */
      Models::RemoveProjectMemberFromRoleResponse removeProjectMemberFromRoleWithOptions(const Models::RemoveProjectMemberFromRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a role from a user in a DataWorks workspace.
       *
       * @param request RemoveProjectMemberFromRoleRequest
       * @return RemoveProjectMemberFromRoleResponse
       */
      Models::RemoveProjectMemberFromRoleResponse removeProjectMemberFromRole(const Models::RemoveProjectMemberFromRoleRequest &request);

      /**
       * @summary Restarts an instance.
       *
       * @param request RestartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an instance.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary Resumes a suspended instance.
       *
       * @param request ResumeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstanceWithOptions(const Models::ResumeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a suspended instance.
       *
       * @param request ResumeInstanceRequest
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstance(const Models::ResumeInstanceRequest &request);

      /**
       * @summary Revokes permissions on a table from a user.
       *
       * @param request RevokeTablePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeTablePermissionResponse
       */
      Models::RevokeTablePermissionResponse revokeTablePermissionWithOptions(const Models::RevokeTablePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions on a table from a user.
       *
       * @param request RevokeTablePermissionRequest
       * @return RevokeTablePermissionResponse
       */
      Models::RevokeTablePermissionResponse revokeTablePermission(const Models::RevokeTablePermissionRequest &request);

      /**
       * @summary Creates a workflow to backfill data.
       *
       * @description For more information about data backfill, see [Backfill data](https://help.aliyun.com/document_detail/137937.html).
       *
       * @param request RunCycleDagNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCycleDagNodesResponse
       */
      Models::RunCycleDagNodesResponse runCycleDagNodesWithOptions(const Models::RunCycleDagNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow to backfill data.
       *
       * @description For more information about data backfill, see [Backfill data](https://help.aliyun.com/document_detail/137937.html).
       *
       * @param request RunCycleDagNodesRequest
       * @return RunCycleDagNodesResponse
       */
      Models::RunCycleDagNodesResponse runCycleDagNodes(const Models::RunCycleDagNodesRequest &request);

      /**
       * @summary Runs nodes in a manually triggered workflow. Before you call this operation, make sure that the manually triggered workflow is committed and deployed. You can find a manually triggered workflow in Operation Center only after the manually triggered workflow is committed and deployed.
       *
       * @param request RunManualDagNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunManualDagNodesResponse
       */
      Models::RunManualDagNodesResponse runManualDagNodesWithOptions(const Models::RunManualDagNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs nodes in a manually triggered workflow. Before you call this operation, make sure that the manually triggered workflow is committed and deployed. You can find a manually triggered workflow in Operation Center only after the manually triggered workflow is committed and deployed.
       *
       * @param request RunManualDagNodesRequest
       * @return RunManualDagNodesResponse
       */
      Models::RunManualDagNodesResponse runManualDagNodes(const Models::RunManualDagNodesRequest &request);

      /**
       * @summary Creates a workflow to perform smoke testing.
       *
       * @param request RunSmokeTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSmokeTestResponse
       */
      Models::RunSmokeTestResponse runSmokeTestWithOptions(const Models::RunSmokeTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow to perform smoke testing.
       *
       * @param request RunSmokeTestRequest
       * @return RunSmokeTestResponse
       */
      Models::RunSmokeTestResponse runSmokeTest(const Models::RunSmokeTestRequest &request);

      /**
       * @summary Runs a manually triggered node.
       *
       * @param request RunTriggerNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTriggerNodeResponse
       */
      Models::RunTriggerNodeResponse runTriggerNodeWithOptions(const Models::RunTriggerNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a manually triggered node.
       *
       * @param request RunTriggerNodeRequest
       * @return RunTriggerNodeResponse
       */
      Models::RunTriggerNodeResponse runTriggerNode(const Models::RunTriggerNodeRequest &request);

      /**
       * @summary Saves the test results of an API.
       *
       * @param request SaveDataServiceApiTestResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveDataServiceApiTestResultResponse
       */
      Models::SaveDataServiceApiTestResultResponse saveDataServiceApiTestResultWithOptions(const Models::SaveDataServiceApiTestResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves the test results of an API.
       *
       * @param request SaveDataServiceApiTestResultRequest
       * @return SaveDataServiceApiTestResultResponse
       */
      Models::SaveDataServiceApiTestResultResponse saveDataServiceApiTestResult(const Models::SaveDataServiceApiTestResultRequest &request);

      /**
       * @summary Checks whether input data contains sensitive data.
       *
       * @param request ScanSensitiveDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScanSensitiveDataResponse
       */
      Models::ScanSensitiveDataResponse scanSensitiveDataWithOptions(const Models::ScanSensitiveDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether input data contains sensitive data.
       *
       * @param request ScanSensitiveDataRequest
       * @return ScanSensitiveDataResponse
       */
      Models::ScanSensitiveDataResponse scanSensitiveData(const Models::ScanSensitiveDataRequest &request);

      /**
       * @summary Queries metatables based on specific conditions.
       *
       * @description You can call this operation to query only metatables in a MaxCompute or E-MapReduce (EMR) compute engine.
       *
       * @param request SearchMetaTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMetaTablesResponse
       */
      Models::SearchMetaTablesResponse searchMetaTablesWithOptions(const Models::SearchMetaTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metatables based on specific conditions.
       *
       * @description You can call this operation to query only metatables in a MaxCompute or E-MapReduce (EMR) compute engine.
       *
       * @param request SearchMetaTablesRequest
       * @return SearchMetaTablesResponse
       */
      Models::SearchMetaTablesResponse searchMetaTables(const Models::SearchMetaTablesRequest &request);

      /**
       * @deprecated OpenAPI SearchNodesByOutput is deprecated
       *
       * @summary Queries a node based on the output.
       *
       * @param request SearchNodesByOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchNodesByOutputResponse
       */
      Models::SearchNodesByOutputResponse searchNodesByOutputWithOptions(const Models::SearchNodesByOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI SearchNodesByOutput is deprecated
       *
       * @summary Queries a node based on the output.
       *
       * @param request SearchNodesByOutputRequest
       * @return SearchNodesByOutputResponse
       */
      Models::SearchNodesByOutputResponse searchNodesByOutput(const Models::SearchNodesByOutputRequest &request);

      /**
       * @deprecated OpenAPI SetDataSourceShare is deprecated
       *
       * @summary Shares a data source to a specific DataWorks workspace or a specific user.
       *
       * @param request SetDataSourceShareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDataSourceShareResponse
       */
      Models::SetDataSourceShareResponse setDataSourceShareWithOptions(const Models::SetDataSourceShareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI SetDataSourceShare is deprecated
       *
       * @summary Shares a data source to a specific DataWorks workspace or a specific user.
       *
       * @param request SetDataSourceShareRequest
       * @return SetDataSourceShareResponse
       */
      Models::SetDataSourceShareResponse setDataSourceShare(const Models::SetDataSourceShareRequest &request);

      /**
       * @summary Configures tags for an entity. Only entities of the maxcompute-table type are supported.
       *
       * @param tmpReq SetEntityTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetEntityTagsResponse
       */
      Models::SetEntityTagsResponse setEntityTagsWithOptions(const Models::SetEntityTagsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures tags for an entity. Only entities of the maxcompute-table type are supported.
       *
       * @param request SetEntityTagsRequest
       * @return SetEntityTagsResponse
       */
      Models::SetEntityTagsResponse setEntityTags(const Models::SetEntityTagsRequest &request);

      /**
       * @summary Sets the state of a failed instance to successful.
       *
       * @param request SetSuccessInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSuccessInstanceResponse
       */
      Models::SetSuccessInstanceResponse setSuccessInstanceWithOptions(const Models::SetSuccessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the state of a failed instance to successful.
       *
       * @param request SetSuccessInstanceRequest
       * @return SetSuccessInstanceResponse
       */
      Models::SetSuccessInstanceResponse setSuccessInstance(const Models::SetSuccessInstanceRequest &request);

      /**
       * @summary Starts a synchronization task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @param tmpReq StartDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDIJobResponse
       */
      Models::StartDIJobResponse startDIJobWithOptions(const Models::StartDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a synchronization task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
       *
       * @param request StartDIJobRequest
       * @return StartDIJobResponse
       */
      Models::StartDIJobResponse startDIJob(const Models::StartDIJobRequest &request);

      /**
       * @summary Starts a real-time synchronization task or a synchronization solution.
       *
       * @param request StartDISyncInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDISyncInstanceResponse
       */
      Models::StartDISyncInstanceResponse startDISyncInstanceWithOptions(const Models::StartDISyncInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a real-time synchronization task or a synchronization solution.
       *
       * @param request StartDISyncInstanceRequest
       * @return StartDISyncInstanceResponse
       */
      Models::StartDISyncInstanceResponse startDISyncInstance(const Models::StartDISyncInstanceRequest &request);

      /**
       * @summary Starts a migration task.
       *
       * @param request StartMigrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMigrationResponse
       */
      Models::StartMigrationResponse startMigrationWithOptions(const Models::StartMigrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a migration task.
       *
       * @param request StartMigrationRequest
       * @return StartMigrationResponse
       */
      Models::StartMigrationResponse startMigration(const Models::StartMigrationRequest &request);

      /**
       * @summary Stops a new-version synchronization task. The following type of synchronization task is supported: real-time synchronization of all data in a MySQL database to Hologres.
       *
       * @param request StopDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDIJobResponse
       */
      Models::StopDIJobResponse stopDIJobWithOptions(const Models::StopDIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a new-version synchronization task. The following type of synchronization task is supported: real-time synchronization of all data in a MySQL database to Hologres.
       *
       * @param request StopDIJobRequest
       * @return StopDIJobResponse
       */
      Models::StopDIJobResponse stopDIJob(const Models::StopDIJobRequest &request);

      /**
       * @summary Stops a real-time synchronization task.
       *
       * @param request StopDISyncInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDISyncInstanceResponse
       */
      Models::StopDISyncInstanceResponse stopDISyncInstanceWithOptions(const Models::StopDISyncInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a real-time synchronization task.
       *
       * @param request StopDISyncInstanceRequest
       * @return StopDISyncInstanceResponse
       */
      Models::StopDISyncInstanceResponse stopDISyncInstance(const Models::StopDISyncInstanceRequest &request);

      /**
       * @summary Terminates an instance.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates an instance.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Submits an API in DataService Studio.
       *
       * @param request SubmitDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDataServiceApiResponse
       */
      Models::SubmitDataServiceApiResponse submitDataServiceApiWithOptions(const Models::SubmitDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an API in DataService Studio.
       *
       * @param request SubmitDataServiceApiRequest
       * @return SubmitDataServiceApiResponse
       */
      Models::SubmitDataServiceApiResponse submitDataServiceApi(const Models::SubmitDataServiceApiRequest &request);

      /**
       * @summary Commits a file to the development environment of the scheduling system to generate a task.
       *
       * @param request SubmitFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitFileResponse
       */
      Models::SubmitFileResponse submitFileWithOptions(const Models::SubmitFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Commits a file to the development environment of the scheduling system to generate a task.
       *
       * @param request SubmitFileRequest
       * @return SubmitFileResponse
       */
      Models::SubmitFileResponse submitFile(const Models::SubmitFileRequest &request);

      /**
       * @summary Suspends an instance.
       *
       * @param request SuspendInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendInstanceResponse
       */
      Models::SuspendInstanceResponse suspendInstanceWithOptions(const Models::SuspendInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends an instance.
       *
       * @param request SuspendInstanceRequest
       * @return SuspendInstanceResponse
       */
      Models::SuspendInstanceResponse suspendInstance(const Models::SuspendInstanceRequest &request);

      /**
       * @summary Undeploys a real-time synchronization task.
       *
       * @param request TerminateDISyncInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateDISyncInstanceResponse
       */
      Models::TerminateDISyncInstanceResponse terminateDISyncInstanceWithOptions(const Models::TerminateDISyncInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Undeploys a real-time synchronization task.
       *
       * @param request TerminateDISyncInstanceRequest
       * @return TerminateDISyncInstanceResponse
       */
      Models::TerminateDISyncInstanceResponse terminateDISyncInstance(const Models::TerminateDISyncInstanceRequest &request);

      /**
       * @summary Tests a DataService Studio API in asynchronous mode. You can call the GetDataServiceApiTest operation to query the test result.
       *
       * @param request TestDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestDataServiceApiResponse
       */
      Models::TestDataServiceApiResponse testDataServiceApiWithOptions(const Models::TestDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests a DataService Studio API in asynchronous mode. You can call the GetDataServiceApiTest operation to query the test result.
       *
       * @param request TestDataServiceApiRequest
       * @return TestDataServiceApiResponse
       */
      Models::TestDataServiceApiResponse testDataServiceApi(const Models::TestDataServiceApiRequest &request);

      /**
       * @summary Tests the network connectivity between a data source and a resource group.
       *
       * @param request TestNetworkConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestNetworkConnectionResponse
       */
      Models::TestNetworkConnectionResponse testNetworkConnectionWithOptions(const Models::TestNetworkConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the network connectivity between a data source and a resource group.
       *
       * @param request TestNetworkConnectionRequest
       * @return TestNetworkConnectionResponse
       */
      Models::TestNetworkConnectionResponse testNetworkConnection(const Models::TestNetworkConnectionRequest &request);

      /**
       * @summary Queries the ranking of the running durations of instances.
       *
       * @param request TopTenElapsedTimeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TopTenElapsedTimeInstanceResponse
       */
      Models::TopTenElapsedTimeInstanceResponse topTenElapsedTimeInstanceWithOptions(const Models::TopTenElapsedTimeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ranking of the running durations of instances.
       *
       * @param request TopTenElapsedTimeInstanceRequest
       * @return TopTenElapsedTimeInstanceResponse
       */
      Models::TopTenElapsedTimeInstanceResponse topTenElapsedTimeInstance(const Models::TopTenElapsedTimeInstanceRequest &request);

      /**
       * @summary Queries the ranking of nodes on which errors occur within the previous month.
       *
       * @param request TopTenErrorTimesInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TopTenErrorTimesInstanceResponse
       */
      Models::TopTenErrorTimesInstanceResponse topTenErrorTimesInstanceWithOptions(const Models::TopTenErrorTimesInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ranking of nodes on which errors occur within the previous month.
       *
       * @param request TopTenErrorTimesInstanceRequest
       * @return TopTenErrorTimesInstanceResponse
       */
      Models::TopTenErrorTimesInstanceResponse topTenErrorTimesInstance(const Models::TopTenErrorTimesInstanceRequest &request);

      /**
       * @summary Updates a baseline.
       *
       * @param tmpReq UpdateBaselineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBaselineResponse
       */
      Models::UpdateBaselineResponse updateBaselineWithOptions(const Models::UpdateBaselineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a baseline.
       *
       * @param request UpdateBaselineRequest
       * @return UpdateBaselineResponse
       */
      Models::UpdateBaselineResponse updateBaseline(const Models::UpdateBaselineRequest &request);

      /**
       * @summary Updates a workflow.
       *
       * @param request UpdateBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBusinessResponse
       */
      Models::UpdateBusinessResponse updateBusinessWithOptions(const Models::UpdateBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a workflow.
       *
       * @param request UpdateBusinessRequest
       * @return UpdateBusinessResponse
       */
      Models::UpdateBusinessResponse updateBusiness(const Models::UpdateBusinessRequest &request);

      /**
       * @summary Updates the configurations of submodules in a workspace. You can configure SPARK parameters.
       *
       * @param tmpReq UpdateClusterConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterConfigsResponse
       */
      Models::UpdateClusterConfigsResponse updateClusterConfigsWithOptions(const Models::UpdateClusterConfigsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of submodules in a workspace. You can configure SPARK parameters.
       *
       * @param request UpdateClusterConfigsRequest
       * @return UpdateClusterConfigsResponse
       */
      Models::UpdateClusterConfigsResponse updateClusterConfigs(const Models::UpdateClusterConfigsRequest &request);

      /**
       * @deprecated OpenAPI UpdateConnection is deprecated, please use dataworks-public::2020-05-18::UpdateDataSource instead.
       *
       * @summary Updates a data source.
       *
       * @param request UpdateConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnectionResponse
       */
      Models::UpdateConnectionResponse updateConnectionWithOptions(const Models::UpdateConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateConnection is deprecated, please use dataworks-public::2020-05-18::UpdateDataSource instead.
       *
       * @summary Updates a data source.
       *
       * @param request UpdateConnectionRequest
       * @return UpdateConnectionResponse
       */
      Models::UpdateConnectionResponse updateConnection(const Models::UpdateConnectionRequest &request);

      /**
       * @summary Updates an alert rule for a new-version synchronization task. The following type of task is supported: real-time synchronization of all data in a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks that can be used for real-time data synchronization. You must update all fields in the alert rule.
       *
       * @param tmpReq UpdateDIAlarmRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDIAlarmRuleResponse
       */
      Models::UpdateDIAlarmRuleResponse updateDIAlarmRuleWithOptions(const Models::UpdateDIAlarmRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an alert rule for a new-version synchronization task. The following type of task is supported: real-time synchronization of all data in a MySQL database to Hologres.
       *
       * @description You can configure alert rules only for tasks that can be used for real-time data synchronization. You must update all fields in the alert rule.
       *
       * @param request UpdateDIAlarmRuleRequest
       * @return UpdateDIAlarmRuleResponse
       */
      Models::UpdateDIAlarmRuleResponse updateDIAlarmRule(const Models::UpdateDIAlarmRuleRequest &request);

      /**
       * @summary Updates a new-version synchronization task. The following type of task is supported: real-time synchronization of all data in a MySQL database to Hologres.
       *
       * @param tmpReq UpdateDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDIJobResponse
       */
      Models::UpdateDIJobResponse updateDIJobWithOptions(const Models::UpdateDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a new-version synchronization task. The following type of task is supported: real-time synchronization of all data in a MySQL database to Hologres.
       *
       * @param request UpdateDIJobRequest
       * @return UpdateDIJobResponse
       */
      Models::UpdateDIJobResponse updateDIJob(const Models::UpdateDIJobRequest &request);

      /**
       * @summary Modifies the default global configuration of synchronization solutions in a DataWorks workspace.
       *
       * @description DataWorks allows you to specify a default global configuration only for the processing rules of DDL messages in synchronization solutions. After you configure the **processing rules of DDL messages** in synchronization solutions, the configuration is used as the default global configuration and applies to all real-time synchronization tasks in the solutions. You can modify the **processing rules of DDL messages** based on your business requirements. For more information about how to configure a synchronization solution, see [Synchronization solutions](https://help.aliyun.com/document_detail/199008.html).
       *
       * @param request UpdateDIProjectConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDIProjectConfigResponse
       */
      Models::UpdateDIProjectConfigResponse updateDIProjectConfigWithOptions(const Models::UpdateDIProjectConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the default global configuration of synchronization solutions in a DataWorks workspace.
       *
       * @description DataWorks allows you to specify a default global configuration only for the processing rules of DDL messages in synchronization solutions. After you configure the **processing rules of DDL messages** in synchronization solutions, the configuration is used as the default global configuration and applies to all real-time synchronization tasks in the solutions. You can modify the **processing rules of DDL messages** based on your business requirements. For more information about how to configure a synchronization solution, see [Synchronization solutions](https://help.aliyun.com/document_detail/199008.html).
       *
       * @param request UpdateDIProjectConfigRequest
       * @return UpdateDIProjectConfigResponse
       */
      Models::UpdateDIProjectConfigResponse updateDIProjectConfig(const Models::UpdateDIProjectConfigRequest &request);

      /**
       * @summary Updates a data synchronization task.
       *
       * @param request UpdateDISyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDISyncTaskResponse
       */
      Models::UpdateDISyncTaskResponse updateDISyncTaskWithOptions(const Models::UpdateDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data synchronization task.
       *
       * @param request UpdateDISyncTaskRequest
       * @return UpdateDISyncTaskResponse
       */
      Models::UpdateDISyncTaskResponse updateDISyncTask(const Models::UpdateDISyncTaskRequest &request);

      /**
       * @summary Updates the information about an API in the development state in DataService Studio.
       *
       * @param request UpdateDataServiceApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataServiceApiResponse
       */
      Models::UpdateDataServiceApiResponse updateDataServiceApiWithOptions(const Models::UpdateDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about an API in the development state in DataService Studio.
       *
       * @param request UpdateDataServiceApiRequest
       * @return UpdateDataServiceApiResponse
       */
      Models::UpdateDataServiceApiResponse updateDataServiceApi(const Models::UpdateDataServiceApiRequest &request);

      /**
       * @summary Updates a data source.
       *
       * @param request UpdateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSourceWithOptions(const Models::UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data source.
       *
       * @param request UpdateDataSourceRequest
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSource(const Models::UpdateDataSourceRequest &request);

      /**
       * @summary Updates a file.
       *
       * @description When you debug or call this operation, you must specify new values for the specified parameters to ensure that the values are different from the original configurations of the file. For example, if the original value of a parameter is A, you must change the value of this parameter to B before you commit the node. If you set the parameter to A, an exception that indicates invalid data occurs.
       *
       * @param request UpdateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileResponse
       */
      Models::UpdateFileResponse updateFileWithOptions(const Models::UpdateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a file.
       *
       * @description When you debug or call this operation, you must specify new values for the specified parameters to ensure that the values are different from the original configurations of the file. For example, if the original value of a parameter is A, you must change the value of this parameter to B before you commit the node. If you set the parameter to A, an exception that indicates invalid data occurs.
       *
       * @param request UpdateFileRequest
       * @return UpdateFileResponse
       */
      Models::UpdateFileResponse updateFile(const Models::UpdateFileRequest &request);

      /**
       * @summary Updates a folder.
       *
       * @param request UpdateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolderWithOptions(const Models::UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a folder.
       *
       * @param request UpdateFolderRequest
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolder(const Models::UpdateFolderRequest &request);

      /**
       * @summary Returns the check result of an extension point event to DataStudio after the extension point event is triggered during data development and checked by an extension.
       *
       * @param request UpdateIDEEventResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIDEEventResultResponse
       */
      Models::UpdateIDEEventResultResponse updateIDEEventResultWithOptions(const Models::UpdateIDEEventResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the check result of an extension point event to DataStudio after the extension point event is triggered during data development and checked by an extension.
       *
       * @param request UpdateIDEEventResultRequest
       * @return UpdateIDEEventResultResponse
       */
      Models::UpdateIDEEventResultResponse updateIDEEventResult(const Models::UpdateIDEEventResultRequest &request);

      /**
       * @summary Updates a category.
       *
       * @param request UpdateMetaCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaCategoryResponse
       */
      Models::UpdateMetaCategoryResponse updateMetaCategoryWithOptions(const Models::UpdateMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a category.
       *
       * @param request UpdateMetaCategoryRequest
       * @return UpdateMetaCategoryResponse
       */
      Models::UpdateMetaCategoryResponse updateMetaCategory(const Models::UpdateMetaCategoryRequest &request);

      /**
       * @summary Updates the name and comment of a collection.
       *
       * @description Only the name and comment of a collection can be updated.
       *
       * @param request UpdateMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaCollectionResponse
       */
      Models::UpdateMetaCollectionResponse updateMetaCollectionWithOptions(const Models::UpdateMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and comment of a collection.
       *
       * @description Only the name and comment of a collection can be updated.
       *
       * @param request UpdateMetaCollectionRequest
       * @return UpdateMetaCollectionResponse
       */
      Models::UpdateMetaCollectionResponse updateMetaCollection(const Models::UpdateMetaCollectionRequest &request);

      /**
       * @summary Updates the metadata information about a table. Only MaxCompute tables are supported.
       *
       * @param request UpdateMetaTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaTableResponse
       */
      Models::UpdateMetaTableResponse updateMetaTableWithOptions(const Models::UpdateMetaTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the metadata information about a table. Only MaxCompute tables are supported.
       *
       * @param request UpdateMetaTableRequest
       * @return UpdateMetaTableResponse
       */
      Models::UpdateMetaTableResponse updateMetaTable(const Models::UpdateMetaTableRequest &request);

      /**
       * @summary Updates the instructions on how to use a table. If no instruction on how to use the table is available, the instructions that are configured by calling this operation are added.
       *
       * @param request UpdateMetaTableIntroWikiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaTableIntroWikiResponse
       */
      Models::UpdateMetaTableIntroWikiResponse updateMetaTableIntroWikiWithOptions(const Models::UpdateMetaTableIntroWikiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the instructions on how to use a table. If no instruction on how to use the table is available, the instructions that are configured by calling this operation are added.
       *
       * @param request UpdateMetaTableIntroWikiRequest
       * @return UpdateMetaTableIntroWikiResponse
       */
      Models::UpdateMetaTableIntroWikiResponse updateMetaTableIntroWiki(const Models::UpdateMetaTableIntroWikiRequest &request);

      /**
       * @summary Changes the owner of a node.
       *
       * @param request UpdateNodeOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodeOwnerResponse
       */
      Models::UpdateNodeOwnerResponse updateNodeOwnerWithOptions(const Models::UpdateNodeOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the owner of a node.
       *
       * @param request UpdateNodeOwnerRequest
       * @return UpdateNodeOwnerResponse
       */
      Models::UpdateNodeOwnerResponse updateNodeOwner(const Models::UpdateNodeOwnerRequest &request);

      /**
       * @summary Freezes or unfreezes a node.
       *
       * @param request UpdateNodeRunModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodeRunModeResponse
       */
      Models::UpdateNodeRunModeResponse updateNodeRunModeWithOptions(const Models::UpdateNodeRunModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Freezes or unfreezes a node.
       *
       * @param request UpdateNodeRunModeRequest
       * @return UpdateNodeRunModeResponse
       */
      Models::UpdateNodeRunModeResponse updateNodeRunMode(const Models::UpdateNodeRunModeRequest &request);

      /**
       * @summary Updates a subscription relationship.
       *
       * @param request UpdateQualityFollowerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityFollowerResponse
       */
      Models::UpdateQualityFollowerResponse updateQualityFollowerWithOptions(const Models::UpdateQualityFollowerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a subscription relationship.
       *
       * @param request UpdateQualityFollowerRequest
       * @return UpdateQualityFollowerResponse
       */
      Models::UpdateQualityFollowerResponse updateQualityFollower(const Models::UpdateQualityFollowerRequest &request);

      /**
       * @summary Updates a monitoring rule.
       *
       * @param request UpdateQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQualityRuleResponse
       */
      Models::UpdateQualityRuleResponse updateQualityRuleWithOptions(const Models::UpdateQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a monitoring rule.
       *
       * @param request UpdateQualityRuleRequest
       * @return UpdateQualityRuleResponse
       */
      Models::UpdateQualityRuleResponse updateQualityRule(const Models::UpdateQualityRuleRequest &request);

      /**
       * @summary Modifies a custom alert rule.
       *
       * @param request UpdateRemindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRemindResponse
       */
      Models::UpdateRemindResponse updateRemindWithOptions(const Models::UpdateRemindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom alert rule.
       *
       * @param request UpdateRemindRequest
       * @return UpdateRemindResponse
       */
      Models::UpdateRemindResponse updateRemind(const Models::UpdateRemindRequest &request);

      /**
       * @summary Updates a MaxCompute table.
       *
       * @param request UpdateTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableResponse
       */
      Models::UpdateTableResponse updateTableWithOptions(const Models::UpdateTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a MaxCompute table.
       *
       * @param request UpdateTableRequest
       * @return UpdateTableResponse
       */
      Models::UpdateTableResponse updateTable(const Models::UpdateTableRequest &request);

      /**
       * @summary Updates the fields in a MaxCompute table.
       *
       * @param request UpdateTableAddColumnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableAddColumnResponse
       */
      Models::UpdateTableAddColumnResponse updateTableAddColumnWithOptions(const Models::UpdateTableAddColumnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the fields in a MaxCompute table.
       *
       * @param request UpdateTableAddColumnRequest
       * @return UpdateTableAddColumnResponse
       */
      Models::UpdateTableAddColumnResponse updateTableAddColumn(const Models::UpdateTableAddColumnRequest &request);

      /**
       * @summary Updates a table level. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request UpdateTableLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableLevelResponse
       */
      Models::UpdateTableLevelResponse updateTableLevelWithOptions(const Models::UpdateTableLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a table level. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request UpdateTableLevelRequest
       * @return UpdateTableLevelResponse
       */
      Models::UpdateTableLevelResponse updateTableLevel(const Models::UpdateTableLevelRequest &request);

      /**
       * @summary Modifies the information about a table, such as the table folder, level, and category.
       *
       * @param request UpdateTableModelInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableModelInfoResponse
       */
      Models::UpdateTableModelInfoResponse updateTableModelInfoWithOptions(const Models::UpdateTableModelInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a table, such as the table folder, level, and category.
       *
       * @param request UpdateTableModelInfoRequest
       * @return UpdateTableModelInfoResponse
       */
      Models::UpdateTableModelInfoResponse updateTableModelInfo(const Models::UpdateTableModelInfoRequest &request);

      /**
       * @summary Updates a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request UpdateTableThemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableThemeResponse
       */
      Models::UpdateTableThemeResponse updateTableThemeWithOptions(const Models::UpdateTableThemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
       *
       * @param request UpdateTableThemeRequest
       * @return UpdateTableThemeResponse
       */
      Models::UpdateTableThemeResponse updateTableTheme(const Models::UpdateTableThemeRequest &request);

      /**
       * @summary Updates the file information about a function.
       *
       * @param request UpdateUdfFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUdfFileResponse
       */
      Models::UpdateUdfFileResponse updateUdfFileWithOptions(const Models::UpdateUdfFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the file information about a function.
       *
       * @param request UpdateUdfFileRequest
       * @return UpdateUdfFileResponse
       */
      Models::UpdateUdfFileResponse updateUdfFile(const Models::UpdateUdfFileRequest &request);

      /**
       * @summary Returns the processing result sent by an extension after a process in Operation Center is blocked by the extension.
       *
       * @param request UpdateWorkbenchEventResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkbenchEventResultResponse
       */
      Models::UpdateWorkbenchEventResultResponse updateWorkbenchEventResultWithOptions(const Models::UpdateWorkbenchEventResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the processing result sent by an extension after a process in Operation Center is blocked by the extension.
       *
       * @param request UpdateWorkbenchEventResultRequest
       * @return UpdateWorkbenchEventResultResponse
       */
      Models::UpdateWorkbenchEventResultResponse updateWorkbenchEventResult(const Models::UpdateWorkbenchEventResultRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
