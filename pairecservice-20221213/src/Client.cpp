#include <darabonba/Core.hpp>
#include <alibabacloud/PaiRecService20221213.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::PaiRecService20221213::Models;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{

AlibabaCloud::PaiRecService20221213::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("pairecservice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 应用/发布指定的推荐引擎配置
 *
 * @param request ApplyEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyEngineConfigResponse
 */
ApplyEngineConfigResponse Client::applyEngineConfigWithOptions(const string &EngineConfigId, const ApplyEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId) , "/action/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyEngineConfigResponse>();
}

/**
 * @summary 应用/发布指定的推荐引擎配置
 *
 * @param request ApplyEngineConfigRequest
 * @return ApplyEngineConfigResponse
 */
ApplyEngineConfigResponse Client::applyEngineConfig(const string &EngineConfigId, const ApplyEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return applyEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary 特征一致性检查数据回流。
 *
 * @param request BackflowFeatureConsistencyCheckJobDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BackflowFeatureConsistencyCheckJobDataResponse
 */
BackflowFeatureConsistencyCheckJobDataResponse Client::backflowFeatureConsistencyCheckJobDataWithOptions(const BackflowFeatureConsistencyCheckJobDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFeatureConsistencyCheckJobConfigId()) {
    body["FeatureConsistencyCheckJobConfigId"] = request.getFeatureConsistencyCheckJobConfigId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemFeatures()) {
    body["ItemFeatures"] = request.getItemFeatures();
  }

  if (!!request.hasLogItemId()) {
    body["LogItemId"] = request.getLogItemId();
  }

  if (!!request.hasLogRequestId()) {
    body["LogRequestId"] = request.getLogRequestId();
  }

  if (!!request.hasLogRequestTime()) {
    body["LogRequestTime"] = request.getLogRequestTime();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasSceneName()) {
    body["SceneName"] = request.getSceneName();
  }

  if (!!request.hasScores()) {
    body["Scores"] = request.getScores();
  }

  if (!!request.hasServiceName()) {
    body["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasUserFeatures()) {
    body["UserFeatures"] = request.getUserFeatures();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BackflowFeatureConsistencyCheckJobData"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/action/backflowdata")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BackflowFeatureConsistencyCheckJobDataResponse>();
}

/**
 * @summary 特征一致性检查数据回流。
 *
 * @param request BackflowFeatureConsistencyCheckJobDataRequest
 * @return BackflowFeatureConsistencyCheckJobDataResponse
 */
BackflowFeatureConsistencyCheckJobDataResponse Client::backflowFeatureConsistencyCheckJobData(const BackflowFeatureConsistencyCheckJobDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return backflowFeatureConsistencyCheckJobDataWithOptions(request, headers, runtime);
}

/**
 * @summary 更改召回管理服务的版本
 *
 * @param request ChangeRecallManagementServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeRecallManagementServiceVersionResponse
 */
ChangeRecallManagementServiceVersionResponse Client::changeRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const ChangeRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRecallManagementServiceVersionId()) {
    body["RecallManagementServiceVersionId"] = request.getRecallManagementServiceVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeRecallManagementServiceVersion"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/action/changeversion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeRecallManagementServiceVersionResponse>();
}

/**
 * @summary 更改召回管理服务的版本
 *
 * @param request ChangeRecallManagementServiceVersionRequest
 * @return ChangeRecallManagementServiceVersionResponse
 */
