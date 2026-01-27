#include <darabonba/Core.hpp>
#include <alibabacloud/PaiStudio20220112.hpp>
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
using namespace AlibabaCloud::PaiStudio20220112::Models;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{

AlibabaCloud::PaiStudio20220112::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "pai.cn-beijing.aliyuncs.com"},
    {"cn-hangzhou" , "pai.cn-hangzhou.data.aliyun.com"},
    {"cn-shanghai" , "pai.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "pai.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong" , "pai.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1" , "pai.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "pai.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3" , "pai.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "pai.ap-southeast-5.aliyuncs.com"},
    {"us-east-1" , "pai.us-east-1.aliyuncs.com"},
    {"us-west-1" , "pai.us-west-1.aliyuncs.com"},
    {"eu-central-1" , "pai.eu-central-1.aliyuncs.com"},
    {"ap-south-1" , "pai.ap-south-1.aliyuncs.com"},
    {"me-east-1" , "pai.me-east-1.aliyuncs.com"},
    {"ap-northeast-1" , "pai.ap-northeast-1.aliyuncs.com"},
    {"cn-qingdao" , "pai.cn-qingdao.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "pai.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-wulanchabu" , "pai.cn-wulanchabu.aliyuncs.com"},
    {"cn-zhangjiakou" , "pai.cn-zhangjiakou.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("paistudio", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 检查WebTerminal
 *
 * @param request CheckInstanceWebTerminalRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstanceWebTerminalResponse
 */
CheckInstanceWebTerminalResponse Client::checkInstanceWebTerminalWithOptions(const string &TrainingJobId, const string &InstanceId, const CheckInstanceWebTerminalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCheckInfo()) {
    body["CheckInfo"] = request.getCheckInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckInstanceWebTerminal"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/webterminals/action/check")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstanceWebTerminalResponse>();
}

/**
 * @summary 检查WebTerminal
 *
 * @param request CheckInstanceWebTerminalRequest
 * @return CheckInstanceWebTerminalResponse
 */
CheckInstanceWebTerminalResponse Client::checkInstanceWebTerminal(const string &TrainingJobId, const string &InstanceId, const CheckInstanceWebTerminalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkInstanceWebTerminalWithOptions(TrainingJobId, InstanceId, request, headers, runtime);
}

/**
 * @summary 创建新的算法
 *
 * @param request CreateAlgorithmRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlgorithmResponse
 */
CreateAlgorithmResponse Client::createAlgorithmWithOptions(const CreateAlgorithmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlgorithmDescription()) {
    body["AlgorithmDescription"] = request.getAlgorithmDescription();
  }

  if (!!request.hasAlgorithmName()) {
    body["AlgorithmName"] = request.getAlgorithmName();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAlgorithm"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlgorithmResponse>();
}

/**
 * @summary 创建新的算法
 *
 * @param request CreateAlgorithmRequest
 * @return CreateAlgorithmResponse
 */
CreateAlgorithmResponse Client::createAlgorithm(const CreateAlgorithmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAlgorithmWithOptions(request, headers, runtime);
}

/**
 * @summary 创建一个新的算法版本
 *
 * @param tmpReq CreateAlgorithmVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlgorithmVersionResponse
 */
CreateAlgorithmVersionResponse Client::createAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const CreateAlgorithmVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAlgorithmVersionShrinkRequest request = CreateAlgorithmVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlgorithmSpec()) {
    request.setAlgorithmSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlgorithmSpec(), "AlgorithmSpec", "json"));
  }

  json body = {};
  if (!!request.hasAlgorithmSpecShrink()) {
    body["AlgorithmSpec"] = request.getAlgorithmSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAlgorithmVersion"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmVersion))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlgorithmVersionResponse>();
}

/**
 * @summary 创建一个新的算法版本
 *
 * @param request CreateAlgorithmVersionRequest
 * @return CreateAlgorithmVersionResponse
 */
CreateAlgorithmVersionResponse Client::createAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion, const CreateAlgorithmVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAlgorithmVersionWithOptions(AlgorithmId, AlgorithmVersion, request, headers, runtime);
}

/**
 * @summary 创建WebTerminal
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceWebTerminalResponse
 */
CreateInstanceWebTerminalResponse Client::createInstanceWebTerminalWithOptions(const string &TrainingJobId, const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceWebTerminal"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/webterminals")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceWebTerminalResponse>();
}

/**
 * @summary 创建WebTerminal
 *
 * @return CreateInstanceWebTerminalResponse
 */
CreateInstanceWebTerminalResponse Client::createInstanceWebTerminal(const string &TrainingJobId, const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceWebTerminalWithOptions(TrainingJobId, InstanceId, headers, runtime);
}

/**
 * @summary 创建Quota
 *
 * @param request CreateQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaResponse
 */
