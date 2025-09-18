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
       * @summary 检测资源连接状态。
       *
       * @param request CheckInstanceDatasourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceDatasourceResponse
       */
      Models::CheckInstanceDatasourceResponse checkInstanceDatasourceWithOptions(const string &InstanceId, const Models::CheckInstanceDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检测资源连接状态。
       *
       * @param request CheckInstanceDatasourceRequest
       * @return CheckInstanceDatasourceResponse
       */
      Models::CheckInstanceDatasourceResponse checkInstanceDatasource(const string &InstanceId, const Models::CheckInstanceDatasourceRequest &request);

      /**
       * @summary 检查FG配置内容是否正确，是否满足所有规则。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckModelFeatureFGFeatureResponse
       */
      Models::CheckModelFeatureFGFeatureResponse checkModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查FG配置内容是否正确，是否满足所有规则。
       *
       * @return CheckModelFeatureFGFeatureResponse
       */
      Models::CheckModelFeatureFGFeatureResponse checkModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary 创建数据源。
       *
       * @param request CreateDatasourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasourceResponse
       */
      Models::CreateDatasourceResponse createDatasourceWithOptions(const string &InstanceId, const Models::CreateDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据源。
       *
       * @param request CreateDatasourceRequest
       * @return CreateDatasourceResponse
       */
      Models::CreateDatasourceResponse createDatasource(const string &InstanceId, const Models::CreateDatasourceRequest &request);

      /**
       * @summary 创建特征实体
       *
       * @param request CreateFeatureEntityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFeatureEntityResponse
       */
      Models::CreateFeatureEntityResponse createFeatureEntityWithOptions(const string &InstanceId, const Models::CreateFeatureEntityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建特征实体
       *
       * @param request CreateFeatureEntityRequest
       * @return CreateFeatureEntityResponse
       */
      Models::CreateFeatureEntityResponse createFeatureEntity(const string &InstanceId, const Models::CreateFeatureEntityRequest &request);

      /**
       * @summary 创建特征视图。
       *
       * @param request CreateFeatureViewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFeatureViewResponse
       */
      Models::CreateFeatureViewResponse createFeatureViewWithOptions(const string &InstanceId, const Models::CreateFeatureViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建特征视图。
       *
       * @param request CreateFeatureViewRequest
       * @return CreateFeatureViewResponse
       */
      Models::CreateFeatureViewResponse createFeatureView(const string &InstanceId, const Models::CreateFeatureViewRequest &request);

      /**
       * @summary 创建Feature Store实例。
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Feature Store实例。
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建大模型调用信息配置
       *
       * @param request CreateLLMConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLLMConfigResponse
       */
      Models::CreateLLMConfigResponse createLLMConfigWithOptions(const string &InstanceId, const Models::CreateLLMConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建大模型调用信息配置
       *
       * @param request CreateLLMConfigRequest
       * @return CreateLLMConfigResponse
       */
      Models::CreateLLMConfigResponse createLLMConfig(const string &InstanceId, const Models::CreateLLMConfigRequest &request);

      /**
       * @summary 创建label表
       *
       * @param request CreateLabelTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLabelTableResponse
       */
      Models::CreateLabelTableResponse createLabelTableWithOptions(const string &InstanceId, const Models::CreateLabelTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建label表
       *
       * @param request CreateLabelTableRequest
       * @return CreateLabelTableResponse
       */
      Models::CreateLabelTableResponse createLabelTable(const string &InstanceId, const Models::CreateLabelTableRequest &request);

      /**
       * @summary 创建模型特征。
       *
       * @param request CreateModelFeatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelFeatureResponse
       */
      Models::CreateModelFeatureResponse createModelFeatureWithOptions(const string &InstanceId, const Models::CreateModelFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型特征。
       *
       * @param request CreateModelFeatureRequest
       * @return CreateModelFeatureResponse
       */
      Models::CreateModelFeatureResponse createModelFeature(const string &InstanceId, const Models::CreateModelFeatureRequest &request);

      /**
       * @summary 创建FeatureStore项目
       *
       * @param request CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const string &InstanceId, const Models::CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建FeatureStore项目
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const string &InstanceId, const Models::CreateProjectRequest &request);

      /**
       * @summary 创建feature store服务账户角色
       *
       * @param request CreateServiceIdentityRoleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceIdentityRoleResponse
       */
      Models::CreateServiceIdentityRoleResponse createServiceIdentityRoleWithOptions(const Models::CreateServiceIdentityRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建feature store服务账户角色
       *
       * @param request CreateServiceIdentityRoleRequest
       * @return CreateServiceIdentityRoleResponse
       */
      Models::CreateServiceIdentityRoleResponse createServiceIdentityRole(const Models::CreateServiceIdentityRoleRequest &request);

      /**
       * @summary 删除指定数据源。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasourceResponse
       */
      Models::DeleteDatasourceResponse deleteDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定数据源。
       *
       * @return DeleteDatasourceResponse
       */
      Models::DeleteDatasourceResponse deleteDatasource(const string &InstanceId, const string &DatasourceId);

      /**
       * @summary 删除指定特征实体
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFeatureEntityResponse
       */
      Models::DeleteFeatureEntityResponse deleteFeatureEntityWithOptions(const string &InstanceId, const string &FeatureEntityId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定特征实体
       *
       * @return DeleteFeatureEntityResponse
       */
      Models::DeleteFeatureEntityResponse deleteFeatureEntity(const string &InstanceId, const string &FeatureEntityId);

      /**
       * @summary 删除指定特征视图。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFeatureViewResponse
       */
      Models::DeleteFeatureViewResponse deleteFeatureViewWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定特征视图。
       *
       * @return DeleteFeatureViewResponse
       */
      Models::DeleteFeatureViewResponse deleteFeatureView(const string &InstanceId, const string &FeatureViewId);

      /**
       * @summary 删除大模型调用信息配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLLMConfigResponse
       */
      Models::DeleteLLMConfigResponse deleteLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除大模型调用信息配置
       *
       * @return DeleteLLMConfigResponse
       */
      Models::DeleteLLMConfigResponse deleteLLMConfig(const string &InstanceId, const string &LLMConfigId);

      /**
       * @summary 删除label表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLabelTableResponse
       */
      Models::DeleteLabelTableResponse deleteLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除label表
       *
       * @return DeleteLabelTableResponse
       */
      Models::DeleteLabelTableResponse deleteLabelTable(const string &InstanceId, const string &LabelTableId);

      /**
       * @summary 删除指定模型特征。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelFeatureResponse
       */
      Models::DeleteModelFeatureResponse deleteModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定模型特征。
       *
       * @return DeleteModelFeatureResponse
       */
      Models::DeleteModelFeatureResponse deleteModelFeature(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary 删除指定Feature Store项目。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProjectWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定Feature Store项目。
       *
       * @return DeleteProjectResponse
       */
      Models::DeleteProjectResponse deleteProject(const string &InstanceId, const string &ProjectId);

      /**
       * @summary 导出训练集表。
       *
       * @param request ExportModelFeatureTrainingSetTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportModelFeatureTrainingSetTableResponse
       */
      Models::ExportModelFeatureTrainingSetTableResponse exportModelFeatureTrainingSetTableWithOptions(const string &InstanceId, const string &ModelFeatureId, const Models::ExportModelFeatureTrainingSetTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出训练集表。
       *
       * @param request ExportModelFeatureTrainingSetTableRequest
       * @return ExportModelFeatureTrainingSetTableResponse
       */
      Models::ExportModelFeatureTrainingSetTableResponse exportModelFeatureTrainingSetTable(const string &InstanceId, const string &ModelFeatureId, const Models::ExportModelFeatureTrainingSetTableRequest &request);

      /**
       * @summary 获取数据源详细信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasourceResponse
       */
      Models::GetDatasourceResponse getDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源详细信息。
       *
       * @return GetDatasourceResponse
       */
      Models::GetDatasourceResponse getDatasource(const string &InstanceId, const string &DatasourceId);

      /**
       * @summary 获取数据源下指定表的详细信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasourceTableResponse
       */
      Models::GetDatasourceTableResponse getDatasourceTableWithOptions(const string &InstanceId, const string &DatasourceId, const string &TableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源下指定表的详细信息。
       *
       * @return GetDatasourceTableResponse
       */
      Models::GetDatasourceTableResponse getDatasourceTable(const string &InstanceId, const string &DatasourceId, const string &TableName);

      /**
       * @summary 获取特征实体详细信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureEntityResponse
       */
      Models::GetFeatureEntityResponse getFeatureEntityWithOptions(const string &InstanceId, const string &FeatureEntityId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征实体详细信息
       *
       * @return GetFeatureEntityResponse
       */
      Models::GetFeatureEntityResponse getFeatureEntity(const string &InstanceId, const string &FeatureEntityId);

      /**
       * @summary 获取特征视图详细信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureViewResponse
       */
      Models::GetFeatureViewResponse getFeatureViewWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征视图详细信息。
       *
       * @return GetFeatureViewResponse
       */
      Models::GetFeatureViewResponse getFeatureView(const string &InstanceId, const string &FeatureViewId);

      /**
       * @summary 获取实例详细信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详细信息
       *
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &InstanceId);

      /**
       * @summary 获取 LLMConfig 信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLLMConfigResponse
       */
      Models::GetLLMConfigResponse getLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const string &RegionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 LLMConfig 信息
       *
       * @return GetLLMConfigResponse
       */
      Models::GetLLMConfigResponse getLLMConfig(const string &InstanceId, const string &LLMConfigId, const string &RegionId);

      /**
       * @summary 获取Label表详细信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLabelTableResponse
       */
      Models::GetLabelTableResponse getLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Label表详细信息。
       *
       * @return GetLabelTableResponse
       */
      Models::GetLabelTableResponse getLabelTable(const string &InstanceId, const string &LabelTableId);

      /**
       * @summary 获取模型特征详情。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelFeatureResponse
       */
      Models::GetModelFeatureResponse getModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模型特征详情。
       *
       * @return GetModelFeatureResponse
       */
      Models::GetModelFeatureResponse getModelFeature(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary 获取模型特征的FG特征配置信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelFeatureFGFeatureResponse
       */
      Models::GetModelFeatureFGFeatureResponse getModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模型特征的FG特征配置信息。
       *
       * @return GetModelFeatureFGFeatureResponse
       */
      Models::GetModelFeatureFGFeatureResponse getModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary 获取模型特征的fg.json文件配置信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelFeatureFGInfoResponse
       */
      Models::GetModelFeatureFGInfoResponse getModelFeatureFGInfoWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模型特征的fg.json文件配置信息。
       *
       * @return GetModelFeatureFGInfoResponse
       */
      Models::GetModelFeatureFGInfoResponse getModelFeatureFGInfo(const string &InstanceId, const string &ModelFeatureId);

      /**
       * @summary 获取指定Feature Store项目详细信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProjectWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定Feature Store项目详细信息。
       *
       * @return GetProjectResponse
       */
      Models::GetProjectResponse getProject(const string &InstanceId, const string &ProjectId);

      /**
       * @summary 获取项目下特征实体详细信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectFeatureEntityResponse
       */
      Models::GetProjectFeatureEntityResponse getProjectFeatureEntityWithOptions(const string &InstanceId, const string &ProjectId, const string &FeatureEntityName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目下特征实体详细信息
       *
       * @return GetProjectFeatureEntityResponse
       */
      Models::GetProjectFeatureEntityResponse getProjectFeatureEntity(const string &InstanceId, const string &ProjectId, const string &FeatureEntityName);

      /**
       * @summary 获取feature store服务账户角色。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceIdentityRoleResponse
       */
      Models::GetServiceIdentityRoleResponse getServiceIdentityRoleWithOptions(const string &RoleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取feature store服务账户角色。
       *
       * @return GetServiceIdentityRoleResponse
       */
      Models::GetServiceIdentityRoleResponse getServiceIdentityRole(const string &RoleName);

      /**
       * @summary 获取任务详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const string &InstanceId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务详情
       *
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const string &InstanceId, const string &TaskId);

      /**
       * @summary 获取数据源下所有特征视图信息。
       *
       * @param request ListDatasourceFeatureViewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasourceFeatureViewsResponse
       */
      Models::ListDatasourceFeatureViewsResponse listDatasourceFeatureViewsWithOptions(const string &InstanceId, const string &DatasourceId, const Models::ListDatasourceFeatureViewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源下所有特征视图信息。
       *
       * @param request ListDatasourceFeatureViewsRequest
       * @return ListDatasourceFeatureViewsResponse
       */
      Models::ListDatasourceFeatureViewsResponse listDatasourceFeatureViews(const string &InstanceId, const string &DatasourceId, const Models::ListDatasourceFeatureViewsRequest &request);

      /**
       * @summary 获取数据源下所有表。
       *
       * @param request ListDatasourceTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasourceTablesResponse
       */
      Models::ListDatasourceTablesResponse listDatasourceTablesWithOptions(const string &InstanceId, const string &DatasourceId, const Models::ListDatasourceTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源下所有表。
       *
       * @param request ListDatasourceTablesRequest
       * @return ListDatasourceTablesResponse
       */
      Models::ListDatasourceTablesResponse listDatasourceTables(const string &InstanceId, const string &DatasourceId, const Models::ListDatasourceTablesRequest &request);

      /**
       * @summary 获取数据源列表。
       *
       * @param request ListDatasourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasourcesResponse
       */
      Models::ListDatasourcesResponse listDatasourcesWithOptions(const string &InstanceId, const Models::ListDatasourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源列表。
       *
       * @param request ListDatasourcesRequest
       * @return ListDatasourcesResponse
       */
      Models::ListDatasourcesResponse listDatasources(const string &InstanceId, const Models::ListDatasourcesRequest &request);

      /**
       * @summary 创建特征实体列表
       *
       * @param tmpReq ListFeatureEntitiesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureEntitiesResponse
       */
      Models::ListFeatureEntitiesResponse listFeatureEntitiesWithOptions(const string &InstanceId, const Models::ListFeatureEntitiesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建特征实体列表
       *
       * @param request ListFeatureEntitiesRequest
       * @return ListFeatureEntitiesResponse
       */
      Models::ListFeatureEntitiesResponse listFeatureEntities(const string &InstanceId, const Models::ListFeatureEntitiesRequest &request);

      /**
       * @summary 获取特征字段血缘关系。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureViewFieldRelationshipsResponse
       */
      Models::ListFeatureViewFieldRelationshipsResponse listFeatureViewFieldRelationshipsWithOptions(const string &InstanceId, const string &FeatureViewId, const string &FieldName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征字段血缘关系。
       *
       * @return ListFeatureViewFieldRelationshipsResponse
       */
      Models::ListFeatureViewFieldRelationshipsResponse listFeatureViewFieldRelationships(const string &InstanceId, const string &FeatureViewId, const string &FieldName);

      /**
       * @summary 获取特征视图下的在线特征数据。
       *
       * @param tmpReq ListFeatureViewOnlineFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureViewOnlineFeaturesResponse
       */
      Models::ListFeatureViewOnlineFeaturesResponse listFeatureViewOnlineFeaturesWithOptions(const string &InstanceId, const string &FeatureViewId, const Models::ListFeatureViewOnlineFeaturesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征视图下的在线特征数据。
       *
       * @param request ListFeatureViewOnlineFeaturesRequest
       * @return ListFeatureViewOnlineFeaturesResponse
       */
      Models::ListFeatureViewOnlineFeaturesResponse listFeatureViewOnlineFeatures(const string &InstanceId, const string &FeatureViewId, const Models::ListFeatureViewOnlineFeaturesRequest &request);

      /**
       * @summary 获取特征视图血缘关系。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureViewRelationshipsResponse
       */
      Models::ListFeatureViewRelationshipsResponse listFeatureViewRelationshipsWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征视图血缘关系。
       *
       * @return ListFeatureViewRelationshipsResponse
       */
      Models::ListFeatureViewRelationshipsResponse listFeatureViewRelationships(const string &InstanceId, const string &FeatureViewId);

      /**
       * @summary 获取特征视图列表。
       *
       * @param tmpReq ListFeatureViewsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureViewsResponse
       */
      Models::ListFeatureViewsResponse listFeatureViewsWithOptions(const string &InstanceId, const Models::ListFeatureViewsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征视图列表。
       *
       * @param request ListFeatureViewsRequest
       * @return ListFeatureViewsResponse
       */
      Models::ListFeatureViewsResponse listFeatureViews(const string &InstanceId, const Models::ListFeatureViewsRequest &request);

      /**
       * @summary 获取Feature Store实例列表。
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Feature Store实例列表。
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 获取大模型调用信息配置
       *
       * @param request ListLLMConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLLMConfigsResponse
       */
      Models::ListLLMConfigsResponse listLLMConfigsWithOptions(const string &InstanceId, const Models::ListLLMConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取大模型调用信息配置
       *
       * @param request ListLLMConfigsRequest
       * @return ListLLMConfigsResponse
       */
      Models::ListLLMConfigsResponse listLLMConfigs(const string &InstanceId, const Models::ListLLMConfigsRequest &request);

      /**
       * @summary 获取Label表列表。
       *
       * @param tmpReq ListLabelTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLabelTablesResponse
       */
      Models::ListLabelTablesResponse listLabelTablesWithOptions(const string &InstanceId, const Models::ListLabelTablesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Label表列表。
       *
       * @param request ListLabelTablesRequest
       * @return ListLabelTablesResponse
       */
      Models::ListLabelTablesResponse listLabelTables(const string &InstanceId, const Models::ListLabelTablesRequest &request);

      /**
       * @summary 获取注册FG特征时模型特征下可选的所有特征。
       *
       * @param request ListModelFeatureAvailableFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelFeatureAvailableFeaturesResponse
       */
      Models::ListModelFeatureAvailableFeaturesResponse listModelFeatureAvailableFeaturesWithOptions(const string &InstanceId, const string &ModelFeatureId, const Models::ListModelFeatureAvailableFeaturesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取注册FG特征时模型特征下可选的所有特征。
       *
       * @param request ListModelFeatureAvailableFeaturesRequest
       * @return ListModelFeatureAvailableFeaturesResponse
       */
      Models::ListModelFeatureAvailableFeaturesResponse listModelFeatureAvailableFeatures(const string &InstanceId, const string &ModelFeatureId, const Models::ListModelFeatureAvailableFeaturesRequest &request);

      /**
       * @summary 获取模型特征列表。
       *
       * @param tmpReq ListModelFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelFeaturesResponse
       */
      Models::ListModelFeaturesResponse listModelFeaturesWithOptions(const string &InstanceId, const Models::ListModelFeaturesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模型特征列表。
       *
       * @param request ListModelFeaturesRequest
       * @return ListModelFeaturesResponse
       */
      Models::ListModelFeaturesResponse listModelFeatures(const string &InstanceId, const Models::ListModelFeaturesRequest &request);

      /**
       * @summary 获取项目下的所有特征视图、特征信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectFeatureViewsResponse
       */
      Models::ListProjectFeatureViewsResponse listProjectFeatureViewsWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目下的所有特征视图、特征信息。
       *
       * @return ListProjectFeatureViewsResponse
       */
      Models::ListProjectFeatureViewsResponse listProjectFeatureViews(const string &InstanceId, const string &ProjectId);

      /**
       * @summary 获取项目下所有特征信息
       *
       * @param request ListProjectFeaturesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectFeaturesResponse
       */
      Models::ListProjectFeaturesResponse listProjectFeaturesWithOptions(const string &InstanceId, const string &ProjectId, const Models::ListProjectFeaturesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取项目下所有特征信息
       *
       * @param request ListProjectFeaturesRequest
       * @return ListProjectFeaturesResponse
       */
      Models::ListProjectFeaturesResponse listProjectFeatures(const string &InstanceId, const string &ProjectId, const Models::ListProjectFeaturesRequest &request);

      /**
       * @summary 获取Feature Store项目列表。
       *
       * @param tmpReq ListProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const string &InstanceId, const Models::ListProjectsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Feature Store项目列表。
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const string &InstanceId, const Models::ListProjectsRequest &request);

      /**
       * @summary 获取任务日志列表
       *
       * @param request ListTaskLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskLogsResponse
       */
      Models::ListTaskLogsResponse listTaskLogsWithOptions(const string &InstanceId, const string &TaskId, const Models::ListTaskLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务日志列表
       *
       * @param request ListTaskLogsRequest
       * @return ListTaskLogsResponse
       */
      Models::ListTaskLogsResponse listTaskLogs(const string &InstanceId, const string &TaskId, const Models::ListTaskLogsRequest &request);

      /**
       * @summary 获取任务列表
       *
       * @param tmpReq ListTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const string &InstanceId, const Models::ListTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务列表
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const string &InstanceId, const Models::ListTasksRequest &request);

      /**
       * @summary 将特征视图的离线数据发布/同步到线上。
       *
       * @param request PublishFeatureViewTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishFeatureViewTableResponse
       */
      Models::PublishFeatureViewTableResponse publishFeatureViewTableWithOptions(const string &InstanceId, const string &FeatureViewId, const Models::PublishFeatureViewTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将特征视图的离线数据发布/同步到线上。
       *
       * @param request PublishFeatureViewTableRequest
       * @return PublishFeatureViewTableResponse
       */
      Models::PublishFeatureViewTableResponse publishFeatureViewTable(const string &InstanceId, const string &FeatureViewId, const Models::PublishFeatureViewTableRequest &request);

      /**
       * @summary 停止任务。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTaskWithOptions(const string &InstanceId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止任务。
       *
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTask(const string &InstanceId, const string &TaskId);

      /**
       * @summary 更新数据源信息。
       *
       * @param request UpdateDatasourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasourceResponse
       */
      Models::UpdateDatasourceResponse updateDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const Models::UpdateDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据源信息。
       *
       * @param request UpdateDatasourceRequest
       * @return UpdateDatasourceResponse
       */
      Models::UpdateDatasourceResponse updateDatasource(const string &InstanceId, const string &DatasourceId, const Models::UpdateDatasourceRequest &request);

      /**
       * @summary 更新大模型调用信息配置
       *
       * @param request UpdateLLMConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLLMConfigResponse
       */
      Models::UpdateLLMConfigResponse updateLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const Models::UpdateLLMConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新大模型调用信息配置
       *
       * @param request UpdateLLMConfigRequest
       * @return UpdateLLMConfigResponse
       */
      Models::UpdateLLMConfigResponse updateLLMConfig(const string &InstanceId, const string &LLMConfigId, const Models::UpdateLLMConfigRequest &request);

      /**
       * @summary 更新label表。
       *
       * @param request UpdateLabelTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLabelTableResponse
       */
      Models::UpdateLabelTableResponse updateLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const Models::UpdateLabelTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新label表。
       *
       * @param request UpdateLabelTableRequest
       * @return UpdateLabelTableResponse
       */
      Models::UpdateLabelTableResponse updateLabelTable(const string &InstanceId, const string &LabelTableId, const Models::UpdateLabelTableRequest &request);

      /**
       * @summary 更新模型特征。
       *
       * @param request UpdateModelFeatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelFeatureResponse
       */
      Models::UpdateModelFeatureResponse updateModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const Models::UpdateModelFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模型特征。
       *
       * @param request UpdateModelFeatureRequest
       * @return UpdateModelFeatureResponse
       */
      Models::UpdateModelFeatureResponse updateModelFeature(const string &InstanceId, const string &ModelFeatureId, const Models::UpdateModelFeatureRequest &request);

      /**
       * @summary 更新模型特征的FG特征配置信息。
       *
       * @param request UpdateModelFeatureFGFeatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelFeatureFGFeatureResponse
       */
      Models::UpdateModelFeatureFGFeatureResponse updateModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const Models::UpdateModelFeatureFGFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模型特征的FG特征配置信息。
       *
       * @param request UpdateModelFeatureFGFeatureRequest
       * @return UpdateModelFeatureFGFeatureResponse
       */
      Models::UpdateModelFeatureFGFeatureResponse updateModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId, const Models::UpdateModelFeatureFGFeatureRequest &request);

      /**
       * @summary 更新指定Feature Store项目信息。
       *
       * @param request UpdateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const string &InstanceId, const string &ProjectId, const Models::UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新指定Feature Store项目信息。
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const string &InstanceId, const string &ProjectId, const Models::UpdateProjectRequest &request);

      /**
       * @summary 获取特征视图血缘关系。
       *
       * @param request WriteFeatureViewTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return WriteFeatureViewTableResponse
       */
      Models::WriteFeatureViewTableResponse writeFeatureViewTableWithOptions(const string &InstanceId, const string &FeatureViewId, const Models::WriteFeatureViewTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征视图血缘关系。
       *
       * @param request WriteFeatureViewTableRequest
       * @return WriteFeatureViewTableResponse
       */
      Models::WriteFeatureViewTableResponse writeFeatureViewTable(const string &InstanceId, const string &FeatureViewId, const Models::WriteFeatureViewTableRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
