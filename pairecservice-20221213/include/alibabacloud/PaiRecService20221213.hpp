// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAIRECSERVICE20221213_HPP_
#define ALIBABACLOUD_PAIRECSERVICE20221213_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PaiRecService20221213Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PaiRecService20221213.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 应用/发布指定的推荐引擎配置
       *
       * @param request ApplyEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyEngineConfigResponse
       */
      Models::ApplyEngineConfigResponse applyEngineConfigWithOptions(const string &EngineConfigId, const Models::ApplyEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用/发布指定的推荐引擎配置
       *
       * @param request ApplyEngineConfigRequest
       * @return ApplyEngineConfigResponse
       */
      Models::ApplyEngineConfigResponse applyEngineConfig(const string &EngineConfigId, const Models::ApplyEngineConfigRequest &request);

      /**
       * @summary 特征一致性检查数据回流。
       *
       * @param request BackflowFeatureConsistencyCheckJobDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackflowFeatureConsistencyCheckJobDataResponse
       */
      Models::BackflowFeatureConsistencyCheckJobDataResponse backflowFeatureConsistencyCheckJobDataWithOptions(const Models::BackflowFeatureConsistencyCheckJobDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 特征一致性检查数据回流。
       *
       * @param request BackflowFeatureConsistencyCheckJobDataRequest
       * @return BackflowFeatureConsistencyCheckJobDataResponse
       */
      Models::BackflowFeatureConsistencyCheckJobDataResponse backflowFeatureConsistencyCheckJobData(const Models::BackflowFeatureConsistencyCheckJobDataRequest &request);

      /**
       * @summary 更改召回管理服务的版本
       *
       * @param request ChangeRecallManagementServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeRecallManagementServiceVersionResponse
       */
      Models::ChangeRecallManagementServiceVersionResponse changeRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const Models::ChangeRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更改召回管理服务的版本
       *
       * @param request ChangeRecallManagementServiceVersionRequest
       * @return ChangeRecallManagementServiceVersionResponse
       */
      Models::ChangeRecallManagementServiceVersionResponse changeRecallManagementServiceVersion(const string &RecallManagementServiceId, const Models::ChangeRecallManagementServiceVersionRequest &request);

      /**
       * @summary 检测实例下配置的资源的连接状态。
       *
       * @param request CheckInstanceResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceResourcesResponse
       */
      Models::CheckInstanceResourcesResponse checkInstanceResourcesWithOptions(const string &InstanceId, const Models::CheckInstanceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检测实例下配置的资源的连接状态。
       *
       * @param request CheckInstanceResourcesRequest
       * @return CheckInstanceResourcesResponse
       */
      Models::CheckInstanceResourcesResponse checkInstanceResources(const string &InstanceId, const Models::CheckInstanceResourcesRequest &request);

      /**
       * @summary 校验流量调控任务中的表达式
       *
       * @param request CheckTrafficControlTaskExpressionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTrafficControlTaskExpressionResponse
       */
      Models::CheckTrafficControlTaskExpressionResponse checkTrafficControlTaskExpressionWithOptions(const Models::CheckTrafficControlTaskExpressionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验流量调控任务中的表达式
       *
       * @param request CheckTrafficControlTaskExpressionRequest
       * @return CheckTrafficControlTaskExpressionResponse
       */
      Models::CheckTrafficControlTaskExpressionResponse checkTrafficControlTaskExpression(const Models::CheckTrafficControlTaskExpressionRequest &request);

      /**
       * @summary 克隆指定的推荐引擎配置
       *
       * @param request CloneEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneEngineConfigResponse
       */
      Models::CloneEngineConfigResponse cloneEngineConfigWithOptions(const string &EngineConfigId, const Models::CloneEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 克隆指定的推荐引擎配置
       *
       * @param request CloneEngineConfigRequest
       * @return CloneEngineConfigResponse
       */
      Models::CloneEngineConfigResponse cloneEngineConfig(const string &EngineConfigId, const Models::CloneEngineConfigRequest &request);

      /**
       * @summary 克隆实验。
       *
       * @param request CloneExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneExperimentResponse
       */
      Models::CloneExperimentResponse cloneExperimentWithOptions(const string &ExperimentId, const Models::CloneExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 克隆实验。
       *
       * @param request CloneExperimentRequest
       * @return CloneExperimentResponse
       */
      Models::CloneExperimentResponse cloneExperiment(const string &ExperimentId, const Models::CloneExperimentRequest &request);

      /**
       * @summary 克隆实验组，并克隆实验组下的所有实验至新的实验组中。
       *
       * @param request CloneExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneExperimentGroupResponse
       */
      Models::CloneExperimentGroupResponse cloneExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::CloneExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 克隆实验组，并克隆实验组下的所有实验至新的实验组中。
       *
       * @param request CloneExperimentGroupRequest
       * @return CloneExperimentGroupResponse
       */
      Models::CloneExperimentGroupResponse cloneExperimentGroup(const string &ExperimentGroupId, const Models::CloneExperimentGroupRequest &request);

      /**
       * @summary 克隆特征一致性检查配置。
       *
       * @param request CloneFeatureConsistencyCheckJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneFeatureConsistencyCheckJobConfigResponse
       */
      Models::CloneFeatureConsistencyCheckJobConfigResponse cloneFeatureConsistencyCheckJobConfigWithOptions(const string &SourceFeatureConsistencyCheckJobConfigId, const Models::CloneFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 克隆特征一致性检查配置。
       *
       * @param request CloneFeatureConsistencyCheckJobConfigRequest
       * @return CloneFeatureConsistencyCheckJobConfigResponse
       */
      Models::CloneFeatureConsistencyCheckJobConfigResponse cloneFeatureConsistencyCheckJobConfig(const string &SourceFeatureConsistencyCheckJobConfigId, const Models::CloneFeatureConsistencyCheckJobConfigRequest &request);

      /**
       * @summary 克隆实验室。
       *
       * @param request CloneLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneLaboratoryResponse
       */
      Models::CloneLaboratoryResponse cloneLaboratoryWithOptions(const string &LaboratoryId, const Models::CloneLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 克隆实验室。
       *
       * @param request CloneLaboratoryRequest
       * @return CloneLaboratoryResponse
       */
      Models::CloneLaboratoryResponse cloneLaboratory(const string &LaboratoryId, const Models::CloneLaboratoryRequest &request);

      /**
       * @summary 克隆流量调控任务
       *
       * @param request CloneTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneTrafficControlTaskResponse
       */
      Models::CloneTrafficControlTaskResponse cloneTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::CloneTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 克隆流量调控任务
       *
       * @param request CloneTrafficControlTaskRequest
       * @return CloneTrafficControlTaskResponse
       */
      Models::CloneTrafficControlTaskResponse cloneTrafficControlTask(const string &TrafficControlTaskId, const Models::CloneTrafficControlTaskRequest &request);

      /**
       * @summary 对比样本一致性任务
       *
       * @param request CompareSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareSampleConsistencyJobResponse
       */
      Models::CompareSampleConsistencyJobResponse compareSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::CompareSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对比样本一致性任务
       *
       * @param request CompareSampleConsistencyJobRequest
       * @return CompareSampleConsistencyJobResponse
       */
      Models::CompareSampleConsistencyJobResponse compareSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::CompareSampleConsistencyJobRequest &request);

      /**
       * @summary 创建AB test实验指标
       *
       * @param request CreateABMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateABMetricResponse
       */
      Models::CreateABMetricResponse createABMetricWithOptions(const Models::CreateABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建AB test实验指标
       *
       * @param request CreateABMetricRequest
       * @return CreateABMetricResponse
       */
      Models::CreateABMetricResponse createABMetric(const Models::CreateABMetricRequest &request);

      /**
       * @summary 创建指标组
       *
       * @param request CreateABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateABMetricGroupResponse
       */
      Models::CreateABMetricGroupResponse createABMetricGroupWithOptions(const Models::CreateABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建指标组
       *
       * @param request CreateABMetricGroupRequest
       * @return CreateABMetricGroupResponse
       */
      Models::CreateABMetricGroupResponse createABMetricGroup(const Models::CreateABMetricGroupRequest &request);

      /**
       * @summary 创建AB指标的计算任务。
       *
       * @param request CreateCalculationJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCalculationJobsResponse
       */
      Models::CreateCalculationJobsResponse createCalculationJobsWithOptions(const Models::CreateCalculationJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建AB指标的计算任务。
       *
       * @param request CreateCalculationJobsRequest
       * @return CreateCalculationJobsResponse
       */
      Models::CreateCalculationJobsResponse createCalculationJobs(const Models::CreateCalculationJobsRequest &request);

      /**
       * @summary 创建人群。
       *
       * @param request CreateCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCrowdResponse
       */
      Models::CreateCrowdResponse createCrowdWithOptions(const Models::CreateCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建人群。
       *
       * @param request CreateCrowdRequest
       * @return CreateCrowdResponse
       */
      Models::CreateCrowdResponse createCrowd(const Models::CreateCrowdRequest &request);

      /**
       * @summary 创建引擎配置
       *
       * @param request CreateEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEngineConfigResponse
       */
      Models::CreateEngineConfigResponse createEngineConfigWithOptions(const Models::CreateEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建引擎配置
       *
       * @param request CreateEngineConfigRequest
       * @return CreateEngineConfigResponse
       */
      Models::CreateEngineConfigResponse createEngineConfig(const Models::CreateEngineConfigRequest &request);

      /**
       * @summary 创建实验。
       *
       * @param request CreateExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentResponse
       */
      Models::CreateExperimentResponse createExperimentWithOptions(const Models::CreateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实验。
       *
       * @param request CreateExperimentRequest
       * @return CreateExperimentResponse
       */
      Models::CreateExperimentResponse createExperiment(const Models::CreateExperimentRequest &request);

      /**
       * @summary 创建实验组。
       *
       * @param request CreateExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentGroupResponse
       */
      Models::CreateExperimentGroupResponse createExperimentGroupWithOptions(const Models::CreateExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实验组。
       *
       * @param request CreateExperimentGroupRequest
       * @return CreateExperimentGroupResponse
       */
      Models::CreateExperimentGroupResponse createExperimentGroup(const Models::CreateExperimentGroupRequest &request);

      /**
       * @summary 创建特征一致性检查任务。
       *
       * @param request CreateFeatureConsistencyCheckJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFeatureConsistencyCheckJobResponse
       */
      Models::CreateFeatureConsistencyCheckJobResponse createFeatureConsistencyCheckJobWithOptions(const Models::CreateFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建特征一致性检查任务。
       *
       * @param request CreateFeatureConsistencyCheckJobRequest
       * @return CreateFeatureConsistencyCheckJobResponse
       */
      Models::CreateFeatureConsistencyCheckJobResponse createFeatureConsistencyCheckJob(const Models::CreateFeatureConsistencyCheckJobRequest &request);

      /**
       * @summary 创建特征一致性检查配置。
       *
       * @param request CreateFeatureConsistencyCheckJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFeatureConsistencyCheckJobConfigResponse
       */
      Models::CreateFeatureConsistencyCheckJobConfigResponse createFeatureConsistencyCheckJobConfigWithOptions(const Models::CreateFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建特征一致性检查配置。
       *
       * @param request CreateFeatureConsistencyCheckJobConfigRequest
       * @return CreateFeatureConsistencyCheckJobConfigResponse
       */
      Models::CreateFeatureConsistencyCheckJobConfigResponse createFeatureConsistencyCheckJobConfig(const Models::CreateFeatureConsistencyCheckJobConfigRequest &request);

      /**
       * @summary 为指定实例配置创建新的配置资源
       *
       * @param request CreateInstanceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResourceResponse
       */
      Models::CreateInstanceResourceResponse createInstanceResourceWithOptions(const string &InstanceId, const Models::CreateInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为指定实例配置创建新的配置资源
       *
       * @param request CreateInstanceResourceRequest
       * @return CreateInstanceResourceResponse
       */
      Models::CreateInstanceResourceResponse createInstanceResource(const string &InstanceId, const Models::CreateInstanceResourceRequest &request);

      /**
       * @summary 创建实验室
       *
       * @param request CreateLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLaboratoryResponse
       */
      Models::CreateLaboratoryResponse createLaboratoryWithOptions(const Models::CreateLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实验室
       *
       * @param request CreateLaboratoryRequest
       * @return CreateLaboratoryResponse
       */
      Models::CreateLaboratoryResponse createLaboratory(const Models::CreateLaboratoryRequest &request);

      /**
       * @summary 创建层。
       *
       * @param request CreateLayerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLayerResponse
       */
      Models::CreateLayerResponse createLayerWithOptions(const Models::CreateLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建层。
       *
       * @param request CreateLayerRequest
       * @return CreateLayerResponse
       */
      Models::CreateLayerResponse createLayer(const Models::CreateLayerRequest &request);

      /**
       * @summary 创建参数。
       *
       * @param request CreateParamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParamResponse
       */
      Models::CreateParamResponse createParamWithOptions(const Models::CreateParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建参数。
       *
       * @param request CreateParamRequest
       * @return CreateParamResponse
       */
      Models::CreateParamResponse createParam(const Models::CreateParamRequest &request);

      /**
       * @summary 创建召回管理初始化配置。
       *
       * @param request CreateRecallManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementConfigResponse
       */
      Models::CreateRecallManagementConfigResponse createRecallManagementConfigWithOptions(const Models::CreateRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建召回管理初始化配置。
       *
       * @param request CreateRecallManagementConfigRequest
       * @return CreateRecallManagementConfigResponse
       */
      Models::CreateRecallManagementConfigResponse createRecallManagementConfig(const Models::CreateRecallManagementConfigRequest &request);

      /**
       * @summary 创建召回管理服务
       *
       * @param request CreateRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementServiceResponse
       */
      Models::CreateRecallManagementServiceResponse createRecallManagementServiceWithOptions(const Models::CreateRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建召回管理服务
       *
       * @param request CreateRecallManagementServiceRequest
       * @return CreateRecallManagementServiceResponse
       */
      Models::CreateRecallManagementServiceResponse createRecallManagementService(const Models::CreateRecallManagementServiceRequest &request);

      /**
       * @summary 创建召回管理版本
       *
       * @param request CreateRecallManagementServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementServiceVersionResponse
       */
      Models::CreateRecallManagementServiceVersionResponse createRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const Models::CreateRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建召回管理版本
       *
       * @param request CreateRecallManagementServiceVersionRequest
       * @return CreateRecallManagementServiceVersionResponse
       */
      Models::CreateRecallManagementServiceVersionResponse createRecallManagementServiceVersion(const string &RecallManagementServiceId, const Models::CreateRecallManagementServiceVersionRequest &request);

      /**
       * @summary 创建召回管理服务版本配置
       *
       * @param request CreateRecallManagementServiceVersionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementServiceVersionConfigResponse
       */
      Models::CreateRecallManagementServiceVersionConfigResponse createRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::CreateRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建召回管理服务版本配置
       *
       * @param request CreateRecallManagementServiceVersionConfigRequest
       * @return CreateRecallManagementServiceVersionConfigResponse
       */
      Models::CreateRecallManagementServiceVersionConfigResponse createRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::CreateRecallManagementServiceVersionConfigRequest &request);

      /**
       * @summary 创建召回管理表。
       *
       * @param request CreateRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementTableResponse
       */
      Models::CreateRecallManagementTableResponse createRecallManagementTableWithOptions(const Models::CreateRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建召回管理表。
       *
       * @param request CreateRecallManagementTableRequest
       * @return CreateRecallManagementTableResponse
       */
      Models::CreateRecallManagementTableResponse createRecallManagementTable(const Models::CreateRecallManagementTableRequest &request);

      /**
       * @summary 创建资源规则
       *
       * @param request CreateResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceRuleResponse
       */
      Models::CreateResourceRuleResponse createResourceRuleWithOptions(const Models::CreateResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源规则
       *
       * @param request CreateResourceRuleRequest
       * @return CreateResourceRuleResponse
       */
      Models::CreateResourceRuleResponse createResourceRule(const Models::CreateResourceRuleRequest &request);

      /**
       * @summary 创建资源规则条目
       *
       * @param request CreateResourceRuleItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceRuleItemResponse
       */
      Models::CreateResourceRuleItemResponse createResourceRuleItemWithOptions(const string &ResourceRuleId, const Models::CreateResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源规则条目
       *
       * @param request CreateResourceRuleItemRequest
       * @return CreateResourceRuleItemResponse
       */
      Models::CreateResourceRuleItemResponse createResourceRuleItem(const string &ResourceRuleId, const Models::CreateResourceRuleItemRequest &request);

      /**
       * @summary 创建样本一致性任务
       *
       * @param request CreateSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSampleConsistencyJobResponse
       */
      Models::CreateSampleConsistencyJobResponse createSampleConsistencyJobWithOptions(const Models::CreateSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建样本一致性任务
       *
       * @param request CreateSampleConsistencyJobRequest
       * @return CreateSampleConsistencyJobResponse
       */
      Models::CreateSampleConsistencyJobResponse createSampleConsistencyJob(const Models::CreateSampleConsistencyJobRequest &request);

      /**
       * @summary 创建场景
       *
       * @param request CreateSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSceneResponse
       */
      Models::CreateSceneResponse createSceneWithOptions(const Models::CreateSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建场景
       *
       * @param request CreateSceneRequest
       * @return CreateSceneResponse
       */
      Models::CreateSceneResponse createScene(const Models::CreateSceneRequest &request);

      /**
       * @summary 在指定人群下创建子人群。
       *
       * @param request CreateSubCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubCrowdResponse
       */
      Models::CreateSubCrowdResponse createSubCrowdWithOptions(const string &CrowdId, const Models::CreateSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在指定人群下创建子人群。
       *
       * @param request CreateSubCrowdRequest
       * @return CreateSubCrowdResponse
       */
      Models::CreateSubCrowdResponse createSubCrowd(const string &CrowdId, const Models::CreateSubCrowdRequest &request);

      /**
       * @summary 创建数据表。
       *
       * @param request CreateTableMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableMetaResponse
       */
      Models::CreateTableMetaResponse createTableMetaWithOptions(const Models::CreateTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据表。
       *
       * @param request CreateTableMetaRequest
       * @return CreateTableMetaResponse
       */
      Models::CreateTableMetaResponse createTableMeta(const Models::CreateTableMetaRequest &request);

      /**
       * @summary 创建流量调控目标
       *
       * @param request CreateTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficControlTargetResponse
       */
      Models::CreateTrafficControlTargetResponse createTrafficControlTargetWithOptions(const Models::CreateTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建流量调控目标
       *
       * @param request CreateTrafficControlTargetRequest
       * @return CreateTrafficControlTargetResponse
       */
      Models::CreateTrafficControlTargetResponse createTrafficControlTarget(const Models::CreateTrafficControlTargetRequest &request);

      /**
       * @summary 创建流量调控任务
       *
       * @param request CreateTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficControlTaskResponse
       */
      Models::CreateTrafficControlTaskResponse createTrafficControlTaskWithOptions(const Models::CreateTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建流量调控任务
       *
       * @param request CreateTrafficControlTaskRequest
       * @return CreateTrafficControlTaskResponse
       */
      Models::CreateTrafficControlTaskResponse createTrafficControlTask(const Models::CreateTrafficControlTaskRequest &request);

      /**
       * @summary 对指定资源规则中的计算公式进行调试
       *
       * @param tmpReq DebugResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugResourceRuleResponse
       */
      Models::DebugResourceRuleResponse debugResourceRuleWithOptions(const string &ResourceRuleId, const Models::DebugResourceRuleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对指定资源规则中的计算公式进行调试
       *
       * @param request DebugResourceRuleRequest
       * @return DebugResourceRuleResponse
       */
      Models::DebugResourceRuleResponse debugResourceRule(const string &ResourceRuleId, const Models::DebugResourceRuleRequest &request);

      /**
       * @summary 删除指定AB实验指标。
       *
       * @param request DeleteABMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteABMetricResponse
       */
      Models::DeleteABMetricResponse deleteABMetricWithOptions(const string &ABMetricId, const Models::DeleteABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定AB实验指标。
       *
       * @param request DeleteABMetricRequest
       * @return DeleteABMetricResponse
       */
      Models::DeleteABMetricResponse deleteABMetric(const string &ABMetricId, const Models::DeleteABMetricRequest &request);

      /**
       * @summary 删除AB实验指标组。
       *
       * @param request DeleteABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteABMetricGroupResponse
       */
      Models::DeleteABMetricGroupResponse deleteABMetricGroupWithOptions(const string &ABMetricGroupId, const Models::DeleteABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除AB实验指标组。
       *
       * @param request DeleteABMetricGroupRequest
       * @return DeleteABMetricGroupResponse
       */
      Models::DeleteABMetricGroupResponse deleteABMetricGroup(const string &ABMetricGroupId, const Models::DeleteABMetricGroupRequest &request);

      /**
       * @summary 删除指定人群。
       *
       * @param request DeleteCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCrowdResponse
       */
      Models::DeleteCrowdResponse deleteCrowdWithOptions(const string &CrowdId, const Models::DeleteCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定人群。
       *
       * @param request DeleteCrowdRequest
       * @return DeleteCrowdResponse
       */
      Models::DeleteCrowdResponse deleteCrowd(const string &CrowdId, const Models::DeleteCrowdRequest &request);

      /**
       * @summary 删除指定推荐引擎配置。
       *
       * @param request DeleteEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEngineConfigResponse
       */
      Models::DeleteEngineConfigResponse deleteEngineConfigWithOptions(const string &EngineConfigId, const Models::DeleteEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定推荐引擎配置。
       *
       * @param request DeleteEngineConfigRequest
       * @return DeleteEngineConfigResponse
       */
      Models::DeleteEngineConfigResponse deleteEngineConfig(const string &EngineConfigId, const Models::DeleteEngineConfigRequest &request);

      /**
       * @summary 删除实验。
       *
       * @param request DeleteExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentResponse
       */
      Models::DeleteExperimentResponse deleteExperimentWithOptions(const string &ExperimentId, const Models::DeleteExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实验。
       *
       * @param request DeleteExperimentRequest
       * @return DeleteExperimentResponse
       */
      Models::DeleteExperimentResponse deleteExperiment(const string &ExperimentId, const Models::DeleteExperimentRequest &request);

      /**
       * @summary 删除指定实验组。
       *
       * @param request DeleteExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentGroupResponse
       */
      Models::DeleteExperimentGroupResponse deleteExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::DeleteExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定实验组。
       *
       * @param request DeleteExperimentGroupRequest
       * @return DeleteExperimentGroupResponse
       */
      Models::DeleteExperimentGroupResponse deleteExperimentGroup(const string &ExperimentGroupId, const Models::DeleteExperimentGroupRequest &request);

      /**
       * @summary 删除指定实例下的指定配置资源。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResourceResponse
       */
      Models::DeleteInstanceResourceResponse deleteInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定实例下的指定配置资源。
       *
       * @return DeleteInstanceResourceResponse
       */
      Models::DeleteInstanceResourceResponse deleteInstanceResource(const string &InstanceId, const string &ResourceId);

      /**
       * @summary 删除实验室。
       *
       * @param request DeleteLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLaboratoryResponse
       */
      Models::DeleteLaboratoryResponse deleteLaboratoryWithOptions(const string &LaboratoryId, const Models::DeleteLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实验室。
       *
       * @param request DeleteLaboratoryRequest
       * @return DeleteLaboratoryResponse
       */
      Models::DeleteLaboratoryResponse deleteLaboratory(const string &LaboratoryId, const Models::DeleteLaboratoryRequest &request);

      /**
       * @summary 删除层。
       *
       * @param request DeleteLayerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLayerResponse
       */
      Models::DeleteLayerResponse deleteLayerWithOptions(const string &LayerId, const Models::DeleteLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除层。
       *
       * @param request DeleteLayerRequest
       * @return DeleteLayerResponse
       */
      Models::DeleteLayerResponse deleteLayer(const string &LayerId, const Models::DeleteLayerRequest &request);

      /**
       * @summary 删除指定参数。
       *
       * @param request DeleteParamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParamResponse
       */
      Models::DeleteParamResponse deleteParamWithOptions(const string &ParamId, const Models::DeleteParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定参数。
       *
       * @param request DeleteParamRequest
       * @return DeleteParamResponse
       */
      Models::DeleteParamResponse deleteParam(const string &ParamId, const Models::DeleteParamRequest &request);

      /**
       * @summary 删除指定召回管理服务
       *
       * @param request DeleteRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecallManagementServiceResponse
       */
      Models::DeleteRecallManagementServiceResponse deleteRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::DeleteRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定召回管理服务
       *
       * @param request DeleteRecallManagementServiceRequest
       * @return DeleteRecallManagementServiceResponse
       */
      Models::DeleteRecallManagementServiceResponse deleteRecallManagementService(const string &RecallManagementServiceId, const Models::DeleteRecallManagementServiceRequest &request);

      /**
       * @summary 删除指定召回管理服务版本
       *
       * @param request DeleteRecallManagementServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecallManagementServiceVersionResponse
       */
      Models::DeleteRecallManagementServiceVersionResponse deleteRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::DeleteRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定召回管理服务版本
       *
       * @param request DeleteRecallManagementServiceVersionRequest
       * @return DeleteRecallManagementServiceVersionResponse
       */
      Models::DeleteRecallManagementServiceVersionResponse deleteRecallManagementServiceVersion(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::DeleteRecallManagementServiceVersionRequest &request);

      /**
       * @summary 删除召回管理服务版本配置
       *
       * @param request DeleteRecallManagementServiceVersionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecallManagementServiceVersionConfigResponse
       */
      Models::DeleteRecallManagementServiceVersionConfigResponse deleteRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::DeleteRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除召回管理服务版本配置
       *
       * @param request DeleteRecallManagementServiceVersionConfigRequest
       * @return DeleteRecallManagementServiceVersionConfigResponse
       */
      Models::DeleteRecallManagementServiceVersionConfigResponse deleteRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::DeleteRecallManagementServiceVersionConfigRequest &request);

      /**
       * @summary 删除指定召回管理表。
       *
       * @param request DeleteRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecallManagementTableResponse
       */
      Models::DeleteRecallManagementTableResponse deleteRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::DeleteRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定召回管理表。
       *
       * @param request DeleteRecallManagementTableRequest
       * @return DeleteRecallManagementTableResponse
       */
      Models::DeleteRecallManagementTableResponse deleteRecallManagementTable(const string &RecallManagementTableId, const Models::DeleteRecallManagementTableRequest &request);

      /**
       * @summary 删除资源规则
       *
       * @param request DeleteResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceRuleResponse
       */
      Models::DeleteResourceRuleResponse deleteResourceRuleWithOptions(const string &ResourceRuleId, const Models::DeleteResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源规则
       *
       * @param request DeleteResourceRuleRequest
       * @return DeleteResourceRuleResponse
       */
      Models::DeleteResourceRuleResponse deleteResourceRule(const string &ResourceRuleId, const Models::DeleteResourceRuleRequest &request);

      /**
       * @summary 删除资源规则条目
       *
       * @param request DeleteResourceRuleItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceRuleItemResponse
       */
      Models::DeleteResourceRuleItemResponse deleteResourceRuleItemWithOptions(const string &ResourceRuleId, const string &ResourceRuleItemId, const Models::DeleteResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源规则条目
       *
       * @param request DeleteResourceRuleItemRequest
       * @return DeleteResourceRuleItemResponse
       */
      Models::DeleteResourceRuleItemResponse deleteResourceRuleItem(const string &ResourceRuleId, const string &ResourceRuleItemId, const Models::DeleteResourceRuleItemRequest &request);

      /**
       * @summary 删除指定的样本一致性任务
       *
       * @param request DeleteSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSampleConsistencyJobResponse
       */
      Models::DeleteSampleConsistencyJobResponse deleteSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::DeleteSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的样本一致性任务
       *
       * @param request DeleteSampleConsistencyJobRequest
       * @return DeleteSampleConsistencyJobResponse
       */
      Models::DeleteSampleConsistencyJobResponse deleteSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::DeleteSampleConsistencyJobRequest &request);

      /**
       * @summary 删除场景
       *
       * @param request DeleteSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSceneResponse
       */
      Models::DeleteSceneResponse deleteSceneWithOptions(const string &SceneId, const Models::DeleteSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除场景
       *
       * @param request DeleteSceneRequest
       * @return DeleteSceneResponse
       */
      Models::DeleteSceneResponse deleteScene(const string &SceneId, const Models::DeleteSceneRequest &request);

      /**
       * @summary 删除指定人群下的指定子人群。
       *
       * @param request DeleteSubCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubCrowdResponse
       */
      Models::DeleteSubCrowdResponse deleteSubCrowdWithOptions(const string &CrowdId, const string &SubCrowdId, const Models::DeleteSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定人群下的指定子人群。
       *
       * @param request DeleteSubCrowdRequest
       * @return DeleteSubCrowdResponse
       */
      Models::DeleteSubCrowdResponse deleteSubCrowd(const string &CrowdId, const string &SubCrowdId, const Models::DeleteSubCrowdRequest &request);

      /**
       * @summary 删除数据表。
       *
       * @param request DeleteTableMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableMetaResponse
       */
      Models::DeleteTableMetaResponse deleteTableMetaWithOptions(const string &TableMetaId, const Models::DeleteTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据表。
       *
       * @param request DeleteTableMetaRequest
       * @return DeleteTableMetaResponse
       */
      Models::DeleteTableMetaResponse deleteTableMeta(const string &TableMetaId, const Models::DeleteTableMetaRequest &request);

      /**
       * @summary 更新流量调控目标
       *
       * @param request DeleteTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficControlTargetResponse
       */
      Models::DeleteTrafficControlTargetResponse deleteTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::DeleteTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流量调控目标
       *
       * @param request DeleteTrafficControlTargetRequest
       * @return DeleteTrafficControlTargetResponse
       */
      Models::DeleteTrafficControlTargetResponse deleteTrafficControlTarget(const string &TrafficControlTargetId, const Models::DeleteTrafficControlTargetRequest &request);

      /**
       * @summary 删除指定的流量调控任务
       *
       * @param request DeleteTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficControlTaskResponse
       */
      Models::DeleteTrafficControlTaskResponse deleteTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::DeleteTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的流量调控任务
       *
       * @param request DeleteTrafficControlTaskRequest
       * @return DeleteTrafficControlTaskResponse
       */
      Models::DeleteTrafficControlTaskResponse deleteTrafficControlTask(const string &TrafficControlTaskId, const Models::DeleteTrafficControlTaskRequest &request);

      /**
       * @summary 生成算法定制脚本
       *
       * @param request GenerateAlgorithmCustomizationScriptRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAlgorithmCustomizationScriptResponse
       */
      Models::GenerateAlgorithmCustomizationScriptResponse generateAlgorithmCustomizationScriptWithOptions(const string &AlgorithmCustomizationId, const Models::GenerateAlgorithmCustomizationScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成算法定制脚本
       *
       * @param request GenerateAlgorithmCustomizationScriptRequest
       * @return GenerateAlgorithmCustomizationScriptResponse
       */
      Models::GenerateAlgorithmCustomizationScriptResponse generateAlgorithmCustomizationScript(const string &AlgorithmCustomizationId, const Models::GenerateAlgorithmCustomizationScriptRequest &request);

      /**
       * @summary 产生流量调控的相关代码
       *
       * @param request GenerateTrafficControlTaskCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTrafficControlTaskCodeResponse
       */
      Models::GenerateTrafficControlTaskCodeResponse generateTrafficControlTaskCodeWithOptions(const string &TrafficControlTaskId, const Models::GenerateTrafficControlTaskCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 产生流量调控的相关代码
       *
       * @param request GenerateTrafficControlTaskCodeRequest
       * @return GenerateTrafficControlTaskCodeResponse
       */
      Models::GenerateTrafficControlTaskCodeResponse generateTrafficControlTaskCode(const string &TrafficControlTaskId, const Models::GenerateTrafficControlTaskCodeRequest &request);

      /**
       * @summary 产生流量调控的相关召回配置
       *
       * @param request GenerateTrafficControlTaskConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTrafficControlTaskConfigResponse
       */
      Models::GenerateTrafficControlTaskConfigResponse generateTrafficControlTaskConfigWithOptions(const string &TrafficControlTaskId, const Models::GenerateTrafficControlTaskConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 产生流量调控的相关召回配置
       *
       * @param request GenerateTrafficControlTaskConfigRequest
       * @return GenerateTrafficControlTaskConfigResponse
       */
      Models::GenerateTrafficControlTaskConfigResponse generateTrafficControlTaskConfig(const string &TrafficControlTaskId, const Models::GenerateTrafficControlTaskConfigRequest &request);

      /**
       * @summary 获取AB Test实验指标详细信息。
       *
       * @param request GetABMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetABMetricResponse
       */
      Models::GetABMetricResponse getABMetricWithOptions(const string &ABMetricId, const Models::GetABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取AB Test实验指标详细信息。
       *
       * @param request GetABMetricRequest
       * @return GetABMetricResponse
       */
      Models::GetABMetricResponse getABMetric(const string &ABMetricId, const Models::GetABMetricRequest &request);

      /**
       * @summary 获取AB实验指标组详细信息。
       *
       * @param request GetABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetABMetricGroupResponse
       */
      Models::GetABMetricGroupResponse getABMetricGroupWithOptions(const string &ABMetricGroupId, const Models::GetABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取AB实验指标组详细信息。
       *
       * @param request GetABMetricGroupRequest
       * @return GetABMetricGroupResponse
       */
      Models::GetABMetricGroupResponse getABMetricGroup(const string &ABMetricGroupId, const Models::GetABMetricGroupRequest &request);

      /**
       * @summary 获取指定计算任务详细信息。
       *
       * @param request GetCalculationJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCalculationJobResponse
       */
      Models::GetCalculationJobResponse getCalculationJobWithOptions(const string &CalculationJobId, const Models::GetCalculationJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定计算任务详细信息。
       *
       * @param request GetCalculationJobRequest
       * @return GetCalculationJobResponse
       */
      Models::GetCalculationJobResponse getCalculationJob(const string &CalculationJobId, const Models::GetCalculationJobRequest &request);

      /**
       * @summary 获取引擎配置详细信息。
       *
       * @param request GetEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEngineConfigResponse
       */
      Models::GetEngineConfigResponse getEngineConfigWithOptions(const string &EngineConfigId, const Models::GetEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取引擎配置详细信息。
       *
       * @param request GetEngineConfigRequest
       * @return GetEngineConfigResponse
       */
      Models::GetEngineConfigResponse getEngineConfig(const string &EngineConfigId, const Models::GetEngineConfigRequest &request);

      /**
       * @summary 获取实验详细信息。
       *
       * @param request GetExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentResponse
       */
      Models::GetExperimentResponse getExperimentWithOptions(const string &ExperimentId, const Models::GetExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验详细信息。
       *
       * @param request GetExperimentRequest
       * @return GetExperimentResponse
       */
      Models::GetExperimentResponse getExperiment(const string &ExperimentId, const Models::GetExperimentRequest &request);

      /**
       * @summary 获取指定实验组详细信息。
       *
       * @param request GetExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentGroupResponse
       */
      Models::GetExperimentGroupResponse getExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::GetExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定实验组详细信息。
       *
       * @param request GetExperimentGroupRequest
       * @return GetExperimentGroupResponse
       */
      Models::GetExperimentGroupResponse getExperimentGroup(const string &ExperimentGroupId, const Models::GetExperimentGroupRequest &request);

      /**
       * @summary 获取特征一致性检查任务详细信息。
       *
       * @param request GetFeatureConsistencyCheckJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureConsistencyCheckJobResponse
       */
      Models::GetFeatureConsistencyCheckJobResponse getFeatureConsistencyCheckJobWithOptions(const string &FeatureConsistencyCheckJobId, const Models::GetFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征一致性检查任务详细信息。
       *
       * @param request GetFeatureConsistencyCheckJobRequest
       * @return GetFeatureConsistencyCheckJobResponse
       */
      Models::GetFeatureConsistencyCheckJobResponse getFeatureConsistencyCheckJob(const string &FeatureConsistencyCheckJobId, const Models::GetFeatureConsistencyCheckJobRequest &request);

      /**
       * @summary 获取特征一致性检测配置详情。
       *
       * @param request GetFeatureConsistencyCheckJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureConsistencyCheckJobConfigResponse
       */
      Models::GetFeatureConsistencyCheckJobConfigResponse getFeatureConsistencyCheckJobConfigWithOptions(const string &FeatureConsistencyCheckJobConfigId, const Models::GetFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征一致性检测配置详情。
       *
       * @param request GetFeatureConsistencyCheckJobConfigRequest
       * @return GetFeatureConsistencyCheckJobConfigResponse
       */
      Models::GetFeatureConsistencyCheckJobConfigResponse getFeatureConsistencyCheckJobConfig(const string &FeatureConsistencyCheckJobConfigId, const Models::GetFeatureConsistencyCheckJobConfigRequest &request);

      /**
       * @summary 获取指定推荐全链路深度定制开发平台实例信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定推荐全链路深度定制开发平台实例信息。
       *
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &InstanceId);

      /**
       * @summary 获取指定实例下指定资源的详细信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResourceResponse
       */
      Models::GetInstanceResourceResponse getInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定实例下指定资源的详细信息。
       *
       * @return GetInstanceResourceResponse
       */
      Models::GetInstanceResourceResponse getInstanceResource(const string &InstanceId, const string &ResourceId);

      /**
       * @summary 获取数据源下指定表的详细信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResourceTableResponse
       */
      Models::GetInstanceResourceTableResponse getInstanceResourceTableWithOptions(const string &InstanceId, const string &ResourceId, const string &TableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源下指定表的详细信息。
       *
       * @return GetInstanceResourceTableResponse
       */
      Models::GetInstanceResourceTableResponse getInstanceResourceTable(const string &InstanceId, const string &ResourceId, const string &TableName);

      /**
       * @summary 获取实验室详细信息。
       *
       * @param request GetLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLaboratoryResponse
       */
      Models::GetLaboratoryResponse getLaboratoryWithOptions(const string &LaboratoryId, const Models::GetLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验室详细信息。
       *
       * @param request GetLaboratoryRequest
       * @return GetLaboratoryResponse
       */
      Models::GetLaboratoryResponse getLaboratory(const string &LaboratoryId, const Models::GetLaboratoryRequest &request);

      /**
       * @summary 获取层详细信息。
       *
       * @param request GetLayerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLayerResponse
       */
      Models::GetLayerResponse getLayerWithOptions(const string &LayerId, const Models::GetLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取层详细信息。
       *
       * @param request GetLayerRequest
       * @return GetLayerResponse
       */
      Models::GetLayerResponse getLayer(const string &LayerId, const Models::GetLayerRequest &request);

      /**
       * @summary 获取召回管理初始化配置。
       *
       * @param request GetRecallManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementConfigResponse
       */
      Models::GetRecallManagementConfigResponse getRecallManagementConfigWithOptions(const Models::GetRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取召回管理初始化配置。
       *
       * @param request GetRecallManagementConfigRequest
       * @return GetRecallManagementConfigResponse
       */
      Models::GetRecallManagementConfigResponse getRecallManagementConfig(const Models::GetRecallManagementConfigRequest &request);

      /**
       * @summary 获取召回管理任务详情。
       *
       * @param request GetRecallManagementJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementJobResponse
       */
      Models::GetRecallManagementJobResponse getRecallManagementJobWithOptions(const string &RecallManagementJobId, const Models::GetRecallManagementJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取召回管理任务详情。
       *
       * @param request GetRecallManagementJobRequest
       * @return GetRecallManagementJobResponse
       */
      Models::GetRecallManagementJobResponse getRecallManagementJob(const string &RecallManagementJobId, const Models::GetRecallManagementJobRequest &request);

      /**
       * @summary 获取指定召回管理服务详细信息
       *
       * @param request GetRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementServiceResponse
       */
      Models::GetRecallManagementServiceResponse getRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::GetRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定召回管理服务详细信息
       *
       * @param request GetRecallManagementServiceRequest
       * @return GetRecallManagementServiceResponse
       */
      Models::GetRecallManagementServiceResponse getRecallManagementService(const string &RecallManagementServiceId, const Models::GetRecallManagementServiceRequest &request);

      /**
       * @summary 获取指定召回管理版本详细信息
       *
       * @param request GetRecallManagementServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementServiceVersionResponse
       */
      Models::GetRecallManagementServiceVersionResponse getRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::GetRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定召回管理版本详细信息
       *
       * @param request GetRecallManagementServiceVersionRequest
       * @return GetRecallManagementServiceVersionResponse
       */
      Models::GetRecallManagementServiceVersionResponse getRecallManagementServiceVersion(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::GetRecallManagementServiceVersionRequest &request);

      /**
       * @summary 获取召回管理服务版本配置详细信息
       *
       * @param request GetRecallManagementServiceVersionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementServiceVersionConfigResponse
       */
      Models::GetRecallManagementServiceVersionConfigResponse getRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::GetRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取召回管理服务版本配置详细信息
       *
       * @param request GetRecallManagementServiceVersionConfigRequest
       * @return GetRecallManagementServiceVersionConfigResponse
       */
      Models::GetRecallManagementServiceVersionConfigResponse getRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::GetRecallManagementServiceVersionConfigRequest &request);

      /**
       * @summary 获取指定召回管理表详细信息。
       *
       * @param request GetRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementTableResponse
       */
      Models::GetRecallManagementTableResponse getRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::GetRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定召回管理表详细信息。
       *
       * @param request GetRecallManagementTableRequest
       * @return GetRecallManagementTableResponse
       */
      Models::GetRecallManagementTableResponse getRecallManagementTable(const string &RecallManagementTableId, const Models::GetRecallManagementTableRequest &request);

      /**
       * @summary 获取资源规则详细信息
       *
       * @param request GetResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceRuleResponse
       */
      Models::GetResourceRuleResponse getResourceRuleWithOptions(const string &ResourceRuleId, const Models::GetResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源规则详细信息
       *
       * @param request GetResourceRuleRequest
       * @return GetResourceRuleResponse
       */
      Models::GetResourceRuleResponse getResourceRule(const string &ResourceRuleId, const Models::GetResourceRuleRequest &request);

      /**
       * @summary 获取样本一致性任务详细信息
       *
       * @param request GetSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSampleConsistencyJobResponse
       */
      Models::GetSampleConsistencyJobResponse getSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::GetSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取样本一致性任务详细信息
       *
       * @param request GetSampleConsistencyJobRequest
       * @return GetSampleConsistencyJobResponse
       */
      Models::GetSampleConsistencyJobResponse getSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::GetSampleConsistencyJobRequest &request);

      /**
       * @summary 获取场景详细信息
       *
       * @param request GetSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSceneResponse
       */
      Models::GetSceneResponse getSceneWithOptions(const string &SceneId, const Models::GetSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取场景详细信息
       *
       * @param request GetSceneRequest
       * @return GetSceneResponse
       */
      Models::GetSceneResponse getScene(const string &SceneId, const Models::GetSceneRequest &request);

      /**
       * @summary 获取服务详细信息。
       *
       * @param request GetServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const string &ServiceId, const Models::GetServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取服务详细信息。
       *
       * @param request GetServiceRequest
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const string &ServiceId, const Models::GetServiceRequest &request);

      /**
       * @summary 获取指定人群下的指定子人群的详细信息。
       *
       * @param request GetSubCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubCrowdResponse
       */
      Models::GetSubCrowdResponse getSubCrowdWithOptions(const string &CrowdId, const string &SubCrowdId, const Models::GetSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定人群下的指定子人群的详细信息。
       *
       * @param request GetSubCrowdRequest
       * @return GetSubCrowdResponse
       */
      Models::GetSubCrowdResponse getSubCrowd(const string &CrowdId, const string &SubCrowdId, const Models::GetSubCrowdRequest &request);

      /**
       * @summary 获取数据表详细信息。
       *
       * @param request GetTableMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableMetaResponse
       */
      Models::GetTableMetaResponse getTableMetaWithOptions(const string &TableMetaId, const Models::GetTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据表详细信息。
       *
       * @param request GetTableMetaRequest
       * @return GetTableMetaResponse
       */
      Models::GetTableMetaResponse getTableMeta(const string &TableMetaId, const Models::GetTableMetaRequest &request);

      /**
       * @summary 获取流量调控目标详情
       *
       * @param request GetTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrafficControlTargetResponse
       */
      Models::GetTrafficControlTargetResponse getTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::GetTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流量调控目标详情
       *
       * @param request GetTrafficControlTargetRequest
       * @return GetTrafficControlTargetResponse
       */
      Models::GetTrafficControlTargetResponse getTrafficControlTarget(const string &TrafficControlTargetId, const Models::GetTrafficControlTargetRequest &request);

      /**
       * @summary 获取流量调控任务详情
       *
       * @param request GetTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrafficControlTaskResponse
       */
      Models::GetTrafficControlTaskResponse getTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::GetTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流量调控任务详情
       *
       * @param request GetTrafficControlTaskRequest
       * @return GetTrafficControlTaskResponse
       */
      Models::GetTrafficControlTaskResponse getTrafficControlTask(const string &TrafficControlTaskId, const Models::GetTrafficControlTaskRequest &request);

      /**
       * @summary 获取流量调控任务的流量详情
       *
       * @param request GetTrafficControlTaskTrafficRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrafficControlTaskTrafficResponse
       */
      Models::GetTrafficControlTaskTrafficResponse getTrafficControlTaskTrafficWithOptions(const string &TrafficControlTaskId, const Models::GetTrafficControlTaskTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流量调控任务的流量详情
       *
       * @param request GetTrafficControlTaskTrafficRequest
       * @return GetTrafficControlTaskTrafficResponse
       */
      Models::GetTrafficControlTaskTrafficResponse getTrafficControlTaskTraffic(const string &TrafficControlTaskId, const Models::GetTrafficControlTaskTrafficRequest &request);

      /**
       * @summary 获取AB Test实验指标组列表。
       *
       * @param request ListABMetricGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListABMetricGroupsResponse
       */
      Models::ListABMetricGroupsResponse listABMetricGroupsWithOptions(const Models::ListABMetricGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取AB Test实验指标组列表。
       *
       * @param request ListABMetricGroupsRequest
       * @return ListABMetricGroupsResponse
       */
      Models::ListABMetricGroupsResponse listABMetricGroups(const Models::ListABMetricGroupsRequest &request);

      /**
       * @summary 获取AB Test实验指标列表。
       *
       * @param request ListABMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListABMetricsResponse
       */
      Models::ListABMetricsResponse listABMetricsWithOptions(const Models::ListABMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取AB Test实验指标列表。
       *
       * @param request ListABMetricsRequest
       * @return ListABMetricsResponse
       */
      Models::ListABMetricsResponse listABMetrics(const Models::ListABMetricsRequest &request);

      /**
       * @summary 获取计算任务列表。
       *
       * @param request ListCalculationJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCalculationJobsResponse
       */
      Models::ListCalculationJobsResponse listCalculationJobsWithOptions(const Models::ListCalculationJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取计算任务列表。
       *
       * @param request ListCalculationJobsRequest
       * @return ListCalculationJobsResponse
       */
      Models::ListCalculationJobsResponse listCalculationJobs(const Models::ListCalculationJobsRequest &request);

      /**
       * @summary 获取人群下的所有用户。
       *
       * @param request ListCrowdUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCrowdUsersResponse
       */
      Models::ListCrowdUsersResponse listCrowdUsersWithOptions(const string &CrowdId, const Models::ListCrowdUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取人群下的所有用户。
       *
       * @param request ListCrowdUsersRequest
       * @return ListCrowdUsersResponse
       */
      Models::ListCrowdUsersResponse listCrowdUsers(const string &CrowdId, const Models::ListCrowdUsersRequest &request);

      /**
       * @summary 获取人群列表。
       *
       * @param request ListCrowdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCrowdsResponse
       */
      Models::ListCrowdsResponse listCrowdsWithOptions(const Models::ListCrowdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取人群列表。
       *
       * @param request ListCrowdsRequest
       * @return ListCrowdsResponse
       */
      Models::ListCrowdsResponse listCrowds(const Models::ListCrowdsRequest &request);

      /**
       * @summary 获取引擎配置列表。
       *
       * @param request ListEngineConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEngineConfigsResponse
       */
      Models::ListEngineConfigsResponse listEngineConfigsWithOptions(const Models::ListEngineConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取引擎配置列表。
       *
       * @param request ListEngineConfigsRequest
       * @return ListEngineConfigsResponse
       */
      Models::ListEngineConfigsResponse listEngineConfigs(const Models::ListEngineConfigsRequest &request);

      /**
       * @summary 获取实验组列表。
       *
       * @param request ListExperimentGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperimentGroupsResponse
       */
      Models::ListExperimentGroupsResponse listExperimentGroupsWithOptions(const Models::ListExperimentGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验组列表。
       *
       * @param request ListExperimentGroupsRequest
       * @return ListExperimentGroupsResponse
       */
      Models::ListExperimentGroupsResponse listExperimentGroups(const Models::ListExperimentGroupsRequest &request);

      /**
       * @summary 获取实验列表。
       *
       * @param request ListExperimentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperimentsResponse
       */
      Models::ListExperimentsResponse listExperimentsWithOptions(const Models::ListExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验列表。
       *
       * @param request ListExperimentsRequest
       * @return ListExperimentsResponse
       */
      Models::ListExperimentsResponse listExperiments(const Models::ListExperimentsRequest &request);

      /**
       * @summary 获取特征一致性检查配置列表。
       *
       * @param request ListFeatureConsistencyCheckJobConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureConsistencyCheckJobConfigsResponse
       */
      Models::ListFeatureConsistencyCheckJobConfigsResponse listFeatureConsistencyCheckJobConfigsWithOptions(const Models::ListFeatureConsistencyCheckJobConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征一致性检查配置列表。
       *
       * @param request ListFeatureConsistencyCheckJobConfigsRequest
       * @return ListFeatureConsistencyCheckJobConfigsResponse
       */
      Models::ListFeatureConsistencyCheckJobConfigsResponse listFeatureConsistencyCheckJobConfigs(const Models::ListFeatureConsistencyCheckJobConfigsRequest &request);

      /**
       * @summary 获取特征一致性检查任务的特征报表/比对结果。
       *
       * @param request ListFeatureConsistencyCheckJobFeatureReportsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureConsistencyCheckJobFeatureReportsResponse
       */
      Models::ListFeatureConsistencyCheckJobFeatureReportsResponse listFeatureConsistencyCheckJobFeatureReportsWithOptions(const string &FeatureConsistencyCheckJobId, const Models::ListFeatureConsistencyCheckJobFeatureReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征一致性检查任务的特征报表/比对结果。
       *
       * @param request ListFeatureConsistencyCheckJobFeatureReportsRequest
       * @return ListFeatureConsistencyCheckJobFeatureReportsResponse
       */
      Models::ListFeatureConsistencyCheckJobFeatureReportsResponse listFeatureConsistencyCheckJobFeatureReports(const string &FeatureConsistencyCheckJobId, const Models::ListFeatureConsistencyCheckJobFeatureReportsRequest &request);

      /**
       * @summary 获取特征一致性检查任务分数报表/比对结果。
       *
       * @param tmpReq ListFeatureConsistencyCheckJobScoreReportsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureConsistencyCheckJobScoreReportsResponse
       */
      Models::ListFeatureConsistencyCheckJobScoreReportsResponse listFeatureConsistencyCheckJobScoreReportsWithOptions(const string &FeatureConsistencyCheckJobId, const Models::ListFeatureConsistencyCheckJobScoreReportsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征一致性检查任务分数报表/比对结果。
       *
       * @param request ListFeatureConsistencyCheckJobScoreReportsRequest
       * @return ListFeatureConsistencyCheckJobScoreReportsResponse
       */
      Models::ListFeatureConsistencyCheckJobScoreReportsResponse listFeatureConsistencyCheckJobScoreReports(const string &FeatureConsistencyCheckJobId, const Models::ListFeatureConsistencyCheckJobScoreReportsRequest &request);

      /**
       * @summary 获取特征一致性检查任务列表。
       *
       * @param request ListFeatureConsistencyCheckJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureConsistencyCheckJobsResponse
       */
      Models::ListFeatureConsistencyCheckJobsResponse listFeatureConsistencyCheckJobsWithOptions(const Models::ListFeatureConsistencyCheckJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取特征一致性检查任务列表。
       *
       * @param request ListFeatureConsistencyCheckJobsRequest
       * @return ListFeatureConsistencyCheckJobsResponse
       */
      Models::ListFeatureConsistencyCheckJobsResponse listFeatureConsistencyCheckJobs(const Models::ListFeatureConsistencyCheckJobsRequest &request);

      /**
       * @summary 获取实例下配置的资源列表。
       *
       * @param request ListInstanceResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResourcesResponse
       */
      Models::ListInstanceResourcesResponse listInstanceResourcesWithOptions(const string &InstanceId, const Models::ListInstanceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例下配置的资源列表。
       *
       * @param request ListInstanceResourcesRequest
       * @return ListInstanceResourcesResponse
       */
      Models::ListInstanceResourcesResponse listInstanceResources(const string &InstanceId, const Models::ListInstanceResourcesRequest &request);

      /**
       * @summary 获取推荐全链路深度定制开发平台实例信息列表。
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取推荐全链路深度定制开发平台实例信息列表。
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 获取实验室列表。
       *
       * @param request ListLaboratoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLaboratoriesResponse
       */
      Models::ListLaboratoriesResponse listLaboratoriesWithOptions(const Models::ListLaboratoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验室列表。
       *
       * @param request ListLaboratoriesRequest
       * @return ListLaboratoriesResponse
       */
      Models::ListLaboratoriesResponse listLaboratories(const Models::ListLaboratoriesRequest &request);

      /**
       * @summary 获取层列表。
       *
       * @param request ListLayersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLayersResponse
       */
      Models::ListLayersResponse listLayersWithOptions(const Models::ListLayersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取层列表。
       *
       * @param request ListLayersRequest
       * @return ListLayersResponse
       */
      Models::ListLayersResponse listLayers(const Models::ListLayersRequest &request);

      /**
       * @summary 获取参数列表。
       *
       * @param request ListParamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListParamsResponse
       */
      Models::ListParamsResponse listParamsWithOptions(const Models::ListParamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取参数列表。
       *
       * @param request ListParamsRequest
       * @return ListParamsResponse
       */
      Models::ListParamsResponse listParams(const Models::ListParamsRequest &request);

      /**
       * @summary 获取召回管理任务列表。
       *
       * @param request ListRecallManagementJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementJobsResponse
       */
      Models::ListRecallManagementJobsResponse listRecallManagementJobsWithOptions(const Models::ListRecallManagementJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取召回管理任务列表。
       *
       * @param request ListRecallManagementJobsRequest
       * @return ListRecallManagementJobsResponse
       */
      Models::ListRecallManagementJobsResponse listRecallManagementJobs(const Models::ListRecallManagementJobsRequest &request);

      /**
       * @summary 获取召回管理服务下的版本列表
       *
       * @param request ListRecallManagementServiceVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementServiceVersionsResponse
       */
      Models::ListRecallManagementServiceVersionsResponse listRecallManagementServiceVersionsWithOptions(const string &RecallManagementServiceId, const Models::ListRecallManagementServiceVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取召回管理服务下的版本列表
       *
       * @param request ListRecallManagementServiceVersionsRequest
       * @return ListRecallManagementServiceVersionsResponse
       */
      Models::ListRecallManagementServiceVersionsResponse listRecallManagementServiceVersions(const string &RecallManagementServiceId, const Models::ListRecallManagementServiceVersionsRequest &request);

      /**
       * @summary 获取召回管理服务列表
       *
       * @param request ListRecallManagementServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementServicesResponse
       */
      Models::ListRecallManagementServicesResponse listRecallManagementServicesWithOptions(const Models::ListRecallManagementServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取召回管理服务列表
       *
       * @param request ListRecallManagementServicesRequest
       * @return ListRecallManagementServicesResponse
       */
      Models::ListRecallManagementServicesResponse listRecallManagementServices(const Models::ListRecallManagementServicesRequest &request);

      /**
       * @summary 获取召回管理表版本列表。
       *
       * @param request ListRecallManagementTableVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementTableVersionsResponse
       */
      Models::ListRecallManagementTableVersionsResponse listRecallManagementTableVersionsWithOptions(const string &RecallManagementTableId, const Models::ListRecallManagementTableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取召回管理表版本列表。
       *
       * @param request ListRecallManagementTableVersionsRequest
       * @return ListRecallManagementTableVersionsResponse
       */
      Models::ListRecallManagementTableVersionsResponse listRecallManagementTableVersions(const string &RecallManagementTableId, const Models::ListRecallManagementTableVersionsRequest &request);

      /**
       * @summary 获取召回管理表列表。
       *
       * @param request ListRecallManagementTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementTablesResponse
       */
      Models::ListRecallManagementTablesResponse listRecallManagementTablesWithOptions(const Models::ListRecallManagementTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取召回管理表列表。
       *
       * @param request ListRecallManagementTablesRequest
       * @return ListRecallManagementTablesResponse
       */
      Models::ListRecallManagementTablesResponse listRecallManagementTables(const Models::ListRecallManagementTablesRequest &request);

      /**
       * @summary 获取资源规则列表
       *
       * @param request ListResourceRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceRulesResponse
       */
      Models::ListResourceRulesResponse listResourceRulesWithOptions(const Models::ListResourceRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源规则列表
       *
       * @param request ListResourceRulesRequest
       * @return ListResourceRulesResponse
       */
      Models::ListResourceRulesResponse listResourceRules(const Models::ListResourceRulesRequest &request);

      /**
       * @summary 获取样本一致性任务列表
       *
       * @param request ListSampleConsistencyJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSampleConsistencyJobsResponse
       */
      Models::ListSampleConsistencyJobsResponse listSampleConsistencyJobsWithOptions(const Models::ListSampleConsistencyJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取样本一致性任务列表
       *
       * @param request ListSampleConsistencyJobsRequest
       * @return ListSampleConsistencyJobsResponse
       */
      Models::ListSampleConsistencyJobsResponse listSampleConsistencyJobs(const Models::ListSampleConsistencyJobsRequest &request);

      /**
       * @summary 获取场景列表
       *
       * @param request ListScenesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScenesResponse
       */
      Models::ListScenesResponse listScenesWithOptions(const Models::ListScenesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取场景列表
       *
       * @param request ListScenesRequest
       * @return ListScenesResponse
       */
      Models::ListScenesResponse listScenes(const Models::ListScenesRequest &request);

      /**
       * @summary 获取人群下的所有子人群。
       *
       * @param request ListSubCrowdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubCrowdsResponse
       */
      Models::ListSubCrowdsResponse listSubCrowdsWithOptions(const string &CrowdId, const Models::ListSubCrowdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取人群下的所有子人群。
       *
       * @param request ListSubCrowdsRequest
       * @return ListSubCrowdsResponse
       */
      Models::ListSubCrowdsResponse listSubCrowds(const string &CrowdId, const Models::ListSubCrowdsRequest &request);

      /**
       * @summary 获取数据表列表。
       *
       * @param request ListTableMetasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableMetasResponse
       */
      Models::ListTableMetasResponse listTableMetasWithOptions(const Models::ListTableMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据表列表。
       *
       * @param request ListTableMetasRequest
       * @return ListTableMetasResponse
       */
      Models::ListTableMetasResponse listTableMetas(const Models::ListTableMetasRequest &request);

      /**
       * @summary 获取流量调控任务流量变更的历史列表
       *
       * @param request ListTrafficControlTargetTrafficHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficControlTargetTrafficHistoryResponse
       */
      Models::ListTrafficControlTargetTrafficHistoryResponse listTrafficControlTargetTrafficHistoryWithOptions(const string &TrafficControlTargetId, const Models::ListTrafficControlTargetTrafficHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流量调控任务流量变更的历史列表
       *
       * @param request ListTrafficControlTargetTrafficHistoryRequest
       * @return ListTrafficControlTargetTrafficHistoryResponse
       */
      Models::ListTrafficControlTargetTrafficHistoryResponse listTrafficControlTargetTrafficHistory(const string &TrafficControlTargetId, const Models::ListTrafficControlTargetTrafficHistoryRequest &request);

      /**
       * @summary 获取流量调控列表
       *
       * @param request ListTrafficControlTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficControlTasksResponse
       */
      Models::ListTrafficControlTasksResponse listTrafficControlTasksWithOptions(const Models::ListTrafficControlTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流量调控列表
       *
       * @param request ListTrafficControlTasksRequest
       * @return ListTrafficControlTasksResponse
       */
      Models::ListTrafficControlTasksResponse listTrafficControlTasks(const Models::ListTrafficControlTasksRequest &request);

      /**
       * @summary 上线实验。
       *
       * @param request OfflineExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineExperimentResponse
       */
      Models::OfflineExperimentResponse offlineExperimentWithOptions(const string &ExperimentId, const Models::OfflineExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线实验。
       *
       * @param request OfflineExperimentRequest
       * @return OfflineExperimentResponse
       */
      Models::OfflineExperimentResponse offlineExperiment(const string &ExperimentId, const Models::OfflineExperimentRequest &request);

      /**
       * @summary 下线实验组。
       *
       * @param request OfflineExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineExperimentGroupResponse
       */
      Models::OfflineExperimentGroupResponse offlineExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::OfflineExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线实验组。
       *
       * @param request OfflineExperimentGroupRequest
       * @return OfflineExperimentGroupResponse
       */
      Models::OfflineExperimentGroupResponse offlineExperimentGroup(const string &ExperimentGroupId, const Models::OfflineExperimentGroupRequest &request);

      /**
       * @summary 下线实验室。
       *
       * @param request OfflineLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineLaboratoryResponse
       */
      Models::OfflineLaboratoryResponse offlineLaboratoryWithOptions(const string &LaboratoryId, const Models::OfflineLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线实验室。
       *
       * @param request OfflineLaboratoryRequest
       * @return OfflineLaboratoryResponse
       */
      Models::OfflineLaboratoryResponse offlineLaboratory(const string &LaboratoryId, const Models::OfflineLaboratoryRequest &request);

      /**
       * @summary 下线召回管理服务
       *
       * @param request OfflineRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineRecallManagementServiceResponse
       */
      Models::OfflineRecallManagementServiceResponse offlineRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::OfflineRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线召回管理服务
       *
       * @param request OfflineRecallManagementServiceRequest
       * @return OfflineRecallManagementServiceResponse
       */
      Models::OfflineRecallManagementServiceResponse offlineRecallManagementService(const string &RecallManagementServiceId, const Models::OfflineRecallManagementServiceRequest &request);

      /**
       * @summary 上线实验
       *
       * @param request OnlineExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineExperimentResponse
       */
      Models::OnlineExperimentResponse onlineExperimentWithOptions(const string &ExperimentId, const Models::OnlineExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线实验
       *
       * @param request OnlineExperimentRequest
       * @return OnlineExperimentResponse
       */
      Models::OnlineExperimentResponse onlineExperiment(const string &ExperimentId, const Models::OnlineExperimentRequest &request);

      /**
       * @summary 上线实验组。
       *
       * @param request OnlineExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineExperimentGroupResponse
       */
      Models::OnlineExperimentGroupResponse onlineExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::OnlineExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线实验组。
       *
       * @param request OnlineExperimentGroupRequest
       * @return OnlineExperimentGroupResponse
       */
      Models::OnlineExperimentGroupResponse onlineExperimentGroup(const string &ExperimentGroupId, const Models::OnlineExperimentGroupRequest &request);

      /**
       * @summary 上线实验室。
       *
       * @param request OnlineLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineLaboratoryResponse
       */
      Models::OnlineLaboratoryResponse onlineLaboratoryWithOptions(const string &LaboratoryId, const Models::OnlineLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线实验室。
       *
       * @param request OnlineLaboratoryRequest
       * @return OnlineLaboratoryResponse
       */
      Models::OnlineLaboratoryResponse onlineLaboratory(const string &LaboratoryId, const Models::OnlineLaboratoryRequest &request);

      /**
       * @summary 上线召回管理服务
       *
       * @param request OnlineRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineRecallManagementServiceResponse
       */
      Models::OnlineRecallManagementServiceResponse onlineRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::OnlineRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线召回管理服务
       *
       * @param request OnlineRecallManagementServiceRequest
       * @return OnlineRecallManagementServiceResponse
       */
      Models::OnlineRecallManagementServiceResponse onlineRecallManagementService(const string &RecallManagementServiceId, const Models::OnlineRecallManagementServiceRequest &request);

      /**
       * @summary 将maxcompute的表同步到召回引擎中。
       *
       * @param request PublishRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRecallManagementTableResponse
       */
      Models::PublishRecallManagementTableResponse publishRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::PublishRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将maxcompute的表同步到召回引擎中。
       *
       * @param request PublishRecallManagementTableRequest
       * @return PublishRecallManagementTableResponse
       */
      Models::PublishRecallManagementTableResponse publishRecallManagementTable(const string &RecallManagementTableId, const Models::PublishRecallManagementTableRequest &request);

      /**
       * @summary 推全。
       *
       * @param request PushAllExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushAllExperimentResponse
       */
      Models::PushAllExperimentResponse pushAllExperimentWithOptions(const string &ExperimentId, const Models::PushAllExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推全。
       *
       * @param request PushAllExperimentRequest
       * @return PushAllExperimentResponse
       */
      Models::PushAllExperimentResponse pushAllExperiment(const string &ExperimentId, const Models::PushAllExperimentRequest &request);

      /**
       * @summary 推送指标到指定资源规则
       *
       * @param tmpReq PushResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushResourceRuleResponse
       */
      Models::PushResourceRuleResponse pushResourceRuleWithOptions(const string &ResourceRuleId, const Models::PushResourceRuleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送指标到指定资源规则
       *
       * @param request PushResourceRuleRequest
       * @return PushResourceRuleResponse
       */
      Models::PushResourceRuleResponse pushResourceRule(const string &ResourceRuleId, const Models::PushResourceRuleRequest &request);

      /**
       * @summary 查看样本一致性任务差异的详情
       *
       * @param request QuerySampleConsistencyJobDifferenceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySampleConsistencyJobDifferenceResponse
       */
      Models::QuerySampleConsistencyJobDifferenceResponse querySampleConsistencyJobDifferenceWithOptions(const string &SampleConsistencyJobId, const Models::QuerySampleConsistencyJobDifferenceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看样本一致性任务差异的详情
       *
       * @param request QuerySampleConsistencyJobDifferenceRequest
       * @return QuerySampleConsistencyJobDifferenceResponse
       */
      Models::QuerySampleConsistencyJobDifferenceResponse querySampleConsistencyJobDifference(const string &SampleConsistencyJobId, const Models::QuerySampleConsistencyJobDifferenceRequest &request);

      /**
       * @summary 查询流量调控目标的单品调控报表详情。
       *
       * @param request QueryTrafficControlTargetItemReportDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTrafficControlTargetItemReportDetailResponse
       */
      Models::QueryTrafficControlTargetItemReportDetailResponse queryTrafficControlTargetItemReportDetailWithOptions(const string &TrafficControlTargetId, const Models::QueryTrafficControlTargetItemReportDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流量调控目标的单品调控报表详情。
       *
       * @param request QueryTrafficControlTargetItemReportDetailRequest
       * @return QueryTrafficControlTargetItemReportDetailResponse
       */
      Models::QueryTrafficControlTargetItemReportDetailResponse queryTrafficControlTargetItemReportDetail(const string &TrafficControlTargetId, const Models::QueryTrafficControlTargetItemReportDetailRequest &request);

      /**
       * @summary 发布流量调控任务
       *
       * @param request ReleaseTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseTrafficControlTaskResponse
       */
      Models::ReleaseTrafficControlTaskResponse releaseTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::ReleaseTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布流量调控任务
       *
       * @param request ReleaseTrafficControlTaskRequest
       * @return ReleaseTrafficControlTaskResponse
       */
      Models::ReleaseTrafficControlTaskResponse releaseTrafficControlTask(const string &TrafficControlTaskId, const Models::ReleaseTrafficControlTaskRequest &request);

      /**
       * @summary 对指标组进行报表。
       *
       * @param request ReportABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportABMetricGroupResponse
       */
      Models::ReportABMetricGroupResponse reportABMetricGroupWithOptions(const string &ABMetricGroupId, const Models::ReportABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对指标组进行报表。
       *
       * @param request ReportABMetricGroupRequest
       * @return ReportABMetricGroupResponse
       */
      Models::ReportABMetricGroupResponse reportABMetricGroup(const string &ABMetricGroupId, const Models::ReportABMetricGroupRequest &request);

      /**
       * @summary 样本一致性任务报表
       *
       * @param request ReportSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportSampleConsistencyJobResponse
       */
      Models::ReportSampleConsistencyJobResponse reportSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::ReportSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 样本一致性任务报表
       *
       * @param request ReportSampleConsistencyJobRequest
       * @return ReportSampleConsistencyJobResponse
       */
      Models::ReportSampleConsistencyJobResponse reportSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::ReportSampleConsistencyJobRequest &request);

      /**
       * @summary 拆分流量调控目标
       *
       * @param request SplitTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SplitTrafficControlTargetResponse
       */
      Models::SplitTrafficControlTargetResponse splitTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::SplitTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拆分流量调控目标
       *
       * @param request SplitTrafficControlTargetRequest
       * @return SplitTrafficControlTargetResponse
       */
      Models::SplitTrafficControlTargetResponse splitTrafficControlTarget(const string &TrafficControlTargetId, const Models::SplitTrafficControlTargetRequest &request);

      /**
       * @summary 开启流量调控目标
       *
       * @param request StartTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTrafficControlTargetResponse
       */
      Models::StartTrafficControlTargetResponse startTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::StartTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启流量调控目标
       *
       * @param request StartTrafficControlTargetRequest
       * @return StartTrafficControlTargetResponse
       */
      Models::StartTrafficControlTargetResponse startTrafficControlTarget(const string &TrafficControlTargetId, const Models::StartTrafficControlTargetRequest &request);

      /**
       * @summary 开启流量调控任务
       *
       * @param request StartTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTrafficControlTaskResponse
       */
      Models::StartTrafficControlTaskResponse startTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::StartTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启流量调控任务
       *
       * @param request StartTrafficControlTaskRequest
       * @return StartTrafficControlTaskResponse
       */
      Models::StartTrafficControlTaskResponse startTrafficControlTask(const string &TrafficControlTaskId, const Models::StartTrafficControlTaskRequest &request);

      /**
       * @summary 停止样本一致性任务
       *
       * @param request StopSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSampleConsistencyJobResponse
       */
      Models::StopSampleConsistencyJobResponse stopSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::StopSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止样本一致性任务
       *
       * @param request StopSampleConsistencyJobRequest
       * @return StopSampleConsistencyJobResponse
       */
      Models::StopSampleConsistencyJobResponse stopSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::StopSampleConsistencyJobRequest &request);

      /**
       * @summary 停止流量调控目标
       *
       * @param request StopTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTrafficControlTargetResponse
       */
      Models::StopTrafficControlTargetResponse stopTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::StopTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止流量调控目标
       *
       * @param request StopTrafficControlTargetRequest
       * @return StopTrafficControlTargetResponse
       */
      Models::StopTrafficControlTargetResponse stopTrafficControlTarget(const string &TrafficControlTargetId, const Models::StopTrafficControlTargetRequest &request);

      /**
       * @summary 停止流量调控任务
       *
       * @param request StopTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTrafficControlTaskResponse
       */
      Models::StopTrafficControlTaskResponse stopTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::StopTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止流量调控任务
       *
       * @param request StopTrafficControlTaskRequest
       * @return StopTrafficControlTaskResponse
       */
      Models::StopTrafficControlTaskResponse stopTrafficControlTask(const string &TrafficControlTaskId, const Models::StopTrafficControlTaskRequest &request);

      /**
       * @summary 同步特征一致性检测任务重放日志。
       *
       * @param request SyncFeatureConsistencyCheckJobReplayLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncFeatureConsistencyCheckJobReplayLogResponse
       */
      Models::SyncFeatureConsistencyCheckJobReplayLogResponse syncFeatureConsistencyCheckJobReplayLogWithOptions(const Models::SyncFeatureConsistencyCheckJobReplayLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步特征一致性检测任务重放日志。
       *
       * @param request SyncFeatureConsistencyCheckJobReplayLogRequest
       * @return SyncFeatureConsistencyCheckJobReplayLogResponse
       */
      Models::SyncFeatureConsistencyCheckJobReplayLogResponse syncFeatureConsistencyCheckJobReplayLog(const Models::SyncFeatureConsistencyCheckJobReplayLogRequest &request);

      /**
       * @summary 取消指定特征一致性检查正在运行中的任务。
       *
       * @param request TerminateFeatureConsistencyCheckJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateFeatureConsistencyCheckJobResponse
       */
      Models::TerminateFeatureConsistencyCheckJobResponse terminateFeatureConsistencyCheckJobWithOptions(const string &FeatureConsistencyCheckJobId, const Models::TerminateFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消指定特征一致性检查正在运行中的任务。
       *
       * @param request TerminateFeatureConsistencyCheckJobRequest
       * @return TerminateFeatureConsistencyCheckJobResponse
       */
      Models::TerminateFeatureConsistencyCheckJobResponse terminateFeatureConsistencyCheckJob(const string &FeatureConsistencyCheckJobId, const Models::TerminateFeatureConsistencyCheckJobRequest &request);

      /**
       * @summary 更新AB Test实验指标。
       *
       * @param request UpdateABMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateABMetricResponse
       */
      Models::UpdateABMetricResponse updateABMetricWithOptions(const string &ABMetricId, const Models::UpdateABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新AB Test实验指标。
       *
       * @param request UpdateABMetricRequest
       * @return UpdateABMetricResponse
       */
      Models::UpdateABMetricResponse updateABMetric(const string &ABMetricId, const Models::UpdateABMetricRequest &request);

      /**
       * @summary 更新AB test实验指标组。
       *
       * @param request UpdateABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateABMetricGroupResponse
       */
      Models::UpdateABMetricGroupResponse updateABMetricGroupWithOptions(const string &ABMetricGroupId, const Models::UpdateABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新AB test实验指标组。
       *
       * @param request UpdateABMetricGroupRequest
       * @return UpdateABMetricGroupResponse
       */
      Models::UpdateABMetricGroupResponse updateABMetricGroup(const string &ABMetricGroupId, const Models::UpdateABMetricGroupRequest &request);

      /**
       * @summary 更新指定人群。
       *
       * @param request UpdateCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCrowdResponse
       */
      Models::UpdateCrowdResponse updateCrowdWithOptions(const string &CrowdId, const Models::UpdateCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新指定人群。
       *
       * @param request UpdateCrowdRequest
       * @return UpdateCrowdResponse
       */
      Models::UpdateCrowdResponse updateCrowd(const string &CrowdId, const Models::UpdateCrowdRequest &request);

      /**
       * @summary 更新引擎配置。
       *
       * @param request UpdateEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEngineConfigResponse
       */
      Models::UpdateEngineConfigResponse updateEngineConfigWithOptions(const string &EngineConfigId, const Models::UpdateEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新引擎配置。
       *
       * @param request UpdateEngineConfigRequest
       * @return UpdateEngineConfigResponse
       */
      Models::UpdateEngineConfigResponse updateEngineConfig(const string &EngineConfigId, const Models::UpdateEngineConfigRequest &request);

      /**
       * @summary 更新实验。
       *
       * @param request UpdateExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentResponse
       */
      Models::UpdateExperimentResponse updateExperimentWithOptions(const string &ExperimentId, const Models::UpdateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实验。
       *
       * @param request UpdateExperimentRequest
       * @return UpdateExperimentResponse
       */
      Models::UpdateExperimentResponse updateExperiment(const string &ExperimentId, const Models::UpdateExperimentRequest &request);

      /**
       * @summary 更新指定实验组。
       *
       * @param request UpdateExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentGroupResponse
       */
      Models::UpdateExperimentGroupResponse updateExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::UpdateExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新指定实验组。
       *
       * @param request UpdateExperimentGroupRequest
       * @return UpdateExperimentGroupResponse
       */
      Models::UpdateExperimentGroupResponse updateExperimentGroup(const string &ExperimentGroupId, const Models::UpdateExperimentGroupRequest &request);

      /**
       * @summary 更新特征一致性检查配置信息。
       *
       * @param request UpdateFeatureConsistencyCheckJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFeatureConsistencyCheckJobConfigResponse
       */
      Models::UpdateFeatureConsistencyCheckJobConfigResponse updateFeatureConsistencyCheckJobConfigWithOptions(const string &FeatureConsistencyCheckJobConfigId, const Models::UpdateFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新特征一致性检查配置信息。
       *
       * @param request UpdateFeatureConsistencyCheckJobConfigRequest
       * @return UpdateFeatureConsistencyCheckJobConfigResponse
       */
      Models::UpdateFeatureConsistencyCheckJobConfigResponse updateFeatureConsistencyCheckJobConfig(const string &FeatureConsistencyCheckJobConfigId, const Models::UpdateFeatureConsistencyCheckJobConfigRequest &request);

      /**
       * @summary 更新指定实例下指定资源的信息。
       *
       * @param request UpdateInstanceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResourceResponse
       */
      Models::UpdateInstanceResourceResponse updateInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const Models::UpdateInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新指定实例下指定资源的信息。
       *
       * @param request UpdateInstanceResourceRequest
       * @return UpdateInstanceResourceResponse
       */
      Models::UpdateInstanceResourceResponse updateInstanceResource(const string &InstanceId, const string &ResourceId, const Models::UpdateInstanceResourceRequest &request);

      /**
       * @summary 更新实验室。
       *
       * @param request UpdateLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLaboratoryResponse
       */
      Models::UpdateLaboratoryResponse updateLaboratoryWithOptions(const string &LaboratoryId, const Models::UpdateLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实验室。
       *
       * @param request UpdateLaboratoryRequest
       * @return UpdateLaboratoryResponse
       */
      Models::UpdateLaboratoryResponse updateLaboratory(const string &LaboratoryId, const Models::UpdateLaboratoryRequest &request);

      /**
       * @summary 更新层。
       *
       * @param request UpdateLayerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLayerResponse
       */
      Models::UpdateLayerResponse updateLayerWithOptions(const string &LayerId, const Models::UpdateLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新层。
       *
       * @param request UpdateLayerRequest
       * @return UpdateLayerResponse
       */
      Models::UpdateLayerResponse updateLayer(const string &LayerId, const Models::UpdateLayerRequest &request);

      /**
       * @summary 更新参数。
       *
       * @param request UpdateParamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateParamResponse
       */
      Models::UpdateParamResponse updateParamWithOptions(const string &ParamId, const Models::UpdateParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新参数。
       *
       * @param request UpdateParamRequest
       * @return UpdateParamResponse
       */
      Models::UpdateParamResponse updateParam(const string &ParamId, const Models::UpdateParamRequest &request);

      /**
       * @summary 更新召回管理初始化配置。
       *
       * @param request UpdateRecallManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecallManagementConfigResponse
       */
      Models::UpdateRecallManagementConfigResponse updateRecallManagementConfigWithOptions(const Models::UpdateRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新召回管理初始化配置。
       *
       * @param request UpdateRecallManagementConfigRequest
       * @return UpdateRecallManagementConfigResponse
       */
      Models::UpdateRecallManagementConfigResponse updateRecallManagementConfig(const Models::UpdateRecallManagementConfigRequest &request);

      /**
       * @summary 更新召回管理服务信息
       *
       * @param request UpdateRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecallManagementServiceResponse
       */
      Models::UpdateRecallManagementServiceResponse updateRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::UpdateRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新召回管理服务信息
       *
       * @param request UpdateRecallManagementServiceRequest
       * @return UpdateRecallManagementServiceResponse
       */
      Models::UpdateRecallManagementServiceResponse updateRecallManagementService(const string &RecallManagementServiceId, const Models::UpdateRecallManagementServiceRequest &request);

      /**
       * @summary 更新召回管理服务版本配置
       *
       * @param request UpdateRecallManagementServiceVersionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecallManagementServiceVersionConfigResponse
       */
      Models::UpdateRecallManagementServiceVersionConfigResponse updateRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::UpdateRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新召回管理服务版本配置
       *
       * @param request UpdateRecallManagementServiceVersionConfigRequest
       * @return UpdateRecallManagementServiceVersionConfigResponse
       */
      Models::UpdateRecallManagementServiceVersionConfigResponse updateRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::UpdateRecallManagementServiceVersionConfigRequest &request);

      /**
       * @summary 更新召回管理表。
       *
       * @param request UpdateRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecallManagementTableResponse
       */
      Models::UpdateRecallManagementTableResponse updateRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::UpdateRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新召回管理表。
       *
       * @param request UpdateRecallManagementTableRequest
       * @return UpdateRecallManagementTableResponse
       */
      Models::UpdateRecallManagementTableResponse updateRecallManagementTable(const string &RecallManagementTableId, const Models::UpdateRecallManagementTableRequest &request);

      /**
       * @summary 获取资源规则列表
       *
       * @param request UpdateResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceRuleResponse
       */
      Models::UpdateResourceRuleResponse updateResourceRuleWithOptions(const string &ResourceRuleId, const Models::UpdateResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源规则列表
       *
       * @param request UpdateResourceRuleRequest
       * @return UpdateResourceRuleResponse
       */
      Models::UpdateResourceRuleResponse updateResourceRule(const string &ResourceRuleId, const Models::UpdateResourceRuleRequest &request);

      /**
       * @summary 更新资源规则条目
       *
       * @param request UpdateResourceRuleItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceRuleItemResponse
       */
      Models::UpdateResourceRuleItemResponse updateResourceRuleItemWithOptions(const string &ResourceRuleId, const string &ResourceRuleItemId, const Models::UpdateResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新资源规则条目
       *
       * @param request UpdateResourceRuleItemRequest
       * @return UpdateResourceRuleItemResponse
       */
      Models::UpdateResourceRuleItemResponse updateResourceRuleItem(const string &ResourceRuleId, const string &ResourceRuleItemId, const Models::UpdateResourceRuleItemRequest &request);

      /**
       * @summary 更新场景
       *
       * @param request UpdateSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSceneResponse
       */
      Models::UpdateSceneResponse updateSceneWithOptions(const string &SceneId, const Models::UpdateSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新场景
       *
       * @param request UpdateSceneRequest
       * @return UpdateSceneResponse
       */
      Models::UpdateSceneResponse updateScene(const string &SceneId, const Models::UpdateSceneRequest &request);

      /**
       * @summary 获取数据表详细信息。
       *
       * @param request UpdateTableMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableMetaResponse
       */
      Models::UpdateTableMetaResponse updateTableMetaWithOptions(const string &TableMetaId, const Models::UpdateTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据表详细信息。
       *
       * @param request UpdateTableMetaRequest
       * @return UpdateTableMetaResponse
       */
      Models::UpdateTableMetaResponse updateTableMeta(const string &TableMetaId, const Models::UpdateTableMetaRequest &request);

      /**
       * @summary 更新流量调控目标
       *
       * @param request UpdateTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficControlTargetResponse
       */
      Models::UpdateTrafficControlTargetResponse updateTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::UpdateTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流量调控目标
       *
       * @param request UpdateTrafficControlTargetRequest
       * @return UpdateTrafficControlTargetResponse
       */
      Models::UpdateTrafficControlTargetResponse updateTrafficControlTarget(const string &TrafficControlTargetId, const Models::UpdateTrafficControlTargetRequest &request);

      /**
       * @summary 更新流量调控任务
       *
       * @param request UpdateTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficControlTaskResponse
       */
      Models::UpdateTrafficControlTaskResponse updateTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::UpdateTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流量调控任务
       *
       * @param request UpdateTrafficControlTaskRequest
       * @return UpdateTrafficControlTaskResponse
       */
      Models::UpdateTrafficControlTaskResponse updateTrafficControlTask(const string &TrafficControlTaskId, const Models::UpdateTrafficControlTaskRequest &request);

      /**
       * @summary 更新流量调控任务的流量参数
       *
       * @param request UpdateTrafficControlTaskTrafficRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficControlTaskTrafficResponse
       */
      Models::UpdateTrafficControlTaskTrafficResponse updateTrafficControlTaskTrafficWithOptions(const string &TrafficControlTaskId, const Models::UpdateTrafficControlTaskTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流量调控任务的流量参数
       *
       * @param request UpdateTrafficControlTaskTrafficRequest
       * @return UpdateTrafficControlTaskTrafficResponse
       */
      Models::UpdateTrafficControlTaskTrafficResponse updateTrafficControlTaskTraffic(const string &TrafficControlTaskId, const Models::UpdateTrafficControlTaskTrafficRequest &request);

      /**
       * @summary 上传数据
       *
       * @param request UploadRecommendationDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadRecommendationDataResponse
       */
      Models::UploadRecommendationDataResponse uploadRecommendationDataWithOptions(const Models::UploadRecommendationDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传数据
       *
       * @param request UploadRecommendationDataRequest
       * @return UploadRecommendationDataResponse
       */
      Models::UploadRecommendationDataResponse uploadRecommendationData(const Models::UploadRecommendationDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