CreateQuotaResponse Client::createQuotaWithOptions(const CreateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAllocateStrategy()) {
    body["AllocateStrategy"] = request.getAllocateStrategy();
  }

  if (!!request.hasClusterSpec()) {
    body["ClusterSpec"] = request.getClusterSpec();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  if (!!request.hasMin()) {
    body["Min"] = request.getMin();
  }

  if (!!request.hasParentQuotaId()) {
    body["ParentQuotaId"] = request.getParentQuotaId();
  }

  if (!!request.hasQueueStrategy()) {
    body["QueueStrategy"] = request.getQueueStrategy();
  }

  if (!!request.hasQuotaConfig()) {
    body["QuotaConfig"] = request.getQuotaConfig();
  }

  if (!!request.hasQuotaName()) {
    body["QuotaName"] = request.getQuotaName();
  }

  if (!!request.hasResourceGroupIds()) {
    body["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateQuota"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQuotaResponse>();
}

/**
 * @summary 创建Quota
 *
 * @param request CreateQuotaRequest
 * @return CreateQuotaResponse
 */
CreateQuotaResponse Client::createQuota(const CreateQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createQuotaWithOptions(request, headers, runtime);
}

/**
 * @summary 创建资源组
 *
 * @param request CreateResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroupWithOptions(const CreateResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComputingResourceProvider()) {
    body["ComputingResourceProvider"] = request.getComputingResourceProvider();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  if (!!request.hasVersion()) {
    body["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceGroup"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceGroupResponse>();
}

/**
 * @summary 创建资源组
 *
 * @param request CreateResourceGroupRequest
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroup(const CreateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建TrainingJob
 *
 * @param request CreateTrainingJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrainingJobResponse
 */
CreateTrainingJobResponse Client::createTrainingJobWithOptions(const CreateTrainingJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlgorithmName()) {
    body["AlgorithmName"] = request.getAlgorithmName();
  }

  if (!!request.hasAlgorithmProvider()) {
    body["AlgorithmProvider"] = request.getAlgorithmProvider();
  }

  if (!!request.hasAlgorithmSpec()) {
    body["AlgorithmSpec"] = request.getAlgorithmSpec();
  }

  if (!!request.hasAlgorithmVersion()) {
    body["AlgorithmVersion"] = request.getAlgorithmVersion();
  }

  if (!!request.hasAssignNodeSpec()) {
    body["AssignNodeSpec"] = request.getAssignNodeSpec();
  }

  if (!!request.hasCodeDir()) {
    body["CodeDir"] = request.getCodeDir();
  }

  if (!!request.hasComputeResource()) {
    body["ComputeResource"] = request.getComputeResource();
  }

  if (!!request.hasEnvironments()) {
    body["Environments"] = request.getEnvironments();
  }

  if (!!request.hasExperimentConfig()) {
    body["ExperimentConfig"] = request.getExperimentConfig();
  }

  if (!!request.hasHyperParameters()) {
    body["HyperParameters"] = request.getHyperParameters();
  }

  if (!!request.hasInputChannels()) {
    body["InputChannels"] = request.getInputChannels();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  if (!!request.hasOutputChannels()) {
    body["OutputChannels"] = request.getOutputChannels();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasPythonRequirements()) {
    body["PythonRequirements"] = request.getPythonRequirements();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasScheduler()) {
    body["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasSettings()) {
    body["Settings"] = request.getSettings();
  }

  if (!!request.hasTrainingJobDescription()) {
    body["TrainingJobDescription"] = request.getTrainingJobDescription();
  }

  if (!!request.hasTrainingJobName()) {
    body["TrainingJobName"] = request.getTrainingJobName();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTrainingJob"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrainingJobResponse>();
}

/**
 * @summary 创建TrainingJob
 *
 * @param request CreateTrainingJobRequest
 * @return CreateTrainingJobResponse
 */
CreateTrainingJobResponse Client::createTrainingJob(const CreateTrainingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTrainingJobWithOptions(request, headers, runtime);
}

/**
 * @summary 删除算法
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlgorithmResponse
 */
DeleteAlgorithmResponse Client::deleteAlgorithmWithOptions(const string &AlgorithmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlgorithm"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlgorithmResponse>();
}

/**
 * @summary 删除算法
 *
 * @return DeleteAlgorithmResponse
 */
DeleteAlgorithmResponse Client::deleteAlgorithm(const string &AlgorithmId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAlgorithmWithOptions(AlgorithmId, headers, runtime);
}

/**
 * @summary 删除算法版本
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlgorithmVersionResponse
 */
DeleteAlgorithmVersionResponse Client::deleteAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlgorithmVersion"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmVersion))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlgorithmVersionResponse>();
}

/**
 * @summary 删除算法版本
 *
 * @return DeleteAlgorithmVersionResponse
 */
DeleteAlgorithmVersionResponse Client::deleteAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAlgorithmVersionWithOptions(AlgorithmId, AlgorithmVersion, headers, runtime);
}

/**
 * @deprecated OpenAPI DeleteMachineGroup is deprecated
 *
 * @summary delete machine group
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMachineGroupResponse
 */
DeleteMachineGroupResponse Client::deleteMachineGroupWithOptions(const string &MachineGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMachineGroup"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/machinegroups/" , Darabonba::Encode::Encoder::percentEncode(MachineGroupID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMachineGroupResponse>();
}

/**
 * @deprecated OpenAPI DeleteMachineGroup is deprecated
 *
 * @summary delete machine group
 *
 * @return DeleteMachineGroupResponse
 */
DeleteMachineGroupResponse Client::deleteMachineGroup(const string &MachineGroupID) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMachineGroupWithOptions(MachineGroupID, headers, runtime);
}

/**
 * @summary 删除Quota
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQuotaResponse
 */
DeleteQuotaResponse Client::deleteQuotaWithOptions(const string &QuotaId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQuota"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(QuotaId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQuotaResponse>();
}

/**
 * @summary 删除Quota
 *
 * @return DeleteQuotaResponse
 */
DeleteQuotaResponse Client::deleteQuota(const string &QuotaId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteQuotaWithOptions(QuotaId, headers, runtime);
}

/**
 * @summary 删除资源组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroupWithOptions(const string &ResourceGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceGroup"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceGroupID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceGroupResponse>();
}

/**
 * @summary 删除资源组
 *
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroup(const string &ResourceGroupID) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceGroupWithOptions(ResourceGroupID, headers, runtime);
}

/**
 * @deprecated OpenAPI DeleteResourceGroupMachineGroup is deprecated
 *
 * @summary delete machine group
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceGroupMachineGroupResponse
 */
DeleteResourceGroupMachineGroupResponse Client::deleteResourceGroupMachineGroupWithOptions(const string &MachineGroupID, const string &ResourceGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceGroupMachineGroup"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceGroupID) , "/machinegroups/" , Darabonba::Encode::Encoder::percentEncode(MachineGroupID))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceGroupMachineGroupResponse>();
}

/**
 * @deprecated OpenAPI DeleteResourceGroupMachineGroup is deprecated
 *
 * @summary delete machine group
 *
 * @return DeleteResourceGroupMachineGroupResponse
 */
DeleteResourceGroupMachineGroupResponse Client::deleteResourceGroupMachineGroup(const string &MachineGroupID, const string &ResourceGroupID) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceGroupMachineGroupWithOptions(MachineGroupID, ResourceGroupID, headers, runtime);
}

/**
 * @summary 删除一个TrainingJob
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrainingJobResponse
 */
DeleteTrainingJobResponse Client::deleteTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrainingJob"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrainingJobResponse>();
}

