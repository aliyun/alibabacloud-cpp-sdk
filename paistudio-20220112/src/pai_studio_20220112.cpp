// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_studio_20220112.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_PaiStudio20220112;

Alibabacloud_PaiStudio20220112::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "pai.cn-beijing.aliyuncs.com"},
    {"cn-hangzhou", "pai.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "pai.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "pai.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong", "pai.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1", "pai.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "pai.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "pai.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "pai.ap-southeast-5.aliyuncs.com"},
    {"us-west-1", "pai.us-west-1.aliyuncs.com"},
    {"us-east-1", "pai.us-east-1.aliyuncs.com"},
    {"eu-central-1", "pai.eu-central-1.aliyuncs.com"},
    {"me-east-1", "pai.me-east-1.aliyuncs.com"},
    {"ap-south-1", "pai.ap-south-1.aliyuncs.com"},
    {"cn-qingdao", "pai.cn-qingdao.aliyuncs.com"},
    {"cn-zhangjiakou", "pai.cn-zhangjiakou.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("paistudio"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PaiStudio20220112::Client::getEndpoint(shared_ptr<string> productId,
                                                           shared_ptr<string> regionId,
                                                           shared_ptr<string> endpointRule,
                                                           shared_ptr<string> network,
                                                           shared_ptr<string> suffix,
                                                           shared_ptr<map<string, string>> endpointMap,
                                                           shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CheckInstanceWebTerminalResponse Alibabacloud_PaiStudio20220112::Client::checkInstanceWebTerminalWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                             shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<CheckInstanceWebTerminalRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkInfo)) {
    body->insert(pair<string, string>("CheckInfo", *request->checkInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckInstanceWebTerminal"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/webterminals/action/check"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckInstanceWebTerminalResponse(callApi(params, req, runtime));
  }
  else {
    return CheckInstanceWebTerminalResponse(execute(params, req, runtime));
  }
}

CheckInstanceWebTerminalResponse Alibabacloud_PaiStudio20220112::Client::checkInstanceWebTerminal(shared_ptr<string> TrainingJobId, shared_ptr<string> InstanceId, shared_ptr<CheckInstanceWebTerminalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkInstanceWebTerminalWithOptions(TrainingJobId, InstanceId, request, headers, runtime);
}

CreateAlgorithmResponse Alibabacloud_PaiStudio20220112::Client::createAlgorithmWithOptions(shared_ptr<CreateAlgorithmRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmDescription)) {
    body->insert(pair<string, string>("AlgorithmDescription", *request->algorithmDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmName)) {
    body->insert(pair<string, string>("AlgorithmName", *request->algorithmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlgorithm"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAlgorithmResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAlgorithmResponse(execute(params, req, runtime));
  }
}

CreateAlgorithmResponse Alibabacloud_PaiStudio20220112::Client::createAlgorithm(shared_ptr<CreateAlgorithmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAlgorithmWithOptions(request, headers, runtime);
}

CreateAlgorithmVersionResponse Alibabacloud_PaiStudio20220112::Client::createAlgorithmVersionWithOptions(shared_ptr<string> AlgorithmId,
                                                                                                         shared_ptr<string> AlgorithmVersion,
                                                                                                         shared_ptr<CreateAlgorithmVersionRequest> tmpReq,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAlgorithmVersionShrinkRequest> request = make_shared<CreateAlgorithmVersionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AlgorithmSpec>(tmpReq->algorithmSpec)) {
    request->algorithmSpecShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->algorithmSpec, make_shared<string>("AlgorithmSpec"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmSpecShrink)) {
    body->insert(pair<string, string>("AlgorithmSpec", *request->algorithmSpecShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlgorithmVersion"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmVersion)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAlgorithmVersionResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAlgorithmVersionResponse(execute(params, req, runtime));
  }
}

CreateAlgorithmVersionResponse Alibabacloud_PaiStudio20220112::Client::createAlgorithmVersion(shared_ptr<string> AlgorithmId, shared_ptr<string> AlgorithmVersion, shared_ptr<CreateAlgorithmVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAlgorithmVersionWithOptions(AlgorithmId, AlgorithmVersion, request, headers, runtime);
}

CreateInstanceWebTerminalResponse Alibabacloud_PaiStudio20220112::Client::createInstanceWebTerminalWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                               shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceWebTerminal"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/webterminals"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateInstanceWebTerminalResponse(callApi(params, req, runtime));
  }
  else {
    return CreateInstanceWebTerminalResponse(execute(params, req, runtime));
  }
}

CreateInstanceWebTerminalResponse Alibabacloud_PaiStudio20220112::Client::createInstanceWebTerminal(shared_ptr<string> TrainingJobId, shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWebTerminalWithOptions(TrainingJobId, InstanceId, headers, runtime);
}

CreateQuotaResponse Alibabacloud_PaiStudio20220112::Client::createQuotaWithOptions(shared_ptr<CreateQuotaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->allocateStrategy)) {
    body->insert(pair<string, string>("AllocateStrategy", *request->allocateStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Label>>(request->labels)) {
    body->insert(pair<string, vector<Label>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<ResourceSpec>(request->min)) {
    body->insert(pair<string, ResourceSpec>("Min", *request->min));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentQuotaId)) {
    body->insert(pair<string, string>("ParentQuotaId", *request->parentQuotaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueStrategy)) {
    body->insert(pair<string, string>("QueueStrategy", *request->queueStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<QuotaConfig>(request->quotaConfig)) {
    body->insert(pair<string, QuotaConfig>("QuotaConfig", *request->quotaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaName)) {
    body->insert(pair<string, string>("QuotaName", *request->quotaName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceGroupIds)) {
    body->insert(pair<string, vector<string>>("ResourceGroupIds", *request->resourceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQuota"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return CreateQuotaResponse(execute(params, req, runtime));
  }
}

CreateQuotaResponse Alibabacloud_PaiStudio20220112::Client::createQuota(shared_ptr<CreateQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createQuotaWithOptions(request, headers, runtime);
}

CreateResourceGroupResponse Alibabacloud_PaiStudio20220112::Client::createResourceGroupWithOptions(shared_ptr<CreateResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->computingResourceProvider)) {
    body->insert(pair<string, string>("ComputingResourceProvider", *request->computingResourceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceGroupRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<CreateResourceGroupRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<UserVpc>(request->userVpc)) {
    body->insert(pair<string, UserVpc>("UserVpc", *request->userVpc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateResourceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateResourceGroupResponse(execute(params, req, runtime));
  }
}

CreateResourceGroupResponse Alibabacloud_PaiStudio20220112::Client::createResourceGroup(shared_ptr<CreateResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceGroupWithOptions(request, headers, runtime);
}

CreateTrainingJobResponse Alibabacloud_PaiStudio20220112::Client::createTrainingJobWithOptions(shared_ptr<CreateTrainingJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmName)) {
    body->insert(pair<string, string>("AlgorithmName", *request->algorithmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmProvider)) {
    body->insert(pair<string, string>("AlgorithmProvider", *request->algorithmProvider));
  }
  if (!Darabonba_Util::Client::isUnset<AlgorithmSpec>(request->algorithmSpec)) {
    body->insert(pair<string, AlgorithmSpec>("AlgorithmSpec", *request->algorithmSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmVersion)) {
    body->insert(pair<string, string>("AlgorithmVersion", *request->algorithmVersion));
  }
  if (!Darabonba_Util::Client::isUnset<Location>(request->codeDir)) {
    body->insert(pair<string, Location>("CodeDir", *request->codeDir));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTrainingJobRequestComputeResource>(request->computeResource)) {
    body->insert(pair<string, CreateTrainingJobRequestComputeResource>("ComputeResource", *request->computeResource));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->environments)) {
    body->insert(pair<string, map<string, string>>("Environments", *request->environments));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTrainingJobRequestExperimentConfig>(request->experimentConfig)) {
    body->insert(pair<string, CreateTrainingJobRequestExperimentConfig>("ExperimentConfig", *request->experimentConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTrainingJobRequestHyperParameters>>(request->hyperParameters)) {
    body->insert(pair<string, vector<CreateTrainingJobRequestHyperParameters>>("HyperParameters", *request->hyperParameters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTrainingJobRequestInputChannels>>(request->inputChannels)) {
    body->insert(pair<string, vector<CreateTrainingJobRequestInputChannels>>("InputChannels", *request->inputChannels));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTrainingJobRequestLabels>>(request->labels)) {
    body->insert(pair<string, vector<CreateTrainingJobRequestLabels>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTrainingJobRequestOutputChannels>>(request->outputChannels)) {
    body->insert(pair<string, vector<CreateTrainingJobRequestOutputChannels>>("OutputChannels", *request->outputChannels));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->pythonRequirements)) {
    body->insert(pair<string, vector<string>>("PythonRequirements", *request->pythonRequirements));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleArn)) {
    body->insert(pair<string, string>("RoleArn", *request->roleArn));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTrainingJobRequestScheduler>(request->scheduler)) {
    body->insert(pair<string, CreateTrainingJobRequestScheduler>("Scheduler", *request->scheduler));
  }
  if (!Darabonba_Util::Client::isUnset<JobSettings>(request->settings)) {
    body->insert(pair<string, JobSettings>("Settings", *request->settings));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainingJobDescription)) {
    body->insert(pair<string, string>("TrainingJobDescription", *request->trainingJobDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainingJobName)) {
    body->insert(pair<string, string>("TrainingJobName", *request->trainingJobName));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTrainingJobRequestUserVpc>(request->userVpc)) {
    body->insert(pair<string, CreateTrainingJobRequestUserVpc>("UserVpc", *request->userVpc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrainingJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return CreateTrainingJobResponse(execute(params, req, runtime));
  }
}

CreateTrainingJobResponse Alibabacloud_PaiStudio20220112::Client::createTrainingJob(shared_ptr<CreateTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTrainingJobWithOptions(request, headers, runtime);
}

DeleteAlgorithmResponse Alibabacloud_PaiStudio20220112::Client::deleteAlgorithmWithOptions(shared_ptr<string> AlgorithmId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlgorithm"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAlgorithmResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAlgorithmResponse(execute(params, req, runtime));
  }
}

DeleteAlgorithmResponse Alibabacloud_PaiStudio20220112::Client::deleteAlgorithm(shared_ptr<string> AlgorithmId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAlgorithmWithOptions(AlgorithmId, headers, runtime);
}

DeleteAlgorithmVersionResponse Alibabacloud_PaiStudio20220112::Client::deleteAlgorithmVersionWithOptions(shared_ptr<string> AlgorithmId,
                                                                                                         shared_ptr<string> AlgorithmVersion,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlgorithmVersion"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmVersion)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAlgorithmVersionResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAlgorithmVersionResponse(execute(params, req, runtime));
  }
}

DeleteAlgorithmVersionResponse Alibabacloud_PaiStudio20220112::Client::deleteAlgorithmVersion(shared_ptr<string> AlgorithmId, shared_ptr<string> AlgorithmVersion) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAlgorithmVersionWithOptions(AlgorithmId, AlgorithmVersion, headers, runtime);
}

DeleteMachineGroupResponse Alibabacloud_PaiStudio20220112::Client::deleteMachineGroupWithOptions(shared_ptr<string> MachineGroupID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMachineGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/machinegroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MachineGroupID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMachineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMachineGroupResponse(execute(params, req, runtime));
  }
}

DeleteMachineGroupResponse Alibabacloud_PaiStudio20220112::Client::deleteMachineGroup(shared_ptr<string> MachineGroupID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteMachineGroupWithOptions(MachineGroupID, headers, runtime);
}

DeleteQuotaResponse Alibabacloud_PaiStudio20220112::Client::deleteQuotaWithOptions(shared_ptr<string> QuotaId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteQuota"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(QuotaId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteQuotaResponse(execute(params, req, runtime));
  }
}

DeleteQuotaResponse Alibabacloud_PaiStudio20220112::Client::deleteQuota(shared_ptr<string> QuotaId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteQuotaWithOptions(QuotaId, headers, runtime);
}

DeleteResourceGroupResponse Alibabacloud_PaiStudio20220112::Client::deleteResourceGroupWithOptions(shared_ptr<string> ResourceGroupID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceGroupID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteResourceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteResourceGroupResponse(execute(params, req, runtime));
  }
}

DeleteResourceGroupResponse Alibabacloud_PaiStudio20220112::Client::deleteResourceGroup(shared_ptr<string> ResourceGroupID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceGroupWithOptions(ResourceGroupID, headers, runtime);
}

DeleteResourceGroupMachineGroupResponse Alibabacloud_PaiStudio20220112::Client::deleteResourceGroupMachineGroupWithOptions(shared_ptr<string> MachineGroupID,
                                                                                                                           shared_ptr<string> ResourceGroupID,
                                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceGroupMachineGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceGroupID)) + string("/machinegroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MachineGroupID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteResourceGroupMachineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteResourceGroupMachineGroupResponse(execute(params, req, runtime));
  }
}

DeleteResourceGroupMachineGroupResponse Alibabacloud_PaiStudio20220112::Client::deleteResourceGroupMachineGroup(shared_ptr<string> MachineGroupID, shared_ptr<string> ResourceGroupID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceGroupMachineGroupWithOptions(MachineGroupID, ResourceGroupID, headers, runtime);
}

DeleteTrainingJobResponse Alibabacloud_PaiStudio20220112::Client::deleteTrainingJobWithOptions(shared_ptr<string> TrainingJobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrainingJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteTrainingJobResponse(execute(params, req, runtime));
  }
}

DeleteTrainingJobResponse Alibabacloud_PaiStudio20220112::Client::deleteTrainingJob(shared_ptr<string> TrainingJobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTrainingJobWithOptions(TrainingJobId, headers, runtime);
}

DeleteTrainingJobLabelsResponse Alibabacloud_PaiStudio20220112::Client::deleteTrainingJobLabelsWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                           shared_ptr<DeleteTrainingJobLabelsRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keys)) {
    query->insert(pair<string, string>("Keys", *request->keys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrainingJobLabels"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/labels"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteTrainingJobLabelsResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteTrainingJobLabelsResponse(execute(params, req, runtime));
  }
}

DeleteTrainingJobLabelsResponse Alibabacloud_PaiStudio20220112::Client::deleteTrainingJobLabels(shared_ptr<string> TrainingJobId, shared_ptr<DeleteTrainingJobLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTrainingJobLabelsWithOptions(TrainingJobId, request, headers, runtime);
}

GetAlgorithmResponse Alibabacloud_PaiStudio20220112::Client::getAlgorithmWithOptions(shared_ptr<string> AlgorithmId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithm"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAlgorithmResponse(callApi(params, req, runtime));
  }
  else {
    return GetAlgorithmResponse(execute(params, req, runtime));
  }
}

GetAlgorithmResponse Alibabacloud_PaiStudio20220112::Client::getAlgorithm(shared_ptr<string> AlgorithmId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAlgorithmWithOptions(AlgorithmId, headers, runtime);
}

GetAlgorithmVersionResponse Alibabacloud_PaiStudio20220112::Client::getAlgorithmVersionWithOptions(shared_ptr<string> AlgorithmId,
                                                                                                   shared_ptr<string> AlgorithmVersion,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithmVersion"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmVersion)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAlgorithmVersionResponse(callApi(params, req, runtime));
  }
  else {
    return GetAlgorithmVersionResponse(execute(params, req, runtime));
  }
}

GetAlgorithmVersionResponse Alibabacloud_PaiStudio20220112::Client::getAlgorithmVersion(shared_ptr<string> AlgorithmId, shared_ptr<string> AlgorithmVersion) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAlgorithmVersionWithOptions(AlgorithmId, AlgorithmVersion, headers, runtime);
}

GetMachineGroupResponse Alibabacloud_PaiStudio20220112::Client::getMachineGroupWithOptions(shared_ptr<string> MachineGroupID, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMachineGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/machinegroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MachineGroupID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMachineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetMachineGroupResponse(execute(params, req, runtime));
  }
}

