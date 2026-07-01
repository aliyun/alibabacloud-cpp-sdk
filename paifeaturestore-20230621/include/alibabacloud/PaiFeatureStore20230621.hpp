// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAIFEATURESTORE20230621_HPP_
#define ALIBABACLOUD_PAIFEATURESTORE20230621_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PaiFeatureStore20230621Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PaiFeatureStore20230621.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Tests connectivity to a data source.
       *
       * @param request CheckInstanceDatasourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceDatasourceResponse
       */
      Models::CheckInstanceDatasourceResponse checkInstanceDatasourceWithOptions(const string &InstanceId, const Models::CheckInstanceDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests connectivity to a data source.
       *
       * @param request CheckInstanceDatasourceRequest
       * @return CheckInstanceDatasourceResponse
       */
      Models::CheckInstanceDatasourceResponse checkInstanceDatasource(const string &InstanceId, const Models::CheckInstanceDatasourceRequest &request);

      /**
       * @summary Verify that the FG configuration is correct and meets all rules.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckModelFeatureFGFeatureResponse
       */
      Models::CheckModelFeatureFGFeatureResponse checkModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verify that the FG configuration is correct and meets all rules.
       *
       * @return CheckModelFeatureFGFeatureResponse
       */
      Models::CheckModelFeatureFGFeatureResponse checkModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary Registers a datasource in a FeatureStore instance. A datasource provides offline or online storage for a project.
       *
       * @param request CreateDatasourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasourceResponse
       */
      Models::CreateDatasourceResponse createDatasourceWithOptions(const string &InstanceId, const Models::CreateDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a datasource in a FeatureStore instance. A datasource provides offline or online storage for a project.
       *
       * @param request CreateDatasourceRequest
       * @return CreateDatasourceResponse
       */
      Models::CreateDatasourceResponse createDatasource(const string &InstanceId, const Models::CreateDatasourceRequest &request);

      /**
       * @summary Creates a feature entity. A feature entity defines a join key that links multiple feature views to it, enabling feature joining.
       *
       * @param request CreateFeatureEntityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFeatureEntityResponse
       */
      Models::CreateFeatureEntityResponse createFeatureEntityWithOptions(const string &InstanceId, const Models::CreateFeatureEntityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a feature entity. A feature entity defines a join key that links multiple feature views to it, enabling feature joining.
       *
       * @param request CreateFeatureEntityRequest
       * @return CreateFeatureEntityResponse
       */
      Models::CreateFeatureEntityResponse createFeatureEntity(const string &InstanceId, const Models::CreateFeatureEntityRequest &request);

      /**
       * @summary You can create three types of feature views: offline, real-time, and behavior sequence. Each feature view uses fields to define its structure and links to a feature entity.
       *
       * @param request CreateFeatureViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFeatureViewResponse
       */
      Models::CreateFeatureViewResponse createFeatureViewWithOptions(const string &InstanceId, const Models::CreateFeatureViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create three types of feature views: offline, real-time, and behavior sequence. Each feature view uses fields to define its structure and links to a feature entity.
       *
       * @param request CreateFeatureViewRequest
       * @return CreateFeatureViewResponse
       */
      Models::CreateFeatureViewResponse createFeatureView(const string &InstanceId, const Models::CreateFeatureViewRequest &request);

      /**
       * @summary Creates a FeatureStore instance. This operation is idempotent. If an instance is already running or initializing in the same account, this operation returns the existing instance ID.
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a FeatureStore instance. This operation is idempotent. If an instance is already running or initializing in the same account, this operation returns the existing instance ID.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates an LLM configuration that contains the call parameters and API key for an embedding model. During creation, the service validates the ApiKey and Model. For a DashScope model, the EmbeddingDimension must match one of the fixed, valid dimensions supported by the model.
       *
       * @param request CreateLLMConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLLMConfigResponse
       */
      Models::CreateLLMConfigResponse createLLMConfigWithOptions(const string &InstanceId, const Models::CreateLLMConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an LLM configuration that contains the call parameters and API key for an embedding model. During creation, the service validates the ApiKey and Model. For a DashScope model, the EmbeddingDimension must match one of the fixed, valid dimensions supported by the model.
       *
       * @param request CreateLLMConfigRequest
       * @return CreateLLMConfigResponse
       */
      Models::CreateLLMConfigResponse createLLMConfig(const string &InstanceId, const Models::CreateLLMConfigRequest &request);

      /**
       * @summary Creates a label table. A label table defines the schema for label data referenced by model features.
       *
       * @param request CreateLabelTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLabelTableResponse
       */
      Models::CreateLabelTableResponse createLabelTableWithOptions(const string &InstanceId, const Models::CreateLabelTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a label table. A label table defines the schema for label data referenced by model features.
       *
       * @param request CreateLabelTableRequest
       * @return CreateLabelTableResponse
       */
      Models::CreateLabelTableResponse createLabelTable(const string &InstanceId, const Models::CreateLabelTableRequest &request);

      /**
       * @summary Creates a model feature. A model feature associates a label table with a set of feature view fields to generate the training dataset table required for model training and to specify the feature set used for model inference.
       *
       * @param request CreateModelFeatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelFeatureResponse
       */
      Models::CreateModelFeatureResponse createModelFeatureWithOptions(const string &InstanceId, const Models::CreateModelFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model feature. A model feature associates a label table with a set of feature view fields to generate the training dataset table required for model training and to specify the feature set used for model inference.
       *
       * @param request CreateModelFeatureRequest
       * @return CreateModelFeatureResponse
       */
      Models::CreateModelFeatureResponse createModelFeature(const string &InstanceId, const Models::CreateModelFeatureRequest &request);

      /**
       * @summary Creates a FeatureStore project. A project is a container for feature entities, feature views, and model features.
       *
       * @param request CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const string &InstanceId, const Models::CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a FeatureStore project. A project is a container for feature entities, feature views, and model features.
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const string &InstanceId, const Models::CreateProjectRequest &request);

      /**
       * @summary Creates a service-linked role that authorizes the FeatureStore service to access other cloud resources of the user. Returns a conflict error if the role already exists.
       *
       * @param request CreateServiceIdentityRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceIdentityRoleResponse
       */
      Models::CreateServiceIdentityRoleResponse createServiceIdentityRoleWithOptions(const Models::CreateServiceIdentityRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role that authorizes the FeatureStore service to access other cloud resources of the user. Returns a conflict error if the role already exists.
       *
       * @param request CreateServiceIdentityRoleRequest
       * @return CreateServiceIdentityRoleResponse
       */
      Models::CreateServiceIdentityRoleResponse createServiceIdentityRole(const Models::CreateServiceIdentityRoleRequest &request);

      /**
       * @summary Deletes a datasource from a FeatureStore instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasourceResponse
       */
      Models::DeleteDatasourceResponse deleteDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a datasource from a FeatureStore instance.
       *
       * @return DeleteDatasourceResponse
       */
      Models::DeleteDatasourceResponse deleteDatasource(const string &InstanceId, const string &DatasourceId);

      /**
       * @summary Deletes a feature entity.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFeatureEntityResponse
       */
      Models::DeleteFeatureEntityResponse deleteFeatureEntityWithOptions(const string &InstanceId, const string &FeatureEntityId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a feature entity.
       *
       * @return DeleteFeatureEntityResponse
       */
      Models::DeleteFeatureEntityResponse deleteFeatureEntity(const string &InstanceId, const string &FeatureEntityId);

      /**
       * @summary Deletes a feature view. A feature view cannot be deleted if it is referenced by a model feature. To delete the feature view, you must first delete the associated model feature.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFeatureViewResponse
       */
      Models::DeleteFeatureViewResponse deleteFeatureViewWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a feature view. A feature view cannot be deleted if it is referenced by a model feature. To delete the feature view, you must first delete the associated model feature.
       *
       * @return DeleteFeatureViewResponse
       */
      Models::DeleteFeatureViewResponse deleteFeatureView(const string &InstanceId, const string &FeatureViewId);

      /**
       * @summary Deletes an LLM call configuration. You cannot delete a configuration referenced by a feature view. You must first delete the associated feature view.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLLMConfigResponse
       */
      Models::DeleteLLMConfigResponse deleteLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an LLM call configuration. You cannot delete a configuration referenced by a feature view. You must first delete the associated feature view.
       *
       * @return DeleteLLMConfigResponse
       */
      Models::DeleteLLMConfigResponse deleteLLMConfig(const string &InstanceId, const string &LLMConfigId);

      /**
       * @summary Deletes a label table. You cannot delete a label table that is referenced by a model feature. Delete the associated model feature first.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLabelTableResponse
       */
      Models::DeleteLabelTableResponse deleteLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a label table. You cannot delete a label table that is referenced by a model feature. Delete the associated model feature first.
       *
       * @return DeleteLabelTableResponse
       */
      Models::DeleteLabelTableResponse deleteLabelTable(const string &InstanceId, const string &LabelTableId);

      /**
       * @summary Deletes a model feature and its associated training set table.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelFeatureResponse
       */
      Models::DeleteModelFeatureResponse deleteModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model feature and its associated training set table.
       *
       * @return DeleteModelFeatureResponse
       */
      Models::DeleteModelFeatureResponse deleteModelFeature(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary Deletes a FeatureStore project.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a FeatureStore project.
       *
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const string &InstanceId, const string &ProjectId);

      /**
       * @summary Export a training set table for model features. Create an export task by configuring the Label table input, the data source partition for each feature view, and the training set output partition.
       *
       * @param request ExportModelFeatureTrainingSetTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportModelFeatureTrainingSetTableResponse
       */
      Models::ExportModelFeatureTrainingSetTableResponse exportModelFeatureTrainingSetTableWithOptions(const string &InstanceId, const string &ModelFeatureId, const Models::ExportModelFeatureTrainingSetTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export a training set table for model features. Create an export task by configuring the Label table input, the data source partition for each feature view, and the training set output partition.
       *
       * @param request ExportModelFeatureTrainingSetTableRequest
       * @return ExportModelFeatureTrainingSetTableResponse
       */
      Models::ExportModelFeatureTrainingSetTableResponse exportModelFeatureTrainingSetTable(const string &InstanceId, const string &ModelFeatureId, const Models::ExportModelFeatureTrainingSetTableRequest &request);

      /**
       * @summary Gets the detailed information about a data source, including its type, connection information, and configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasourceResponse
       */
      Models::GetDatasourceResponse getDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the detailed information about a data source, including its type, connection information, and configuration.
       *
       * @return GetDatasourceResponse
       */
      Models::GetDatasourceResponse getDatasource(const string &InstanceId, const string &DatasourceId);

      /**
       * @summary Gets the field information for a specified table in a data source. This operation supports only MaxCompute data sources.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasourceTableResponse
       */
      Models::GetDatasourceTableResponse getDatasourceTableWithOptions(const string &InstanceId, const string &DatasourceId, const string &TableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the field information for a specified table in a data source. This operation supports only MaxCompute data sources.
       *
       * @return GetDatasourceTableResponse
       */
      Models::GetDatasourceTableResponse getDatasourceTable(const string &InstanceId, const string &DatasourceId, const string &TableName);

      /**
       * @summary Retrieves the details of a feature entity.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureEntityResponse
       */
      Models::GetFeatureEntityResponse getFeatureEntityWithOptions(const string &InstanceId, const string &FeatureEntityId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a feature entity.
       *
       * @return GetFeatureEntityResponse
       */
      Models::GetFeatureEntityResponse getFeatureEntity(const string &InstanceId, const string &FeatureEntityId);

      /**
       * @summary Gets the details of a feature view, including its field definitions, data source binding, and synchronization status.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureViewResponse
       */
      Models::GetFeatureViewResponse getFeatureViewWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a feature view, including its field definitions, data source binding, and synchronization status.
       *
       * @return GetFeatureViewResponse
       */
      Models::GetFeatureViewResponse getFeatureView(const string &InstanceId, const string &FeatureViewId);

      /**
       * @summary Retrieves the details of a FeatureStore instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a FeatureStore instance.
       *
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &InstanceId);

      /**
       * @summary Retrieves the details of an LLM call configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLLMConfigResponse
       */
      Models::GetLLMConfigResponse getLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const string &RegionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an LLM call configuration.
       *
       * @return GetLLMConfigResponse
       */
      Models::GetLLMConfigResponse getLLMConfig(const string &InstanceId, const string &LLMConfigId, const string &RegionId);

      /**
       * @summary Retrieves the details of a label table, including its field definitions and related models.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLabelTableResponse
       */
      Models::GetLabelTableResponse getLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a label table, including its field definitions and related models.
       *
       * @return GetLabelTableResponse
       */
      Models::GetLabelTableResponse getLabelTable(const string &InstanceId, const string &LabelTableId);

      /**
       * @summary Gets detailed information about a model feature, including the selected feature list, lineage relations, and training set export script.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelFeatureResponse
       */
      Models::GetModelFeatureResponse getModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets detailed information about a model feature, including the selected feature list, lineage relations, and training set export script.
       *
       * @return GetModelFeatureResponse
       */
      Models::GetModelFeatureResponse getModelFeature(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary Retrieves the Feature Generation (FG) feature configuration of a model feature.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelFeatureFGFeatureResponse
       */
      Models::GetModelFeatureFGFeatureResponse getModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Feature Generation (FG) feature configuration of a model feature.
       *
       * @return GetModelFeatureFGFeatureResponse
       */
      Models::GetModelFeatureFGFeatureResponse getModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary Retrieves the fg.json file configuration for a model feature.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelFeatureFGInfoResponse
       */
      Models::GetModelFeatureFGInfoResponse getModelFeatureFGInfoWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the fg.json file configuration for a model feature.
       *
       * @return GetModelFeatureFGInfoResponse
       */
      Models::GetModelFeatureFGInfoResponse getModelFeatureFGInfo(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary Gets the details of a project, including its data source bindings and resource counts.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a project, including its data source bindings and resource counts.
       *
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const string &InstanceId, const string &ProjectId);

      /**
       * @summary Retrieve details of a feature entity in a project by name.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectFeatureEntityResponse
       */
      Models::GetProjectFeatureEntityResponse getProjectFeatureEntityWithOptions(const string &InstanceId, const string &ProjectId, const string &FeatureEntityName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve details of a feature entity in a project by name.
       *
       * @return GetProjectFeatureEntityResponse
       */
      Models::GetProjectFeatureEntityResponse getProjectFeatureEntity(const string &InstanceId, const string &ProjectId, const string &FeatureEntityName);

      /**
       * @summary Queries the details of a service-linked role and verifies whether the role exists and is available.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceIdentityRoleResponse
       */
      Models::GetServiceIdentityRoleResponse getServiceIdentityRoleWithOptions(const string &RoleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a service-linked role and verifies whether the role exists and is available.
       *
       * @return GetServiceIdentityRoleResponse
       */
      Models::GetServiceIdentityRoleResponse getServiceIdentityRole(const string &RoleName);

      /**
       * @summary Gets the details of an asynchronous task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const string &InstanceId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of an asynchronous task.
       *
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const string &InstanceId, const string &TaskId);

      /**
       * @summary Retrieve all feature view information from the data source.
       *
       * @param request ListDatasourceFeatureViewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasourceFeatureViewsResponse
       */
      Models::ListDatasourceFeatureViewsResponse listDatasourceFeatureViewsWithOptions(const string &InstanceId, const string &DatasourceId, const Models::ListDatasourceFeatureViewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve all feature view information from the data source.
       *
       * @param request ListDatasourceFeatureViewsRequest
       * @return ListDatasourceFeatureViewsResponse
       */
      Models::ListDatasourceFeatureViewsResponse listDatasourceFeatureViews(const string &InstanceId, const string &DatasourceId, const Models::ListDatasourceFeatureViewsRequest &request);

      /**
       * @summary Lists the tables in a datasource. This operation supports only MaxCompute datasources.
       *
       * @param request ListDatasourceTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasourceTablesResponse
       */
      Models::ListDatasourceTablesResponse listDatasourceTablesWithOptions(const string &InstanceId, const string &DatasourceId, const Models::ListDatasourceTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the tables in a datasource. This operation supports only MaxCompute datasources.
       *
       * @param request ListDatasourceTablesRequest
       * @return ListDatasourceTablesResponse
       */
      Models::ListDatasourceTablesResponse listDatasourceTables(const string &InstanceId, const string &DatasourceId, const Models::ListDatasourceTablesRequest &request);

      /**
       * @summary Lists the data sources in a FeatureStore instance. You can filter the results by workspace, type, and name.
       *
       * @param request ListDatasourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasourcesResponse
       */
      Models::ListDatasourcesResponse listDatasourcesWithOptions(const string &InstanceId, const Models::ListDatasourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the data sources in a FeatureStore instance. You can filter the results by workspace, type, and name.
       *
       * @param request ListDatasourcesRequest
       * @return ListDatasourcesResponse
       */
      Models::ListDatasourcesResponse listDatasources(const string &InstanceId, const Models::ListDatasourcesRequest &request);

      /**
       * @summary Lists the feature entities in a FeatureStore instance. You can filter the results by project, name, owner, and parent feature entity.
       *
       * @param tmpReq ListFeatureEntitiesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureEntitiesResponse
       */
      Models::ListFeatureEntitiesResponse listFeatureEntitiesWithOptions(const string &InstanceId, const Models::ListFeatureEntitiesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the feature entities in a FeatureStore instance. You can filter the results by project, name, owner, and parent feature entity.
       *
       * @param request ListFeatureEntitiesRequest
       * @return ListFeatureEntitiesResponse
       */
      Models::ListFeatureEntitiesResponse listFeatureEntities(const string &InstanceId, const Models::ListFeatureEntitiesRequest &request);

      /**
       * @summary Retrieves the relationships for a specific field in a feature view, returning a list of models that reference the field and the names of the associated online and offline tables.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureViewFieldRelationshipsResponse
       */
      Models::ListFeatureViewFieldRelationshipsResponse listFeatureViewFieldRelationshipsWithOptions(const string &InstanceId, const string &FeatureViewId, const string &FieldName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the relationships for a specific field in a feature view, returning a list of models that reference the field and the names of the associated online and offline tables.
       *
       * @return ListFeatureViewFieldRelationshipsResponse
       */
      Models::ListFeatureViewFieldRelationshipsResponse listFeatureViewFieldRelationships(const string &InstanceId, const string &FeatureViewId, const string &FieldName);

      /**
       * @summary Retrieves online features from a feature view based on one or more join IDs. For each join ID provided, the operation returns the corresponding feature fields as key-value pairs.
       *
       * @param tmpReq ListFeatureViewOnlineFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureViewOnlineFeaturesResponse
       */
      Models::ListFeatureViewOnlineFeaturesResponse listFeatureViewOnlineFeaturesWithOptions(const string &InstanceId, const string &FeatureViewId, const Models::ListFeatureViewOnlineFeaturesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves online features from a feature view based on one or more join IDs. For each join ID provided, the operation returns the corresponding feature fields as key-value pairs.
       *
       * @param request ListFeatureViewOnlineFeaturesRequest
       * @return ListFeatureViewOnlineFeaturesResponse
       */
      Models::ListFeatureViewOnlineFeaturesResponse listFeatureViewOnlineFeatures(const string &InstanceId, const string &FeatureViewId, const Models::ListFeatureViewOnlineFeaturesRequest &request);

      /**
       * @summary Lists the relationships for a feature view, including the models that reference it.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureViewRelationshipsResponse
       */
      Models::ListFeatureViewRelationshipsResponse listFeatureViewRelationshipsWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the relationships for a feature view, including the models that reference it.
       *
       * @return ListFeatureViewRelationshipsResponse
       */
      Models::ListFeatureViewRelationshipsResponse listFeatureViewRelationships(const string &InstanceId, const string &FeatureViewId);

      /**
       * @summary Lists feature views, filterable by project, name, type, tag, and feature name.
       *
       * @param tmpReq ListFeatureViewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureViewsResponse
       */
      Models::ListFeatureViewsResponse listFeatureViewsWithOptions(const string &InstanceId, const Models::ListFeatureViewsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists feature views, filterable by project, name, type, tag, and feature name.
       *
       * @param request ListFeatureViewsRequest
       * @return ListFeatureViewsResponse
       */
      Models::ListFeatureViewsResponse listFeatureViews(const string &InstanceId, const Models::ListFeatureViewsRequest &request);

      /**
       * @summary Lists FeatureStore instances in the current account. You can filter the instances by status.
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists FeatureStore instances in the current account. You can filter the instances by status.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Lists LLM call configurations.
       *
       * @param request ListLLMConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLLMConfigsResponse
       */
      Models::ListLLMConfigsResponse listLLMConfigsWithOptions(const string &InstanceId, const Models::ListLLMConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists LLM call configurations.
       *
       * @param request ListLLMConfigsRequest
       * @return ListLLMConfigsResponse
       */
      Models::ListLLMConfigsResponse listLLMConfigs(const string &InstanceId, const Models::ListLLMConfigsRequest &request);

      /**
       * @summary Lists label tables, filterable by project, name, owner, and ID.
       *
       * @param tmpReq ListLabelTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLabelTablesResponse
       */
      Models::ListLabelTablesResponse listLabelTablesWithOptions(const string &InstanceId, const Models::ListLabelTablesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists label tables, filterable by project, name, owner, and ID.
       *
       * @param request ListLabelTablesRequest
       * @return ListLabelTablesResponse
       */
      Models::ListLabelTablesResponse listLabelTables(const string &InstanceId, const Models::ListLabelTablesRequest &request);

      /**
       * @summary Lists the available features for a model feature when you register a feature group (FG).
       *
       * @param request ListModelFeatureAvailableFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelFeatureAvailableFeaturesResponse
       */
      Models::ListModelFeatureAvailableFeaturesResponse listModelFeatureAvailableFeaturesWithOptions(const string &InstanceId, const string &ModelFeatureId, const Models::ListModelFeatureAvailableFeaturesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available features for a model feature when you register a feature group (FG).
       *
       * @param request ListModelFeatureAvailableFeaturesRequest
       * @return ListModelFeatureAvailableFeaturesResponse
       */
      Models::ListModelFeatureAvailableFeaturesResponse listModelFeatureAvailableFeatures(const string &InstanceId, const string &ModelFeatureId, const Models::ListModelFeatureAvailableFeaturesRequest &request);

      /**
       * @summary Lists model features, with sorting, pagination, and filtering by project, name, creator, and ID.
       *
       * @param tmpReq ListModelFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelFeaturesResponse
       */
      Models::ListModelFeaturesResponse listModelFeaturesWithOptions(const string &InstanceId, const Models::ListModelFeaturesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists model features, with sorting, pagination, and filtering by project, name, creator, and ID.
       *
       * @param request ListModelFeaturesRequest
       * @return ListModelFeaturesResponse
       */
      Models::ListModelFeaturesResponse listModelFeatures(const string &InstanceId, const Models::ListModelFeaturesRequest &request);

      /**
       * @summary Lists all feature views and their available features in a project. Use this operation to select feature views and features for the CreateModelFeature and UpdateModelFeature operations.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectFeatureViewsResponse
       */
      Models::ListProjectFeatureViewsResponse listProjectFeatureViewsWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all feature views and their available features in a project. Use this operation to select feature views and features for the CreateModelFeature and UpdateModelFeature operations.
       *
       * @return ListProjectFeatureViewsResponse
       */
      Models::ListProjectFeatureViewsResponse listProjectFeatureViews(const string &InstanceId, const string &ProjectId);

      /**
       * @summary Lists all features in a project. This operation supports filtering by name, alias, and feature view, as well as sorting and pagination. The response includes the data type, parent feature view, and the number of model features that reference each feature.
       *
       * @param request ListProjectFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectFeaturesResponse
       */
      Models::ListProjectFeaturesResponse listProjectFeaturesWithOptions(const string &InstanceId, const string &ProjectId, const Models::ListProjectFeaturesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all features in a project. This operation supports filtering by name, alias, and feature view, as well as sorting and pagination. The response includes the data type, parent feature view, and the number of model features that reference each feature.
       *
       * @param request ListProjectFeaturesRequest
       * @return ListProjectFeaturesResponse
       */
      Models::ListProjectFeaturesResponse listProjectFeatures(const string &InstanceId, const string &ProjectId, const Models::ListProjectFeaturesRequest &request);

      /**
       * @summary Lists projects in a Feature Store instance, filterable by name, workspace, and owner.
       *
       * @param tmpReq ListProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const string &InstanceId, const Models::ListProjectsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists projects in a Feature Store instance, filterable by name, workspace, and owner.
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const string &InstanceId, const Models::ListProjectsRequest &request);

      /**
       * @summary Lists the execution logs of an asynchronous task. This operation supports pagination.
       *
       * @param request ListTaskLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskLogsResponse
       */
      Models::ListTaskLogsResponse listTaskLogsWithOptions(const string &InstanceId, const string &TaskId, const Models::ListTaskLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the execution logs of an asynchronous task. This operation supports pagination.
       *
       * @param request ListTaskLogsRequest
       * @return ListTaskLogsResponse
       */
      Models::ListTaskLogsResponse listTaskLogs(const string &InstanceId, const string &TaskId, const Models::ListTaskLogsRequest &request);

      /**
       * @summary Lists asynchronous tasks for an instance, supporting pagination and filtering by project, object type, and status.
       *
       * @param tmpReq ListTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const string &InstanceId, const Models::ListTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists asynchronous tasks for an instance, supporting pagination and filtering by project, object type, and status.
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const string &InstanceId, const Models::ListTasksRequest &request);

      /**
       * @summary Creates a data synchronization task to synchronize data from a feature view\\"s offline table to its online store.
       *
       * @param request PublishFeatureViewTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishFeatureViewTableResponse
       */
      Models::PublishFeatureViewTableResponse publishFeatureViewTableWithOptions(const string &InstanceId, const string &FeatureViewId, const Models::PublishFeatureViewTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data synchronization task to synchronize data from a feature view\\"s offline table to its online store.
       *
       * @param request PublishFeatureViewTableRequest
       * @return PublishFeatureViewTableResponse
       */
      Models::PublishFeatureViewTableResponse publishFeatureViewTable(const string &InstanceId, const string &FeatureViewId, const Models::PublishFeatureViewTableRequest &request);

      /**
       * @summary Stops an asynchronous task. You can only stop tasks in the Initializing or Running state.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTaskWithOptions(const string &InstanceId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an asynchronous task. You can only stop tasks in the Initializing or Running state.
       *
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTask(const string &InstanceId, const string &TaskId);

      /**
       * @summary Updates information for a data source. Its type and workspace cannot be changed.
       *
       * @param request UpdateDatasourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasourceResponse
       */
      Models::UpdateDatasourceResponse updateDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const Models::UpdateDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information for a data source. Its type and workspace cannot be changed.
       *
       * @param request UpdateDatasourceRequest
       * @return UpdateDatasourceResponse
       */
      Models::UpdateDatasourceResponse updateDatasource(const string &InstanceId, const string &DatasourceId, const Models::UpdateDatasourceRequest &request);

      /**
       * @summary Updates a feature view.
       *
       * @param request UpdateFeatureViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFeatureViewResponse
       */
      Models::UpdateFeatureViewResponse updateFeatureViewWithOptions(const string &InstanceId, const string &FeatureViewId, const Models::UpdateFeatureViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a feature view.
       *
       * @param request UpdateFeatureViewRequest
       * @return UpdateFeatureViewResponse
       */
      Models::UpdateFeatureViewResponse updateFeatureView(const string &InstanceId, const string &FeatureViewId, const Models::UpdateFeatureViewRequest &request);

      /**
       * @summary Updates the large language model (LLM) call configuration. If you do not specify the `ApiKey` parameter, the existing key is retained. After the update, the system revalidates the model\\"s availability and its parameters.
       *
       * @param request UpdateLLMConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLLMConfigResponse
       */
      Models::UpdateLLMConfigResponse updateLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const Models::UpdateLLMConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the large language model (LLM) call configuration. If you do not specify the `ApiKey` parameter, the existing key is retained. After the update, the system revalidates the model\\"s availability and its parameters.
       *
       * @param request UpdateLLMConfigRequest
       * @return UpdateLLMConfigResponse
       */
      Models::UpdateLLMConfigResponse updateLLMConfig(const string &InstanceId, const string &LLMConfigId, const Models::UpdateLLMConfigRequest &request);

      /**
       * @summary Updates the attributes of fields in a label table. You can modify the attributes of existing fields, but you cannot add or delete fields, or change field names and types.
       *
       * @param request UpdateLabelTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLabelTableResponse
       */
      Models::UpdateLabelTableResponse updateLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const Models::UpdateLabelTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of fields in a label table. You can modify the attributes of existing fields, but you cannot add or delete fields, or change field names and types.
       *
       * @param request UpdateLabelTableRequest
       * @return UpdateLabelTableResponse
       */
      Models::UpdateLabelTableResponse updateLabelTable(const string &InstanceId, const string &LabelTableId, const Models::UpdateLabelTableRequest &request);

      /**
       * @summary Updates the information of a model feature, including the associated label table, selected feature fields, and conflict priority policy. The update performs a full replacement. The specified Features overwrite the existing values.
       *
       * @param request UpdateModelFeatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelFeatureResponse
       */
      Models::UpdateModelFeatureResponse updateModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const Models::UpdateModelFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a model feature, including the associated label table, selected feature fields, and conflict priority policy. The update performs a full replacement. The specified Features overwrite the existing values.
       *
       * @param request UpdateModelFeatureRequest
       * @return UpdateModelFeatureResponse
       */
      Models::UpdateModelFeatureResponse updateModelFeature(const string &InstanceId, const string &ModelFeatureId, const Models::UpdateModelFeatureRequest &request);

      /**
       * @summary Update the FG feature configuration for a model feature.
       *
       * @param request UpdateModelFeatureFGFeatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelFeatureFGFeatureResponse
       */
      Models::UpdateModelFeatureFGFeatureResponse updateModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const Models::UpdateModelFeatureFGFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the FG feature configuration for a model feature.
       *
       * @param request UpdateModelFeatureFGFeatureRequest
       * @return UpdateModelFeatureFGFeatureResponse
       */
      Models::UpdateModelFeatureFGFeatureResponse updateModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId, const Models::UpdateModelFeatureFGFeatureRequest &request);

      /**
       * @summary Updates the description of a project.
       *
       * @param request UpdateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const string &InstanceId, const string &ProjectId, const Models::UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a project.
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const string &InstanceId, const string &ProjectId, const Models::UpdateProjectRequest &request);

      /**
       * @summary Imports data from a URL to the offline table of a feature view. This is an asynchronous operation.
       *
       * @param request WriteFeatureViewTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return WriteFeatureViewTableResponse
       */
      Models::WriteFeatureViewTableResponse writeFeatureViewTableWithOptions(const string &InstanceId, const string &FeatureViewId, const Models::WriteFeatureViewTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports data from a URL to the offline table of a feature view. This is an asynchronous operation.
       *
       * @param request WriteFeatureViewTableRequest
       * @return WriteFeatureViewTableResponse
       */
      Models::WriteFeatureViewTableResponse writeFeatureViewTable(const string &InstanceId, const string &FeatureViewId, const Models::WriteFeatureViewTableRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