/**
 * @summary 删除一个TrainingJob
 *
 * @return DeleteTrainingJobResponse
 */
DeleteTrainingJobResponse Client::deleteTrainingJob(const string &TrainingJobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTrainingJobWithOptions(TrainingJobId, headers, runtime);
}

/**
 * @summary 删除TrainingJob的Labels
 *
 * @param request DeleteTrainingJobLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrainingJobLabelsResponse
 */
DeleteTrainingJobLabelsResponse Client::deleteTrainingJobLabelsWithOptions(const string &TrainingJobId, const DeleteTrainingJobLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeys()) {
    query["Keys"] = request.getKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrainingJobLabels"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/labels")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrainingJobLabelsResponse>();
}

/**
 * @summary 删除TrainingJob的Labels
 *
 * @param request DeleteTrainingJobLabelsRequest
 * @return DeleteTrainingJobLabelsResponse
 */
DeleteTrainingJobLabelsResponse Client::deleteTrainingJobLabels(const string &TrainingJobId, const DeleteTrainingJobLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTrainingJobLabelsWithOptions(TrainingJobId, request, headers, runtime);
}

/**
 * @summary 获取一个算法信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlgorithmResponse
 */
GetAlgorithmResponse Client::getAlgorithmWithOptions(const string &AlgorithmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlgorithm"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlgorithmResponse>();
}

/**
 * @summary 获取一个算法信息
 *
 * @return GetAlgorithmResponse
 */
GetAlgorithmResponse Client::getAlgorithm(const string &AlgorithmId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlgorithmWithOptions(AlgorithmId, headers, runtime);
}

/**
 * @summary 创建一个新的算法版本
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlgorithmVersionResponse
 */
GetAlgorithmVersionResponse Client::getAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlgorithmVersion"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmVersion))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlgorithmVersionResponse>();
}

/**
 * @summary 创建一个新的算法版本
 *
 * @return GetAlgorithmVersionResponse
 */
GetAlgorithmVersionResponse Client::getAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlgorithmVersionWithOptions(AlgorithmId, AlgorithmVersion, headers, runtime);
}

/**
 * @deprecated OpenAPI GetMachineGroup is deprecated
 *
 * @summary get machine group
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMachineGroupResponse
 */
GetMachineGroupResponse Client::getMachineGroupWithOptions(const string &MachineGroupID, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMachineGroup"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/machinegroups/" , Darabonba::Encode::Encoder::percentEncode(MachineGroupID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMachineGroupResponse>();
}

/**
 * @deprecated OpenAPI GetMachineGroup is deprecated
 *
 * @summary get machine group
 *
 * @return GetMachineGroupResponse
 */
GetMachineGroupResponse Client::getMachineGroup(const string &MachineGroupID) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMachineGroupWithOptions(MachineGroupID, headers, runtime);
}

/**
 * @deprecated OpenAPI GetNodeMetrics is deprecated
 *
 * @summary get resource group node metrics
 *
 * @param request GetNodeMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeMetricsResponse
 */
GetNodeMetricsResponse Client::getNodeMetricsWithOptions(const string &ResourceGroupID, const string &MetricType, const GetNodeMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGPUType()) {
    query["GPUType"] = request.getGPUType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.getTimeStep();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNodeMetrics"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceGroupID) , "/nodemetrics/" , Darabonba::Encode::Encoder::percentEncode(MetricType))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeMetricsResponse>();
}

/**
 * @deprecated OpenAPI GetNodeMetrics is deprecated
 *
 * @summary get resource group node metrics
 *
 * @param request GetNodeMetricsRequest
 * @return GetNodeMetricsResponse
 */
GetNodeMetricsResponse Client::getNodeMetrics(const string &ResourceGroupID, const string &MetricType, const GetNodeMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getNodeMetricsWithOptions(ResourceGroupID, MetricType, request, headers, runtime);
}

/**
 * @summary 获取Quota
 *
 * @param request GetQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaResponse
 */
GetQuotaResponse Client::getQuotaWithOptions(const string &QuotaId, const GetQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  if (!!request.hasWithNodeMeta()) {
    query["WithNodeMeta"] = request.getWithNodeMeta();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQuota"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(QuotaId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaResponse>();
}

/**
 * @summary 获取Quota
 *
 * @param request GetQuotaRequest
 * @return GetQuotaResponse
 */
GetQuotaResponse Client::getQuota(const string &QuotaId, const GetQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQuotaWithOptions(QuotaId, request, headers, runtime);
}

/**
 * @summary get resource group by group id
 *
 * @param tmpReq GetResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupResponse
 */
GetResourceGroupResponse Client::getResourceGroupWithOptions(const string &ResourceGroupID, const GetResourceGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetResourceGroupShrinkRequest request = GetResourceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasIsAIWorkspaceDataEnabled()) {
    query["IsAIWorkspaceDataEnabled"] = request.getIsAIWorkspaceDataEnabled();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceGroup"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceGroupID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupResponse>();
}

/**
 * @summary get resource group by group id
 *
 * @param request GetResourceGroupRequest
 * @return GetResourceGroupResponse
 */
GetResourceGroupResponse Client::getResourceGroup(const string &ResourceGroupID, const GetResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceGroupWithOptions(ResourceGroupID, request, headers, runtime);
}

/**
 * @summary get machine group
 *
 * @param tmpReq GetResourceGroupMachineGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupMachineGroupResponse
 */
GetResourceGroupMachineGroupResponse Client::getResourceGroupMachineGroupWithOptions(const string &MachineGroupID, const string &ResourceGroupID, const GetResourceGroupMachineGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetResourceGroupMachineGroupShrinkRequest request = GetResourceGroupMachineGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceGroupMachineGroup"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceGroupID) , "/machinegroups/" , Darabonba::Encode::Encoder::percentEncode(MachineGroupID))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupMachineGroupResponse>();
}

/**
 * @summary get machine group
 *
 * @param request GetResourceGroupMachineGroupRequest
 * @return GetResourceGroupMachineGroupResponse
 */
GetResourceGroupMachineGroupResponse Client::getResourceGroupMachineGroup(const string &MachineGroupID, const string &ResourceGroupID, const GetResourceGroupMachineGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceGroupMachineGroupWithOptions(MachineGroupID, ResourceGroupID, request, headers, runtime);
}

/**
 * @deprecated OpenAPI GetResourceGroupRequest is deprecated
 *
 * @summary get resource group requested resource by resource group id
 *
 * @param request GetResourceGroupRequestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupRequestResponse
 */
GetResourceGroupRequestResponse Client::getResourceGroupRequestWithOptions(const GetResourceGroupRequestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPodStatus()) {
    query["PodStatus"] = request.getPodStatus();
  }

  if (!!request.hasResourceGroupID()) {
    query["ResourceGroupID"] = request.getResourceGroupID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceGroupRequest"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/data/request")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupRequestResponse>();
}