GetMachineGroupResponse Alibabacloud_PaiStudio20220112::Client::getMachineGroup(shared_ptr<string> MachineGroupID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMachineGroupWithOptions(MachineGroupID, headers, runtime);
}

GetNodeMetricsResponse Alibabacloud_PaiStudio20220112::Client::getNodeMetricsWithOptions(shared_ptr<string> ResourceGroupID,
                                                                                         shared_ptr<string> MetricType,
                                                                                         shared_ptr<GetNodeMetricsRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->GPUType)) {
    query->insert(pair<string, string>("GPUType", *request->GPUType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeStep)) {
    query->insert(pair<string, string>("TimeStep", *request->timeStep));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeMetrics"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceGroupID)) + string("/nodemetrics/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MetricType)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetNodeMetricsResponse(callApi(params, req, runtime));
  }
  else {
    return GetNodeMetricsResponse(execute(params, req, runtime));
  }
}

GetNodeMetricsResponse Alibabacloud_PaiStudio20220112::Client::getNodeMetrics(shared_ptr<string> ResourceGroupID, shared_ptr<string> MetricType, shared_ptr<GetNodeMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getNodeMetricsWithOptions(ResourceGroupID, MetricType, request, headers, runtime);
}

GetQuotaResponse Alibabacloud_PaiStudio20220112::Client::getQuotaWithOptions(shared_ptr<string> QuotaId,
                                                                             shared_ptr<GetQuotaRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQuota"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(QuotaId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return GetQuotaResponse(execute(params, req, runtime));
  }
}