ChangeRecallManagementServiceVersionResponse Client::changeRecallManagementServiceVersion(const string &RecallManagementServiceId, const ChangeRecallManagementServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeRecallManagementServiceVersionWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary 检测实例下配置的资源的连接状态。
 *
 * @param request CheckInstanceResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstanceResourcesResponse
 */
CheckInstanceResourcesResponse Client::checkInstanceResourcesWithOptions(const string &InstanceId, const CheckInstanceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckInstanceResources"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/action/checkresources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstanceResourcesResponse>();
}

/**
 * @summary 检测实例下配置的资源的连接状态。
 *
 * @param request CheckInstanceResourcesRequest
 * @return CheckInstanceResourcesResponse
 */
CheckInstanceResourcesResponse Client::checkInstanceResources(const string &InstanceId, const CheckInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkInstanceResourcesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 校验流量调控任务中的表达式
 *
 * @param request CheckTrafficControlTaskExpressionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckTrafficControlTaskExpressionResponse
 */
CheckTrafficControlTaskExpressionResponse Client::checkTrafficControlTaskExpressionWithOptions(const CheckTrafficControlTaskExpressionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpression()) {
    query["Expression"] = request.getExpression();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTableMetaId()) {
    query["TableMetaId"] = request.getTableMetaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckTrafficControlTaskExpression"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/action/checkexpression")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckTrafficControlTaskExpressionResponse>();
}

/**
 * @summary 校验流量调控任务中的表达式
 *
 * @param request CheckTrafficControlTaskExpressionRequest
 * @return CheckTrafficControlTaskExpressionResponse
 */
CheckTrafficControlTaskExpressionResponse Client::checkTrafficControlTaskExpression(const CheckTrafficControlTaskExpressionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkTrafficControlTaskExpressionWithOptions(request, headers, runtime);
}

/**
 * @summary 克隆指定的推荐引擎配置
 *
 * @param request CloneEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneEngineConfigResponse
 */
CloneEngineConfigResponse Client::cloneEngineConfigWithOptions(const string &EngineConfigId, const CloneEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneEngineConfigResponse>();
}

/**
 * @summary 克隆指定的推荐引擎配置
 *
 * @param request CloneEngineConfigRequest
 * @return CloneEngineConfigResponse
 */
CloneEngineConfigResponse Client::cloneEngineConfig(const string &EngineConfigId, const CloneEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary 克隆实验。
 *
 * @param request CloneExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneExperimentResponse
 */
CloneExperimentResponse Client::cloneExperimentWithOptions(const string &ExperimentId, const CloneExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneExperimentResponse>();
}

/**
 * @summary 克隆实验。
 *
 * @param request CloneExperimentRequest
 * @return CloneExperimentResponse
 */
CloneExperimentResponse Client::cloneExperiment(const string &ExperimentId, const CloneExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 克隆实验组，并克隆实验组下的所有实验至新的实验组中。
 *
 * @param request CloneExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneExperimentGroupResponse
 */
CloneExperimentGroupResponse Client::cloneExperimentGroupWithOptions(const string &ExperimentGroupId, const CloneExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLayerId()) {
    body["LayerId"] = request.getLayerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneExperimentGroupResponse>();
}

/**
 * @summary 克隆实验组，并克隆实验组下的所有实验至新的实验组中。
 *
 * @param request CloneExperimentGroupRequest
 * @return CloneExperimentGroupResponse
 */
CloneExperimentGroupResponse Client::cloneExperimentGroup(const string &ExperimentGroupId, const CloneExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary 克隆特征一致性检查配置。
 *
 * @param request CloneFeatureConsistencyCheckJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneFeatureConsistencyCheckJobConfigResponse
 */
CloneFeatureConsistencyCheckJobConfigResponse Client::cloneFeatureConsistencyCheckJobConfigWithOptions(const string &SourceFeatureConsistencyCheckJobConfigId, const CloneFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneFeatureConsistencyCheckJobConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs/" , Darabonba::Encode::Encoder::percentEncode(SourceFeatureConsistencyCheckJobConfigId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneFeatureConsistencyCheckJobConfigResponse>();
}

/**
 * @summary 克隆特征一致性检查配置。
 *
 * @param request CloneFeatureConsistencyCheckJobConfigRequest
 * @return CloneFeatureConsistencyCheckJobConfigResponse
 */
CloneFeatureConsistencyCheckJobConfigResponse Client::cloneFeatureConsistencyCheckJobConfig(const string &SourceFeatureConsistencyCheckJobConfigId, const CloneFeatureConsistencyCheckJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneFeatureConsistencyCheckJobConfigWithOptions(SourceFeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

/**
 * @summary 克隆实验室。
 *
 * @param request CloneLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneLaboratoryResponse
 */
CloneLaboratoryResponse Client::cloneLaboratoryWithOptions(const string &LaboratoryId, const CloneLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloneExperimentGroup()) {
    body["CloneExperimentGroup"] = request.getCloneExperimentGroup();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneLaboratoryResponse>();
}

/**
 * @summary 克隆实验室。
 *
 * @param request CloneLaboratoryRequest
 * @return CloneLaboratoryResponse
 */
CloneLaboratoryResponse Client::cloneLaboratory(const string &LaboratoryId, const CloneLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary 克隆流量调控任务
 *
 * @param request CloneTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneTrafficControlTaskResponse
 */
CloneTrafficControlTaskResponse Client::cloneTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const CloneTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneTrafficControlTaskResponse>();
}

/**
 * @summary 克隆流量调控任务
 *
 * @param request CloneTrafficControlTaskRequest
 * @return CloneTrafficControlTaskResponse
 */
CloneTrafficControlTaskResponse Client::cloneTrafficControlTask(const string &TrafficControlTaskId, const CloneTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 对比样本一致性任务
 *
 * @param request CompareSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareSampleConsistencyJobResponse
 */
CompareSampleConsistencyJobResponse Client::compareSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const CompareSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CompareSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId) , "/action/compare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareSampleConsistencyJobResponse>();
}

/**
 * @summary 对比样本一致性任务
 *
 * @param request CompareSampleConsistencyJobRequest
 * @return CompareSampleConsistencyJobResponse
 */
CompareSampleConsistencyJobResponse Client::compareSampleConsistencyJob(const string &SampleConsistencyJobId, const CompareSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return compareSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary 创建AB test实验指标
 *
 * @param request CreateABMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateABMetricResponse
 */
CreateABMetricResponse Client::createABMetricWithOptions(const CreateABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDefinition()) {
    body["Definition"] = request.getDefinition();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLeftMetricId()) {
    body["LeftMetricId"] = request.getLeftMetricId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request.getOperator();
  }

  if (!!request.hasRealtime()) {
    body["Realtime"] = request.getRealtime();
  }

  if (!!request.hasResultResourceId()) {
    body["ResultResourceId"] = request.getResultResourceId();
  }

  if (!!request.hasRightMetricId()) {
    body["RightMetricId"] = request.getRightMetricId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatisticsCycle()) {
    body["StatisticsCycle"] = request.getStatisticsCycle();
  }

  if (!!request.hasTableMetaId()) {
    body["TableMetaId"] = request.getTableMetaId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateABMetric"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateABMetricResponse>();
}

/**
 * @summary 创建AB test实验指标
 *
 * @param request CreateABMetricRequest
 * @return CreateABMetricResponse
 */
CreateABMetricResponse Client::createABMetric(const CreateABMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createABMetricWithOptions(request, headers, runtime);
}

/**
 * @summary 创建指标组
 *
 * @param request CreateABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateABMetricGroupResponse
 */
CreateABMetricGroupResponse Client::createABMetricGroupWithOptions(const CreateABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasABMetricIds()) {
    body["ABMetricIds"] = request.getABMetricIds();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRealtime()) {
    body["Realtime"] = request.getRealtime();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateABMetricGroupResponse>();
}

/**
 * @summary 创建指标组
 *
 * @param request CreateABMetricGroupRequest
 * @return CreateABMetricGroupResponse
 */
CreateABMetricGroupResponse Client::createABMetricGroup(const CreateABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createABMetricGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建AB指标的计算任务。
 *
 * @param request CreateCalculationJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCalculationJobsResponse
 */
CreateCalculationJobsResponse Client::createCalculationJobsWithOptions(const CreateCalculationJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasABMetricIds()) {
    body["ABMetricIds"] = request.getABMetricIds();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCalculationJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/batch/calculationjobs/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCalculationJobsResponse>();
}

/**
 * @summary 创建AB指标的计算任务。
 *
 * @param request CreateCalculationJobsRequest
 * @return CreateCalculationJobsResponse
 */
CreateCalculationJobsResponse Client::createCalculationJobs(const CreateCalculationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCalculationJobsWithOptions(request, headers, runtime);
}

/**
 * @summary 创建人群。
 *
 * @param request CreateCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCrowdResponse
 */
CreateCrowdResponse Client::createCrowdWithOptions(const CreateCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLabel()) {
    body["Label"] = request.getLabel();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.getSource();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCrowdResponse>();
}

/**
 * @summary 创建人群。
 *
 * @param request CreateCrowdRequest
 * @return CreateCrowdResponse
 */
CreateCrowdResponse Client::createCrowd(const CreateCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCrowdWithOptions(request, headers, runtime);
}

/**
 * @summary 创建引擎配置
 *
 * @param request CreateEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEngineConfigResponse
 */
CreateEngineConfigResponse Client::createEngineConfigWithOptions(const CreateEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEngineConfigResponse>();
}

/**
 * @summary 创建引擎配置
 *
 * @param request CreateEngineConfigRequest
 * @return CreateEngineConfigResponse
 */
CreateEngineConfigResponse Client::createEngineConfig(const CreateEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEngineConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 创建实验。
 *
 * @param request CreateExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperimentResponse
 */
CreateExperimentResponse Client::createExperimentWithOptions(const CreateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExperimentGroupId()) {
    body["ExperimentGroupId"] = request.getExperimentGroupId();
  }

  if (!!request.hasFlowPercent()) {
    body["FlowPercent"] = request.getFlowPercent();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperimentResponse>();
}

/**
 * @summary 创建实验。
 *
 * @param request CreateExperimentRequest
 * @return CreateExperimentResponse
 */
CreateExperimentResponse Client::createExperiment(const CreateExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperimentWithOptions(request, headers, runtime);
}

/**
 * @summary 创建实验组。
 *
 * @param request CreateExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperimentGroupResponse
 */
CreateExperimentGroupResponse Client::createExperimentGroupWithOptions(const CreateExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasCrowdId()) {
    body["CrowdId"] = request.getCrowdId();
  }

  if (!!request.hasCrowdTargetType()) {
    body["CrowdTargetType"] = request.getCrowdTargetType();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDistributionTimeDuration()) {
    body["DistributionTimeDuration"] = request.getDistributionTimeDuration();
  }

  if (!!request.hasDistributionType()) {
    body["DistributionType"] = request.getDistributionType();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLayerId()) {
    body["LayerId"] = request.getLayerId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNeedAA()) {
    body["NeedAA"] = request.getNeedAA();
  }

  if (!!request.hasRandomFlow()) {
    body["RandomFlow"] = request.getRandomFlow();
  }

  if (!!request.hasReservedBuckets()) {
    body["ReservedBuckets"] = request.getReservedBuckets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperimentGroupResponse>();
}

/**
 * @summary 创建实验组。
 *
 * @param request CreateExperimentGroupRequest
 * @return CreateExperimentGroupResponse
 */
CreateExperimentGroupResponse Client::createExperimentGroup(const CreateExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperimentGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建特征一致性检查任务。
 *
 * @param request CreateFeatureConsistencyCheckJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFeatureConsistencyCheckJobResponse
 */
CreateFeatureConsistencyCheckJobResponse Client::createFeatureConsistencyCheckJobWithOptions(const CreateFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasFeatureConsistencyCheckJobConfigId()) {
    body["FeatureConsistencyCheckJobConfigId"] = request.getFeatureConsistencyCheckJobConfigId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSamplingDuration()) {
    body["SamplingDuration"] = request.getSamplingDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFeatureConsistencyCheckJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFeatureConsistencyCheckJobResponse>();
}

/**
 * @summary 创建特征一致性检查任务。
 *
 * @param request CreateFeatureConsistencyCheckJobRequest
 * @return CreateFeatureConsistencyCheckJobResponse
 */
CreateFeatureConsistencyCheckJobResponse Client::createFeatureConsistencyCheckJob(const CreateFeatureConsistencyCheckJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFeatureConsistencyCheckJobWithOptions(request, headers, runtime);
}

/**
 * @summary 创建特征一致性检查配置。
 *
 * @param request CreateFeatureConsistencyCheckJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFeatureConsistencyCheckJobConfigResponse
 */
CreateFeatureConsistencyCheckJobConfigResponse Client::createFeatureConsistencyCheckJobConfigWithOptions(const CreateFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCompareFeature()) {
    body["CompareFeature"] = request.getCompareFeature();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetMountPath()) {
    body["DatasetMountPath"] = request.getDatasetMountPath();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDatasetType()) {
    body["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasDatasetUri()) {
    body["DatasetUri"] = request.getDatasetUri();
  }

  if (!!request.hasDefaultRoute()) {
    body["DefaultRoute"] = request.getDefaultRoute();
  }

  if (!!request.hasEasServiceName()) {
    body["EasServiceName"] = request.getEasServiceName();
  }

  if (!!request.hasEasyRecPackagePath()) {
    body["EasyRecPackagePath"] = request.getEasyRecPackagePath();
  }

  if (!!request.hasEasyRecVersion()) {
    body["EasyRecVersion"] = request.getEasyRecVersion();
  }

  if (!!request.hasFeatureDisplayExclude()) {
    body["FeatureDisplayExclude"] = request.getFeatureDisplayExclude();
  }

  if (!!request.hasFeatureLandingResourceId()) {
    body["FeatureLandingResourceId"] = request.getFeatureLandingResourceId();
  }

  if (!!request.hasFeaturePriority()) {
    body["FeaturePriority"] = request.getFeaturePriority();
  }

  if (!!request.hasFeatureStoreItemId()) {
    body["FeatureStoreItemId"] = request.getFeatureStoreItemId();
  }

  if (!!request.hasFeatureStoreModelId()) {
    body["FeatureStoreModelId"] = request.getFeatureStoreModelId();
  }

  if (!!request.hasFeatureStoreProjectId()) {
    body["FeatureStoreProjectId"] = request.getFeatureStoreProjectId();
  }

  if (!!request.hasFeatureStoreProjectName()) {
    body["FeatureStoreProjectName"] = request.getFeatureStoreProjectName();
  }

  if (!!request.hasFeatureStoreSeqFeatureView()) {
    body["FeatureStoreSeqFeatureView"] = request.getFeatureStoreSeqFeatureView();
  }

  if (!!request.hasFeatureStoreUserId()) {
    body["FeatureStoreUserId"] = request.getFeatureStoreUserId();
  }

  if (!!request.hasFgJarVersion()) {
    body["FgJarVersion"] = request.getFgJarVersion();
  }

  if (!!request.hasFgJsonFileName()) {
    body["FgJsonFileName"] = request.getFgJsonFileName();
  }

  if (!!request.hasGenerateZip()) {
    body["GenerateZip"] = request.getGenerateZip();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemIdField()) {
    body["ItemIdField"] = request.getItemIdField();
  }

  if (!!request.hasItemTable()) {
    body["ItemTable"] = request.getItemTable();
  }

  if (!!request.hasItemTablePartitionField()) {
    body["ItemTablePartitionField"] = request.getItemTablePartitionField();
  }

  if (!!request.hasItemTablePartitionFieldFormat()) {
    body["ItemTablePartitionFieldFormat"] = request.getItemTablePartitionFieldFormat();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOssResourceId()) {
    body["OssResourceId"] = request.getOssResourceId();
  }

  if (!!request.hasPredictWorkerCount()) {
    body["PredictWorkerCount"] = request.getPredictWorkerCount();
  }

  if (!!request.hasPredictWorkerCpu()) {
    body["PredictWorkerCpu"] = request.getPredictWorkerCpu();
  }

  if (!!request.hasPredictWorkerMemory()) {
    body["PredictWorkerMemory"] = request.getPredictWorkerMemory();
  }

  if (!!request.hasResourceConfig()) {
    body["ResourceConfig"] = request.getResourceConfig();
  }

  if (!!request.hasSampleRate()) {
    body["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasSwitchId()) {
    body["SwitchId"] = request.getSwitchId();
  }

  if (!!request.hasUseFeatureStore()) {
    body["UseFeatureStore"] = request.getUseFeatureStore();
  }

  if (!!request.hasUserIdField()) {
    body["UserIdField"] = request.getUserIdField();
  }

  if (!!request.hasUserTable()) {
    body["UserTable"] = request.getUserTable();
  }

  if (!!request.hasUserTablePartitionField()) {
    body["UserTablePartitionField"] = request.getUserTablePartitionField();
  }

  if (!!request.hasUserTablePartitionFieldFormat()) {
    body["UserTablePartitionFieldFormat"] = request.getUserTablePartitionFieldFormat();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasWorkflowName()) {
    body["WorkflowName"] = request.getWorkflowName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFeatureConsistencyCheckJobConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFeatureConsistencyCheckJobConfigResponse>();
}

/**
 * @summary 创建特征一致性检查配置。
 *
 * @param request CreateFeatureConsistencyCheckJobConfigRequest
 * @return CreateFeatureConsistencyCheckJobConfigResponse
 */
CreateFeatureConsistencyCheckJobConfigResponse Client::createFeatureConsistencyCheckJobConfig(const CreateFeatureConsistencyCheckJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFeatureConsistencyCheckJobConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 为指定实例配置创建新的配置资源
 *
 * @param request CreateInstanceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResourceResponse
 */
CreateInstanceResourceResponse Client::createInstanceResourceWithOptions(const string &InstanceId, const CreateInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategory()) {
    body["Category"] = request.getCategory();
  }

  if (!!request.hasGroup()) {
    body["Group"] = request.getGroup();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstanceResource"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResourceResponse>();
}

/**
 * @summary 为指定实例配置创建新的配置资源
 *
 * @param request CreateInstanceResourceRequest
 * @return CreateInstanceResourceResponse
 */
CreateInstanceResourceResponse Client::createInstanceResource(const string &InstanceId, const CreateInstanceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceResourceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建实验室
 *
 * @param request CreateLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLaboratoryResponse
 */
CreateLaboratoryResponse Client::createLaboratoryWithOptions(const CreateLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBucketCount()) {
    body["BucketCount"] = request.getBucketCount();
  }

  if (!!request.hasBucketType()) {
    body["BucketType"] = request.getBucketType();
  }

  if (!!request.hasBuckets()) {
    body["Buckets"] = request.getBuckets();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLaboratoryResponse>();
}

/**
 * @summary 创建实验室
 *
 * @param request CreateLaboratoryRequest
 * @return CreateLaboratoryResponse
 */
CreateLaboratoryResponse Client::createLaboratory(const CreateLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLaboratoryWithOptions(request, headers, runtime);
}

/**
 * @summary 创建层。
 *
 * @param request CreateLayerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLayerResponse
 */
CreateLayerResponse Client::createLayerWithOptions(const CreateLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLaboratoryId()) {
    body["LaboratoryId"] = request.getLaboratoryId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLayer"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLayerResponse>();
}

/**
 * @summary 创建层。
 *
 * @param request CreateLayerRequest
 * @return CreateLayerResponse
 */
CreateLayerResponse Client::createLayer(const CreateLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLayerWithOptions(request, headers, runtime);
}

/**
 * @summary 创建参数。
 *
 * @param request CreateParamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParamResponse
 */
CreateParamResponse Client::createParamWithOptions(const CreateParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateParam"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/params")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateParamResponse>();
}

/**
 * @summary 创建参数。
 *
 * @param request CreateParamRequest
 * @return CreateParamResponse
 */
CreateParamResponse Client::createParam(const CreateParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createParamWithOptions(request, headers, runtime);
}

/**
 * @summary 创建召回管理初始化配置。
 *
 * @param request CreateRecallManagementConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementConfigResponse
 */
CreateRecallManagementConfigResponse Client::createRecallManagementConfigWithOptions(const CreateRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkConfigs()) {
    body["NetworkConfigs"] = request.getNetworkConfigs();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementconfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementConfigResponse>();
}

/**
 * @summary 创建召回管理初始化配置。
 *
 * @param request CreateRecallManagementConfigRequest
 * @return CreateRecallManagementConfigResponse
 */
CreateRecallManagementConfigResponse Client::createRecallManagementConfig(const CreateRecallManagementConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 创建召回管理服务
 *
 * @param request CreateRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementServiceResponse
 */
CreateRecallManagementServiceResponse Client::createRecallManagementServiceWithOptions(const CreateRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementServiceResponse>();
}

/**
 * @summary 创建召回管理服务
 *
 * @param request CreateRecallManagementServiceRequest
 * @return CreateRecallManagementServiceResponse
 */
CreateRecallManagementServiceResponse Client::createRecallManagementService(const CreateRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementServiceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建召回管理版本
 *
 * @param request CreateRecallManagementServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementServiceVersionResponse
 */
CreateRecallManagementServiceVersionResponse Client::createRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const CreateRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigs()) {
    body["Configs"] = request.getConfigs();
  }

  if (!!request.hasSourceRecallManagementServiceVersionId()) {
    body["SourceRecallManagementServiceVersionId"] = request.getSourceRecallManagementServiceVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementServiceVersion"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementServiceVersionResponse>();
}

/**
 * @summary 创建召回管理版本
 *
 * @param request CreateRecallManagementServiceVersionRequest
 * @return CreateRecallManagementServiceVersionResponse
 */
CreateRecallManagementServiceVersionResponse Client::createRecallManagementServiceVersion(const string &RecallManagementServiceId, const CreateRecallManagementServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementServiceVersionWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary 创建召回管理服务版本配置
 *
 * @param request CreateRecallManagementServiceVersionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementServiceVersionConfigResponse
 */
CreateRecallManagementServiceVersionConfigResponse Client::createRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const CreateRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigType()) {
    body["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMergeConfig()) {
    body["MergeConfig"] = request.getMergeConfig();
  }

  if (!!request.hasRecallConfig()) {
    body["RecallConfig"] = request.getRecallConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementServiceVersionConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId) , "/configs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementServiceVersionConfigResponse>();
}

/**
 * @summary 创建召回管理服务版本配置
 *
 * @param request CreateRecallManagementServiceVersionConfigRequest
 * @return CreateRecallManagementServiceVersionConfigResponse
 */
CreateRecallManagementServiceVersionConfigResponse Client::createRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const CreateRecallManagementServiceVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementServiceVersionConfigWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, request, headers, runtime);
}

/**
 * @summary 创建召回管理表。
 *
 * @param request CreateRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecallManagementTableResponse
 */
CreateRecallManagementTableResponse Client::createRecallManagementTableWithOptions(const CreateRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasDataSource()) {
    body["DataSource"] = request.getDataSource();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnableDataSizeFluctuationThreshold()) {
    body["EnableDataSizeFluctuationThreshold"] = request.getEnableDataSizeFluctuationThreshold();
  }

  if (!!request.hasEnableRowCountFluctuationThreshold()) {
    body["EnableRowCountFluctuationThreshold"] = request.getEnableRowCountFluctuationThreshold();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxDataSizeFluctuationThreshold()) {
    body["MaxDataSizeFluctuationThreshold"] = request.getMaxDataSizeFluctuationThreshold();
  }

  if (!!request.hasMaxRowCountFluctuationThreshold()) {
    body["MaxRowCountFluctuationThreshold"] = request.getMaxRowCountFluctuationThreshold();
  }

  if (!!request.hasMaxcomputeProjectName()) {
    body["MaxcomputeProjectName"] = request.getMaxcomputeProjectName();
  }

  if (!!request.hasMaxcomputeSchema()) {
    body["MaxcomputeSchema"] = request.getMaxcomputeSchema();
  }

  if (!!request.hasMaxcomputeTableName()) {
    body["MaxcomputeTableName"] = request.getMaxcomputeTableName();
  }

  if (!!request.hasMinDataSizeFluctuationThreshold()) {
    body["MinDataSizeFluctuationThreshold"] = request.getMinDataSizeFluctuationThreshold();
  }

  if (!!request.hasMinRowCountFluctuationThreshold()) {
    body["MinRowCountFluctuationThreshold"] = request.getMinRowCountFluctuationThreshold();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRecallType()) {
    body["RecallType"] = request.getRecallType();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecallManagementTableResponse>();
}

/**
 * @summary 创建召回管理表。
 *
 * @param request CreateRecallManagementTableRequest
 * @return CreateRecallManagementTableResponse
 */
CreateRecallManagementTableResponse Client::createRecallManagementTable(const CreateRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRecallManagementTableWithOptions(request, headers, runtime);
}

/**
 * @summary 创建资源规则
 *
 * @param request CreateResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceRuleResponse
 */
CreateResourceRuleResponse Client::createResourceRuleWithOptions(const CreateResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricOperationType()) {
    body["MetricOperationType"] = request.getMetricOperationType();
  }

  if (!!request.hasMetricPullInfo()) {
    body["MetricPullInfo"] = request.getMetricPullInfo();
  }

  if (!!request.hasMetricPullPeriod()) {
    body["MetricPullPeriod"] = request.getMetricPullPeriod();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRuleComputingDefinition()) {
    body["RuleComputingDefinition"] = request.getRuleComputingDefinition();
  }

  if (!!request.hasRuleItems()) {
    body["RuleItems"] = request.getRuleItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceRuleResponse>();
}

/**
 * @summary 创建资源规则
 *
 * @param request CreateResourceRuleRequest
 * @return CreateResourceRuleResponse
 */
CreateResourceRuleResponse Client::createResourceRule(const CreateResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceRuleWithOptions(request, headers, runtime);
}

/**
 * @summary 创建资源规则条目
 *
 * @param request CreateResourceRuleItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceRuleItemResponse
 */
CreateResourceRuleItemResponse Client::createResourceRuleItemWithOptions(const string &ResourceRuleId, const CreateResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxValue()) {
    body["MaxValue"] = request.getMaxValue();
  }

  if (!!request.hasMinValue()) {
    body["MinValue"] = request.getMinValue();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceRuleItem"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/items")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceRuleItemResponse>();
}

/**
 * @summary 创建资源规则条目
 *
 * @param request CreateResourceRuleItemRequest
 * @return CreateResourceRuleItemResponse
 */
CreateResourceRuleItemResponse Client::createResourceRuleItem(const string &ResourceRuleId, const CreateResourceRuleItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceRuleItemWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 创建样本一致性任务
 *
 * @param request CreateSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleConsistencyJobResponse
 */
CreateSampleConsistencyJobResponse Client::createSampleConsistencyJobWithOptions(const CreateSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDuration()) {
    body["Duration"] = request.getDuration();
  }

  if (!!request.hasEasModelServiceName()) {
    body["EasModelServiceName"] = request.getEasModelServiceName();
  }

  if (!!request.hasFeatureSaveResourceId()) {
    body["FeatureSaveResourceId"] = request.getFeatureSaveResourceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemIdField()) {
    body["ItemIdField"] = request.getItemIdField();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPartitionField()) {
    body["PartitionField"] = request.getPartitionField();
  }

  if (!!request.hasPartitionFieldFormat()) {
    body["PartitionFieldFormat"] = request.getPartitionFieldFormat();
  }

  if (!!request.hasRequestIdField()) {
    body["RequestIdField"] = request.getRequestIdField();
  }

  if (!!request.hasSampleRate()) {
    body["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSampleTableName()) {
    body["SampleTableName"] = request.getSampleTableName();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasUserIdField()) {
    body["UserIdField"] = request.getUserIdField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleConsistencyJobResponse>();
}

/**
 * @summary 创建样本一致性任务
 *
 * @param request CreateSampleConsistencyJobRequest
 * @return CreateSampleConsistencyJobResponse
 */
CreateSampleConsistencyJobResponse Client::createSampleConsistencyJob(const CreateSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSampleConsistencyJobWithOptions(request, headers, runtime);
}

/**
 * @summary 创建场景
 *
 * @param request CreateSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSceneResponse
 */
CreateSceneResponse Client::createSceneWithOptions(const CreateSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFlows()) {
    body["Flows"] = request.getFlows();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScene"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSceneResponse>();
}

/**
 * @summary 创建场景
 *
 * @param request CreateSceneRequest
 * @return CreateSceneResponse
 */
CreateSceneResponse Client::createScene(const CreateSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSceneWithOptions(request, headers, runtime);
}

/**
 * @summary 在指定人群下创建子人群。
 *
 * @param request CreateSubCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubCrowdResponse
 */
CreateSubCrowdResponse Client::createSubCrowdWithOptions(const string &CrowdId, const CreateSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.getSource();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSubCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/subcrowds")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubCrowdResponse>();
}

/**
 * @summary 在指定人群下创建子人群。
 *
 * @param request CreateSubCrowdRequest
 * @return CreateSubCrowdResponse
 */
CreateSubCrowdResponse Client::createSubCrowd(const string &CrowdId, const CreateSubCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSubCrowdWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary 创建数据表。
 *
 * @param request CreateTableMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTableMetaResponse
 */
CreateTableMetaResponse Client::createTableMetaWithOptions(const CreateTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModule()) {
    body["Module"] = request.getModule();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTableMeta"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTableMetaResponse>();
}

/**
 * @summary 创建数据表。
 *
 * @param request CreateTableMetaRequest
 * @return CreateTableMetaResponse
 */
CreateTableMetaResponse Client::createTableMeta(const CreateTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTableMetaWithOptions(request, headers, runtime);
}

/**
 * @summary 创建流量调控目标
 *
 * @param request CreateTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrafficControlTargetResponse
 */
CreateTrafficControlTargetResponse Client::createTrafficControlTargetWithOptions(const CreateTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEvent()) {
    body["Event"] = request.getEvent();
  }

  if (!!request.hasItemConditionArray()) {
    body["ItemConditionArray"] = request.getItemConditionArray();
  }

  if (!!request.hasItemConditionExpress()) {
    body["ItemConditionExpress"] = request.getItemConditionExpress();
  }

  if (!!request.hasItemConditionType()) {
    body["ItemConditionType"] = request.getItemConditionType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNewProductRegulation()) {
    body["NewProductRegulation"] = request.getNewProductRegulation();
  }

  if (!!request.hasRecallName()) {
    body["RecallName"] = request.getRecallName();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisPeriod()) {
    body["StatisPeriod"] = request.getStatisPeriod();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasToleranceValue()) {
    body["ToleranceValue"] = request.getToleranceValue();
  }

  if (!!request.hasTrafficControlTaskId()) {
    body["TrafficControlTaskId"] = request.getTrafficControlTaskId();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrafficControlTargetResponse>();
}

/**
 * @summary 创建流量调控目标
 *
 * @param request CreateTrafficControlTargetRequest
 * @return CreateTrafficControlTargetResponse
 */
CreateTrafficControlTargetResponse Client::createTrafficControlTarget(const CreateTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTrafficControlTargetWithOptions(request, headers, runtime);
}

/**
 * @summary 创建流量调控任务
 *
 * @param request CreateTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrafficControlTaskResponse
 */
CreateTrafficControlTaskResponse Client::createTrafficControlTaskWithOptions(const CreateTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBehaviorTableMetaId()) {
    body["BehaviorTableMetaId"] = request.getBehaviorTableMetaId();
  }

  if (!!request.hasControlGranularity()) {
    body["ControlGranularity"] = request.getControlGranularity();
  }

  if (!!request.hasControlLogic()) {
    body["ControlLogic"] = request.getControlLogic();
  }

  if (!!request.hasControlType()) {
    body["ControlType"] = request.getControlType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEffectiveSceneIds()) {
    body["EffectiveSceneIds"] = request.getEffectiveSceneIds();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecutionTime()) {
    body["ExecutionTime"] = request.getExecutionTime();
  }

  if (!!request.hasFlinkResourceId()) {
    body["FlinkResourceId"] = request.getFlinkResourceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemConditionArray()) {
    body["ItemConditionArray"] = request.getItemConditionArray();
  }

  if (!!request.hasItemConditionExpress()) {
    body["ItemConditionExpress"] = request.getItemConditionExpress();
  }

  if (!!request.hasItemConditionType()) {
    body["ItemConditionType"] = request.getItemConditionType();
  }

  if (!!request.hasItemTableMetaId()) {
    body["ItemTableMetaId"] = request.getItemTableMetaId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPreExperimentIds()) {
    body["PreExperimentIds"] = request.getPreExperimentIds();
  }

  if (!!request.hasProdExperimentIds()) {
    body["ProdExperimentIds"] = request.getProdExperimentIds();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceIds()) {
    body["ServiceIds"] = request.getServiceIds();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisBehaviorConditionArray()) {
    body["StatisBehaviorConditionArray"] = request.getStatisBehaviorConditionArray();
  }

  if (!!request.hasStatisBehaviorConditionExpress()) {
    body["StatisBehaviorConditionExpress"] = request.getStatisBehaviorConditionExpress();
  }

  if (!!request.hasStatisBehaviorConditionType()) {
    body["StatisBehaviorConditionType"] = request.getStatisBehaviorConditionType();
  }

  if (!!request.hasTrafficControlTargets()) {
    body["TrafficControlTargets"] = request.getTrafficControlTargets();
  }

  if (!!request.hasUserConditionArray()) {
    body["UserConditionArray"] = request.getUserConditionArray();
  }

  if (!!request.hasUserConditionExpress()) {
    body["UserConditionExpress"] = request.getUserConditionExpress();
  }

  if (!!request.hasUserConditionType()) {
    body["UserConditionType"] = request.getUserConditionType();
  }

  if (!!request.hasUserTableMetaId()) {
    body["UserTableMetaId"] = request.getUserTableMetaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrafficControlTaskResponse>();
}

/**
 * @summary 创建流量调控任务
 *
 * @param request CreateTrafficControlTaskRequest
 * @return CreateTrafficControlTaskResponse
 */
CreateTrafficControlTaskResponse Client::createTrafficControlTask(const CreateTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTrafficControlTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 对指定资源规则中的计算公式进行调试
 *
 * @param tmpReq DebugResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DebugResourceRuleResponse
 */
DebugResourceRuleResponse Client::debugResourceRuleWithOptions(const string &ResourceRuleId, const DebugResourceRuleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DebugResourceRuleShrinkRequest request = DebugResourceRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetricInfo()) {
    request.setMetricInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetricInfo(), "MetricInfo", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricInfoShrink()) {
    query["MetricInfo"] = request.getMetricInfoShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DebugResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/action/debug")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DebugResourceRuleResponse>();
}

/**
 * @summary 对指定资源规则中的计算公式进行调试
 *
 * @param request DebugResourceRuleRequest
 * @return DebugResourceRuleResponse
 */
DebugResourceRuleResponse Client::debugResourceRule(const string &ResourceRuleId, const DebugResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return debugResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 删除指定AB实验指标。
 *
 * @param request DeleteABMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteABMetricResponse
 */
DeleteABMetricResponse Client::deleteABMetricWithOptions(const string &ABMetricId, const DeleteABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteABMetric"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics/" , Darabonba::Encode::Encoder::percentEncode(ABMetricId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteABMetricResponse>();
}

/**
 * @summary 删除指定AB实验指标。
 *
 * @param request DeleteABMetricRequest
 * @return DeleteABMetricResponse
 */
DeleteABMetricResponse Client::deleteABMetric(const string &ABMetricId, const DeleteABMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteABMetricWithOptions(ABMetricId, request, headers, runtime);
}

/**
 * @summary 删除AB实验指标组。
 *
 * @param request DeleteABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteABMetricGroupResponse
 */
DeleteABMetricGroupResponse Client::deleteABMetricGroupWithOptions(const string &ABMetricGroupId, const DeleteABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups/" , Darabonba::Encode::Encoder::percentEncode(ABMetricGroupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteABMetricGroupResponse>();
}

/**
 * @summary 删除AB实验指标组。
 *
 * @param request DeleteABMetricGroupRequest
 * @return DeleteABMetricGroupResponse
 */
DeleteABMetricGroupResponse Client::deleteABMetricGroup(const string &ABMetricGroupId, const DeleteABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

/**
 * @summary 删除指定人群。
 *
 * @param request DeleteCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCrowdResponse
 */
DeleteCrowdResponse Client::deleteCrowdWithOptions(const string &CrowdId, const DeleteCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCrowdResponse>();
}

/**
 * @summary 删除指定人群。
 *
 * @param request DeleteCrowdRequest
 * @return DeleteCrowdResponse
 */
DeleteCrowdResponse Client::deleteCrowd(const string &CrowdId, const DeleteCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCrowdWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary 删除指定推荐引擎配置。
 *
 * @param request DeleteEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEngineConfigResponse
 */
DeleteEngineConfigResponse Client::deleteEngineConfigWithOptions(const string &EngineConfigId, const DeleteEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEngineConfigResponse>();
}

/**
 * @summary 删除指定推荐引擎配置。
 *
 * @param request DeleteEngineConfigRequest
 * @return DeleteEngineConfigResponse
 */
DeleteEngineConfigResponse Client::deleteEngineConfig(const string &EngineConfigId, const DeleteEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary 删除实验。
 *
 * @param request DeleteExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperimentResponse
 */
DeleteExperimentResponse Client::deleteExperimentWithOptions(const string &ExperimentId, const DeleteExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperimentResponse>();
}

/**
 * @summary 删除实验。
 *
 * @param request DeleteExperimentRequest
 * @return DeleteExperimentResponse
 */
DeleteExperimentResponse Client::deleteExperiment(const string &ExperimentId, const DeleteExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 删除指定实验组。
 *
 * @param request DeleteExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperimentGroupResponse
 */
DeleteExperimentGroupResponse Client::deleteExperimentGroupWithOptions(const string &ExperimentGroupId, const DeleteExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperimentGroupResponse>();
}

/**
 * @summary 删除指定实验组。
 *
 * @param request DeleteExperimentGroupRequest
 * @return DeleteExperimentGroupResponse
 */
DeleteExperimentGroupResponse Client::deleteExperimentGroup(const string &ExperimentGroupId, const DeleteExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary 删除指定实例下的指定配置资源。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResourceResponse
 */
DeleteInstanceResourceResponse Client::deleteInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceResource"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResourceResponse>();
}

/**
 * @summary 删除指定实例下的指定配置资源。
 *
 * @return DeleteInstanceResourceResponse
 */
DeleteInstanceResourceResponse Client::deleteInstanceResource(const string &InstanceId, const string &ResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceResourceWithOptions(InstanceId, ResourceId, headers, runtime);
}

/**
 * @summary 删除实验室。
 *
 * @param request DeleteLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLaboratoryResponse
 */
DeleteLaboratoryResponse Client::deleteLaboratoryWithOptions(const string &LaboratoryId, const DeleteLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLaboratoryResponse>();
}

/**
 * @summary 删除实验室。
 *
 * @param request DeleteLaboratoryRequest
 * @return DeleteLaboratoryResponse
 */
DeleteLaboratoryResponse Client::deleteLaboratory(const string &LaboratoryId, const DeleteLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary 删除层。
 *
 * @param request DeleteLayerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLayerResponse
 */
DeleteLayerResponse Client::deleteLayerWithOptions(const string &LayerId, const DeleteLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLayer"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers/" , Darabonba::Encode::Encoder::percentEncode(LayerId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLayerResponse>();
}

/**
 * @summary 删除层。
 *
 * @param request DeleteLayerRequest
 * @return DeleteLayerResponse
 */
DeleteLayerResponse Client::deleteLayer(const string &LayerId, const DeleteLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLayerWithOptions(LayerId, request, headers, runtime);
}

/**
 * @summary 删除指定参数。
 *
 * @param request DeleteParamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParamResponse
 */
DeleteParamResponse Client::deleteParamWithOptions(const string &ParamId, const DeleteParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteParam"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/params/" , Darabonba::Encode::Encoder::percentEncode(ParamId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParamResponse>();
}

/**
 * @summary 删除指定参数。
 *
 * @param request DeleteParamRequest
 * @return DeleteParamResponse
 */
DeleteParamResponse Client::deleteParam(const string &ParamId, const DeleteParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteParamWithOptions(ParamId, request, headers, runtime);
}

/**
 * @summary 删除指定召回管理服务
 *
 * @param request DeleteRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecallManagementServiceResponse
 */
DeleteRecallManagementServiceResponse Client::deleteRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const DeleteRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecallManagementServiceResponse>();
}

/**
 * @summary 删除指定召回管理服务
 *
 * @param request DeleteRecallManagementServiceRequest
 * @return DeleteRecallManagementServiceResponse
 */
DeleteRecallManagementServiceResponse Client::deleteRecallManagementService(const string &RecallManagementServiceId, const DeleteRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary 删除指定召回管理服务版本
 *
 * @param request DeleteRecallManagementServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecallManagementServiceVersionResponse
 */
DeleteRecallManagementServiceVersionResponse Client::deleteRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const DeleteRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecallManagementServiceVersion"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecallManagementServiceVersionResponse>();
}

/**
 * @summary 删除指定召回管理服务版本
 *
 * @param request DeleteRecallManagementServiceVersionRequest
 * @return DeleteRecallManagementServiceVersionResponse
 */
DeleteRecallManagementServiceVersionResponse Client::deleteRecallManagementServiceVersion(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const DeleteRecallManagementServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRecallManagementServiceVersionWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, request, headers, runtime);
}

/**
 * @summary 删除召回管理服务版本配置
 *
 * @param request DeleteRecallManagementServiceVersionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecallManagementServiceVersionConfigResponse
 */
DeleteRecallManagementServiceVersionConfigResponse Client::deleteRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const DeleteRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecallManagementServiceVersionConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionConfigId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecallManagementServiceVersionConfigResponse>();
}

/**
 * @summary 删除召回管理服务版本配置
 *
 * @param request DeleteRecallManagementServiceVersionConfigRequest
 * @return DeleteRecallManagementServiceVersionConfigResponse
 */
DeleteRecallManagementServiceVersionConfigResponse Client::deleteRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const DeleteRecallManagementServiceVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRecallManagementServiceVersionConfigWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, RecallManagementServiceVersionConfigId, request, headers, runtime);
}

/**
 * @summary 删除指定召回管理表。
 *
 * @param request DeleteRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecallManagementTableResponse
 */
DeleteRecallManagementTableResponse Client::deleteRecallManagementTableWithOptions(const string &RecallManagementTableId, const DeleteRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecallManagementTableResponse>();
}

/**
 * @summary 删除指定召回管理表。
 *
 * @param request DeleteRecallManagementTableRequest
 * @return DeleteRecallManagementTableResponse
 */
DeleteRecallManagementTableResponse Client::deleteRecallManagementTable(const string &RecallManagementTableId, const DeleteRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 删除资源规则
 *
 * @param request DeleteResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceRuleResponse
 */
DeleteResourceRuleResponse Client::deleteResourceRuleWithOptions(const string &ResourceRuleId, const DeleteResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceRuleResponse>();
}

/**
 * @summary 删除资源规则
 *
 * @param request DeleteResourceRuleRequest
 * @return DeleteResourceRuleResponse
 */
DeleteResourceRuleResponse Client::deleteResourceRule(const string &ResourceRuleId, const DeleteResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 删除资源规则条目
 *
 * @param request DeleteResourceRuleItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceRuleItemResponse
 */
DeleteResourceRuleItemResponse Client::deleteResourceRuleItemWithOptions(const string &ResourceRuleId, const string &ResourceRuleItemId, const DeleteResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceRuleItem"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleItemId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceRuleItemResponse>();
}

/**
 * @summary 删除资源规则条目
 *
 * @param request DeleteResourceRuleItemRequest
 * @return DeleteResourceRuleItemResponse
 */
DeleteResourceRuleItemResponse Client::deleteResourceRuleItem(const string &ResourceRuleId, const string &ResourceRuleItemId, const DeleteResourceRuleItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceRuleItemWithOptions(ResourceRuleId, ResourceRuleItemId, request, headers, runtime);
}

/**
 * @summary 删除指定的样本一致性任务
 *
 * @param request DeleteSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleConsistencyJobResponse
 */
DeleteSampleConsistencyJobResponse Client::deleteSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const DeleteSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleConsistencyJobResponse>();
}

/**
 * @summary 删除指定的样本一致性任务
 *
 * @param request DeleteSampleConsistencyJobRequest
 * @return DeleteSampleConsistencyJobResponse
 */
DeleteSampleConsistencyJobResponse Client::deleteSampleConsistencyJob(const string &SampleConsistencyJobId, const DeleteSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary 删除场景
 *
 * @param request DeleteSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSceneResponse
 */
DeleteSceneResponse Client::deleteSceneWithOptions(const string &SceneId, const DeleteSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScene"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes/" , Darabonba::Encode::Encoder::percentEncode(SceneId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSceneResponse>();
}

/**
 * @summary 删除场景
 *
 * @param request DeleteSceneRequest
 * @return DeleteSceneResponse
 */
DeleteSceneResponse Client::deleteScene(const string &SceneId, const DeleteSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSceneWithOptions(SceneId, request, headers, runtime);
}

/**
 * @summary 删除指定人群下的指定子人群。
 *
 * @param request DeleteSubCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubCrowdResponse
 */
DeleteSubCrowdResponse Client::deleteSubCrowdWithOptions(const string &CrowdId, const string &SubCrowdId, const DeleteSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSubCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/subcrowds/" , Darabonba::Encode::Encoder::percentEncode(SubCrowdId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubCrowdResponse>();
}

/**
 * @summary 删除指定人群下的指定子人群。
 *
 * @param request DeleteSubCrowdRequest
 * @return DeleteSubCrowdResponse
 */
DeleteSubCrowdResponse Client::deleteSubCrowd(const string &CrowdId, const string &SubCrowdId, const DeleteSubCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSubCrowdWithOptions(CrowdId, SubCrowdId, request, headers, runtime);
}

/**
 * @summary 删除数据表。
 *
 * @param request DeleteTableMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableMetaResponse
 */
DeleteTableMetaResponse Client::deleteTableMetaWithOptions(const string &TableMetaId, const DeleteTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTableMeta"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas/" , Darabonba::Encode::Encoder::percentEncode(TableMetaId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableMetaResponse>();
}

/**
 * @summary 删除数据表。
 *
 * @param request DeleteTableMetaRequest
 * @return DeleteTableMetaResponse
 */
DeleteTableMetaResponse Client::deleteTableMeta(const string &TableMetaId, const DeleteTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

/**
 * @summary 更新流量调控目标
 *
 * @param request DeleteTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrafficControlTargetResponse
 */
DeleteTrafficControlTargetResponse Client::deleteTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const DeleteTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrafficControlTargetResponse>();
}

/**
 * @summary 更新流量调控目标
 *
 * @param request DeleteTrafficControlTargetRequest
 * @return DeleteTrafficControlTargetResponse
 */
DeleteTrafficControlTargetResponse Client::deleteTrafficControlTarget(const string &TrafficControlTargetId, const DeleteTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary 删除指定的流量调控任务
 *
 * @param request DeleteTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrafficControlTaskResponse
 */
DeleteTrafficControlTaskResponse Client::deleteTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const DeleteTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrafficControlTaskResponse>();
}

/**
 * @summary 删除指定的流量调控任务
 *
 * @param request DeleteTrafficControlTaskRequest
 * @return DeleteTrafficControlTaskResponse
 */
DeleteTrafficControlTaskResponse Client::deleteTrafficControlTask(const string &TrafficControlTaskId, const DeleteTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 生成算法定制脚本
 *
 * @param request GenerateAlgorithmCustomizationScriptRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAlgorithmCustomizationScriptResponse
 */
GenerateAlgorithmCustomizationScriptResponse Client::generateAlgorithmCustomizationScriptWithOptions(const string &AlgorithmCustomizationId, const GenerateAlgorithmCustomizationScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeployMode()) {
    body["DeployMode"] = request.getDeployMode();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModuleFieldTypes()) {
    body["ModuleFieldTypes"] = request.getModuleFieldTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateAlgorithmCustomizationScript"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithmcustomizations/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmCustomizationId) , "/action/generatescript")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAlgorithmCustomizationScriptResponse>();
}

/**
 * @summary 生成算法定制脚本
 *
 * @param request GenerateAlgorithmCustomizationScriptRequest
 * @return GenerateAlgorithmCustomizationScriptResponse
 */
GenerateAlgorithmCustomizationScriptResponse Client::generateAlgorithmCustomizationScript(const string &AlgorithmCustomizationId, const GenerateAlgorithmCustomizationScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateAlgorithmCustomizationScriptWithOptions(AlgorithmCustomizationId, request, headers, runtime);
}

/**
 * @summary 产生流量调控的相关代码
 *
 * @param request GenerateTrafficControlTaskCodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTrafficControlTaskCodeResponse
 */
GenerateTrafficControlTaskCodeResponse Client::generateTrafficControlTaskCodeWithOptions(const string &TrafficControlTaskId, const GenerateTrafficControlTaskCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateTrafficControlTaskCode"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/generatecode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateTrafficControlTaskCodeResponse>();
}

/**
 * @summary 产生流量调控的相关代码
 *
 * @param request GenerateTrafficControlTaskCodeRequest
 * @return GenerateTrafficControlTaskCodeResponse
 */
GenerateTrafficControlTaskCodeResponse Client::generateTrafficControlTaskCode(const string &TrafficControlTaskId, const GenerateTrafficControlTaskCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateTrafficControlTaskCodeWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 产生流量调控的相关召回配置
 *
 * @param request GenerateTrafficControlTaskConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTrafficControlTaskConfigResponse
 */
GenerateTrafficControlTaskConfigResponse Client::generateTrafficControlTaskConfigWithOptions(const string &TrafficControlTaskId, const GenerateTrafficControlTaskConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateTrafficControlTaskConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/generateconfig")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateTrafficControlTaskConfigResponse>();
}

/**
 * @summary 产生流量调控的相关召回配置
 *
 * @param request GenerateTrafficControlTaskConfigRequest
 * @return GenerateTrafficControlTaskConfigResponse
 */
GenerateTrafficControlTaskConfigResponse Client::generateTrafficControlTaskConfig(const string &TrafficControlTaskId, const GenerateTrafficControlTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateTrafficControlTaskConfigWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 获取AB Test实验指标详细信息。
 *
 * @param request GetABMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetABMetricResponse
 */
GetABMetricResponse Client::getABMetricWithOptions(const string &ABMetricId, const GetABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetABMetric"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics/" , Darabonba::Encode::Encoder::percentEncode(ABMetricId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetABMetricResponse>();
}

/**
 * @summary 获取AB Test实验指标详细信息。
 *
 * @param request GetABMetricRequest
 * @return GetABMetricResponse
 */
GetABMetricResponse Client::getABMetric(const string &ABMetricId, const GetABMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getABMetricWithOptions(ABMetricId, request, headers, runtime);
}

/**
 * @summary 获取AB实验指标组详细信息。
 *
 * @param request GetABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetABMetricGroupResponse
 */
GetABMetricGroupResponse Client::getABMetricGroupWithOptions(const string &ABMetricGroupId, const GetABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups/" , Darabonba::Encode::Encoder::percentEncode(ABMetricGroupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetABMetricGroupResponse>();
}

/**
 * @summary 获取AB实验指标组详细信息。
 *
 * @param request GetABMetricGroupRequest
 * @return GetABMetricGroupResponse
 */
GetABMetricGroupResponse Client::getABMetricGroup(const string &ABMetricGroupId, const GetABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

/**
 * @summary 获取指定计算任务详细信息。
 *
 * @param request GetCalculationJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCalculationJobResponse
 */
GetCalculationJobResponse Client::getCalculationJobWithOptions(const string &CalculationJobId, const GetCalculationJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCalculationJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/calculationjobs/" , Darabonba::Encode::Encoder::percentEncode(CalculationJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCalculationJobResponse>();
}

/**
 * @summary 获取指定计算任务详细信息。
 *
 * @param request GetCalculationJobRequest
 * @return GetCalculationJobResponse
 */
GetCalculationJobResponse Client::getCalculationJob(const string &CalculationJobId, const GetCalculationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCalculationJobWithOptions(CalculationJobId, request, headers, runtime);
}

/**
 * @summary 获取引擎配置详细信息。
 *
 * @param request GetEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEngineConfigResponse
 */
GetEngineConfigResponse Client::getEngineConfigWithOptions(const string &EngineConfigId, const GetEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEngineConfigResponse>();
}

/**
 * @summary 获取引擎配置详细信息。
 *
 * @param request GetEngineConfigRequest
 * @return GetEngineConfigResponse
 */
GetEngineConfigResponse Client::getEngineConfig(const string &EngineConfigId, const GetEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary 获取实验详细信息。
 *
 * @param request GetExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentResponse
 */
GetExperimentResponse Client::getExperimentWithOptions(const string &ExperimentId, const GetExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentResponse>();
}

/**
 * @summary 获取实验详细信息。
 *
 * @param request GetExperimentRequest
 * @return GetExperimentResponse
 */
GetExperimentResponse Client::getExperiment(const string &ExperimentId, const GetExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 获取指定实验组详细信息。
 *
 * @param request GetExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentGroupResponse
 */
GetExperimentGroupResponse Client::getExperimentGroupWithOptions(const string &ExperimentGroupId, const GetExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentGroupResponse>();
}

/**
 * @summary 获取指定实验组详细信息。
 *
 * @param request GetExperimentGroupRequest
 * @return GetExperimentGroupResponse
 */
GetExperimentGroupResponse Client::getExperimentGroup(const string &ExperimentGroupId, const GetExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary 获取特征一致性检查任务详细信息。
 *
 * @param request GetFeatureConsistencyCheckJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFeatureConsistencyCheckJobResponse
 */
GetFeatureConsistencyCheckJobResponse Client::getFeatureConsistencyCheckJobWithOptions(const string &FeatureConsistencyCheckJobId, const GetFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFeatureConsistencyCheckJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFeatureConsistencyCheckJobResponse>();
}

/**
 * @summary 获取特征一致性检查任务详细信息。
 *
 * @param request GetFeatureConsistencyCheckJobRequest
 * @return GetFeatureConsistencyCheckJobResponse
 */
GetFeatureConsistencyCheckJobResponse Client::getFeatureConsistencyCheckJob(const string &FeatureConsistencyCheckJobId, const GetFeatureConsistencyCheckJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFeatureConsistencyCheckJobWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

/**
 * @summary 获取特征一致性检测配置详情。
 *
 * @param request GetFeatureConsistencyCheckJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFeatureConsistencyCheckJobConfigResponse
 */
GetFeatureConsistencyCheckJobConfigResponse Client::getFeatureConsistencyCheckJobConfigWithOptions(const string &FeatureConsistencyCheckJobConfigId, const GetFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFeatureConsistencyCheckJobConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFeatureConsistencyCheckJobConfigResponse>();
}

/**
 * @summary 获取特征一致性检测配置详情。
 *
 * @param request GetFeatureConsistencyCheckJobConfigRequest
 * @return GetFeatureConsistencyCheckJobConfigResponse
 */
GetFeatureConsistencyCheckJobConfigResponse Client::getFeatureConsistencyCheckJobConfig(const string &FeatureConsistencyCheckJobConfigId, const GetFeatureConsistencyCheckJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFeatureConsistencyCheckJobConfigWithOptions(FeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

/**
 * @summary 获取指定推荐全链路深度定制开发平台实例信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary 获取指定推荐全链路深度定制开发平台实例信息。
 *
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 获取指定实例下指定资源的详细信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResourceResponse
 */
GetInstanceResourceResponse Client::getInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceResource"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResourceResponse>();
}

/**
 * @summary 获取指定实例下指定资源的详细信息。
 *
 * @return GetInstanceResourceResponse
 */
GetInstanceResourceResponse Client::getInstanceResource(const string &InstanceId, const string &ResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceResourceWithOptions(InstanceId, ResourceId, headers, runtime);
}

/**
 * @summary 获取数据源下指定表的详细信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResourceTableResponse
 */
GetInstanceResourceTableResponse Client::getInstanceResourceTableWithOptions(const string &InstanceId, const string &ResourceId, const string &TableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceResourceTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(TableName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResourceTableResponse>();
}

/**
 * @summary 获取数据源下指定表的详细信息。
 *
 * @return GetInstanceResourceTableResponse
 */
GetInstanceResourceTableResponse Client::getInstanceResourceTable(const string &InstanceId, const string &ResourceId, const string &TableName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceResourceTableWithOptions(InstanceId, ResourceId, TableName, headers, runtime);
}

/**
 * @summary 获取实验室详细信息。
 *
 * @param request GetLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLaboratoryResponse
 */
GetLaboratoryResponse Client::getLaboratoryWithOptions(const string &LaboratoryId, const GetLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLaboratoryResponse>();
}

/**
 * @summary 获取实验室详细信息。
 *
 * @param request GetLaboratoryRequest
 * @return GetLaboratoryResponse
 */
GetLaboratoryResponse Client::getLaboratory(const string &LaboratoryId, const GetLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary 获取层详细信息。
 *
 * @param request GetLayerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLayerResponse
 */
GetLayerResponse Client::getLayerWithOptions(const string &LayerId, const GetLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLayer"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers/" , Darabonba::Encode::Encoder::percentEncode(LayerId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLayerResponse>();
}

/**
 * @summary 获取层详细信息。
 *
 * @param request GetLayerRequest
 * @return GetLayerResponse
 */
GetLayerResponse Client::getLayer(const string &LayerId, const GetLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLayerWithOptions(LayerId, request, headers, runtime);
}

/**
 * @summary 获取召回管理初始化配置。
 *
 * @param request GetRecallManagementConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementConfigResponse
 */
GetRecallManagementConfigResponse Client::getRecallManagementConfigWithOptions(const GetRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementconfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementConfigResponse>();
}

/**
 * @summary 获取召回管理初始化配置。
 *
 * @param request GetRecallManagementConfigRequest
 * @return GetRecallManagementConfigResponse
 */
GetRecallManagementConfigResponse Client::getRecallManagementConfig(const GetRecallManagementConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 获取召回管理任务详情。
 *
 * @param request GetRecallManagementJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementJobResponse
 */
GetRecallManagementJobResponse Client::getRecallManagementJobWithOptions(const string &RecallManagementJobId, const GetRecallManagementJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementjobs/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementJobResponse>();
}

/**
 * @summary 获取召回管理任务详情。
 *
 * @param request GetRecallManagementJobRequest
 * @return GetRecallManagementJobResponse
 */
GetRecallManagementJobResponse Client::getRecallManagementJob(const string &RecallManagementJobId, const GetRecallManagementJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementJobWithOptions(RecallManagementJobId, request, headers, runtime);
}

/**
 * @summary 获取指定召回管理服务详细信息
 *
 * @param request GetRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementServiceResponse
 */
GetRecallManagementServiceResponse Client::getRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const GetRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementServiceResponse>();
}

/**
 * @summary 获取指定召回管理服务详细信息
 *
 * @param request GetRecallManagementServiceRequest
 * @return GetRecallManagementServiceResponse
 */
GetRecallManagementServiceResponse Client::getRecallManagementService(const string &RecallManagementServiceId, const GetRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary 获取指定召回管理版本详细信息
 *
 * @param request GetRecallManagementServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementServiceVersionResponse
 */
GetRecallManagementServiceVersionResponse Client::getRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const GetRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementServiceVersion"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementServiceVersionResponse>();
}

/**
 * @summary 获取指定召回管理版本详细信息
 *
 * @param request GetRecallManagementServiceVersionRequest
 * @return GetRecallManagementServiceVersionResponse
 */
GetRecallManagementServiceVersionResponse Client::getRecallManagementServiceVersion(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const GetRecallManagementServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementServiceVersionWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, request, headers, runtime);
}

/**
 * @summary 获取召回管理服务版本配置详细信息
 *
 * @param request GetRecallManagementServiceVersionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementServiceVersionConfigResponse
 */
GetRecallManagementServiceVersionConfigResponse Client::getRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const GetRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementServiceVersionConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementServiceVersionConfigResponse>();
}

/**
 * @summary 获取召回管理服务版本配置详细信息
 *
 * @param request GetRecallManagementServiceVersionConfigRequest
 * @return GetRecallManagementServiceVersionConfigResponse
 */
GetRecallManagementServiceVersionConfigResponse Client::getRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const GetRecallManagementServiceVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementServiceVersionConfigWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, RecallManagementServiceVersionConfigId, request, headers, runtime);
}

/**
 * @summary 获取指定召回管理表详细信息。
 *
 * @param request GetRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecallManagementTableResponse
 */
GetRecallManagementTableResponse Client::getRecallManagementTableWithOptions(const string &RecallManagementTableId, const GetRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecallManagementTableResponse>();
}

/**
 * @summary 获取指定召回管理表详细信息。
 *
 * @param request GetRecallManagementTableRequest
 * @return GetRecallManagementTableResponse
 */
GetRecallManagementTableResponse Client::getRecallManagementTable(const string &RecallManagementTableId, const GetRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 获取资源规则详细信息
 *
 * @param request GetResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceRuleResponse
 */
GetResourceRuleResponse Client::getResourceRuleWithOptions(const string &ResourceRuleId, const GetResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceRuleResponse>();
}

/**
 * @summary 获取资源规则详细信息
 *
 * @param request GetResourceRuleRequest
 * @return GetResourceRuleResponse
 */
GetResourceRuleResponse Client::getResourceRule(const string &ResourceRuleId, const GetResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 获取样本一致性任务详细信息
 *
 * @param request GetSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSampleConsistencyJobResponse
 */
GetSampleConsistencyJobResponse Client::getSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const GetSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSampleConsistencyJobResponse>();
}

/**
 * @summary 获取样本一致性任务详细信息
 *
 * @param request GetSampleConsistencyJobRequest
 * @return GetSampleConsistencyJobResponse
 */
GetSampleConsistencyJobResponse Client::getSampleConsistencyJob(const string &SampleConsistencyJobId, const GetSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary 获取场景详细信息
 *
 * @param request GetSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSceneResponse
 */
GetSceneResponse Client::getSceneWithOptions(const string &SceneId, const GetSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScene"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes/" , Darabonba::Encode::Encoder::percentEncode(SceneId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSceneResponse>();
}

/**
 * @summary 获取场景详细信息
 *
 * @param request GetSceneRequest
 * @return GetSceneResponse
 */
GetSceneResponse Client::getScene(const string &SceneId, const GetSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSceneWithOptions(SceneId, request, headers, runtime);
}

/**
 * @summary 获取服务详细信息。
 *
 * @param request GetServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceResponse
 */
GetServiceResponse Client::getServiceWithOptions(const string &ServiceId, const GetServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/services/" , Darabonba::Encode::Encoder::percentEncode(ServiceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceResponse>();
}

/**
 * @summary 获取服务详细信息。
 *
 * @param request GetServiceRequest
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const string &ServiceId, const GetServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceWithOptions(ServiceId, request, headers, runtime);
}

/**
 * @summary 获取指定人群下的指定子人群的详细信息。
 *
 * @param request GetSubCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubCrowdResponse
 */
GetSubCrowdResponse Client::getSubCrowdWithOptions(const string &CrowdId, const string &SubCrowdId, const GetSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/subcrowds/" , Darabonba::Encode::Encoder::percentEncode(SubCrowdId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubCrowdResponse>();
}

/**
 * @summary 获取指定人群下的指定子人群的详细信息。
 *
 * @param request GetSubCrowdRequest
 * @return GetSubCrowdResponse
 */
GetSubCrowdResponse Client::getSubCrowd(const string &CrowdId, const string &SubCrowdId, const GetSubCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSubCrowdWithOptions(CrowdId, SubCrowdId, request, headers, runtime);
}

/**
 * @summary 获取数据表详细信息。
 *
 * @param request GetTableMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableMetaResponse
 */
GetTableMetaResponse Client::getTableMetaWithOptions(const string &TableMetaId, const GetTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableMeta"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas/" , Darabonba::Encode::Encoder::percentEncode(TableMetaId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableMetaResponse>();
}

/**
 * @summary 获取数据表详细信息。
 *
 * @param request GetTableMetaRequest
 * @return GetTableMetaResponse
 */
GetTableMetaResponse Client::getTableMeta(const string &TableMetaId, const GetTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

/**
 * @summary 获取流量调控目标详情
 *
 * @param request GetTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrafficControlTargetResponse
 */
GetTrafficControlTargetResponse Client::getTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const GetTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrafficControlTargetResponse>();
}

/**
 * @summary 获取流量调控目标详情
 *
 * @param request GetTrafficControlTargetRequest
 * @return GetTrafficControlTargetResponse
 */
GetTrafficControlTargetResponse Client::getTrafficControlTarget(const string &TrafficControlTargetId, const GetTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary 获取流量调控任务详情
 *
 * @param request GetTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrafficControlTaskResponse
 */
GetTrafficControlTaskResponse Client::getTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const GetTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasControlTargetFilter()) {
    query["ControlTargetFilter"] = request.getControlTargetFilter();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrafficControlTaskResponse>();
}

/**
 * @summary 获取流量调控任务详情
 *
 * @param request GetTrafficControlTaskRequest
 * @return GetTrafficControlTaskResponse
 */
GetTrafficControlTaskResponse Client::getTrafficControlTask(const string &TrafficControlTaskId, const GetTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 获取流量调控任务的流量详情
 *
 * @param request GetTrafficControlTaskTrafficRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrafficControlTaskTrafficResponse
 */
GetTrafficControlTaskTrafficResponse Client::getTrafficControlTaskTrafficWithOptions(const string &TrafficControlTaskId, const GetTrafficControlTaskTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrafficControlTaskTraffic"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/trafficinfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrafficControlTaskTrafficResponse>();
}

/**
 * @summary 获取流量调控任务的流量详情
 *
 * @param request GetTrafficControlTaskTrafficRequest
 * @return GetTrafficControlTaskTrafficResponse
 */
GetTrafficControlTaskTrafficResponse Client::getTrafficControlTaskTraffic(const string &TrafficControlTaskId, const GetTrafficControlTaskTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrafficControlTaskTrafficWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 获取AB Test实验指标组列表。
 *
 * @param request ListABMetricGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListABMetricGroupsResponse
 */
ListABMetricGroupsResponse Client::listABMetricGroupsWithOptions(const ListABMetricGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRealtime()) {
    query["Realtime"] = request.getRealtime();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListABMetricGroups"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListABMetricGroupsResponse>();
}

/**
 * @summary 获取AB Test实验指标组列表。
 *
 * @param request ListABMetricGroupsRequest
 * @return ListABMetricGroupsResponse
 */
ListABMetricGroupsResponse Client::listABMetricGroups(const ListABMetricGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listABMetricGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取AB Test实验指标列表。
 *
 * @param request ListABMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListABMetricsResponse
 */
ListABMetricsResponse Client::listABMetricsWithOptions(const ListABMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRealtime()) {
    query["Realtime"] = request.getRealtime();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasTableMetaId()) {
    query["TableMetaId"] = request.getTableMetaId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListABMetrics"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListABMetricsResponse>();
}

/**
 * @summary 获取AB Test实验指标列表。
 *
 * @param request ListABMetricsRequest
 * @return ListABMetricsResponse
 */
ListABMetricsResponse Client::listABMetrics(const ListABMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listABMetricsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取计算任务列表。
 *
 * @param request ListCalculationJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCalculationJobsResponse
 */
ListCalculationJobsResponse Client::listCalculationJobsWithOptions(const ListCalculationJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCalculationJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/calculationjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCalculationJobsResponse>();
}

/**
 * @summary 获取计算任务列表。
 *
 * @param request ListCalculationJobsRequest
 * @return ListCalculationJobsResponse
 */
ListCalculationJobsResponse Client::listCalculationJobs(const ListCalculationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCalculationJobsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取人群下的所有用户。
 *
 * @param request ListCrowdUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCrowdUsersResponse
 */
ListCrowdUsersResponse Client::listCrowdUsersWithOptions(const string &CrowdId, const ListCrowdUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCrowdUsers"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCrowdUsersResponse>();
}

/**
 * @summary 获取人群下的所有用户。
 *
 * @param request ListCrowdUsersRequest
 * @return ListCrowdUsersResponse
 */
ListCrowdUsersResponse Client::listCrowdUsers(const string &CrowdId, const ListCrowdUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCrowdUsersWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary 获取人群列表。
 *
 * @param request ListCrowdsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCrowdsResponse
 */
ListCrowdsResponse Client::listCrowdsWithOptions(const ListCrowdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCrowds"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCrowdsResponse>();
}

/**
 * @summary 获取人群列表。
 *
 * @param request ListCrowdsRequest
 * @return ListCrowdsResponse
 */
ListCrowdsResponse Client::listCrowds(const ListCrowdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCrowdsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取引擎配置列表。
 *
 * @param request ListEngineConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEngineConfigsResponse
 */
ListEngineConfigsResponse Client::listEngineConfigsWithOptions(const ListEngineConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEngineConfigs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEngineConfigsResponse>();
}

/**
 * @summary 获取引擎配置列表。
 *
 * @param request ListEngineConfigsRequest
 * @return ListEngineConfigsResponse
 */
ListEngineConfigsResponse Client::listEngineConfigs(const ListEngineConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEngineConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实验组列表。
 *
 * @param request ListExperimentGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExperimentGroupsResponse
 */
ListExperimentGroupsResponse Client::listExperimentGroupsWithOptions(const ListExperimentGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLayerId()) {
    query["LayerId"] = request.getLayerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTimeRangeEnd()) {
    query["TimeRangeEnd"] = request.getTimeRangeEnd();
  }

  if (!!request.hasTimeRangeStart()) {
    query["TimeRangeStart"] = request.getTimeRangeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExperimentGroups"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExperimentGroupsResponse>();
}

/**
 * @summary 获取实验组列表。
 *
 * @param request ListExperimentGroupsRequest
 * @return ListExperimentGroupsResponse
 */
ListExperimentGroupsResponse Client::listExperimentGroups(const ListExperimentGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExperimentGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实验列表。
 *
 * @param request ListExperimentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExperimentsResponse
 */
ListExperimentsResponse Client::listExperimentsWithOptions(const ListExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExperimentGroupId()) {
    query["ExperimentGroupId"] = request.getExperimentGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExperiments"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExperimentsResponse>();
}

/**
 * @summary 获取实验列表。
 *
 * @param request ListExperimentsRequest
 * @return ListExperimentsResponse
 */
ListExperimentsResponse Client::listExperiments(const ListExperimentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExperimentsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取特征一致性检查配置列表。
 *
 * @param request ListFeatureConsistencyCheckJobConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureConsistencyCheckJobConfigsResponse
 */
ListFeatureConsistencyCheckJobConfigsResponse Client::listFeatureConsistencyCheckJobConfigsWithOptions(const ListFeatureConsistencyCheckJobConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureConsistencyCheckJobConfigs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureConsistencyCheckJobConfigsResponse>();
}

/**
 * @summary 获取特征一致性检查配置列表。
 *
 * @param request ListFeatureConsistencyCheckJobConfigsRequest
 * @return ListFeatureConsistencyCheckJobConfigsResponse
 */
ListFeatureConsistencyCheckJobConfigsResponse Client::listFeatureConsistencyCheckJobConfigs(const ListFeatureConsistencyCheckJobConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureConsistencyCheckJobConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取特征一致性检查任务的特征报表/比对结果。
 *
 * @param request ListFeatureConsistencyCheckJobFeatureReportsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureConsistencyCheckJobFeatureReportsResponse
 */
ListFeatureConsistencyCheckJobFeatureReportsResponse Client::listFeatureConsistencyCheckJobFeatureReportsWithOptions(const string &FeatureConsistencyCheckJobId, const ListFeatureConsistencyCheckJobFeatureReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogItemId()) {
    query["LogItemId"] = request.getLogItemId();
  }

  if (!!request.hasLogRequestId()) {
    query["LogRequestId"] = request.getLogRequestId();
  }

  if (!!request.hasLogUserId()) {
    query["LogUserId"] = request.getLogUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureConsistencyCheckJobFeatureReports"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobId) , "/featurereports")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureConsistencyCheckJobFeatureReportsResponse>();
}

/**
 * @summary 获取特征一致性检查任务的特征报表/比对结果。
 *
 * @param request ListFeatureConsistencyCheckJobFeatureReportsRequest
 * @return ListFeatureConsistencyCheckJobFeatureReportsResponse
 */
ListFeatureConsistencyCheckJobFeatureReportsResponse Client::listFeatureConsistencyCheckJobFeatureReports(const string &FeatureConsistencyCheckJobId, const ListFeatureConsistencyCheckJobFeatureReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureConsistencyCheckJobFeatureReportsWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

/**
 * @summary 获取特征一致性检查任务分数报表/比对结果。
 *
 * @param tmpReq ListFeatureConsistencyCheckJobScoreReportsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureConsistencyCheckJobScoreReportsResponse
 */
ListFeatureConsistencyCheckJobScoreReportsResponse Client::listFeatureConsistencyCheckJobScoreReportsWithOptions(const string &FeatureConsistencyCheckJobId, const ListFeatureConsistencyCheckJobScoreReportsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFeatureConsistencyCheckJobScoreReportsShrinkRequest request = ListFeatureConsistencyCheckJobScoreReportsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeRequestIds()) {
    request.setExcludeRequestIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeRequestIds(), "ExcludeRequestIds", "json"));
  }

  json query = {};
  if (!!request.hasExcludeRequestIdsShrink()) {
    query["ExcludeRequestIds"] = request.getExcludeRequestIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureConsistencyCheckJobScoreReports"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobId) , "/scorereports")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureConsistencyCheckJobScoreReportsResponse>();
}

/**
 * @summary 获取特征一致性检查任务分数报表/比对结果。
 *
 * @param request ListFeatureConsistencyCheckJobScoreReportsRequest
 * @return ListFeatureConsistencyCheckJobScoreReportsResponse
 */
ListFeatureConsistencyCheckJobScoreReportsResponse Client::listFeatureConsistencyCheckJobScoreReports(const string &FeatureConsistencyCheckJobId, const ListFeatureConsistencyCheckJobScoreReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureConsistencyCheckJobScoreReportsWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

/**
 * @summary 获取特征一致性检查任务列表。
 *
 * @param request ListFeatureConsistencyCheckJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureConsistencyCheckJobsResponse
 */
ListFeatureConsistencyCheckJobsResponse Client::listFeatureConsistencyCheckJobsWithOptions(const ListFeatureConsistencyCheckJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureConsistencyCheckJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureConsistencyCheckJobsResponse>();
}

/**
 * @summary 获取特征一致性检查任务列表。
 *
 * @param request ListFeatureConsistencyCheckJobsRequest
 * @return ListFeatureConsistencyCheckJobsResponse
 */
ListFeatureConsistencyCheckJobsResponse Client::listFeatureConsistencyCheckJobs(const ListFeatureConsistencyCheckJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureConsistencyCheckJobsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例下配置的资源列表。
 *
 * @param request ListInstanceResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResourcesResponse
 */
ListInstanceResourcesResponse Client::listInstanceResourcesWithOptions(const string &InstanceId, const ListInstanceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasGroup()) {
    query["Group"] = request.getGroup();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceResources"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResourcesResponse>();
}

/**
 * @summary 获取实例下配置的资源列表。
 *
 * @param request ListInstanceResourcesRequest
 * @return ListInstanceResourcesResponse
 */
ListInstanceResourcesResponse Client::listInstanceResources(const string &InstanceId, const ListInstanceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceResourcesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取推荐全链路深度定制开发平台实例信息列表。
 *
 * @param request ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary 获取推荐全链路深度定制开发平台实例信息列表。
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实验室列表。
 *
 * @param request ListLaboratoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLaboratoriesResponse
 */
ListLaboratoriesResponse Client::listLaboratoriesWithOptions(const ListLaboratoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLaboratories"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLaboratoriesResponse>();
}

/**
 * @summary 获取实验室列表。
 *
 * @param request ListLaboratoriesRequest
 * @return ListLaboratoriesResponse
 */
ListLaboratoriesResponse Client::listLaboratories(const ListLaboratoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLaboratoriesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取层列表。
 *
 * @param request ListLayersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLayersResponse
 */
ListLayersResponse Client::listLayersWithOptions(const ListLayersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLaboratoryId()) {
    query["LaboratoryId"] = request.getLaboratoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLayers"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLayersResponse>();
}

/**
 * @summary 获取层列表。
 *
 * @param request ListLayersRequest
 * @return ListLayersResponse
 */
ListLayersResponse Client::listLayers(const ListLayersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLayersWithOptions(request, headers, runtime);
}

/**
 * @summary 获取参数列表。
 *
 * @param request ListParamsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListParamsResponse
 */
ListParamsResponse Client::listParamsWithOptions(const ListParamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncrypted()) {
    query["Encrypted"] = request.getEncrypted();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListParams"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/params")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListParamsResponse>();
}

/**
 * @summary 获取参数列表。
 *
 * @param request ListParamsRequest
 * @return ListParamsResponse
 */
ListParamsResponse Client::listParams(const ListParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listParamsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取召回管理任务列表。
 *
 * @param request ListRecallManagementJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementJobsResponse
 */
ListRecallManagementJobsResponse Client::listRecallManagementJobsWithOptions(const ListRecallManagementJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCondition()) {
    query["Condition"] = request.getCondition();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementJobsResponse>();
}

/**
 * @summary 获取召回管理任务列表。
 *
 * @param request ListRecallManagementJobsRequest
 * @return ListRecallManagementJobsResponse
 */
ListRecallManagementJobsResponse Client::listRecallManagementJobs(const ListRecallManagementJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementJobsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取召回管理服务下的版本列表
 *
 * @param request ListRecallManagementServiceVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementServiceVersionsResponse
 */
ListRecallManagementServiceVersionsResponse Client::listRecallManagementServiceVersionsWithOptions(const string &RecallManagementServiceId, const ListRecallManagementServiceVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementServiceVersions"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementServiceVersionsResponse>();
}

/**
 * @summary 获取召回管理服务下的版本列表
 *
 * @param request ListRecallManagementServiceVersionsRequest
 * @return ListRecallManagementServiceVersionsResponse
 */
ListRecallManagementServiceVersionsResponse Client::listRecallManagementServiceVersions(const string &RecallManagementServiceId, const ListRecallManagementServiceVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementServiceVersionsWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary 获取召回管理服务列表
 *
 * @param request ListRecallManagementServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementServicesResponse
 */
ListRecallManagementServicesResponse Client::listRecallManagementServicesWithOptions(const ListRecallManagementServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementServices"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementServicesResponse>();
}

/**
 * @summary 获取召回管理服务列表
 *
 * @param request ListRecallManagementServicesRequest
 * @return ListRecallManagementServicesResponse
 */
ListRecallManagementServicesResponse Client::listRecallManagementServices(const ListRecallManagementServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementServicesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取召回管理表版本列表。
 *
 * @param request ListRecallManagementTableVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementTableVersionsResponse
 */
ListRecallManagementTableVersionsResponse Client::listRecallManagementTableVersionsWithOptions(const string &RecallManagementTableId, const ListRecallManagementTableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementTableVersions"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementTableVersionsResponse>();
}

/**
 * @summary 获取召回管理表版本列表。
 *
 * @param request ListRecallManagementTableVersionsRequest
 * @return ListRecallManagementTableVersionsResponse
 */
ListRecallManagementTableVersionsResponse Client::listRecallManagementTableVersions(const string &RecallManagementTableId, const ListRecallManagementTableVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementTableVersionsWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 获取召回管理表列表。
 *
 * @param request ListRecallManagementTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecallManagementTablesResponse
 */
ListRecallManagementTablesResponse Client::listRecallManagementTablesWithOptions(const ListRecallManagementTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecallManagementTables"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecallManagementTablesResponse>();
}

/**
 * @summary 获取召回管理表列表。
 *
 * @param request ListRecallManagementTablesRequest
 * @return ListRecallManagementTablesResponse
 */
ListRecallManagementTablesResponse Client::listRecallManagementTables(const ListRecallManagementTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecallManagementTablesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取资源规则列表
 *
 * @param request ListResourceRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceRulesResponse
 */
ListResourceRulesResponse Client::listResourceRulesWithOptions(const ListResourceRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceRuleId()) {
    query["ResourceRuleId"] = request.getResourceRuleId();
  }

  if (!!request.hasResourceRuleName()) {
    query["ResourceRuleName"] = request.getResourceRuleName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceRules"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceRulesResponse>();
}

/**
 * @summary 获取资源规则列表
 *
 * @param request ListResourceRulesRequest
 * @return ListResourceRulesResponse
 */
ListResourceRulesResponse Client::listResourceRules(const ListResourceRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceRulesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取样本一致性任务列表
 *
 * @param request ListSampleConsistencyJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSampleConsistencyJobsResponse
 */
ListSampleConsistencyJobsResponse Client::listSampleConsistencyJobsWithOptions(const ListSampleConsistencyJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSampleConsistencyJobs"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSampleConsistencyJobsResponse>();
}

/**
 * @summary 获取样本一致性任务列表
 *
 * @param request ListSampleConsistencyJobsRequest
 * @return ListSampleConsistencyJobsResponse
 */
ListSampleConsistencyJobsResponse Client::listSampleConsistencyJobs(const ListSampleConsistencyJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSampleConsistencyJobsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取场景列表
 *
 * @param request ListScenesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScenesResponse
 */
ListScenesResponse Client::listScenesWithOptions(const ListScenesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScenes"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScenesResponse>();
}

/**
 * @summary 获取场景列表
 *
 * @param request ListScenesRequest
 * @return ListScenesResponse
 */
ListScenesResponse Client::listScenes(const ListScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listScenesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取人群下的所有子人群。
 *
 * @param request ListSubCrowdsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubCrowdsResponse
 */
ListSubCrowdsResponse Client::listSubCrowdsWithOptions(const string &CrowdId, const ListSubCrowdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubCrowds"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId) , "/subcrowds")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubCrowdsResponse>();
}

/**
 * @summary 获取人群下的所有子人群。
 *
 * @param request ListSubCrowdsRequest
 * @return ListSubCrowdsResponse
 */
ListSubCrowdsResponse Client::listSubCrowds(const string &CrowdId, const ListSubCrowdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSubCrowdsWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary 获取数据表列表。
 *
 * @param request ListTableMetasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableMetasResponse
 */
ListTableMetasResponse Client::listTableMetasWithOptions(const ListTableMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.getModule();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableMetas"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableMetasResponse>();
}

/**
 * @summary 获取数据表列表。
 *
 * @param request ListTableMetasRequest
 * @return ListTableMetasResponse
 */
ListTableMetasResponse Client::listTableMetas(const ListTableMetasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTableMetasWithOptions(request, headers, runtime);
}

/**
 * @summary 获取流量调控任务流量变更的历史列表
 *
 * @param request ListTrafficControlTargetTrafficHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrafficControlTargetTrafficHistoryResponse
 */
ListTrafficControlTargetTrafficHistoryResponse Client::listTrafficControlTargetTrafficHistoryWithOptions(const string &TrafficControlTargetId, const ListTrafficControlTargetTrafficHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasExperimentGroupId()) {
    query["ExperimentGroupId"] = request.getExperimentGroupId();
  }

  if (!!request.hasExperimentId()) {
    query["ExperimentId"] = request.getExperimentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemId()) {
    query["ItemId"] = request.getItemId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrafficControlTargetTrafficHistory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/traffichistories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrafficControlTargetTrafficHistoryResponse>();
}

/**
 * @summary 获取流量调控任务流量变更的历史列表
 *
 * @param request ListTrafficControlTargetTrafficHistoryRequest
 * @return ListTrafficControlTargetTrafficHistoryResponse
 */
ListTrafficControlTargetTrafficHistoryResponse Client::listTrafficControlTargetTrafficHistory(const string &TrafficControlTargetId, const ListTrafficControlTargetTrafficHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrafficControlTargetTrafficHistoryWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary 获取流量调控列表
 *
 * @param request ListTrafficControlTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrafficControlTasksResponse
 */
ListTrafficControlTasksResponse Client::listTrafficControlTasksWithOptions(const ListTrafficControlTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasControlTargetFilter()) {
    query["ControlTargetFilter"] = request.getControlTargetFilter();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTrafficControlTaskId()) {
    query["TrafficControlTaskId"] = request.getTrafficControlTaskId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrafficControlTasks"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrafficControlTasksResponse>();
}

/**
 * @summary 获取流量调控列表
 *
 * @param request ListTrafficControlTasksRequest
 * @return ListTrafficControlTasksResponse
 */
ListTrafficControlTasksResponse Client::listTrafficControlTasks(const ListTrafficControlTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrafficControlTasksWithOptions(request, headers, runtime);
}

/**
 * @summary 上线实验。
 *
 * @param request OfflineExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineExperimentResponse
 */
OfflineExperimentResponse Client::offlineExperimentWithOptions(const string &ExperimentId, const OfflineExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/action/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineExperimentResponse>();
}

/**
 * @summary 上线实验。
 *
 * @param request OfflineExperimentRequest
 * @return OfflineExperimentResponse
 */
OfflineExperimentResponse Client::offlineExperiment(const string &ExperimentId, const OfflineExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 下线实验组。
 *
 * @param request OfflineExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineExperimentGroupResponse
 */
OfflineExperimentGroupResponse Client::offlineExperimentGroupWithOptions(const string &ExperimentGroupId, const OfflineExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId) , "/action/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineExperimentGroupResponse>();
}

/**
 * @summary 下线实验组。
 *
 * @param request OfflineExperimentGroupRequest
 * @return OfflineExperimentGroupResponse
 */
OfflineExperimentGroupResponse Client::offlineExperimentGroup(const string &ExperimentGroupId, const OfflineExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary 下线实验室。
 *
 * @param request OfflineLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineLaboratoryResponse
 */
OfflineLaboratoryResponse Client::offlineLaboratoryWithOptions(const string &LaboratoryId, const OfflineLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId) , "/action/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineLaboratoryResponse>();
}

/**
 * @summary 下线实验室。
 *
 * @param request OfflineLaboratoryRequest
 * @return OfflineLaboratoryResponse
 */
OfflineLaboratoryResponse Client::offlineLaboratory(const string &LaboratoryId, const OfflineLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary 下线召回管理服务
 *
 * @param request OfflineRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineRecallManagementServiceResponse
 */
OfflineRecallManagementServiceResponse Client::offlineRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const OfflineRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/action/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineRecallManagementServiceResponse>();
}

/**
 * @summary 下线召回管理服务
 *
 * @param request OfflineRecallManagementServiceRequest
 * @return OfflineRecallManagementServiceResponse
 */
OfflineRecallManagementServiceResponse Client::offlineRecallManagementService(const string &RecallManagementServiceId, const OfflineRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary 上线实验
 *
 * @param request OnlineExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineExperimentResponse
 */
OnlineExperimentResponse Client::onlineExperimentWithOptions(const string &ExperimentId, const OnlineExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/action/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineExperimentResponse>();
}

/**
 * @summary 上线实验
 *
 * @param request OnlineExperimentRequest
 * @return OnlineExperimentResponse
 */
OnlineExperimentResponse Client::onlineExperiment(const string &ExperimentId, const OnlineExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 上线实验组。
 *
 * @param request OnlineExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineExperimentGroupResponse
 */
OnlineExperimentGroupResponse Client::onlineExperimentGroupWithOptions(const string &ExperimentGroupId, const OnlineExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId) , "/action/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineExperimentGroupResponse>();
}

/**
 * @summary 上线实验组。
 *
 * @param request OnlineExperimentGroupRequest
 * @return OnlineExperimentGroupResponse
 */
OnlineExperimentGroupResponse Client::onlineExperimentGroup(const string &ExperimentGroupId, const OnlineExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary 上线实验室。
 *
 * @param request OnlineLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineLaboratoryResponse
 */
OnlineLaboratoryResponse Client::onlineLaboratoryWithOptions(const string &LaboratoryId, const OnlineLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId) , "/action/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineLaboratoryResponse>();
}

/**
 * @summary 上线实验室。
 *
 * @param request OnlineLaboratoryRequest
 * @return OnlineLaboratoryResponse
 */
OnlineLaboratoryResponse Client::onlineLaboratory(const string &LaboratoryId, const OnlineLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary 上线召回管理服务
 *
 * @param request OnlineRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineRecallManagementServiceResponse
 */
OnlineRecallManagementServiceResponse Client::onlineRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const OnlineRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/action/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineRecallManagementServiceResponse>();
}

/**
 * @summary 上线召回管理服务
 *
 * @param request OnlineRecallManagementServiceRequest
 * @return OnlineRecallManagementServiceResponse
 */
OnlineRecallManagementServiceResponse Client::onlineRecallManagementService(const string &RecallManagementServiceId, const OnlineRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary 将maxcompute的表同步到召回引擎中。
 *
 * @param request PublishRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishRecallManagementTableResponse
 */
PublishRecallManagementTableResponse Client::publishRecallManagementTableWithOptions(const string &RecallManagementTableId, const PublishRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    body["Mode"] = request.getMode();
  }

  if (!!request.hasPartition()) {
    body["Partition"] = request.getPartition();
  }

  if (!!request.hasPartitions()) {
    body["Partitions"] = request.getPartitions();
  }

  if (!!request.hasSkipThresholdCheck()) {
    body["SkipThresholdCheck"] = request.getSkipThresholdCheck();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId) , "/action/publish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishRecallManagementTableResponse>();
}

/**
 * @summary 将maxcompute的表同步到召回引擎中。
 *
 * @param request PublishRecallManagementTableRequest
 * @return PublishRecallManagementTableResponse
 */
PublishRecallManagementTableResponse Client::publishRecallManagementTable(const string &RecallManagementTableId, const PublishRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 推全。
 *
 * @param request PushAllExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushAllExperimentResponse
 */
PushAllExperimentResponse Client::pushAllExperimentWithOptions(const string &ExperimentId, const PushAllExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PushAllExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/action/pushall")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushAllExperimentResponse>();
}

/**
 * @summary 推全。
 *
 * @param request PushAllExperimentRequest
 * @return PushAllExperimentResponse
 */
PushAllExperimentResponse Client::pushAllExperiment(const string &ExperimentId, const PushAllExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushAllExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 推送指标到指定资源规则
 *
 * @param tmpReq PushResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushResourceRuleResponse
 */
PushResourceRuleResponse Client::pushResourceRuleWithOptions(const string &ResourceRuleId, const PushResourceRuleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushResourceRuleShrinkRequest request = PushResourceRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetricInfo()) {
    request.setMetricInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetricInfo(), "MetricInfo", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricInfoShrink()) {
    query["MetricInfo"] = request.getMetricInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/action/push")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushResourceRuleResponse>();
}

/**
 * @summary 推送指标到指定资源规则
 *
 * @param request PushResourceRuleRequest
 * @return PushResourceRuleResponse
 */
PushResourceRuleResponse Client::pushResourceRule(const string &ResourceRuleId, const PushResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 查看样本一致性任务差异的详情
 *
 * @param request QuerySampleConsistencyJobDifferenceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySampleConsistencyJobDifferenceResponse
 */
QuerySampleConsistencyJobDifferenceResponse Client::querySampleConsistencyJobDifferenceWithOptions(const string &SampleConsistencyJobId, const QuerySampleConsistencyJobDifferenceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.getFeatureName();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySampleConsistencyJobDifference"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId) , "/action/querydifference")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySampleConsistencyJobDifferenceResponse>();
}

/**
 * @summary 查看样本一致性任务差异的详情
 *
 * @param request QuerySampleConsistencyJobDifferenceRequest
 * @return QuerySampleConsistencyJobDifferenceResponse
 */
QuerySampleConsistencyJobDifferenceResponse Client::querySampleConsistencyJobDifference(const string &SampleConsistencyJobId, const QuerySampleConsistencyJobDifferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySampleConsistencyJobDifferenceWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary 查询流量调控目标的单品调控报表详情。
 *
 * @param request QueryTrafficControlTargetItemReportDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTrafficControlTargetItemReportDetailResponse
 */
QueryTrafficControlTargetItemReportDetailResponse Client::queryTrafficControlTargetItemReportDetailWithOptions(const string &TrafficControlTargetId, const QueryTrafficControlTargetItemReportDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["Date"] = request.getDate();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTrafficControlTargetItemReportDetail"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/itemcontrolreportdetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTrafficControlTargetItemReportDetailResponse>();
}

/**
 * @summary 查询流量调控目标的单品调控报表详情。
 *
 * @param request QueryTrafficControlTargetItemReportDetailRequest
 * @return QueryTrafficControlTargetItemReportDetailResponse
 */
QueryTrafficControlTargetItemReportDetailResponse Client::queryTrafficControlTargetItemReportDetail(const string &TrafficControlTargetId, const QueryTrafficControlTargetItemReportDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryTrafficControlTargetItemReportDetailWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary 发布流量调控任务
 *
 * @param request ReleaseTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseTrafficControlTaskResponse
 */
ReleaseTrafficControlTaskResponse Client::releaseTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const ReleaseTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReleaseTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/release")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseTrafficControlTaskResponse>();
}

/**
 * @summary 发布流量调控任务
 *
 * @param request ReleaseTrafficControlTaskRequest
 * @return ReleaseTrafficControlTaskResponse
 */
ReleaseTrafficControlTaskResponse Client::releaseTrafficControlTask(const string &TrafficControlTaskId, const ReleaseTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return releaseTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 对指标组进行报表。
 *
 * @param request ReportABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportABMetricGroupResponse
 */
ReportABMetricGroupResponse Client::reportABMetricGroupWithOptions(const string &ABMetricGroupId, const ReportABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseExperimentId()) {
    body["BaseExperimentId"] = request.getBaseExperimentId();
  }

  if (!!request.hasDimensionFields()) {
    body["DimensionFields"] = request.getDimensionFields();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasExperimentGroupId()) {
    body["ExperimentGroupId"] = request.getExperimentGroupId();
  }

  if (!!request.hasExperimentIds()) {
    body["ExperimentIds"] = request.getExperimentIds();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReportType()) {
    body["ReportType"] = request.getReportType();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTimeStatisticsMethod()) {
    body["TimeStatisticsMethod"] = request.getTimeStatisticsMethod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReportABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups/" , Darabonba::Encode::Encoder::percentEncode(ABMetricGroupId) , "/action/report")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReportABMetricGroupResponse>();
}

/**
 * @summary 对指标组进行报表。
 *
 * @param request ReportABMetricGroupRequest
 * @return ReportABMetricGroupResponse
 */
ReportABMetricGroupResponse Client::reportABMetricGroup(const string &ABMetricGroupId, const ReportABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reportABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

/**
 * @summary 样本一致性任务报表
 *
 * @param request ReportSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReportSampleConsistencyJobResponse
 */
ReportSampleConsistencyJobResponse Client::reportSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const ReportSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReportSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId) , "/action/report")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReportSampleConsistencyJobResponse>();
}

/**
 * @summary 样本一致性任务报表
 *
 * @param request ReportSampleConsistencyJobRequest
 * @return ReportSampleConsistencyJobResponse
 */
ReportSampleConsistencyJobResponse Client::reportSampleConsistencyJob(const string &SampleConsistencyJobId, const ReportSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reportSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary 拆分流量调控目标
 *
 * @param request SplitTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SplitTrafficControlTargetResponse
 */
SplitTrafficControlTargetResponse Client::splitTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const SplitTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSetPoints()) {
    body["SetPoints"] = request.getSetPoints();
  }

  if (!!request.hasSetValues()) {
    body["SetValues"] = request.getSetValues();
  }

  if (!!request.hasTimePoints()) {
    body["TimePoints"] = request.getTimePoints();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SplitTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/action/split")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SplitTrafficControlTargetResponse>();
}

/**
 * @summary 拆分流量调控目标
 *
 * @param request SplitTrafficControlTargetRequest
 * @return SplitTrafficControlTargetResponse
 */
SplitTrafficControlTargetResponse Client::splitTrafficControlTarget(const string &TrafficControlTargetId, const SplitTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return splitTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary 开启流量调控目标
 *
 * @param request StartTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTrafficControlTargetResponse
 */
StartTrafficControlTargetResponse Client::startTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const StartTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/action/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTrafficControlTargetResponse>();
}

/**
 * @summary 开启流量调控目标
 *
 * @param request StartTrafficControlTargetRequest
 * @return StartTrafficControlTargetResponse
 */
StartTrafficControlTargetResponse Client::startTrafficControlTarget(const string &TrafficControlTargetId, const StartTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary 开启流量调控任务
 *
 * @param request StartTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTrafficControlTaskResponse
 */
StartTrafficControlTaskResponse Client::startTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const StartTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTrafficControlTaskResponse>();
}

/**
 * @summary 开启流量调控任务
 *
 * @param request StartTrafficControlTaskRequest
 * @return StartTrafficControlTaskResponse
 */
StartTrafficControlTaskResponse Client::startTrafficControlTask(const string &TrafficControlTaskId, const StartTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 停止样本一致性任务
 *
 * @param request StopSampleConsistencyJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSampleConsistencyJobResponse
 */
StopSampleConsistencyJobResponse Client::stopSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const StopSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopSampleConsistencyJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sampleconsistencyjobs/" , Darabonba::Encode::Encoder::percentEncode(SampleConsistencyJobId) , "/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSampleConsistencyJobResponse>();
}

/**
 * @summary 停止样本一致性任务
 *
 * @param request StopSampleConsistencyJobRequest
 * @return StopSampleConsistencyJobResponse
 */
StopSampleConsistencyJobResponse Client::stopSampleConsistencyJob(const string &SampleConsistencyJobId, const StopSampleConsistencyJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

/**
 * @summary 停止流量调控目标
 *
 * @param request StopTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTrafficControlTargetResponse
 */
StopTrafficControlTargetResponse Client::stopTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const StopTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId) , "/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTrafficControlTargetResponse>();
}

/**
 * @summary 停止流量调控目标
 *
 * @param request StopTrafficControlTargetRequest
 * @return StopTrafficControlTargetResponse
 */
StopTrafficControlTargetResponse Client::stopTrafficControlTarget(const string &TrafficControlTargetId, const StopTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary 停止流量调控任务
 *
 * @param request StopTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTrafficControlTaskResponse
 */
StopTrafficControlTaskResponse Client::stopTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const StopTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTrafficControlTaskResponse>();
}

/**
 * @summary 停止流量调控任务
 *
 * @param request StopTrafficControlTaskRequest
 * @return StopTrafficControlTaskResponse
 */
StopTrafficControlTaskResponse Client::stopTrafficControlTask(const string &TrafficControlTaskId, const StopTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 同步特征一致性检测任务重放日志。
 *
 * @param request SyncFeatureConsistencyCheckJobReplayLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncFeatureConsistencyCheckJobReplayLogResponse
 */
SyncFeatureConsistencyCheckJobReplayLogResponse Client::syncFeatureConsistencyCheckJobReplayLogWithOptions(const SyncFeatureConsistencyCheckJobReplayLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContextFeatures()) {
    body["ContextFeatures"] = request.getContextFeatures();
  }

  if (!!request.hasFeatureConsistencyCheckJobConfigId()) {
    body["FeatureConsistencyCheckJobConfigId"] = request.getFeatureConsistencyCheckJobConfigId();
  }

  if (!!request.hasGeneratedFeatures()) {
    body["GeneratedFeatures"] = request.getGeneratedFeatures();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogItemId()) {
    body["LogItemId"] = request.getLogItemId();
  }

  if (!!request.hasLogRequestId()) {
    body["LogRequestId"] = request.getLogRequestId();
  }

  if (!!request.hasLogRequestTime()) {
    body["LogRequestTime"] = request.getLogRequestTime();
  }

  if (!!request.hasLogUserId()) {
    body["LogUserId"] = request.getLogUserId();
  }

  if (!!request.hasRawFeatures()) {
    body["RawFeatures"] = request.getRawFeatures();
  }

  if (!!request.hasSceneName()) {
    body["SceneName"] = request.getSceneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncFeatureConsistencyCheckJobReplayLog"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/action/syncreplaylog")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncFeatureConsistencyCheckJobReplayLogResponse>();
}

/**
 * @summary 同步特征一致性检测任务重放日志。
 *
 * @param request SyncFeatureConsistencyCheckJobReplayLogRequest
 * @return SyncFeatureConsistencyCheckJobReplayLogResponse
 */
SyncFeatureConsistencyCheckJobReplayLogResponse Client::syncFeatureConsistencyCheckJobReplayLog(const SyncFeatureConsistencyCheckJobReplayLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncFeatureConsistencyCheckJobReplayLogWithOptions(request, headers, runtime);
}

/**
 * @summary 取消指定特征一致性检查正在运行中的任务。
 *
 * @param request TerminateFeatureConsistencyCheckJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateFeatureConsistencyCheckJobResponse
 */
TerminateFeatureConsistencyCheckJobResponse Client::terminateFeatureConsistencyCheckJobWithOptions(const string &FeatureConsistencyCheckJobId, const TerminateFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TerminateFeatureConsistencyCheckJob"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobId) , "/action/terminate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateFeatureConsistencyCheckJobResponse>();
}

/**
 * @summary 取消指定特征一致性检查正在运行中的任务。
 *
 * @param request TerminateFeatureConsistencyCheckJobRequest
 * @return TerminateFeatureConsistencyCheckJobResponse
 */
TerminateFeatureConsistencyCheckJobResponse Client::terminateFeatureConsistencyCheckJob(const string &FeatureConsistencyCheckJobId, const TerminateFeatureConsistencyCheckJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return terminateFeatureConsistencyCheckJobWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

/**
 * @summary 更新AB Test实验指标。
 *
 * @param request UpdateABMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateABMetricResponse
 */
UpdateABMetricResponse Client::updateABMetricWithOptions(const string &ABMetricId, const UpdateABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDefinition()) {
    body["Definition"] = request.getDefinition();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLeftMetricId()) {
    body["LeftMetricId"] = request.getLeftMetricId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request.getOperator();
  }

  if (!!request.hasRealtime()) {
    body["Realtime"] = request.getRealtime();
  }

  if (!!request.hasResultResourceId()) {
    body["ResultResourceId"] = request.getResultResourceId();
  }

  if (!!request.hasRightMetricId()) {
    body["RightMetricId"] = request.getRightMetricId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasStatisticsCycle()) {
    body["StatisticsCycle"] = request.getStatisticsCycle();
  }

  if (!!request.hasTableMetaId()) {
    body["TableMetaId"] = request.getTableMetaId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateABMetric"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetrics/" , Darabonba::Encode::Encoder::percentEncode(ABMetricId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateABMetricResponse>();
}

/**
 * @summary 更新AB Test实验指标。
 *
 * @param request UpdateABMetricRequest
 * @return UpdateABMetricResponse
 */
UpdateABMetricResponse Client::updateABMetric(const string &ABMetricId, const UpdateABMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateABMetricWithOptions(ABMetricId, request, headers, runtime);
}

/**
 * @summary 更新AB test实验指标组。
 *
 * @param request UpdateABMetricGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateABMetricGroupResponse
 */
UpdateABMetricGroupResponse Client::updateABMetricGroupWithOptions(const string &ABMetricGroupId, const UpdateABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasABMetricIds()) {
    body["ABMetricIds"] = request.getABMetricIds();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRealtime()) {
    body["Realtime"] = request.getRealtime();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateABMetricGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/abmetricgroups/" , Darabonba::Encode::Encoder::percentEncode(ABMetricGroupId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateABMetricGroupResponse>();
}

/**
 * @summary 更新AB test实验指标组。
 *
 * @param request UpdateABMetricGroupRequest
 * @return UpdateABMetricGroupResponse
 */
UpdateABMetricGroupResponse Client::updateABMetricGroup(const string &ABMetricGroupId, const UpdateABMetricGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

/**
 * @summary 更新指定人群。
 *
 * @param request UpdateCrowdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCrowdResponse
 */
UpdateCrowdResponse Client::updateCrowdWithOptions(const string &CrowdId, const UpdateCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCrowd"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/crowds/" , Darabonba::Encode::Encoder::percentEncode(CrowdId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCrowdResponse>();
}

/**
 * @summary 更新指定人群。
 *
 * @param request UpdateCrowdRequest
 * @return UpdateCrowdResponse
 */
UpdateCrowdResponse Client::updateCrowd(const string &CrowdId, const UpdateCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCrowdWithOptions(CrowdId, request, headers, runtime);
}

/**
 * @summary 更新引擎配置。
 *
 * @param request UpdateEngineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEngineConfigResponse
 */
UpdateEngineConfigResponse Client::updateEngineConfigWithOptions(const string &EngineConfigId, const UpdateEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEngineConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/engineconfigs/" , Darabonba::Encode::Encoder::percentEncode(EngineConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEngineConfigResponse>();
}

/**
 * @summary 更新引擎配置。
 *
 * @param request UpdateEngineConfigRequest
 * @return UpdateEngineConfigResponse
 */
UpdateEngineConfigResponse Client::updateEngineConfig(const string &EngineConfigId, const UpdateEngineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

/**
 * @summary 更新实验。
 *
 * @param request UpdateExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExperimentResponse
 */
UpdateExperimentResponse Client::updateExperimentWithOptions(const string &ExperimentId, const UpdateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFlowPercent()) {
    body["FlowPercent"] = request.getFlowPercent();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExperiment"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExperimentResponse>();
}

/**
 * @summary 更新实验。
 *
 * @param request UpdateExperimentRequest
 * @return UpdateExperimentResponse
 */
UpdateExperimentResponse Client::updateExperiment(const string &ExperimentId, const UpdateExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 更新指定实验组。
 *
 * @param request UpdateExperimentGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExperimentGroupResponse
 */
UpdateExperimentGroupResponse Client::updateExperimentGroupWithOptions(const string &ExperimentGroupId, const UpdateExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasCrowdId()) {
    body["CrowdId"] = request.getCrowdId();
  }

  if (!!request.hasCrowdTargetType()) {
    body["CrowdTargetType"] = request.getCrowdTargetType();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDistributionTimeDuration()) {
    body["DistributionTimeDuration"] = request.getDistributionTimeDuration();
  }

  if (!!request.hasDistributionType()) {
    body["DistributionType"] = request.getDistributionType();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLayerId()) {
    body["LayerId"] = request.getLayerId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNeedAA()) {
    body["NeedAA"] = request.getNeedAA();
  }

  if (!!request.hasRandomFlow()) {
    body["RandomFlow"] = request.getRandomFlow();
  }

  if (!!request.hasReservcedBuckets()) {
    body["ReservcedBuckets"] = request.getReservcedBuckets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExperimentGroup"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentgroups/" , Darabonba::Encode::Encoder::percentEncode(ExperimentGroupId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExperimentGroupResponse>();
}

/**
 * @summary 更新指定实验组。
 *
 * @param request UpdateExperimentGroupRequest
 * @return UpdateExperimentGroupResponse
 */
UpdateExperimentGroupResponse Client::updateExperimentGroup(const string &ExperimentGroupId, const UpdateExperimentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

/**
 * @summary 更新特征一致性检查配置信息。
 *
 * @param request UpdateFeatureConsistencyCheckJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFeatureConsistencyCheckJobConfigResponse
 */
UpdateFeatureConsistencyCheckJobConfigResponse Client::updateFeatureConsistencyCheckJobConfigWithOptions(const string &FeatureConsistencyCheckJobConfigId, const UpdateFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCompareFeature()) {
    body["CompareFeature"] = request.getCompareFeature();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasDatasetMountPath()) {
    body["DatasetMountPath"] = request.getDatasetMountPath();
  }

  if (!!request.hasDatasetName()) {
    body["DatasetName"] = request.getDatasetName();
  }

  if (!!request.hasDatasetType()) {
    body["DatasetType"] = request.getDatasetType();
  }

  if (!!request.hasDatasetUri()) {
    body["DatasetUri"] = request.getDatasetUri();
  }

  if (!!request.hasDefaultRoute()) {
    body["DefaultRoute"] = request.getDefaultRoute();
  }

  if (!!request.hasEasServiceName()) {
    body["EasServiceName"] = request.getEasServiceName();
  }

  if (!!request.hasEasyRecPackagePath()) {
    body["EasyRecPackagePath"] = request.getEasyRecPackagePath();
  }

  if (!!request.hasEasyRecVersion()) {
    body["EasyRecVersion"] = request.getEasyRecVersion();
  }

  if (!!request.hasFeatureDisplayExclude()) {
    body["FeatureDisplayExclude"] = request.getFeatureDisplayExclude();
  }

  if (!!request.hasFeatureLandingResourceId()) {
    body["FeatureLandingResourceId"] = request.getFeatureLandingResourceId();
  }

  if (!!request.hasFeaturePriority()) {
    body["FeaturePriority"] = request.getFeaturePriority();
  }

  if (!!request.hasFeatureStoreItemId()) {
    body["FeatureStoreItemId"] = request.getFeatureStoreItemId();
  }

  if (!!request.hasFeatureStoreModelId()) {
    body["FeatureStoreModelId"] = request.getFeatureStoreModelId();
  }

  if (!!request.hasFeatureStoreProjectId()) {
    body["FeatureStoreProjectId"] = request.getFeatureStoreProjectId();
  }

  if (!!request.hasFeatureStoreProjectName()) {
    body["FeatureStoreProjectName"] = request.getFeatureStoreProjectName();
  }

  if (!!request.hasFeatureStoreSeqFeatureView()) {
    body["FeatureStoreSeqFeatureView"] = request.getFeatureStoreSeqFeatureView();
  }

  if (!!request.hasFeatureStoreUserId()) {
    body["FeatureStoreUserId"] = request.getFeatureStoreUserId();
  }

  if (!!request.hasFgJarVersion()) {
    body["FgJarVersion"] = request.getFgJarVersion();
  }

  if (!!request.hasFgJsonFileName()) {
    body["FgJsonFileName"] = request.getFgJsonFileName();
  }

  if (!!request.hasGenerateZip()) {
    body["GenerateZip"] = request.getGenerateZip();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsUseFeatureStore()) {
    body["IsUseFeatureStore"] = request.getIsUseFeatureStore();
  }

  if (!!request.hasItemIdField()) {
    body["ItemIdField"] = request.getItemIdField();
  }

  if (!!request.hasItemTable()) {
    body["ItemTable"] = request.getItemTable();
  }

  if (!!request.hasItemTablePartitionField()) {
    body["ItemTablePartitionField"] = request.getItemTablePartitionField();
  }

  if (!!request.hasItemTablePartitionFieldFormat()) {
    body["ItemTablePartitionFieldFormat"] = request.getItemTablePartitionFieldFormat();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOssResourceId()) {
    body["OssResourceId"] = request.getOssResourceId();
  }

  if (!!request.hasPredictWorkerCount()) {
    body["PredictWorkerCount"] = request.getPredictWorkerCount();
  }

  if (!!request.hasPredictWorkerCpu()) {
    body["PredictWorkerCpu"] = request.getPredictWorkerCpu();
  }

  if (!!request.hasPredictWorkerMemory()) {
    body["PredictWorkerMemory"] = request.getPredictWorkerMemory();
  }

  if (!!request.hasResourceConfig()) {
    body["ResourceConfig"] = request.getResourceConfig();
  }

  if (!!request.hasSampleRate()) {
    body["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasSwitchId()) {
    body["SwitchId"] = request.getSwitchId();
  }

  if (!!request.hasUserIdField()) {
    body["UserIdField"] = request.getUserIdField();
  }

  if (!!request.hasUserTable()) {
    body["UserTable"] = request.getUserTable();
  }

  if (!!request.hasUserTablePartitionField()) {
    body["UserTablePartitionField"] = request.getUserTablePartitionField();
  }

  if (!!request.hasUserTablePartitionFieldFormat()) {
    body["UserTablePartitionFieldFormat"] = request.getUserTablePartitionFieldFormat();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasWorkflowName()) {
    body["WorkflowName"] = request.getWorkflowName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFeatureConsistencyCheckJobConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/featureconsistencycheck/jobconfigs/" , Darabonba::Encode::Encoder::percentEncode(FeatureConsistencyCheckJobConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFeatureConsistencyCheckJobConfigResponse>();
}

/**
 * @summary 更新特征一致性检查配置信息。
 *
 * @param request UpdateFeatureConsistencyCheckJobConfigRequest
 * @return UpdateFeatureConsistencyCheckJobConfigResponse
 */
UpdateFeatureConsistencyCheckJobConfigResponse Client::updateFeatureConsistencyCheckJobConfig(const string &FeatureConsistencyCheckJobConfigId, const UpdateFeatureConsistencyCheckJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFeatureConsistencyCheckJobConfigWithOptions(FeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

/**
 * @summary 更新指定实例下指定资源的信息。
 *
 * @param request UpdateInstanceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResourceResponse
 */
UpdateInstanceResourceResponse Client::updateInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const UpdateInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceResource"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResourceResponse>();
}

/**
 * @summary 更新指定实例下指定资源的信息。
 *
 * @param request UpdateInstanceResourceRequest
 * @return UpdateInstanceResourceResponse
 */
UpdateInstanceResourceResponse Client::updateInstanceResource(const string &InstanceId, const string &ResourceId, const UpdateInstanceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceResourceWithOptions(InstanceId, ResourceId, request, headers, runtime);
}

/**
 * @summary 更新实验室。
 *
 * @param request UpdateLaboratoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLaboratoryResponse
 */
UpdateLaboratoryResponse Client::updateLaboratoryWithOptions(const string &LaboratoryId, const UpdateLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBucketCount()) {
    body["BucketCount"] = request.getBucketCount();
  }

  if (!!request.hasBucketType()) {
    body["BucketType"] = request.getBucketType();
  }

  if (!!request.hasBuckets()) {
    body["Buckets"] = request.getBuckets();
  }

  if (!!request.hasDebugCrowdId()) {
    body["DebugCrowdId"] = request.getDebugCrowdId();
  }

  if (!!request.hasDebugUsers()) {
    body["DebugUsers"] = request.getDebugUsers();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLaboratory"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/laboratories/" , Darabonba::Encode::Encoder::percentEncode(LaboratoryId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLaboratoryResponse>();
}

/**
 * @summary 更新实验室。
 *
 * @param request UpdateLaboratoryRequest
 * @return UpdateLaboratoryResponse
 */
UpdateLaboratoryResponse Client::updateLaboratory(const string &LaboratoryId, const UpdateLaboratoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

/**
 * @summary 更新层。
 *
 * @param request UpdateLayerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLayerResponse
 */
UpdateLayerResponse Client::updateLayerWithOptions(const string &LayerId, const UpdateLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLayer"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/layers/" , Darabonba::Encode::Encoder::percentEncode(LayerId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLayerResponse>();
}

/**
 * @summary 更新层。
 *
 * @param request UpdateLayerRequest
 * @return UpdateLayerResponse
 */
UpdateLayerResponse Client::updateLayer(const string &LayerId, const UpdateLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLayerWithOptions(LayerId, request, headers, runtime);
}

/**
 * @summary 更新参数。
 *
 * @param request UpdateParamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateParamResponse
 */
UpdateParamResponse Client::updateParamWithOptions(const string &ParamId, const UpdateParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateParam"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/params/" , Darabonba::Encode::Encoder::percentEncode(ParamId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateParamResponse>();
}

/**
 * @summary 更新参数。
 *
 * @param request UpdateParamRequest
 * @return UpdateParamResponse
 */
UpdateParamResponse Client::updateParam(const string &ParamId, const UpdateParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateParamWithOptions(ParamId, request, headers, runtime);
}

/**
 * @summary 更新召回管理初始化配置。
 *
 * @param request UpdateRecallManagementConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecallManagementConfigResponse
 */
UpdateRecallManagementConfigResponse Client::updateRecallManagementConfigWithOptions(const UpdateRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkConfigs()) {
    body["NetworkConfigs"] = request.getNetworkConfigs();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRecallManagementConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementconfigs")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecallManagementConfigResponse>();
}

/**
 * @summary 更新召回管理初始化配置。
 *
 * @param request UpdateRecallManagementConfigRequest
 * @return UpdateRecallManagementConfigResponse
 */
UpdateRecallManagementConfigResponse Client::updateRecallManagementConfig(const UpdateRecallManagementConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRecallManagementConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 更新召回管理服务信息
 *
 * @param request UpdateRecallManagementServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecallManagementServiceResponse
 */
UpdateRecallManagementServiceResponse Client::updateRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const UpdateRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRecallManagementService"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecallManagementServiceResponse>();
}

/**
 * @summary 更新召回管理服务信息
 *
 * @param request UpdateRecallManagementServiceRequest
 * @return UpdateRecallManagementServiceResponse
 */
UpdateRecallManagementServiceResponse Client::updateRecallManagementService(const string &RecallManagementServiceId, const UpdateRecallManagementServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRecallManagementServiceWithOptions(RecallManagementServiceId, request, headers, runtime);
}

/**
 * @summary 更新召回管理服务版本配置
 *
 * @param request UpdateRecallManagementServiceVersionConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecallManagementServiceVersionConfigResponse
 */
UpdateRecallManagementServiceVersionConfigResponse Client::updateRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const UpdateRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasConfigType()) {
    body["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMergeConfig()) {
    body["MergeConfig"] = request.getMergeConfig();
  }

  if (!!request.hasRecallConfig()) {
    body["RecallConfig"] = request.getRecallConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRecallManagementServiceVersionConfig"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementservices/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionId) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementServiceVersionConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecallManagementServiceVersionConfigResponse>();
}

/**
 * @summary 更新召回管理服务版本配置
 *
 * @param request UpdateRecallManagementServiceVersionConfigRequest
 * @return UpdateRecallManagementServiceVersionConfigResponse
 */
UpdateRecallManagementServiceVersionConfigResponse Client::updateRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const UpdateRecallManagementServiceVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRecallManagementServiceVersionConfigWithOptions(RecallManagementServiceId, RecallManagementServiceVersionId, RecallManagementServiceVersionConfigId, request, headers, runtime);
}

/**
 * @summary 更新召回管理表。
 *
 * @param request UpdateRecallManagementTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecallManagementTableResponse
 */
UpdateRecallManagementTableResponse Client::updateRecallManagementTableWithOptions(const string &RecallManagementTableId, const UpdateRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnableDataSizeFluctuationThreshold()) {
    body["EnableDataSizeFluctuationThreshold"] = request.getEnableDataSizeFluctuationThreshold();
  }

  if (!!request.hasEnableRowCountFluctuationThreshold()) {
    body["EnableRowCountFluctuationThreshold"] = request.getEnableRowCountFluctuationThreshold();
  }

  if (!!request.hasIndexVersionId()) {
    body["IndexVersionId"] = request.getIndexVersionId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxDataSizeFluctuationThreshold()) {
    body["MaxDataSizeFluctuationThreshold"] = request.getMaxDataSizeFluctuationThreshold();
  }

  if (!!request.hasMaxRowCountFluctuationThreshold()) {
    body["MaxRowCountFluctuationThreshold"] = request.getMaxRowCountFluctuationThreshold();
  }

  if (!!request.hasMinDataSizeFluctuationThreshold()) {
    body["MinDataSizeFluctuationThreshold"] = request.getMinDataSizeFluctuationThreshold();
  }

  if (!!request.hasMinRowCountFluctuationThreshold()) {
    body["MinRowCountFluctuationThreshold"] = request.getMinRowCountFluctuationThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRecallManagementTable"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recallmanagementtables/" , Darabonba::Encode::Encoder::percentEncode(RecallManagementTableId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecallManagementTableResponse>();
}

/**
 * @summary 更新召回管理表。
 *
 * @param request UpdateRecallManagementTableRequest
 * @return UpdateRecallManagementTableResponse
 */
UpdateRecallManagementTableResponse Client::updateRecallManagementTable(const string &RecallManagementTableId, const UpdateRecallManagementTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRecallManagementTableWithOptions(RecallManagementTableId, request, headers, runtime);
}

/**
 * @summary 获取资源规则列表
 *
 * @param request UpdateResourceRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceRuleResponse
 */
UpdateResourceRuleResponse Client::updateResourceRuleWithOptions(const string &ResourceRuleId, const UpdateResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricOperationType()) {
    body["MetricOperationType"] = request.getMetricOperationType();
  }

  if (!!request.hasMetricPullInfo()) {
    body["MetricPullInfo"] = request.getMetricPullInfo();
  }

  if (!!request.hasMetricPullPeriod()) {
    body["MetricPullPeriod"] = request.getMetricPullPeriod();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRuleComputingDefinition()) {
    body["RuleComputingDefinition"] = request.getRuleComputingDefinition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceRule"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceRuleResponse>();
}

/**
 * @summary 获取资源规则列表
 *
 * @param request UpdateResourceRuleRequest
 * @return UpdateResourceRuleResponse
 */
UpdateResourceRuleResponse Client::updateResourceRule(const string &ResourceRuleId, const UpdateResourceRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

/**
 * @summary 更新资源规则条目
 *
 * @param request UpdateResourceRuleItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceRuleItemResponse
 */
UpdateResourceRuleItemResponse Client::updateResourceRuleItemWithOptions(const string &ResourceRuleId, const string &ResourceRuleItemId, const UpdateResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxValue()) {
    body["MaxValue"] = request.getMaxValue();
  }

  if (!!request.hasMinValue()) {
    body["MinValue"] = request.getMinValue();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceRuleItem"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resourcerules/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(ResourceRuleItemId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceRuleItemResponse>();
}

/**
 * @summary 更新资源规则条目
 *
 * @param request UpdateResourceRuleItemRequest
 * @return UpdateResourceRuleItemResponse
 */
UpdateResourceRuleItemResponse Client::updateResourceRuleItem(const string &ResourceRuleId, const string &ResourceRuleItemId, const UpdateResourceRuleItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceRuleItemWithOptions(ResourceRuleId, ResourceRuleItemId, request, headers, runtime);
}

/**
 * @summary 更新场景
 *
 * @param request UpdateSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSceneResponse
 */
UpdateSceneResponse Client::updateSceneWithOptions(const string &SceneId, const UpdateSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFlows()) {
    body["Flows"] = request.getFlows();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScene"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/scenes/" , Darabonba::Encode::Encoder::percentEncode(SceneId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSceneResponse>();
}

/**
 * @summary 更新场景
 *
 * @param request UpdateSceneRequest
 * @return UpdateSceneResponse
 */
UpdateSceneResponse Client::updateScene(const string &SceneId, const UpdateSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSceneWithOptions(SceneId, request, headers, runtime);
}

/**
 * @summary 获取数据表详细信息。
 *
 * @param request UpdateTableMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableMetaResponse
 */
UpdateTableMetaResponse Client::updateTableMetaWithOptions(const string &TableMetaId, const UpdateTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModule()) {
    body["Module"] = request.getModule();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTableMeta"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tablemetas/" , Darabonba::Encode::Encoder::percentEncode(TableMetaId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableMetaResponse>();
}

/**
 * @summary 获取数据表详细信息。
 *
 * @param request UpdateTableMetaRequest
 * @return UpdateTableMetaResponse
 */
UpdateTableMetaResponse Client::updateTableMeta(const string &TableMetaId, const UpdateTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

/**
 * @summary 更新流量调控目标
 *
 * @param request UpdateTrafficControlTargetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrafficControlTargetResponse
 */
UpdateTrafficControlTargetResponse Client::updateTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const UpdateTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewParam3()) {
    query["new-param-3"] = request.getNewParam3();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEvent()) {
    body["Event"] = request.getEvent();
  }

  if (!!request.hasItemConditionArray()) {
    body["ItemConditionArray"] = request.getItemConditionArray();
  }

  if (!!request.hasItemConditionExpress()) {
    body["ItemConditionExpress"] = request.getItemConditionExpress();
  }

  if (!!request.hasItemConditionType()) {
    body["ItemConditionType"] = request.getItemConditionType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNewProductRegulation()) {
    body["NewProductRegulation"] = request.getNewProductRegulation();
  }

  if (!!request.hasRecallName()) {
    body["RecallName"] = request.getRecallName();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisPeriod()) {
    body["StatisPeriod"] = request.getStatisPeriod();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasToleranceValue()) {
    body["ToleranceValue"] = request.getToleranceValue();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTrafficControlTarget"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltargets/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTargetId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrafficControlTargetResponse>();
}

/**
 * @summary 更新流量调控目标
 *
 * @param request UpdateTrafficControlTargetRequest
 * @return UpdateTrafficControlTargetResponse
 */
UpdateTrafficControlTargetResponse Client::updateTrafficControlTarget(const string &TrafficControlTargetId, const UpdateTrafficControlTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

/**
 * @summary 更新流量调控任务
 *
 * @param request UpdateTrafficControlTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrafficControlTaskResponse
 */
UpdateTrafficControlTaskResponse Client::updateTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const UpdateTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBehaviorTableMetaId()) {
    body["BehaviorTableMetaId"] = request.getBehaviorTableMetaId();
  }

  if (!!request.hasControlGranularity()) {
    body["ControlGranularity"] = request.getControlGranularity();
  }

  if (!!request.hasControlLogic()) {
    body["ControlLogic"] = request.getControlLogic();
  }

  if (!!request.hasControlType()) {
    body["ControlType"] = request.getControlType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEffectiveSceneIds()) {
    body["EffectiveSceneIds"] = request.getEffectiveSceneIds();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecutionTime()) {
    body["ExecutionTime"] = request.getExecutionTime();
  }

  if (!!request.hasFlinkResourceId()) {
    body["FlinkResourceId"] = request.getFlinkResourceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasItemConditionArray()) {
    body["ItemConditionArray"] = request.getItemConditionArray();
  }

  if (!!request.hasItemConditionExpress()) {
    body["ItemConditionExpress"] = request.getItemConditionExpress();
  }

  if (!!request.hasItemConditionType()) {
    body["ItemConditionType"] = request.getItemConditionType();
  }

  if (!!request.hasItemTableMetaId()) {
    body["ItemTableMetaId"] = request.getItemTableMetaId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPreExperimentIds()) {
    body["PreExperimentIds"] = request.getPreExperimentIds();
  }

  if (!!request.hasProdExperimentIds()) {
    body["ProdExperimentIds"] = request.getProdExperimentIds();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasServiceId()) {
    body["ServiceId"] = request.getServiceId();
  }

  if (!!request.hasServiceIds()) {
    body["ServiceIds"] = request.getServiceIds();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisBaeaviorConditionArray()) {
    body["StatisBaeaviorConditionArray"] = request.getStatisBaeaviorConditionArray();
  }

  if (!!request.hasStatisBehaviorConditionArray()) {
    body["StatisBehaviorConditionArray"] = request.getStatisBehaviorConditionArray();
  }

  if (!!request.hasStatisBehaviorConditionExpress()) {
    body["StatisBehaviorConditionExpress"] = request.getStatisBehaviorConditionExpress();
  }

  if (!!request.hasStatisBehaviorConditionType()) {
    body["StatisBehaviorConditionType"] = request.getStatisBehaviorConditionType();
  }

  if (!!request.hasTrafficControlTargets()) {
    body["TrafficControlTargets"] = request.getTrafficControlTargets();
  }

  if (!!request.hasUserConditionArray()) {
    body["UserConditionArray"] = request.getUserConditionArray();
  }

  if (!!request.hasUserConditionExpress()) {
    body["UserConditionExpress"] = request.getUserConditionExpress();
  }

  if (!!request.hasUserConditionType()) {
    body["UserConditionType"] = request.getUserConditionType();
  }

  if (!!request.hasUserTableMetaId()) {
    body["UserTableMetaId"] = request.getUserTableMetaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTrafficControlTask"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrafficControlTaskResponse>();
}

/**
 * @summary 更新流量调控任务
 *
 * @param request UpdateTrafficControlTaskRequest
 * @return UpdateTrafficControlTaskResponse
 */
UpdateTrafficControlTaskResponse Client::updateTrafficControlTask(const string &TrafficControlTaskId, const UpdateTrafficControlTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 更新流量调控任务的流量参数
 *
 * @param request UpdateTrafficControlTaskTrafficRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrafficControlTaskTrafficResponse
 */
UpdateTrafficControlTaskTrafficResponse Client::updateTrafficControlTaskTrafficWithOptions(const string &TrafficControlTaskId, const UpdateTrafficControlTaskTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewParam3()) {
    query["new-param-3"] = request.getNewParam3();
  }

  json body = {};
  if (!!request.hasEnvironment()) {
    body["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTraffics()) {
    body["Traffics"] = request.getTraffics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTrafficControlTaskTraffic"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trafficcontroltasks/" , Darabonba::Encode::Encoder::percentEncode(TrafficControlTaskId) , "/action/traffic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrafficControlTaskTrafficResponse>();
}

/**
 * @summary 更新流量调控任务的流量参数
 *
 * @param request UpdateTrafficControlTaskTrafficRequest
 * @return UpdateTrafficControlTaskTrafficResponse
 */
UpdateTrafficControlTaskTrafficResponse Client::updateTrafficControlTaskTraffic(const string &TrafficControlTaskId, const UpdateTrafficControlTaskTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTrafficControlTaskTrafficWithOptions(TrafficControlTaskId, request, headers, runtime);
}

/**
 * @summary 上传数据
 *
 * @param request UploadRecommendationDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadRecommendationDataResponse
 */
UploadRecommendationDataResponse Client::uploadRecommendationDataWithOptions(const UploadRecommendationDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.getDataType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadRecommendationData"},
    {"version" , "2022-12-13"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recommendationdata/action/upload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadRecommendationDataResponse>();
}

/**
 * @summary 上传数据
 *
 * @param request UploadRecommendationDataRequest
 * @return UploadRecommendationDataResponse
 */
UploadRecommendationDataResponse Client::uploadRecommendationData(const UploadRecommendationDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadRecommendationDataWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PaiRecService20221213