/**
 * @deprecated OpenAPI GetResourceGroupRequest is deprecated
 *
 * @summary get resource group requested resource by resource group id
 *
 * @param request GetResourceGroupRequestRequest
 * @return GetResourceGroupRequestResponse
 */
GetResourceGroupRequestResponse Client::getResourceGroupRequest(const GetResourceGroupRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceGroupRequestWithOptions(request, headers, runtime);
}

/**
 * @summary get resource group total resource by group id
 *
 * @param request GetResourceGroupTotalRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupTotalResponse
 */
GetResourceGroupTotalResponse Client::getResourceGroupTotalWithOptions(const GetResourceGroupTotalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupID()) {
    query["ResourceGroupID"] = request.getResourceGroupID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceGroupTotal"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/data/total")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupTotalResponse>();
}

/**
 * @summary get resource group total resource by group id
 *
 * @param request GetResourceGroupTotalRequest
 * @return GetResourceGroupTotalResponse
 */
GetResourceGroupTotalResponse Client::getResourceGroupTotal(const GetResourceGroupTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceGroupTotalWithOptions(request, headers, runtime);
}

/**
 * @summary 获取抢占式实例历史价格
 *
 * @param request GetSpotPriceHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSpotPriceHistoryResponse
 */
GetSpotPriceHistoryResponse Client::getSpotPriceHistoryWithOptions(const string &InstanceType, const GetSpotPriceHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasSpotDuration()) {
    query["SpotDuration"] = request.getSpotDuration();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSpotPriceHistory"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/spots/" , Darabonba::Encode::Encoder::percentEncode(InstanceType) , "/pricehistory")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSpotPriceHistoryResponse>();
}

/**
 * @summary 获取抢占式实例历史价格
 *
 * @param request GetSpotPriceHistoryRequest
 * @return GetSpotPriceHistoryResponse
 */
GetSpotPriceHistoryResponse Client::getSpotPriceHistory(const string &InstanceType, const GetSpotPriceHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSpotPriceHistoryWithOptions(InstanceType, request, headers, runtime);
}

/**
 * @summary 调用GetToken获取临时鉴权信息
 *
 * @param request GetTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenResponse
 */
GetTokenResponse Client::getTokenWithOptions(const GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasTrainingJobId()) {
    query["TrainingJobId"] = request.getTrainingJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetToken"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tokens")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenResponse>();
}

/**
 * @summary 调用GetToken获取临时鉴权信息
 *
 * @param request GetTokenRequest
 * @return GetTokenResponse
 */
GetTokenResponse Client::getToken(const GetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 获取TrainingJob的详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrainingJobResponse
 */
GetTrainingJobResponse Client::getTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrainingJob"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrainingJobResponse>();
}

/**
 * @summary 获取TrainingJob的详情
 *
 * @return GetTrainingJobResponse
 */
GetTrainingJobResponse Client::getTrainingJob(const string &TrainingJobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrainingJobWithOptions(TrainingJobId, headers, runtime);
}

/**
 * @summary 获取Training Job的算法错误信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrainingJobErrorInfoResponse
 */
GetTrainingJobErrorInfoResponse Client::getTrainingJobErrorInfoWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrainingJobErrorInfo"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/errorinfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrainingJobErrorInfoResponse>();
}

/**
 * @summary 获取Training Job的算法错误信息
 *
 * @return GetTrainingJobErrorInfoResponse
 */
GetTrainingJobErrorInfoResponse Client::getTrainingJobErrorInfo(const string &TrainingJobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrainingJobErrorInfoWithOptions(TrainingJobId, headers, runtime);
}

/**
 * @summary 获取TrainingJob最近的Metrics
 *
 * @param request GetTrainingJobLatestMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrainingJobLatestMetricsResponse
 */
GetTrainingJobLatestMetricsResponse Client::getTrainingJobLatestMetricsWithOptions(const string &TrainingJobId, const GetTrainingJobLatestMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNames()) {
    query["Names"] = request.getNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrainingJobLatestMetrics"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/latestmetrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrainingJobLatestMetricsResponse>();
}

/**
 * @summary 获取TrainingJob最近的Metrics
 *
 * @param request GetTrainingJobLatestMetricsRequest
 * @return GetTrainingJobLatestMetricsResponse
 */