GetQuotaResponse Alibabacloud_PaiStudio20220112::Client::getQuota(shared_ptr<string> QuotaId, shared_ptr<GetQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQuotaWithOptions(QuotaId, request, headers, runtime);
}

GetResourceGroupResponse Alibabacloud_PaiStudio20220112::Client::getResourceGroupWithOptions(shared_ptr<string> ResourceGroupID,
                                                                                             shared_ptr<GetResourceGroupRequest> tmpReq,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetResourceGroupShrinkRequest> request = make_shared<GetResourceGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetResourceGroupRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAIWorkspaceDataEnabled)) {
    query->insert(pair<string, bool>("IsAIWorkspaceDataEnabled", *request->isAIWorkspaceDataEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceGroupID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResourceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetResourceGroupResponse(execute(params, req, runtime));
  }
}

GetResourceGroupResponse Alibabacloud_PaiStudio20220112::Client::getResourceGroup(shared_ptr<string> ResourceGroupID, shared_ptr<GetResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceGroupWithOptions(ResourceGroupID, request, headers, runtime);
}

GetResourceGroupMachineGroupResponse Alibabacloud_PaiStudio20220112::Client::getResourceGroupMachineGroupWithOptions(shared_ptr<string> MachineGroupID,
                                                                                                                     shared_ptr<string> ResourceGroupID,
                                                                                                                     shared_ptr<GetResourceGroupMachineGroupRequest> tmpReq,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetResourceGroupMachineGroupShrinkRequest> request = make_shared<GetResourceGroupMachineGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetResourceGroupMachineGroupRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceGroupMachineGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceGroupID)) + string("/machinegroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(MachineGroupID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResourceGroupMachineGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetResourceGroupMachineGroupResponse(execute(params, req, runtime));
  }
}

