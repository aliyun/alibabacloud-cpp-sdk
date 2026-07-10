// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DATAWORKSPUBLIC20240518_HPP_
#define ALIBABACLOUD_DATAWORKSPUBLIC20240518_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DataworksPublic20240518Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DataworksPublic20240518.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Terminates the specified deployment process. This operation changes the status of the process to Terminated but does not delete the process. You can still query the process.
       *
       * @description >Notice: 
       * This API may not be available in earlier versions of the SDK. In that case, use the AbolishDeployment API, which accepts the same parameters.
       *
       * @param request AbolishPipelineRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbolishPipelineRunResponse
       */
      Models::AbolishPipelineRunResponse abolishPipelineRunWithOptions(const Models::AbolishPipelineRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates the specified deployment process. This operation changes the status of the process to Terminated but does not delete the process. You can still query the process.
       *
       * @description >Notice: 
       * This API may not be available in earlier versions of the SDK. In that case, use the AbolishDeployment API, which accepts the same parameters.
       *
       * @param request AbolishPipelineRunRequest
       * @return AbolishPipelineRunResponse
       */
      Models::AbolishPipelineRunResponse abolishPipelineRun(const Models::AbolishPipelineRunRequest &request);

      /**
       * @summary Adds an entity to a collection in Data Map. Collections include categories and data albums. Entities can be only tables. If you want to add an entity to a data album, the account that you use must be attached the AliyunDataWorksFullAccess policy, or you are the data album creator or administrator.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request AddEntityIntoMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEntityIntoMetaCollectionResponse
       */
      Models::AddEntityIntoMetaCollectionResponse addEntityIntoMetaCollectionWithOptions(const Models::AddEntityIntoMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an entity to a collection in Data Map. Collections include categories and data albums. Entities can be only tables. If you want to add an entity to a data album, the account that you use must be attached the AliyunDataWorksFullAccess policy, or you are the data album creator or administrator.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request AddEntityIntoMetaCollectionRequest
       * @return AddEntityIntoMetaCollectionResponse
       */
      Models::AddEntityIntoMetaCollectionResponse addEntityIntoMetaCollection(const Models::AddEntityIntoMetaCollectionRequest &request);

      /**
       * @summary Submits an application for access permissions on a specific resource.
       *
       * @description ## Request Description
       * - **Reason**: The reason for the application. This parameter is required.
       * - **ApplyContents**: Contains multiple resource permission application contents, each including the resource description (Resource), grantee description (Grantee), permission types (AccessTypes), and permission expiration time (ExpirationTime). The maximum limit per request is 400 entries.
       * - **Resource**: The resource description. You need to specify the ResourceSchema.name and version that the resource parsing depends on, as well as the resource metadata MetaData.
       * - **Grantee**: The grantee description. You need to specify the grantee type (PrincipalType) and the principal ID (PrincipalId).
       * - **AccessTypes**: The list of permission types. Multiple permission combinations are supported.
       * - **ExpirationTime**: The permission expiration time, provided as a milliseconds timestamp.
       * - **AuthMethod**: An optional parameter that specifies the authorization method. The system uses the built-in default authorization method if not specified.
       * - **ClientToken**: The client token used to prevent duplicate requests. This parameter is optional.
       * Ensure all required fields are filled in correctly and comply with the corresponding constraints. For example, `DefVersion` and `MetaData` in `Resource` should match the selected `DefSchema`.
       *
       * @param tmpReq ApplyResourceAccessPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyResourceAccessPermissionResponse
       */
      Models::ApplyResourceAccessPermissionResponse applyResourceAccessPermissionWithOptions(const Models::ApplyResourceAccessPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an application for access permissions on a specific resource.
       *
       * @description ## Request Description
       * - **Reason**: The reason for the application. This parameter is required.
       * - **ApplyContents**: Contains multiple resource permission application contents, each including the resource description (Resource), grantee description (Grantee), permission types (AccessTypes), and permission expiration time (ExpirationTime). The maximum limit per request is 400 entries.
       * - **Resource**: The resource description. You need to specify the ResourceSchema.name and version that the resource parsing depends on, as well as the resource metadata MetaData.
       * - **Grantee**: The grantee description. You need to specify the grantee type (PrincipalType) and the principal ID (PrincipalId).
       * - **AccessTypes**: The list of permission types. Multiple permission combinations are supported.
       * - **ExpirationTime**: The permission expiration time, provided as a milliseconds timestamp.
       * - **AuthMethod**: An optional parameter that specifies the authorization method. The system uses the built-in default authorization method if not specified.
       * - **ClientToken**: The client token used to prevent duplicate requests. This parameter is optional.
       * Ensure all required fields are filled in correctly and comply with the corresponding constraints. For example, `DefVersion` and `MetaData` in `Resource` should match the selected `DefSchema`.
       *
       * @param request ApplyResourceAccessPermissionRequest
       * @return ApplyResourceAccessPermissionResponse
       */
      Models::ApplyResourceAccessPermissionResponse applyResourceAccessPermission(const Models::ApplyResourceAccessPermissionRequest &request);

      /**
       * @summary Approves or rejects a specified approval process instance.
       *
       * @description ## Request description
       * - This operation allows you to approve or reject a specified approval process instance by passing in the ProcessInstanceId and approval information (including ApprovalComment and ApprovalAction).
       * - ApprovalAction can be Agree or Deny, indicating approval or rejection respectively.
       * - ApprovalComment is required and records the specific approval opinion.
       *
       * @param request ApproveProcessInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveProcessInstanceResponse
       */
      Models::ApproveProcessInstanceResponse approveProcessInstanceWithOptions(const Models::ApproveProcessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Approves or rejects a specified approval process instance.
       *
       * @description ## Request description
       * - This operation allows you to approve or reject a specified approval process instance by passing in the ProcessInstanceId and approval information (including ApprovalComment and ApprovalAction).
       * - ApprovalAction can be Agree or Deny, indicating approval or rejection respectively.
       * - ApprovalComment is required and records the specific approval opinion.
       *
       * @param request ApproveProcessInstanceRequest
       * @return ApproveProcessInstanceResponse
       */
      Models::ApproveProcessInstanceResponse approveProcessInstance(const Models::ApproveProcessInstanceRequest &request);

      /**
       * @summary Associates an image with a workspace.
       *
       * @description 1. You must purchase DataWorks Basic Edition or later to use this operation.
       * 2. **Ensure the AliyunServiceRoleForDataWorks service-linked role is created before you call this operation.**
       *
       * @param request AssociateProjectToImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateProjectToImageResponse
       */
      Models::AssociateProjectToImageResponse associateProjectToImageWithOptions(const Models::AssociateProjectToImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an image with a workspace.
       *
       * @description 1. You must purchase DataWorks Basic Edition or later to use this operation.
       * 2. **Ensure the AliyunServiceRoleForDataWorks service-linked role is created before you call this operation.**
       *
       * @param request AssociateProjectToImageRequest
       * @return AssociateProjectToImageResponse
       */
      Models::AssociateProjectToImageResponse associateProjectToImage(const Models::AssociateProjectToImageRequest &request);

      /**
       * @summary Associates a resource group with a workspace.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a more advanced edition.
       * 2. You must have one of the following roles in the DataWorks workspace:
       * - tenant owner, workspace administrator, project owner, or operator
       *
       * @param request AssociateProjectToResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateProjectToResourceGroupResponse
       */
      Models::AssociateProjectToResourceGroupResponse associateProjectToResourceGroupWithOptions(const Models::AssociateProjectToResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a resource group with a workspace.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a more advanced edition.
       * 2. You must have one of the following roles in the DataWorks workspace:
       * - tenant owner, workspace administrator, project owner, or operator
       *
       * @param request AssociateProjectToResourceGroupRequest
       * @return AssociateProjectToResourceGroupResponse
       */
      Models::AssociateProjectToResourceGroupResponse associateProjectToResourceGroup(const Models::AssociateProjectToResourceGroupRequest &request);

      /**
       * @deprecated OpenAPI AttachDataQualityRulesToEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
       *
       * @summary Associates data quality rules with a data quality monitoring task.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param tmpReq AttachDataQualityRulesToEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDataQualityRulesToEvaluationTaskResponse
       */
      Models::AttachDataQualityRulesToEvaluationTaskResponse attachDataQualityRulesToEvaluationTaskWithOptions(const Models::AttachDataQualityRulesToEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AttachDataQualityRulesToEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
       *
       * @summary Associates data quality rules with a data quality monitoring task.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param request AttachDataQualityRulesToEvaluationTaskRequest
       * @return AttachDataQualityRulesToEvaluationTaskResponse
       */
      Models::AttachDataQualityRulesToEvaluationTaskResponse attachDataQualityRulesToEvaluationTask(const Models::AttachDataQualityRulesToEvaluationTaskRequest &request);

      /**
       * @summary Creates metadata entities in a batch. All entities within a batch must have the same entity type. This operation currently supports only custom types and extended table types, which represent databases and tables.
       *
       * @description You must purchase DataWorks Professional Edition or a higher edition to use this operation.
       *
       * @param tmpReq BatchCreateMetaEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateMetaEntitiesResponse
       */
      Models::BatchCreateMetaEntitiesResponse batchCreateMetaEntitiesWithOptions(const Models::BatchCreateMetaEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates metadata entities in a batch. All entities within a batch must have the same entity type. This operation currently supports only custom types and extended table types, which represent databases and tables.
       *
       * @description You must purchase DataWorks Professional Edition or a higher edition to use this operation.
       *
       * @param request BatchCreateMetaEntitiesRequest
       * @return BatchCreateMetaEntitiesResponse
       */
      Models::BatchCreateMetaEntitiesResponse batchCreateMetaEntities(const Models::BatchCreateMetaEntitiesRequest &request);

      /**
       * @summary Deletes multiple meta entities in a batch. This operation deletes custom meta entities and extended table-based objects, such as databases and tables. You cannot delete a column individually. Instead, you must delete the entire table to remove its associated columns.
       *
       * @description This operation requires DataWorks Professional Edition or higher.
       *
       * @param tmpReq BatchDeleteMetaEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteMetaEntitiesResponse
       */
      Models::BatchDeleteMetaEntitiesResponse batchDeleteMetaEntitiesWithOptions(const Models::BatchDeleteMetaEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple meta entities in a batch. This operation deletes custom meta entities and extended table-based objects, such as databases and tables. You cannot delete a column individually. Instead, you must delete the entire table to remove its associated columns.
       *
       * @description This operation requires DataWorks Professional Edition or higher.
       *
       * @param request BatchDeleteMetaEntitiesRequest
       * @return BatchDeleteMetaEntitiesResponse
       */
      Models::BatchDeleteMetaEntitiesResponse batchDeleteMetaEntities(const Models::BatchDeleteMetaEntitiesRequest &request);

      /**
       * @summary Performs incremental updates on multiple tasks at a time.
       *
       * @description DataWorks Basic Edition or higher is required.
       *
       * @param tmpReq BatchUpdateTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateTasksResponse
       */
      Models::BatchUpdateTasksResponse batchUpdateTasksWithOptions(const Models::BatchUpdateTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs incremental updates on multiple tasks at a time.
       *
       * @description DataWorks Basic Edition or higher is required.
       *
       * @param request BatchUpdateTasksRequest
       * @return BatchUpdateTasksResponse
       */
      Models::BatchUpdateTasksResponse batchUpdateTasks(const Models::BatchUpdateTasksRequest &request);

      /**
       * @summary Cancels an agent call in a specified session. This operation also supports interrupting an ongoing streaming response.
       *
       * @description ## Description
       * - This operation is used to actively interrupt an ongoing session, especially when the session is generating a streaming response.
       * - `sessionId` is a required parameter that identifies the specific session to cancel.
       *
       * @param tmpReq CancelAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAgentSessionResponse
       */
      Models::CancelAgentSessionResponse cancelAgentSessionWithOptions(const Models::CancelAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an agent call in a specified session. This operation also supports interrupting an ongoing streaming response.
       *
       * @description ## Description
       * - This operation is used to actively interrupt an ongoing session, especially when the session is generating a streaming response.
       * - `sessionId` is a required parameter that identifies the specific session to cancel.
       *
       * @param request CancelAgentSessionRequest
       * @return CancelAgentSessionResponse
       */
      Models::CancelAgentSessionResponse cancelAgentSession(const Models::CancelAgentSessionRequest &request);

      /**
       * @summary Clones a data source to create a new data source with the same configurations.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To call this operation, you must have one of the following roles in DataWorks:
       * - Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request CloneDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneDataSourceResponse
       */
      Models::CloneDataSourceResponse cloneDataSourceWithOptions(const Models::CloneDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a data source to create a new data source with the same configurations.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To call this operation, you must have one of the following roles in DataWorks:
       * - Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request CloneDataSourceRequest
       * @return CloneDataSourceResponse
       */
      Models::CloneDataSourceResponse cloneDataSource(const Models::CloneDataSourceRequest &request);

      /**
       * @summary Create Agent
       *
       * @description ## Request Description
       * - **Agent Name**: Must be unique under the current account.
       * - **Model Configuration**: An optional parameter used to specify the model used by the Agent and its related settings.
       * - **Visibility Level**: Defines who can access the Agent. Supports visibility within the account, to specified projects, or to specific users.
       * - **Visibility Scope**: When `PROJECT` or `USER` is selected as the visibility level, the specific project ID or user ID list must be further specified.
       * - **Other Parameters**: Items such as display name and description are optional and can be filled in based on actual needs.
       *
       * @param tmpReq CreateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgentWithOptions(const Models::CreateAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Agent
       *
       * @description ## Request Description
       * - **Agent Name**: Must be unique under the current account.
       * - **Model Configuration**: An optional parameter used to specify the model used by the Agent and its related settings.
       * - **Visibility Level**: Defines who can access the Agent. Supports visibility within the account, to specified projects, or to specific users.
       * - **Visibility Scope**: When `PROJECT` or `USER` is selected as the visibility level, the specific project ID or user ID list must be further specified.
       * - **Other Parameters**: Items such as display name and description are optional and can be filled in based on actual needs.
       *
       * @param request CreateAgentRequest
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgent(const Models::CreateAgentRequest &request);

      /**
       * @summary Creates a new agent session and returns a session ID.
       *
       * @description ## Description
       * - This API creates a new agent session.
       * - You must specify the agent name to bind to the session using the `_meta.agent.agentName` parameter.
       * - You can specify a session source identifier in the `_meta.config.sessionSource` parameter. This allows you to search for sessions by source later.
       * - You can add session tags using the `_meta.config.sessionTags[].sessionTagCode` parameter.
       *
       * @param tmpReq CreateAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSessionResponse
       */
      Models::CreateAgentSessionResponse createAgentSessionWithOptions(const Models::CreateAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new agent session and returns a session ID.
       *
       * @description ## Description
       * - This API creates a new agent session.
       * - You must specify the agent name to bind to the session using the `_meta.agent.agentName` parameter.
       * - You can specify a session source identifier in the `_meta.config.sessionSource` parameter. This allows you to search for sessions by source later.
       * - You can add session tags using the `_meta.config.sessionTags[].sessionTagCode` parameter.
       *
       * @param request CreateAgentSessionRequest
       * @return CreateAgentSessionResponse
       */
      Models::CreateAgentSessionResponse createAgentSession(const Models::CreateAgentSessionRequest &request);

      /**
       * @summary Creates a custom monitoring alert rule.
       *
       * @param tmpReq CreateAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAlertRuleResponse
       */
      Models::CreateAlertRuleResponse createAlertRuleWithOptions(const Models::CreateAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom monitoring alert rule.
       *
       * @param request CreateAlertRuleRequest
       * @return CreateAlertRuleResponse
       */
      Models::CreateAlertRuleResponse createAlertRule(const Models::CreateAlertRuleRequest &request);

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
       * @summary Creates components.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you specify multiple entities to be published, all entities except the first one are ignored.
       *
       * @param request CreateComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComponentResponse
       */
      Models::CreateComponentResponse createComponentWithOptions(const Models::CreateComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates components.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you specify multiple entities to be published, all entities except the first one are ignored.
       *
       * @param request CreateComponentRequest
       * @return CreateComponentResponse
       */
      Models::CreateComponentResponse createComponent(const Models::CreateComponentRequest &request);

      /**
       * @summary Creates a computing resource in the specified workspace. The resource can be for a development environment or a production environment.
       *
       * @description DataWorks Basic Edition or a more advanced edition is required.
       * You must have at least one of the following roles in the DataWorks workspace:
       * Tenant Owner, Workspace Administrator, Project Owner, O\\&M
       *
       * @param request CreateComputeResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeResourceResponse
       */
      Models::CreateComputeResourceResponse createComputeResourceWithOptions(const Models::CreateComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a computing resource in the specified workspace. The resource can be for a development environment or a production environment.
       *
       * @description DataWorks Basic Edition or a more advanced edition is required.
       * You must have at least one of the following roles in the DataWorks workspace:
       * Tenant Owner, Workspace Administrator, Project Owner, O\\&M
       *
       * @param request CreateComputeResourceRequest
       * @return CreateComputeResourceResponse
       */
      Models::CreateComputeResourceResponse createComputeResource(const Models::CreateComputeResourceRequest &request);

      /**
       * @summary Creates a custom attribute definition.
       *
       * @param tmpReq CreateCustomAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAttributeResponse
       */
      Models::CreateCustomAttributeResponse createCustomAttributeWithOptions(const Models::CreateCustomAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom attribute definition.
       *
       * @param request CreateCustomAttributeRequest
       * @return CreateCustomAttributeResponse
       */
      Models::CreateCustomAttributeResponse createCustomAttribute(const Models::CreateCustomAttributeRequest &request);

      /**
       * @summary Creates an alert rule for a synchronization task.
       *
       * @param tmpReq CreateDIAlarmRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDIAlarmRuleResponse
       */
      Models::CreateDIAlarmRuleResponse createDIAlarmRuleWithOptions(const Models::CreateDIAlarmRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert rule for a synchronization task.
       *
       * @param request CreateDIAlarmRuleRequest
       * @return CreateDIAlarmRuleResponse
       */
      Models::CreateDIAlarmRuleResponse createDIAlarmRule(const Models::CreateDIAlarmRuleRequest &request);

      /**
       * @summary Create a new version of a data integration task.
       *
       * @description - This API requires DataWorks Basic Edition or a higher edition.
       * - This API creates a data integration synchronization task. Key parameters include `SourceDataSourceSettings`, `DestinationDataSourceSettings`, and `MigrationType`. The `TransformationRules` parameter defines transformation rules for synchronized tables, such as adding columns or replacing table names. The `TableMappings` parameter specifies which tables to synchronize and their mapping rules. The `JobSettings` parameter configures task settings, including column mapping and scheduling.
       *
       * @param tmpReq CreateDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDIJobResponse
       */
      Models::CreateDIJobResponse createDIJobWithOptions(const Models::CreateDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new version of a data integration task.
       *
       * @description - This API requires DataWorks Basic Edition or a higher edition.
       * - This API creates a data integration synchronization task. Key parameters include `SourceDataSourceSettings`, `DestinationDataSourceSettings`, and `MigrationType`. The `TransformationRules` parameter defines transformation rules for synchronized tables, such as adding columns or replacing table names. The `TableMappings` parameter specifies which tables to synchronize and their mapping rules. The `JobSettings` parameter configures task settings, including column mapping and scheduling.
       *
       * @param request CreateDIJobRequest
       * @return CreateDIJobResponse
       */
      Models::CreateDIJobResponse createDIJob(const Models::CreateDIJobRequest &request);

      /**
       * @summary Creates a tag.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param tmpReq CreateDataAssetTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataAssetTagResponse
       */
      Models::CreateDataAssetTagResponse createDataAssetTagWithOptions(const Models::CreateDataAssetTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tag.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param request CreateDataAssetTagRequest
       * @return CreateDataAssetTagResponse
       */
      Models::CreateDataAssetTagResponse createDataAssetTag(const Models::CreateDataAssetTagRequest &request);

      /**
       * @summary Creates a data quality monitoring alert rule in a project.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param tmpReq CreateDataQualityAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityAlertRuleResponse
       */
      Models::CreateDataQualityAlertRuleResponse createDataQualityAlertRuleWithOptions(const Models::CreateDataQualityAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality monitoring alert rule in a project.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request CreateDataQualityAlertRuleRequest
       * @return CreateDataQualityAlertRuleResponse
       */
      Models::CreateDataQualityAlertRuleResponse createDataQualityAlertRule(const Models::CreateDataQualityAlertRuleRequest &request);

      /**
       * @deprecated OpenAPI CreateDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
       *
       * @summary Creates a DataWorks data quality monitor.
       *
       * @description DataWorks Basic Edition or higher is required.
       *
       * @param tmpReq CreateDataQualityEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityEvaluationTaskResponse
       */
      Models::CreateDataQualityEvaluationTaskResponse createDataQualityEvaluationTaskWithOptions(const Models::CreateDataQualityEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
       *
       * @summary Creates a DataWorks data quality monitor.
       *
       * @description DataWorks Basic Edition or higher is required.
       *
       * @param request CreateDataQualityEvaluationTaskRequest
       * @return CreateDataQualityEvaluationTaskResponse
       */
      Models::CreateDataQualityEvaluationTaskResponse createDataQualityEvaluationTask(const Models::CreateDataQualityEvaluationTaskRequest &request);

      /**
       * @deprecated OpenAPI CreateDataQualityEvaluationTaskInstance is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScanRun instead.
       *
       * @summary Creates a data quality evaluation task instance.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this operation.
       *
       * @param tmpReq CreateDataQualityEvaluationTaskInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityEvaluationTaskInstanceResponse
       */
      Models::CreateDataQualityEvaluationTaskInstanceResponse createDataQualityEvaluationTaskInstanceWithOptions(const Models::CreateDataQualityEvaluationTaskInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateDataQualityEvaluationTaskInstance is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScanRun instead.
       *
       * @summary Creates a data quality evaluation task instance.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this operation.
       *
       * @param request CreateDataQualityEvaluationTaskInstanceRequest
       * @return CreateDataQualityEvaluationTaskInstanceResponse
       */
      Models::CreateDataQualityEvaluationTaskInstanceResponse createDataQualityEvaluationTaskInstance(const Models::CreateDataQualityEvaluationTaskInstanceRequest &request);

      /**
       * @deprecated OpenAPI CreateDataQualityRule is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
       *
       * @summary Creates a data quality rule.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param tmpReq CreateDataQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityRuleResponse
       */
      Models::CreateDataQualityRuleResponse createDataQualityRuleWithOptions(const Models::CreateDataQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateDataQualityRule is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
       *
       * @summary Creates a data quality rule.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param request CreateDataQualityRuleRequest
       * @return CreateDataQualityRuleResponse
       */
      Models::CreateDataQualityRuleResponse createDataQualityRule(const Models::CreateDataQualityRuleRequest &request);

      /**
       * @deprecated OpenAPI CreateDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityTemplate instead.
       *
       * @summary Creates a rule template.
       *
       * @description You must purchase DataWorks Basic Edition or above to use this feature.
       *
       * @param tmpReq CreateDataQualityRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityRuleTemplateResponse
       */
      Models::CreateDataQualityRuleTemplateResponse createDataQualityRuleTemplateWithOptions(const Models::CreateDataQualityRuleTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityTemplate instead.
       *
       * @summary Creates a rule template.
       *
       * @description You must purchase DataWorks Basic Edition or above to use this feature.
       *
       * @param request CreateDataQualityRuleTemplateRequest
       * @return CreateDataQualityRuleTemplateResponse
       */
      Models::CreateDataQualityRuleTemplateResponse createDataQualityRuleTemplate(const Models::CreateDataQualityRuleTemplateRequest &request);

      /**
       * @summary Creates a data quality monitor.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param tmpReq CreateDataQualityScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityScanResponse
       */
      Models::CreateDataQualityScanResponse createDataQualityScanWithOptions(const Models::CreateDataQualityScanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality monitor.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request CreateDataQualityScanRequest
       * @return CreateDataQualityScanResponse
       */
      Models::CreateDataQualityScanResponse createDataQualityScan(const Models::CreateDataQualityScanRequest &request);

      /**
       * @summary Triggers the specified data quality scan and returns the run ID.
       *
       * @description This operation is available only in DataWorks Basic Edition and later versions.
       *
       * @param tmpReq CreateDataQualityScanRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityScanRunResponse
       */
      Models::CreateDataQualityScanRunResponse createDataQualityScanRunWithOptions(const Models::CreateDataQualityScanRunRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers the specified data quality scan and returns the run ID.
       *
       * @description This operation is available only in DataWorks Basic Edition and later versions.
       *
       * @param request CreateDataQualityScanRunRequest
       * @return CreateDataQualityScanRunResponse
       */
      Models::CreateDataQualityScanRunResponse createDataQualityScanRun(const Models::CreateDataQualityScanRunRequest &request);

      /**
       * @summary Creates a data quality template.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request CreateDataQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityTemplateResponse
       */
      Models::CreateDataQualityTemplateResponse createDataQualityTemplateWithOptions(const Models::CreateDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality template.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request CreateDataQualityTemplateRequest
       * @return CreateDataQualityTemplateResponse
       */
      Models::CreateDataQualityTemplateResponse createDataQualityTemplate(const Models::CreateDataQualityTemplateRequest &request);

      /**
       * @summary Adds a data source to the development environment or production environment of a workspace.
       *
       * @param request CreateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const Models::CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a data source to the development environment or production environment of a workspace.
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const Models::CreateDataSourceRequest &request);

      /**
       * @summary Creates a sharing rule for a data source to share it with other workspaces or RAM users.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To share a data source from Workspace A to Workspace B, you must have the data source sharing permissions in both workspaces. You must have one of the following roles in DataWorks:
       * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request CreateDataSourceSharedRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceSharedRuleResponse
       */
      Models::CreateDataSourceSharedRuleResponse createDataSourceSharedRuleWithOptions(const Models::CreateDataSourceSharedRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sharing rule for a data source to share it with other workspaces or RAM users.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To share a data source from Workspace A to Workspace B, you must have the data source sharing permissions in both workspaces. You must have one of the following roles in DataWorks:
       * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request CreateDataSourceSharedRuleRequest
       * @return CreateDataSourceSharedRuleResponse
       */
      Models::CreateDataSourceSharedRuleResponse createDataSourceSharedRule(const Models::CreateDataSourceSharedRuleRequest &request);

      /**
       * @summary Creates a dataset. This operation is supported only in workspaces that the user has joined. Currently, only DataWorks datasets are supported. The maximum number of datasets allowed per tenant is 2,000.
       *
       * @param tmpReq CreateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const Models::CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset. This operation is supported only in workspaces that the user has joined. Currently, only DataWorks datasets are supported. The maximum number of datasets allowed per tenant is 2,000.
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const Models::CreateDatasetRequest &request);

      /**
       * @summary Creates a dataset version. Currently supports DataWorks datasets only, with a maximum of 20 versions.
       *
       * @param tmpReq CreateDatasetVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetVersionResponse
       */
      Models::CreateDatasetVersionResponse createDatasetVersionWithOptions(const Models::CreateDatasetVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset version. Currently supports DataWorks datasets only, with a maximum of 20 versions.
       *
       * @param request CreateDatasetVersionRequest
       * @return CreateDatasetVersionResponse
       */
      Models::CreateDatasetVersionResponse createDatasetVersion(const Models::CreateDatasetVersionRequest &request);

      /**
       * @summary Creates a file in DataStudio. You cannot call this operation to create Data Integration nodes.
       *
       * @param request CreateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFileWithOptions(const Models::CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file in DataStudio. You cannot call this operation to create Data Integration nodes.
       *
       * @param request CreateFileRequest
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFile(const Models::CreateFileRequest &request);

      /**
       * @summary Creates a folder.
       *
       * @param request CreateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolderWithOptions(const Models::CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a folder.
       *
       * @param request CreateFolderRequest
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolder(const Models::CreateFolderRequest &request);

      /**
       * @summary Creates a user-defined function (UDF) in DataStudio. The information about the UDF is described by using FlowSpec.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one UDF in the FlowSpec, all UDFs except the first one are ignored.
       *
       * @param request CreateFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunctionWithOptions(const Models::CreateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-defined function (UDF) in DataStudio. The information about the UDF is described by using FlowSpec.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one UDF in the FlowSpec, all UDFs except the first one are ignored.
       *
       * @param request CreateFunctionRequest
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunction(const Models::CreateFunctionRequest &request);

      /**
       * @summary Creates an identity credential.
       *
       * @description >Notice: 
       * This operation does not support batch processing. If you specify multiple entities in the request parameters, only the first entity is processed and the rest are ignored.
       *
       * @param tmpReq CreateIdentifyCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentifyCredentialResponse
       */
      Models::CreateIdentifyCredentialResponse createIdentifyCredentialWithOptions(const Models::CreateIdentifyCredentialRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an identity credential.
       *
       * @description >Notice: 
       * This operation does not support batch processing. If you specify multiple entities in the request parameters, only the first entity is processed and the rest are ignored.
       *
       * @param request CreateIdentifyCredentialRequest
       * @return CreateIdentifyCredentialResponse
       */
      Models::CreateIdentifyCredentialResponse createIdentifyCredential(const Models::CreateIdentifyCredentialRequest &request);

      /**
       * @summary Registers a data lineage relationship in DataWorks Data Map. You can use this operation to establish lineage relationships between metadata entities managed by DataWorks, including table-to-table, column-to-column, table-to-column, and dataset-to-table scenarios. You can also establish lineage relationships between managed entities and custom entity objects registered by users. This operation is compatible with non-managed custom objects, but this approach is no longer recommended. Before calling this operation, make sure that the managed entities involved in the lineage registration already exist on the DataWorks platform.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param tmpReq CreateLineageRelationshipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLineageRelationshipResponse
       */
      Models::CreateLineageRelationshipResponse createLineageRelationshipWithOptions(const Models::CreateLineageRelationshipRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a data lineage relationship in DataWorks Data Map. You can use this operation to establish lineage relationships between metadata entities managed by DataWorks, including table-to-table, column-to-column, table-to-column, and dataset-to-table scenarios. You can also establish lineage relationships between managed entities and custom entity objects registered by users. This operation is compatible with non-managed custom objects, but this approach is no longer recommended. Before calling this operation, make sure that the managed entities involved in the lineage registration already exist on the DataWorks platform.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request CreateLineageRelationshipRequest
       * @return CreateLineageRelationshipResponse
       */
      Models::CreateLineageRelationshipResponse createLineageRelationship(const Models::CreateLineageRelationshipRequest &request);

      /**
       * @summary Creates an MCP Server.
       *
       * @description ## Usage notes
       * - When you submit a request, the system verifies the availability of the MCP Server based on the connection configuration.
       * - If the MCP Server connection is unavailable, the API returns an error message.
       * - The `Name` must be unique at the tenant level, start with a lowercase letter, and contain only lowercase letters, digits, underscores (_), and hyphens (-).
       * - The `Visibility` parameter specifies the visibility level of the MCP Server. Valid values are `TENANT` (visible within the tenant), `PROJECT` (visible to specified projects), and `USER` (visible to specified users). You must also provide the `VisibilityScope` parameter to define the scope based on the selected visibility level.
       *
       * @param tmpReq CreateMcpServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcpServerResponse
       */
      Models::CreateMcpServerResponse createMcpServerWithOptions(const Models::CreateMcpServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an MCP Server.
       *
       * @description ## Usage notes
       * - When you submit a request, the system verifies the availability of the MCP Server based on the connection configuration.
       * - If the MCP Server connection is unavailable, the API returns an error message.
       * - The `Name` must be unique at the tenant level, start with a lowercase letter, and contain only lowercase letters, digits, underscores (_), and hyphens (-).
       * - The `Visibility` parameter specifies the visibility level of the MCP Server. Valid values are `TENANT` (visible within the tenant), `PROJECT` (visible to specified projects), and `USER` (visible to specified users). You must also provide the `VisibilityScope` parameter to define the scope based on the selected visibility level.
       *
       * @param request CreateMcpServerRequest
       * @return CreateMcpServerResponse
       */
      Models::CreateMcpServerResponse createMcpServer(const Models::CreateMcpServerRequest &request);

      /**
       * @summary Creates a collection in Data Map. Collections include categories, subcategories, data albums, and categories that are created in the data albums.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request CreateMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetaCollectionResponse
       */
      Models::CreateMetaCollectionResponse createMetaCollectionWithOptions(const Models::CreateMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a collection in Data Map. Collections include categories, subcategories, data albums, and categories that are created in the data albums.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request CreateMetaCollectionRequest
       * @return CreateMetaCollectionResponse
       */
      Models::CreateMetaCollectionResponse createMetaCollection(const Models::CreateMetaCollectionRequest &request);

      /**
       * @summary Creates a metadata entity definition. The definition can be for a pure custom type or an extended table type.
       *
       * @description This operation requires DataWorks Professional Edition or a higher edition.
       *
       * @param tmpReq CreateMetaEntityDefRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetaEntityDefResponse
       */
      Models::CreateMetaEntityDefResponse createMetaEntityDefWithOptions(const Models::CreateMetaEntityDefRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a metadata entity definition. The definition can be for a pure custom type or an extended table type.
       *
       * @description This operation requires DataWorks Professional Edition or a higher edition.
       *
       * @param request CreateMetaEntityDefRequest
       * @return CreateMetaEntityDefResponse
       */
      Models::CreateMetaEntityDefResponse createMetaEntityDef(const Models::CreateMetaEntityDefRequest &request);

      /**
       * @summary Creates a network and associates the network with a general resource group.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkResponse
       */
      Models::CreateNetworkResponse createNetworkWithOptions(const Models::CreateNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network and associates the network with a general resource group.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateNetworkRequest
       * @return CreateNetworkResponse
       */
      Models::CreateNetworkResponse createNetwork(const Models::CreateNetworkRequest &request);

      /**
       * @summary Creates a node in DataStudio. The information about the node is described by using FlowSpec.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one node in the FlowSpec, all nodes except the first one are ignored.
       *
       * @param request CreateNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeResponse
       */
      Models::CreateNodeResponse createNodeWithOptions(const Models::CreateNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node in DataStudio. The information about the node is described by using FlowSpec.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one node in the FlowSpec, all nodes except the first one are ignored.
       *
       * @param request CreateNodeRequest
       * @return CreateNodeResponse
       */
      Models::CreateNodeResponse createNode(const Models::CreateNodeRequest &request);

      /**
       * @summary Creates a parameter.
       *
       * @description This operation requires DataWorks Professional Edition or a later edition.
       *
       * @param tmpReq CreateParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParameterResponse
       */
      Models::CreateParameterResponse createParameterWithOptions(const Models::CreateParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a parameter.
       *
       * @description This operation requires DataWorks Professional Edition or a later edition.
       *
       * @param request CreateParameterRequest
       * @return CreateParameterResponse
       */
      Models::CreateParameterResponse createParameter(const Models::CreateParameterRequest &request);

      /**
       * @summary Creates a publish process for an entity in the new-version DataStudio.
       *
       * @description >Notice: This operation does not support batch operations. If you specify multiple publish entities in the parameters, all entities except the first one are ignored.
       * >Notice: This operation may not be available in earlier versions of the SDK. In this case, use the CreateDeployment operation. The parameters are the same as those described in this topic.
       *
       * @param tmpReq CreatePipelineRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineRunResponse
       */
      Models::CreatePipelineRunResponse createPipelineRunWithOptions(const Models::CreatePipelineRunRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a publish process for an entity in the new-version DataStudio.
       *
       * @description >Notice: This operation does not support batch operations. If you specify multiple publish entities in the parameters, all entities except the first one are ignored.
       * >Notice: This operation may not be available in earlier versions of the SDK. In this case, use the CreateDeployment operation. The parameters are the same as those described in this topic.
       *
       * @param request CreatePipelineRunRequest
       * @return CreatePipelineRunResponse
       */
      Models::CreatePipelineRunResponse createPipelineRun(const Models::CreatePipelineRunRequest &request);

      /**
       * @summary Creates a new approval process definition, supporting custom configuration of approval rules and notification services.
       *
       * @description ## Usage notes
       * - This API operation allows you to create a new approval process definition, including setting basic information such as the approval policy name, description, type, and subtype.
       * - You can define a list of condition rules (RuleConditions) to specify the conditions under which the approval process is triggered.
       * - Multiple notification services (NotificationServices) can be configured to send notifications to relevant personnel at different stages of the approval process.
       * - The approval node list (ApprovalNodes) defines the nodes that must be traversed during the approval process and the approver information for each node.
       * - You can choose whether to immediately enable the newly created approval process definition.
       * - Note: Certain fields such as Type have specific value constraints. Refer to the constraint descriptions in the documentation.
       *
       * @param tmpReq CreateProcessDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProcessDefinitionResponse
       */
      Models::CreateProcessDefinitionResponse createProcessDefinitionWithOptions(const Models::CreateProcessDefinitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new approval process definition, supporting custom configuration of approval rules and notification services.
       *
       * @description ## Usage notes
       * - This API operation allows you to create a new approval process definition, including setting basic information such as the approval policy name, description, type, and subtype.
       * - You can define a list of condition rules (RuleConditions) to specify the conditions under which the approval process is triggered.
       * - Multiple notification services (NotificationServices) can be configured to send notifications to relevant personnel at different stages of the approval process.
       * - The approval node list (ApprovalNodes) defines the nodes that must be traversed during the approval process and the approver information for each node.
       * - You can choose whether to immediately enable the newly created approval process definition.
       * - Note: Certain fields such as Type have specific value constraints. Refer to the constraint descriptions in the documentation.
       *
       * @param request CreateProcessDefinitionRequest
       * @return CreateProcessDefinitionResponse
       */
      Models::CreateProcessDefinitionResponse createProcessDefinition(const Models::CreateProcessDefinitionRequest &request);

      /**
       * @summary Creates a workspace.
       *
       * @param tmpReq CreateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary Adds a workspace member and assigns a workspace-level role to the member.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq CreateProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectMemberResponse
       */
      Models::CreateProjectMemberResponse createProjectMemberWithOptions(const Models::CreateProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a workspace member and assigns a workspace-level role to the member.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateProjectMemberRequest
       * @return CreateProjectMemberResponse
       */
      Models::CreateProjectMemberResponse createProjectMember(const Models::CreateProjectMemberRequest &request);

      /**
       * @summary Creates a custom role for a workspace.
       *
       * @param tmpReq CreateProjectRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectRoleResponse
       */
      Models::CreateProjectRoleResponse createProjectRoleWithOptions(const Models::CreateProjectRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom role for a workspace.
       *
       * @param request CreateProjectRoleRequest
       * @return CreateProjectRoleResponse
       */
      Models::CreateProjectRoleResponse createProjectRole(const Models::CreateProjectRoleRequest &request);

      /**
       * @summary \\\\> You cannot use this API operation to create multiple file resources at a time. If you specify multiple file resources by using FlowSpec, the system creates only the first specified resource.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one resource file in the FlowSpec, all resource files except the first one are ignored.
       *
       * @param request CreateResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResourceWithOptions(const Models::CreateResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary \\\\> You cannot use this API operation to create multiple file resources at a time. If you specify multiple file resources by using FlowSpec, the system creates only the first specified resource.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one resource file in the FlowSpec, all resource files except the first one are ignored.
       *
       * @param request CreateResourceRequest
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResource(const Models::CreateResourceRequest &request);

      Models::CreateResourceResponse createResourceAdvance(const Models::CreateResourceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Supports users in specifying their own files (such as JAR, PY, archive, or file) to create Data Development resource files.
       *
       * @param request CreateResourceFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceFileResponse
       */
      Models::CreateResourceFileResponse createResourceFileWithOptions(const Models::CreateResourceFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Supports users in specifying their own files (such as JAR, PY, archive, or file) to create Data Development resource files.
       *
       * @param request CreateResourceFileRequest
       * @return CreateResourceFileResponse
       */
      Models::CreateResourceFileResponse createResourceFile(const Models::CreateResourceFileRequest &request);

      Models::CreateResourceFileResponse createResourceFileAdvance(const Models::CreateResourceFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group.
       *
       * @description 1. You must purchase DataWorks Basic Edition or higher to use this operation.
       * 2. **Before you call this operation, make sure that you understand how general-purpose resource groups in DataWorks are billed and review the [pricing](https://help.aliyun.com/document_detail/2680173.html).**
       * 3. **Before you call this operation, make sure that you have created the AliyunServiceRoleForDataWorks service-linked role.**
       *
       * @param tmpReq CreateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroupWithOptions(const Models::CreateResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group.
       *
       * @description 1. You must purchase DataWorks Basic Edition or higher to use this operation.
       * 2. **Before you call this operation, make sure that you understand how general-purpose resource groups in DataWorks are billed and review the [pricing](https://help.aliyun.com/document_detail/2680173.html).**
       * 3. **Before you call this operation, make sure that you have created the AliyunServiceRoleForDataWorks service-linked role.**
       *
       * @param request CreateResourceGroupRequest
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroup(const Models::CreateResourceGroupRequest &request);

      /**
       * @summary Creates a route for a network.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteResponse
       */
      Models::CreateRouteResponse createRouteWithOptions(const Models::CreateRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a route for a network.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateRouteRequest
       * @return CreateRouteResponse
       */
      Models::CreateRouteResponse createRoute(const Models::CreateRouteRequest &request);

      /**
       * @summary Creates a new security control policy to configure various modules and submodules. Requires both DataWorks tenant administrator and security administrator permissions.
       *
       * @description ## Request
       * - **SchemaName**: Select a schema that fits your business needs.
       * - **ControlModule** and **ControlSubModule**: Specify the module and submodule for the policy, ensuring they match the selected schema.
       * - **ControlDwScope**: Set the policy scope to either the tenant or workspace level.
       * - **Workspaces**: If `ControlDwScope` is set to `Workspace`, provide the corresponding workspace IDs.
       * - **Content.Controllers**: The controllers must match the definitions in the selected schema.
       * - This operation cannot create system default policies.
       *
       * @param tmpReq CreateSecurityStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityStrategyResponse
       */
      Models::CreateSecurityStrategyResponse createSecurityStrategyWithOptions(const Models::CreateSecurityStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new security control policy to configure various modules and submodules. Requires both DataWorks tenant administrator and security administrator permissions.
       *
       * @description ## Request
       * - **SchemaName**: Select a schema that fits your business needs.
       * - **ControlModule** and **ControlSubModule**: Specify the module and submodule for the policy, ensuring they match the selected schema.
       * - **ControlDwScope**: Set the policy scope to either the tenant or workspace level.
       * - **Workspaces**: If `ControlDwScope` is set to `Workspace`, provide the corresponding workspace IDs.
       * - **Content.Controllers**: The controllers must match the definitions in the selected schema.
       * - This operation cannot create system default policies.
       *
       * @param request CreateSecurityStrategyRequest
       * @return CreateSecurityStrategyResponse
       */
      Models::CreateSecurityStrategyResponse createSecurityStrategy(const Models::CreateSecurityStrategyRequest &request);

      /**
       * @summary 创建 Skill
       *
       * @description ## 请求说明
       * - `SkillMdOverride` 与 `BundleUrl` 参数二选一，必须提供其中之一。
       * - `Visibility` 可设置为 `TENANT`、`PROJECT` 或 `USER`，分别表示账号内可见、指定项目可见或指定用户可见。
       * - 当 `Visibility` 设置为 `PROJECT` 时，需要通过 `VisibilityScope.ProjectIds` 指定可见的项目 ID 列表；当设置为 `USER` 时，则需通过 `VisibilityScope.UserIds` 指定可见的用户 ID 列表。
       *
       * @param tmpReq CreateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkillWithOptions(const Models::CreateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 Skill
       *
       * @description ## 请求说明
       * - `SkillMdOverride` 与 `BundleUrl` 参数二选一，必须提供其中之一。
       * - `Visibility` 可设置为 `TENANT`、`PROJECT` 或 `USER`，分别表示账号内可见、指定项目可见或指定用户可见。
       * - 当 `Visibility` 设置为 `PROJECT` 时，需要通过 `VisibilityScope.ProjectIds` 指定可见的项目 ID 列表；当设置为 `USER` 时，则需通过 `VisibilityScope.UserIds` 指定可见的用户 ID 列表。
       *
       * @param request CreateSkillRequest
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkill(const Models::CreateSkillRequest &request);

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
       * @summary Creates a workflow in a directory of DataStudio.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one workflow definition in the FlowSpec, all workflow definitions except the first one are ignored. In addition, nodes defined within the workflow definition are also ignored. Call the CreateNode API to create internal nodes one by one.
       *
       * @param request CreateWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkflowDefinitionResponse
       */
      Models::CreateWorkflowDefinitionResponse createWorkflowDefinitionWithOptions(const Models::CreateWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow in a directory of DataStudio.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one workflow definition in the FlowSpec, all workflow definitions except the first one are ignored. In addition, nodes defined within the workflow definition are also ignored. Call the CreateNode API to create internal nodes one by one.
       *
       * @param request CreateWorkflowDefinitionRequest
       * @return CreateWorkflowDefinitionResponse
       */
      Models::CreateWorkflowDefinitionResponse createWorkflowDefinition(const Models::CreateWorkflowDefinitionRequest &request);

      /**
       * @summary Creates a workflow instance, such as a data backfill workflow instance, based on configurations.
       *
       * @description DataWorks Basic Edition or higher is required.
       *
       * @param tmpReq CreateWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkflowInstancesResponse
       */
      Models::CreateWorkflowInstancesResponse createWorkflowInstancesWithOptions(const Models::CreateWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow instance, such as a data backfill workflow instance, based on configurations.
       *
       * @description DataWorks Basic Edition or higher is required.
       *
       * @param request CreateWorkflowInstancesRequest
       * @return CreateWorkflowInstancesResponse
       */
      Models::CreateWorkflowInstancesResponse createWorkflowInstances(const Models::CreateWorkflowInstancesRequest &request);

      /**
       * @summary 删除 Agent
       *
       * @description ## 请求说明
       * 该 API 用于从 DataWorks 中删除指定名称的 Agent。调用此接口时，必须提供要删除的 Agent 的名称。
       *
       * @param request DeleteAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgentWithOptions(const Models::DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 Agent
       *
       * @description ## 请求说明
       * 该 API 用于从 DataWorks 中删除指定名称的 Agent。调用此接口时，必须提供要删除的 Agent 的名称。
       *
       * @param request DeleteAgentRequest
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgent(const Models::DeleteAgentRequest &request);

      /**
       * @summary Deletes a custom monitoring alert rule.
       *
       * @param request DeleteAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAlertRuleResponse
       */
      Models::DeleteAlertRuleResponse deleteAlertRuleWithOptions(const Models::DeleteAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom monitoring alert rule.
       *
       * @param request DeleteAlertRuleRequest
       * @return DeleteAlertRuleResponse
       */
      Models::DeleteAlertRuleResponse deleteAlertRule(const Models::DeleteAlertRuleRequest &request);

      /**
       * @summary Deletes a workflow.
       *
       * @param request DeleteBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBusinessResponse
       */
      Models::DeleteBusinessResponse deleteBusinessWithOptions(const Models::DeleteBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workflow.
       *
       * @param request DeleteBusinessRequest
       * @return DeleteBusinessResponse
       */
      Models::DeleteBusinessResponse deleteBusiness(const Models::DeleteBusinessRequest &request);

      /**
       * @summary Deletes a certificate file.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a later version.
       * 2. This operation requires one of the following roles in the DataWorks workspace: Tenant Owner, Workspace Administrator, Project Owner, or O\\&M.
       *
       * @param request DeleteCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificateWithOptions(const Models::DeleteCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a certificate file.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a later version.
       * 2. This operation requires one of the following roles in the DataWorks workspace: Tenant Owner, Workspace Administrator, Project Owner, or O\\&M.
       *
       * @param request DeleteCertificateRequest
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificate(const Models::DeleteCertificateRequest &request);

      /**
       * @summary Deletes a component.
       *
       * @description >Notice: 
       * After a UDF is published, it cannot be deleted. You must unpublish the UDF before you can delete it.
       *
       * @param request DeleteComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentResponse
       */
      Models::DeleteComponentResponse deleteComponentWithOptions(const Models::DeleteComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a component.
       *
       * @description >Notice: 
       * After a UDF is published, it cannot be deleted. You must unpublish the UDF before you can delete it.
       *
       * @param request DeleteComponentRequest
       * @return DeleteComponentResponse
       */
      Models::DeleteComponentResponse deleteComponent(const Models::DeleteComponentRequest &request);

      /**
       * @summary Deletes the specified computing resource based on the computing resource ID.
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required.
       * 2. You must have at least one of the following roles in the DataWorks workspace:
       * 3. Tenant Owner, Workspace Administrator, Project Owner, O\\&M
       *
       * @param request DeleteComputeResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeResourceResponse
       */
      Models::DeleteComputeResourceResponse deleteComputeResourceWithOptions(const Models::DeleteComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified computing resource based on the computing resource ID.
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required.
       * 2. You must have at least one of the following roles in the DataWorks workspace:
       * 3. Tenant Owner, Workspace Administrator, Project Owner, O\\&M
       *
       * @param request DeleteComputeResourceRequest
       * @return DeleteComputeResourceResponse
       */
      Models::DeleteComputeResourceResponse deleteComputeResource(const Models::DeleteComputeResourceRequest &request);

      /**
       * @summary Deletes a custom attribute definition.
       *
       * @param request DeleteCustomAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAttributeResponse
       */
      Models::DeleteCustomAttributeResponse deleteCustomAttributeWithOptions(const Models::DeleteCustomAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom attribute definition.
       *
       * @param request DeleteCustomAttributeRequest
       * @return DeleteCustomAttributeResponse
       */
      Models::DeleteCustomAttributeResponse deleteCustomAttribute(const Models::DeleteCustomAttributeRequest &request);

      /**
       * @summary Deletes an alert rule configured for a synchronization task.
       *
       * @param request DeleteDIAlarmRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDIAlarmRuleResponse
       */
      Models::DeleteDIAlarmRuleResponse deleteDIAlarmRuleWithOptions(const Models::DeleteDIAlarmRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert rule configured for a synchronization task.
       *
       * @param request DeleteDIAlarmRuleRequest
       * @return DeleteDIAlarmRuleResponse
       */
      Models::DeleteDIAlarmRuleResponse deleteDIAlarmRule(const Models::DeleteDIAlarmRuleRequest &request);

      /**
       * @summary Deletes a new-version synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDIJobResponse
       */
      Models::DeleteDIJobResponse deleteDIJobWithOptions(const Models::DeleteDIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a new-version synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteDIJobRequest
       * @return DeleteDIJobResponse
       */
      Models::DeleteDIJobResponse deleteDIJob(const Models::DeleteDIJobRequest &request);

      /**
       * @summary Deletes a tag.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param tmpReq DeleteDataAssetTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataAssetTagResponse
       */
      Models::DeleteDataAssetTagResponse deleteDataAssetTagWithOptions(const Models::DeleteDataAssetTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a tag.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param request DeleteDataAssetTagRequest
       * @return DeleteDataAssetTagResponse
       */
      Models::DeleteDataAssetTagResponse deleteDataAssetTag(const Models::DeleteDataAssetTagRequest &request);

      /**
       * @summary Deletes a data quality alert rule by ID.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request DeleteDataQualityAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityAlertRuleResponse
       */
      Models::DeleteDataQualityAlertRuleResponse deleteDataQualityAlertRuleWithOptions(const Models::DeleteDataQualityAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality alert rule by ID.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request DeleteDataQualityAlertRuleRequest
       * @return DeleteDataQualityAlertRuleResponse
       */
      Models::DeleteDataQualityAlertRuleResponse deleteDataQualityAlertRule(const Models::DeleteDataQualityAlertRuleRequest &request);

      /**
       * @deprecated OpenAPI DeleteDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::DeleteDataQualityScan instead.
       *
       * @summary Deletes a data quality monitoring task.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param request DeleteDataQualityEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityEvaluationTaskResponse
       */
      Models::DeleteDataQualityEvaluationTaskResponse deleteDataQualityEvaluationTaskWithOptions(const Models::DeleteDataQualityEvaluationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::DeleteDataQualityScan instead.
       *
       * @summary Deletes a data quality monitoring task.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param request DeleteDataQualityEvaluationTaskRequest
       * @return DeleteDataQualityEvaluationTaskResponse
       */
      Models::DeleteDataQualityEvaluationTaskResponse deleteDataQualityEvaluationTask(const Models::DeleteDataQualityEvaluationTaskRequest &request);

      /**
       * @summary Deletes a data quality monitoring rule.
       *
       * @param request DeleteDataQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityRuleResponse
       */
      Models::DeleteDataQualityRuleResponse deleteDataQualityRuleWithOptions(const Models::DeleteDataQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality monitoring rule.
       *
       * @param request DeleteDataQualityRuleRequest
       * @return DeleteDataQualityRuleResponse
       */
      Models::DeleteDataQualityRuleResponse deleteDataQualityRule(const Models::DeleteDataQualityRuleRequest &request);

      /**
       * @deprecated OpenAPI DeleteDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::DeleteDataQualityTemplate instead.
       *
       * @summary Deletes a custom data quality rule template.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this operation.
       *
       * @param request DeleteDataQualityRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityRuleTemplateResponse
       */
      Models::DeleteDataQualityRuleTemplateResponse deleteDataQualityRuleTemplateWithOptions(const Models::DeleteDataQualityRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::DeleteDataQualityTemplate instead.
       *
       * @summary Deletes a custom data quality rule template.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this operation.
       *
       * @param request DeleteDataQualityRuleTemplateRequest
       * @return DeleteDataQualityRuleTemplateResponse
       */
      Models::DeleteDataQualityRuleTemplateResponse deleteDataQualityRuleTemplate(const Models::DeleteDataQualityRuleTemplateRequest &request);

      /**
       * @summary Deletes a data quality monitor.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request DeleteDataQualityScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityScanResponse
       */
      Models::DeleteDataQualityScanResponse deleteDataQualityScanWithOptions(const Models::DeleteDataQualityScanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality monitor.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request DeleteDataQualityScanRequest
       * @return DeleteDataQualityScanResponse
       */
      Models::DeleteDataQualityScanResponse deleteDataQualityScan(const Models::DeleteDataQualityScanRequest &request);

      /**
       * @summary Deletes a data quality rule template by ID.
       *
       * @description ## Request description
       * - **Id**: The unique identifier of a custom rule template, in the format of `USER_DEFINED:<template_id>`.
       * - **ProjectId**: The ID of the DataWorks workspace to which the rule template belongs.
       * This operation removes a data quality rule template that is no longer needed. Make sure that the `Id` and `ProjectId` values are correct. Otherwise, the deletion may fail or cause unexpected data loss. Exercise caution when performing this operation and verify the template information before proceeding.
       *
       * @param request DeleteDataQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityTemplateResponse
       */
      Models::DeleteDataQualityTemplateResponse deleteDataQualityTemplateWithOptions(const Models::DeleteDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality rule template by ID.
       *
       * @description ## Request description
       * - **Id**: The unique identifier of a custom rule template, in the format of `USER_DEFINED:<template_id>`.
       * - **ProjectId**: The ID of the DataWorks workspace to which the rule template belongs.
       * This operation removes a data quality rule template that is no longer needed. Make sure that the `Id` and `ProjectId` values are correct. Otherwise, the deletion may fail or cause unexpected data loss. Exercise caution when performing this operation and verify the template information before proceeding.
       *
       * @param request DeleteDataQualityTemplateRequest
       * @return DeleteDataQualityTemplateResponse
       */
      Models::DeleteDataQualityTemplateResponse deleteDataQualityTemplate(const Models::DeleteDataQualityTemplateRequest &request);

      /**
       * @summary Deletes a data source by data source ID.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To call this operation, you must have one of the following roles in DataWorks:
       * - Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source by data source ID.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To call this operation, you must have one of the following roles in DataWorks:
       * - Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary Deletes a data source sharing rule by rule ID.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To delete a sharing rule of a data source from Workspace A to Workspace B, you must have the data source sharing permissions in Workspace A or Workspace B. You must have one of the following roles in DataWorks:
       * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request DeleteDataSourceSharedRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceSharedRuleResponse
       */
      Models::DeleteDataSourceSharedRuleResponse deleteDataSourceSharedRuleWithOptions(const Models::DeleteDataSourceSharedRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source sharing rule by rule ID.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To delete a sharing rule of a data source from Workspace A to Workspace B, you must have the data source sharing permissions in Workspace A or Workspace B. You must have one of the following roles in DataWorks:
       * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request DeleteDataSourceSharedRuleRequest
       * @return DeleteDataSourceSharedRuleResponse
       */
      Models::DeleteDataSourceSharedRuleResponse deleteDataSourceSharedRule(const Models::DeleteDataSourceSharedRuleRequest &request);

      /**
       * @summary Delete a dataset. Only DataWorks datasets are supported. This operation cascades to delete all associated dataset versions. Requires dataset creator or workspace administrator permissions.
       *
       * @param request DeleteDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const Models::DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a dataset. Only DataWorks datasets are supported. This operation cascades to delete all associated dataset versions. Requires dataset creator or workspace administrator permissions.
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const Models::DeleteDatasetRequest &request);

      /**
       * @summary Deletes a dataset version. Only non-v1 DataWorks datasets are supported. To delete v1 datasets, use the DeleteDataset operation. Requires dataset creator or workspace administrator permissions.
       *
       * @param request DeleteDatasetVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetVersionResponse
       */
      Models::DeleteDatasetVersionResponse deleteDatasetVersionWithOptions(const Models::DeleteDatasetVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset version. Only non-v1 DataWorks datasets are supported. To delete v1 datasets, use the DeleteDataset operation. Requires dataset creator or workspace administrator permissions.
       *
       * @param request DeleteDatasetVersionRequest
       * @return DeleteDatasetVersionResponse
       */
      Models::DeleteDatasetVersionResponse deleteDatasetVersion(const Models::DeleteDatasetVersionRequest &request);

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
       * @summary Invoke DeleteFolder to delete a folder on the Data Development page.
       *
       * @param request DeleteFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolderWithOptions(const Models::DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DeleteFolder to delete a folder on the Data Development page.
       *
       * @param request DeleteFolderRequest
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolder(const Models::DeleteFolderRequest &request);

      /**
       * @summary Deletes a user-defined function (UDF) in DataStudio.
       *
       * @description >Notice: 
       * After a UDF is published, it cannot be deleted. You must unpublish the UDF before you can delete it.
       *
       * @param request DeleteFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionResponse
       */
      Models::DeleteFunctionResponse deleteFunctionWithOptions(const Models::DeleteFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user-defined function (UDF) in DataStudio.
       *
       * @description >Notice: 
       * After a UDF is published, it cannot be deleted. You must unpublish the UDF before you can delete it.
       *
       * @param request DeleteFunctionRequest
       * @return DeleteFunctionResponse
       */
      Models::DeleteFunctionResponse deleteFunction(const Models::DeleteFunctionRequest &request);

      /**
       * @summary Deletes a lineage in Data Map.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request DeleteLineageRelationshipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLineageRelationshipResponse
       */
      Models::DeleteLineageRelationshipResponse deleteLineageRelationshipWithOptions(const Models::DeleteLineageRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lineage in Data Map.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request DeleteLineageRelationshipRequest
       * @return DeleteLineageRelationshipResponse
       */
      Models::DeleteLineageRelationshipResponse deleteLineageRelationship(const Models::DeleteLineageRelationshipRequest &request);

      /**
       * @summary Delete MCP Server
       *
       * @description ## Request Description
       * This API allows you to delete the corresponding MCP Server instance based on the provided MCP Server name. Make sure you have the appropriate permissions and verify that the MCP Server name to be deleted is correct before calling.
       * ### Notes
       * - The deletion operation is irreversible. Proceed with caution.
       * - Ensure that you have sufficient permissions (`dataworks:DeleteMcpServer`) to perform this operation.
       *
       * @param request DeleteMcpServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpServerResponse
       */
      Models::DeleteMcpServerResponse deleteMcpServerWithOptions(const Models::DeleteMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete MCP Server
       *
       * @description ## Request Description
       * This API allows you to delete the corresponding MCP Server instance based on the provided MCP Server name. Make sure you have the appropriate permissions and verify that the MCP Server name to be deleted is correct before calling.
       * ### Notes
       * - The deletion operation is irreversible. Proceed with caution.
       * - Ensure that you have sufficient permissions (`dataworks:DeleteMcpServer`) to perform this operation.
       *
       * @param request DeleteMcpServerRequest
       * @return DeleteMcpServerResponse
       */
      Models::DeleteMcpServerResponse deleteMcpServer(const Models::DeleteMcpServerRequest &request);

      /**
       * @summary Delete a collection object in the specified Data Map, including Data Map categories and data albums.
       * When deleting a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or administrator of the album.
       *
       * @description 1. You must purchase DataWorks Professional Edition or a higher edition to use this feature.
       *
       * @param request DeleteMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetaCollectionResponse
       */
      Models::DeleteMetaCollectionResponse deleteMetaCollectionWithOptions(const Models::DeleteMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a collection object in the specified Data Map, including Data Map categories and data albums.
       * When deleting a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or administrator of the album.
       *
       * @description 1. You must purchase DataWorks Professional Edition or a higher edition to use this feature.
       *
       * @param request DeleteMetaCollectionRequest
       * @return DeleteMetaCollectionResponse
       */
      Models::DeleteMetaCollectionResponse deleteMetaCollection(const Models::DeleteMetaCollectionRequest &request);

      /**
       * @summary 删除自定义实体定义
       *
       * @description 需要购买 DataWorks 专业版及以上版本才能使用。
       *
       * @param request DeleteMetaEntityDefRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetaEntityDefResponse
       */
      Models::DeleteMetaEntityDefResponse deleteMetaEntityDefWithOptions(const Models::DeleteMetaEntityDefRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义实体定义
       *
       * @description 需要购买 DataWorks 专业版及以上版本才能使用。
       *
       * @param request DeleteMetaEntityDefRequest
       * @return DeleteMetaEntityDefResponse
       */
      Models::DeleteMetaEntityDefResponse deleteMetaEntityDef(const Models::DeleteMetaEntityDefRequest &request);

      /**
       * @summary Disassociates and deletes a network from a general resource group.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkResponse
       */
      Models::DeleteNetworkResponse deleteNetworkWithOptions(const Models::DeleteNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates and deletes a network from a general resource group.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteNetworkRequest
       * @return DeleteNetworkResponse
       */
      Models::DeleteNetworkResponse deleteNetwork(const Models::DeleteNetworkRequest &request);

      /**
       * @summary Deletes a node from DataStudio.
       *
       * @description >Notice: 
       * After a node is published, it cannot be deleted. You must unpublish the node before you can delete it.
       *
       * @param request DeleteNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNodeResponse
       */
      Models::DeleteNodeResponse deleteNodeWithOptions(const Models::DeleteNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a node from DataStudio.
       *
       * @description >Notice: 
       * After a node is published, it cannot be deleted. You must unpublish the node before you can delete it.
       *
       * @param request DeleteNodeRequest
       * @return DeleteNodeResponse
       */
      Models::DeleteNodeResponse deleteNode(const Models::DeleteNodeRequest &request);

      /**
       * @summary Deletes a specified parameter.
       *
       * @description This operation is available only in DataWorks professional edition and later versions.
       *
       * @param request DeleteParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParameterResponse
       */
      Models::DeleteParameterResponse deleteParameterWithOptions(const Models::DeleteParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified parameter.
       *
       * @description This operation is available only in DataWorks professional edition and later versions.
       *
       * @param request DeleteParameterRequest
       * @return DeleteParameterResponse
       */
      Models::DeleteParameterResponse deleteParameter(const Models::DeleteParameterRequest &request);

      /**
       * @summary Deletes a process definition by the specified ID.
       *
       * @description ## Description
       * - This API deletes a process definition by its ID.
       * - This operation is irreversible. Proceed with caution.
       * - Before calling this API, back up relevant data or confirm that the process definition is no longer required.
       *
       * @param request DeleteProcessDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProcessDefinitionResponse
       */
      Models::DeleteProcessDefinitionResponse deleteProcessDefinitionWithOptions(const Models::DeleteProcessDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a process definition by the specified ID.
       *
       * @description ## Description
       * - This API deletes a process definition by its ID.
       * - This operation is irreversible. Proceed with caution.
       * - Before calling this API, back up relevant data or confirm that the process definition is no longer required.
       *
       * @param request DeleteProcessDefinitionRequest
       * @return DeleteProcessDefinitionResponse
       */
      Models::DeleteProcessDefinitionResponse deleteProcessDefinition(const Models::DeleteProcessDefinitionRequest &request);

      /**
       * @summary Deletes a DataWorks workspace.
       *
       * @description To call this API, you must purchase DataWorks Basic Edition or a higher edition.
       * Note: When you delete a workspace, the system moves it to the Recycle Bin. After a 14-day retention period, the system permanently purges the workspace. During this time, you cannot create a new workspace with the same name. You can find the deleted workspace in the Recycle Bin on the Workspace page in the console.
       *
       * @param request DeleteProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const Models::DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DataWorks workspace.
       *
       * @description To call this API, you must purchase DataWorks Basic Edition or a higher edition.
       * Note: When you delete a workspace, the system moves it to the Recycle Bin. After a 14-day retention period, the system permanently purges the workspace. During this time, you cannot create a new workspace with the same name. You can find the deleted workspace in the Recycle Bin on the Workspace page in the console.
       *
       * @param request DeleteProjectRequest
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const Models::DeleteProjectRequest &request);

      /**
       * @summary Removes a workspace member and the workspace-level roles that are assigned to the member.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectMemberResponse
       */
      Models::DeleteProjectMemberResponse deleteProjectMemberWithOptions(const Models::DeleteProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a workspace member and the workspace-level roles that are assigned to the member.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteProjectMemberRequest
       * @return DeleteProjectMemberResponse
       */
      Models::DeleteProjectMemberResponse deleteProjectMember(const Models::DeleteProjectMemberRequest &request);

      /**
       * @summary Deletes a custom role from a workspace.
       *
       * @param request DeleteProjectRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectRoleResponse
       */
      Models::DeleteProjectRoleResponse deleteProjectRoleWithOptions(const Models::DeleteProjectRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom role from a workspace.
       *
       * @param request DeleteProjectRoleRequest
       * @return DeleteProjectRoleResponse
       */
      Models::DeleteProjectRoleResponse deleteProjectRole(const Models::DeleteProjectRoleRequest &request);

      /**
       * @summary Deletes a file resource from DataStudio.
       *
       * @description >Notice: 
       * After a file resource is published, it cannot be deleted. You must unpublish the file resource before you can delete it.
       *
       * @param request DeleteResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResourceWithOptions(const Models::DeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file resource from DataStudio.
       *
       * @description >Notice: 
       * After a file resource is published, it cannot be deleted. You must unpublish the file resource before you can delete it.
       *
       * @param request DeleteResourceRequest
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResource(const Models::DeleteResourceRequest &request);

      /**
       * @summary Deletes a resource group.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a later version.
       * 2. **Before you use this operation, ensure you understand the billing method and [pricing](https://help.aliyun.com/document_detail/2680173.html) for DataWorks resource groups.**
       * 3. **Before you use this operation, ensure you have created the Service-Linked Role AliyunServiceRoleForDataWorks.**
       *
       * @param request DeleteResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroupWithOptions(const Models::DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a later version.
       * 2. **Before you use this operation, ensure you understand the billing method and [pricing](https://help.aliyun.com/document_detail/2680173.html) for DataWorks resource groups.**
       * 3. **Before you use this operation, ensure you have created the Service-Linked Role AliyunServiceRoleForDataWorks.**
       *
       * @param request DeleteResourceGroupRequest
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroup(const Models::DeleteResourceGroupRequest &request);

      /**
       * @summary Deletes a route from a network resource.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteResponse
       */
      Models::DeleteRouteResponse deleteRouteWithOptions(const Models::DeleteRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route from a network resource.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteRouteRequest
       * @return DeleteRouteResponse
       */
      Models::DeleteRouteResponse deleteRoute(const Models::DeleteRouteRequest &request);

      /**
       * @summary Deletes a security strategy by its ID. To call this operation, you must have DataWorks tenant administrator and security administrator permissions.
       *
       * @description ## Usage notes
       * - You can delete a security strategy by providing its ID.
       * - You cannot delete a system strategy.
       *
       * @param request DeleteSecurityStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityStrategyResponse
       */
      Models::DeleteSecurityStrategyResponse deleteSecurityStrategyWithOptions(const Models::DeleteSecurityStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security strategy by its ID. To call this operation, you must have DataWorks tenant administrator and security administrator permissions.
       *
       * @description ## Usage notes
       * - You can delete a security strategy by providing its ID.
       * - You cannot delete a system strategy.
       *
       * @param request DeleteSecurityStrategyRequest
       * @return DeleteSecurityStrategyResponse
       */
      Models::DeleteSecurityStrategyResponse deleteSecurityStrategy(const Models::DeleteSecurityStrategyRequest &request);

      /**
       * @summary Delete Skill
       *
       * @description ## Request Description
       * This API is used to delete a Skill with the specified name from DataWorks. The exact name of the Skill to delete must be provided when invoking this API.
       * ### Notes
       * - Ensure that you have sufficient permissions to perform the delete operation.
       * - The delete operation is irreversible. Use it with caution.
       *
       * @param request DeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const Models::DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Skill
       *
       * @description ## Request Description
       * This API is used to delete a Skill with the specified name from DataWorks. The exact name of the Skill to delete must be provided when invoking this API.
       * ### Notes
       * - Ensure that you have sufficient permissions to perform the delete operation.
       * - The delete operation is irreversible. Use it with caution.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const Models::DeleteSkillRequest &request);

      /**
       * @summary Deletes a task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTaskWithOptions(const Models::DeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteTaskRequest
       * @return DeleteTaskResponse
       */
      Models::DeleteTaskResponse deleteTask(const Models::DeleteTaskRequest &request);

      /**
       * @summary Deletes a workflow.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflowWithOptions(const Models::DeleteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workflow.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteWorkflowRequest
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflow(const Models::DeleteWorkflowRequest &request);

      /**
       * @summary Deletes a workflow from DataStudio.
       *
       * @description >Notice: 
       * After a workflow definition is published, it cannot be deleted. You must unpublish the workflow definition before you can delete it.
       *
       * @param request DeleteWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowDefinitionResponse
       */
      Models::DeleteWorkflowDefinitionResponse deleteWorkflowDefinitionWithOptions(const Models::DeleteWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workflow from DataStudio.
       *
       * @description >Notice: 
       * After a workflow definition is published, it cannot be deleted. You must unpublish the workflow definition before you can delete it.
       *
       * @param request DeleteWorkflowDefinitionRequest
       * @return DeleteWorkflowDefinitionResponse
       */
      Models::DeleteWorkflowDefinitionResponse deleteWorkflowDefinition(const Models::DeleteWorkflowDefinitionRequest &request);

      /**
       * @summary Publish a file to the production environment.
       *
       * @param request DeployFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployFileResponse
       */
      Models::DeployFileResponse deployFileWithOptions(const Models::DeployFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publish a file to the production environment.
       *
       * @param request DeployFileRequest
       * @return DeployFileResponse
       */
      Models::DeployFileResponse deployFile(const Models::DeployFileRequest &request);

      /**
       * @deprecated OpenAPI DetachDataQualityRulesFromEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
       *
       * @summary Removes the association between a data quality rule and a data quality monitoring task.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param tmpReq DetachDataQualityRulesFromEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDataQualityRulesFromEvaluationTaskResponse
       */
      Models::DetachDataQualityRulesFromEvaluationTaskResponse detachDataQualityRulesFromEvaluationTaskWithOptions(const Models::DetachDataQualityRulesFromEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DetachDataQualityRulesFromEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
       *
       * @summary Removes the association between a data quality rule and a data quality monitoring task.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request DetachDataQualityRulesFromEvaluationTaskRequest
       * @return DetachDataQualityRulesFromEvaluationTaskResponse
       */
      Models::DetachDataQualityRulesFromEvaluationTaskResponse detachDataQualityRulesFromEvaluationTask(const Models::DetachDataQualityRulesFromEvaluationTaskRequest &request);

      /**
       * @summary Disables the specified approval process definition.
       *
       * @description ## Request
       * - This API disables the specified approval process definition.
       * - A disabled approval process definition remains inactive until it is re-enabled.
       * - You must provide a valid process definition ID as a path parameter.
       *
       * @param request DisableProcessDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableProcessDefinitionResponse
       */
      Models::DisableProcessDefinitionResponse disableProcessDefinitionWithOptions(const Models::DisableProcessDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the specified approval process definition.
       *
       * @description ## Request
       * - This API disables the specified approval process definition.
       * - A disabled approval process definition remains inactive until it is re-enabled.
       * - You must provide a valid process definition ID as a path parameter.
       *
       * @param request DisableProcessDefinitionRequest
       * @return DisableProcessDefinitionResponse
       */
      Models::DisableProcessDefinitionResponse disableProcessDefinition(const Models::DisableProcessDefinitionRequest &request);

      /**
       * @summary Disassociates an image from a workspace.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a later version.
       * 2. **Before calling this operation, ensure you have created the AliyunServiceRoleForDataWorks service-linked role.**
       *
       * @param request DissociateProjectFromImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateProjectFromImageResponse
       */
      Models::DissociateProjectFromImageResponse dissociateProjectFromImageWithOptions(const Models::DissociateProjectFromImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an image from a workspace.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a later version.
       * 2. **Before calling this operation, ensure you have created the AliyunServiceRoleForDataWorks service-linked role.**
       *
       * @param request DissociateProjectFromImageRequest
       * @return DissociateProjectFromImageResponse
       */
      Models::DissociateProjectFromImageResponse dissociateProjectFromImage(const Models::DissociateProjectFromImageRequest &request);

      /**
       * @summary Disassociates a resource group from a workspace.
       *
       * @description 1. This operation requires a subscription to DataWorks Basic Edition or a higher edition.
       * 2. You must have one of the following roles in the DataWorks workspace:
       * - tenant owner, workspace administrator, project owner, or operator
       *
       * @param request DissociateProjectFromResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateProjectFromResourceGroupResponse
       */
      Models::DissociateProjectFromResourceGroupResponse dissociateProjectFromResourceGroupWithOptions(const Models::DissociateProjectFromResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a resource group from a workspace.
       *
       * @description 1. This operation requires a subscription to DataWorks Basic Edition or a higher edition.
       * 2. You must have one of the following roles in the DataWorks workspace:
       * - tenant owner, workspace administrator, project owner, or operator
       *
       * @param request DissociateProjectFromResourceGroupRequest
       * @return DissociateProjectFromResourceGroupResponse
       */
      Models::DissociateProjectFromResourceGroupResponse dissociateProjectFromResourceGroup(const Models::DissociateProjectFromResourceGroupRequest &request);

      /**
       * @summary Enables a process definition with the specified ID.
       *
       * @description ## Request
       * This API enables an existing process definition. You must provide the process definition ID as a path parameter.
       *
       * @param request EnableProcessDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableProcessDefinitionResponse
       */
      Models::EnableProcessDefinitionResponse enableProcessDefinitionWithOptions(const Models::EnableProcessDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a process definition with the specified ID.
       *
       * @description ## Request
       * This API enables an existing process definition. You must provide the process definition ID as a path parameter.
       *
       * @param request EnableProcessDefinitionRequest
       * @return EnableProcessDefinitionResponse
       */
      Models::EnableProcessDefinitionResponse enableProcessDefinition(const Models::EnableProcessDefinitionRequest &request);

      /**
       * @summary Imports a table to a workflow. The call to this API operation is equivalent to performing the following operations: Go to the DataStudio page, find the desired workflow, and then click the workflow name. Right-click Table under the desired folder and select Import Table.
       *
       * @param request EstablishRelationTableToBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EstablishRelationTableToBusinessResponse
       */
      Models::EstablishRelationTableToBusinessResponse establishRelationTableToBusinessWithOptions(const Models::EstablishRelationTableToBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a table to a workflow. The call to this API operation is equivalent to performing the following operations: Go to the DataStudio page, find the desired workflow, and then click the workflow name. Right-click Table under the desired folder and select Import Table.
       *
       * @param request EstablishRelationTableToBusinessRequest
       * @return EstablishRelationTableToBusinessResponse
       */
      Models::EstablishRelationTableToBusinessResponse establishRelationTableToBusiness(const Models::EstablishRelationTableToBusinessRequest &request);

      /**
       * @summary Executes a stage in a process.
       *
       * @description > The stages in a process are sequential. For more information, see the GetDeployment operation. Skipping or repeating a stage is not allowed.
       * > The execution of a stage is asynchronous. The response of this operation indicates only whether a stage is triggered but does not indicate whether the execution of the stage is successful. You can call the GetDeployment operation to check whether the execution is successful.
       *
       * @param request ExecPipelineRunStageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecPipelineRunStageResponse
       */
      Models::ExecPipelineRunStageResponse execPipelineRunStageWithOptions(const Models::ExecPipelineRunStageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a stage in a process.
       *
       * @description > The stages in a process are sequential. For more information, see the GetDeployment operation. Skipping or repeating a stage is not allowed.
       * > The execution of a stage is asynchronous. The response of this operation indicates only whether a stage is triggered but does not indicate whether the execution of the stage is successful. You can call the GetDeployment operation to check whether the execution is successful.
       *
       * @param request ExecPipelineRunStageRequest
       * @return ExecPipelineRunStageResponse
       */
      Models::ExecPipelineRunStageResponse execPipelineRunStage(const Models::ExecPipelineRunStageRequest &request);

      /**
       * @summary Create a temporary workflow instance based on configurations.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq ExecuteAdhocWorkflowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAdhocWorkflowInstanceResponse
       */
      Models::ExecuteAdhocWorkflowInstanceResponse executeAdhocWorkflowInstanceWithOptions(const Models::ExecuteAdhocWorkflowInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a temporary workflow instance based on configurations.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ExecuteAdhocWorkflowInstanceRequest
       * @return ExecuteAdhocWorkflowInstanceResponse
       */
      Models::ExecuteAdhocWorkflowInstanceResponse executeAdhocWorkflowInstance(const Models::ExecuteAdhocWorkflowInstanceRequest &request);

      /**
       * @summary Find the security policy that best matches the given conditions.
       *
       * @description ## Request Description
       * This API is used to find the most suitable security policy based on the provided control module, sub-module, and workspace ID. If a workspace ID is provided, the policy at the specified workspace level is matched first; otherwise, the tenant-level policy is returned. Note that system policies cannot be deleted or modified.
       *
       * @param request FindBestMatchSecurityStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindBestMatchSecurityStrategyResponse
       */
      Models::FindBestMatchSecurityStrategyResponse findBestMatchSecurityStrategyWithOptions(const Models::FindBestMatchSecurityStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Find the security policy that best matches the given conditions.
       *
       * @description ## Request Description
       * This API is used to find the most suitable security policy based on the provided control module, sub-module, and workspace ID. If a workspace ID is provided, the policy at the specified workspace level is matched first; otherwise, the tenant-level policy is returned. Note that system policies cannot be deleted or modified.
       *
       * @param request FindBestMatchSecurityStrategyRequest
       * @return FindBestMatchSecurityStrategyResponse
       */
      Models::FindBestMatchSecurityStrategyResponse findBestMatchSecurityStrategy(const Models::FindBestMatchSecurityStrategyRequest &request);

      /**
       * @summary Retrieves agent details by name.
       *
       * @description ## Request
       * This API uses an agent\\"s name, provided as a parameter, to retrieve its detailed configuration, including the model configuration, system prompt, and tool list.
       *
       * @param request GetAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves agent details by name.
       *
       * @description ## Request
       * This API uses an agent\\"s name, provided as a parameter, to retrieve its detailed configuration, including the model configuration, system prompt, and tool list.
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary Retrieves the metadata and content of an artifact based on a session ID and artifact path.
       *
       * @description ## Description
       * - This operation retrieves the metadata and content of a single artifact based on `SessionId` and `ArtifactPath`.
       * - `SessionId` and `ArtifactPath` are required.
       *
       * @param tmpReq GetAgentSessionArtifactMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSessionArtifactMetaResponse
       */
      Models::GetAgentSessionArtifactMetaResponse getAgentSessionArtifactMetaWithOptions(const Models::GetAgentSessionArtifactMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the metadata and content of an artifact based on a session ID and artifact path.
       *
       * @description ## Description
       * - This operation retrieves the metadata and content of a single artifact based on `SessionId` and `ArtifactPath`.
       * - `SessionId` and `ArtifactPath` are required.
       *
       * @param request GetAgentSessionArtifactMetaRequest
       * @return GetAgentSessionArtifactMetaResponse
       */
      Models::GetAgentSessionArtifactMetaResponse getAgentSessionArtifactMeta(const Models::GetAgentSessionArtifactMetaRequest &request);

      /**
       * @summary Retrieves the cumulative AI token usage for a specified session.
       *
       * @description ## Description
       * - This operation retrieves usage statistics for AI tokens in a specified session. It provides a breakdown of tokens for prompts, completions, and thoughts, as well as the total token count and the number of cache-hit tokens.
       *
       * @param tmpReq GetAgentSessionTokenUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSessionTokenUsageResponse
       */
      Models::GetAgentSessionTokenUsageResponse getAgentSessionTokenUsageWithOptions(const Models::GetAgentSessionTokenUsageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the cumulative AI token usage for a specified session.
       *
       * @description ## Description
       * - This operation retrieves usage statistics for AI tokens in a specified session. It provides a breakdown of tokens for prompts, completions, and thoughts, as well as the total token count and the number of cache-hit tokens.
       *
       * @param request GetAgentSessionTokenUsageRequest
       * @return GetAgentSessionTokenUsageResponse
       */
      Models::GetAgentSessionTokenUsageResponse getAgentSessionTokenUsage(const Models::GetAgentSessionTokenUsageRequest &request);

      /**
       * @summary Queries a custom alert monitoring rule.
       *
       * @param request GetAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlertRuleResponse
       */
      Models::GetAlertRuleResponse getAlertRuleWithOptions(const Models::GetAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a custom alert monitoring rule.
       *
       * @param request GetAlertRuleRequest
       * @return GetAlertRuleResponse
       */
      Models::GetAlertRuleResponse getAlertRule(const Models::GetAlertRuleRequest &request);

      /**
       * @summary Queries the content of resource permission applications under the specified process instance ID.
       *
       * @description ## Request Description
       * - This API is used to query the details of resource permission applications based on the provided `ProcessInstanceId`.
       * - A valid `ProcessInstanceId` parameter must be provided in the request.
       * - The response includes the basic information, status, and the list of specific application contents.
       * - Each application content includes detailed resource information, the grantee, the requested operation permissions, and more.
       *
       * @param request GetApplicationContentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationContentsResponse
       */
      Models::GetApplicationContentsResponse getApplicationContentsWithOptions(const Models::GetApplicationContentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content of resource permission applications under the specified process instance ID.
       *
       * @description ## Request Description
       * - This API is used to query the details of resource permission applications based on the provided `ProcessInstanceId`.
       * - A valid `ProcessInstanceId` parameter must be provided in the request.
       * - The response includes the basic information, status, and the list of specific application contents.
       * - Each application content includes detailed resource information, the grantee, the requested operation permissions, and more.
       *
       * @param request GetApplicationContentsRequest
       * @return GetApplicationContentsResponse
       */
      Models::GetApplicationContentsResponse getApplicationContents(const Models::GetApplicationContentsRequest &request);

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
       * @summary Queries the information about a catalog in Data Map. Only catalogs of the Data Lake Formation (DLF) and StarRocks metadata crawlers are supported.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalogWithOptions(const Models::GetCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a catalog in Data Map. Only catalogs of the Data Lake Formation (DLF) and StarRocks metadata crawlers are supported.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetCatalogRequest
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalog(const Models::GetCatalogRequest &request);

      /**
       * @summary You can view authentication files.
       *
       * @description 1. This feature is available only in DataWorks Basic Edition and later versions.
       * 2. You must have at least one of the following roles in the DataWorks project: Tenant Owner, Space Administrator, Deployment, Developer, Project Owner, or O\\&M.
       *
       * @param request GetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificateWithOptions(const Models::GetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can view authentication files.
       *
       * @description 1. This feature is available only in DataWorks Basic Edition and later versions.
       * 2. You must have at least one of the following roles in the DataWorks project: Tenant Owner, Space Administrator, Deployment, Developer, Project Owner, or O\\&M.
       *
       * @param request GetCertificateRequest
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificate(const Models::GetCertificateRequest &request);

      /**
       * @summary Retrieves the details of a specified column in a Data Map table.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetColumnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetColumnResponse
       */
      Models::GetColumnResponse getColumnWithOptions(const Models::GetColumnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified column in a Data Map table.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetColumnRequest
       * @return GetColumnResponse
       */
      Models::GetColumnResponse getColumn(const Models::GetColumnRequest &request);

      /**
       * @summary Gets component information.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComponentResponse
       */
      Models::GetComponentResponse getComponentWithOptions(const Models::GetComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets component information.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetComponentRequest
       * @return GetComponentResponse
       */
      Models::GetComponentResponse getComponent(const Models::GetComponentRequest &request);

      /**
       * @summary Queries the specified computing resource based on the computing resource ID.
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required.
       * 2. You must have at least one of the following roles in the DataWorks workspace:
       * - Tenant Owner, Workspace Administrator, Deploy, Developer, Project Owner, O\\&M
       *
       * @param request GetComputeResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeResourceResponse
       */
      Models::GetComputeResourceResponse getComputeResourceWithOptions(const Models::GetComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specified computing resource based on the computing resource ID.
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required.
       * 2. You must have at least one of the following roles in the DataWorks workspace:
       * - Tenant Owner, Workspace Administrator, Deploy, Developer, Project Owner, O\\&M
       *
       * @param request GetComputeResourceRequest
       * @return GetComputeResourceResponse
       */
      Models::GetComputeResourceResponse getComputeResource(const Models::GetComputeResourceRequest &request);

      /**
       * @summary Queries the result of asynchronously creating a workflow instance.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetCreateWorkflowInstancesResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateWorkflowInstancesResultResponse
       */
      Models::GetCreateWorkflowInstancesResultResponse getCreateWorkflowInstancesResultWithOptions(const Models::GetCreateWorkflowInstancesResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of asynchronously creating a workflow instance.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetCreateWorkflowInstancesResultRequest
       * @return GetCreateWorkflowInstancesResultResponse
       */
      Models::GetCreateWorkflowInstancesResultResponse getCreateWorkflowInstancesResult(const Models::GetCreateWorkflowInstancesResultRequest &request);

      /**
       * @summary Retrieves a custom attribute definition.
       *
       * @param request GetCustomAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomAttributeResponse
       */
      Models::GetCustomAttributeResponse getCustomAttributeWithOptions(const Models::GetCustomAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a custom attribute definition.
       *
       * @param request GetCustomAttributeRequest
       * @return GetCustomAttributeResponse
       */
      Models::GetCustomAttributeResponse getCustomAttribute(const Models::GetCustomAttributeRequest &request);

      /**
       * @summary View data integration tasks.
       *
       * @description This operation requires DataWorks Basic Edition or later.
       *
       * @param request GetDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDIJobResponse
       */
      Models::GetDIJobResponse getDIJobWithOptions(const Models::GetDIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View data integration tasks.
       *
       * @description This operation requires DataWorks Basic Edition or later.
       *
       * @param request GetDIJobRequest
       * @return GetDIJobResponse
       */
      Models::GetDIJobResponse getDIJob(const Models::GetDIJobRequest &request);

      /**
       * @summary Obtains logs generated for a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDIJobLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDIJobLogResponse
       */
      Models::GetDIJobLogResponse getDIJobLogWithOptions(const Models::GetDIJobLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains logs generated for a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDIJobLogRequest
       * @return GetDIJobLogResponse
       */
      Models::GetDIJobLogResponse getDIJobLog(const Models::GetDIJobLogRequest &request);

      /**
       * @summary Retrieves the details of a data quality alert rule by rule ID.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityAlertRuleResponse
       */
      Models::GetDataQualityAlertRuleResponse getDataQualityAlertRuleWithOptions(const Models::GetDataQualityAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data quality alert rule by rule ID.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityAlertRuleRequest
       * @return GetDataQualityAlertRuleResponse
       */
      Models::GetDataQualityAlertRuleResponse getDataQualityAlertRule(const Models::GetDataQualityAlertRuleRequest &request);

      /**
       * @deprecated OpenAPI GetDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
       *
       * @summary Query the details of a data quality validation task.
       *
       * @description Available only with DataWorks Basic Edition or higher.
       *
       * @param request GetDataQualityEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityEvaluationTaskResponse
       */
      Models::GetDataQualityEvaluationTaskResponse getDataQualityEvaluationTaskWithOptions(const Models::GetDataQualityEvaluationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
       *
       * @summary Query the details of a data quality validation task.
       *
       * @description Available only with DataWorks Basic Edition or higher.
       *
       * @param request GetDataQualityEvaluationTaskRequest
       * @return GetDataQualityEvaluationTaskResponse
       */
      Models::GetDataQualityEvaluationTaskResponse getDataQualityEvaluationTask(const Models::GetDataQualityEvaluationTaskRequest &request);

      /**
       * @deprecated OpenAPI GetDataQualityEvaluationTaskInstance is deprecated, please use dataworks-public::2024-05-18::GetDataQualityScanRun instead.
       *
       * @summary Retrieves the details of a data quality check task instance.
       *
       * @description DataWorks Basic Edition or a higher edition is required to use this operation.
       *
       * @param request GetDataQualityEvaluationTaskInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityEvaluationTaskInstanceResponse
       */
      Models::GetDataQualityEvaluationTaskInstanceResponse getDataQualityEvaluationTaskInstanceWithOptions(const Models::GetDataQualityEvaluationTaskInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetDataQualityEvaluationTaskInstance is deprecated, please use dataworks-public::2024-05-18::GetDataQualityScanRun instead.
       *
       * @summary Retrieves the details of a data quality check task instance.
       *
       * @description DataWorks Basic Edition or a higher edition is required to use this operation.
       *
       * @param request GetDataQualityEvaluationTaskInstanceRequest
       * @return GetDataQualityEvaluationTaskInstanceResponse
       */
      Models::GetDataQualityEvaluationTaskInstanceResponse getDataQualityEvaluationTaskInstance(const Models::GetDataQualityEvaluationTaskInstanceRequest &request);

      /**
       * @deprecated OpenAPI GetDataQualityRule is deprecated, please use dataworks-public::2024-05-18::GetDataQualityScan instead.
       *
       * @summary Queries the details of a data quality rule.
       *
       * @description You must purchase DataWorks Basic Edition or above to use this feature.
       *
       * @param request GetDataQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityRuleResponse
       */
      Models::GetDataQualityRuleResponse getDataQualityRuleWithOptions(const Models::GetDataQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetDataQualityRule is deprecated, please use dataworks-public::2024-05-18::GetDataQualityScan instead.
       *
       * @summary Queries the details of a data quality rule.
       *
       * @description You must purchase DataWorks Basic Edition or above to use this feature.
       *
       * @param request GetDataQualityRuleRequest
       * @return GetDataQualityRuleResponse
       */
      Models::GetDataQualityRuleResponse getDataQualityRule(const Models::GetDataQualityRuleRequest &request);

      /**
       * @deprecated OpenAPI GetDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::GetDataQualityTemplate instead.
       *
       * @summary Queries the details of a data quality rule template.
       *
       * @description You can call this operation only if you have purchased DataWorks Basic Edition or a more advanced edition.
       *
       * @param request GetDataQualityRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityRuleTemplateResponse
       */
      Models::GetDataQualityRuleTemplateResponse getDataQualityRuleTemplateWithOptions(const Models::GetDataQualityRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::GetDataQualityTemplate instead.
       *
       * @summary Queries the details of a data quality rule template.
       *
       * @description You can call this operation only if you have purchased DataWorks Basic Edition or a more advanced edition.
       *
       * @param request GetDataQualityRuleTemplateRequest
       * @return GetDataQualityRuleTemplateResponse
       */
      Models::GetDataQualityRuleTemplateResponse getDataQualityRuleTemplate(const Models::GetDataQualityRuleTemplateRequest &request);

      /**
       * @summary Gets data quality monitoring details.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityScanResponse
       */
      Models::GetDataQualityScanResponse getDataQualityScanWithOptions(const Models::GetDataQualityScanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets data quality monitoring details.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityScanRequest
       * @return GetDataQualityScanResponse
       */
      Models::GetDataQualityScanResponse getDataQualityScan(const Models::GetDataQualityScanRequest &request);

      /**
       * @summary Creates a data quality monitoring run instance.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityScanRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityScanRunResponse
       */
      Models::GetDataQualityScanRunResponse getDataQualityScanRunWithOptions(const Models::GetDataQualityScanRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality monitoring run instance.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityScanRunRequest
       * @return GetDataQualityScanRunResponse
       */
      Models::GetDataQualityScanRunResponse getDataQualityScanRun(const Models::GetDataQualityScanRunRequest &request);

      /**
       * @summary Queries the log of a specific task instance that monitors data quality.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityScanRunLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityScanRunLogResponse
       */
      Models::GetDataQualityScanRunLogResponse getDataQualityScanRunLogWithOptions(const Models::GetDataQualityScanRunLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log of a specific task instance that monitors data quality.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityScanRunLogRequest
       * @return GetDataQualityScanRunLogResponse
       */
      Models::GetDataQualityScanRunLogResponse getDataQualityScanRunLog(const Models::GetDataQualityScanRunLogRequest &request);

      /**
       * @summary Retrieves the details of a data quality rule template by template ID.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityTemplateResponse
       */
      Models::GetDataQualityTemplateResponse getDataQualityTemplateWithOptions(const Models::GetDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data quality rule template by template ID.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDataQualityTemplateRequest
       * @return GetDataQualityTemplateResponse
       */
      Models::GetDataQualityTemplateResponse getDataQualityTemplate(const Models::GetDataQualityTemplateRequest &request);

      /**
       * @summary Retrieves the details of a data source by data source ID.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To call this operation, you must have one of the following roles in DataWorks:
       * - Tenant Owner, Workspace Administrator, Deployment, Development, Project Owner, and O\\&M
       *
       * @param request GetDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceResponse
       */
      Models::GetDataSourceResponse getDataSourceWithOptions(const Models::GetDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data source by data source ID.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To call this operation, you must have one of the following roles in DataWorks:
       * - Tenant Owner, Workspace Administrator, Deployment, Development, Project Owner, and O\\&M
       *
       * @param request GetDataSourceRequest
       * @return GetDataSourceResponse
       */
      Models::GetDataSourceResponse getDataSource(const Models::GetDataSourceRequest &request);

      /**
       * @summary Queries the information about a specific database in Data Map.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabaseWithOptions(const Models::GetDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specific database in Data Map.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param request GetDatabaseRequest
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabase(const Models::GetDatabaseRequest &request);

      /**
       * @summary Gets the details of a dataset.
       *
       * @param request GetDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const Models::GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a dataset.
       *
       * @param request GetDatasetRequest
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const Models::GetDatasetRequest &request);

      /**
       * @summary Gets information for a given dataset version.
       *
       * @param request GetDatasetVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetVersionResponse
       */
      Models::GetDatasetVersionResponse getDatasetVersionWithOptions(const Models::GetDatasetVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information for a given dataset version.
       *
       * @param request GetDatasetVersionRequest
       * @return GetDatasetVersionResponse
       */
      Models::GetDatasetVersionResponse getDatasetVersion(const Models::GetDatasetVersionRequest &request);

      /**
       * @summary Queries the information about a deployment package.
       *
       * @param request GetDeploymentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentPackageResponse
       */
      Models::GetDeploymentPackageResponse getDeploymentPackageWithOptions(const Models::GetDeploymentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a deployment package.
       *
       * @param request GetDeploymentPackageRequest
       * @return GetDeploymentPackageResponse
       */
      Models::GetDeploymentPackageResponse getDeploymentPackage(const Models::GetDeploymentPackageRequest &request);

      /**
       * @summary Retrieves the details of a file.
       *
       * @param request GetFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileResponse
       */
      Models::GetFileResponse getFileWithOptions(const Models::GetFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a file.
       *
       * @param request GetFileRequest
       * @return GetFileResponse
       */
      Models::GetFileResponse getFile(const Models::GetFileRequest &request);

      /**
       * @summary Invoke GetFileVersion to obtain the version details of a file.
       *
       * @param request GetFileVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileVersionResponse
       */
      Models::GetFileVersionResponse getFileVersionWithOptions(const Models::GetFileVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetFileVersion to obtain the version details of a file.
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
       * @summary Queries the information about a user-defined function (UDF) in DataStudio.
       *
       * @param request GetFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionResponse
       */
      Models::GetFunctionResponse getFunctionWithOptions(const Models::GetFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a user-defined function (UDF) in DataStudio.
       *
       * @param request GetFunctionRequest
       * @return GetFunctionResponse
       */
      Models::GetFunctionResponse getFunction(const Models::GetFunctionRequest &request);

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
       * @summary Gets the details of an image by its ID.
       *
       * @description 1. A subscription to DataWorks Basic Edition or a higher edition is required.
       * 2. **Make sure that you have created the service-linked role AliyunServiceRoleForDataWorks before you call this operation.**
       *
       * @param request GetImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageResponse
       */
      Models::GetImageResponse getImageWithOptions(const Models::GetImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of an image by its ID.
       *
       * @description 1. A subscription to DataWorks Basic Edition or a higher edition is required.
       * 2. **Make sure that you have created the service-linked role AliyunServiceRoleForDataWorks before you call this operation.**
       *
       * @param request GetImageRequest
       * @return GetImageResponse
       */
      Models::GetImageResponse getImage(const Models::GetImageRequest &request);

      /**
       * @summary Queries the status information of an asynchronous task. After you call an asynchronous operation, an asynchronous task is generated. You can call the GetJobStatus operation to query the status of the asynchronous task.
       *
       * @param request GetJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobStatusResponse
       */
      Models::GetJobStatusResponse getJobStatusWithOptions(const Models::GetJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status information of an asynchronous task. After you call an asynchronous operation, an asynchronous task is generated. You can call the GetJobStatus operation to query the status of the asynchronous task.
       *
       * @param request GetJobStatusRequest
       * @return GetJobStatusResponse
       */
      Models::GetJobStatusResponse getJobStatus(const Models::GetJobStatusRequest &request);

      /**
       * @summary Retrieves details for a specific lineage relationship in the data map.
       *
       * @description 1. This operation is available only for DataWorks Standard Edition or later.
       *
       * @param request GetLineageRelationshipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLineageRelationshipResponse
       */
      Models::GetLineageRelationshipResponse getLineageRelationshipWithOptions(const Models::GetLineageRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specific lineage relationship in the data map.
       *
       * @description 1. This operation is available only for DataWorks Standard Edition or later.
       *
       * @param request GetLineageRelationshipRequest
       * @return GetLineageRelationshipResponse
       */
      Models::GetLineageRelationshipResponse getLineageRelationship(const Models::GetLineageRelationshipRequest &request);

      /**
       * @summary Returns the details of an MCP Server.
       *
       * @description ## Description
       * This API returns the detailed configuration of a specific MCP Server by name. The response includes the creator ID, modifier ID, service address, and transport protocol. You must provide the exact name of the MCP Server in the request.
       * ### Notes
       * - Ensure you have the required permissions to call this API.
       * - The MCP Server name is case-sensitive.
       *
       * @param request GetMcpServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpServerResponse
       */
      Models::GetMcpServerResponse getMcpServerWithOptions(const Models::GetMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the details of an MCP Server.
       *
       * @description ## Description
       * This API returns the detailed configuration of a specific MCP Server by name. The response includes the creator ID, modifier ID, service address, and transport protocol. You must provide the exact name of the MCP Server in the request.
       * ### Notes
       * - Ensure you have the required permissions to call this API.
       * - The MCP Server name is case-sensitive.
       *
       * @param request GetMcpServerRequest
       * @return GetMcpServerResponse
       */
      Models::GetMcpServerResponse getMcpServer(const Models::GetMcpServerRequest &request);

      /**
       * @summary Queries the information about a collection in Data Map. Collections include categories and data albums.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request GetMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaCollectionResponse
       */
      Models::GetMetaCollectionResponse getMetaCollectionWithOptions(const Models::GetMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a collection in Data Map. Collections include categories and data albums.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request GetMetaCollectionRequest
       * @return GetMetaCollectionResponse
       */
      Models::GetMetaCollectionResponse getMetaCollection(const Models::GetMetaCollectionRequest &request);

      /**
       * @summary Retrieves the details of a custom entity.
       *
       * @param request GetMetaEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaEntityResponse
       */
      Models::GetMetaEntityResponse getMetaEntityWithOptions(const Models::GetMetaEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a custom entity.
       *
       * @param request GetMetaEntityRequest
       * @return GetMetaEntityResponse
       */
      Models::GetMetaEntityResponse getMetaEntity(const Models::GetMetaEntityRequest &request);

      /**
       * @summary Retrieves the details of a custom entity definition.
       *
       * @param request GetMetaEntityDefRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaEntityDefResponse
       */
      Models::GetMetaEntityDefResponse getMetaEntityDefWithOptions(const Models::GetMetaEntityDefRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a custom entity definition.
       *
       * @param request GetMetaEntityDefRequest
       * @return GetMetaEntityDefResponse
       */
      Models::GetMetaEntityDefResponse getMetaEntityDef(const Models::GetMetaEntityDefRequest &request);

      /**
       * @summary Queries the information about a network resource.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkResponse
       */
      Models::GetNetworkResponse getNetworkWithOptions(const Models::GetNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a network resource.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetNetworkRequest
       * @return GetNetworkResponse
       */
      Models::GetNetworkResponse getNetwork(const Models::GetNetworkRequest &request);

      /**
       * @summary Queries the information about a node in DataStudio.
       *
       * @param request GetNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeResponse
       */
      Models::GetNodeResponse getNodeWithOptions(const Models::GetNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a node in DataStudio.
       *
       * @param request GetNodeRequest
       * @return GetNodeResponse
       */
      Models::GetNodeResponse getNode(const Models::GetNodeRequest &request);

      /**
       * @summary Gets the details of a parameter by its ID.
       *
       * @description This operation is available only in DataWorks Professional Edition or later.
       *
       * @param request GetParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParameterResponse
       */
      Models::GetParameterResponse getParameterWithOptions(const Models::GetParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a parameter by its ID.
       *
       * @description This operation is available only in DataWorks Professional Edition or later.
       *
       * @param request GetParameterRequest
       * @return GetParameterResponse
       */
      Models::GetParameterResponse getParameter(const Models::GetParameterRequest &request);

      /**
       * @summary Retrieves partition details for a data map table. Currently supports MaxCompute and HMS (EMR cluster) types only.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       * 2. Only MaxCompute and HMS (EMR cluster) table types are supported.
       *
       * @param request GetPartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPartitionResponse
       */
      Models::GetPartitionResponse getPartitionWithOptions(const Models::GetPartitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves partition details for a data map table. Currently supports MaxCompute and HMS (EMR cluster) types only.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       * 2. Only MaxCompute and HMS (EMR cluster) table types are supported.
       *
       * @param request GetPartitionRequest
       * @return GetPartitionResponse
       */
      Models::GetPartitionResponse getPartition(const Models::GetPartitionRequest &request);

      /**
       * @summary Gets the details of a Deployment Process.
       *
       * @description >Notice: 
       * For earlier SDK versions that do not include this API, use the GetDeployment API with the same parameters described in this document.
       *
       * @param request GetPipelineRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineRunResponse
       */
      Models::GetPipelineRunResponse getPipelineRunWithOptions(const Models::GetPipelineRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a Deployment Process.
       *
       * @description >Notice: 
       * For earlier SDK versions that do not include this API, use the GetDeployment API with the same parameters described in this document.
       *
       * @param request GetPipelineRunRequest
       * @return GetPipelineRunResponse
       */
      Models::GetPipelineRunResponse getPipelineRun(const Models::GetPipelineRunRequest &request);

      /**
       * @summary Retrieves the approval policy for a given process definition ID.
       *
       * @description ## Request
       * - This API retrieves the details of a specific approval process definition using the `ID` parameter.
       * - The `ID` parameter is required and must be a valid process definition ID.
       * - The response includes the basic properties of the approval process definition, rule conditions, notification service configurations, and approval nodes.
       * - A successful request returns the complete process definition object. A failed request returns an error code and message for troubleshooting.
       *
       * @param request GetProcessDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProcessDefinitionResponse
       */
      Models::GetProcessDefinitionResponse getProcessDefinitionWithOptions(const Models::GetProcessDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the approval policy for a given process definition ID.
       *
       * @description ## Request
       * - This API retrieves the details of a specific approval process definition using the `ID` parameter.
       * - The `ID` parameter is required and must be a valid process definition ID.
       * - The response includes the basic properties of the approval process definition, rule conditions, notification service configurations, and approval nodes.
       * - A successful request returns the complete process definition object. A failed request returns an error code and message for troubleshooting.
       *
       * @param request GetProcessDefinitionRequest
       * @return GetProcessDefinitionResponse
       */
      Models::GetProcessDefinitionResponse getProcessDefinition(const Models::GetProcessDefinitionRequest &request);

      /**
       * @summary Retrieves details for a specified approval process instance, including its approval nodes and task list.
       *
       * @description ## Request
       * This API is used to monitor and manage the status of an approval process. By providing the approval process instance ID, you can query for related information, such as the approval process definition, current approval nodes, and the tasks on each node.
       *
       * @param request GetProcessInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProcessInstanceResponse
       */
      Models::GetProcessInstanceResponse getProcessInstanceWithOptions(const Models::GetProcessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specified approval process instance, including its approval nodes and task list.
       *
       * @description ## Request
       * This API is used to monitor and manage the status of an approval process. By providing the approval process instance ID, you can query for related information, such as the approval process definition, current approval nodes, and the tasks on each node.
       *
       * @param request GetProcessInstanceRequest
       * @return GetProcessInstanceResponse
       */
      Models::GetProcessInstanceResponse getProcessInstance(const Models::GetProcessInstanceRequest &request);

      /**
       * @summary Queries the information about a DataWorks workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const Models::GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a DataWorks workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetProjectRequest
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const Models::GetProjectRequest &request);

      /**
       * @summary Retrieves the details of a specific member in a Workspace.
       *
       * @description This operation is available only in DataWorks Basic Edition and later.
       *
       * @param request GetProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectMemberResponse
       */
      Models::GetProjectMemberResponse getProjectMemberWithOptions(const Models::GetProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific member in a Workspace.
       *
       * @description This operation is available only in DataWorks Basic Edition and later.
       *
       * @param request GetProjectMemberRequest
       * @return GetProjectMemberResponse
       */
      Models::GetProjectMemberResponse getProjectMember(const Models::GetProjectMemberRequest &request);

      /**
       * @summary Queries the details of a workspace role.
       *
       * @description You can call this operation only if you have purchased DataWorks Basic Edition or a later edition.
       *
       * @param request GetProjectRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectRoleResponse
       */
      Models::GetProjectRoleResponse getProjectRoleWithOptions(const Models::GetProjectRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a workspace role.
       *
       * @description You can call this operation only if you have purchased DataWorks Basic Edition or a later edition.
       *
       * @param request GetProjectRoleRequest
       * @return GetProjectRoleResponse
       */
      Models::GetProjectRoleResponse getProjectRole(const Models::GetProjectRoleRequest &request);

      /**
       * @summary Query the result of an asynchronous rerun workflow instance
       *
       * @param request GetRerunWorkflowInstancesResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRerunWorkflowInstancesResultResponse
       */
      Models::GetRerunWorkflowInstancesResultResponse getRerunWorkflowInstancesResultWithOptions(const Models::GetRerunWorkflowInstancesResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the result of an asynchronous rerun workflow instance
       *
       * @param request GetRerunWorkflowInstancesResultRequest
       * @return GetRerunWorkflowInstancesResultResponse
       */
      Models::GetRerunWorkflowInstancesResultResponse getRerunWorkflowInstancesResult(const Models::GetRerunWorkflowInstancesResultRequest &request);

      /**
       * @summary Queries the information about a file resource.
       *
       * @param request GetResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceResponse
       */
      Models::GetResourceResponse getResourceWithOptions(const Models::GetResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a file resource.
       *
       * @param request GetResourceRequest
       * @return GetResourceResponse
       */
      Models::GetResourceResponse getResource(const Models::GetResourceRequest &request);

      /**
       * @summary Queries the information about a resource group based on its ID.
       *
       * @description DataWorks Basic Edition or a more advanced edition is required to use this feature.
       *
       * @param request GetResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroupWithOptions(const Models::GetResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a resource group based on its ID.
       *
       * @description DataWorks Basic Edition or a more advanced edition is required to use this feature.
       *
       * @param request GetResourceGroupRequest
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroup(const Models::GetResourceGroupRequest &request);

      /**
       * @summary Queries the information about a route based on its ID.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRouteResponse
       */
      Models::GetRouteResponse getRouteWithOptions(const Models::GetRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a route based on its ID.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetRouteRequest
       * @return GetRouteResponse
       */
      Models::GetRouteResponse getRoute(const Models::GetRouteRequest &request);

      /**
       * @summary Retrieves the schema details of a specified table in Data Map. Only MaxCompute and Hologres schemas are supported.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       * 2. Only MaxCompute and Hologres types are supported.
       *
       * @param request GetSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchemaWithOptions(const Models::GetSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the schema details of a specified table in Data Map. Only MaxCompute and Hologres schemas are supported.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       * 2. Only MaxCompute and Hologres types are supported.
       *
       * @param request GetSchemaRequest
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchema(const Models::GetSchemaRequest &request);

      /**
       * @summary Retrieves the details of a security policy by its ID. This operation requires both DataWorks tenant administrator and security administrator permissions.
       *
       * @description ## Request
       * - This API retrieves the complete configuration information for a security policy by its ID.
       * - The API returns an error message if the provided `Id` is invalid or does not exist.
       * - The response includes basic policy information, such as its name and description, and policy details, such as control items and their settings.
       * - Note: Some fields in a system default policy cannot be modified or deleted.
       *
       * @param request GetSecurityStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityStrategyResponse
       */
      Models::GetSecurityStrategyResponse getSecurityStrategyWithOptions(const Models::GetSecurityStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a security policy by its ID. This operation requires both DataWorks tenant administrator and security administrator permissions.
       *
       * @description ## Request
       * - This API retrieves the complete configuration information for a security policy by its ID.
       * - The API returns an error message if the provided `Id` is invalid or does not exist.
       * - The response includes basic policy information, such as its name and description, and policy details, such as control items and their settings.
       * - Note: Some fields in a system default policy cannot be modified or deleted.
       *
       * @param request GetSecurityStrategyRequest
       * @return GetSecurityStrategyResponse
       */
      Models::GetSecurityStrategyResponse getSecurityStrategy(const Models::GetSecurityStrategyRequest &request);

      /**
       * @summary Retrieves the details of a specified Skill by name, including the body of the SKILL.md file and the bundle\\"s download link.
       *
       * @description ## Overview
       * - **request parameters**: The name of the target Skill.
       * - **response parameters**: The details of the Skill, including its name, description, creator ID, modifier ID, visibility level, visibility scope, the body of the SKILL.md file, a temporary download link for bundle.zip (which requires no authentication and will expire), the creation time, and the last modified time.
       * - **Note**: The `BundleUrl` is a temporary download link. Once the link expires, you must call this operation again to get a new one.
       *
       * @param request GetSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkillWithOptions(const Models::GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified Skill by name, including the body of the SKILL.md file and the bundle\\"s download link.
       *
       * @description ## Overview
       * - **request parameters**: The name of the target Skill.
       * - **response parameters**: The details of the Skill, including its name, description, creator ID, modifier ID, visibility level, visibility scope, the body of the SKILL.md file, a temporary download link for bundle.zip (which requires no authentication and will expire), the creation time, and the last modified time.
       * - **Note**: The `BundleUrl` is a temporary download link. Once the link expires, you must call this operation again to get a new one.
       *
       * @param request GetSkillRequest
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkill(const Models::GetSkillRequest &request);

      /**
       * @summary Retrieves the details of a specified data table in DataWorks Data Map. You can specify whether to return business metadata.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableResponse
       */
      Models::GetTableResponse getTableWithOptions(const Models::GetTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified data table in DataWorks Data Map. You can specify whether to return business metadata.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetTableRequest
       * @return GetTableResponse
       */
      Models::GetTableResponse getTable(const Models::GetTableRequest &request);

      /**
       * @summary Queries the information about a task.
       *
       * @param request GetTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const Models::GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a task.
       *
       * @param request GetTaskRequest
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const Models::GetTaskRequest &request);

      /**
       * @summary Queries the information about an instance.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetTaskInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskInstanceResponse
       */
      Models::GetTaskInstanceResponse getTaskInstanceWithOptions(const Models::GetTaskInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an instance.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetTaskInstanceRequest
       * @return GetTaskInstanceResponse
       */
      Models::GetTaskInstanceResponse getTaskInstance(const Models::GetTaskInstanceRequest &request);

      /**
       * @summary Queries the run log generated during a specific run of an instance.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetTaskInstanceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskInstanceLogResponse
       */
      Models::GetTaskInstanceLogResponse getTaskInstanceLogWithOptions(const Models::GetTaskInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the run log generated during a specific run of an instance.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetTaskInstanceLogRequest
       * @return GetTaskInstanceLogResponse
       */
      Models::GetTaskInstanceLogResponse getTaskInstanceLog(const Models::GetTaskInstanceLogRequest &request);

      /**
       * @summary Queries the information about a workflow.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowResponse
       */
      Models::GetWorkflowResponse getWorkflowWithOptions(const Models::GetWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a workflow.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetWorkflowRequest
       * @return GetWorkflowResponse
       */
      Models::GetWorkflowResponse getWorkflow(const Models::GetWorkflowRequest &request);

      /**
       * @summary Queries the information about a workflow.
       *
       * @param request GetWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowDefinitionResponse
       */
      Models::GetWorkflowDefinitionResponse getWorkflowDefinitionWithOptions(const Models::GetWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a workflow.
       *
       * @param request GetWorkflowDefinitionRequest
       * @return GetWorkflowDefinitionResponse
       */
      Models::GetWorkflowDefinitionResponse getWorkflowDefinition(const Models::GetWorkflowDefinitionRequest &request);

      /**
       * @summary Queries the information about a workflow instance.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetWorkflowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowInstanceResponse
       */
      Models::GetWorkflowInstanceResponse getWorkflowInstanceWithOptions(const Models::GetWorkflowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a workflow instance.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request GetWorkflowInstanceRequest
       * @return GetWorkflowInstanceResponse
       */
      Models::GetWorkflowInstanceResponse getWorkflowInstance(const Models::GetWorkflowInstanceRequest &request);

      /**
       * @summary Assigns roles to members in a workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq GrantMemberProjectRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantMemberProjectRolesResponse
       */
      Models::GrantMemberProjectRolesResponse grantMemberProjectRolesWithOptions(const Models::GrantMemberProjectRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns roles to members in a workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GrantMemberProjectRolesRequest
       * @return GrantMemberProjectRolesResponse
       */
      Models::GrantMemberProjectRolesResponse grantMemberProjectRoles(const Models::GrantMemberProjectRolesRequest &request);

      /**
       * @summary Imports a certificate file.
       *
       * @description 1. This feature requires DataWorks Basic Edition or a later version.
       * 2. You must be assigned one of the following roles in the DataWorks project: Tenant Owner, Space Administrator, Project Owner, or O\\&M.
       *
       * @param request ImportCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCertificateResponse
       */
      Models::ImportCertificateResponse importCertificateWithOptions(const Models::ImportCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a certificate file.
       *
       * @description 1. This feature requires DataWorks Basic Edition or a later version.
       * 2. You must be assigned one of the following roles in the DataWorks project: Tenant Owner, Space Administrator, Project Owner, or O\\&M.
       *
       * @param request ImportCertificateRequest
       * @return ImportCertificateResponse
       */
      Models::ImportCertificateResponse importCertificate(const Models::ImportCertificateRequest &request);

      Models::ImportCertificateResponse importCertificateAdvance(const Models::ImportCertificateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a workflow node defined by FlowSpec and its child nodes into DataStudio.
       *
       * @description >Notice: 
       * - This operation does not support importing multiple workflows. If more than one workflow is defined in the FlowSpec, all workflows except the first one are ignored.
       * - This is an asynchronous operation. The response returns an asynchronous task object. Call GetJobStatus to query the execution status of the task.
       *
       * @param request ImportWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportWorkflowDefinitionResponse
       */
      Models::ImportWorkflowDefinitionResponse importWorkflowDefinitionWithOptions(const Models::ImportWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a workflow node defined by FlowSpec and its child nodes into DataStudio.
       *
       * @description >Notice: 
       * - This operation does not support importing multiple workflows. If more than one workflow is defined in the FlowSpec, all workflows except the first one are ignored.
       * - This is an asynchronous operation. The response returns an asynchronous task object. Call GetJobStatus to query the execution status of the task.
       *
       * @param request ImportWorkflowDefinitionRequest
       * @return ImportWorkflowDefinitionResponse
       */
      Models::ImportWorkflowDefinitionResponse importWorkflowDefinition(const Models::ImportWorkflowDefinitionRequest &request);

      /**
       * @summary Retrieves a list of artifacts from a specified session.
       *
       * @description ## Request
       * - This operation retrieves all artifacts from a specific session. You can use the `Params.RequestId` parameter to filter for artifacts from a specific request.
       * - The `NextToken` parameter is a continuation token used to retrieve the next page of results. Do not specify this parameter for the first request.
       * - By default, this operation returns up to 50 artifacts per page. You can use the `MaxResults` parameter to specify a different limit.
       *
       * @param tmpReq ListAgentSessionArtifactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSessionArtifactsResponse
       */
      Models::ListAgentSessionArtifactsResponse listAgentSessionArtifactsWithOptions(const Models::ListAgentSessionArtifactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of artifacts from a specified session.
       *
       * @description ## Request
       * - This operation retrieves all artifacts from a specific session. You can use the `Params.RequestId` parameter to filter for artifacts from a specific request.
       * - The `NextToken` parameter is a continuation token used to retrieve the next page of results. Do not specify this parameter for the first request.
       * - By default, this operation returns up to 50 artifacts per page. You can use the `MaxResults` parameter to specify a different limit.
       *
       * @param request ListAgentSessionArtifactsRequest
       * @return ListAgentSessionArtifactsResponse
       */
      Models::ListAgentSessionArtifactsResponse listAgentSessionArtifacts(const Models::ListAgentSessionArtifactsRequest &request);

      /**
       * @summary Retrieves the conversation history for the agent session.
       *
       * @description ## Request
       * - Specify at least one of `agentName` or `sessionSourceList`.
       * - You can use the `tagList`, `sessionId`, and `sessionTitle` parameters for combined filtering.
       * - The response follows the Alibaba Cloud OpenAPI pagination specification and includes the `totalCount`, `maxResults`, `nextToken`, and `sessionList` fields.
       * - If you provide an invalid string for `nextToken`, its value defaults to `1`.
       * - By default, this operation returns 50 records per page. You can use the `maxResults` parameter to adjust this number.
       *
       * @param tmpReq ListAgentSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSessionsResponse
       */
      Models::ListAgentSessionsResponse listAgentSessionsWithOptions(const Models::ListAgentSessionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the conversation history for the agent session.
       *
       * @description ## Request
       * - Specify at least one of `agentName` or `sessionSourceList`.
       * - You can use the `tagList`, `sessionId`, and `sessionTitle` parameters for combined filtering.
       * - The response follows the Alibaba Cloud OpenAPI pagination specification and includes the `totalCount`, `maxResults`, `nextToken`, and `sessionList` fields.
       * - If you provide an invalid string for `nextToken`, its value defaults to `1`.
       * - By default, this operation returns 50 records per page. You can use the `maxResults` parameter to adjust this number.
       *
       * @param request ListAgentSessionsRequest
       * @return ListAgentSessionsResponse
       */
      Models::ListAgentSessionsResponse listAgentSessions(const Models::ListAgentSessionsRequest &request);

      /**
       * @summary Lists agents for the current tenant and supports filtering by name and pagination.
       *
       * @description ## Request description
       * - This operation lists all available agents for the current tenant.
       * - You can filter the results by specifying an exact match for the `agentName` parameter.
       *
       * @param tmpReq ListAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgentsWithOptions(const Models::ListAgentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists agents for the current tenant and supports filtering by name and pagination.
       *
       * @description ## Request description
       * - This operation lists all available agents for the current tenant.
       * - You can filter the results by specifying an exact match for the `agentName` parameter.
       *
       * @param request ListAgentsRequest
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgents(const Models::ListAgentsRequest &request);

      /**
       * @summary Queries a list of custom monitoring alert rules.
       *
       * @param tmpReq ListAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertRulesResponse
       */
      Models::ListAlertRulesResponse listAlertRulesWithOptions(const Models::ListAlertRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom monitoring alert rules.
       *
       * @param request ListAlertRulesRequest
       * @return ListAlertRulesResponse
       */
      Models::ListAlertRulesResponse listAlertRules(const Models::ListAlertRulesRequest &request);

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
       * @summary Queries a list of catalogs in Data Map. Only catalogs of the Data Lake Formation (DLF) and StarRocks metadata crawler types are supported. For the DLF metadata crawler type, all supported data catalogs are returned. For the StarRocks metadata crawler type, data catalogs in a specific instance are returned.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param tmpReq ListCatalogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogsWithOptions(const Models::ListCatalogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of catalogs in Data Map. Only catalogs of the Data Lake Formation (DLF) and StarRocks metadata crawler types are supported. For the DLF metadata crawler type, all supported data catalogs are returned. For the StarRocks metadata crawler type, data catalogs in a specific instance are returned.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param request ListCatalogsRequest
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogs(const Models::ListCatalogsRequest &request);

      /**
       * @summary Retrieves a list of certificate files.
       *
       * @description 1. This API operation is available for all DataWorks editions.
       * 2. You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator.
       *
       * @param request ListCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificatesWithOptions(const Models::ListCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of certificate files.
       *
       * @description 1. This API operation is available for all DataWorks editions.
       * 2. You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator.
       *
       * @param request ListCertificatesRequest
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificates(const Models::ListCertificatesRequest &request);

      /**
       * @summary Queries the column list of a specified data table in DataWorks Data Map.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request ListColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListColumnsResponse
       */
      Models::ListColumnsResponse listColumnsWithOptions(const Models::ListColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the column list of a specified data table in DataWorks Data Map.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request ListColumnsRequest
       * @return ListColumnsResponse
       */
      Models::ListColumnsResponse listColumns(const Models::ListColumnsRequest &request);

      /**
       * @summary Retrieves a list of components.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request ListComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponentsWithOptions(const Models::ListComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of components.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request ListComponentsRequest
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponents(const Models::ListComponentsRequest &request);

      /**
       * @summary Queries the list of computing resources that meet the specified business information.
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required.
       * 2. You must have at least one of the following roles in the DataWorks workspace:
       * 3. Tenant Owner, Workspace Administrator, Deploy, Developer, Visitor, Project Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, Development Platform Administrator, Data Governance Administrator
       *
       * @param tmpReq ListComputeResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeResourcesResponse
       */
      Models::ListComputeResourcesResponse listComputeResourcesWithOptions(const Models::ListComputeResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of computing resources that meet the specified business information.
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required.
       * 2. You must have at least one of the following roles in the DataWorks workspace:
       * 3. Tenant Owner, Workspace Administrator, Deploy, Developer, Visitor, Project Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, Development Platform Administrator, Data Governance Administrator
       *
       * @param request ListComputeResourcesRequest
       * @return ListComputeResourcesResponse
       */
      Models::ListComputeResourcesResponse listComputeResources(const Models::ListComputeResourcesRequest &request);

      /**
       * @summary Queries a list of metadata crawler types supported in Data Map. The subtypes of the types and the hierarchical relationship between the subtypes are also returned.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCrawlerTypesResponse
       */
      Models::ListCrawlerTypesResponse listCrawlerTypesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of metadata crawler types supported in Data Map. The subtypes of the types and the hierarchical relationship between the subtypes are also returned.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @return ListCrawlerTypesResponse
       */
      Models::ListCrawlerTypesResponse listCrawlerTypes();

      /**
       * @summary Retrieves a paginated list of custom agents.
       *
       * @description ## Request
       * - **Search keyword**: Use the `Q` parameter to perform a fuzzy search by agent name.
       * - **Visibility level filtering**: Use the `Visibility` parameter to filter results by visibility level, such as `TENANT`, `PROJECT`, or `USER`.
       * - **Paging information**: Use the `MaxResults` and `NextToken` parameters to implement paginated queries. `NextToken` retrieves the next page of results.
       *
       * @param tmpReq ListCustomAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentsResponse
       */
      Models::ListCustomAgentsResponse listCustomAgentsWithOptions(const Models::ListCustomAgentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of custom agents.
       *
       * @description ## Request
       * - **Search keyword**: Use the `Q` parameter to perform a fuzzy search by agent name.
       * - **Visibility level filtering**: Use the `Visibility` parameter to filter results by visibility level, such as `TENANT`, `PROJECT`, or `USER`.
       * - **Paging information**: Use the `MaxResults` and `NextToken` parameters to implement paginated queries. `NextToken` retrieves the next page of results.
       *
       * @param request ListCustomAgentsRequest
       * @return ListCustomAgentsResponse
       */
      Models::ListCustomAgentsResponse listCustomAgents(const Models::ListCustomAgentsRequest &request);

      /**
       * @summary Retrieves a list of custom attribute definitions.
       *
       * @param request ListCustomAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAttributesResponse
       */
      Models::ListCustomAttributesResponse listCustomAttributesWithOptions(const Models::ListCustomAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of custom attribute definitions.
       *
       * @param request ListCustomAttributesRequest
       * @return ListCustomAttributesResponse
       */
      Models::ListCustomAttributesResponse listCustomAttributes(const Models::ListCustomAttributesRequest &request);

      /**
       * @summary Views alert rules configured for a synchronization task.
       *
       * @param request ListDIAlarmRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIAlarmRulesResponse
       */
      Models::ListDIAlarmRulesResponse listDIAlarmRulesWithOptions(const Models::ListDIAlarmRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Views alert rules configured for a synchronization task.
       *
       * @param request ListDIAlarmRulesRequest
       * @return ListDIAlarmRulesResponse
       */
      Models::ListDIAlarmRulesResponse listDIAlarmRules(const Models::ListDIAlarmRulesRequest &request);

      /**
       * @summary Queries events for a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDIJobEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIJobEventsResponse
       */
      Models::ListDIJobEventsResponse listDIJobEventsWithOptions(const Models::ListDIJobEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries events for a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDIJobEventsRequest
       * @return ListDIJobEventsResponse
       */
      Models::ListDIJobEventsResponse listDIJobEvents(const Models::ListDIJobEventsRequest &request);

      /**
       * @summary Queries metrics for a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq ListDIJobMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIJobMetricsResponse
       */
      Models::ListDIJobMetricsResponse listDIJobMetricsWithOptions(const Models::ListDIJobMetricsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metrics for a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDIJobMetricsRequest
       * @return ListDIJobMetricsResponse
       */
      Models::ListDIJobMetricsResponse listDIJobMetrics(const Models::ListDIJobMetricsRequest &request);

      /**
       * @summary Queries the running information about a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDIJobRunDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIJobRunDetailsResponse
       */
      Models::ListDIJobRunDetailsResponse listDIJobRunDetailsWithOptions(const Models::ListDIJobRunDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running information about a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDIJobRunDetailsRequest
       * @return ListDIJobRunDetailsResponse
       */
      Models::ListDIJobRunDetailsResponse listDIJobRunDetails(const Models::ListDIJobRunDetailsRequest &request);

      /**
       * @summary Lists Data Integration jobs.
       *
       * @description This operation requires DataWorks Basic Edition or a later edition.
       *
       * @param request ListDIJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIJobsResponse
       */
      Models::ListDIJobsResponse listDIJobsWithOptions(const Models::ListDIJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists Data Integration jobs.
       *
       * @description This operation requires DataWorks Basic Edition or a later edition.
       *
       * @param request ListDIJobsRequest
       * @return ListDIJobsResponse
       */
      Models::ListDIJobsResponse listDIJobs(const Models::ListDIJobsRequest &request);

      /**
       * @summary Queries a list of tags.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param request ListDataAssetTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAssetTagsResponse
       */
      Models::ListDataAssetTagsResponse listDataAssetTagsWithOptions(const Models::ListDataAssetTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param request ListDataAssetTagsRequest
       * @return ListDataAssetTagsResponse
       */
      Models::ListDataAssetTagsResponse listDataAssetTags(const Models::ListDataAssetTagsRequest &request);

      /**
       * @summary Queries DataWorks data assets that are associated with tags by paging.
       *
       * @description You must purchase DataWorks Enterprise Edition or a higher edition to use this feature.
       *
       * @param tmpReq ListDataAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAssetsResponse
       */
      Models::ListDataAssetsResponse listDataAssetsWithOptions(const Models::ListDataAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DataWorks data assets that are associated with tags by paging.
       *
       * @description You must purchase DataWorks Enterprise Edition or a higher edition to use this feature.
       *
       * @param request ListDataAssetsRequest
       * @return ListDataAssetsResponse
       */
      Models::ListDataAssetsResponse listDataAssets(const Models::ListDataAssetsRequest &request);

      /**
       * @summary Queries the list of data quality alert rules in a project.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request ListDataQualityAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityAlertRulesResponse
       */
      Models::ListDataQualityAlertRulesResponse listDataQualityAlertRulesWithOptions(const Models::ListDataQualityAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data quality alert rules in a project.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request ListDataQualityAlertRulesRequest
       * @return ListDataQualityAlertRulesResponse
       */
      Models::ListDataQualityAlertRulesResponse listDataQualityAlertRules(const Models::ListDataQualityAlertRulesRequest &request);

      /**
       * @deprecated OpenAPI ListDataQualityEvaluationTaskInstances is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScanRuns instead.
       *
       * @summary Performs a paginated query of the quality monitoring task instance list.
       *
       * @description You must purchase DataWorks Basic Edition or above to use this feature.
       *
       * @param request ListDataQualityEvaluationTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityEvaluationTaskInstancesResponse
       */
      Models::ListDataQualityEvaluationTaskInstancesResponse listDataQualityEvaluationTaskInstancesWithOptions(const Models::ListDataQualityEvaluationTaskInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListDataQualityEvaluationTaskInstances is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScanRuns instead.
       *
       * @summary Performs a paginated query of the quality monitoring task instance list.
       *
       * @description You must purchase DataWorks Basic Edition or above to use this feature.
       *
       * @param request ListDataQualityEvaluationTaskInstancesRequest
       * @return ListDataQualityEvaluationTaskInstancesResponse
       */
      Models::ListDataQualityEvaluationTaskInstancesResponse listDataQualityEvaluationTaskInstances(const Models::ListDataQualityEvaluationTaskInstancesRequest &request);

      /**
       * @deprecated OpenAPI ListDataQualityEvaluationTasks is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScans instead.
       *
       * @summary Lists quality monitoring nodes by paging query.
       *
       * @description 需要购买DataWorks基础版及以上版本才能使用
       *
       * @param request ListDataQualityEvaluationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityEvaluationTasksResponse
       */
      Models::ListDataQualityEvaluationTasksResponse listDataQualityEvaluationTasksWithOptions(const Models::ListDataQualityEvaluationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListDataQualityEvaluationTasks is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScans instead.
       *
       * @summary Lists quality monitoring nodes by paging query.
       *
       * @description 需要购买DataWorks基础版及以上版本才能使用
       *
       * @param request ListDataQualityEvaluationTasksRequest
       * @return ListDataQualityEvaluationTasksResponse
       */
      Models::ListDataQualityEvaluationTasksResponse listDataQualityEvaluationTasks(const Models::ListDataQualityEvaluationTasksRequest &request);

      /**
       * @deprecated OpenAPI ListDataQualityResults is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScanRuns instead.
       *
       * @summary Queries a list of data quality results by using paging.
       *
       * @description 需要购买DataWorks基础版及以上版本才能使用
       *
       * @param request ListDataQualityResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityResultsResponse
       */
      Models::ListDataQualityResultsResponse listDataQualityResultsWithOptions(const Models::ListDataQualityResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListDataQualityResults is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScanRuns instead.
       *
       * @summary Queries a list of data quality results by using paging.
       *
       * @description 需要购买DataWorks基础版及以上版本才能使用
       *
       * @param request ListDataQualityResultsRequest
       * @return ListDataQualityResultsResponse
       */
      Models::ListDataQualityResultsResponse listDataQualityResults(const Models::ListDataQualityResultsRequest &request);

      /**
       * @deprecated OpenAPI ListDataQualityRuleTemplates is deprecated, please use dataworks-public::2024-05-18::ListDataQualityTemplates instead.
       *
       * @summary Queries a list of data quality rule templates.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param request ListDataQualityRuleTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityRuleTemplatesResponse
       */
      Models::ListDataQualityRuleTemplatesResponse listDataQualityRuleTemplatesWithOptions(const Models::ListDataQualityRuleTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListDataQualityRuleTemplates is deprecated, please use dataworks-public::2024-05-18::ListDataQualityTemplates instead.
       *
       * @summary Queries a list of data quality rule templates.
       *
       * @description You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param request ListDataQualityRuleTemplatesRequest
       * @return ListDataQualityRuleTemplatesResponse
       */
      Models::ListDataQualityRuleTemplatesResponse listDataQualityRuleTemplates(const Models::ListDataQualityRuleTemplatesRequest &request);

      /**
       * @deprecated OpenAPI ListDataQualityRules is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScans instead.
       *
       * @summary Paginated query of data quality monitoring rules.
       *
       * @description Requires DataWorks Basic Edition or above.
       *
       * @param request ListDataQualityRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityRulesResponse
       */
      Models::ListDataQualityRulesResponse listDataQualityRulesWithOptions(const Models::ListDataQualityRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListDataQualityRules is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScans instead.
       *
       * @summary Paginated query of data quality monitoring rules.
       *
       * @description Requires DataWorks Basic Edition or above.
       *
       * @param request ListDataQualityRulesRequest
       * @return ListDataQualityRulesResponse
       */
      Models::ListDataQualityRulesResponse listDataQualityRules(const Models::ListDataQualityRulesRequest &request);

      /**
       * @summary Queries the run history of data quality scans in a specified project.
       *
       * @description This feature requires DataWorks basic edition or higher.
       *
       * @param tmpReq ListDataQualityScanRunsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityScanRunsResponse
       */
      Models::ListDataQualityScanRunsResponse listDataQualityScanRunsWithOptions(const Models::ListDataQualityScanRunsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the run history of data quality scans in a specified project.
       *
       * @description This feature requires DataWorks basic edition or higher.
       *
       * @param request ListDataQualityScanRunsRequest
       * @return ListDataQualityScanRunsResponse
       */
      Models::ListDataQualityScanRunsResponse listDataQualityScanRuns(const Models::ListDataQualityScanRunsRequest &request);

      /**
       * @summary Queries the list of data quality scan tasks in a project.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request ListDataQualityScansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityScansResponse
       */
      Models::ListDataQualityScansResponse listDataQualityScansWithOptions(const Models::ListDataQualityScansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data quality scan tasks in a project.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request ListDataQualityScansRequest
       * @return ListDataQualityScansResponse
       */
      Models::ListDataQualityScansResponse listDataQualityScans(const Models::ListDataQualityScansRequest &request);

      /**
       * @summary Queries the list of data quality rule templates in a project.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request ListDataQualityTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityTemplatesResponse
       */
      Models::ListDataQualityTemplatesResponse listDataQualityTemplatesWithOptions(const Models::ListDataQualityTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data quality rule templates in a project.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request ListDataQualityTemplatesRequest
       * @return ListDataQualityTemplatesResponse
       */
      Models::ListDataQualityTemplatesResponse listDataQualityTemplates(const Models::ListDataQualityTemplatesRequest &request);

      /**
       * @summary Retrieves a list of sharing rules for a data source.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To query the sharing rules of a data source associated with a workspace, you must have the data source sharing permissions in that workspace. You must have one of the following roles in DataWorks:
       * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request ListDataSourceSharedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceSharedRulesResponse
       */
      Models::ListDataSourceSharedRulesResponse listDataSourceSharedRulesWithOptions(const Models::ListDataSourceSharedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of sharing rules for a data source.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To query the sharing rules of a data source associated with a workspace, you must have the data source sharing permissions in that workspace. You must have one of the following roles in DataWorks:
       * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request ListDataSourceSharedRulesRequest
       * @return ListDataSourceSharedRulesResponse
       */
      Models::ListDataSourceSharedRulesResponse listDataSourceSharedRules(const Models::ListDataSourceSharedRulesRequest &request);

      /**
       * @summary Retrieves a list of data sources that match the specified filter conditions.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To call this operation, you must have one of the following roles in DataWorks:
       * - Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator
       *
       * @param tmpReq ListDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const Models::ListDataSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data sources that match the specified filter conditions.
       *
       * @description 1. This operation is available for all DataWorks editions.
       * 2. To call this operation, you must have one of the following roles in DataWorks:
       * - Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator
       *
       * @param request ListDataSourcesRequest
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const Models::ListDataSourcesRequest &request);

      /**
       * @summary Queries a list of databases in an instance, cluster, or data catalog in Data Map. For DLF or StarRocks data sources, you can call this API operation to query databases in a data catalog. For StarRocks data sources, you can call this API operation to query databases in internal catalogs. For other types of data sources, you can call this API operation to query databases in an instance or cluster.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       * 2. For the StarRocks type, only the Internal catalog is supported.
       *
       * @param request ListDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const Models::ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of databases in an instance, cluster, or data catalog in Data Map. For DLF or StarRocks data sources, you can call this API operation to query databases in a data catalog. For StarRocks data sources, you can call this API operation to query databases in internal catalogs. For other types of data sources, you can call this API operation to query databases in an instance or cluster.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       * 2. For the StarRocks type, only the Internal catalog is supported.
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const Models::ListDatabasesRequest &request);

      /**
       * @summary Retrieves the version list for a given dataset.
       *
       * @param request ListDatasetVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetVersionsResponse
       */
      Models::ListDatasetVersionsResponse listDatasetVersionsWithOptions(const Models::ListDatasetVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the version list for a given dataset.
       *
       * @param request ListDatasetVersionsRequest
       * @return ListDatasetVersionsResponse
       */
      Models::ListDatasetVersionsResponse listDatasetVersions(const Models::ListDatasetVersionsRequest &request);

      /**
       * @summary Queries a list of datasets. Currently, DataWorks datasets and PAI datasets are supported.
       *
       * @param tmpReq ListDatasetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const Models::ListDatasetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of datasets. Currently, DataWorks datasets and PAI datasets are supported.
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const Models::ListDatasetsRequest &request);

      /**
       * @summary Queries a list of versions of files to be deployed.
       *
       * @param tmpReq ListDeploymentPackageFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentPackageFilesResponse
       */
      Models::ListDeploymentPackageFilesResponse listDeploymentPackageFilesWithOptions(const Models::ListDeploymentPackageFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of versions of files to be deployed.
       *
       * @param request ListDeploymentPackageFilesRequest
       * @return ListDeploymentPackageFilesResponse
       */
      Models::ListDeploymentPackageFilesResponse listDeploymentPackageFiles(const Models::ListDeploymentPackageFilesRequest &request);

      /**
       * @summary Queries a list of deployment packages.
       *
       * @param request ListDeploymentPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentPackagesResponse
       */
      Models::ListDeploymentPackagesResponse listDeploymentPackagesWithOptions(const Models::ListDeploymentPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of deployment packages.
       *
       * @param request ListDeploymentPackagesRequest
       * @return ListDeploymentPackagesResponse
       */
      Models::ListDeploymentPackagesResponse listDeploymentPackages(const Models::ListDeploymentPackagesRequest &request);

      /**
       * @summary Queries a list of descendant instances of an instance by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDownstreamTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownstreamTaskInstancesResponse
       */
      Models::ListDownstreamTaskInstancesResponse listDownstreamTaskInstancesWithOptions(const Models::ListDownstreamTaskInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of descendant instances of an instance by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDownstreamTaskInstancesRequest
       * @return ListDownstreamTaskInstancesResponse
       */
      Models::ListDownstreamTaskInstancesResponse listDownstreamTaskInstances(const Models::ListDownstreamTaskInstancesRequest &request);

      /**
       * @summary Queries a list of descendant tasks of a task by page.
       *
       * @param request ListDownstreamTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownstreamTasksResponse
       */
      Models::ListDownstreamTasksResponse listDownstreamTasksWithOptions(const Models::ListDownstreamTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of descendant tasks of a task by page.
       *
       * @param request ListDownstreamTasksRequest
       * @return ListDownstreamTasksResponse
       */
      Models::ListDownstreamTasksResponse listDownstreamTasks(const Models::ListDownstreamTasksRequest &request);

      /**
       * @summary Queries a list of entities in a collection in Data Map. Collections include categories and data albums. Entities can only be tables.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request ListEntitiesInMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEntitiesInMetaCollectionResponse
       */
      Models::ListEntitiesInMetaCollectionResponse listEntitiesInMetaCollectionWithOptions(const Models::ListEntitiesInMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of entities in a collection in Data Map. Collections include categories and data albums. Entities can only be tables.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request ListEntitiesInMetaCollectionRequest
       * @return ListEntitiesInMetaCollectionResponse
       */
      Models::ListEntitiesInMetaCollectionResponse listEntitiesInMetaCollection(const Models::ListEntitiesInMetaCollectionRequest &request);

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
       * @summary Queries a list of user-defined functions (UDFs) in DataStudio. You can also specify filter conditions to query specific UDFs.
       *
       * @param request ListFunctionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctionsWithOptions(const Models::ListFunctionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of user-defined functions (UDFs) in DataStudio. You can also specify filter conditions to query specific UDFs.
       *
       * @param request ListFunctionsRequest
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctions(const Models::ListFunctionsRequest &request);

      /**
       * @summary Lists the workspaces associated with an image.
       *
       * @description 1. You must purchase DataWorks Basic Edition or higher to call this operation.
       * 2. **Before you call this operation, ensure that the AliyunServiceRoleForDataWorks service-linked role is created.**
       *
       * @param request ListImageAssociatedProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageAssociatedProjectsResponse
       */
      Models::ListImageAssociatedProjectsResponse listImageAssociatedProjectsWithOptions(const Models::ListImageAssociatedProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the workspaces associated with an image.
       *
       * @description 1. You must purchase DataWorks Basic Edition or higher to call this operation.
       * 2. **Before you call this operation, ensure that the AliyunServiceRoleForDataWorks service-linked role is created.**
       *
       * @param request ListImageAssociatedProjectsRequest
       * @return ListImageAssociatedProjectsResponse
       */
      Models::ListImageAssociatedProjectsResponse listImageAssociatedProjects(const Models::ListImageAssociatedProjectsRequest &request);

      /**
       * @summary Gets the details of a specified image version.
       *
       * @description 1. To use this API, you must purchase DataWorks Basic Edition or a later edition.
       * 2. **Ensure you create the service-linked role AliyunServiceRoleForDataWorks before you call this API.**
       *
       * @param request ListImageVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageVersionsResponse
       */
      Models::ListImageVersionsResponse listImageVersionsWithOptions(const Models::ListImageVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a specified image version.
       *
       * @description 1. To use this API, you must purchase DataWorks Basic Edition or a later edition.
       * 2. **Ensure you create the service-linked role AliyunServiceRoleForDataWorks before you call this API.**
       *
       * @param request ListImageVersionsRequest
       * @return ListImageVersionsResponse
       */
      Models::ListImageVersionsResponse listImageVersions(const Models::ListImageVersionsRequest &request);

      /**
       * @summary Retrieves a list of images.
       *
       * @description 1. You must have DataWorks Basic Edition or a later version to use this API.
       * 2. **Before you use this API, make sure that the service-linked role AliyunServiceRoleForDataWorks is created.**
       *
       * @param tmpReq ListImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImagesWithOptions(const Models::ListImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of images.
       *
       * @description 1. You must have DataWorks Basic Edition or a later version to use this API.
       * 2. **Before you use this API, make sure that the service-linked role AliyunServiceRoleForDataWorks is created.**
       *
       * @param request ListImagesRequest
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImages(const Models::ListImagesRequest &request);

      /**
       * @summary Queries the data map for data lineage relationships between specified entities, such as tables, columns, and OSS objects.
       *
       * @description 1. This operation is available in DataWorks Standard Edition and later versions.
       *
       * @param request ListLineageRelationshipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLineageRelationshipsResponse
       */
      Models::ListLineageRelationshipsResponse listLineageRelationshipsWithOptions(const Models::ListLineageRelationshipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data map for data lineage relationships between specified entities, such as tables, columns, and OSS objects.
       *
       * @description 1. This operation is available in DataWorks Standard Edition and later versions.
       *
       * @param request ListLineageRelationshipsRequest
       * @return ListLineageRelationshipsResponse
       */
      Models::ListLineageRelationshipsResponse listLineageRelationships(const Models::ListLineageRelationshipsRequest &request);

      /**
       * @summary Queries the upstream and downstream entities for a specified entity in Data Map. You can optionally include detailed lineage relationship information.
       *
       * @description 1. To use this API, you must purchase DataWorks Standard Edition or a later edition.
       * 2. Use this API to query the upstream and downstream entities of a specific entity and their lineage relationships.
       *
       * @param request ListLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLineagesResponse
       */
      Models::ListLineagesResponse listLineagesWithOptions(const Models::ListLineagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the upstream and downstream entities for a specified entity in Data Map. You can optionally include detailed lineage relationship information.
       *
       * @description 1. To use this API, you must purchase DataWorks Standard Edition or a later edition.
       * 2. Use this API to query the upstream and downstream entities of a specific entity and their lineage relationships.
       *
       * @param request ListLineagesRequest
       * @return ListLineagesResponse
       */
      Models::ListLineagesResponse listLineages(const Models::ListLineagesRequest &request);

      /**
       * @summary Retrieves a paginated list of MCP servers.
       *
       * @description ## Request
       * This operation retrieves a paginated list of all MCP Servers within your account. You can filter the list by search keyword and visibility level, and control pagination by specifying the maximum number of results and a next page token.
       * - **Q**: Optional. The search keyword for a fuzzy search on MCP Server names.
       * - **Visibility**: Optional. The visibility level for filtering the results.
       * - **MaxResults**: Optional. The maximum number of results to return per page. By default, no limit is applied.
       * - **NextToken**: Optional. The next page token from a previous response. Use this parameter to retrieve the next page of results.
       *
       * @param tmpReq ListMcpServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpServersResponse
       */
      Models::ListMcpServersResponse listMcpServersWithOptions(const Models::ListMcpServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of MCP servers.
       *
       * @description ## Request
       * This operation retrieves a paginated list of all MCP Servers within your account. You can filter the list by search keyword and visibility level, and control pagination by specifying the maximum number of results and a next page token.
       * - **Q**: Optional. The search keyword for a fuzzy search on MCP Server names.
       * - **Visibility**: Optional. The visibility level for filtering the results.
       * - **MaxResults**: Optional. The maximum number of results to return per page. By default, no limit is applied.
       * - **NextToken**: Optional. The next page token from a previous response. Use this parameter to retrieve the next page of results.
       *
       * @param request ListMcpServersRequest
       * @return ListMcpServersResponse
       */
      Models::ListMcpServersResponse listMcpServers(const Models::ListMcpServersRequest &request);

      /**
       * @summary Queries a list of collections in Data Map. Collections include categories and data albums.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request ListMetaCollectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetaCollectionsResponse
       */
      Models::ListMetaCollectionsResponse listMetaCollectionsWithOptions(const Models::ListMetaCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of collections in Data Map. Collections include categories and data albums.
       *
       * @description 1. DataWorks Professional Edition or a higher edition is required.
       *
       * @param request ListMetaCollectionsRequest
       * @return ListMetaCollectionsResponse
       */
      Models::ListMetaCollectionsResponse listMetaCollections(const Models::ListMetaCollectionsRequest &request);

      /**
       * @summary Lists metadata entities. Support is currently limited to custom types.
       *
       * @param tmpReq ListMetaEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetaEntitiesResponse
       */
      Models::ListMetaEntitiesResponse listMetaEntitiesWithOptions(const Models::ListMetaEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists metadata entities. Support is currently limited to custom types.
       *
       * @param request ListMetaEntitiesRequest
       * @return ListMetaEntitiesResponse
       */
      Models::ListMetaEntitiesResponse listMetaEntities(const Models::ListMetaEntitiesRequest &request);

      /**
       * @summary Retrieves a list of custom entity definitions, including custom entity types and extended table types.
       *
       * @param request ListMetaEntityDefsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetaEntityDefsResponse
       */
      Models::ListMetaEntityDefsResponse listMetaEntityDefsWithOptions(const Models::ListMetaEntityDefsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of custom entity definitions, including custom entity types and extended table types.
       *
       * @param request ListMetaEntityDefsRequest
       * @return ListMetaEntityDefsResponse
       */
      Models::ListMetaEntityDefsResponse listMetaEntityDefs(const Models::ListMetaEntityDefsRequest &request);

      /**
       * @summary Queries all resource access permission application orders initiated by the current user.
       *
       * @description ## Request description
       * - This API supports paginated queries, controlled by the `NextToken` and `PageSize` parameters.
       * - `DefSchema` is a required parameter that specifies the resource type.
       * - The `ResourceType` list can contain multiple resource types for more precise filtering of application orders.
       * - You can set `StartTime` and `EndTime` to limit the time range of the query.
       * - `Statuses` allows you to filter application orders by specific statuses, such as pending approval and authorized.
       * - If you need to filter by specific resources or authorization targets, you can provide detailed information through the `Resource` and `Grantee` fields.
       *
       * @param tmpReq ListMyApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMyApplicationsResponse
       */
      Models::ListMyApplicationsResponse listMyApplicationsWithOptions(const Models::ListMyApplicationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all resource access permission application orders initiated by the current user.
       *
       * @description ## Request description
       * - This API supports paginated queries, controlled by the `NextToken` and `PageSize` parameters.
       * - `DefSchema` is a required parameter that specifies the resource type.
       * - The `ResourceType` list can contain multiple resource types for more precise filtering of application orders.
       * - You can set `StartTime` and `EndTime` to limit the time range of the query.
       * - `Statuses` allows you to filter application orders by specific statuses, such as pending approval and authorized.
       * - If you need to filter by specific resources or authorization targets, you can provide detailed information through the `Resource` and `Grantee` fields.
       *
       * @param request ListMyApplicationsRequest
       * @return ListMyApplicationsResponse
       */
      Models::ListMyApplicationsResponse listMyApplications(const Models::ListMyApplicationsRequest &request);

      /**
       * @summary Query all permission application orders where the current user is an approver or stakeholder.
       *
       * @description ## Request Description
       * - This API is used to retrieve all permission application orders where the current user is an approver, including pending and processed application orders.
       * - You can use the `Statuses` parameter to filter application orders by specific status.
       * - `NextToken` is used for paginated requests. It can be omitted or set to `null` for the first request. For subsequent requests, pass the `NextToken` value from the previous response.
       * - `PageSize` defaults to 10, with a maximum of 200.
       * - `DefSchema` and `ResourceType` are required fields. Other parameters can be filled in as needed.
       *
       * @param tmpReq ListMyRelatedApprovalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMyRelatedApprovalsResponse
       */
      Models::ListMyRelatedApprovalsResponse listMyRelatedApprovalsWithOptions(const Models::ListMyRelatedApprovalsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query all permission application orders where the current user is an approver or stakeholder.
       *
       * @description ## Request Description
       * - This API is used to retrieve all permission application orders where the current user is an approver, including pending and processed application orders.
       * - You can use the `Statuses` parameter to filter application orders by specific status.
       * - `NextToken` is used for paginated requests. It can be omitted or set to `null` for the first request. For subsequent requests, pass the `NextToken` value from the previous response.
       * - `PageSize` defaults to 10, with a maximum of 200.
       * - `DefSchema` and `ResourceType` are required fields. Other parameters can be filled in as needed.
       *
       * @param request ListMyRelatedApprovalsRequest
       * @return ListMyRelatedApprovalsResponse
       */
      Models::ListMyRelatedApprovalsResponse listMyRelatedApprovals(const Models::ListMyRelatedApprovalsRequest &request);

      /**
       * @summary Retrieves a list of network resources for a serverless resource group.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworksResponse
       */
      Models::ListNetworksResponse listNetworksWithOptions(const Models::ListNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of network resources for a serverless resource group.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListNetworksRequest
       * @return ListNetworksResponse
       */
      Models::ListNetworksResponse listNetworks(const Models::ListNetworksRequest &request);

      /**
       * @summary Gets a paginated list of dependent nodes for a specified data development node.
       *
       * @param request ListNodeDependenciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeDependenciesResponse
       */
      Models::ListNodeDependenciesResponse listNodeDependenciesWithOptions(const Models::ListNodeDependenciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a paginated list of dependent nodes for a specified data development node.
       *
       * @param request ListNodeDependenciesRequest
       * @return ListNodeDependenciesResponse
       */
      Models::ListNodeDependenciesResponse listNodeDependencies(const Models::ListNodeDependenciesRequest &request);

      /**
       * @summary Retrieves a paginated list of data development nodes that can be filtered by specified criteria.
       *
       * @param request ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of data development nodes that can be filtered by specified criteria.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary Lists parameter versions.
       *
       * @description This feature is available in DataWorks Professional Edition and higher editions.
       *
       * @param request ListParameterVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListParameterVersionsResponse
       */
      Models::ListParameterVersionsResponse listParameterVersionsWithOptions(const Models::ListParameterVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists parameter versions.
       *
       * @description This feature is available in DataWorks Professional Edition and higher editions.
       *
       * @param request ListParameterVersionsRequest
       * @return ListParameterVersionsResponse
       */
      Models::ListParameterVersionsResponse listParameterVersions(const Models::ListParameterVersionsRequest &request);

      /**
       * @summary Query parameters.
       *
       * @description This feature is available in DataWorks Professional Edition or higher.
       *
       * @param tmpReq ListParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListParametersResponse
       */
      Models::ListParametersResponse listParametersWithOptions(const Models::ListParametersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query parameters.
       *
       * @description This feature is available in DataWorks Professional Edition or higher.
       *
       * @param request ListParametersRequest
       * @return ListParametersResponse
       */
      Models::ListParametersResponse listParameters(const Models::ListParametersRequest &request);

      /**
       * @summary Queries a list of partitions in a table in Data Map. Only tables of the MaxCompute and E-MapReduce (EMR)-type Hive Metastore Service (HMS) metadata crawlers are supported.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       * 2. Only maxcompute and hms (EMR cluster) table types are supported.
       *
       * @param request ListPartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitionsWithOptions(const Models::ListPartitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of partitions in a table in Data Map. Only tables of the MaxCompute and E-MapReduce (EMR)-type Hive Metastore Service (HMS) metadata crawlers are supported.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       * 2. Only maxcompute and hms (EMR cluster) table types are supported.
       *
       * @param request ListPartitionsRequest
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitions(const Models::ListPartitionsRequest &request);

      /**
       * @summary Retrieves the list of pending permission request orders for which the current user is the approver.
       *
       * @description ## Request Description
       * This API is used to query all pending permission request orders for which the current logged-in user is the approver. It supports filtering by multiple conditions, including resource type, time range, and approval status, to more precisely locate specific request orders.
       * - **ResourceType**: Specifies the resource type (such as table), which can have multiple values.
       * - **Resource**: Provides specific resource search conditions, such as the project, database, or table name.
       * - **StartTime and EndTime**: Define the time range during which the request was submitted.
       * - **Statuses**: Allows filtering results by approval status, for example, to view only pending approval requests.
       * - **Grantee**: Filters request orders based on the authorization principal information.
       * - **AccessTypes**: Filters based on the specific permission types requested (such as read or update).
       * - **PageSize and NextToken**: Used for pagination control, specifying the amount of data returned per request and the cursor needed to retrieve the next page of data.
       * Notes:
       * - If no filtering conditions are provided, all matching records are returned by default.
       * - The `NextToken` parameter can be empty or omitted for the first call. Subsequent page requests must use the `NextToken` value provided in the previous response.
       * - The default value of `PageSize` is 10, and the maximum value is 200. If the specified value exceeds the maximum limit, the maximum value is used.
       * - When there is no more data to return, the `HasMore` field is set to `false`, and `NextToken` will be empty or absent.
       * ## Response Description
       * After a successful call to this API, the response body contains paginated results and detailed information for each request order, such as the application time, resource description, authorization principal, requested permissions, and more. Additionally, the approval process status and other related metadata are provided.
       * - **Data**: The paginated result set, including page size (`PageSize`), cursor (`NextToken`), and whether more data is available (`HasMore`).
       * - **ApplicationQueryResponse**: The specific content of each request order, including the reason for the request, submission time, status, and a detailed list of request content.
       *
       * @param tmpReq ListPendingApprovalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPendingApprovalsResponse
       */
      Models::ListPendingApprovalsResponse listPendingApprovalsWithOptions(const Models::ListPendingApprovalsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of pending permission request orders for which the current user is the approver.
       *
       * @description ## Request Description
       * This API is used to query all pending permission request orders for which the current logged-in user is the approver. It supports filtering by multiple conditions, including resource type, time range, and approval status, to more precisely locate specific request orders.
       * - **ResourceType**: Specifies the resource type (such as table), which can have multiple values.
       * - **Resource**: Provides specific resource search conditions, such as the project, database, or table name.
       * - **StartTime and EndTime**: Define the time range during which the request was submitted.
       * - **Statuses**: Allows filtering results by approval status, for example, to view only pending approval requests.
       * - **Grantee**: Filters request orders based on the authorization principal information.
       * - **AccessTypes**: Filters based on the specific permission types requested (such as read or update).
       * - **PageSize and NextToken**: Used for pagination control, specifying the amount of data returned per request and the cursor needed to retrieve the next page of data.
       * Notes:
       * - If no filtering conditions are provided, all matching records are returned by default.
       * - The `NextToken` parameter can be empty or omitted for the first call. Subsequent page requests must use the `NextToken` value provided in the previous response.
       * - The default value of `PageSize` is 10, and the maximum value is 200. If the specified value exceeds the maximum limit, the maximum value is used.
       * - When there is no more data to return, the `HasMore` field is set to `false`, and `NextToken` will be empty or absent.
       * ## Response Description
       * After a successful call to this API, the response body contains paginated results and detailed information for each request order, such as the application time, resource description, authorization principal, requested permissions, and more. Additionally, the approval process status and other related metadata are provided.
       * - **Data**: The paginated result set, including page size (`PageSize`), cursor (`NextToken`), and whether more data is available (`HasMore`).
       * - **ApplicationQueryResponse**: The specific content of each request order, including the reason for the request, submission time, status, and a detailed list of request content.
       *
       * @param request ListPendingApprovalsRequest
       * @return ListPendingApprovalsResponse
       */
      Models::ListPendingApprovalsResponse listPendingApprovals(const Models::ListPendingApprovalsRequest &request);

      /**
       * @summary Queries the information about deployment objects by deployment process ID.
       *
       * @param request ListPipelineRunItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineRunItemsResponse
       */
      Models::ListPipelineRunItemsResponse listPipelineRunItemsWithOptions(const Models::ListPipelineRunItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about deployment objects by deployment process ID.
       *
       * @param request ListPipelineRunItemsRequest
       * @return ListPipelineRunItemsResponse
       */
      Models::ListPipelineRunItemsResponse listPipelineRunItems(const Models::ListPipelineRunItemsRequest &request);

      /**
       * @summary Retrieve a paginated list of deployment processes. You can also filter this list based on specific criteria.
       *
       * @description >Notice: 
       * Earlier SDK versions may not include this interface. If so, use the ListDeployments interface. It accepts the same parameters.
       *
       * @param request ListPipelineRunsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineRunsResponse
       */
      Models::ListPipelineRunsResponse listPipelineRunsWithOptions(const Models::ListPipelineRunsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a paginated list of deployment processes. You can also filter this list based on specific criteria.
       *
       * @description >Notice: 
       * Earlier SDK versions may not include this interface. If so, use the ListDeployments interface. It accepts the same parameters.
       *
       * @param request ListPipelineRunsRequest
       * @return ListPipelineRunsResponse
       */
      Models::ListPipelineRunsResponse listPipelineRuns(const Models::ListPipelineRunsRequest &request);

      /**
       * @summary Queries process definitions of a specified type.
       *
       * @description ## Description
       * - Queries process definitions of a specified policy type.
       * - This operation supports paginated queries. You can use the`PageSize` and`PageNumber` parameters to control the page size and page number.
       * - You can also use the`NextToken` and`MaxResults` parameters to page through large result sets.
       * - The response includes the total count, page size, current page number, and a list of process definitions.
       * - Each process definition includes key attributes, such as its ID, enabled status, and priority.
       *
       * @param request ListProcessDefinitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProcessDefinitionsResponse
       */
      Models::ListProcessDefinitionsResponse listProcessDefinitionsWithOptions(const Models::ListProcessDefinitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries process definitions of a specified type.
       *
       * @description ## Description
       * - Queries process definitions of a specified policy type.
       * - This operation supports paginated queries. You can use the`PageSize` and`PageNumber` parameters to control the page size and page number.
       * - You can also use the`NextToken` and`MaxResults` parameters to page through large result sets.
       * - The response includes the total count, page size, current page number, and a list of process definitions.
       * - Each process definition includes key attributes, such as its ID, enabled status, and priority.
       *
       * @param request ListProcessDefinitionsRequest
       * @return ListProcessDefinitionsResponse
       */
      Models::ListProcessDefinitionsResponse listProcessDefinitions(const Models::ListProcessDefinitionsRequest &request);

      /**
       * @summary Gets a paginated list of workspace member details.
       *
       * @description This feature is available in DataWorks Basic Edition and higher.
       *
       * @param tmpReq ListProjectMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembersWithOptions(const Models::ListProjectMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a paginated list of workspace member details.
       *
       * @description This feature is available in DataWorks Basic Edition and higher.
       *
       * @param request ListProjectMembersRequest
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembers(const Models::ListProjectMembersRequest &request);

      /**
       * @summary Returns a paginated list of roles in a workspace.
       *
       * @description This feature is available in DataWorks Basic Edition and higher.
       *
       * @param tmpReq ListProjectRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectRolesResponse
       */
      Models::ListProjectRolesResponse listProjectRolesWithOptions(const Models::ListProjectRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a paginated list of roles in a workspace.
       *
       * @description This feature is available in DataWorks Basic Edition and higher.
       *
       * @param request ListProjectRolesRequest
       * @return ListProjectRolesResponse
       */
      Models::ListProjectRolesResponse listProjectRoles(const Models::ListProjectRolesRequest &request);

      /**
       * @summary Queries a list of DataWorks workspaces of the tenant to which your account belongs.
       *
       * @param tmpReq ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of DataWorks workspaces of the tenant to which your account belongs.
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary Query the list of workspaces with which a resource group is associated
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required to use this feature.
       * 2. **Make sure that the service-linked role AliyunServiceRoleForDataWorks has been created before you call this operation.**
       * 3. This operation returns only the workspaces that the current caller has access to. Unauthorized workspaces are not included in the response.
       *
       * @param request ListResourceGroupAssociateProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupAssociateProjectsResponse
       */
      Models::ListResourceGroupAssociateProjectsResponse listResourceGroupAssociateProjectsWithOptions(const Models::ListResourceGroupAssociateProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of workspaces with which a resource group is associated
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required to use this feature.
       * 2. **Make sure that the service-linked role AliyunServiceRoleForDataWorks has been created before you call this operation.**
       * 3. This operation returns only the workspaces that the current caller has access to. Unauthorized workspaces are not included in the response.
       *
       * @param request ListResourceGroupAssociateProjectsRequest
       * @return ListResourceGroupAssociateProjectsResponse
       */
      Models::ListResourceGroupAssociateProjectsResponse listResourceGroupAssociateProjects(const Models::ListResourceGroupAssociateProjectsRequest &request);

      /**
       * @summary Queries the metric data of a resource group.
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required to use this feature.
       * 2. **Make sure that the service-linked role AliyunServiceRoleForDataWorks has been created before you call this operation.**
       * 3. This operation applies only to serverless resource groups.
       *
       * @param request ListResourceGroupMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupMetricDataResponse
       */
      Models::ListResourceGroupMetricDataResponse listResourceGroupMetricDataWithOptions(const Models::ListResourceGroupMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metric data of a resource group.
       *
       * @description 1. DataWorks Basic Edition or a more advanced edition is required to use this feature.
       * 2. **Make sure that the service-linked role AliyunServiceRoleForDataWorks has been created before you call this operation.**
       * 3. This operation applies only to serverless resource groups.
       *
       * @param request ListResourceGroupMetricDataRequest
       * @return ListResourceGroupMetricDataResponse
       */
      Models::ListResourceGroupMetricDataResponse listResourceGroupMetricData(const Models::ListResourceGroupMetricDataRequest &request);

      /**
       * @summary Retrieves a list of resource groups.
       *
       * @description 1. This operation requires DataWorks Basic Edition or higher.
       * 2. **Before you call this operation, make sure that you have created the service-linked role AliyunServiceRoleForDataWorks.**
       *
       * @param tmpReq ListResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of resource groups.
       *
       * @description 1. This operation requires DataWorks Basic Edition or higher.
       * 2. **Before you call this operation, make sure that you have created the service-linked role AliyunServiceRoleForDataWorks.**
       *
       * @param request ListResourceGroupsRequest
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroups(const Models::ListResourceGroupsRequest &request);

      /**
       * @summary Queries a list of file resources in DataStudio. You can also specify filter conditions to query specific file resources.
       *
       * @param request ListResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResourcesWithOptions(const Models::ListResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of file resources in DataStudio. You can also specify filter conditions to query specific file resources.
       *
       * @param request ListResourcesRequest
       * @return ListResourcesResponse
       */
      Models::ListResourcesResponse listResources(const Models::ListResourcesRequest &request);

      /**
       * @summary Retrieves a list of routes for a network resource.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutesResponse
       */
      Models::ListRoutesResponse listRoutesWithOptions(const Models::ListRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of routes for a network resource.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListRoutesRequest
       * @return ListRoutesResponse
       */
      Models::ListRoutesResponse listRoutes(const Models::ListRoutesRequest &request);

      /**
       * @summary Queries the list of schemas under a specified database or MaxCompute project in Data Map. Currently supports MaxCompute and Holo types.
       *
       * @description 1. You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param tmpReq ListSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemasWithOptions(const Models::ListSchemasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of schemas under a specified database or MaxCompute project in Data Map. Currently supports MaxCompute and Holo types.
       *
       * @description 1. You must purchase DataWorks Basic Edition or higher to use this feature.
       *
       * @param request ListSchemasRequest
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemas(const Models::ListSchemasRequest &request);

      /**
       * @summary Retrieves a paginated list of security policies based on specified conditions. This operation requires DataWorks tenant administrator or security administrator permissions.
       *
       * @description ## Request
       * - This API retrieves a paginated list of configured security policies.
       * - The `ControlModule` and `ControlSubModule` parameters filter policies by a specific module or submodule.
       * - The `PageNum` and `PageSize` parameters control pagination. `PageNum` specifies the page number to retrieve (default: 1), and `PageSize` specifies the number of policies to return per page (default: 20).
       * - Use the `MaxResults` and `NextToken` private parameters for advanced pagination.
       *
       * @param request ListSecurityStrategiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityStrategiesResponse
       */
      Models::ListSecurityStrategiesResponse listSecurityStrategiesWithOptions(const Models::ListSecurityStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of security policies based on specified conditions. This operation requires DataWorks tenant administrator or security administrator permissions.
       *
       * @description ## Request
       * - This API retrieves a paginated list of configured security policies.
       * - The `ControlModule` and `ControlSubModule` parameters filter policies by a specific module or submodule.
       * - The `PageNum` and `PageSize` parameters control pagination. `PageNum` specifies the page number to retrieve (default: 1), and `PageSize` specifies the number of policies to return per page (default: 20).
       * - Use the `MaxResults` and `NextToken` private parameters for advanced pagination.
       *
       * @param request ListSecurityStrategiesRequest
       * @return ListSecurityStrategiesResponse
       */
      Models::ListSecurityStrategiesResponse listSecurityStrategies(const Models::ListSecurityStrategiesRequest &request);

      /**
       * @summary Lists the Skills in your account.
       *
       * @description ## Request
       * This operation lists the Skills in your account. You can filter the results by criteria such as a search keyword and visibility level.
       * - **Q**: An optional search keyword for a fuzzy match on Skill names.
       * - **Visibility**: An optional parameter to filter Skills by their visibility level. You can specify multiple values.
       * - **MaxResults**: An optional parameter that specifies the maximum number of results to return per page.
       * - **NextToken**: An optional pagination token for retrieving the next page of results. Omit this parameter for the first request. For subsequent requests, pass the `NextToken` value from the previous response to fetch the next page.
       *
       * @param tmpReq ListSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const Models::ListSkillsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the Skills in your account.
       *
       * @description ## Request
       * This operation lists the Skills in your account. You can filter the results by criteria such as a search keyword and visibility level.
       * - **Q**: An optional search keyword for a fuzzy match on Skill names.
       * - **Visibility**: An optional parameter to filter Skills by their visibility level. You can specify multiple values.
       * - **MaxResults**: An optional parameter that specifies the maximum number of results to return per page.
       * - **NextToken**: An optional pagination token for retrieving the next page of results. Omit this parameter for the first request. For subsequent requests, pass the `NextToken` value from the previous response to fetch the next page.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const Models::ListSkillsRequest &request);

      /**
       * @summary Queries the list of data tables in DataWorks Data Map. For types that do not support the schema level, you can query data tables under a specified database. For types that support the schema level, you can query data tables under a specified database, MaxCompute project, or schema. The response contains only basic table information and does not include technical metadata or business metadata.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param tmpReq ListTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data tables in DataWorks Data Map. For types that do not support the schema level, you can query data tables under a specified database. For types that support the schema level, you can query data tables under a specified database, MaxCompute project, or schema. The response contains only basic table information and does not include technical metadata or business metadata.
       *
       * @description 1. DataWorks Basic Edition or a higher edition is required.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary Retrieves a paginated list of operation logs for a task instance.
       *
       * @description This API operation is available for all DataWorks editions.
       * Only operation logs generated within the previous 31 days can be queried.
       *
       * @param request ListTaskInstanceOperationLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskInstanceOperationLogsResponse
       */
      Models::ListTaskInstanceOperationLogsResponse listTaskInstanceOperationLogsWithOptions(const Models::ListTaskInstanceOperationLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of operation logs for a task instance.
       *
       * @description This API operation is available for all DataWorks editions.
       * Only operation logs generated within the previous 31 days can be queried.
       *
       * @param request ListTaskInstanceOperationLogsRequest
       * @return ListTaskInstanceOperationLogsResponse
       */
      Models::ListTaskInstanceOperationLogsResponse listTaskInstanceOperationLogs(const Models::ListTaskInstanceOperationLogsRequest &request);

      /**
       * @summary Queries a list of instances. You can also specify filter conditions to query specific instances.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param tmpReq ListTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskInstancesResponse
       */
      Models::ListTaskInstancesResponse listTaskInstancesWithOptions(const Models::ListTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances. You can also specify filter conditions to query specific instances.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request ListTaskInstancesRequest
       * @return ListTaskInstancesResponse
       */
      Models::ListTaskInstancesResponse listTaskInstances(const Models::ListTaskInstancesRequest &request);

      /**
       * @summary Retrieves a paginated list of operation logs for a task.
       *
       * @description This API operation is available for all DataWorks editions.
       * Only operation logs generated within the previous 31 days can be queried.
       *
       * @param request ListTaskOperationLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskOperationLogsResponse
       */
      Models::ListTaskOperationLogsResponse listTaskOperationLogsWithOptions(const Models::ListTaskOperationLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of operation logs for a task.
       *
       * @description This API operation is available for all DataWorks editions.
       * Only operation logs generated within the previous 31 days can be queried.
       *
       * @param request ListTaskOperationLogsRequest
       * @return ListTaskOperationLogsResponse
       */
      Models::ListTaskOperationLogsResponse listTaskOperationLogs(const Models::ListTaskOperationLogsRequest &request);

      /**
       * @summary Queries a list of tasks by page. You can also specify filter conditions to query tasks.
       *
       * @description DataWorks Basic Edition or higher is required.
       *
       * @param tmpReq ListTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const Models::ListTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tasks by page. You can also specify filter conditions to query tasks.
       *
       * @description DataWorks Basic Edition or higher is required.
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const Models::ListTasksRequest &request);

      /**
       * @summary Queries a list of ancestor instances of an instance by page.
       *
       * @param request ListUpstreamTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUpstreamTaskInstancesResponse
       */
      Models::ListUpstreamTaskInstancesResponse listUpstreamTaskInstancesWithOptions(const Models::ListUpstreamTaskInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ancestor instances of an instance by page.
       *
       * @param request ListUpstreamTaskInstancesRequest
       * @return ListUpstreamTaskInstancesResponse
       */
      Models::ListUpstreamTaskInstancesResponse listUpstreamTaskInstances(const Models::ListUpstreamTaskInstancesRequest &request);

      /**
       * @summary Queries a list of ancestor tasks of a task by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListUpstreamTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUpstreamTasksResponse
       */
      Models::ListUpstreamTasksResponse listUpstreamTasksWithOptions(const Models::ListUpstreamTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ancestor tasks of a task by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListUpstreamTasksRequest
       * @return ListUpstreamTasksResponse
       */
      Models::ListUpstreamTasksResponse listUpstreamTasks(const Models::ListUpstreamTasksRequest &request);

      /**
       * @summary Queries a list of workflows in DataStudio. You can also specify filter conditions to query specific workflows.
       *
       * @param request ListWorkflowDefinitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowDefinitionsResponse
       */
      Models::ListWorkflowDefinitionsResponse listWorkflowDefinitionsWithOptions(const Models::ListWorkflowDefinitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workflows in DataStudio. You can also specify filter conditions to query specific workflows.
       *
       * @param request ListWorkflowDefinitionsRequest
       * @return ListWorkflowDefinitionsResponse
       */
      Models::ListWorkflowDefinitionsResponse listWorkflowDefinitions(const Models::ListWorkflowDefinitionsRequest &request);

      /**
       * @summary Returns a paginated list of workflow instances that can be filtered by specific criteria.
       *
       * @description Available with DataWorks Basic Edition or higher.
       *
       * @param tmpReq ListWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowInstancesResponse
       */
      Models::ListWorkflowInstancesResponse listWorkflowInstancesWithOptions(const Models::ListWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a paginated list of workflow instances that can be filtered by specific criteria.
       *
       * @description Available with DataWorks Basic Edition or higher.
       *
       * @param request ListWorkflowInstancesRequest
       * @return ListWorkflowInstancesResponse
       */
      Models::ListWorkflowInstancesResponse listWorkflowInstances(const Models::ListWorkflowInstancesRequest &request);

      /**
       * @summary Queries a list of workflows by page. You can also specify filter conditions to query workflows.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param tmpReq ListWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflowsWithOptions(const Models::ListWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workflows by page. You can also specify filter conditions to query workflows.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request ListWorkflowsRequest
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflows(const Models::ListWorkflowsRequest &request);

      /**
       * @summary Loads the message history of an existing session and returns it as an SSE stream. If the session does not exist, the server sends a JSONRPCResponse.error with a code of 400 through the SSE stream. The Content-Type is text/event-stream. Use this operation to restore session context.
       *
       * @description ## Request
       * - This operation retrieves session details and streams the Agent response using Server-Sent Events (SSE).
       * - If the target session does not exist, the operation returns an error frame with an error code of 400.
       * - The response includes information about the Agent\\"s request processing, such as message chunks, thought processes, and tool call status updates.
       * - The `stopReason` field indicates why the Agent stops the current turn. Possible values include reaching the maximum turn limit or being canceled.
       * - The returned content conforms to the Agent Client Protocol (ACP). For more information, see https\\://agentclientprotocol.com.
       *
       * @param tmpReq LoadAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadAgentSessionResponse
       */
      FutureGenerator<Models::LoadAgentSessionResponse> loadAgentSessionWithSSE(const Models::LoadAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Loads the message history of an existing session and returns it as an SSE stream. If the session does not exist, the server sends a JSONRPCResponse.error with a code of 400 through the SSE stream. The Content-Type is text/event-stream. Use this operation to restore session context.
       *
       * @description ## Request
       * - This operation retrieves session details and streams the Agent response using Server-Sent Events (SSE).
       * - If the target session does not exist, the operation returns an error frame with an error code of 400.
       * - The response includes information about the Agent\\"s request processing, such as message chunks, thought processes, and tool call status updates.
       * - The `stopReason` field indicates why the Agent stops the current turn. Possible values include reaching the maximum turn limit or being canceled.
       * - The returned content conforms to the Agent Client Protocol (ACP). For more information, see https\\://agentclientprotocol.com.
       *
       * @param tmpReq LoadAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadAgentSessionResponse
       */
      Models::LoadAgentSessionResponse loadAgentSessionWithOptions(const Models::LoadAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Loads the message history of an existing session and returns it as an SSE stream. If the session does not exist, the server sends a JSONRPCResponse.error with a code of 400 through the SSE stream. The Content-Type is text/event-stream. Use this operation to restore session context.
       *
       * @description ## Request
       * - This operation retrieves session details and streams the Agent response using Server-Sent Events (SSE).
       * - If the target session does not exist, the operation returns an error frame with an error code of 400.
       * - The response includes information about the Agent\\"s request processing, such as message chunks, thought processes, and tool call status updates.
       * - The `stopReason` field indicates why the Agent stops the current turn. Possible values include reaching the maximum turn limit or being canceled.
       * - The returned content conforms to the Agent Client Protocol (ACP). For more information, see https\\://agentclientprotocol.com.
       *
       * @param request LoadAgentSessionRequest
       * @return LoadAgentSessionResponse
       */
      Models::LoadAgentSessionResponse loadAgentSession(const Models::LoadAgentSessionRequest &request);

      /**
       * @summary Moves a user-defined function (UDF) to a path in DataStudio.
       *
       * @param request MoveFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveFunctionResponse
       */
      Models::MoveFunctionResponse moveFunctionWithOptions(const Models::MoveFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a user-defined function (UDF) to a path in DataStudio.
       *
       * @param request MoveFunctionRequest
       * @return MoveFunctionResponse
       */
      Models::MoveFunctionResponse moveFunction(const Models::MoveFunctionRequest &request);

      /**
       * @summary Moves a node to a path in DataStudio.
       *
       * @param request MoveNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveNodeResponse
       */
      Models::MoveNodeResponse moveNodeWithOptions(const Models::MoveNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a node to a path in DataStudio.
       *
       * @param request MoveNodeRequest
       * @return MoveNodeResponse
       */
      Models::MoveNodeResponse moveNode(const Models::MoveNodeRequest &request);

      /**
       * @summary Moves a file resource to a path in DataStudio.
       *
       * @param request MoveResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceResponse
       */
      Models::MoveResourceResponse moveResourceWithOptions(const Models::MoveResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a file resource to a path in DataStudio.
       *
       * @param request MoveResourceRequest
       * @return MoveResourceResponse
       */
      Models::MoveResourceResponse moveResource(const Models::MoveResourceRequest &request);

      /**
       * @summary Moves a workflow to a path in DataStudio.
       *
       * @param request MoveWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveWorkflowDefinitionResponse
       */
      Models::MoveWorkflowDefinitionResponse moveWorkflowDefinitionWithOptions(const Models::MoveWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a workflow to a path in DataStudio.
       *
       * @param request MoveWorkflowDefinitionRequest
       * @return MoveWorkflowDefinitionResponse
       */
      Models::MoveWorkflowDefinitionResponse moveWorkflowDefinition(const Models::MoveWorkflowDefinitionRequest &request);

      /**
       * @summary Previews the content of a specified dataset version. Currently only text file preview is supported for OSS-type datasets. Supported MIME types 1. application/json 2. application/xml 3. text/html 4. text/plain 5. application/octet-stream
       *
       * @param request PreviewDatasetVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewDatasetVersionResponse
       */
      Models::PreviewDatasetVersionResponse previewDatasetVersionWithOptions(const Models::PreviewDatasetVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Previews the content of a specified dataset version. Currently only text file preview is supported for OSS-type datasets. Supported MIME types 1. application/json 2. application/xml 3. text/html 4. text/plain 5. application/octet-stream
       *
       * @param request PreviewDatasetVersionRequest
       * @return PreviewDatasetVersionResponse
       */
      Models::PreviewDatasetVersionResponse previewDatasetVersion(const Models::PreviewDatasetVersionRequest &request);

      /**
       * @summary Sends a prompt to an existing session and streams the agent response.
       *
       * @description ## Request
       * - This API sends a user prompt to a specified session ID and streams the agent\\"s response over SSE (Server-Sent Events).
       * - The response may include message chunks, thought process, and tool calling status updates.
       * - If the specified session does not exist, the API returns a 400 error in an SSE error frame.
       * - The `stopReason` field indicates why the agent ended the turn.
       * - You can use multiple types of content blocks in the prompt, such as text and OSS file download links.
       * - You can provide additional metadata in the `Meta` parameter to pass more context to the server.
       * - The response content conforms to the open-source Agent Client Protocol (ACP) specification. For more information, see https\\://agentclientprotocol.com
       * - \\*\\*Review the billing methods and pricing for Data Agent before you use this API\\*\\*: https\\://help.aliyun.com/zh/dataworks/dataworks-data-agent-agent-billing
       *
       * @param tmpReq PromptAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PromptAgentSessionResponse
       */
      FutureGenerator<Models::PromptAgentSessionResponse> promptAgentSessionWithSSE(const Models::PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a prompt to an existing session and streams the agent response.
       *
       * @description ## Request
       * - This API sends a user prompt to a specified session ID and streams the agent\\"s response over SSE (Server-Sent Events).
       * - The response may include message chunks, thought process, and tool calling status updates.
       * - If the specified session does not exist, the API returns a 400 error in an SSE error frame.
       * - The `stopReason` field indicates why the agent ended the turn.
       * - You can use multiple types of content blocks in the prompt, such as text and OSS file download links.
       * - You can provide additional metadata in the `Meta` parameter to pass more context to the server.
       * - The response content conforms to the open-source Agent Client Protocol (ACP) specification. For more information, see https\\://agentclientprotocol.com
       * - \\*\\*Review the billing methods and pricing for Data Agent before you use this API\\*\\*: https\\://help.aliyun.com/zh/dataworks/dataworks-data-agent-agent-billing
       *
       * @param tmpReq PromptAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PromptAgentSessionResponse
       */
      Models::PromptAgentSessionResponse promptAgentSessionWithOptions(const Models::PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a prompt to an existing session and streams the agent response.
       *
       * @description ## Request
       * - This API sends a user prompt to a specified session ID and streams the agent\\"s response over SSE (Server-Sent Events).
       * - The response may include message chunks, thought process, and tool calling status updates.
       * - If the specified session does not exist, the API returns a 400 error in an SSE error frame.
       * - The `stopReason` field indicates why the agent ended the turn.
       * - You can use multiple types of content blocks in the prompt, such as text and OSS file download links.
       * - You can provide additional metadata in the `Meta` parameter to pass more context to the server.
       * - The response content conforms to the open-source Agent Client Protocol (ACP) specification. For more information, see https\\://agentclientprotocol.com
       * - \\*\\*Review the billing methods and pricing for Data Agent before you use this API\\*\\*: https\\://help.aliyun.com/zh/dataworks/dataworks-data-agent-agent-billing
       *
       * @param request PromptAgentSessionRequest
       * @return PromptAgentSessionResponse
       */
      Models::PromptAgentSessionResponse promptAgentSession(const Models::PromptAgentSessionRequest &request);

      /**
       * @summary Remove an entity object from a Data Map collection. The collection supports Data Map categories and data albums, and the entity currently supports only the Data Table type.
       * When removing an entity from a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or administrator of the album.
       *
       * @description 1. You must purchase DataWorks Professional Edition or a higher version to use this feature.
       *
       * @param request RemoveEntityFromMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveEntityFromMetaCollectionResponse
       */
      Models::RemoveEntityFromMetaCollectionResponse removeEntityFromMetaCollectionWithOptions(const Models::RemoveEntityFromMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove an entity object from a Data Map collection. The collection supports Data Map categories and data albums, and the entity currently supports only the Data Table type.
       * When removing an entity from a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or administrator of the album.
       *
       * @description 1. You must purchase DataWorks Professional Edition or a higher version to use this feature.
       *
       * @param request RemoveEntityFromMetaCollectionRequest
       * @return RemoveEntityFromMetaCollectionResponse
       */
      Models::RemoveEntityFromMetaCollectionResponse removeEntityFromMetaCollection(const Models::RemoveEntityFromMetaCollectionRequest &request);

      /**
       * @summary Removes multiple upstream dependencies of an instance at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq RemoveTaskInstanceDependenciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTaskInstanceDependenciesResponse
       */
      Models::RemoveTaskInstanceDependenciesResponse removeTaskInstanceDependenciesWithOptions(const Models::RemoveTaskInstanceDependenciesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes multiple upstream dependencies of an instance at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request RemoveTaskInstanceDependenciesRequest
       * @return RemoveTaskInstanceDependenciesResponse
       */
      Models::RemoveTaskInstanceDependenciesResponse removeTaskInstanceDependencies(const Models::RemoveTaskInstanceDependenciesRequest &request);

      /**
       * @summary Renames a user-defined function (UDF) in DataStudio.
       *
       * @param request RenameFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameFunctionResponse
       */
      Models::RenameFunctionResponse renameFunctionWithOptions(const Models::RenameFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a user-defined function (UDF) in DataStudio.
       *
       * @param request RenameFunctionRequest
       * @return RenameFunctionResponse
       */
      Models::RenameFunctionResponse renameFunction(const Models::RenameFunctionRequest &request);

      /**
       * @summary Renames a node in DataStudio.
       *
       * @param request RenameNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameNodeResponse
       */
      Models::RenameNodeResponse renameNodeWithOptions(const Models::RenameNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a node in DataStudio.
       *
       * @param request RenameNodeRequest
       * @return RenameNodeResponse
       */
      Models::RenameNodeResponse renameNode(const Models::RenameNodeRequest &request);

      /**
       * @summary Renames a file resource in DataStudio.
       *
       * @param request RenameResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameResourceResponse
       */
      Models::RenameResourceResponse renameResourceWithOptions(const Models::RenameResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a file resource in DataStudio.
       *
       * @param request RenameResourceRequest
       * @return RenameResourceResponse
       */
      Models::RenameResourceResponse renameResource(const Models::RenameResourceRequest &request);

      /**
       * @summary Renames a workflow in DataStudio.
       *
       * @param request RenameWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameWorkflowDefinitionResponse
       */
      Models::RenameWorkflowDefinitionResponse renameWorkflowDefinitionWithOptions(const Models::RenameWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a workflow in DataStudio.
       *
       * @param request RenameWorkflowDefinitionRequest
       * @return RenameWorkflowDefinitionResponse
       */
      Models::RenameWorkflowDefinitionResponse renameWorkflowDefinition(const Models::RenameWorkflowDefinitionRequest &request);

      /**
       * @summary Reruns multiple node instances in a batch.
       *
       * @description You must purchase DataWorks Basic Edition or a more advanced edition to use this operation.
       *
       * @param tmpReq RerunTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RerunTaskInstancesResponse
       */
      Models::RerunTaskInstancesResponse rerunTaskInstancesWithOptions(const Models::RerunTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns multiple node instances in a batch.
       *
       * @description You must purchase DataWorks Basic Edition or a more advanced edition to use this operation.
       *
       * @param request RerunTaskInstancesRequest
       * @return RerunTaskInstancesResponse
       */
      Models::RerunTaskInstancesResponse rerunTaskInstances(const Models::RerunTaskInstancesRequest &request);

      /**
       * @summary Rerun a workflow instance
       *
       * @param tmpReq RerunWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RerunWorkflowInstancesResponse
       */
      Models::RerunWorkflowInstancesResponse rerunWorkflowInstancesWithOptions(const Models::RerunWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rerun a workflow instance
       *
       * @param request RerunWorkflowInstancesRequest
       * @return RerunWorkflowInstancesResponse
       */
      Models::RerunWorkflowInstancesResponse rerunWorkflowInstances(const Models::RerunWorkflowInstancesRequest &request);

      /**
       * @summary Resumes multiple suspended instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq ResumeTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeTaskInstancesResponse
       */
      Models::ResumeTaskInstancesResponse resumeTaskInstancesWithOptions(const Models::ResumeTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes multiple suspended instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ResumeTaskInstancesRequest
       * @return ResumeTaskInstancesResponse
       */
      Models::ResumeTaskInstancesResponse resumeTaskInstances(const Models::ResumeTaskInstancesRequest &request);

      /**
       * @summary Revokes roles that are assigned to a member in a workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq RevokeMemberProjectRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeMemberProjectRolesResponse
       */
      Models::RevokeMemberProjectRolesResponse revokeMemberProjectRolesWithOptions(const Models::RevokeMemberProjectRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes roles that are assigned to a member in a workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request RevokeMemberProjectRolesRequest
       * @return RevokeMemberProjectRolesResponse
       */
      Models::RevokeMemberProjectRolesResponse revokeMemberProjectRoles(const Models::RevokeMemberProjectRolesRequest &request);

      /**
       * @summary Rolls back a specified parameter.
       *
       * @description This operation is available only in DataWorks Professional Edition or a later version.
       *
       * @param request RollbackParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackParameterResponse
       */
      Models::RollbackParameterResponse rollbackParameterWithOptions(const Models::RollbackParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a specified parameter.
       *
       * @description This operation is available only in DataWorks Professional Edition or a later version.
       *
       * @param request RollbackParameterRequest
       * @return RollbackParameterResponse
       */
      Models::RollbackParameterResponse rollbackParameter(const Models::RollbackParameterRequest &request);

      /**
       * @summary Sets the statuses of multiple instances to successful at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq SetSuccessTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSuccessTaskInstancesResponse
       */
      Models::SetSuccessTaskInstancesResponse setSuccessTaskInstancesWithOptions(const Models::SetSuccessTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the statuses of multiple instances to successful at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request SetSuccessTaskInstancesRequest
       * @return SetSuccessTaskInstancesResponse
       */
      Models::SetSuccessTaskInstancesResponse setSuccessTaskInstances(const Models::SetSuccessTaskInstancesRequest &request);

      /**
       * @summary Starts a new-version synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq StartDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDIJobResponse
       */
      Models::StartDIJobResponse startDIJobWithOptions(const Models::StartDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a new-version synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request StartDIJobRequest
       * @return StartDIJobResponse
       */
      Models::StartDIJobResponse startDIJob(const Models::StartDIJobRequest &request);

      /**
       * @summary Start multiple workflow instances in batch.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param tmpReq StartWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartWorkflowInstancesResponse
       */
      Models::StartWorkflowInstancesResponse startWorkflowInstancesWithOptions(const Models::StartWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start multiple workflow instances in batch.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request StartWorkflowInstancesRequest
       * @return StartWorkflowInstancesResponse
       */
      Models::StartWorkflowInstancesResponse startWorkflowInstances(const Models::StartWorkflowInstancesRequest &request);

      /**
       * @summary Stops a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request StopDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDIJobResponse
       */
      Models::StopDIJobResponse stopDIJobWithOptions(const Models::StopDIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request StopDIJobRequest
       * @return StopDIJobResponse
       */
      Models::StopDIJobResponse stopDIJob(const Models::StopDIJobRequest &request);

      /**
       * @summary Withdraws or terminates a specified process instance.
       *
       * @description ## Description
       * - Requesters can use this operation to withdraw an approval process they initiated.
       * - Only the initiator of the approval process can call this operation.
       * - After a successful call, the operation terminates the approval process and updates its status to withdrawn.
       *
       * @param request StopProcessInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopProcessInstanceResponse
       */
      Models::StopProcessInstanceResponse stopProcessInstanceWithOptions(const Models::StopProcessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Withdraws or terminates a specified process instance.
       *
       * @description ## Description
       * - Requesters can use this operation to withdraw an approval process they initiated.
       * - Only the initiator of the approval process can call this operation.
       * - After a successful call, the operation terminates the approval process and updates its status to withdrawn.
       *
       * @param request StopProcessInstanceRequest
       * @return StopProcessInstanceResponse
       */
      Models::StopProcessInstanceResponse stopProcessInstance(const Models::StopProcessInstanceRequest &request);

      /**
       * @summary Stops multiple instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq StopTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTaskInstancesResponse
       */
      Models::StopTaskInstancesResponse stopTaskInstancesWithOptions(const Models::StopTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops multiple instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request StopTaskInstancesRequest
       * @return StopTaskInstancesResponse
       */
      Models::StopTaskInstancesResponse stopTaskInstances(const Models::StopTaskInstancesRequest &request);

      /**
       * @summary Stops multiple workflow instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq StopWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopWorkflowInstancesResponse
       */
      Models::StopWorkflowInstancesResponse stopWorkflowInstancesWithOptions(const Models::StopWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops multiple workflow instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request StopWorkflowInstancesRequest
       * @return StopWorkflowInstancesResponse
       */
      Models::StopWorkflowInstancesResponse stopWorkflowInstances(const Models::StopWorkflowInstancesRequest &request);

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
       * @summary Suspends multiple instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq SuspendTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendTaskInstancesResponse
       */
      Models::SuspendTaskInstancesResponse suspendTaskInstancesWithOptions(const Models::SuspendTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends multiple instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request SuspendTaskInstancesRequest
       * @return SuspendTaskInstancesResponse
       */
      Models::SuspendTaskInstancesResponse suspendTaskInstances(const Models::SuspendTaskInstancesRequest &request);

      /**
       * @summary Adds tags to data assets.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param tmpReq TagDataAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagDataAssetsResponse
       */
      Models::TagDataAssetsResponse tagDataAssetsWithOptions(const Models::TagDataAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to data assets.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param request TagDataAssetsRequest
       * @return TagDataAssetsResponse
       */
      Models::TagDataAssetsResponse tagDataAssets(const Models::TagDataAssetsRequest &request);

      /**
       * @summary Test the connectivity of a data source on a resource group.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       * 2. You must have at least one of the following roles in the DataWorks project space:
       *    Tenant Owner, Space Administrator, Deployment, Developer, Project Owner, or O\\&M.
       *
       * @param request TestDataSourceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestDataSourceConnectivityResponse
       */
      Models::TestDataSourceConnectivityResponse testDataSourceConnectivityWithOptions(const Models::TestDataSourceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Test the connectivity of a data source on a resource group.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       * 2. You must have at least one of the following roles in the DataWorks project space:
       *    Tenant Owner, Space Administrator, Deployment, Developer, Project Owner, or O\\&M.
       *
       * @param request TestDataSourceConnectivityRequest
       * @return TestDataSourceConnectivityResponse
       */
      Models::TestDataSourceConnectivityResponse testDataSourceConnectivity(const Models::TestDataSourceConnectivityRequest &request);

      /**
       * @summary Triggers a task to run by using an HTTP Trigger node at a specified time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request TriggerSchedulerTaskInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerSchedulerTaskInstanceResponse
       */
      Models::TriggerSchedulerTaskInstanceResponse triggerSchedulerTaskInstanceWithOptions(const Models::TriggerSchedulerTaskInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a task to run by using an HTTP Trigger node at a specified time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request TriggerSchedulerTaskInstanceRequest
       * @return TriggerSchedulerTaskInstanceResponse
       */
      Models::TriggerSchedulerTaskInstanceResponse triggerSchedulerTaskInstance(const Models::TriggerSchedulerTaskInstanceRequest &request);

      /**
       * @summary Removes tags from data assets.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param tmpReq UnTagDataAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagDataAssetsResponse
       */
      Models::UnTagDataAssetsResponse unTagDataAssetsWithOptions(const Models::UnTagDataAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from data assets.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param request UnTagDataAssetsRequest
       * @return UnTagDataAssetsResponse
       */
      Models::UnTagDataAssetsResponse unTagDataAssets(const Models::UnTagDataAssetsRequest &request);

      /**
       * @summary Updates the information about a custom alert monitoring rule.
       *
       * @param tmpReq UpdateAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAlertRuleResponse
       */
      Models::UpdateAlertRuleResponse updateAlertRuleWithOptions(const Models::UpdateAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a custom alert monitoring rule.
       *
       * @param request UpdateAlertRuleRequest
       * @return UpdateAlertRuleResponse
       */
      Models::UpdateAlertRuleResponse updateAlertRule(const Models::UpdateAlertRuleRequest &request);

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
       * @summary Updates the business metadata for a column in a data map. This operation can only update the business description and custom attributes.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a later version.
       * 2. This operation supports only MaxCompute, hms, and dlf tables.
       *
       * @param tmpReq UpdateColumnBusinessMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateColumnBusinessMetadataResponse
       */
      Models::UpdateColumnBusinessMetadataResponse updateColumnBusinessMetadataWithOptions(const Models::UpdateColumnBusinessMetadataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the business metadata for a column in a data map. This operation can only update the business description and custom attributes.
       *
       * @description 1. This operation requires DataWorks Basic Edition or a later version.
       * 2. This operation supports only MaxCompute, hms, and dlf tables.
       *
       * @param request UpdateColumnBusinessMetadataRequest
       * @return UpdateColumnBusinessMetadataResponse
       */
      Models::UpdateColumnBusinessMetadataResponse updateColumnBusinessMetadata(const Models::UpdateColumnBusinessMetadataRequest &request);

      /**
       * @summary Updates components.
       *
       * @description This API is currently in trial. To use this API, submit an application. After the administrator adds you to the trial list, you can call this API.
       *
       * @param request UpdateComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComponentResponse
       */
      Models::UpdateComponentResponse updateComponentWithOptions(const Models::UpdateComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates components.
       *
       * @description This API is currently in trial. To use this API, submit an application. After the administrator adds you to the trial list, you can call this API.
       *
       * @param request UpdateComponentRequest
       * @return UpdateComponentResponse
       */
      Models::UpdateComponentResponse updateComponent(const Models::UpdateComponentRequest &request);

      /**
       * @summary Modifies the specified computing resource based on the computing resource ID.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       * 2. You must have at least one of the following roles in the DataWorks project space:
       * 3. Tenant Owner, tenant administrator, Space Administrator, Project Owner, or O\\&M
       *
       * @param request UpdateComputeResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeResourceResponse
       */
      Models::UpdateComputeResourceResponse updateComputeResourceWithOptions(const Models::UpdateComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specified computing resource based on the computing resource ID.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       * 2. You must have at least one of the following roles in the DataWorks project space:
       * 3. Tenant Owner, tenant administrator, Space Administrator, Project Owner, or O\\&M
       *
       * @param request UpdateComputeResourceRequest
       * @return UpdateComputeResourceResponse
       */
      Models::UpdateComputeResourceResponse updateComputeResource(const Models::UpdateComputeResourceRequest &request);

      /**
       * @summary Updates a custom attribute.
       *
       * @param tmpReq UpdateCustomAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAttributeResponse
       */
      Models::UpdateCustomAttributeResponse updateCustomAttributeWithOptions(const Models::UpdateCustomAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom attribute.
       *
       * @param request UpdateCustomAttributeRequest
       * @return UpdateCustomAttributeResponse
       */
      Models::UpdateCustomAttributeResponse updateCustomAttribute(const Models::UpdateCustomAttributeRequest &request);

      /**
       * @summary Updates an alert rule configured for a synchronization task.
       *
       * @param tmpReq UpdateDIAlarmRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDIAlarmRuleResponse
       */
      Models::UpdateDIAlarmRuleResponse updateDIAlarmRuleWithOptions(const Models::UpdateDIAlarmRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an alert rule configured for a synchronization task.
       *
       * @param request UpdateDIAlarmRuleRequest
       * @return UpdateDIAlarmRuleResponse
       */
      Models::UpdateDIAlarmRuleResponse updateDIAlarmRule(const Models::UpdateDIAlarmRuleRequest &request);

      /**
       * @summary Update a Data Integration task.
       *
       * @description This feature requires DataWorks Basic Edition or higher.
       *
       * @param tmpReq UpdateDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDIJobResponse
       */
      Models::UpdateDIJobResponse updateDIJobWithOptions(const Models::UpdateDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a Data Integration task.
       *
       * @description This feature requires DataWorks Basic Edition or higher.
       *
       * @param request UpdateDIJobRequest
       * @return UpdateDIJobResponse
       */
      Models::UpdateDIJobResponse updateDIJob(const Models::UpdateDIJobRequest &request);

      /**
       * @summary Updates a tag.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param tmpReq UpdateDataAssetTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataAssetTagResponse
       */
      Models::UpdateDataAssetTagResponse updateDataAssetTagWithOptions(const Models::UpdateDataAssetTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a tag.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param request UpdateDataAssetTagRequest
       * @return UpdateDataAssetTagResponse
       */
      Models::UpdateDataAssetTagResponse updateDataAssetTag(const Models::UpdateDataAssetTagRequest &request);

      /**
       * @summary Updates a specified data quality monitoring alert rule.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param tmpReq UpdateDataQualityAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityAlertRuleResponse
       */
      Models::UpdateDataQualityAlertRuleResponse updateDataQualityAlertRuleWithOptions(const Models::UpdateDataQualityAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified data quality monitoring alert rule.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request UpdateDataQualityAlertRuleRequest
       * @return UpdateDataQualityAlertRuleResponse
       */
      Models::UpdateDataQualityAlertRuleResponse updateDataQualityAlertRule(const Models::UpdateDataQualityAlertRuleRequest &request);

      /**
       * @deprecated OpenAPI UpdateDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
       *
       * @summary Updates a data quality validation task.
       *
       * @description DataWorks Basic Edition or above must be purchased to use this operation.
       *
       * @param tmpReq UpdateDataQualityEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityEvaluationTaskResponse
       */
      Models::UpdateDataQualityEvaluationTaskResponse updateDataQualityEvaluationTaskWithOptions(const Models::UpdateDataQualityEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
       *
       * @summary Updates a data quality validation task.
       *
       * @description DataWorks Basic Edition or above must be purchased to use this operation.
       *
       * @param request UpdateDataQualityEvaluationTaskRequest
       * @return UpdateDataQualityEvaluationTaskResponse
       */
      Models::UpdateDataQualityEvaluationTaskResponse updateDataQualityEvaluationTask(const Models::UpdateDataQualityEvaluationTaskRequest &request);

      /**
       * @deprecated OpenAPI UpdateDataQualityRule is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
       *
       * @summary Updates a data quality rule.
       *
       * @description You must purchase DataWorks Basic Edition or above to use this feature.
       *
       * @param tmpReq UpdateDataQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityRuleResponse
       */
      Models::UpdateDataQualityRuleResponse updateDataQualityRuleWithOptions(const Models::UpdateDataQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateDataQualityRule is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
       *
       * @summary Updates a data quality rule.
       *
       * @description You must purchase DataWorks Basic Edition or above to use this feature.
       *
       * @param request UpdateDataQualityRuleRequest
       * @return UpdateDataQualityRuleResponse
       */
      Models::UpdateDataQualityRuleResponse updateDataQualityRule(const Models::UpdateDataQualityRuleRequest &request);

      /**
       * @deprecated OpenAPI UpdateDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityTemplate instead.
       *
       * @summary Updates a data quality rule template.
       *
       * @description You can call this operation only after you purchase DataWorks Basic Edition or a higher edition.
       *
       * @param tmpReq UpdateDataQualityRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityRuleTemplateResponse
       */
      Models::UpdateDataQualityRuleTemplateResponse updateDataQualityRuleTemplateWithOptions(const Models::UpdateDataQualityRuleTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityTemplate instead.
       *
       * @summary Updates a data quality rule template.
       *
       * @description You can call this operation only after you purchase DataWorks Basic Edition or a higher edition.
       *
       * @param request UpdateDataQualityRuleTemplateRequest
       * @return UpdateDataQualityRuleTemplateResponse
       */
      Models::UpdateDataQualityRuleTemplateResponse updateDataQualityRuleTemplate(const Models::UpdateDataQualityRuleTemplateRequest &request);

      /**
       * @summary Updates a data quality monitor.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param tmpReq UpdateDataQualityScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityScanResponse
       */
      Models::UpdateDataQualityScanResponse updateDataQualityScanWithOptions(const Models::UpdateDataQualityScanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data quality monitor.
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request UpdateDataQualityScanRequest
       * @return UpdateDataQualityScanResponse
       */
      Models::UpdateDataQualityScanResponse updateDataQualityScan(const Models::UpdateDataQualityScanRequest &request);

      /**
       * @summary Updates a data quality rule template in a project
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request UpdateDataQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityTemplateResponse
       */
      Models::UpdateDataQualityTemplateResponse updateDataQualityTemplateWithOptions(const Models::UpdateDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data quality rule template in a project
       *
       * @description DataWorks Basic Edition or a higher edition is required.
       *
       * @param request UpdateDataQualityTemplateRequest
       * @return UpdateDataQualityTemplateResponse
       */
      Models::UpdateDataQualityTemplateResponse updateDataQualityTemplate(const Models::UpdateDataQualityTemplateRequest &request);

      /**
       * @summary Modifies a data source by ID.
       *
       * @param request UpdateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSourceWithOptions(const Models::UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a data source by ID.
       *
       * @param request UpdateDataSourceRequest
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSource(const Models::UpdateDataSourceRequest &request);

      /**
       * @summary Updates dataset information. Only DataWorks datasets are supported. The operator must be the creator of the dataset or the administrator of the workspace where the dataset is located.
       *
       * @param request UpdateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const Models::UpdateDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates dataset information. Only DataWorks datasets are supported. The operator must be the creator of the dataset or the administrator of the workspace where the dataset is located.
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const Models::UpdateDatasetRequest &request);

      /**
       * @summary Updates dataset version information. Only DataWorks datasets are supported. Requires dataset creator or workspace administrator permissions.
       *
       * @param request UpdateDatasetVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetVersionResponse
       */
      Models::UpdateDatasetVersionResponse updateDatasetVersionWithOptions(const Models::UpdateDatasetVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates dataset version information. Only DataWorks datasets are supported. Requires dataset creator or workspace administrator permissions.
       *
       * @param request UpdateDatasetVersionRequest
       * @return UpdateDatasetVersionResponse
       */
      Models::UpdateDatasetVersionResponse updateDatasetVersion(const Models::UpdateDatasetVersionRequest &request);

      /**
       * @summary Updates a file.
       *
       * @param request UpdateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileResponse
       */
      Models::UpdateFileResponse updateFileWithOptions(const Models::UpdateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a file.
       *
       * @param request UpdateFileRequest
       * @return UpdateFileResponse
       */
      Models::UpdateFileResponse updateFile(const Models::UpdateFileRequest &request);

      /**
       * @summary Invoke UpdateFolder to update the folder information.
       *
       * @param request UpdateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolderWithOptions(const Models::UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke UpdateFolder to update the folder information.
       *
       * @param request UpdateFolderRequest
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolder(const Models::UpdateFolderRequest &request);

      /**
       * @summary Updates the basic information about a user-defined function (UDF) in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @param request UpdateFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFunctionResponse
       */
      Models::UpdateFunctionResponse updateFunctionWithOptions(const Models::UpdateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about a user-defined function (UDF) in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @param request UpdateFunctionRequest
       * @return UpdateFunctionResponse
       */
      Models::UpdateFunctionResponse updateFunction(const Models::UpdateFunctionRequest &request);

      /**
       * @summary Recalls the check result of the message of an extension point event.
       *
       * @param request UpdateIDEEventResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIDEEventResultResponse
       */
      Models::UpdateIDEEventResultResponse updateIDEEventResultWithOptions(const Models::UpdateIDEEventResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recalls the check result of the message of an extension point event.
       *
       * @param request UpdateIDEEventResultRequest
       * @return UpdateIDEEventResultResponse
       */
      Models::UpdateIDEEventResultResponse updateIDEEventResult(const Models::UpdateIDEEventResultRequest &request);

      /**
       * @summary Updates an MCP Server.
       *
       * @description ## Description
       * This API updates the configuration of a specified MCP Server. Omitted fields retain their original values.
       * **Note**: When you modify the`Visibility` parameter, you must provide either`ProjectIds` or`UserIds` in`VisibilityScope` to apply the correct access control scope.
       *
       * @param tmpReq UpdateMcpServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpServerResponse
       */
      Models::UpdateMcpServerResponse updateMcpServerWithOptions(const Models::UpdateMcpServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an MCP Server.
       *
       * @description ## Description
       * This API updates the configuration of a specified MCP Server. Omitted fields retain their original values.
       * **Note**: When you modify the`Visibility` parameter, you must provide either`ProjectIds` or`UserIds` in`VisibilityScope` to apply the correct access control scope.
       *
       * @param request UpdateMcpServerRequest
       * @return UpdateMcpServerResponse
       */
      Models::UpdateMcpServerResponse updateMcpServer(const Models::UpdateMcpServerRequest &request);

      /**
       * @summary Update Data Map collection objects, including Data Map categories and data albums. You can update the collection name, description, and administrator information.
       * When updating a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or an administrator of the album.
       *
       * @description 1. You must purchase DataWorks Professional Edition or a higher edition to use this feature.
       *
       * @param tmpReq UpdateMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaCollectionResponse
       */
      Models::UpdateMetaCollectionResponse updateMetaCollectionWithOptions(const Models::UpdateMetaCollectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Data Map collection objects, including Data Map categories and data albums. You can update the collection name, description, and administrator information.
       * When updating a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or an administrator of the album.
       *
       * @description 1. You must purchase DataWorks Professional Edition or a higher edition to use this feature.
       *
       * @param request UpdateMetaCollectionRequest
       * @return UpdateMetaCollectionResponse
       */
      Models::UpdateMetaCollectionResponse updateMetaCollection(const Models::UpdateMetaCollectionRequest &request);

      /**
       * @summary Updates a metadata entity. You can update custom entities or objects of the extended table type, such as databases, tables, and columns.
       *
       * @description You must purchase DataWorks Professional Edition or a higher edition to use this operation.
       *
       * @param tmpReq UpdateMetaEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaEntityResponse
       */
      Models::UpdateMetaEntityResponse updateMetaEntityWithOptions(const Models::UpdateMetaEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a metadata entity. You can update custom entities or objects of the extended table type, such as databases, tables, and columns.
       *
       * @description You must purchase DataWorks Professional Edition or a higher edition to use this operation.
       *
       * @param request UpdateMetaEntityRequest
       * @return UpdateMetaEntityResponse
       */
      Models::UpdateMetaEntityResponse updateMetaEntity(const Models::UpdateMetaEntityRequest &request);

      /**
       * @summary Updates a meta entity definition. This operation supports both custom and extended table entity types.
       *
       * @description This operation requires DataWorks Professional Edition or a later version.
       *
       * @param tmpReq UpdateMetaEntityDefRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaEntityDefResponse
       */
      Models::UpdateMetaEntityDefResponse updateMetaEntityDefWithOptions(const Models::UpdateMetaEntityDefRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a meta entity definition. This operation supports both custom and extended table entity types.
       *
       * @description This operation requires DataWorks Professional Edition or a later version.
       *
       * @param request UpdateMetaEntityDefRequest
       * @return UpdateMetaEntityDefResponse
       */
      Models::UpdateMetaEntityDefResponse updateMetaEntityDef(const Models::UpdateMetaEntityDefRequest &request);

      /**
       * @summary Updates the basic information about a node in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @param request UpdateNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodeResponse
       */
      Models::UpdateNodeResponse updateNodeWithOptions(const Models::UpdateNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about a node in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @param request UpdateNodeRequest
       * @return UpdateNodeResponse
       */
      Models::UpdateNodeResponse updateNode(const Models::UpdateNodeRequest &request);

      /**
       * @summary Updates a parameter. This operation performs an incremental update and modifies only the specified fields.
       *
       * @description This operation is available only in DataWorks Professional Edition and later.
       *
       * @param tmpReq UpdateParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateParameterResponse
       */
      Models::UpdateParameterResponse updateParameterWithOptions(const Models::UpdateParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a parameter. This operation performs an incremental update and modifies only the specified fields.
       *
       * @description This operation is available only in DataWorks Professional Edition and later.
       *
       * @param request UpdateParameterRequest
       * @return UpdateParameterResponse
       */
      Models::UpdateParameterResponse updateParameter(const Models::UpdateParameterRequest &request);

      /**
       * @summary Updates an existing approval process definition.
       *
       * @description ## Request
       * - Use this API to modify an existing approval process definition, including its name, description, rule conditions, notification service, and approval nodes.
       * - The required `Id` parameter identifies the approval process definition to update.
       * - To overwrite the existing configuration, set the `Overwrite` parameter to `true`.
       * - The optional `ClientToken` parameter ensures request idempotency.
       *
       * @param tmpReq UpdateProcessDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProcessDefinitionResponse
       */
      Models::UpdateProcessDefinitionResponse updateProcessDefinitionWithOptions(const Models::UpdateProcessDefinitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an existing approval process definition.
       *
       * @description ## Request
       * - Use this API to modify an existing approval process definition, including its name, description, rule conditions, notification service, and approval nodes.
       * - The required `Id` parameter identifies the approval process definition to update.
       * - To overwrite the existing configuration, set the `Overwrite` parameter to `true`.
       * - The optional `ClientToken` parameter ensures request idempotency.
       *
       * @param request UpdateProcessDefinitionRequest
       * @return UpdateProcessDefinitionResponse
       */
      Models::UpdateProcessDefinitionResponse updateProcessDefinition(const Models::UpdateProcessDefinitionRequest &request);

      /**
       * @summary This operation updates a DataWorks workspace.
       *
       * @description This feature requires DataWorks Basic Edition or a later version.
       *
       * @param request UpdateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation updates a DataWorks workspace.
       *
       * @description This feature requires DataWorks Basic Edition or a later version.
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);

      /**
       * @summary Updates the permissions of a custom role in a workspace.
       *
       * @param tmpReq UpdateProjectRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectRoleResponse
       */
      Models::UpdateProjectRoleResponse updateProjectRoleWithOptions(const Models::UpdateProjectRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the permissions of a custom role in a workspace.
       *
       * @param request UpdateProjectRoleRequest
       * @return UpdateProjectRoleResponse
       */
      Models::UpdateProjectRoleResponse updateProjectRole(const Models::UpdateProjectRoleRequest &request);

      /**
       * @summary Updates the basic information about a file resource in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @param request UpdateResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResourceWithOptions(const Models::UpdateResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about a file resource in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @param request UpdateResourceRequest
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResource(const Models::UpdateResourceRequest &request);

      Models::UpdateResourceResponse updateResourceAdvance(const Models::UpdateResourceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates basic information about a resource group.
       *
       * @description You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       *
       * @param request UpdateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroupWithOptions(const Models::UpdateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates basic information about a resource group.
       *
       * @description You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       *
       * @param request UpdateResourceGroupRequest
       * @return UpdateResourceGroupResponse
       */
      Models::UpdateResourceGroupResponse updateResourceGroup(const Models::UpdateResourceGroupRequest &request);

      /**
       * @summary Updates the information about a route.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request UpdateRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRouteResponse
       */
      Models::UpdateRouteResponse updateRouteWithOptions(const Models::UpdateRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a route.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request UpdateRouteRequest
       * @return UpdateRouteResponse
       */
      Models::UpdateRouteResponse updateRoute(const Models::UpdateRouteRequest &request);

      /**
       * @summary To modify the configuration of an existing security policy, you must be both a DataWorks tenant administrator and a security administrator.
       *
       * @description ## Usage
       * - Use this API to update a specified security policy, including its name, description, associated workspace IDs, and policy content.
       * - You cannot modify some properties of default system policies, such as the schema name and control module.
       * - When `ControlDwScope` is set to `Workspace`, use the `Workspaces` parameter to associate the policy with specific workspaces.
       * - When updating the policy content (`Content`), ensure that the provided controllers (`Controllers`) conform to the requirements of the selected schema.
       * - The optional `ClientToken` parameter ensures request idempotence.
       *
       * @param tmpReq UpdateSecurityStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityStrategyResponse
       */
      Models::UpdateSecurityStrategyResponse updateSecurityStrategyWithOptions(const Models::UpdateSecurityStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To modify the configuration of an existing security policy, you must be both a DataWorks tenant administrator and a security administrator.
       *
       * @description ## Usage
       * - Use this API to update a specified security policy, including its name, description, associated workspace IDs, and policy content.
       * - You cannot modify some properties of default system policies, such as the schema name and control module.
       * - When `ControlDwScope` is set to `Workspace`, use the `Workspaces` parameter to associate the policy with specific workspaces.
       * - When updating the policy content (`Content`), ensure that the provided controllers (`Controllers`) conform to the requirements of the selected schema.
       * - The optional `ClientToken` parameter ensures request idempotence.
       *
       * @param request UpdateSecurityStrategyRequest
       * @return UpdateSecurityStrategyResponse
       */
      Models::UpdateSecurityStrategyResponse updateSecurityStrategy(const Models::UpdateSecurityStrategyRequest &request);

      /**
       * @summary Updates the business metadata for a data table in the data map. You can update only the table\\"s Readme and custom attributes.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a later version to use this operation.
       *
       * @param tmpReq UpdateTableBusinessMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableBusinessMetadataResponse
       */
      Models::UpdateTableBusinessMetadataResponse updateTableBusinessMetadataWithOptions(const Models::UpdateTableBusinessMetadataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the business metadata for a data table in the data map. You can update only the table\\"s Readme and custom attributes.
       *
       * @description 1. You must purchase DataWorks Basic Edition or a later version to use this operation.
       *
       * @param request UpdateTableBusinessMetadataRequest
       * @return UpdateTableBusinessMetadataResponse
       */
      Models::UpdateTableBusinessMetadataResponse updateTableBusinessMetadata(const Models::UpdateTableBusinessMetadataRequest &request);

      /**
       * @summary Updates a specified node. The modifications are synchronized to DataStudio, where a new saved version is created.
       *
       * @param tmpReq UpdateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskResponse
       */
      Models::UpdateTaskResponse updateTaskWithOptions(const Models::UpdateTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified node. The modifications are synchronized to DataStudio, where a new saved version is created.
       *
       * @param request UpdateTaskRequest
       * @return UpdateTaskResponse
       */
      Models::UpdateTaskResponse updateTask(const Models::UpdateTaskRequest &request);

      /**
       * @summary Modify the properties of multiple task instances in batch, including priority, resource group, data source, and more.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param tmpReq UpdateTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskInstancesResponse
       */
      Models::UpdateTaskInstancesResponse updateTaskInstancesWithOptions(const Models::UpdateTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the properties of multiple task instances in batch, including priority, resource group, data source, and more.
       *
       * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
       *
       * @param request UpdateTaskInstancesRequest
       * @return UpdateTaskInstancesResponse
       */
      Models::UpdateTaskInstancesResponse updateTaskInstances(const Models::UpdateTaskInstancesRequest &request);

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
       * @summary Updates a specified workflow by using the full update method. Fields that can be synchronously updated to DataStudio include: owner, data source, schedule resource group, description, and trigger run mode (Normal, Skip, or Pause).
       *
       * @description DataWorks Basic Edition or a more advanced edition is required.
       *
       * @param tmpReq UpdateWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflowWithOptions(const Models::UpdateWorkflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified workflow by using the full update method. Fields that can be synchronously updated to DataStudio include: owner, data source, schedule resource group, description, and trigger run mode (Normal, Skip, or Pause).
       *
       * @description DataWorks Basic Edition or a more advanced edition is required.
       *
       * @param request UpdateWorkflowRequest
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflow(const Models::UpdateWorkflowRequest &request);

      /**
       * @summary Updates the basic information about a workflow in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one workflow definition in the FlowSpec, all workflow definitions except the first one are ignored. In addition, nodes defined within the workflow definition are also ignored. Call the UpdateNode API to update internal nodes one by one.
       *
       * @param request UpdateWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowDefinitionResponse
       */
      Models::UpdateWorkflowDefinitionResponse updateWorkflowDefinitionWithOptions(const Models::UpdateWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about a workflow in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @description >Notice: 
       * This API does not support batch operations. If you define more than one workflow definition in the FlowSpec, all workflow definitions except the first one are ignored. In addition, nodes defined within the workflow definition are also ignored. Call the UpdateNode API to update internal nodes one by one.
       *
       * @param request UpdateWorkflowDefinitionRequest
       * @return UpdateWorkflowDefinitionResponse
       */
      Models::UpdateWorkflowDefinitionResponse updateWorkflowDefinition(const Models::UpdateWorkflowDefinitionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