GetTrainingJobLatestMetricsResponse Client::getTrainingJobLatestMetrics(const string &TrainingJobId, const GetTrainingJobLatestMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTrainingJobLatestMetricsWithOptions(TrainingJobId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI GetUserViewMetrics is deprecated
 *
 * @summary get user view  metrics
 *
 * @param request GetUserViewMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserViewMetricsResponse
 */
GetUserViewMetricsResponse Client::getUserViewMetricsWithOptions(const string &ResourceGroupID, const GetUserViewMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.getTimeStep();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserViewMetrics"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceGroupID) , "/usermetrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserViewMetricsResponse>();
}

/**
 * @deprecated OpenAPI GetUserViewMetrics is deprecated
 *
 * @summary get user view  metrics
 *
 * @param request GetUserViewMetricsRequest
 * @return GetUserViewMetricsResponse
 */
GetUserViewMetricsResponse Client::getUserViewMetrics(const string &ResourceGroupID, const GetUserViewMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserViewMetricsWithOptions(ResourceGroupID, request, headers, runtime);
}

/**
 * @summary 获取算法的所有版本信息
 *
 * @param request ListAlgorithmVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlgorithmVersionsResponse
 */
ListAlgorithmVersionsResponse Client::listAlgorithmVersionsWithOptions(const string &AlgorithmId, const ListAlgorithmVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlgorithmVersions"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlgorithmVersionsResponse>();
}

/**
 * @summary 获取算法的所有版本信息
 *
 * @param request ListAlgorithmVersionsRequest
 * @return ListAlgorithmVersionsResponse
 */
ListAlgorithmVersionsResponse Client::listAlgorithmVersions(const string &AlgorithmId, const ListAlgorithmVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlgorithmVersionsWithOptions(AlgorithmId, request, headers, runtime);
}

/**
 * @summary 获取算法列表
 *
 * @param request ListAlgorithmsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlgorithmsResponse
 */
ListAlgorithmsResponse Client::listAlgorithmsWithOptions(const ListAlgorithmsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithmId()) {
    query["AlgorithmId"] = request.getAlgorithmId();
  }

  if (!!request.hasAlgorithmName()) {
    query["AlgorithmName"] = request.getAlgorithmName();
  }

  if (!!request.hasAlgorithmProvider()) {
    query["AlgorithmProvider"] = request.getAlgorithmProvider();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlgorithms"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlgorithmsResponse>();
}

/**
 * @summary 获取算法列表
 *
 * @param request ListAlgorithmsRequest
 * @return ListAlgorithmsResponse
 */
ListAlgorithmsResponse Client::listAlgorithms(const ListAlgorithmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlgorithmsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取资源节点列表
 *
 * @param tmpReq ListNodesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListNodesShrinkRequest request = ListNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHealthCount()) {
    request.setHealthCountShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHealthCount(), "HealthCount", "json"));
  }

  if (!!tmpReq.hasHealthRate()) {
    request.setHealthRateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHealthRate(), "HealthRate", "json"));
  }

  json query = {};
  if (!!request.hasAcceleratorType()) {
    query["AcceleratorType"] = request.getAcceleratorType();
  }

  if (!!request.hasAvailabilityZone()) {
    query["AvailabilityZone"] = request.getAvailabilityZone();
  }

  if (!!request.hasCliqueID()) {
    query["CliqueID"] = request.getCliqueID();
  }

  if (!!request.hasFilterByQuotaId()) {
    query["FilterByQuotaId"] = request.getFilterByQuotaId();
  }

  if (!!request.hasFilterByResourceGroupIds()) {
    query["FilterByResourceGroupIds"] = request.getFilterByResourceGroupIds();
  }

  if (!!request.hasGPUType()) {
    query["GPUType"] = request.getGPUType();
  }

  if (!!request.hasHealthCountShrink()) {
    query["HealthCount"] = request.getHealthCountShrink();
  }

  if (!!request.hasHealthRateShrink()) {
    query["HealthRate"] = request.getHealthRateShrink();
  }

  if (!!request.hasHyperNode()) {
    query["HyperNode"] = request.getHyperNode();
  }

  if (!!request.hasHyperZone()) {
    query["HyperZone"] = request.getHyperZone();
  }

  if (!!request.hasLayoutMode()) {
    query["LayoutMode"] = request.getLayoutMode();
  }

  if (!!request.hasMachineGroupIds()) {
    query["MachineGroupIds"] = request.getMachineGroupIds();
  }

  if (!!request.hasNodeNames()) {
    query["NodeNames"] = request.getNodeNames();
  }

  if (!!request.hasNodeStatuses()) {
    query["NodeStatuses"] = request.getNodeStatuses();
  }

  if (!!request.hasNodeTypes()) {
    query["NodeTypes"] = request.getNodeTypes();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderInstanceIds()) {
    query["OrderInstanceIds"] = request.getOrderInstanceIds();
  }

  if (!!request.hasOrderStatuses()) {
    query["OrderStatuses"] = request.getOrderStatuses();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasQuotaId()) {
    query["QuotaId"] = request.getQuotaId();
  }

  if (!!request.hasReasonCodes()) {
    query["ReasonCodes"] = request.getReasonCodes();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/nodes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary 获取资源节点列表
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listNodesWithOptions(request, headers, runtime);
}

/**
 * @summary 您可以通过此API获取Quota上的任务信息列表
 *
 * @param request ListQuotaWorkloadsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaWorkloadsResponse
 */