GetResourceGroupMachineGroupResponse Alibabacloud_PaiStudio20220112::Client::getResourceGroupMachineGroup(shared_ptr<string> MachineGroupID, shared_ptr<string> ResourceGroupID, shared_ptr<GetResourceGroupMachineGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceGroupMachineGroupWithOptions(MachineGroupID, ResourceGroupID, request, headers, runtime);
}

GetResourceGroupRequestResponse Alibabacloud_PaiStudio20220112::Client::getResourceGroupRequestWithOptions(shared_ptr<GetResourceGroupRequestRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->podStatus)) {
    query->insert(pair<string, string>("PodStatus", *request->podStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupID)) {
    query->insert(pair<string, string>("ResourceGroupID", *request->resourceGroupID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceGroupRequest"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/data/request"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResourceGroupRequestResponse(callApi(params, req, runtime));
  }
  else {
    return GetResourceGroupRequestResponse(execute(params, req, runtime));
  }
}

GetResourceGroupRequestResponse Alibabacloud_PaiStudio20220112::Client::getResourceGroupRequest(shared_ptr<GetResourceGroupRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceGroupRequestWithOptions(request, headers, runtime);
}

GetResourceGroupTotalResponse Alibabacloud_PaiStudio20220112::Client::getResourceGroupTotalWithOptions(shared_ptr<GetResourceGroupTotalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupID)) {
    query->insert(pair<string, string>("ResourceGroupID", *request->resourceGroupID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceGroupTotal"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/data/total"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResourceGroupTotalResponse(callApi(params, req, runtime));
  }
  else {
    return GetResourceGroupTotalResponse(execute(params, req, runtime));
  }
}

GetResourceGroupTotalResponse Alibabacloud_PaiStudio20220112::Client::getResourceGroupTotal(shared_ptr<GetResourceGroupTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceGroupTotalWithOptions(request, headers, runtime);
}

GetSpotPriceHistoryResponse Alibabacloud_PaiStudio20220112::Client::getSpotPriceHistoryWithOptions(shared_ptr<string> InstanceType,
                                                                                                   shared_ptr<GetSpotPriceHistoryRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spotDuration)) {
    query->insert(pair<string, long>("SpotDuration", *request->spotDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpotPriceHistory"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/spots/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceType)) + string("/pricehistory"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSpotPriceHistoryResponse(callApi(params, req, runtime));
  }
  else {
    return GetSpotPriceHistoryResponse(execute(params, req, runtime));
  }
}

GetSpotPriceHistoryResponse Alibabacloud_PaiStudio20220112::Client::getSpotPriceHistory(shared_ptr<string> InstanceType, shared_ptr<GetSpotPriceHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSpotPriceHistoryWithOptions(InstanceType, request, headers, runtime);
}

GetTokenResponse Alibabacloud_PaiStudio20220112::Client::getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTime)) {
    query->insert(pair<string, long>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainingJobId)) {
    query->insert(pair<string, string>("TrainingJobId", *request->trainingJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetToken"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tokens"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTokenResponse(callApi(params, req, runtime));
  }
  else {
    return GetTokenResponse(execute(params, req, runtime));
  }
}

GetTokenResponse Alibabacloud_PaiStudio20220112::Client::getToken(shared_ptr<GetTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTokenWithOptions(request, headers, runtime);
}

GetTrainingJobResponse Alibabacloud_PaiStudio20220112::Client::getTrainingJobWithOptions(shared_ptr<string> TrainingJobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrainingJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetTrainingJobResponse(execute(params, req, runtime));
  }
}

