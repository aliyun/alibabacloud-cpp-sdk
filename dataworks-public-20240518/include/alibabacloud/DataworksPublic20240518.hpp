// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DATAWORKSPUBLIC20240518_HPP_
#define ALIBABACLOUD_DATAWORKSPUBLIC20240518_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DataworksPublic20240518Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/DataworksPublic20240518.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Terminates the process for deploying or undeploying an entity. The process is not deleted and can still be queried by calling query operations.
       *
       * @param request AbolishPipelineRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbolishPipelineRunResponse
       */
      Models::AbolishPipelineRunResponse abolishPipelineRunWithOptions(const Models::AbolishPipelineRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates the process for deploying or undeploying an entity. The process is not deleted and can still be queried by calling query operations.
       *
       * @param request AbolishPipelineRunRequest
       * @return AbolishPipelineRunResponse
       */
      Models::AbolishPipelineRunResponse abolishPipelineRun(const Models::AbolishPipelineRunRequest &request);

      /**
       * @summary 从集合中移除实体对象
       *
       * @param request AddEntityIntoMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEntityIntoMetaCollectionResponse
       */
      Models::AddEntityIntoMetaCollectionResponse addEntityIntoMetaCollectionWithOptions(const Models::AddEntityIntoMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从集合中移除实体对象
       *
       * @param request AddEntityIntoMetaCollectionRequest
       * @return AddEntityIntoMetaCollectionResponse
       */
      Models::AddEntityIntoMetaCollectionResponse addEntityIntoMetaCollection(const Models::AddEntityIntoMetaCollectionRequest &request);

      /**
       * @summary Associates a resource group with a workspace.
       *
       * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       * 2.  Your account must be assigned one of the following roles of the desired workspace:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request AssociateProjectToResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateProjectToResourceGroupResponse
       */
      Models::AssociateProjectToResourceGroupResponse associateProjectToResourceGroupWithOptions(const Models::AssociateProjectToResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a resource group with a workspace.
       *
       * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       * 2.  Your account must be assigned one of the following roles of the desired workspace:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request AssociateProjectToResourceGroupRequest
       * @return AssociateProjectToResourceGroupResponse
       */
      Models::AssociateProjectToResourceGroupResponse associateProjectToResourceGroup(const Models::AssociateProjectToResourceGroupRequest &request);

      /**
       * @summary Associates monitoring rules with a data quality monitoring task.
       *
       * @param tmpReq AttachDataQualityRulesToEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDataQualityRulesToEvaluationTaskResponse
       */
      Models::AttachDataQualityRulesToEvaluationTaskResponse attachDataQualityRulesToEvaluationTaskWithOptions(const Models::AttachDataQualityRulesToEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates monitoring rules with a data quality monitoring task.
       *
       * @param request AttachDataQualityRulesToEvaluationTaskRequest
       * @return AttachDataQualityRulesToEvaluationTaskResponse
       */
      Models::AttachDataQualityRulesToEvaluationTaskResponse attachDataQualityRulesToEvaluationTask(const Models::AttachDataQualityRulesToEvaluationTaskRequest &request);

      /**
       * @summary Performs incremental updates on multiple tasks at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq BatchUpdateTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateTasksResponse
       */
      Models::BatchUpdateTasksResponse batchUpdateTasksWithOptions(const Models::BatchUpdateTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs incremental updates on multiple tasks at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request BatchUpdateTasksRequest
       * @return BatchUpdateTasksResponse
       */
      Models::BatchUpdateTasksResponse batchUpdateTasks(const Models::BatchUpdateTasksRequest &request);

      /**
       * @summary Clones an existing data source.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request CloneDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneDataSourceResponse
       */
      Models::CloneDataSourceResponse cloneDataSourceWithOptions(const Models::CloneDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones an existing data source.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request CloneDataSourceRequest
       * @return CloneDataSourceResponse
       */
      Models::CloneDataSourceResponse cloneDataSource(const Models::CloneDataSourceRequest &request);

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
       * @param request CreateBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBusinessResponse
       */
      Models::CreateBusinessResponse createBusinessWithOptions(const Models::CreateBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateBusinessRequest
       * @return CreateBusinessResponse
       */
      Models::CreateBusinessResponse createBusiness(const Models::CreateBusinessRequest &request);

      /**
       * @summary Creates components.
       *
       * @param request CreateComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComponentResponse
       */
      Models::CreateComponentResponse createComponentWithOptions(const Models::CreateComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates components.
       *
       * @param request CreateComponentRequest
       * @return CreateComponentResponse
       */
      Models::CreateComponentResponse createComponent(const Models::CreateComponentRequest &request);

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
       * @summary Creates a new-version synchronization task.
       *
       * @description *   This API operation is available for all DataWorks editions.
       * *   You can call this API operation to create a synchronization task. When you call this API operation, you must configure parameters such as SourceDataSourceSettings, DestinationDataSourceSettings, MigrationType, TransformationRules, TableMappings, and JobSettings. The SourceDataSourceSettings parameter defines the settings related to the source. The DestinationDataSourceSettings parameter defines the settings related to the destination. The MigrationType parameter defines the synchronization task type. The TransformationRules parameter defines the transformation rules for objects involved in the synchronization task. The TableMappings parameter defines the mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. The JobSettings parameter defines the settings for the dimension of the synchronization task, including policies for data type mappings between source fields and destination fields and settings for periodic scheduling.
       *
       * @param tmpReq CreateDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDIJobResponse
       */
      Models::CreateDIJobResponse createDIJobWithOptions(const Models::CreateDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new-version synchronization task.
       *
       * @description *   This API operation is available for all DataWorks editions.
       * *   You can call this API operation to create a synchronization task. When you call this API operation, you must configure parameters such as SourceDataSourceSettings, DestinationDataSourceSettings, MigrationType, TransformationRules, TableMappings, and JobSettings. The SourceDataSourceSettings parameter defines the settings related to the source. The DestinationDataSourceSettings parameter defines the settings related to the destination. The MigrationType parameter defines the synchronization task type. The TransformationRules parameter defines the transformation rules for objects involved in the synchronization task. The TableMappings parameter defines the mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. The JobSettings parameter defines the settings for the dimension of the synchronization task, including policies for data type mappings between source fields and destination fields and settings for periodic scheduling.
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
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq CreateDataQualityAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityAlertRuleResponse
       */
      Models::CreateDataQualityAlertRuleResponse createDataQualityAlertRuleWithOptions(const Models::CreateDataQualityAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality monitoring alert rule in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateDataQualityAlertRuleRequest
       * @return CreateDataQualityAlertRuleResponse
       */
      Models::CreateDataQualityAlertRuleResponse createDataQualityAlertRule(const Models::CreateDataQualityAlertRuleRequest &request);

      /**
       * @summary Creates a monitor in DataWorks Data Quality.
       *
       * @description This API operation is supported in all DataWorks editions.
       *
       * @param tmpReq CreateDataQualityEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityEvaluationTaskResponse
       */
      Models::CreateDataQualityEvaluationTaskResponse createDataQualityEvaluationTaskWithOptions(const Models::CreateDataQualityEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a monitor in DataWorks Data Quality.
       *
       * @description This API operation is supported in all DataWorks editions.
       *
       * @param request CreateDataQualityEvaluationTaskRequest
       * @return CreateDataQualityEvaluationTaskResponse
       */
      Models::CreateDataQualityEvaluationTaskResponse createDataQualityEvaluationTask(const Models::CreateDataQualityEvaluationTaskRequest &request);

      /**
       * @summary Creates a monitor instance.
       *
       * @param tmpReq CreateDataQualityEvaluationTaskInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityEvaluationTaskInstanceResponse
       */
      Models::CreateDataQualityEvaluationTaskInstanceResponse createDataQualityEvaluationTaskInstanceWithOptions(const Models::CreateDataQualityEvaluationTaskInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a monitor instance.
       *
       * @param request CreateDataQualityEvaluationTaskInstanceRequest
       * @return CreateDataQualityEvaluationTaskInstanceResponse
       */
      Models::CreateDataQualityEvaluationTaskInstanceResponse createDataQualityEvaluationTaskInstance(const Models::CreateDataQualityEvaluationTaskInstanceRequest &request);

      /**
       * @summary Creates a data quality monitoring rule.
       *
       * @param tmpReq CreateDataQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityRuleResponse
       */
      Models::CreateDataQualityRuleResponse createDataQualityRuleWithOptions(const Models::CreateDataQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality monitoring rule.
       *
       * @param request CreateDataQualityRuleRequest
       * @return CreateDataQualityRuleResponse
       */
      Models::CreateDataQualityRuleResponse createDataQualityRule(const Models::CreateDataQualityRuleRequest &request);

      /**
       * @summary Creates a data quality monitoring rule template.
       *
       * @param tmpReq CreateDataQualityRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityRuleTemplateResponse
       */
      Models::CreateDataQualityRuleTemplateResponse createDataQualityRuleTemplateWithOptions(const Models::CreateDataQualityRuleTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality monitoring rule template.
       *
       * @param request CreateDataQualityRuleTemplateRequest
       * @return CreateDataQualityRuleTemplateResponse
       */
      Models::CreateDataQualityRuleTemplateResponse createDataQualityRuleTemplate(const Models::CreateDataQualityRuleTemplateRequest &request);

      /**
       * @summary Creates a data quality monitor.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq CreateDataQualityScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityScanResponse
       */
      Models::CreateDataQualityScanResponse createDataQualityScanWithOptions(const Models::CreateDataQualityScanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality monitor.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateDataQualityScanRequest
       * @return CreateDataQualityScanResponse
       */
      Models::CreateDataQualityScanResponse createDataQualityScan(const Models::CreateDataQualityScanRequest &request);

      /**
       * @summary Triggers a data quality monitoring task and returns the run instance ID.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq CreateDataQualityScanRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityScanRunResponse
       */
      Models::CreateDataQualityScanRunResponse createDataQualityScanRunWithOptions(const Models::CreateDataQualityScanRunRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a data quality monitoring task and returns the run instance ID.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateDataQualityScanRunRequest
       * @return CreateDataQualityScanRunResponse
       */
      Models::CreateDataQualityScanRunResponse createDataQualityScanRun(const Models::CreateDataQualityScanRunRequest &request);

      /**
       * @summary Creates a data quality template.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateDataQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataQualityTemplateResponse
       */
      Models::CreateDataQualityTemplateResponse createDataQualityTemplateWithOptions(const Models::CreateDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality template.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request CreateDataQualityTemplateRequest
       * @return CreateDataQualityTemplateResponse
       */
      Models::CreateDataQualityTemplateResponse createDataQualityTemplate(const Models::CreateDataQualityTemplateRequest &request);

      /**
       * @summary Adds a data source to the development environment or production environment of a workspace.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request CreateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const Models::CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a data source to the development environment or production environment of a workspace.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const Models::CreateDataSourceRequest &request);

      /**
       * @summary Creates a rule for sharing a data source to other workspaces or RAM users.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  If you want to share a data source from Workspace A to Workspace B, you must have the permissions to share the data source in both workspaces. You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request CreateDataSourceSharedRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceSharedRuleResponse
       */
      Models::CreateDataSourceSharedRuleResponse createDataSourceSharedRuleWithOptions(const Models::CreateDataSourceSharedRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rule for sharing a data source to other workspaces or RAM users.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  If you want to share a data source from Workspace A to Workspace B, you must have the permissions to share the data source in both workspaces. You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request CreateDataSourceSharedRuleRequest
       * @return CreateDataSourceSharedRuleResponse
       */
      Models::CreateDataSourceSharedRuleResponse createDataSourceSharedRule(const Models::CreateDataSourceSharedRuleRequest &request);

      /**
       * @param request CreateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFileWithOptions(const Models::CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateFileRequest
       * @return CreateFileResponse
       */
      Models::CreateFileResponse createFile(const Models::CreateFileRequest &request);

      /**
       * @param request CreateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolderWithOptions(const Models::CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateFolderRequest
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolder(const Models::CreateFolderRequest &request);

      /**
       * @summary Creates a user-defined function (UDF) in DataStudio. The information about the UDF is described by using FlowSpec.
       *
       * @description >  You cannot use this API operation to create multiple UDFs at a time. If you specify multiple UDFs by using FlowSpec, the system creates only the first specified UDF.
       *
       * @param request CreateFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunctionWithOptions(const Models::CreateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-defined function (UDF) in DataStudio. The information about the UDF is described by using FlowSpec.
       *
       * @description >  You cannot use this API operation to create multiple UDFs at a time. If you specify multiple UDFs by using FlowSpec, the system creates only the first specified UDF.
       *
       * @param request CreateFunctionRequest
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunction(const Models::CreateFunctionRequest &request);

      /**
       * @summary Creates a lineage between a source entity and a destination entity. Either the source or destination entity must be a custom entity.
       *
       * @param tmpReq CreateLineageRelationshipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLineageRelationshipResponse
       */
      Models::CreateLineageRelationshipResponse createLineageRelationshipWithOptions(const Models::CreateLineageRelationshipRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lineage between a source entity and a destination entity. Either the source or destination entity must be a custom entity.
       *
       * @param request CreateLineageRelationshipRequest
       * @return CreateLineageRelationshipResponse
       */
      Models::CreateLineageRelationshipResponse createLineageRelationship(const Models::CreateLineageRelationshipRequest &request);

      /**
       * @summary Creates a collection in Data Map. Collections include categories, subcategories, data albums, and categories that are created in the data albums.
       *
       * @param request CreateMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetaCollectionResponse
       */
      Models::CreateMetaCollectionResponse createMetaCollectionWithOptions(const Models::CreateMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a collection in Data Map. Collections include categories, subcategories, data albums, and categories that are created in the data albums.
       *
       * @param request CreateMetaCollectionRequest
       * @return CreateMetaCollectionResponse
       */
      Models::CreateMetaCollectionResponse createMetaCollection(const Models::CreateMetaCollectionRequest &request);

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
       * @description >  You cannot use this API operation to create multiple nodes at a time. If you specify multiple nodes by using FlowSpec, the system creates only the first specified node.
       *
       * @param request CreateNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeResponse
       */
      Models::CreateNodeResponse createNodeWithOptions(const Models::CreateNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node in DataStudio. The information about the node is described by using FlowSpec.
       *
       * @description >  You cannot use this API operation to create multiple nodes at a time. If you specify multiple nodes by using FlowSpec, the system creates only the first specified node.
       *
       * @param request CreateNodeRequest
       * @return CreateNodeResponse
       */
      Models::CreateNodeResponse createNode(const Models::CreateNodeRequest &request);

      /**
       * @summary Creates a process for deploying or undeploying an entity in Data Studio.
       *
       * @description >  You cannot use this API operation to create a process for multiple entities at a time. If you specify multiple entities in a request, the system creates a process only for the first entity.
       *
       * @param tmpReq CreatePipelineRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineRunResponse
       */
      Models::CreatePipelineRunResponse createPipelineRunWithOptions(const Models::CreatePipelineRunRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a process for deploying or undeploying an entity in Data Studio.
       *
       * @description >  You cannot use this API operation to create a process for multiple entities at a time. If you specify multiple entities in a request, the system creates a process only for the first entity.
       *
       * @param request CreatePipelineRunRequest
       * @return CreatePipelineRunResponse
       */
      Models::CreatePipelineRunResponse createPipelineRun(const Models::CreatePipelineRunRequest &request);

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
       * @summary >  You cannot use this API operation to create multiple file resources at a time. If you specify multiple file resources by using FlowSpec, the system creates only the first specified resource.
       *
       * @description Private
       *
       * @param request CreateResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResourceWithOptions(const Models::CreateResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary >  You cannot use this API operation to create multiple file resources at a time. If you specify multiple file resources by using FlowSpec, the system creates only the first specified resource.
       *
       * @description Private
       *
       * @param request CreateResourceRequest
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResource(const Models::CreateResourceRequest &request);

      Models::CreateResourceResponse createResourceAdvance(const Models::CreateResourceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource file in DataStudio. The following types are supported: JAR, Archive, File, and Python.
       *
       * @param request CreateResourceFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceFileResponse
       */
      Models::CreateResourceFileResponse createResourceFileWithOptions(const Models::CreateResourceFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource file in DataStudio. The following types are supported: JAR, Archive, File, and Python.
       *
       * @param request CreateResourceFileRequest
       * @return CreateResourceFileResponse
       */
      Models::CreateResourceFileResponse createResourceFile(const Models::CreateResourceFileRequest &request);

      Models::CreateResourceFileResponse createResourceFileAdvance(const Models::CreateResourceFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a serverless resource group.
       *
       * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       * 2.  **Before you call this API operation, you must make sure that you have a good command of the billing details and [pricing](https://help.aliyun.com/document_detail/2680173.html) of serverless resource groups.
       *
       * @param tmpReq CreateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroupWithOptions(const Models::CreateResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a serverless resource group.
       *
       * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       * 2.  **Before you call this API operation, you must make sure that you have a good command of the billing details and [pricing](https://help.aliyun.com/document_detail/2680173.html) of serverless resource groups.
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
       * @param request CreateUdfFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUdfFileResponse
       */
      Models::CreateUdfFileResponse createUdfFileWithOptions(const Models::CreateUdfFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateUdfFileRequest
       * @return CreateUdfFileResponse
       */
      Models::CreateUdfFileResponse createUdfFile(const Models::CreateUdfFileRequest &request);

      /**
       * @summary Creates a workflow in a directory of DataStudio.
       *
       * @description > You cannot use this API operation to create multiple workflows at a time. If you specify multiple workflows by using FlowSpec, the system creates only the first specified workflow. Other specified workflows and the nodes in the workflows are ignored. You can call the CreateNode operation to create a node.
       *
       * @param request CreateWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkflowDefinitionResponse
       */
      Models::CreateWorkflowDefinitionResponse createWorkflowDefinitionWithOptions(const Models::CreateWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow in a directory of DataStudio.
       *
       * @description > You cannot use this API operation to create multiple workflows at a time. If you specify multiple workflows by using FlowSpec, the system creates only the first specified workflow. Other specified workflows and the nodes in the workflows are ignored. You can call the CreateNode operation to create a node.
       *
       * @param request CreateWorkflowDefinitionRequest
       * @return CreateWorkflowDefinitionResponse
       */
      Models::CreateWorkflowDefinitionResponse createWorkflowDefinition(const Models::CreateWorkflowDefinitionRequest &request);

      /**
       * @summary Creates a workflow instance, such as a data backfill workflow instance, based on configurations.
       *
       * @param tmpReq CreateWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkflowInstancesResponse
       */
      Models::CreateWorkflowInstancesResponse createWorkflowInstancesWithOptions(const Models::CreateWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow instance, such as a data backfill workflow instance, based on configurations.
       *
       * @param request CreateWorkflowInstancesRequest
       * @return CreateWorkflowInstancesResponse
       */
      Models::CreateWorkflowInstancesResponse createWorkflowInstances(const Models::CreateWorkflowInstancesRequest &request);

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
       * @summary Deletes a certificate file.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M.
       *
       * @param request DeleteCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificateWithOptions(const Models::DeleteCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a certificate file.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M.
       *
       * @param request DeleteCertificateRequest
       * @return DeleteCertificateResponse
       */
      Models::DeleteCertificateResponse deleteCertificate(const Models::DeleteCertificateRequest &request);

      /**
       * @summary Deletes a component.
       *
       * @description >  A UDF that is deployed cannot be deleted. If you want to delete such a UDF, you must first undeploy the UDF.
       *
       * @param request DeleteComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentResponse
       */
      Models::DeleteComponentResponse deleteComponentWithOptions(const Models::DeleteComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a component.
       *
       * @description >  A UDF that is deployed cannot be deleted. If you want to delete such a UDF, you must first undeploy the UDF.
       *
       * @param request DeleteComponentRequest
       * @return DeleteComponentResponse
       */
      Models::DeleteComponentResponse deleteComponent(const Models::DeleteComponentRequest &request);

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
       * @description Subscribe to DataWorks Basic Edition or a higher version to use this API.
       *
       * @param request DeleteDataQualityAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityAlertRuleResponse
       */
      Models::DeleteDataQualityAlertRuleResponse deleteDataQualityAlertRuleWithOptions(const Models::DeleteDataQualityAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality alert rule by ID.
       *
       * @description Subscribe to DataWorks Basic Edition or a higher version to use this API.
       *
       * @param request DeleteDataQualityAlertRuleRequest
       * @return DeleteDataQualityAlertRuleResponse
       */
      Models::DeleteDataQualityAlertRuleResponse deleteDataQualityAlertRule(const Models::DeleteDataQualityAlertRuleRequest &request);

      /**
       * @summary Deletes a data quality monitoring task.
       *
       * @param request DeleteDataQualityEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityEvaluationTaskResponse
       */
      Models::DeleteDataQualityEvaluationTaskResponse deleteDataQualityEvaluationTaskWithOptions(const Models::DeleteDataQualityEvaluationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality monitoring task.
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
       * @summary Deletes a data quality monitoring rule template.
       *
       * @param request DeleteDataQualityRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityRuleTemplateResponse
       */
      Models::DeleteDataQualityRuleTemplateResponse deleteDataQualityRuleTemplateWithOptions(const Models::DeleteDataQualityRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality monitoring rule template.
       *
       * @param request DeleteDataQualityRuleTemplateRequest
       * @return DeleteDataQualityRuleTemplateResponse
       */
      Models::DeleteDataQualityRuleTemplateResponse deleteDataQualityRuleTemplate(const Models::DeleteDataQualityRuleTemplateRequest &request);

      /**
       * @summary Deletes a data quality monitor.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteDataQualityScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityScanResponse
       */
      Models::DeleteDataQualityScanResponse deleteDataQualityScanWithOptions(const Models::DeleteDataQualityScanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality monitor.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteDataQualityScanRequest
       * @return DeleteDataQualityScanResponse
       */
      Models::DeleteDataQualityScanResponse deleteDataQualityScan(const Models::DeleteDataQualityScanRequest &request);

      /**
       * @summary Deletes a data quality rule template by ID.
       *
       * @description ## [](#)Request description
       * *   **Id**: the unique identifier of the user-defined rule template, in the format `USER_DEFINED:<template_id>`.
       * *   **ProjectId**: The ID of the DataWorks project to which the rule template belongs.
       * This API is used to remove data quality rule templates that are no longer needed from the system. Make sure the provided `Id` and `ProjectId` are correct when calling this API operation; otherwise, the deletion may fail or lead to unexpected data loss. Use this function with caution and verify the exact information of the template before performing the operation.
       *
       * @param request DeleteDataQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataQualityTemplateResponse
       */
      Models::DeleteDataQualityTemplateResponse deleteDataQualityTemplateWithOptions(const Models::DeleteDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data quality rule template by ID.
       *
       * @description ## [](#)Request description
       * *   **Id**: the unique identifier of the user-defined rule template, in the format `USER_DEFINED:<template_id>`.
       * *   **ProjectId**: The ID of the DataWorks project to which the rule template belongs.
       * This API is used to remove data quality rule templates that are no longer needed from the system. Make sure the provided `Id` and `ProjectId` are correct when calling this API operation; otherwise, the deletion may fail or lead to unexpected data loss. Use this function with caution and verify the exact information of the template before performing the operation.
       *
       * @param request DeleteDataQualityTemplateRequest
       * @return DeleteDataQualityTemplateResponse
       */
      Models::DeleteDataQualityTemplateResponse deleteDataQualityTemplate(const Models::DeleteDataQualityTemplateRequest &request);

      /**
       * @summary Removes a data source by ID.
       *
       * @description 1.  This API operation is available for all Dataworks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a data source by ID.
       *
       * @description 1.  This API operation is available for all Dataworks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary Deletes a sharing rule of a data source by ID.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  If you want to delete a sharing rule of a data source from Workspace A to Workspace B, you must have the permissions to share the data source in Workspace A or Workspace B. You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request DeleteDataSourceSharedRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceSharedRuleResponse
       */
      Models::DeleteDataSourceSharedRuleResponse deleteDataSourceSharedRuleWithOptions(const Models::DeleteDataSourceSharedRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a sharing rule of a data source by ID.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  If you want to delete a sharing rule of a data source from Workspace A to Workspace B, you must have the permissions to share the data source in Workspace A or Workspace B. You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request DeleteDataSourceSharedRuleRequest
       * @return DeleteDataSourceSharedRuleResponse
       */
      Models::DeleteDataSourceSharedRuleResponse deleteDataSourceSharedRule(const Models::DeleteDataSourceSharedRuleRequest &request);

      /**
       * @param request DeleteFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFileWithOptions(const Models::DeleteFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary Deletes a user-defined function (UDF) in DataStudio.
       *
       * @description >  A UDF that is deployed cannot be deleted. If you want to delete such a UDF, you must first undeploy the UDF.
       *
       * @param request DeleteFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionResponse
       */
      Models::DeleteFunctionResponse deleteFunctionWithOptions(const Models::DeleteFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user-defined function (UDF) in DataStudio.
       *
       * @description >  A UDF that is deployed cannot be deleted. If you want to delete such a UDF, you must first undeploy the UDF.
       *
       * @param request DeleteFunctionRequest
       * @return DeleteFunctionResponse
       */
      Models::DeleteFunctionResponse deleteFunction(const Models::DeleteFunctionRequest &request);

      /**
       * @summary 删除血缘关系
       *
       * @param request DeleteLineageRelationshipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLineageRelationshipResponse
       */
      Models::DeleteLineageRelationshipResponse deleteLineageRelationshipWithOptions(const Models::DeleteLineageRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除血缘关系
       *
       * @param request DeleteLineageRelationshipRequest
       * @return DeleteLineageRelationshipResponse
       */
      Models::DeleteLineageRelationshipResponse deleteLineageRelationship(const Models::DeleteLineageRelationshipRequest &request);

      /**
       * @summary 删除集合
       *
       * @param request DeleteMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetaCollectionResponse
       */
      Models::DeleteMetaCollectionResponse deleteMetaCollectionWithOptions(const Models::DeleteMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除集合
       *
       * @param request DeleteMetaCollectionRequest
       * @return DeleteMetaCollectionResponse
       */
      Models::DeleteMetaCollectionResponse deleteMetaCollection(const Models::DeleteMetaCollectionRequest &request);

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
       * @description >  A node that is deployed cannot be deleted. If you want to delete such a node, you must first undeploy the node.
       *
       * @param request DeleteNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNodeResponse
       */
      Models::DeleteNodeResponse deleteNodeWithOptions(const Models::DeleteNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a node from DataStudio.
       *
       * @description >  A node that is deployed cannot be deleted. If you want to delete such a node, you must first undeploy the node.
       *
       * @param request DeleteNodeRequest
       * @return DeleteNodeResponse
       */
      Models::DeleteNodeResponse deleteNode(const Models::DeleteNodeRequest &request);

      /**
       * @summary Deletes a DataWorks workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request DeleteProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const Models::DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DataWorks workspace.
       *
       * @description This API operation is available for all DataWorks editions.
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
       * @summary Deletes a file resource from DataStudio.
       *
       * @description >  A file resource that is deployed cannot be deleted. If you want to delete such a file resource, you must first undeploy the file resource.
       *
       * @param request DeleteResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResourceWithOptions(const Models::DeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file resource from DataStudio.
       *
       * @description >  A file resource that is deployed cannot be deleted. If you want to delete such a file resource, you must first undeploy the file resource.
       *
       * @param request DeleteResourceRequest
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResource(const Models::DeleteResourceRequest &request);

      /**
       * @summary Deletes a serverless resource group.
       *
       * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       * 2.  **Before you call this API operation, you must make sure that you have a good command of the billing details and [pricing](https://help.aliyun.com/document_detail/2680173.html) of serverless resource groups.
       *
       * @param request DeleteResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroupWithOptions(const Models::DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a serverless resource group.
       *
       * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       * 2.  **Before you call this API operation, you must make sure that you have a good command of the billing details and [pricing](https://help.aliyun.com/document_detail/2680173.html) of serverless resource groups.
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
       * @description >  A workflow that is deployed cannot be deleted. If you want to delete such a workflow, you must first undeploy the workflow.
       *
       * @param request DeleteWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowDefinitionResponse
       */
      Models::DeleteWorkflowDefinitionResponse deleteWorkflowDefinitionWithOptions(const Models::DeleteWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workflow from DataStudio.
       *
       * @description >  A workflow that is deployed cannot be deleted. If you want to delete such a workflow, you must first undeploy the workflow.
       *
       * @param request DeleteWorkflowDefinitionRequest
       * @return DeleteWorkflowDefinitionResponse
       */
      Models::DeleteWorkflowDefinitionResponse deleteWorkflowDefinition(const Models::DeleteWorkflowDefinitionRequest &request);

      /**
       * @param request DeployFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployFileResponse
       */
      Models::DeployFileResponse deployFileWithOptions(const Models::DeployFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeployFileRequest
       * @return DeployFileResponse
       */
      Models::DeployFileResponse deployFile(const Models::DeployFileRequest &request);

      /**
       * @summary Disassociates monitoring rules from a data quality monitoring task.
       *
       * @param tmpReq DetachDataQualityRulesFromEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDataQualityRulesFromEvaluationTaskResponse
       */
      Models::DetachDataQualityRulesFromEvaluationTaskResponse detachDataQualityRulesFromEvaluationTaskWithOptions(const Models::DetachDataQualityRulesFromEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates monitoring rules from a data quality monitoring task.
       *
       * @param request DetachDataQualityRulesFromEvaluationTaskRequest
       * @return DetachDataQualityRulesFromEvaluationTaskResponse
       */
      Models::DetachDataQualityRulesFromEvaluationTaskResponse detachDataQualityRulesFromEvaluationTask(const Models::DetachDataQualityRulesFromEvaluationTaskRequest &request);

      /**
       * @summary Disassociates a resource group from a workspace.
       *
       * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       * 2.  Your account must be assigned one of the following roles of the desired workspace:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request DissociateProjectFromResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateProjectFromResourceGroupResponse
       */
      Models::DissociateProjectFromResourceGroupResponse dissociateProjectFromResourceGroupWithOptions(const Models::DissociateProjectFromResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a resource group from a workspace.
       *
       * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       * 2.  Your account must be assigned one of the following roles of the desired workspace:
       * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request DissociateProjectFromResourceGroupRequest
       * @return DissociateProjectFromResourceGroupResponse
       */
      Models::DissociateProjectFromResourceGroupResponse dissociateProjectFromResourceGroup(const Models::DissociateProjectFromResourceGroupRequest &request);

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
       * @summary Executes a stage in a process.
       *
       * @description >  The stages in a process are sequential. For more information, see the GetDeployment operation. Skipping or repeating a stage is not allowed.
       * >  The execution of a stage is asynchronous. The response of this operation indicates only whether a stage is triggered but does not indicate whether the execution of the stage is successful. You can call the GetDeployment operation to check whether the execution is successful.
       *
       * @param request ExecPipelineRunStageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecPipelineRunStageResponse
       */
      Models::ExecPipelineRunStageResponse execPipelineRunStageWithOptions(const Models::ExecPipelineRunStageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a stage in a process.
       *
       * @description >  The stages in a process are sequential. For more information, see the GetDeployment operation. Skipping or repeating a stage is not allowed.
       * >  The execution of a stage is asynchronous. The response of this operation indicates only whether a stage is triggered but does not indicate whether the execution of the stage is successful. You can call the GetDeployment operation to check whether the execution is successful.
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
       * @param request GetBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBusinessResponse
       */
      Models::GetBusinessResponse getBusinessWithOptions(const Models::GetBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetBusinessRequest
       * @return GetBusinessResponse
       */
      Models::GetBusinessResponse getBusiness(const Models::GetBusinessRequest &request);

      /**
       * @summary 获取数据目录详情
       *
       * @param request GetCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalogWithOptions(const Models::GetCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据目录详情
       *
       * @param request GetCatalogRequest
       * @return GetCatalogResponse
       */
      Models::GetCatalogResponse getCatalog(const Models::GetCatalogRequest &request);

      /**
       * @summary Queries a certificate file.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Workspace Owner, and O\\&M.
       *
       * @param request GetCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificateWithOptions(const Models::GetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a certificate file.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Workspace Owner, and O\\&M.
       *
       * @param request GetCertificateRequest
       * @return GetCertificateResponse
       */
      Models::GetCertificateResponse getCertificate(const Models::GetCertificateRequest &request);

      /**
       * @summary 获取字段详情
       *
       * @param request GetColumnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetColumnResponse
       */
      Models::GetColumnResponse getColumnWithOptions(const Models::GetColumnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取字段详情
       *
       * @param request GetColumnRequest
       * @return GetColumnResponse
       */
      Models::GetColumnResponse getColumn(const Models::GetColumnRequest &request);

      /**
       * @summary Gets component information.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       *
       * @param request GetComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComponentResponse
       */
      Models::GetComponentResponse getComponentWithOptions(const Models::GetComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets component information.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       *
       * @param request GetComponentRequest
       * @return GetComponentResponse
       */
      Models::GetComponentResponse getComponent(const Models::GetComponentRequest &request);

      /**
       * @summary Queries the result of asynchronously creating a workflow instance.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetCreateWorkflowInstancesResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateWorkflowInstancesResultResponse
       */
      Models::GetCreateWorkflowInstancesResultResponse getCreateWorkflowInstancesResultWithOptions(const Models::GetCreateWorkflowInstancesResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of asynchronously creating a workflow instance.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetCreateWorkflowInstancesResultRequest
       * @return GetCreateWorkflowInstancesResultResponse
       */
      Models::GetCreateWorkflowInstancesResultResponse getCreateWorkflowInstancesResult(const Models::GetCreateWorkflowInstancesResultRequest &request);

      /**
       * @summary Queries the information about a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDIJobResponse
       */
      Models::GetDIJobResponse getDIJobWithOptions(const Models::GetDIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
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
       * @summary Queries the details of a data quality monitoring and alerting rule by alert rule ID.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityAlertRuleResponse
       */
      Models::GetDataQualityAlertRuleResponse getDataQualityAlertRuleWithOptions(const Models::GetDataQualityAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data quality monitoring and alerting rule by alert rule ID.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityAlertRuleRequest
       * @return GetDataQualityAlertRuleResponse
       */
      Models::GetDataQualityAlertRuleResponse getDataQualityAlertRule(const Models::GetDataQualityAlertRuleRequest &request);

      /**
       * @summary Queries the details of a monitor.
       *
       * @param request GetDataQualityEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityEvaluationTaskResponse
       */
      Models::GetDataQualityEvaluationTaskResponse getDataQualityEvaluationTaskWithOptions(const Models::GetDataQualityEvaluationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a monitor.
       *
       * @param request GetDataQualityEvaluationTaskRequest
       * @return GetDataQualityEvaluationTaskResponse
       */
      Models::GetDataQualityEvaluationTaskResponse getDataQualityEvaluationTask(const Models::GetDataQualityEvaluationTaskRequest &request);

      /**
       * @summary Queries the details of a monitor instance.
       *
       * @param request GetDataQualityEvaluationTaskInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityEvaluationTaskInstanceResponse
       */
      Models::GetDataQualityEvaluationTaskInstanceResponse getDataQualityEvaluationTaskInstanceWithOptions(const Models::GetDataQualityEvaluationTaskInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a monitor instance.
       *
       * @param request GetDataQualityEvaluationTaskInstanceRequest
       * @return GetDataQualityEvaluationTaskInstanceResponse
       */
      Models::GetDataQualityEvaluationTaskInstanceResponse getDataQualityEvaluationTaskInstance(const Models::GetDataQualityEvaluationTaskInstanceRequest &request);

      /**
       * @summary Queries the information about a data quality monitoring rule.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityRuleResponse
       */
      Models::GetDataQualityRuleResponse getDataQualityRuleWithOptions(const Models::GetDataQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a data quality monitoring rule.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityRuleRequest
       * @return GetDataQualityRuleResponse
       */
      Models::GetDataQualityRuleResponse getDataQualityRule(const Models::GetDataQualityRuleRequest &request);

      /**
       * @summary Queries the information about a data quality monitoring rule template.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityRuleTemplateResponse
       */
      Models::GetDataQualityRuleTemplateResponse getDataQualityRuleTemplateWithOptions(const Models::GetDataQualityRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a data quality monitoring rule template.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityRuleTemplateRequest
       * @return GetDataQualityRuleTemplateResponse
       */
      Models::GetDataQualityRuleTemplateResponse getDataQualityRuleTemplate(const Models::GetDataQualityRuleTemplateRequest &request);

      /**
       * @summary Gets data quality monitoring details.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityScanResponse
       */
      Models::GetDataQualityScanResponse getDataQualityScanWithOptions(const Models::GetDataQualityScanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets data quality monitoring details.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityScanRequest
       * @return GetDataQualityScanResponse
       */
      Models::GetDataQualityScanResponse getDataQualityScan(const Models::GetDataQualityScanRequest &request);

      /**
       * @summary Creates a data quality monitoring run instance.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityScanRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityScanRunResponse
       */
      Models::GetDataQualityScanRunResponse getDataQualityScanRunWithOptions(const Models::GetDataQualityScanRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data quality monitoring run instance.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityScanRunRequest
       * @return GetDataQualityScanRunResponse
       */
      Models::GetDataQualityScanRunResponse getDataQualityScanRun(const Models::GetDataQualityScanRunRequest &request);

      /**
       * @summary Queries the log of a specific task instance that monitors data quality.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityScanRunLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityScanRunLogResponse
       */
      Models::GetDataQualityScanRunLogResponse getDataQualityScanRunLogWithOptions(const Models::GetDataQualityScanRunLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log of a specific task instance that monitors data quality.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityScanRunLogRequest
       * @return GetDataQualityScanRunLogResponse
       */
      Models::GetDataQualityScanRunLogResponse getDataQualityScanRunLog(const Models::GetDataQualityScanRunLogRequest &request);

      /**
       * @summary Queries the details of a data quality rule template by ID.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataQualityTemplateResponse
       */
      Models::GetDataQualityTemplateResponse getDataQualityTemplateWithOptions(const Models::GetDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data quality rule template by ID.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetDataQualityTemplateRequest
       * @return GetDataQualityTemplateResponse
       */
      Models::GetDataQualityTemplateResponse getDataQualityTemplate(const Models::GetDataQualityTemplateRequest &request);

      /**
       * @summary Queries a data source by ID.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Deployment, Development, Project Owner, and O\\&M
       *
       * @param request GetDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceResponse
       */
      Models::GetDataSourceResponse getDataSourceWithOptions(const Models::GetDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a data source by ID.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Deployment, Development, Project Owner, and O\\&M
       *
       * @param request GetDataSourceRequest
       * @return GetDataSourceResponse
       */
      Models::GetDataSourceResponse getDataSource(const Models::GetDataSourceRequest &request);

      /**
       * @summary 获取数据库详情
       *
       * @param request GetDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabaseWithOptions(const Models::GetDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据库详情
       *
       * @param request GetDatabaseRequest
       * @return GetDatabaseResponse
       */
      Models::GetDatabaseResponse getDatabase(const Models::GetDatabaseRequest &request);

      /**
       * @param request GetDeploymentPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentPackageResponse
       */
      Models::GetDeploymentPackageResponse getDeploymentPackageWithOptions(const Models::GetDeploymentPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetDeploymentPackageRequest
       * @return GetDeploymentPackageResponse
       */
      Models::GetDeploymentPackageResponse getDeploymentPackage(const Models::GetDeploymentPackageRequest &request);

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
       * @param request GetFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFolderResponse
       */
      Models::GetFolderResponse getFolderWithOptions(const Models::GetFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary 获取血缘关系详情
       *
       * @param request GetLineageRelationshipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLineageRelationshipResponse
       */
      Models::GetLineageRelationshipResponse getLineageRelationshipWithOptions(const Models::GetLineageRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取血缘关系详情
       *
       * @param request GetLineageRelationshipRequest
       * @return GetLineageRelationshipResponse
       */
      Models::GetLineageRelationshipResponse getLineageRelationship(const Models::GetLineageRelationshipRequest &request);

      /**
       * @summary Queries the information about a collection in Data Map. Collections include categories and data albums.
       *
       * @param request GetMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetaCollectionResponse
       */
      Models::GetMetaCollectionResponse getMetaCollectionWithOptions(const Models::GetMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a collection in Data Map. Collections include categories and data albums.
       *
       * @param request GetMetaCollectionRequest
       * @return GetMetaCollectionResponse
       */
      Models::GetMetaCollectionResponse getMetaCollection(const Models::GetMetaCollectionRequest &request);

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
       * @summary Retrieves partition details for a data map table. Currently supports MaxCompute and HMS (EMR cluster) types only.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  This operation supports MaxCompute and HMS (EMR cluster) tables only.
       *
       * @param request GetPartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPartitionResponse
       */
      Models::GetPartitionResponse getPartitionWithOptions(const Models::GetPartitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves partition details for a data map table. Currently supports MaxCompute and HMS (EMR cluster) types only.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  This operation supports MaxCompute and HMS (EMR cluster) tables only.
       *
       * @param request GetPartitionRequest
       * @return GetPartitionResponse
       */
      Models::GetPartitionResponse getPartition(const Models::GetPartitionRequest &request);

      /**
       * @summary Queries the information about a process for deploying or undeploying an entity.
       *
       * @param request GetPipelineRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineRunResponse
       */
      Models::GetPipelineRunResponse getPipelineRunWithOptions(const Models::GetPipelineRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a process for deploying or undeploying an entity.
       *
       * @param request GetPipelineRunRequest
       * @return GetPipelineRunResponse
       */
      Models::GetPipelineRunResponse getPipelineRun(const Models::GetPipelineRunRequest &request);

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
       * @summary Queries the details about a member in a workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetProjectMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectMemberResponse
       */
      Models::GetProjectMemberResponse getProjectMemberWithOptions(const Models::GetProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a member in a workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetProjectMemberRequest
       * @return GetProjectMemberResponse
       */
      Models::GetProjectMemberResponse getProjectMember(const Models::GetProjectMemberRequest &request);

      /**
       * @summary Queries the information about a role in a DataWorks workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetProjectRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectRoleResponse
       */
      Models::GetProjectRoleResponse getProjectRoleWithOptions(const Models::GetProjectRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a role in a DataWorks workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetProjectRoleRequest
       * @return GetProjectRoleResponse
       */
      Models::GetProjectRoleResponse getProjectRole(const Models::GetProjectRoleRequest &request);

      /**
       * @summary Query the result of asynchronous workflow instance reruns.
       *
       * @param request GetRerunWorkflowInstancesResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRerunWorkflowInstancesResultResponse
       */
      Models::GetRerunWorkflowInstancesResultResponse getRerunWorkflowInstancesResultWithOptions(const Models::GetRerunWorkflowInstancesResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the result of asynchronous workflow instance reruns.
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
       * @description You can use this API operation only in DataWorks Basic Edition or an advanced edition.
       *
       * @param request GetResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupResponse
       */
      Models::GetResourceGroupResponse getResourceGroupWithOptions(const Models::GetResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a resource group based on its ID.
       *
       * @description You can use this API operation only in DataWorks Basic Edition or an advanced edition.
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
       * @summary Queries the information about a schema in Data Map. You can call this API operation to query the information only about MaxCompute and Hologres schemas.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this API operation to query the information only about MaxCompute and Hologres schemas.
       *
       * @param request GetSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchemaWithOptions(const Models::GetSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a schema in Data Map. You can call this API operation to query the information only about MaxCompute and Hologres schemas.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this API operation to query the information only about MaxCompute and Hologres schemas.
       *
       * @param request GetSchemaRequest
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchema(const Models::GetSchemaRequest &request);

      /**
       * @summary 获取表详情
       *
       * @param request GetTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableResponse
       */
      Models::GetTableResponse getTableWithOptions(const Models::GetTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表详情
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
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetTaskInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskInstanceResponse
       */
      Models::GetTaskInstanceResponse getTaskInstanceWithOptions(const Models::GetTaskInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an instance.
       *
       * @description This API operation is available for all DataWorks editions.
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
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request GetWorkflowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowInstanceResponse
       */
      Models::GetWorkflowInstanceResponse getWorkflowInstanceWithOptions(const Models::GetWorkflowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a workflow instance.
       *
       * @description This API operation is available for all DataWorks editions.
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
       * @param request ImportCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCertificateResponse
       */
      Models::ImportCertificateResponse importCertificateWithOptions(const Models::ImportCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a certificate file.
       *
       * @param request ImportCertificateRequest
       * @return ImportCertificateResponse
       */
      Models::ImportCertificateResponse importCertificate(const Models::ImportCertificateRequest &request);

      Models::ImportCertificateResponse importCertificateAdvance(const Models::ImportCertificateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a workflow and its child nodes that are specified by the FlowSpec field to DataStudio.
       *
       * @description > 
       * *   You cannot use this API operation to import multiple workflows at a time. If you specify multiple workflows by using FlowSpec, the system imports only the first specified workflow.
       * *   ImportWorkflowDefinition is an asynchronous operation. After you send a request, an asynchronous task is generated, and the system returns the ID of the asynchronous task. You can call the GetJobStatus operation to query the status of the asynchronous task.
       *
       * @param request ImportWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportWorkflowDefinitionResponse
       */
      Models::ImportWorkflowDefinitionResponse importWorkflowDefinitionWithOptions(const Models::ImportWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a workflow and its child nodes that are specified by the FlowSpec field to DataStudio.
       *
       * @description > 
       * *   You cannot use this API operation to import multiple workflows at a time. If you specify multiple workflows by using FlowSpec, the system imports only the first specified workflow.
       * *   ImportWorkflowDefinition is an asynchronous operation. After you send a request, an asynchronous task is generated, and the system returns the ID of the asynchronous task. You can call the GetJobStatus operation to query the status of the asynchronous task.
       *
       * @param request ImportWorkflowDefinitionRequest
       * @return ImportWorkflowDefinitionResponse
       */
      Models::ImportWorkflowDefinitionResponse importWorkflowDefinition(const Models::ImportWorkflowDefinitionRequest &request);

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
       * @param request ListBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusinessResponse
       */
      Models::ListBusinessResponse listBusinessWithOptions(const Models::ListBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBusinessRequest
       * @return ListBusinessResponse
       */
      Models::ListBusinessResponse listBusiness(const Models::ListBusinessRequest &request);

      /**
       * @summary 查询数据目录列表
       *
       * @param tmpReq ListCatalogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogsWithOptions(const Models::ListCatalogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据目录列表
       *
       * @param request ListCatalogsRequest
       * @return ListCatalogsResponse
       */
      Models::ListCatalogsResponse listCatalogs(const Models::ListCatalogsRequest &request);

      /**
       * @summary Queries a list of certificate files.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator.
       *
       * @param request ListCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificatesWithOptions(const Models::ListCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of certificate files.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator.
       *
       * @param request ListCertificatesRequest
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificates(const Models::ListCertificatesRequest &request);

      /**
       * @summary 查询字段列表
       *
       * @param request ListColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListColumnsResponse
       */
      Models::ListColumnsResponse listColumnsWithOptions(const Models::ListColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询字段列表
       *
       * @param request ListColumnsRequest
       * @return ListColumnsResponse
       */
      Models::ListColumnsResponse listColumns(const Models::ListColumnsRequest &request);

      /**
       * @summary Retrieves a list of components.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponentsWithOptions(const Models::ListComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of components.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListComponentsRequest
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponents(const Models::ListComponentsRequest &request);

      /**
       * @summary 查询元数据采集器类型列表
       *
       * @param request ListCrawlerTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCrawlerTypesResponse
       */
      Models::ListCrawlerTypesResponse listCrawlerTypesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询元数据采集器类型列表
       *
       * @return ListCrawlerTypesResponse
       */
      Models::ListCrawlerTypesResponse listCrawlerTypes();

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
       * @summary Queries a list of new-version synchronization tasks in Data Integration. A new-version synchronization task can be a real-time synchronization task used to synchronize full or incremental data in a database, a batch synchronization task used to synchronize full or incremental data in a database, or a real-time synchronization task used to synchronize incremental data in a single table.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDIJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDIJobsResponse
       */
      Models::ListDIJobsResponse listDIJobsWithOptions(const Models::ListDIJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of new-version synchronization tasks in Data Integration. A new-version synchronization task can be a real-time synchronization task used to synchronize full or incremental data in a database, a batch synchronization task used to synchronize full or incremental data in a database, or a real-time synchronization task used to synchronize incremental data in a single table.
       *
       * @description This API operation is available for all DataWorks editions.
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
       * @summary Queries the information about DataWorks data assets to which tags are added by page.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param tmpReq ListDataAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataAssetsResponse
       */
      Models::ListDataAssetsResponse listDataAssetsWithOptions(const Models::ListDataAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about DataWorks data assets to which tags are added by page.
       *
       * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
       *
       * @param request ListDataAssetsRequest
       * @return ListDataAssetsResponse
       */
      Models::ListDataAssetsResponse listDataAssets(const Models::ListDataAssetsRequest &request);

      /**
       * @summary Queries the list of data quality alert rules in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityAlertRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityAlertRulesResponse
       */
      Models::ListDataQualityAlertRulesResponse listDataQualityAlertRulesWithOptions(const Models::ListDataQualityAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data quality alert rules in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityAlertRulesRequest
       * @return ListDataQualityAlertRulesResponse
       */
      Models::ListDataQualityAlertRulesResponse listDataQualityAlertRules(const Models::ListDataQualityAlertRulesRequest &request);

      /**
       * @summary Queries a list of instances generated by a data quality monitoring task by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityEvaluationTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityEvaluationTaskInstancesResponse
       */
      Models::ListDataQualityEvaluationTaskInstancesResponse listDataQualityEvaluationTaskInstancesWithOptions(const Models::ListDataQualityEvaluationTaskInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances generated by a data quality monitoring task by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityEvaluationTaskInstancesRequest
       * @return ListDataQualityEvaluationTaskInstancesResponse
       */
      Models::ListDataQualityEvaluationTaskInstancesResponse listDataQualityEvaluationTaskInstances(const Models::ListDataQualityEvaluationTaskInstancesRequest &request);

      /**
       * @summary Queries a list of data quality monitoring tasks by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityEvaluationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityEvaluationTasksResponse
       */
      Models::ListDataQualityEvaluationTasksResponse listDataQualityEvaluationTasksWithOptions(const Models::ListDataQualityEvaluationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data quality monitoring tasks by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityEvaluationTasksRequest
       * @return ListDataQualityEvaluationTasksResponse
       */
      Models::ListDataQualityEvaluationTasksResponse listDataQualityEvaluationTasks(const Models::ListDataQualityEvaluationTasksRequest &request);

      /**
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityResultsResponse
       */
      Models::ListDataQualityResultsResponse listDataQualityResultsWithOptions(const Models::ListDataQualityResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityResultsRequest
       * @return ListDataQualityResultsResponse
       */
      Models::ListDataQualityResultsResponse listDataQualityResults(const Models::ListDataQualityResultsRequest &request);

      /**
       * @summary Queries a list of data quality monitoring rule templates.
       *
       * @param request ListDataQualityRuleTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityRuleTemplatesResponse
       */
      Models::ListDataQualityRuleTemplatesResponse listDataQualityRuleTemplatesWithOptions(const Models::ListDataQualityRuleTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data quality monitoring rule templates.
       *
       * @param request ListDataQualityRuleTemplatesRequest
       * @return ListDataQualityRuleTemplatesResponse
       */
      Models::ListDataQualityRuleTemplatesResponse listDataQualityRuleTemplates(const Models::ListDataQualityRuleTemplatesRequest &request);

      /**
       * @summary Queries a list of data quality monitoring rules by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityRulesResponse
       */
      Models::ListDataQualityRulesResponse listDataQualityRulesWithOptions(const Models::ListDataQualityRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data quality monitoring rules by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityRulesRequest
       * @return ListDataQualityRulesResponse
       */
      Models::ListDataQualityRulesResponse listDataQualityRules(const Models::ListDataQualityRulesRequest &request);

      /**
       * @summary Queries the execution records of data quality scans in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityScanRunsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityScanRunsResponse
       */
      Models::ListDataQualityScanRunsResponse listDataQualityScanRunsWithOptions(const Models::ListDataQualityScanRunsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution records of data quality scans in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityScanRunsRequest
       * @return ListDataQualityScanRunsResponse
       */
      Models::ListDataQualityScanRunsResponse listDataQualityScanRuns(const Models::ListDataQualityScanRunsRequest &request);

      /**
       * @summary Queries the list of data quality scan tasks in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityScansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityScansResponse
       */
      Models::ListDataQualityScansResponse listDataQualityScansWithOptions(const Models::ListDataQualityScansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data quality scan tasks in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityScansRequest
       * @return ListDataQualityScansResponse
       */
      Models::ListDataQualityScansResponse listDataQualityScans(const Models::ListDataQualityScansRequest &request);

      /**
       * @summary Queries the list of data quality rule templates in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataQualityTemplatesResponse
       */
      Models::ListDataQualityTemplatesResponse listDataQualityTemplatesWithOptions(const Models::ListDataQualityTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data quality rule templates in a project.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListDataQualityTemplatesRequest
       * @return ListDataQualityTemplatesResponse
       */
      Models::ListDataQualityTemplatesResponse listDataQualityTemplates(const Models::ListDataQualityTemplatesRequest &request);

      /**
       * @summary Queries a list of sharing rules of a data source.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  If you want to query the sharing rules of a data source that is associated with Workspace A, you must have the permissions to share the data source in Workspace A. You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request ListDataSourceSharedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceSharedRulesResponse
       */
      Models::ListDataSourceSharedRulesResponse listDataSourceSharedRulesWithOptions(const Models::ListDataSourceSharedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of sharing rules of a data source.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  If you want to query the sharing rules of a data source that is associated with Workspace A, you must have the permissions to share the data source in Workspace A. You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
       *
       * @param request ListDataSourceSharedRulesRequest
       * @return ListDataSourceSharedRulesResponse
       */
      Models::ListDataSourceSharedRulesResponse listDataSourceSharedRules(const Models::ListDataSourceSharedRulesRequest &request);

      /**
       * @summary Queries a list of data sources based on the business information of data sources.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator
       *
       * @param tmpReq ListDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const Models::ListDataSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data sources based on the business information of data sources.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator
       *
       * @param request ListDataSourcesRequest
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const Models::ListDataSourcesRequest &request);

      /**
       * @summary 查询数据库列表
       *
       * @param request ListDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const Models::ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据库列表
       *
       * @param request ListDatabasesRequest
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const Models::ListDatabasesRequest &request);

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
       * @param request ListEntitiesInMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEntitiesInMetaCollectionResponse
       */
      Models::ListEntitiesInMetaCollectionResponse listEntitiesInMetaCollectionWithOptions(const Models::ListEntitiesInMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of entities in a collection in Data Map. Collections include categories and data albums. Entities can only be tables.
       *
       * @param request ListEntitiesInMetaCollectionRequest
       * @return ListEntitiesInMetaCollectionResponse
       */
      Models::ListEntitiesInMetaCollectionResponse listEntitiesInMetaCollection(const Models::ListEntitiesInMetaCollectionRequest &request);

      /**
       * @param request ListFileVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFileVersionsResponse
       */
      Models::ListFileVersionsResponse listFileVersionsWithOptions(const Models::ListFileVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFileVersionsRequest
       * @return ListFileVersionsResponse
       */
      Models::ListFileVersionsResponse listFileVersions(const Models::ListFileVersionsRequest &request);

      /**
       * @param request ListFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFilesWithOptions(const Models::ListFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFilesRequest
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFiles(const Models::ListFilesRequest &request);

      /**
       * @param request ListFoldersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFoldersResponse
       */
      Models::ListFoldersResponse listFoldersWithOptions(const Models::ListFoldersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary 查询血缘关系
       *
       * @param request ListLineageRelationshipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLineageRelationshipsResponse
       */
      Models::ListLineageRelationshipsResponse listLineageRelationshipsWithOptions(const Models::ListLineageRelationshipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询血缘关系
       *
       * @param request ListLineageRelationshipsRequest
       * @return ListLineageRelationshipsResponse
       */
      Models::ListLineageRelationshipsResponse listLineageRelationships(const Models::ListLineageRelationshipsRequest &request);

      /**
       * @summary Queries a list of ancestor and descendant entities of an entity in Data Map. You can specify whether to return the lineage between the entities.
       *
       * @param request ListLineagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLineagesResponse
       */
      Models::ListLineagesResponse listLineagesWithOptions(const Models::ListLineagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ancestor and descendant entities of an entity in Data Map. You can specify whether to return the lineage between the entities.
       *
       * @param request ListLineagesRequest
       * @return ListLineagesResponse
       */
      Models::ListLineagesResponse listLineages(const Models::ListLineagesRequest &request);

      /**
       * @summary Queries a list of collections in Data Map. Collections include categories and data albums.
       *
       * @param request ListMetaCollectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMetaCollectionsResponse
       */
      Models::ListMetaCollectionsResponse listMetaCollectionsWithOptions(const Models::ListMetaCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of collections in Data Map. Collections include categories and data albums.
       *
       * @param request ListMetaCollectionsRequest
       * @return ListMetaCollectionsResponse
       */
      Models::ListMetaCollectionsResponse listMetaCollections(const Models::ListMetaCollectionsRequest &request);

      /**
       * @summary Queries a list of network resources of a serverless resource group.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworksResponse
       */
      Models::ListNetworksResponse listNetworksWithOptions(const Models::ListNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of network resources of a serverless resource group.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListNetworksRequest
       * @return ListNetworksResponse
       */
      Models::ListNetworksResponse listNetworks(const Models::ListNetworksRequest &request);

      /**
       * @summary Queries a list of descendant nodes of a node in DataStudio.
       *
       * @param request ListNodeDependenciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeDependenciesResponse
       */
      Models::ListNodeDependenciesResponse listNodeDependenciesWithOptions(const Models::ListNodeDependenciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of descendant nodes of a node in DataStudio.
       *
       * @param request ListNodeDependenciesRequest
       * @return ListNodeDependenciesResponse
       */
      Models::ListNodeDependenciesResponse listNodeDependencies(const Models::ListNodeDependenciesRequest &request);

      /**
       * @summary Queries a list of nodes in DataStudio. You can also specify filter conditions to query specific nodes.
       *
       * @param request ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of nodes in DataStudio. You can also specify filter conditions to query specific nodes.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary 查询数据表的分区列表
       *
       * @param request ListPartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitionsWithOptions(const Models::ListPartitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据表的分区列表
       *
       * @param request ListPartitionsRequest
       * @return ListPartitionsResponse
       */
      Models::ListPartitionsResponse listPartitions(const Models::ListPartitionsRequest &request);

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
       * @summary Queries a list of processes that are used to deploy or undeploy entities in DataStudio. You can also specify filter conditions to query specific processes.
       *
       * @param request ListPipelineRunsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineRunsResponse
       */
      Models::ListPipelineRunsResponse listPipelineRunsWithOptions(const Models::ListPipelineRunsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of processes that are used to deploy or undeploy entities in DataStudio. You can also specify filter conditions to query specific processes.
       *
       * @param request ListPipelineRunsRequest
       * @return ListPipelineRunsResponse
       */
      Models::ListPipelineRunsResponse listPipelineRuns(const Models::ListPipelineRunsRequest &request);

      /**
       * @summary Queries details about members in a workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq ListProjectMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembersWithOptions(const Models::ListProjectMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about members in a workspace.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListProjectMembersRequest
       * @return ListProjectMembersResponse
       */
      Models::ListProjectMembersResponse listProjectMembers(const Models::ListProjectMembersRequest &request);

      /**
       * @summary Queries the information about roles in a DataWorks workspace by page.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq ListProjectRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectRolesResponse
       */
      Models::ListProjectRolesResponse listProjectRolesWithOptions(const Models::ListProjectRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about roles in a DataWorks workspace by page.
       *
       * @description This API operation is available for all DataWorks editions.
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
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  **Make sure that the AliyunServiceRoleForDataWorks service-linked role is created before you call this operation.
       *
       * @param request ListResourceGroupAssociateProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupAssociateProjectsResponse
       */
      Models::ListResourceGroupAssociateProjectsResponse listResourceGroupAssociateProjectsWithOptions(const Models::ListResourceGroupAssociateProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of workspaces with which a resource group is associated
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  **Make sure that the AliyunServiceRoleForDataWorks service-linked role is created before you call this operation.
       *
       * @param request ListResourceGroupAssociateProjectsRequest
       * @return ListResourceGroupAssociateProjectsResponse
       */
      Models::ListResourceGroupAssociateProjectsResponse listResourceGroupAssociateProjects(const Models::ListResourceGroupAssociateProjectsRequest &request);

      /**
       * @summary 获取指定资源组的监控指标数据
       *
       * @param request ListResourceGroupMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupMetricDataResponse
       */
      Models::ListResourceGroupMetricDataResponse listResourceGroupMetricDataWithOptions(const Models::ListResourceGroupMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定资源组的监控指标数据
       *
       * @param request ListResourceGroupMetricDataRequest
       * @return ListResourceGroupMetricDataResponse
       */
      Models::ListResourceGroupMetricDataResponse listResourceGroupMetricData(const Models::ListResourceGroupMetricDataRequest &request);

      /**
       * @summary Queries a list of resource groups.
       *
       * @param tmpReq ListResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceGroupsResponse
       */
      Models::ListResourceGroupsResponse listResourceGroupsWithOptions(const Models::ListResourceGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of resource groups.
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
       * @summary Queries a list of routes of a network resource.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListRoutesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoutesResponse
       */
      Models::ListRoutesResponse listRoutesWithOptions(const Models::ListRoutesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of routes of a network resource.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListRoutesRequest
       * @return ListRoutesResponse
       */
      Models::ListRoutesResponse listRoutes(const Models::ListRoutesRequest &request);

      /**
       * @summary Queries a list of schemas in a database or a MaxCompute project in Data Map. Only schemas of the MaxCompute and Hologres metadata crawler types are supported.
       *
       * @param tmpReq ListSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemasWithOptions(const Models::ListSchemasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of schemas in a database or a MaxCompute project in Data Map. Only schemas of the MaxCompute and Hologres metadata crawler types are supported.
       *
       * @param request ListSchemasRequest
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemas(const Models::ListSchemasRequest &request);

      /**
       * @summary Queries a list of tables in Data Map. For data source types that do not support schemas, you can call this API operation to query a list of tables in a specific database. For data source types that support schemas, you can call this API operation to query a list of tables in a specific database, MaxCompute project, or schema. Only the basic information about tables is returned. The information about technical metadata and business metadata is not returned.
       *
       * @param tmpReq ListTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const Models::ListTablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tables in Data Map. For data source types that do not support schemas, you can call this API operation to query a list of tables in a specific database. For data source types that support schemas, you can call this API operation to query a list of tables in a specific database, MaxCompute project, or schema. Only the basic information about tables is returned. The information about technical metadata and business metadata is not returned.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const Models::ListTablesRequest &request);

      /**
       * @summary Queries a list of operation logs of an instance by page.
       *
       * @description This API operation is available for all DataWorks editions.
       * You can call this operation to query only the operation logs generated within the previous 31 days.
       *
       * @param request ListTaskInstanceOperationLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskInstanceOperationLogsResponse
       */
      Models::ListTaskInstanceOperationLogsResponse listTaskInstanceOperationLogsWithOptions(const Models::ListTaskInstanceOperationLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of operation logs of an instance by page.
       *
       * @description This API operation is available for all DataWorks editions.
       * You can call this operation to query only the operation logs generated within the previous 31 days.
       *
       * @param request ListTaskInstanceOperationLogsRequest
       * @return ListTaskInstanceOperationLogsResponse
       */
      Models::ListTaskInstanceOperationLogsResponse listTaskInstanceOperationLogs(const Models::ListTaskInstanceOperationLogsRequest &request);

      /**
       * @summary Queries a list of instances. You can also specify filter conditions to query specific instances.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq ListTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskInstancesResponse
       */
      Models::ListTaskInstancesResponse listTaskInstancesWithOptions(const Models::ListTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances. You can also specify filter conditions to query specific instances.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListTaskInstancesRequest
       * @return ListTaskInstancesResponse
       */
      Models::ListTaskInstancesResponse listTaskInstances(const Models::ListTaskInstancesRequest &request);

      /**
       * @summary Queries a list of operation logs of a task by page.
       *
       * @description This API operation is available for all DataWorks editions.
       * You can call this operation to query only the operation logs generated within the previous 31 days.
       *
       * @param request ListTaskOperationLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskOperationLogsResponse
       */
      Models::ListTaskOperationLogsResponse listTaskOperationLogsWithOptions(const Models::ListTaskOperationLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of operation logs of a task by page.
       *
       * @description This API operation is available for all DataWorks editions.
       * You can call this operation to query only the operation logs generated within the previous 31 days.
       *
       * @param request ListTaskOperationLogsRequest
       * @return ListTaskOperationLogsResponse
       */
      Models::ListTaskOperationLogsResponse listTaskOperationLogs(const Models::ListTaskOperationLogsRequest &request);

      /**
       * @summary Queries a list of tasks by page. You can also specify filter conditions to query tasks.
       *
       * @param tmpReq ListTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const Models::ListTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tasks by page. You can also specify filter conditions to query tasks.
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
       * @summary Queries a list of workflow instances by page. You can also specify filter conditions to query workflow instances.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq ListWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowInstancesResponse
       */
      Models::ListWorkflowInstancesResponse listWorkflowInstancesWithOptions(const Models::ListWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workflow instances by page. You can also specify filter conditions to query workflow instances.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListWorkflowInstancesRequest
       * @return ListWorkflowInstancesResponse
       */
      Models::ListWorkflowInstancesResponse listWorkflowInstances(const Models::ListWorkflowInstancesRequest &request);

      /**
       * @summary Queries a list of workflows by page. You can also specify filter conditions to query workflows.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq ListWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflowsWithOptions(const Models::ListWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of workflows by page. You can also specify filter conditions to query workflows.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request ListWorkflowsRequest
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflows(const Models::ListWorkflowsRequest &request);

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
       * @summary 从集合中移除实体对象
       *
       * @param request RemoveEntityFromMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveEntityFromMetaCollectionResponse
       */
      Models::RemoveEntityFromMetaCollectionResponse removeEntityFromMetaCollectionWithOptions(const Models::RemoveEntityFromMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从集合中移除实体对象
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
       * @summary Reruns multiple instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq RerunTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RerunTaskInstancesResponse
       */
      Models::RerunTaskInstancesResponse rerunTaskInstancesWithOptions(const Models::RerunTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns multiple instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request RerunTaskInstancesRequest
       * @return RerunTaskInstancesResponse
       */
      Models::RerunTaskInstancesResponse rerunTaskInstances(const Models::RerunTaskInstancesRequest &request);

      /**
       * @summary Reruns workflow instances.
       *
       * @param tmpReq RerunWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RerunWorkflowInstancesResponse
       */
      Models::RerunWorkflowInstancesResponse rerunWorkflowInstancesWithOptions(const Models::RerunWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns workflow instances.
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
       * @summary Starts multiple workflow instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq StartWorkflowInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartWorkflowInstancesResponse
       */
      Models::StartWorkflowInstancesResponse startWorkflowInstancesWithOptions(const Models::StartWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts multiple workflow instances at a time.
       *
       * @description This API operation is available for all DataWorks editions.
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
       * @param request SubmitFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitFileResponse
       */
      Models::SubmitFileResponse submitFileWithOptions(const Models::SubmitFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary Tests the connectivity between a data source and a resource group.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  Your account must be assigned one of the following roles of the desired workspace: Tenant Owner, Workspace Administrator, Deploy, Develop, Workspace Owner, and O\\&M
       *
       * @param request TestDataSourceConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestDataSourceConnectivityResponse
       */
      Models::TestDataSourceConnectivityResponse testDataSourceConnectivityWithOptions(const Models::TestDataSourceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the connectivity between a data source and a resource group.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  Your account must be assigned one of the following roles of the desired workspace: Tenant Owner, Workspace Administrator, Deploy, Develop, Workspace Owner, and O\\&M
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
       * @summary 更新字段业务元数据
       *
       * @param request UpdateColumnBusinessMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateColumnBusinessMetadataResponse
       */
      Models::UpdateColumnBusinessMetadataResponse updateColumnBusinessMetadataWithOptions(const Models::UpdateColumnBusinessMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新字段业务元数据
       *
       * @param request UpdateColumnBusinessMetadataRequest
       * @return UpdateColumnBusinessMetadataResponse
       */
      Models::UpdateColumnBusinessMetadataResponse updateColumnBusinessMetadata(const Models::UpdateColumnBusinessMetadataRequest &request);

      /**
       * @summary Updates components.
       *
       * @description This operation is currently in beta. To join the beta testing, please submit a request. You can call this operation after we add you to the beta program.
       *
       * @param request UpdateComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComponentResponse
       */
      Models::UpdateComponentResponse updateComponentWithOptions(const Models::UpdateComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates components.
       *
       * @description This operation is currently in beta. To join the beta testing, please submit a request. You can call this operation after we add you to the beta program.
       *
       * @param request UpdateComponentRequest
       * @return UpdateComponentResponse
       */
      Models::UpdateComponentResponse updateComponent(const Models::UpdateComponentRequest &request);

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
       * @summary Updates a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq UpdateDIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDIJobResponse
       */
      Models::UpdateDIJobResponse updateDIJobWithOptions(const Models::UpdateDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a synchronization task.
       *
       * @description This API operation is available for all DataWorks editions.
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
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq UpdateDataQualityAlertRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityAlertRuleResponse
       */
      Models::UpdateDataQualityAlertRuleResponse updateDataQualityAlertRuleWithOptions(const Models::UpdateDataQualityAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified data quality monitoring alert rule.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request UpdateDataQualityAlertRuleRequest
       * @return UpdateDataQualityAlertRuleResponse
       */
      Models::UpdateDataQualityAlertRuleResponse updateDataQualityAlertRule(const Models::UpdateDataQualityAlertRuleRequest &request);

      /**
       * @summary Updates a monitor.
       *
       * @description This API operation is supported in all DataWorks editions.
       *
       * @param tmpReq UpdateDataQualityEvaluationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityEvaluationTaskResponse
       */
      Models::UpdateDataQualityEvaluationTaskResponse updateDataQualityEvaluationTaskWithOptions(const Models::UpdateDataQualityEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a monitor.
       *
       * @description This API operation is supported in all DataWorks editions.
       *
       * @param request UpdateDataQualityEvaluationTaskRequest
       * @return UpdateDataQualityEvaluationTaskResponse
       */
      Models::UpdateDataQualityEvaluationTaskResponse updateDataQualityEvaluationTask(const Models::UpdateDataQualityEvaluationTaskRequest &request);

      /**
       * @summary Updates a data quality monitoring rule.
       *
       * @param tmpReq UpdateDataQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityRuleResponse
       */
      Models::UpdateDataQualityRuleResponse updateDataQualityRuleWithOptions(const Models::UpdateDataQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data quality monitoring rule.
       *
       * @param request UpdateDataQualityRuleRequest
       * @return UpdateDataQualityRuleResponse
       */
      Models::UpdateDataQualityRuleResponse updateDataQualityRule(const Models::UpdateDataQualityRuleRequest &request);

      /**
       * @summary Updates a data quality monitoring rule template.
       *
       * @param tmpReq UpdateDataQualityRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityRuleTemplateResponse
       */
      Models::UpdateDataQualityRuleTemplateResponse updateDataQualityRuleTemplateWithOptions(const Models::UpdateDataQualityRuleTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data quality monitoring rule template.
       *
       * @param request UpdateDataQualityRuleTemplateRequest
       * @return UpdateDataQualityRuleTemplateResponse
       */
      Models::UpdateDataQualityRuleTemplateResponse updateDataQualityRuleTemplate(const Models::UpdateDataQualityRuleTemplateRequest &request);

      /**
       * @summary Updates a data quality monitor.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq UpdateDataQualityScanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityScanResponse
       */
      Models::UpdateDataQualityScanResponse updateDataQualityScanWithOptions(const Models::UpdateDataQualityScanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data quality monitor.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request UpdateDataQualityScanRequest
       * @return UpdateDataQualityScanResponse
       */
      Models::UpdateDataQualityScanResponse updateDataQualityScan(const Models::UpdateDataQualityScanRequest &request);

      /**
       * @summary Updates a data quality rule template in a project
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request UpdateDataQualityTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataQualityTemplateResponse
       */
      Models::UpdateDataQualityTemplateResponse updateDataQualityTemplateWithOptions(const Models::UpdateDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data quality rule template in a project
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request UpdateDataQualityTemplateRequest
       * @return UpdateDataQualityTemplateResponse
       */
      Models::UpdateDataQualityTemplateResponse updateDataQualityTemplate(const Models::UpdateDataQualityTemplateRequest &request);

      /**
       * @summary Modifies a data source by ID.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Tenant Administrator, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request UpdateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSourceWithOptions(const Models::UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a data source by ID.
       *
       * @description 1.  This API operation is available for all DataWorks editions.
       * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
       * *   Tenant Owner, Tenant Administrator, Workspace Administrator, Workspace Owner, and O\\&M
       *
       * @param request UpdateDataSourceRequest
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSource(const Models::UpdateDataSourceRequest &request);

      /**
       * @param request UpdateFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileResponse
       */
      Models::UpdateFileResponse updateFileWithOptions(const Models::UpdateFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateFileRequest
       * @return UpdateFileResponse
       */
      Models::UpdateFileResponse updateFile(const Models::UpdateFileRequest &request);

      /**
       * @param request UpdateFolderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFolderResponse
       */
      Models::UpdateFolderResponse updateFolderWithOptions(const Models::UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary 回调扩展点消息的检查结果
       *
       * @param request UpdateIDEEventResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIDEEventResultResponse
       */
      Models::UpdateIDEEventResultResponse updateIDEEventResultWithOptions(const Models::UpdateIDEEventResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回调扩展点消息的检查结果
       *
       * @param request UpdateIDEEventResultRequest
       * @return UpdateIDEEventResultResponse
       */
      Models::UpdateIDEEventResultResponse updateIDEEventResult(const Models::UpdateIDEEventResultRequest &request);

      /**
       * @summary Updates the information about a collection in Data Map, including the collection name, description, and administrator. Collections include categories and data albums. If you want to update the information about a data album, the account that you use must be attached the AliyunDataWorksFullAccess policy, or you are the data album creator or administrator.
       *
       * @param tmpReq UpdateMetaCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMetaCollectionResponse
       */
      Models::UpdateMetaCollectionResponse updateMetaCollectionWithOptions(const Models::UpdateMetaCollectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a collection in Data Map, including the collection name, description, and administrator. Collections include categories and data albums. If you want to update the information about a data album, the account that you use must be attached the AliyunDataWorksFullAccess policy, or you are the data album creator or administrator.
       *
       * @param request UpdateMetaCollectionRequest
       * @return UpdateMetaCollectionResponse
       */
      Models::UpdateMetaCollectionResponse updateMetaCollection(const Models::UpdateMetaCollectionRequest &request);

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
       * @summary Updates a DataWorks workspace.
       *
       * @param request UpdateProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a DataWorks workspace.
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);

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
       * @summary Updates the business metadata of a table in Data Map. Currently, only the usage notes of a table can be updated.
       *
       * @param request UpdateTableBusinessMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableBusinessMetadataResponse
       */
      Models::UpdateTableBusinessMetadataResponse updateTableBusinessMetadataWithOptions(const Models::UpdateTableBusinessMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the business metadata of a table in Data Map. Currently, only the usage notes of a table can be updated.
       *
       * @param request UpdateTableBusinessMetadataRequest
       * @return UpdateTableBusinessMetadataResponse
       */
      Models::UpdateTableBusinessMetadataResponse updateTableBusinessMetadata(const Models::UpdateTableBusinessMetadataRequest &request);

      /**
       * @summary Update a task. The changes are synchronized to Data Studio, which creates a new saved version.
       *
       * @param tmpReq UpdateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskResponse
       */
      Models::UpdateTaskResponse updateTaskWithOptions(const Models::UpdateTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a task. The changes are synchronized to Data Studio, which creates a new saved version.
       *
       * @param request UpdateTaskRequest
       * @return UpdateTaskResponse
       */
      Models::UpdateTaskResponse updateTask(const Models::UpdateTaskRequest &request);

      /**
       * @summary Modifies properties configured for multiple instances at a time. The properties include the priority, resource group for scheduling, and data source.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq UpdateTaskInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskInstancesResponse
       */
      Models::UpdateTaskInstancesResponse updateTaskInstancesWithOptions(const Models::UpdateTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies properties configured for multiple instances at a time. The properties include the priority, resource group for scheduling, and data source.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request UpdateTaskInstancesRequest
       * @return UpdateTaskInstancesResponse
       */
      Models::UpdateTaskInstancesResponse updateTaskInstances(const Models::UpdateTaskInstancesRequest &request);

      /**
       * @param request UpdateUdfFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUdfFileResponse
       */
      Models::UpdateUdfFileResponse updateUdfFileWithOptions(const Models::UpdateUdfFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateUdfFileRequest
       * @return UpdateUdfFileResponse
       */
      Models::UpdateUdfFileResponse updateUdfFile(const Models::UpdateUdfFileRequest &request);

      /**
       * @summary Updates a specified workflow in full update mode.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param tmpReq UpdateWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflowWithOptions(const Models::UpdateWorkflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified workflow in full update mode.
       *
       * @description This API operation is available for all DataWorks editions.
       *
       * @param request UpdateWorkflowRequest
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflow(const Models::UpdateWorkflowRequest &request);

      /**
       * @summary Updates the basic information about a workflow in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @description >  You cannot use this API operation to create multiple workflows at a time. If you specify multiple workflows in the FlowSpec filed, only the first workflow is created. Other specified workflows and the nodes in the workflows are ignored. You can call the UpdateNode operation to update a node.
       *
       * @param request UpdateWorkflowDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowDefinitionResponse
       */
      Models::UpdateWorkflowDefinitionResponse updateWorkflowDefinitionWithOptions(const Models::UpdateWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about a workflow in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
       *
       * @description >  You cannot use this API operation to create multiple workflows at a time. If you specify multiple workflows in the FlowSpec filed, only the first workflow is created. Other specified workflows and the nodes in the workflows are ignored. You can call the UpdateNode operation to update a node.
       *
       * @param request UpdateWorkflowDefinitionRequest
       * @return UpdateWorkflowDefinitionResponse
       */
      Models::UpdateWorkflowDefinitionResponse updateWorkflowDefinition(const Models::UpdateWorkflowDefinitionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