ListQuotaWorkloadsResponse Client::listQuotaWorkloadsWithOptions(const string &QuotaId, const ListQuotaWorkloadsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeforeWorkloadId()) {
    query["BeforeWorkloadId"] = request.getBeforeWorkloadId();
  }

  if (!!request.hasGmtDequeuedTimeRange()) {
    query["GmtDequeuedTimeRange"] = request.getGmtDequeuedTimeRange();
  }

  if (!!request.hasGmtEnqueuedTimeRange()) {
    query["GmtEnqueuedTimeRange"] = request.getGmtEnqueuedTimeRange();
  }

  if (!!request.hasGmtPositionModifiedTimeRange()) {
    query["GmtPositionModifiedTimeRange"] = request.getGmtPositionModifiedTimeRange();
  }

  if (!!request.hasNodeName()) {
    query["NodeName"] = request.getNodeName();
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

  if (!!request.hasShowOwn()) {
    query["ShowOwn"] = request.getShowOwn();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSubQuotaIds()) {
    query["SubQuotaIds"] = request.getSubQuotaIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  if (!!request.hasWithHistoricalData()) {
    query["WithHistoricalData"] = request.getWithHistoricalData();
  }

  if (!!request.hasWorkloadCreatedTimeRange()) {
    query["WorkloadCreatedTimeRange"] = request.getWorkloadCreatedTimeRange();
  }

  if (!!request.hasWorkloadIds()) {
    query["WorkloadIds"] = request.getWorkloadIds();
  }

  if (!!request.hasWorkloadStatuses()) {
    query["WorkloadStatuses"] = request.getWorkloadStatuses();
  }

  if (!!request.hasWorkloadType()) {
    query["WorkloadType"] = request.getWorkloadType();
  }

  if (!!request.hasWorkspaceIds()) {
    query["WorkspaceIds"] = request.getWorkspaceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQuotaWorkloads"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(QuotaId) , "/workloads")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaWorkloadsResponse>();
}

/**
 * @summary 您可以通过此API获取Quota上的任务信息列表
 *
 * @param request ListQuotaWorkloadsRequest
 * @return ListQuotaWorkloadsResponse
 */
ListQuotaWorkloadsResponse Client::listQuotaWorkloads(const string &QuotaId, const ListQuotaWorkloadsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQuotaWorkloadsWithOptions(QuotaId, request, headers, runtime);
}

/**
 * @summary 获取Quota列表
 *
 * @param request ListQuotasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotasResponse
 */
ListQuotasResponse Client::listQuotasWithOptions(const ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasHasResource()) {
    query["HasResource"] = request.getHasResource();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasLayoutMode()) {
    query["LayoutMode"] = request.getLayoutMode();
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

  if (!!request.hasParentQuotaId()) {
    query["ParentQuotaId"] = request.getParentQuotaId();
  }

  if (!!request.hasQuotaIds()) {
    query["QuotaIds"] = request.getQuotaIds();
  }

  if (!!request.hasQuotaName()) {
    query["QuotaName"] = request.getQuotaName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatuses()) {
    query["Statuses"] = request.getStatuses();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  if (!!request.hasVersions()) {
    query["Versions"] = request.getVersions();
  }

  if (!!request.hasWorkspaceIds()) {
    query["WorkspaceIds"] = request.getWorkspaceIds();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQuotas"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotasResponse>();
}

/**
 * @summary 获取Quota列表
 *
 * @param request ListQuotasRequest
 * @return ListQuotasResponse
 */
ListQuotasResponse Client::listQuotas(const ListQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQuotasWithOptions(request, headers, runtime);
}

/**
 * @summary list machine groups
 *
 * @param request ListResourceGroupMachineGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupMachineGroupsResponse
 */
ListResourceGroupMachineGroupsResponse Client::listResourceGroupMachineGroupsWithOptions(const string &ResourceGroupID, const ListResourceGroupMachineGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreatorID()) {
    query["CreatorID"] = request.getCreatorID();
  }

  if (!!request.hasEcsSpec()) {
    query["EcsSpec"] = request.getEcsSpec();
  }

  if (!!request.hasMachineGroupIDs()) {
    query["MachineGroupIDs"] = request.getMachineGroupIDs();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderInstanceId()) {
    query["OrderInstanceId"] = request.getOrderInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPaymentDuration()) {
    query["PaymentDuration"] = request.getPaymentDuration();
  }

  if (!!request.hasPaymentDurationUnit()) {
    query["PaymentDurationUnit"] = request.getPaymentDurationUnit();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
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
    {"action" , "ListResourceGroupMachineGroups"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceGroupID) , "/machinegroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupMachineGroupsResponse>();
}

/**
 * @summary list machine groups
 *
 * @param request ListResourceGroupMachineGroupsRequest
 * @return ListResourceGroupMachineGroupsResponse
 */
ListResourceGroupMachineGroupsResponse Client::listResourceGroupMachineGroups(const string &ResourceGroupID, const ListResourceGroupMachineGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceGroupMachineGroupsWithOptions(ResourceGroupID, request, headers, runtime);
}

/**
 * @summary list resource group
 *
 * @param request ListResourceGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroupsWithOptions(const ListResourceGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingResourceProvider()) {
    query["ComputingResourceProvider"] = request.getComputingResourceProvider();
  }

  if (!!request.hasHasResource()) {
    query["HasResource"] = request.getHasResource();
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

  if (!!request.hasResourceGroupIDs()) {
    query["ResourceGroupIDs"] = request.getResourceGroupIDs();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasShowAll()) {
    query["ShowAll"] = request.getShowAll();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVersions()) {
    query["Versions"] = request.getVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroups"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupsResponse>();
}

/**
 * @summary list resource group
 *
 * @param request ListResourceGroupsRequest
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroups(const ListResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 查标签接口
 *
 * @param tmpReq ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary 查标签接口
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取指定TrainingJob的事件。
 *
 * @param request ListTrainingJobEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrainingJobEventsResponse
 */
ListTrainingJobEventsResponse Client::listTrainingJobEventsWithOptions(const string &TrainingJobId, const ListTrainingJobEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrainingJobEvents"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrainingJobEventsResponse>();
}

/**
 * @summary 获取指定TrainingJob的事件。
 *
 * @param request ListTrainingJobEventsRequest
 * @return ListTrainingJobEventsResponse
 */
ListTrainingJobEventsResponse Client::listTrainingJobEvents(const string &TrainingJobId, const ListTrainingJobEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrainingJobEventsWithOptions(TrainingJobId, request, headers, runtime);
}

/**
 * @summary 获取指定Instance（TrainingJob的运行单元）的日志。
 *
 * @param request ListTrainingJobInstanceEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrainingJobInstanceEventsResponse
 */
ListTrainingJobInstanceEventsResponse Client::listTrainingJobInstanceEventsWithOptions(const string &TrainingJobId, const string &InstanceId, const ListTrainingJobInstanceEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrainingJobInstanceEvents"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrainingJobInstanceEventsResponse>();
}

/**
 * @summary 获取指定Instance（TrainingJob的运行单元）的日志。
 *
 * @param request ListTrainingJobInstanceEventsRequest
 * @return ListTrainingJobInstanceEventsResponse
 */
ListTrainingJobInstanceEventsResponse Client::listTrainingJobInstanceEvents(const string &TrainingJobId, const string &InstanceId, const ListTrainingJobInstanceEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrainingJobInstanceEventsWithOptions(TrainingJobId, InstanceId, request, headers, runtime);
}

/**
 * @summary 获取Training Job实例的Metrics
 *
 * @param request ListTrainingJobInstanceMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrainingJobInstanceMetricsResponse
 */
ListTrainingJobInstanceMetricsResponse Client::listTrainingJobInstanceMetricsWithOptions(const string &TrainingJobId, const ListTrainingJobInstanceMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.getTimeStep();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrainingJobInstanceMetrics"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/instancemetrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrainingJobInstanceMetricsResponse>();
}

/**
 * @summary 获取Training Job实例的Metrics
 *
 * @param request ListTrainingJobInstanceMetricsRequest
 * @return ListTrainingJobInstanceMetricsResponse
 */
ListTrainingJobInstanceMetricsResponse Client::listTrainingJobInstanceMetrics(const string &TrainingJobId, const ListTrainingJobInstanceMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrainingJobInstanceMetricsWithOptions(TrainingJobId, request, headers, runtime);
}

/**
 * @summary 获取Training Job的日志
 *
 * @param request ListTrainingJobLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrainingJobLogsResponse
 */
ListTrainingJobLogsResponse Client::listTrainingJobLogsWithOptions(const string &TrainingJobId, const ListTrainingJobLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasWorkerId()) {
    query["WorkerId"] = request.getWorkerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrainingJobLogs"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrainingJobLogsResponse>();
}

/**
 * @summary 获取Training Job的日志
 *
 * @param request ListTrainingJobLogsRequest
 * @return ListTrainingJobLogsResponse
 */
ListTrainingJobLogsResponse Client::listTrainingJobLogs(const string &TrainingJobId, const ListTrainingJobLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrainingJobLogsWithOptions(TrainingJobId, request, headers, runtime);
}

/**
 * @summary 获取Training Job的Metrics
 *
 * @param request ListTrainingJobMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrainingJobMetricsResponse
 */
ListTrainingJobMetricsResponse Client::listTrainingJobMetricsWithOptions(const string &TrainingJobId, const ListTrainingJobMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrainingJobMetrics"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrainingJobMetricsResponse>();
}

/**
 * @summary 获取Training Job的Metrics
 *
 * @param request ListTrainingJobMetricsRequest
 * @return ListTrainingJobMetricsResponse
 */
ListTrainingJobMetricsResponse Client::listTrainingJobMetrics(const string &TrainingJobId, const ListTrainingJobMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrainingJobMetricsWithOptions(TrainingJobId, request, headers, runtime);
}

/**
 * @summary 获取Training Job 产出的所有模型信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrainingJobOutputModelsResponse
 */
ListTrainingJobOutputModelsResponse Client::listTrainingJobOutputModelsWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrainingJobOutputModels"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/outputmodels")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrainingJobOutputModelsResponse>();
}

/**
 * @summary 获取Training Job 产出的所有模型信息
 *
 * @return ListTrainingJobOutputModelsResponse
 */
ListTrainingJobOutputModelsResponse Client::listTrainingJobOutputModels(const string &TrainingJobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrainingJobOutputModelsWithOptions(TrainingJobId, headers, runtime);
}

/**
 * @summary 获取TrainingJob的列表
 *
 * @param tmpReq ListTrainingJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTrainingJobsResponse
 */
ListTrainingJobsResponse Client::listTrainingJobsWithOptions(const ListTrainingJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTrainingJobsShrinkRequest request = ListTrainingJobsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabels()) {
    request.setLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabels(), "Labels", "json"));
  }

  json query = {};
  if (!!request.hasAlgorithmName()) {
    query["AlgorithmName"] = request.getAlgorithmName();
  }

  if (!!request.hasAlgorithmProvider()) {
    query["AlgorithmProvider"] = request.getAlgorithmProvider();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsTempAlgo()) {
    query["IsTempAlgo"] = request.getIsTempAlgo();
  }

  if (!!request.hasLabelsShrink()) {
    query["Labels"] = request.getLabelsShrink();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTrainingJobId()) {
    query["TrainingJobId"] = request.getTrainingJobId();
  }

  if (!!request.hasTrainingJobName()) {
    query["TrainingJobName"] = request.getTrainingJobName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTrainingJobs"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTrainingJobsResponse>();
}