GetTrainingJobResponse Alibabacloud_PaiStudio20220112::Client::getTrainingJob(shared_ptr<string> TrainingJobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTrainingJobWithOptions(TrainingJobId, headers, runtime);
}

GetTrainingJobErrorInfoResponse Alibabacloud_PaiStudio20220112::Client::getTrainingJobErrorInfoWithOptions(shared_ptr<string> TrainingJobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrainingJobErrorInfo"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/errorinfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTrainingJobErrorInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetTrainingJobErrorInfoResponse(execute(params, req, runtime));
  }
}

GetTrainingJobErrorInfoResponse Alibabacloud_PaiStudio20220112::Client::getTrainingJobErrorInfo(shared_ptr<string> TrainingJobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTrainingJobErrorInfoWithOptions(TrainingJobId, headers, runtime);
}

GetTrainingJobLatestMetricsResponse Alibabacloud_PaiStudio20220112::Client::getTrainingJobLatestMetricsWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                                   shared_ptr<GetTrainingJobLatestMetricsRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->names)) {
    query->insert(pair<string, string>("Names", *request->names));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrainingJobLatestMetrics"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/latestmetrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTrainingJobLatestMetricsResponse(callApi(params, req, runtime));
  }
  else {
    return GetTrainingJobLatestMetricsResponse(execute(params, req, runtime));
  }
}

GetTrainingJobLatestMetricsResponse Alibabacloud_PaiStudio20220112::Client::getTrainingJobLatestMetrics(shared_ptr<string> TrainingJobId, shared_ptr<GetTrainingJobLatestMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTrainingJobLatestMetricsWithOptions(TrainingJobId, request, headers, runtime);
}

GetUserViewMetricsResponse Alibabacloud_PaiStudio20220112::Client::getUserViewMetricsWithOptions(shared_ptr<string> ResourceGroupID,
                                                                                                 shared_ptr<GetUserViewMetricsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeStep)) {
    query->insert(pair<string, string>("TimeStep", *request->timeStep));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserViewMetrics"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceGroupID)) + string("/usermetrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetUserViewMetricsResponse(callApi(params, req, runtime));
  }
  else {
    return GetUserViewMetricsResponse(execute(params, req, runtime));
  }
}

GetUserViewMetricsResponse Alibabacloud_PaiStudio20220112::Client::getUserViewMetrics(shared_ptr<string> ResourceGroupID, shared_ptr<GetUserViewMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserViewMetricsWithOptions(ResourceGroupID, request, headers, runtime);
}

ListAlgorithmVersionsResponse Alibabacloud_PaiStudio20220112::Client::listAlgorithmVersionsWithOptions(shared_ptr<string> AlgorithmId,
                                                                                                       shared_ptr<ListAlgorithmVersionsRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlgorithmVersions"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmId)) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAlgorithmVersionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAlgorithmVersionsResponse(execute(params, req, runtime));
  }
}

ListAlgorithmVersionsResponse Alibabacloud_PaiStudio20220112::Client::listAlgorithmVersions(shared_ptr<string> AlgorithmId, shared_ptr<ListAlgorithmVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAlgorithmVersionsWithOptions(AlgorithmId, request, headers, runtime);
}

ListAlgorithmsResponse Alibabacloud_PaiStudio20220112::Client::listAlgorithmsWithOptions(shared_ptr<ListAlgorithmsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmId)) {
    query->insert(pair<string, string>("AlgorithmId", *request->algorithmId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmName)) {
    query->insert(pair<string, string>("AlgorithmName", *request->algorithmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmProvider)) {
    query->insert(pair<string, string>("AlgorithmProvider", *request->algorithmProvider));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlgorithms"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAlgorithmsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAlgorithmsResponse(execute(params, req, runtime));
  }
}

ListAlgorithmsResponse Alibabacloud_PaiStudio20220112::Client::listAlgorithms(shared_ptr<ListAlgorithmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAlgorithmsWithOptions(request, headers, runtime);
}

ListNodesResponse Alibabacloud_PaiStudio20220112::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorType)) {
    query->insert(pair<string, string>("AcceleratorType", *request->acceleratorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterByQuotaId)) {
    query->insert(pair<string, string>("FilterByQuotaId", *request->filterByQuotaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterByResourceGroupIds)) {
    query->insert(pair<string, string>("FilterByResourceGroupIds", *request->filterByResourceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->GPUType)) {
    query->insert(pair<string, string>("GPUType", *request->GPUType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeNames)) {
    query->insert(pair<string, string>("NodeNames", *request->nodeNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeStatuses)) {
    query->insert(pair<string, string>("NodeStatuses", *request->nodeStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeTypes)) {
    query->insert(pair<string, string>("NodeTypes", *request->nodeTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderStatuses)) {
    query->insert(pair<string, string>("OrderStatuses", *request->orderStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaId)) {
    query->insert(pair<string, string>("QuotaId", *request->quotaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIds)) {
    query->insert(pair<string, string>("ResourceGroupIds", *request->resourceGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodes"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/nodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListNodesResponse(callApi(params, req, runtime));
  }
  else {
    return ListNodesResponse(execute(params, req, runtime));
  }
}

ListNodesResponse Alibabacloud_PaiStudio20220112::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNodesWithOptions(request, headers, runtime);
}

ListQuotaWorkloadsResponse Alibabacloud_PaiStudio20220112::Client::listQuotaWorkloadsWithOptions(shared_ptr<string> QuotaId,
                                                                                                 shared_ptr<ListQuotaWorkloadsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beforeWorkloadId)) {
    query->insert(pair<string, string>("BeforeWorkloadId", *request->beforeWorkloadId));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRangeFilter>(request->gmtDequeuedTimeRange)) {
    query->insert(pair<string, TimeRangeFilter>("GmtDequeuedTimeRange", *request->gmtDequeuedTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRangeFilter>(request->gmtEnqueuedTimeRange)) {
    query->insert(pair<string, TimeRangeFilter>("GmtEnqueuedTimeRange", *request->gmtEnqueuedTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRangeFilter>(request->gmtPositionModifiedTimeRange)) {
    query->insert(pair<string, TimeRangeFilter>("GmtPositionModifiedTimeRange", *request->gmtPositionModifiedTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showOwn)) {
    query->insert(pair<string, bool>("ShowOwn", *request->showOwn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subQuotaIds)) {
    query->insert(pair<string, string>("SubQuotaIds", *request->subQuotaIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    query->insert(pair<string, string>("UserIds", *request->userIds));
  }
  if (!Darabonba_Util::Client::isUnset<TimeRangeFilter>(request->workloadCreatedTimeRange)) {
    query->insert(pair<string, TimeRangeFilter>("WorkloadCreatedTimeRange", *request->workloadCreatedTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workloadIds)) {
    query->insert(pair<string, string>("WorkloadIds", *request->workloadIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workloadStatuses)) {
    query->insert(pair<string, string>("WorkloadStatuses", *request->workloadStatuses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workloadType)) {
    query->insert(pair<string, string>("WorkloadType", *request->workloadType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIds)) {
    query->insert(pair<string, string>("WorkspaceIds", *request->workspaceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotaWorkloads"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(QuotaId)) + string("/workloads"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListQuotaWorkloadsResponse(callApi(params, req, runtime));
  }
  else {
    return ListQuotaWorkloadsResponse(execute(params, req, runtime));
  }
}

ListQuotaWorkloadsResponse Alibabacloud_PaiStudio20220112::Client::listQuotaWorkloads(shared_ptr<string> QuotaId, shared_ptr<ListQuotaWorkloadsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQuotaWorkloadsWithOptions(QuotaId, request, headers, runtime);
}

ListQuotasResponse Alibabacloud_PaiStudio20220112::Client::listQuotasWithOptions(shared_ptr<ListQuotasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutMode)) {
    query->insert(pair<string, string>("LayoutMode", *request->layoutMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentQuotaId)) {
    query->insert(pair<string, string>("ParentQuotaId", *request->parentQuotaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaIds)) {
    query->insert(pair<string, string>("QuotaIds", *request->quotaIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaName)) {
    query->insert(pair<string, string>("QuotaName", *request->quotaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statuses)) {
    query->insert(pair<string, string>("Statuses", *request->statuses));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->verbose)) {
    query->insert(pair<string, bool>("Verbose", *request->verbose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIds)) {
    query->insert(pair<string, string>("WorkspaceIds", *request->workspaceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceName)) {
    query->insert(pair<string, string>("WorkspaceName", *request->workspaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQuotas"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListQuotasResponse(callApi(params, req, runtime));
  }
  else {
    return ListQuotasResponse(execute(params, req, runtime));
  }
}

ListQuotasResponse Alibabacloud_PaiStudio20220112::Client::listQuotas(shared_ptr<ListQuotasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQuotasWithOptions(request, headers, runtime);
}

ListResourceGroupMachineGroupsResponse Alibabacloud_PaiStudio20220112::Client::listResourceGroupMachineGroupsWithOptions(shared_ptr<string> ResourceGroupID,
                                                                                                                         shared_ptr<ListResourceGroupMachineGroupsRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorID)) {
    query->insert(pair<string, string>("CreatorID", *request->creatorID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsSpec)) {
    query->insert(pair<string, string>("EcsSpec", *request->ecsSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderInstanceId)) {
    query->insert(pair<string, string>("OrderInstanceId", *request->orderInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDuration)) {
    query->insert(pair<string, string>("PaymentDuration", *request->paymentDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDurationUnit)) {
    query->insert(pair<string, string>("PaymentDurationUnit", *request->paymentDurationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    query->insert(pair<string, string>("PaymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceGroupMachineGroups"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceGroupID)) + string("/machinegroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListResourceGroupMachineGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListResourceGroupMachineGroupsResponse(execute(params, req, runtime));
  }
}

ListResourceGroupMachineGroupsResponse Alibabacloud_PaiStudio20220112::Client::listResourceGroupMachineGroups(shared_ptr<string> ResourceGroupID, shared_ptr<ListResourceGroupMachineGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceGroupMachineGroupsWithOptions(ResourceGroupID, request, headers, runtime);
}

ListResourceGroupsResponse Alibabacloud_PaiStudio20220112::Client::listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->computingResourceProvider)) {
    query->insert(pair<string, string>("ComputingResourceProvider", *request->computingResourceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showAll)) {
    query->insert(pair<string, bool>("ShowAll", *request->showAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceGroups"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListResourceGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListResourceGroupsResponse(execute(params, req, runtime));
  }
}

ListResourceGroupsResponse Alibabacloud_PaiStudio20220112::Client::listResourceGroups(shared_ptr<ListResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceGroupsWithOptions(request, headers, runtime);
}

ListTrainingJobEventsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobEventsWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                       shared_ptr<ListTrainingJobEventsRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrainingJobEvents"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTrainingJobEventsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTrainingJobEventsResponse(execute(params, req, runtime));
  }
}

ListTrainingJobEventsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobEvents(shared_ptr<string> TrainingJobId, shared_ptr<ListTrainingJobEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrainingJobEventsWithOptions(TrainingJobId, request, headers, runtime);
}

ListTrainingJobInstanceEventsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobInstanceEventsWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                                       shared_ptr<string> InstanceId,
                                                                                                                       shared_ptr<ListTrainingJobInstanceEventsRequest> request,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrainingJobInstanceEvents"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTrainingJobInstanceEventsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTrainingJobInstanceEventsResponse(execute(params, req, runtime));
  }
}

ListTrainingJobInstanceEventsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobInstanceEvents(shared_ptr<string> TrainingJobId, shared_ptr<string> InstanceId, shared_ptr<ListTrainingJobInstanceEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrainingJobInstanceEventsWithOptions(TrainingJobId, InstanceId, request, headers, runtime);
}

ListTrainingJobInstanceMetricsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobInstanceMetricsWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                                         shared_ptr<ListTrainingJobInstanceMetricsRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeStep)) {
    query->insert(pair<string, string>("TimeStep", *request->timeStep));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrainingJobInstanceMetrics"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/instancemetrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTrainingJobInstanceMetricsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTrainingJobInstanceMetricsResponse(execute(params, req, runtime));
  }
}

ListTrainingJobInstanceMetricsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobInstanceMetrics(shared_ptr<string> TrainingJobId, shared_ptr<ListTrainingJobInstanceMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrainingJobInstanceMetricsWithOptions(TrainingJobId, request, headers, runtime);
}

ListTrainingJobLogsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobLogsWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                   shared_ptr<ListTrainingJobLogsRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerId)) {
    query->insert(pair<string, string>("WorkerId", *request->workerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrainingJobLogs"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTrainingJobLogsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTrainingJobLogsResponse(execute(params, req, runtime));
  }
}

ListTrainingJobLogsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobLogs(shared_ptr<string> TrainingJobId, shared_ptr<ListTrainingJobLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrainingJobLogsWithOptions(TrainingJobId, request, headers, runtime);
}

ListTrainingJobMetricsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobMetricsWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                         shared_ptr<ListTrainingJobMetricsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrainingJobMetrics"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/metrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTrainingJobMetricsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTrainingJobMetricsResponse(execute(params, req, runtime));
  }
}

ListTrainingJobMetricsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobMetrics(shared_ptr<string> TrainingJobId, shared_ptr<ListTrainingJobMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrainingJobMetricsWithOptions(TrainingJobId, request, headers, runtime);
}

ListTrainingJobOutputModelsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobOutputModelsWithOptions(shared_ptr<string> TrainingJobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrainingJobOutputModels"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/outputmodels"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTrainingJobOutputModelsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTrainingJobOutputModelsResponse(execute(params, req, runtime));
  }
}

ListTrainingJobOutputModelsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobOutputModels(shared_ptr<string> TrainingJobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrainingJobOutputModelsWithOptions(TrainingJobId, headers, runtime);
}

ListTrainingJobsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobsWithOptions(shared_ptr<ListTrainingJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTrainingJobsShrinkRequest> request = make_shared<ListTrainingJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->labels)) {
    request->labelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->labels, make_shared<string>("Labels"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmName)) {
    query->insert(pair<string, string>("AlgorithmName", *request->algorithmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmProvider)) {
    query->insert(pair<string, string>("AlgorithmProvider", *request->algorithmProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isTempAlgo)) {
    query->insert(pair<string, bool>("IsTempAlgo", *request->isTempAlgo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelsShrink)) {
    query->insert(pair<string, string>("Labels", *request->labelsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainingJobId)) {
    query->insert(pair<string, string>("TrainingJobId", *request->trainingJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainingJobName)) {
    query->insert(pair<string, string>("TrainingJobName", *request->trainingJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrainingJobs"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTrainingJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTrainingJobsResponse(execute(params, req, runtime));
  }
}

ListTrainingJobsResponse Alibabacloud_PaiStudio20220112::Client::listTrainingJobs(shared_ptr<ListTrainingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrainingJobsWithOptions(request, headers, runtime);
}

ScaleQuotaResponse Alibabacloud_PaiStudio20220112::Client::scaleQuotaWithOptions(shared_ptr<string> QuotaId,
                                                                                 shared_ptr<ScaleQuotaRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ResourceSpec>(request->min)) {
    body->insert(pair<string, ResourceSpec>("Min", *request->min));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceGroupIds)) {
    body->insert(pair<string, vector<string>>("ResourceGroupIds", *request->resourceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScaleQuota"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(QuotaId)) + string("/action/scale"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ScaleQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return ScaleQuotaResponse(execute(params, req, runtime));
  }
}

ScaleQuotaResponse Alibabacloud_PaiStudio20220112::Client::scaleQuota(shared_ptr<string> QuotaId, shared_ptr<ScaleQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return scaleQuotaWithOptions(QuotaId, request, headers, runtime);
}

StopTrainingJobResponse Alibabacloud_PaiStudio20220112::Client::stopTrainingJobWithOptions(shared_ptr<string> TrainingJobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTrainingJob"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return StopTrainingJobResponse(execute(params, req, runtime));
  }
}

StopTrainingJobResponse Alibabacloud_PaiStudio20220112::Client::stopTrainingJob(shared_ptr<string> TrainingJobId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopTrainingJobWithOptions(TrainingJobId, headers, runtime);
}

UpdateAlgorithmResponse Alibabacloud_PaiStudio20220112::Client::updateAlgorithmWithOptions(shared_ptr<string> AlgorithmId,
                                                                                           shared_ptr<UpdateAlgorithmRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmDescription)) {
    body->insert(pair<string, string>("AlgorithmDescription", *request->algorithmDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlgorithm"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAlgorithmResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAlgorithmResponse(execute(params, req, runtime));
  }
}

UpdateAlgorithmResponse Alibabacloud_PaiStudio20220112::Client::updateAlgorithm(shared_ptr<string> AlgorithmId, shared_ptr<UpdateAlgorithmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAlgorithmWithOptions(AlgorithmId, request, headers, runtime);
}

UpdateAlgorithmVersionResponse Alibabacloud_PaiStudio20220112::Client::updateAlgorithmVersionWithOptions(shared_ptr<string> AlgorithmId,
                                                                                                         shared_ptr<string> AlgorithmVersion,
                                                                                                         shared_ptr<UpdateAlgorithmVersionRequest> tmpReq,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAlgorithmVersionShrinkRequest> request = make_shared<UpdateAlgorithmVersionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AlgorithmSpec>(tmpReq->algorithmSpec)) {
    request->algorithmSpecShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->algorithmSpec, make_shared<string>("AlgorithmSpec"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmSpecShrink)) {
    body->insert(pair<string, string>("AlgorithmSpec", *request->algorithmSpecShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlgorithmVersion"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/algorithms/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmId)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlgorithmVersion)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAlgorithmVersionResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAlgorithmVersionResponse(execute(params, req, runtime));
  }
}

UpdateAlgorithmVersionResponse Alibabacloud_PaiStudio20220112::Client::updateAlgorithmVersion(shared_ptr<string> AlgorithmId, shared_ptr<string> AlgorithmVersion, shared_ptr<UpdateAlgorithmVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAlgorithmVersionWithOptions(AlgorithmId, AlgorithmVersion, request, headers, runtime);
}

UpdateQuotaResponse Alibabacloud_PaiStudio20220112::Client::updateQuotaWithOptions(shared_ptr<string> QuotaId,
                                                                                   shared_ptr<UpdateQuotaRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Label>>(request->labels)) {
    body->insert(pair<string, vector<Label>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueStrategy)) {
    body->insert(pair<string, string>("QueueStrategy", *request->queueStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<QuotaConfig>(request->quotaConfig)) {
    body->insert(pair<string, QuotaConfig>("QuotaConfig", *request->quotaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaName)) {
    body->insert(pair<string, string>("QuotaName", *request->quotaName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQuota"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/quotas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(QuotaId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateQuotaResponse(execute(params, req, runtime));
  }
}

UpdateQuotaResponse Alibabacloud_PaiStudio20220112::Client::updateQuota(shared_ptr<string> QuotaId, shared_ptr<UpdateQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateQuotaWithOptions(QuotaId, request, headers, runtime);
}

UpdateResourceGroupResponse Alibabacloud_PaiStudio20220112::Client::updateResourceGroupWithOptions(shared_ptr<string> ResourceGroupID,
                                                                                                   shared_ptr<UpdateResourceGroupRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->unbind)) {
    body->insert(pair<string, bool>("Unbind", *request->unbind));
  }
  if (!Darabonba_Util::Client::isUnset<UserVpc>(request->userVpc)) {
    body->insert(pair<string, UserVpc>("UserVpc", *request->userVpc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceGroup"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceGroupID)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateResourceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateResourceGroupResponse(execute(params, req, runtime));
  }
}

UpdateResourceGroupResponse Alibabacloud_PaiStudio20220112::Client::updateResourceGroup(shared_ptr<string> ResourceGroupID, shared_ptr<UpdateResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceGroupWithOptions(ResourceGroupID, request, headers, runtime);
}

UpdateTrainingJobLabelsResponse Alibabacloud_PaiStudio20220112::Client::updateTrainingJobLabelsWithOptions(shared_ptr<string> TrainingJobId,
                                                                                                           shared_ptr<UpdateTrainingJobLabelsRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTrainingJobLabelsRequestLabels>>(request->labels)) {
    body->insert(pair<string, vector<UpdateTrainingJobLabelsRequestLabels>>("Labels", *request->labels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrainingJobLabels"))},
    {"version", boost::any(string("2022-01-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trainingjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrainingJobId)) + string("/labels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateTrainingJobLabelsResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateTrainingJobLabelsResponse(execute(params, req, runtime));
  }
}

UpdateTrainingJobLabelsResponse Alibabacloud_PaiStudio20220112::Client::updateTrainingJobLabels(shared_ptr<string> TrainingJobId, shared_ptr<UpdateTrainingJobLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTrainingJobLabelsWithOptions(TrainingJobId, request, headers, runtime);
}