/**
 * @summary 获取TrainingJob的列表
 *
 * @param request ListTrainingJobsRequest
 * @return ListTrainingJobsResponse
 */
ListTrainingJobsResponse Client::listTrainingJobs(const ListTrainingJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTrainingJobsWithOptions(request, headers, runtime);
}

/**
 * @summary 您可以通过OperateNode对节点进行操作
 *
 * @param request OperateNodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateNodeResponse
 */
OperateNodeResponse Client::operateNodeWithOptions(const string &NodeId, const OperateNodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOperation()) {
    body["Operation"] = request.getOperation();
  }

  if (!!request.hasOperationParameters()) {
    body["OperationParameters"] = request.getOperationParameters();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OperateNode"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/nodes/" , Darabonba::Encode::Encoder::percentEncode(NodeId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateNodeResponse>();
}

/**
 * @summary 您可以通过OperateNode对节点进行操作
 *
 * @param request OperateNodeRequest
 * @return OperateNodeResponse
 */
OperateNodeResponse Client::operateNode(const string &NodeId, const OperateNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return operateNodeWithOptions(NodeId, request, headers, runtime);
}

/**
 * @summary 扩缩容Quota
 *
 * @param request ScaleQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleQuotaResponse
 */
ScaleQuotaResponse Client::scaleQuotaWithOptions(const string &QuotaId, const ScaleQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMin()) {
    body["Min"] = request.getMin();
  }

  if (!!request.hasResourceGroupIds()) {
    body["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ScaleQuota"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(QuotaId) , "/action/scale")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleQuotaResponse>();
}

/**
 * @summary 扩缩容Quota
 *
 * @param request ScaleQuotaRequest
 * @return ScaleQuotaResponse
 */
ScaleQuotaResponse Client::scaleQuota(const string &QuotaId, const ScaleQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleQuotaWithOptions(QuotaId, request, headers, runtime);
}

/**
 * @summary 停止一个TrainingJob
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTrainingJobResponse
 */
StopTrainingJobResponse Client::stopTrainingJobWithOptions(const string &TrainingJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTrainingJob"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTrainingJobResponse>();
}

/**
 * @summary 停止一个TrainingJob
 *
 * @return StopTrainingJobResponse
 */
StopTrainingJobResponse Client::stopTrainingJob(const string &TrainingJobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTrainingJobWithOptions(TrainingJobId, headers, runtime);
}

/**
 * @summary 打标签接口
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary 打标签接口
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 删标签接口
 *
 * @param tmpReq UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "ResourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKey(), "TagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIdShrink()) {
    query["ResourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["TagKey"] = request.getTagKeyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary 删标签接口
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 更新算法
 *
 * @param request UpdateAlgorithmRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlgorithmResponse
 */
UpdateAlgorithmResponse Client::updateAlgorithmWithOptions(const string &AlgorithmId, const UpdateAlgorithmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlgorithmDescription()) {
    body["AlgorithmDescription"] = request.getAlgorithmDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlgorithm"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlgorithmResponse>();
}

/**
 * @summary 更新算法
 *
 * @param request UpdateAlgorithmRequest
 * @return UpdateAlgorithmResponse
 */
UpdateAlgorithmResponse Client::updateAlgorithm(const string &AlgorithmId, const UpdateAlgorithmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAlgorithmWithOptions(AlgorithmId, request, headers, runtime);
}

/**
 * @summary 更新算法
 *
 * @param tmpReq UpdateAlgorithmVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlgorithmVersionResponse
 */
UpdateAlgorithmVersionResponse Client::updateAlgorithmVersionWithOptions(const string &AlgorithmId, const string &AlgorithmVersion, const UpdateAlgorithmVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAlgorithmVersionShrinkRequest request = UpdateAlgorithmVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlgorithmSpec()) {
    request.setAlgorithmSpecShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlgorithmSpec(), "AlgorithmSpec", "json"));
  }

  json body = {};
  if (!!request.hasAlgorithmSpecShrink()) {
    body["AlgorithmSpec"] = request.getAlgorithmSpecShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlgorithmVersion"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithms/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(AlgorithmVersion))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlgorithmVersionResponse>();
}

/**
 * @summary 更新算法
 *
 * @param request UpdateAlgorithmVersionRequest
 * @return UpdateAlgorithmVersionResponse
 */
UpdateAlgorithmVersionResponse Client::updateAlgorithmVersion(const string &AlgorithmId, const string &AlgorithmVersion, const UpdateAlgorithmVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAlgorithmVersionWithOptions(AlgorithmId, AlgorithmVersion, request, headers, runtime);
}

/**
 * @summary 更新Quota
 *
 * @param request UpdateQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQuotaResponse
 */
UpdateQuotaResponse Client::updateQuotaWithOptions(const string &QuotaId, const UpdateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  if (!!request.hasQueueStrategy()) {
    body["QueueStrategy"] = request.getQueueStrategy();
  }

  if (!!request.hasQuotaConfig()) {
    body["QuotaConfig"] = request.getQuotaConfig();
  }

  if (!!request.hasQuotaName()) {
    body["QuotaName"] = request.getQuotaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateQuota"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas/" , Darabonba::Encode::Encoder::percentEncode(QuotaId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQuotaResponse>();
}

/**
 * @summary 更新Quota
 *
 * @param request UpdateQuotaRequest
 * @return UpdateQuotaResponse
 */
UpdateQuotaResponse Client::updateQuota(const string &QuotaId, const UpdateQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateQuotaWithOptions(QuotaId, request, headers, runtime);
}

/**
 * @summary 更新Resource Group
 *
 * @param request UpdateResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceGroupResponse
 */
UpdateResourceGroupResponse Client::updateResourceGroupWithOptions(const string &ResourceGroupID, const UpdateResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasUnbind()) {
    body["Unbind"] = request.getUnbind();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceGroup"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(ResourceGroupID))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceGroupResponse>();
}

/**
 * @summary 更新Resource Group
 *
 * @param request UpdateResourceGroupRequest
 * @return UpdateResourceGroupResponse
 */
UpdateResourceGroupResponse Client::updateResourceGroup(const string &ResourceGroupID, const UpdateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceGroupWithOptions(ResourceGroupID, request, headers, runtime);
}

/**
 * @summary 更新一个TrainingJob的Labels
 *
 * @param request UpdateTrainingJobLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrainingJobLabelsResponse
 */
UpdateTrainingJobLabelsResponse Client::updateTrainingJobLabelsWithOptions(const string &TrainingJobId, const UpdateTrainingJobLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTrainingJobLabels"},
    {"version" , "2022-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/trainingjobs/" , Darabonba::Encode::Encoder::percentEncode(TrainingJobId) , "/labels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrainingJobLabelsResponse>();
}

/**
 * @summary 更新一个TrainingJob的Labels
 *
 * @param request UpdateTrainingJobLabelsRequest
 * @return UpdateTrainingJobLabelsResponse
 */
UpdateTrainingJobLabelsResponse Client::updateTrainingJobLabels(const string &TrainingJobId, const UpdateTrainingJobLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTrainingJobLabelsWithOptions(TrainingJobId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PaiStudio20220112