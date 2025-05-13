// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sae_20190506.hpp>
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

using namespace Alibabacloud_Sae20190506;

Alibabacloud_Sae20190506::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sae"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Sae20190506::Client::getEndpoint(shared_ptr<string> productId,
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

AbortAndRollbackChangeOrderResponse Alibabacloud_Sae20190506::Client::abortAndRollbackChangeOrderWithOptions(shared_ptr<AbortAndRollbackChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    query->insert(pair<string, string>("ChangeOrderId", *request->changeOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbortAndRollbackChangeOrder"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/changeorder/AbortAndRollbackChangeOrder"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbortAndRollbackChangeOrderResponse(callApi(params, req, runtime));
}

AbortAndRollbackChangeOrderResponse Alibabacloud_Sae20190506::Client::abortAndRollbackChangeOrder(shared_ptr<AbortAndRollbackChangeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return abortAndRollbackChangeOrderWithOptions(request, headers, runtime);
}

AbortChangeOrderResponse Alibabacloud_Sae20190506::Client::abortChangeOrderWithOptions(shared_ptr<AbortChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    query->insert(pair<string, string>("ChangeOrderId", *request->changeOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbortChangeOrder"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/changeorder/AbortChangeOrder"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbortChangeOrderResponse(callApi(params, req, runtime));
}

AbortChangeOrderResponse Alibabacloud_Sae20190506::Client::abortChangeOrder(shared_ptr<AbortChangeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return abortChangeOrderWithOptions(request, headers, runtime);
}

BatchStartApplicationsResponse Alibabacloud_Sae20190506::Client::batchStartApplicationsWithOptions(shared_ptr<BatchStartApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchStartApplications"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/batchStartApplications"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchStartApplicationsResponse(callApi(params, req, runtime));
}

BatchStartApplicationsResponse Alibabacloud_Sae20190506::Client::batchStartApplications(shared_ptr<BatchStartApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchStartApplicationsWithOptions(request, headers, runtime);
}

BatchStopApplicationsResponse Alibabacloud_Sae20190506::Client::batchStopApplicationsWithOptions(shared_ptr<BatchStopApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchStopApplications"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/batchStopApplications"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchStopApplicationsResponse(callApi(params, req, runtime));
}

BatchStopApplicationsResponse Alibabacloud_Sae20190506::Client::batchStopApplications(shared_ptr<BatchStopApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchStopApplicationsWithOptions(request, headers, runtime);
}

BindSlbResponse Alibabacloud_Sae20190506::Client::bindSlbWithOptions(shared_ptr<BindSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internet)) {
    query->insert(pair<string, string>("Internet", *request->internet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetSlbChargeType)) {
    query->insert(pair<string, string>("InternetSlbChargeType", *request->internetSlbChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetSlbId)) {
    query->insert(pair<string, string>("InternetSlbId", *request->internetSlbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intranet)) {
    query->insert(pair<string, string>("Intranet", *request->intranet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intranetSlbChargeType)) {
    query->insert(pair<string, string>("IntranetSlbChargeType", *request->intranetSlbChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intranetSlbId)) {
    query->insert(pair<string, string>("IntranetSlbId", *request->intranetSlbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindSlb"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/slb"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindSlbResponse(callApi(params, req, runtime));
}

BindSlbResponse Alibabacloud_Sae20190506::Client::bindSlb(shared_ptr<BindSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bindSlbWithOptions(request, headers, runtime);
}

ConfirmPipelineBatchResponse Alibabacloud_Sae20190506::Client::confirmPipelineBatchWithOptions(shared_ptr<ConfirmPipelineBatchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->confirm)) {
    query->insert(pair<string, bool>("Confirm", *request->confirm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmPipelineBatch"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/changeorder/ConfirmPipelineBatch"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmPipelineBatchResponse(callApi(params, req, runtime));
}

ConfirmPipelineBatchResponse Alibabacloud_Sae20190506::Client::confirmPipelineBatch(shared_ptr<ConfirmPipelineBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return confirmPipelineBatchWithOptions(request, headers, runtime);
}

CreateApplicationResponse Alibabacloud_Sae20190506::Client::createApplicationWithOptions(shared_ptr<CreateApplicationRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateApplicationShrinkRequest> request = make_shared<CreateApplicationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InitContainerConfig>>(tmpReq->initContainersConfig)) {
    request->initContainersConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->initContainersConfig, make_shared<string>("InitContainersConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SidecarContainerConfig>>(tmpReq->sidecarContainersConfig)) {
    request->sidecarContainersConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sidecarContainersConfig, make_shared<string>("SidecarContainersConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acrAssumeRoleArn)) {
    query->insert(pair<string, string>("AcrAssumeRoleArn", *request->acrAssumeRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appDescription)) {
    query->insert(pair<string, string>("AppDescription", *request->appDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSource)) {
    query->insert(pair<string, string>("AppSource", *request->appSource));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoConfig)) {
    query->insert(pair<string, bool>("AutoConfig", *request->autoConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandArgs)) {
    query->insert(pair<string, string>("CommandArgs", *request->commandArgs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    query->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customHostAlias)) {
    query->insert(pair<string, string>("CustomHostAlias", *request->customHostAlias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customImageNetworkType)) {
    query->insert(pair<string, string>("CustomImageNetworkType", *request->customImageNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deploy)) {
    query->insert(pair<string, bool>("Deploy", *request->deploy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->diskSize)) {
    query->insert(pair<string, long>("DiskSize", *request->diskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dotnet)) {
    query->insert(pair<string, string>("Dotnet", *request->dotnet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edasContainerVersion)) {
    query->insert(pair<string, string>("EdasContainerVersion", *request->edasContainerVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCpuBurst)) {
    query->insert(pair<string, bool>("EnableCpuBurst", *request->enableCpuBurst));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableEbpf)) {
    query->insert(pair<string, string>("EnableEbpf", *request->enableEbpf));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableNewArms)) {
    query->insert(pair<string, bool>("EnableNewArms", *request->enableNewArms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    query->insert(pair<string, string>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imagePullSecrets)) {
    query->insert(pair<string, string>("ImagePullSecrets", *request->imagePullSecrets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartArgs)) {
    query->insert(pair<string, string>("JarStartArgs", *request->jarStartArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartOptions)) {
    query->insert(pair<string, string>("JarStartOptions", *request->jarStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jdk)) {
    query->insert(pair<string, string>("Jdk", *request->jdk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kafkaConfigs)) {
    query->insert(pair<string, string>("KafkaConfigs", *request->kafkaConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveness)) {
    query->insert(pair<string, string>("Liveness", *request->liveness));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    query->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->microRegistration)) {
    query->insert(pair<string, string>("MicroRegistration", *request->microRegistration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->microserviceEngineConfig)) {
    query->insert(pair<string, string>("MicroserviceEngineConfig", *request->microserviceEngineConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountDesc)) {
    query->insert(pair<string, string>("MountDesc", *request->mountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountHost)) {
    query->insert(pair<string, string>("MountHost", *request->mountHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasConfigs)) {
    query->insert(pair<string, string>("NasConfigs", *request->nasConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasId)) {
    query->insert(pair<string, string>("NasId", *request->nasId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newSaeVersion)) {
    query->insert(pair<string, string>("NewSaeVersion", *request->newSaeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oidcRoleName)) {
    query->insert(pair<string, string>("OidcRoleName", *request->oidcRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUrl)) {
    query->insert(pair<string, string>("PackageUrl", *request->packageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    query->insert(pair<string, string>("PackageVersion", *request->packageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpArmsConfigLocation)) {
    query->insert(pair<string, string>("PhpArmsConfigLocation", *request->phpArmsConfigLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpConfigLocation)) {
    query->insert(pair<string, string>("PhpConfigLocation", *request->phpConfigLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    query->insert(pair<string, string>("PostStart", *request->postStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    query->insert(pair<string, string>("PreStop", *request->preStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programmingLanguage)) {
    query->insert(pair<string, string>("ProgrammingLanguage", *request->programmingLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pvtzDiscoverySvc)) {
    query->insert(pair<string, string>("PvtzDiscoverySvc", *request->pvtzDiscoverySvc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->python)) {
    query->insert(pair<string, string>("Python", *request->python));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pythonModules)) {
    query->insert(pair<string, string>("PythonModules", *request->pythonModules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readiness)) {
    query->insert(pair<string, string>("Readiness", *request->readiness));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    query->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saeVersion)) {
    query->insert(pair<string, string>("SaeVersion", *request->saeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretMountDesc)) {
    query->insert(pair<string, string>("SecretMountDesc", *request->secretMountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsConfigs)) {
    query->insert(pair<string, string>("SlsConfigs", *request->slsConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->terminationGracePeriodSeconds)) {
    query->insert(pair<string, long>("TerminationGracePeriodSeconds", *request->terminationGracePeriodSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    query->insert(pair<string, string>("Timezone", *request->timezone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tomcatConfig)) {
    query->insert(pair<string, string>("TomcatConfig", *request->tomcatConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warStartOptions)) {
    query->insert(pair<string, string>("WarStartOptions", *request->warStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    query->insert(pair<string, string>("WebContainer", *request->webContainer));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acrInstanceId)) {
    body->insert(pair<string, string>("AcrInstanceId", *request->acrInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->associateEip)) {
    body->insert(pair<string, bool>("AssociateEip", *request->associateEip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baseAppId)) {
    body->insert(pair<string, string>("BaseAppId", *request->baseAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configMapMountDesc)) {
    body->insert(pair<string, string>("ConfigMapMountDesc", *request->configMapMountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSidecarResourceIsolated)) {
    body->insert(pair<string, bool>("EnableSidecarResourceIsolated", *request->enableSidecarResourceIsolated));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initContainersConfigShrink)) {
    body->insert(pair<string, string>("InitContainersConfig", *request->initContainersConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->microRegistrationConfig)) {
    body->insert(pair<string, string>("MicroRegistrationConfig", *request->microRegistrationConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAkId)) {
    body->insert(pair<string, string>("OssAkId", *request->ossAkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAkSecret)) {
    body->insert(pair<string, string>("OssAkSecret", *request->ossAkSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossMountDescs)) {
    body->insert(pair<string, string>("OssMountDescs", *request->ossMountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->php)) {
    body->insert(pair<string, string>("Php", *request->php));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpConfig)) {
    body->insert(pair<string, string>("PhpConfig", *request->phpConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceTags)) {
    body->insert(pair<string, string>("ServiceTags", *request->serviceTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarContainersConfigShrink)) {
    body->insert(pair<string, string>("SidecarContainersConfig", *request->sidecarContainersConfigShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/createApplication"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApplicationResponse(callApi(params, req, runtime));
}

CreateApplicationResponse Alibabacloud_Sae20190506::Client::createApplication(shared_ptr<CreateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createApplicationWithOptions(request, headers, runtime);
}

CreateApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::createApplicationScalingRuleWithOptions(shared_ptr<CreateApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableIdle)) {
    query->insert(pair<string, bool>("EnableIdle", *request->enableIdle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstanceRatio)) {
    query->insert(pair<string, long>("MinReadyInstanceRatio", *request->minReadyInstanceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstances)) {
    query->insert(pair<string, long>("MinReadyInstances", *request->minReadyInstances));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scalingRuleEnable)) {
    query->insert(pair<string, bool>("ScalingRuleEnable", *request->scalingRuleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleMetric)) {
    query->insert(pair<string, string>("ScalingRuleMetric", *request->scalingRuleMetric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleTimer)) {
    query->insert(pair<string, string>("ScalingRuleTimer", *request->scalingRuleTimer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleType)) {
    query->insert(pair<string, string>("ScalingRuleType", *request->scalingRuleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApplicationScalingRule"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/scale/applicationScalingRule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApplicationScalingRuleResponse(callApi(params, req, runtime));
}

CreateApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::createApplicationScalingRule(shared_ptr<CreateApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createApplicationScalingRuleWithOptions(request, headers, runtime);
}

CreateConfigMapResponse Alibabacloud_Sae20190506::Client::createConfigMapWithOptions(shared_ptr<CreateConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfigMap"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/configmap/configMap"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigMapResponse(callApi(params, req, runtime));
}

CreateConfigMapResponse Alibabacloud_Sae20190506::Client::createConfigMap(shared_ptr<CreateConfigMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConfigMapWithOptions(request, headers, runtime);
}

CreateGreyTagRouteResponse Alibabacloud_Sae20190506::Client::createGreyTagRouteWithOptions(shared_ptr<CreateGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->albRules)) {
    query->insert(pair<string, string>("AlbRules", *request->albRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dubboRules)) {
    query->insert(pair<string, string>("DubboRules", *request->dubboRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scRules)) {
    query->insert(pair<string, string>("ScRules", *request->scRules));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGreyTagRoute"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/tagroute/greyTagRoute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGreyTagRouteResponse(callApi(params, req, runtime));
}

CreateGreyTagRouteResponse Alibabacloud_Sae20190506::Client::createGreyTagRoute(shared_ptr<CreateGreyTagRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGreyTagRouteWithOptions(request, headers, runtime);
}

CreateIngressResponse Alibabacloud_Sae20190506::Client::createIngressWithOptions(shared_ptr<CreateIngressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressType)) {
    query->insert(pair<string, string>("AddressType", *request->addressType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certId)) {
    query->insert(pair<string, string>("CertId", *request->certId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIds)) {
    query->insert(pair<string, string>("CertIds", *request->certIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corsConfig)) {
    query->insert(pair<string, string>("CorsConfig", *request->corsConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRule)) {
    query->insert(pair<string, string>("DefaultRule", *request->defaultRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedFor)) {
    query->insert(pair<string, bool>("EnableXForwardedFor", *request->enableXForwardedFor));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedForClientSrcPort)) {
    query->insert(pair<string, bool>("EnableXForwardedForClientSrcPort", *request->enableXForwardedForClientSrcPort));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedForProto)) {
    query->insert(pair<string, bool>("EnableXForwardedForProto", *request->enableXForwardedForProto));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedForSlbId)) {
    query->insert(pair<string, bool>("EnableXForwardedForSlbId", *request->enableXForwardedForSlbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedForSlbPort)) {
    query->insert(pair<string, bool>("EnableXForwardedForSlbPort", *request->enableXForwardedForSlbPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->listenerPort)) {
    query->insert(pair<string, long>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalanceType)) {
    query->insert(pair<string, string>("LoadBalanceType", *request->loadBalanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalancerEdition)) {
    query->insert(pair<string, string>("LoadBalancerEdition", *request->loadBalancerEdition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyId)) {
    query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slbId)) {
    query->insert(pair<string, string>("SlbId", *request->slbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneMappings)) {
    query->insert(pair<string, string>("ZoneMappings", *request->zoneMappings));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->rules)) {
    body->insert(pair<string, string>("Rules", *request->rules));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIngress"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/ingress/Ingress"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIngressResponse(callApi(params, req, runtime));
}

CreateIngressResponse Alibabacloud_Sae20190506::Client::createIngress(shared_ptr<CreateIngressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIngressWithOptions(request, headers, runtime);
}

CreateJobResponse Alibabacloud_Sae20190506::Client::createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acrAssumeRoleArn)) {
    query->insert(pair<string, string>("AcrAssumeRoleArn", *request->acrAssumeRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appDescription)) {
    query->insert(pair<string, string>("AppDescription", *request->appDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoConfig)) {
    query->insert(pair<string, bool>("AutoConfig", *request->autoConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backoffLimit)) {
    query->insert(pair<string, long>("BackoffLimit", *request->backoffLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandArgs)) {
    query->insert(pair<string, string>("CommandArgs", *request->commandArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->concurrencyPolicy)) {
    query->insert(pair<string, string>("ConcurrencyPolicy", *request->concurrencyPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    query->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customHostAlias)) {
    query->insert(pair<string, string>("CustomHostAlias", *request->customHostAlias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edasContainerVersion)) {
    query->insert(pair<string, string>("EdasContainerVersion", *request->edasContainerVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    query->insert(pair<string, string>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imagePullSecrets)) {
    query->insert(pair<string, string>("ImagePullSecrets", *request->imagePullSecrets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartArgs)) {
    query->insert(pair<string, string>("JarStartArgs", *request->jarStartArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartOptions)) {
    query->insert(pair<string, string>("JarStartOptions", *request->jarStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jdk)) {
    query->insert(pair<string, string>("Jdk", *request->jdk));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    query->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountDesc)) {
    query->insert(pair<string, string>("MountDesc", *request->mountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountHost)) {
    query->insert(pair<string, string>("MountHost", *request->mountHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasId)) {
    query->insert(pair<string, string>("NasId", *request->nasId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUrl)) {
    query->insert(pair<string, string>("PackageUrl", *request->packageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    query->insert(pair<string, string>("PackageVersion", *request->packageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpConfigLocation)) {
    query->insert(pair<string, string>("PhpConfigLocation", *request->phpConfigLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    query->insert(pair<string, string>("PostStart", *request->postStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    query->insert(pair<string, string>("PreStop", *request->preStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programmingLanguage)) {
    query->insert(pair<string, string>("ProgrammingLanguage", *request->programmingLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->python)) {
    query->insert(pair<string, string>("Python", *request->python));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pythonModules)) {
    query->insert(pair<string, string>("PythonModules", *request->pythonModules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refAppId)) {
    query->insert(pair<string, string>("RefAppId", *request->refAppId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    query->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->slice)) {
    query->insert(pair<string, bool>("Slice", *request->slice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sliceEnvs)) {
    query->insert(pair<string, string>("SliceEnvs", *request->sliceEnvs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsConfigs)) {
    query->insert(pair<string, string>("SlsConfigs", *request->slsConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->terminationGracePeriodSeconds)) {
    query->insert(pair<string, long>("TerminationGracePeriodSeconds", *request->terminationGracePeriodSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    query->insert(pair<string, string>("Timezone", *request->timezone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tomcatConfig)) {
    query->insert(pair<string, string>("TomcatConfig", *request->tomcatConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerConfig)) {
    query->insert(pair<string, string>("TriggerConfig", *request->triggerConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warStartOptions)) {
    query->insert(pair<string, string>("WarStartOptions", *request->warStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    query->insert(pair<string, string>("WebContainer", *request->webContainer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workload)) {
    query->insert(pair<string, string>("Workload", *request->workload));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acrInstanceId)) {
    body->insert(pair<string, string>("AcrInstanceId", *request->acrInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configMapMountDesc)) {
    body->insert(pair<string, string>("ConfigMapMountDesc", *request->configMapMountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableImageAccl)) {
    body->insert(pair<string, bool>("EnableImageAccl", *request->enableImageAccl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAkId)) {
    body->insert(pair<string, string>("OssAkId", *request->ossAkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAkSecret)) {
    body->insert(pair<string, string>("OssAkSecret", *request->ossAkSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossMountDescs)) {
    body->insert(pair<string, string>("OssMountDescs", *request->ossMountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpConfig)) {
    body->insert(pair<string, string>("PhpConfig", *request->phpConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJob"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/createJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobResponse(callApi(params, req, runtime));
}

CreateJobResponse Alibabacloud_Sae20190506::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createJobWithOptions(request, headers, runtime);
}

CreateNamespaceResponse Alibabacloud_Sae20190506::Client::createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableMicroRegistration)) {
    query->insert(pair<string, bool>("EnableMicroRegistration", *request->enableMicroRegistration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpaceShortId)) {
    query->insert(pair<string, string>("NameSpaceShortId", *request->nameSpaceShortId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceDescription)) {
    query->insert(pair<string, string>("NamespaceDescription", *request->namespaceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNamespace"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/namespace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNamespaceResponse(callApi(params, req, runtime));
}

CreateNamespaceResponse Alibabacloud_Sae20190506::Client::createNamespace(shared_ptr<CreateNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createNamespaceWithOptions(request, headers, runtime);
}

CreateSecretResponse Alibabacloud_Sae20190506::Client::createSecretWithOptions(shared_ptr<CreateSecretRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSecretShrinkRequest> request = make_shared<CreateSecretShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateSecretRequestSecretData>(tmpReq->secretData)) {
    request->secretDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->secretData, make_shared<string>("SecretData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretDataShrink)) {
    query->insert(pair<string, string>("SecretData", *request->secretDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretType)) {
    query->insert(pair<string, string>("SecretType", *request->secretType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecret"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/secret/secret"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSecretResponse(callApi(params, req, runtime));
}

CreateSecretResponse Alibabacloud_Sae20190506::Client::createSecret(shared_ptr<CreateSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSecretWithOptions(request, headers, runtime);
}

CreateWebApplicationResponse Alibabacloud_Sae20190506::Client::createWebApplicationWithOptions(shared_ptr<CreateWebApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWebApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/applications"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWebApplicationResponse(callApi(params, req, runtime));
}

CreateWebApplicationResponse Alibabacloud_Sae20190506::Client::createWebApplication(shared_ptr<CreateWebApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWebApplicationWithOptions(request, headers, runtime);
}

CreateWebCustomDomainResponse Alibabacloud_Sae20190506::Client::createWebCustomDomainWithOptions(shared_ptr<CreateWebCustomDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWebCustomDomain"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/custom-domains"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWebCustomDomainResponse(callApi(params, req, runtime));
}

CreateWebCustomDomainResponse Alibabacloud_Sae20190506::Client::createWebCustomDomain(shared_ptr<CreateWebCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createWebCustomDomainWithOptions(request, headers, runtime);
}

DeleteApplicationResponse Alibabacloud_Sae20190506::Client::deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/deleteApplication"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApplicationResponse(callApi(params, req, runtime));
}

DeleteApplicationResponse Alibabacloud_Sae20190506::Client::deleteApplication(shared_ptr<DeleteApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteApplicationWithOptions(request, headers, runtime);
}

DeleteApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::deleteApplicationScalingRuleWithOptions(shared_ptr<DeleteApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApplicationScalingRule"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/scale/applicationScalingRule"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApplicationScalingRuleResponse(callApi(params, req, runtime));
}

DeleteApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::deleteApplicationScalingRule(shared_ptr<DeleteApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteApplicationScalingRuleWithOptions(request, headers, runtime);
}

DeleteConfigMapResponse Alibabacloud_Sae20190506::Client::deleteConfigMapWithOptions(shared_ptr<DeleteConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configMapId)) {
    query->insert(pair<string, long>("ConfigMapId", *request->configMapId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigMap"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/configmap/configMap"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigMapResponse(callApi(params, req, runtime));
}

DeleteConfigMapResponse Alibabacloud_Sae20190506::Client::deleteConfigMap(shared_ptr<DeleteConfigMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConfigMapWithOptions(request, headers, runtime);
}

DeleteGreyTagRouteResponse Alibabacloud_Sae20190506::Client::deleteGreyTagRouteWithOptions(shared_ptr<DeleteGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->greyTagRouteId)) {
    query->insert(pair<string, long>("GreyTagRouteId", *request->greyTagRouteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGreyTagRoute"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/tagroute/greyTagRoute"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGreyTagRouteResponse(callApi(params, req, runtime));
}

DeleteGreyTagRouteResponse Alibabacloud_Sae20190506::Client::deleteGreyTagRoute(shared_ptr<DeleteGreyTagRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGreyTagRouteWithOptions(request, headers, runtime);
}

DeleteHistoryJobResponse Alibabacloud_Sae20190506::Client::deleteHistoryJobWithOptions(shared_ptr<DeleteHistoryJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHistoryJob"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/deleteHistoryJob"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteHistoryJobResponse(callApi(params, req, runtime));
}

DeleteHistoryJobResponse Alibabacloud_Sae20190506::Client::deleteHistoryJob(shared_ptr<DeleteHistoryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteHistoryJobWithOptions(request, headers, runtime);
}

DeleteIngressResponse Alibabacloud_Sae20190506::Client::deleteIngressWithOptions(shared_ptr<DeleteIngressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ingressId)) {
    query->insert(pair<string, long>("IngressId", *request->ingressId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIngress"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/ingress/Ingress"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIngressResponse(callApi(params, req, runtime));
}

DeleteIngressResponse Alibabacloud_Sae20190506::Client::deleteIngress(shared_ptr<DeleteIngressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIngressWithOptions(request, headers, runtime);
}

DeleteJobResponse Alibabacloud_Sae20190506::Client::deleteJobWithOptions(shared_ptr<DeleteJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteJob"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/deleteJob"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteJobResponse(callApi(params, req, runtime));
}

DeleteJobResponse Alibabacloud_Sae20190506::Client::deleteJob(shared_ptr<DeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteJobWithOptions(request, headers, runtime);
}

DeleteNamespaceResponse Alibabacloud_Sae20190506::Client::deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpaceShortId)) {
    query->insert(pair<string, string>("NameSpaceShortId", *request->nameSpaceShortId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNamespace"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/namespace"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNamespaceResponse(callApi(params, req, runtime));
}

DeleteNamespaceResponse Alibabacloud_Sae20190506::Client::deleteNamespace(shared_ptr<DeleteNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteNamespaceWithOptions(request, headers, runtime);
}

DeleteSecretResponse Alibabacloud_Sae20190506::Client::deleteSecretWithOptions(shared_ptr<DeleteSecretRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->secretId)) {
    query->insert(pair<string, long>("SecretId", *request->secretId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecret"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/secret/secret"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSecretResponse(callApi(params, req, runtime));
}

DeleteSecretResponse Alibabacloud_Sae20190506::Client::deleteSecret(shared_ptr<DeleteSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSecretWithOptions(request, headers, runtime);
}

DeleteWebApplicationResponse Alibabacloud_Sae20190506::Client::deleteWebApplicationWithOptions(shared_ptr<string> ApplicationId,
                                                                                               shared_ptr<DeleteWebApplicationRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWebApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/applications/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWebApplicationResponse(callApi(params, req, runtime));
}

DeleteWebApplicationResponse Alibabacloud_Sae20190506::Client::deleteWebApplication(shared_ptr<string> ApplicationId, shared_ptr<DeleteWebApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

DeleteWebApplicationRevisionResponse Alibabacloud_Sae20190506::Client::deleteWebApplicationRevisionWithOptions(shared_ptr<string> ApplicationId,
                                                                                                               shared_ptr<string> RevisionId,
                                                                                                               shared_ptr<DeleteWebApplicationRevisionRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWebApplicationRevision"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-revisions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/revisions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RevisionId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWebApplicationRevisionResponse(callApi(params, req, runtime));
}

DeleteWebApplicationRevisionResponse Alibabacloud_Sae20190506::Client::deleteWebApplicationRevision(shared_ptr<string> ApplicationId, shared_ptr<string> RevisionId, shared_ptr<DeleteWebApplicationRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWebApplicationRevisionWithOptions(ApplicationId, RevisionId, request, headers, runtime);
}

DeleteWebCustomDomainResponse Alibabacloud_Sae20190506::Client::deleteWebCustomDomainWithOptions(shared_ptr<string> DomainName,
                                                                                                 shared_ptr<DeleteWebCustomDomainRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWebCustomDomain"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/custom-domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DomainName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWebCustomDomainResponse(callApi(params, req, runtime));
}

DeleteWebCustomDomainResponse Alibabacloud_Sae20190506::Client::deleteWebCustomDomain(shared_ptr<string> DomainName, shared_ptr<DeleteWebCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWebCustomDomainWithOptions(DomainName, request, headers, runtime);
}

DeployApplicationResponse Alibabacloud_Sae20190506::Client::deployApplicationWithOptions(shared_ptr<DeployApplicationRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeployApplicationShrinkRequest> request = make_shared<DeployApplicationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InitContainerConfig>>(tmpReq->initContainersConfig)) {
    request->initContainersConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->initContainersConfig, make_shared<string>("InitContainersConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SidecarContainerConfig>>(tmpReq->sidecarContainersConfig)) {
    request->sidecarContainersConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sidecarContainersConfig, make_shared<string>("SidecarContainersConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acrAssumeRoleArn)) {
    query->insert(pair<string, string>("AcrAssumeRoleArn", *request->acrAssumeRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoEnableApplicationScalingRule)) {
    query->insert(pair<string, bool>("AutoEnableApplicationScalingRule", *request->autoEnableApplicationScalingRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchWaitTime)) {
    query->insert(pair<string, long>("BatchWaitTime", *request->batchWaitTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderDesc)) {
    query->insert(pair<string, string>("ChangeOrderDesc", *request->changeOrderDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandArgs)) {
    query->insert(pair<string, string>("CommandArgs", *request->commandArgs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    query->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customHostAlias)) {
    query->insert(pair<string, string>("CustomHostAlias", *request->customHostAlias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customImageNetworkType)) {
    query->insert(pair<string, string>("CustomImageNetworkType", *request->customImageNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deploy)) {
    query->insert(pair<string, string>("Deploy", *request->deploy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dotnet)) {
    query->insert(pair<string, string>("Dotnet", *request->dotnet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edasContainerVersion)) {
    query->insert(pair<string, string>("EdasContainerVersion", *request->edasContainerVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableAhas)) {
    query->insert(pair<string, string>("EnableAhas", *request->enableAhas));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCpuBurst)) {
    query->insert(pair<string, bool>("EnableCpuBurst", *request->enableCpuBurst));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableGreyTagRoute)) {
    query->insert(pair<string, bool>("EnableGreyTagRoute", *request->enableGreyTagRoute));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableNewArms)) {
    query->insert(pair<string, bool>("EnableNewArms", *request->enableNewArms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    query->insert(pair<string, string>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imagePullSecrets)) {
    query->insert(pair<string, string>("ImagePullSecrets", *request->imagePullSecrets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartArgs)) {
    query->insert(pair<string, string>("JarStartArgs", *request->jarStartArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartOptions)) {
    query->insert(pair<string, string>("JarStartOptions", *request->jarStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jdk)) {
    query->insert(pair<string, string>("Jdk", *request->jdk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kafkaConfigs)) {
    query->insert(pair<string, string>("KafkaConfigs", *request->kafkaConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveness)) {
    query->insert(pair<string, string>("Liveness", *request->liveness));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    query->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->microRegistration)) {
    query->insert(pair<string, string>("MicroRegistration", *request->microRegistration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->microserviceEngineConfig)) {
    query->insert(pair<string, string>("MicroserviceEngineConfig", *request->microserviceEngineConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstanceRatio)) {
    query->insert(pair<string, long>("MinReadyInstanceRatio", *request->minReadyInstanceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstances)) {
    query->insert(pair<string, long>("MinReadyInstances", *request->minReadyInstances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountDesc)) {
    query->insert(pair<string, string>("MountDesc", *request->mountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountHost)) {
    query->insert(pair<string, string>("MountHost", *request->mountHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasConfigs)) {
    query->insert(pair<string, string>("NasConfigs", *request->nasConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasId)) {
    query->insert(pair<string, string>("NasId", *request->nasId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newSaeVersion)) {
    query->insert(pair<string, string>("NewSaeVersion", *request->newSaeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oidcRoleName)) {
    query->insert(pair<string, string>("OidcRoleName", *request->oidcRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUrl)) {
    query->insert(pair<string, string>("PackageUrl", *request->packageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    query->insert(pair<string, string>("PackageVersion", *request->packageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpArmsConfigLocation)) {
    query->insert(pair<string, string>("PhpArmsConfigLocation", *request->phpArmsConfigLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpConfigLocation)) {
    query->insert(pair<string, string>("PhpConfigLocation", *request->phpConfigLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    query->insert(pair<string, string>("PostStart", *request->postStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    query->insert(pair<string, string>("PreStop", *request->preStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pvtzDiscoverySvc)) {
    query->insert(pair<string, string>("PvtzDiscoverySvc", *request->pvtzDiscoverySvc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->python)) {
    query->insert(pair<string, string>("Python", *request->python));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pythonModules)) {
    query->insert(pair<string, string>("PythonModules", *request->pythonModules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readiness)) {
    query->insert(pair<string, string>("Readiness", *request->readiness));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    query->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretMountDesc)) {
    query->insert(pair<string, string>("SecretMountDesc", *request->secretMountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsConfigs)) {
    query->insert(pair<string, string>("SlsConfigs", *request->slsConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->terminationGracePeriodSeconds)) {
    query->insert(pair<string, long>("TerminationGracePeriodSeconds", *request->terminationGracePeriodSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    query->insert(pair<string, string>("Timezone", *request->timezone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tomcatConfig)) {
    query->insert(pair<string, string>("TomcatConfig", *request->tomcatConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStrategy)) {
    query->insert(pair<string, string>("UpdateStrategy", *request->updateStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warStartOptions)) {
    query->insert(pair<string, string>("WarStartOptions", *request->warStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    query->insert(pair<string, string>("WebContainer", *request->webContainer));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acrInstanceId)) {
    body->insert(pair<string, string>("AcrInstanceId", *request->acrInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->associateEip)) {
    body->insert(pair<string, bool>("AssociateEip", *request->associateEip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configMapMountDesc)) {
    body->insert(pair<string, string>("ConfigMapMountDesc", *request->configMapMountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSidecarResourceIsolated)) {
    body->insert(pair<string, bool>("EnableSidecarResourceIsolated", *request->enableSidecarResourceIsolated));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initContainersConfigShrink)) {
    body->insert(pair<string, string>("InitContainersConfig", *request->initContainersConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->microRegistrationConfig)) {
    body->insert(pair<string, string>("MicroRegistrationConfig", *request->microRegistrationConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAkId)) {
    body->insert(pair<string, string>("OssAkId", *request->ossAkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAkSecret)) {
    body->insert(pair<string, string>("OssAkSecret", *request->ossAkSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossMountDescs)) {
    body->insert(pair<string, string>("OssMountDescs", *request->ossMountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->php)) {
    body->insert(pair<string, string>("Php", *request->php));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpConfig)) {
    body->insert(pair<string, string>("PhpConfig", *request->phpConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceTags)) {
    body->insert(pair<string, string>("ServiceTags", *request->serviceTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sidecarContainersConfigShrink)) {
    body->insert(pair<string, string>("SidecarContainersConfig", *request->sidecarContainersConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->swimlanePvtzDiscoverySvc)) {
    body->insert(pair<string, string>("SwimlanePvtzDiscoverySvc", *request->swimlanePvtzDiscoverySvc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/deployApplication"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployApplicationResponse(callApi(params, req, runtime));
}

DeployApplicationResponse Alibabacloud_Sae20190506::Client::deployApplication(shared_ptr<DeployApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployApplicationWithOptions(request, headers, runtime);
}

DescribeAppServiceDetailResponse Alibabacloud_Sae20190506::Client::describeAppServiceDetailWithOptions(shared_ptr<DescribeAppServiceDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nacosInstanceId)) {
    query->insert(pair<string, string>("NacosInstanceId", *request->nacosInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nacosNamespaceId)) {
    query->insert(pair<string, string>("NacosNamespaceId", *request->nacosNamespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceGroup)) {
    query->insert(pair<string, string>("ServiceGroup", *request->serviceGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppServiceDetail"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/service/describeAppServiceDetail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppServiceDetailResponse(callApi(params, req, runtime));
}

DescribeAppServiceDetailResponse Alibabacloud_Sae20190506::Client::describeAppServiceDetail(shared_ptr<DescribeAppServiceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppServiceDetailWithOptions(request, headers, runtime);
}

DescribeApplicationConfigResponse Alibabacloud_Sae20190506::Client::describeApplicationConfigWithOptions(shared_ptr<DescribeApplicationConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationConfig"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/describeApplicationConfig"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationConfigResponse(callApi(params, req, runtime));
}

DescribeApplicationConfigResponse Alibabacloud_Sae20190506::Client::describeApplicationConfig(shared_ptr<DescribeApplicationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationConfigWithOptions(request, headers, runtime);
}

DescribeApplicationGroupsResponse Alibabacloud_Sae20190506::Client::describeApplicationGroupsWithOptions(shared_ptr<DescribeApplicationGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationGroups"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/describeApplicationGroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationGroupsResponse(callApi(params, req, runtime));
}

DescribeApplicationGroupsResponse Alibabacloud_Sae20190506::Client::describeApplicationGroups(shared_ptr<DescribeApplicationGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationGroupsWithOptions(request, headers, runtime);
}

DescribeApplicationImageResponse Alibabacloud_Sae20190506::Client::describeApplicationImageWithOptions(shared_ptr<DescribeApplicationImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationImage"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/container/describeApplicationImage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationImageResponse(callApi(params, req, runtime));
}

DescribeApplicationImageResponse Alibabacloud_Sae20190506::Client::describeApplicationImage(shared_ptr<DescribeApplicationImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationImageWithOptions(request, headers, runtime);
}

DescribeApplicationInstancesResponse Alibabacloud_Sae20190506::Client::describeApplicationInstancesWithOptions(shared_ptr<DescribeApplicationInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationInstances"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/describeApplicationInstances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationInstancesResponse(callApi(params, req, runtime));
}

DescribeApplicationInstancesResponse Alibabacloud_Sae20190506::Client::describeApplicationInstances(shared_ptr<DescribeApplicationInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationInstancesWithOptions(request, headers, runtime);
}

DescribeApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::describeApplicationScalingRuleWithOptions(shared_ptr<DescribeApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationScalingRule"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/scale/applicationScalingRule"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationScalingRuleResponse(callApi(params, req, runtime));
}

DescribeApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::describeApplicationScalingRule(shared_ptr<DescribeApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationScalingRuleWithOptions(request, headers, runtime);
}

DescribeApplicationScalingRulesResponse Alibabacloud_Sae20190506::Client::describeApplicationScalingRulesWithOptions(shared_ptr<DescribeApplicationScalingRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationScalingRules"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/scale/applicationScalingRules"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationScalingRulesResponse(callApi(params, req, runtime));
}

DescribeApplicationScalingRulesResponse Alibabacloud_Sae20190506::Client::describeApplicationScalingRules(shared_ptr<DescribeApplicationScalingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationScalingRulesWithOptions(request, headers, runtime);
}

DescribeApplicationSlbsResponse Alibabacloud_Sae20190506::Client::describeApplicationSlbsWithOptions(shared_ptr<DescribeApplicationSlbsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationSlbs"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/slb"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationSlbsResponse(callApi(params, req, runtime));
}

DescribeApplicationSlbsResponse Alibabacloud_Sae20190506::Client::describeApplicationSlbs(shared_ptr<DescribeApplicationSlbsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationSlbsWithOptions(request, headers, runtime);
}

DescribeApplicationStatusResponse Alibabacloud_Sae20190506::Client::describeApplicationStatusWithOptions(shared_ptr<DescribeApplicationStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicationStatus"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/describeApplicationStatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicationStatusResponse(callApi(params, req, runtime));
}

DescribeApplicationStatusResponse Alibabacloud_Sae20190506::Client::describeApplicationStatus(shared_ptr<DescribeApplicationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationStatusWithOptions(request, headers, runtime);
}

DescribeChangeOrderResponse Alibabacloud_Sae20190506::Client::describeChangeOrderWithOptions(shared_ptr<DescribeChangeOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    query->insert(pair<string, string>("ChangeOrderId", *request->changeOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChangeOrder"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/changeorder/DescribeChangeOrder"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChangeOrderResponse(callApi(params, req, runtime));
}

DescribeChangeOrderResponse Alibabacloud_Sae20190506::Client::describeChangeOrder(shared_ptr<DescribeChangeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChangeOrderWithOptions(request, headers, runtime);
}

DescribeComponentsResponse Alibabacloud_Sae20190506::Client::describeComponentsWithOptions(shared_ptr<DescribeComponentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComponents"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/resource/components"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeComponentsResponse(callApi(params, req, runtime));
}

DescribeComponentsResponse Alibabacloud_Sae20190506::Client::describeComponents(shared_ptr<DescribeComponentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeComponentsWithOptions(request, headers, runtime);
}

DescribeConfigMapResponse Alibabacloud_Sae20190506::Client::describeConfigMapWithOptions(shared_ptr<DescribeConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configMapId)) {
    query->insert(pair<string, long>("ConfigMapId", *request->configMapId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConfigMap"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/configmap/configMap"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConfigMapResponse(callApi(params, req, runtime));
}

DescribeConfigMapResponse Alibabacloud_Sae20190506::Client::describeConfigMap(shared_ptr<DescribeConfigMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeConfigMapWithOptions(request, headers, runtime);
}

DescribeConfigurationPriceResponse Alibabacloud_Sae20190506::Client::describeConfigurationPriceWithOptions(shared_ptr<DescribeConfigurationPriceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    query->insert(pair<string, long>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    query->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newSaeVersion)) {
    query->insert(pair<string, string>("NewSaeVersion", *request->newSaeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workload)) {
    query->insert(pair<string, string>("Workload", *request->workload));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConfigurationPrice"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/configurationPrice"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConfigurationPriceResponse(callApi(params, req, runtime));
}

DescribeConfigurationPriceResponse Alibabacloud_Sae20190506::Client::describeConfigurationPrice(shared_ptr<DescribeConfigurationPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeConfigurationPriceWithOptions(request, headers, runtime);
}

DescribeEdasContainersResponse Alibabacloud_Sae20190506::Client::describeEdasContainersWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEdasContainers"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/resource/edasContainers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEdasContainersResponse(callApi(params, req, runtime));
}

DescribeEdasContainersResponse Alibabacloud_Sae20190506::Client::describeEdasContainers() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEdasContainersWithOptions(headers, runtime);
}

DescribeGreyTagRouteResponse Alibabacloud_Sae20190506::Client::describeGreyTagRouteWithOptions(shared_ptr<DescribeGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->greyTagRouteId)) {
    query->insert(pair<string, long>("GreyTagRouteId", *request->greyTagRouteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGreyTagRoute"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/tagroute/greyTagRoute"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGreyTagRouteResponse(callApi(params, req, runtime));
}

DescribeGreyTagRouteResponse Alibabacloud_Sae20190506::Client::describeGreyTagRoute(shared_ptr<DescribeGreyTagRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeGreyTagRouteWithOptions(request, headers, runtime);
}

DescribeIngressResponse Alibabacloud_Sae20190506::Client::describeIngressWithOptions(shared_ptr<DescribeIngressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ingressId)) {
    query->insert(pair<string, long>("IngressId", *request->ingressId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIngress"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/ingress/Ingress"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIngressResponse(callApi(params, req, runtime));
}

DescribeIngressResponse Alibabacloud_Sae20190506::Client::describeIngress(shared_ptr<DescribeIngressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeIngressWithOptions(request, headers, runtime);
}

DescribeInstanceLogResponse Alibabacloud_Sae20190506::Client::describeInstanceLogWithOptions(shared_ptr<DescribeInstanceLogRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerId)) {
    query->insert(pair<string, string>("ContainerId", *request->containerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceLog"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/instance/describeInstanceLog"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceLogResponse(callApi(params, req, runtime));
}

DescribeInstanceLogResponse Alibabacloud_Sae20190506::Client::describeInstanceLog(shared_ptr<DescribeInstanceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeInstanceLogWithOptions(request, headers, runtime);
}

DescribeInstanceSpecificationsResponse Alibabacloud_Sae20190506::Client::describeInstanceSpecificationsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceSpecifications"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/quota/instanceSpecifications"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceSpecificationsResponse(callApi(params, req, runtime));
}

DescribeInstanceSpecificationsResponse Alibabacloud_Sae20190506::Client::describeInstanceSpecifications() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeInstanceSpecificationsWithOptions(headers, runtime);
}

DescribeJobResponse Alibabacloud_Sae20190506::Client::describeJobWithOptions(shared_ptr<DescribeJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJob"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/describeJob"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobResponse(callApi(params, req, runtime));
}

DescribeJobResponse Alibabacloud_Sae20190506::Client::describeJob(shared_ptr<DescribeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeJobWithOptions(request, headers, runtime);
}

DescribeJobHistoryResponse Alibabacloud_Sae20190506::Client::describeJobHistoryWithOptions(shared_ptr<DescribeJobHistoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobHistory"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/describeJobHistory"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobHistoryResponse(callApi(params, req, runtime));
}

DescribeJobHistoryResponse Alibabacloud_Sae20190506::Client::describeJobHistory(shared_ptr<DescribeJobHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeJobHistoryWithOptions(request, headers, runtime);
}

DescribeJobStatusResponse Alibabacloud_Sae20190506::Client::describeJobStatusWithOptions(shared_ptr<DescribeJobStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobStatus"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/describeJobStatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobStatusResponse(callApi(params, req, runtime));
}

DescribeJobStatusResponse Alibabacloud_Sae20190506::Client::describeJobStatus(shared_ptr<DescribeJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeJobStatusWithOptions(request, headers, runtime);
}

DescribeNamespaceResponse Alibabacloud_Sae20190506::Client::describeNamespaceWithOptions(shared_ptr<DescribeNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpaceShortId)) {
    query->insert(pair<string, string>("NameSpaceShortId", *request->nameSpaceShortId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNamespace"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/namespace"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNamespaceResponse(callApi(params, req, runtime));
}

DescribeNamespaceResponse Alibabacloud_Sae20190506::Client::describeNamespace(shared_ptr<DescribeNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeNamespaceWithOptions(request, headers, runtime);
}

DescribeNamespaceListResponse Alibabacloud_Sae20190506::Client::describeNamespaceListWithOptions(shared_ptr<DescribeNamespaceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->containCustom)) {
    query->insert(pair<string, bool>("ContainCustom", *request->containCustom));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hybridCloudExclude)) {
    query->insert(pair<string, bool>("HybridCloudExclude", *request->hybridCloudExclude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNamespaceList"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/namespace/describeNamespaceList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNamespaceListResponse(callApi(params, req, runtime));
}

DescribeNamespaceListResponse Alibabacloud_Sae20190506::Client::describeNamespaceList(shared_ptr<DescribeNamespaceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeNamespaceListWithOptions(request, headers, runtime);
}

DescribeNamespaceResourcesResponse Alibabacloud_Sae20190506::Client::describeNamespaceResourcesWithOptions(shared_ptr<DescribeNamespaceResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpaceShortId)) {
    query->insert(pair<string, string>("NameSpaceShortId", *request->nameSpaceShortId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNamespaceResources"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/namespace/describeNamespaceResources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNamespaceResourcesResponse(callApi(params, req, runtime));
}

DescribeNamespaceResourcesResponse Alibabacloud_Sae20190506::Client::describeNamespaceResources(shared_ptr<DescribeNamespaceResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeNamespaceResourcesWithOptions(request, headers, runtime);
}

DescribeNamespacesResponse Alibabacloud_Sae20190506::Client::describeNamespacesWithOptions(shared_ptr<DescribeNamespacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNamespaces"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/namespaces"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNamespacesResponse(callApi(params, req, runtime));
}

DescribeNamespacesResponse Alibabacloud_Sae20190506::Client::describeNamespaces(shared_ptr<DescribeNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeNamespacesWithOptions(request, headers, runtime);
}

DescribePipelineResponse Alibabacloud_Sae20190506::Client::describePipelineWithOptions(shared_ptr<DescribePipelineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePipeline"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/changeorder/DescribePipeline"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePipelineResponse(callApi(params, req, runtime));
}

DescribePipelineResponse Alibabacloud_Sae20190506::Client::describePipeline(shared_ptr<DescribePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePipelineWithOptions(request, headers, runtime);
}

DescribeRegionsResponse Alibabacloud_Sae20190506::Client::describeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/regionConfig"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Sae20190506::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionsWithOptions(headers, runtime);
}

DescribeSecretResponse Alibabacloud_Sae20190506::Client::describeSecretWithOptions(shared_ptr<DescribeSecretRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->secretId)) {
    query->insert(pair<string, long>("SecretId", *request->secretId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecret"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/secret/secret"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecretResponse(callApi(params, req, runtime));
}

DescribeSecretResponse Alibabacloud_Sae20190506::Client::describeSecret(shared_ptr<DescribeSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSecretWithOptions(request, headers, runtime);
}

DescribeWebApplicationResponse Alibabacloud_Sae20190506::Client::describeWebApplicationWithOptions(shared_ptr<string> ApplicationId,
                                                                                                   shared_ptr<DescribeWebApplicationRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/applications/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebApplicationResponse(callApi(params, req, runtime));
}

DescribeWebApplicationResponse Alibabacloud_Sae20190506::Client::describeWebApplication(shared_ptr<string> ApplicationId, shared_ptr<DescribeWebApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

DescribeWebApplicationResourceStaticsResponse Alibabacloud_Sae20190506::Client::describeWebApplicationResourceStaticsWithOptions(shared_ptr<string> ApplicationId,
                                                                                                                                 shared_ptr<DescribeWebApplicationResourceStaticsRequest> request,
                                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebApplicationResourceStatics"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/applications-observability/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/resource"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebApplicationResourceStaticsResponse(callApi(params, req, runtime));
}

DescribeWebApplicationResourceStaticsResponse Alibabacloud_Sae20190506::Client::describeWebApplicationResourceStatics(shared_ptr<string> ApplicationId, shared_ptr<DescribeWebApplicationResourceStaticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWebApplicationResourceStaticsWithOptions(ApplicationId, request, headers, runtime);
}

DescribeWebApplicationRevisionResponse Alibabacloud_Sae20190506::Client::describeWebApplicationRevisionWithOptions(shared_ptr<string> ApplicationId,
                                                                                                                   shared_ptr<string> RevisionId,
                                                                                                                   shared_ptr<DescribeWebApplicationRevisionRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebApplicationRevision"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-revisions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/revisions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RevisionId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebApplicationRevisionResponse(callApi(params, req, runtime));
}

DescribeWebApplicationRevisionResponse Alibabacloud_Sae20190506::Client::describeWebApplicationRevision(shared_ptr<string> ApplicationId, shared_ptr<string> RevisionId, shared_ptr<DescribeWebApplicationRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWebApplicationRevisionWithOptions(ApplicationId, RevisionId, request, headers, runtime);
}

DescribeWebApplicationScalingConfigResponse Alibabacloud_Sae20190506::Client::describeWebApplicationScalingConfigWithOptions(shared_ptr<string> ApplicationId,
                                                                                                                             shared_ptr<DescribeWebApplicationScalingConfigRequest> request,
                                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebApplicationScalingConfig"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-scaling/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebApplicationScalingConfigResponse(callApi(params, req, runtime));
}

DescribeWebApplicationScalingConfigResponse Alibabacloud_Sae20190506::Client::describeWebApplicationScalingConfig(shared_ptr<string> ApplicationId, shared_ptr<DescribeWebApplicationScalingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWebApplicationScalingConfigWithOptions(ApplicationId, request, headers, runtime);
}

DescribeWebApplicationTrafficConfigResponse Alibabacloud_Sae20190506::Client::describeWebApplicationTrafficConfigWithOptions(shared_ptr<string> ApplicationId,
                                                                                                                             shared_ptr<DescribeWebApplicationTrafficConfigRequest> request,
                                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebApplicationTrafficConfig"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-traffic/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebApplicationTrafficConfigResponse(callApi(params, req, runtime));
}

DescribeWebApplicationTrafficConfigResponse Alibabacloud_Sae20190506::Client::describeWebApplicationTrafficConfig(shared_ptr<string> ApplicationId, shared_ptr<DescribeWebApplicationTrafficConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWebApplicationTrafficConfigWithOptions(ApplicationId, request, headers, runtime);
}

DescribeWebCustomDomainResponse Alibabacloud_Sae20190506::Client::describeWebCustomDomainWithOptions(shared_ptr<string> DomainName,
                                                                                                     shared_ptr<DescribeWebCustomDomainRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebCustomDomain"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/custom-domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DomainName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebCustomDomainResponse(callApi(params, req, runtime));
}

DescribeWebCustomDomainResponse Alibabacloud_Sae20190506::Client::describeWebCustomDomain(shared_ptr<string> DomainName, shared_ptr<DescribeWebCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWebCustomDomainWithOptions(DomainName, request, headers, runtime);
}

DescribeWebInstanceLogsResponse Alibabacloud_Sae20190506::Client::describeWebInstanceLogsWithOptions(shared_ptr<string> ApplicationId,
                                                                                                     shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<DescribeWebInstanceLogsRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebInstanceLogs"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/applications-observability/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebInstanceLogsResponse(callApi(params, req, runtime));
}

DescribeWebInstanceLogsResponse Alibabacloud_Sae20190506::Client::describeWebInstanceLogs(shared_ptr<string> ApplicationId, shared_ptr<string> InstanceId, shared_ptr<DescribeWebInstanceLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeWebInstanceLogsWithOptions(ApplicationId, InstanceId, request, headers, runtime);
}

DisableApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::disableApplicationScalingRuleWithOptions(shared_ptr<DisableApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableApplicationScalingRule"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/scale/disableApplicationScalingRule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableApplicationScalingRuleResponse(callApi(params, req, runtime));
}

DisableApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::disableApplicationScalingRule(shared_ptr<DisableApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableApplicationScalingRuleWithOptions(request, headers, runtime);
}

DowngradeApplicationApmServiceResponse Alibabacloud_Sae20190506::Client::downgradeApplicationApmServiceWithOptions(shared_ptr<DowngradeApplicationApmServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DowngradeApplicationApmService"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/applicationApmService"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DowngradeApplicationApmServiceResponse(callApi(params, req, runtime));
}

DowngradeApplicationApmServiceResponse Alibabacloud_Sae20190506::Client::downgradeApplicationApmService(shared_ptr<DowngradeApplicationApmServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return downgradeApplicationApmServiceWithOptions(request, headers, runtime);
}

EnableApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::enableApplicationScalingRuleWithOptions(shared_ptr<EnableApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableApplicationScalingRule"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/scale/enableApplicationScalingRule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableApplicationScalingRuleResponse(callApi(params, req, runtime));
}

EnableApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::enableApplicationScalingRule(shared_ptr<EnableApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableApplicationScalingRuleWithOptions(request, headers, runtime);
}

ExecJobResponse Alibabacloud_Sae20190506::Client::execJobWithOptions(shared_ptr<ExecJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandArgs)) {
    query->insert(pair<string, string>("CommandArgs", *request->commandArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    query->insert(pair<string, string>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartArgs)) {
    query->insert(pair<string, string>("JarStartArgs", *request->jarStartArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartOptions)) {
    query->insert(pair<string, string>("JarStartOptions", *request->jarStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->replicas)) {
    query->insert(pair<string, string>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    query->insert(pair<string, string>("Time", *request->time));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warStartOptions)) {
    query->insert(pair<string, string>("WarStartOptions", *request->warStartOptions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecJob"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/execJob"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecJobResponse(callApi(params, req, runtime));
}

ExecJobResponse Alibabacloud_Sae20190506::Client::execJob(shared_ptr<ExecJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return execJobWithOptions(request, headers, runtime);
}

GetApplicationResponse Alibabacloud_Sae20190506::Client::getApplicationWithOptions(shared_ptr<GetApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/getApplication"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApplicationResponse(callApi(params, req, runtime));
}

GetApplicationResponse Alibabacloud_Sae20190506::Client::getApplication(shared_ptr<GetApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getApplicationWithOptions(request, headers, runtime);
}

GetArmsTopNMetricResponse Alibabacloud_Sae20190506::Client::getArmsTopNMetricWithOptions(shared_ptr<GetArmsTopNMetricRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appSource)) {
    query->insert(pair<string, string>("AppSource", *request->appSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuStrategy)) {
    query->insert(pair<string, string>("CpuStrategy", *request->cpuStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArmsTopNMetric"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/getArmsTopNMetric"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArmsTopNMetricResponse(callApi(params, req, runtime));
}

GetArmsTopNMetricResponse Alibabacloud_Sae20190506::Client::getArmsTopNMetric(shared_ptr<GetArmsTopNMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getArmsTopNMetricWithOptions(request, headers, runtime);
}

GetAvailabilityMetricResponse Alibabacloud_Sae20190506::Client::getAvailabilityMetricWithOptions(shared_ptr<GetAvailabilityMetricRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appSource)) {
    query->insert(pair<string, string>("AppSource", *request->appSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuStrategy)) {
    query->insert(pair<string, string>("CpuStrategy", *request->cpuStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAvailabilityMetric"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/getAvailabilityMetric"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAvailabilityMetricResponse(callApi(params, req, runtime));
}

GetAvailabilityMetricResponse Alibabacloud_Sae20190506::Client::getAvailabilityMetric(shared_ptr<GetAvailabilityMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAvailabilityMetricWithOptions(request, headers, runtime);
}

GetChangeOrderMetricResponse Alibabacloud_Sae20190506::Client::getChangeOrderMetricWithOptions(shared_ptr<GetChangeOrderMetricRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSource)) {
    query->insert(pair<string, string>("AppSource", *request->appSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coType)) {
    query->insert(pair<string, string>("CoType", *request->coType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuStrategy)) {
    query->insert(pair<string, string>("CpuStrategy", *request->cpuStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    query->insert(pair<string, string>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChangeOrderMetric"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/getChangeOrderMetric"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChangeOrderMetricResponse(callApi(params, req, runtime));
}

GetChangeOrderMetricResponse Alibabacloud_Sae20190506::Client::getChangeOrderMetric(shared_ptr<GetChangeOrderMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getChangeOrderMetricWithOptions(request, headers, runtime);
}

GetScaleAppMetricResponse Alibabacloud_Sae20190506::Client::getScaleAppMetricWithOptions(shared_ptr<GetScaleAppMetricRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appSource)) {
    query->insert(pair<string, string>("AppSource", *request->appSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuStrategy)) {
    query->insert(pair<string, string>("CpuStrategy", *request->cpuStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScaleAppMetric"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/getScaleAppMetric"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScaleAppMetricResponse(callApi(params, req, runtime));
}

GetScaleAppMetricResponse Alibabacloud_Sae20190506::Client::getScaleAppMetric(shared_ptr<GetScaleAppMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getScaleAppMetricWithOptions(request, headers, runtime);
}

GetWarningEventMetricResponse Alibabacloud_Sae20190506::Client::getWarningEventMetricWithOptions(shared_ptr<GetWarningEventMetricRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appSource)) {
    query->insert(pair<string, string>("AppSource", *request->appSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuStrategy)) {
    query->insert(pair<string, string>("CpuStrategy", *request->cpuStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWarningEventMetric"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/getWarningEventMetric"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWarningEventMetricResponse(callApi(params, req, runtime));
}

GetWarningEventMetricResponse Alibabacloud_Sae20190506::Client::getWarningEventMetric(shared_ptr<GetWarningEventMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWarningEventMetricWithOptions(request, headers, runtime);
}

GetWebshellTokenResponse Alibabacloud_Sae20190506::Client::getWebshellTokenWithOptions(shared_ptr<GetWebshellTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerName)) {
    query->insert(pair<string, string>("ContainerName", *request->containerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podName)) {
    query->insert(pair<string, string>("PodName", *request->podName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebshellToken"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/instance/webshellToken"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebshellTokenResponse(callApi(params, req, runtime));
}

GetWebshellTokenResponse Alibabacloud_Sae20190506::Client::getWebshellToken(shared_ptr<GetWebshellTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWebshellTokenWithOptions(request, headers, runtime);
}

ListAppEventsResponse Alibabacloud_Sae20190506::Client::listAppEventsWithOptions(shared_ptr<ListAppEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectKind)) {
    query->insert(pair<string, string>("ObjectKind", *request->objectKind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectName)) {
    query->insert(pair<string, string>("ObjectName", *request->objectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppEvents"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/listAppEvents"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppEventsResponse(callApi(params, req, runtime));
}

ListAppEventsResponse Alibabacloud_Sae20190506::Client::listAppEvents(shared_ptr<ListAppEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppEventsWithOptions(request, headers, runtime);
}

ListAppServicesResponse Alibabacloud_Sae20190506::Client::listAppServicesWithOptions(shared_ptr<ListAppServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nacosInstanceId)) {
    query->insert(pair<string, string>("NacosInstanceId", *request->nacosInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nacosNamespaceId)) {
    query->insert(pair<string, string>("NacosNamespaceId", *request->nacosNamespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registryType)) {
    query->insert(pair<string, string>("RegistryType", *request->registryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppServices"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/service/listAppServices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppServicesResponse(callApi(params, req, runtime));
}

ListAppServicesResponse Alibabacloud_Sae20190506::Client::listAppServices(shared_ptr<ListAppServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppServicesWithOptions(request, headers, runtime);
}

ListAppServicesPageResponse Alibabacloud_Sae20190506::Client::listAppServicesPageWithOptions(shared_ptr<ListAppServicesPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppServicesPage"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/service/listAppServicesPage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppServicesPageResponse(callApi(params, req, runtime));
}

ListAppServicesPageResponse Alibabacloud_Sae20190506::Client::listAppServicesPage(shared_ptr<ListAppServicesPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppServicesPageWithOptions(request, headers, runtime);
}

ListAppVersionsResponse Alibabacloud_Sae20190506::Client::listAppVersionsWithOptions(shared_ptr<ListAppVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppVersions"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/listAppVersions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppVersionsResponse(callApi(params, req, runtime));
}

ListAppVersionsResponse Alibabacloud_Sae20190506::Client::listAppVersions(shared_ptr<ListAppVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppVersionsWithOptions(request, headers, runtime);
}

ListApplicationsResponse Alibabacloud_Sae20190506::Client::listApplicationsWithOptions(shared_ptr<ListApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSource)) {
    query->insert(pair<string, string>("AppSource", *request->appSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldType)) {
    query->insert(pair<string, string>("FieldType", *request->fieldType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldValue)) {
    query->insert(pair<string, string>("FieldValue", *request->fieldValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplications"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/listApplications"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationsResponse(callApi(params, req, runtime));
}

ListApplicationsResponse Alibabacloud_Sae20190506::Client::listApplications(shared_ptr<ListApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listApplicationsWithOptions(request, headers, runtime);
}

ListApplicationsForSwimmingLaneResponse Alibabacloud_Sae20190506::Client::listApplicationsForSwimmingLaneWithOptions(shared_ptr<ListApplicationsForSwimmingLaneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicationsForSwimmingLane"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/cas/gray/listApplicationsForSwimmingLane"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationsForSwimmingLaneResponse(callApi(params, req, runtime));
}

ListApplicationsForSwimmingLaneResponse Alibabacloud_Sae20190506::Client::listApplicationsForSwimmingLane(shared_ptr<ListApplicationsForSwimmingLaneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listApplicationsForSwimmingLaneWithOptions(request, headers, runtime);
}

ListChangeOrdersResponse Alibabacloud_Sae20190506::Client::listChangeOrdersWithOptions(shared_ptr<ListChangeOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coStatus)) {
    query->insert(pair<string, string>("CoStatus", *request->coStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coType)) {
    query->insert(pair<string, string>("CoType", *request->coType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChangeOrders"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/changeorder/ListChangeOrders"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChangeOrdersResponse(callApi(params, req, runtime));
}

ListChangeOrdersResponse Alibabacloud_Sae20190506::Client::listChangeOrders(shared_ptr<ListChangeOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChangeOrdersWithOptions(request, headers, runtime);
}

ListConsumedServicesResponse Alibabacloud_Sae20190506::Client::listConsumedServicesWithOptions(shared_ptr<ListConsumedServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConsumedServices"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/service/listConsumedServices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConsumedServicesResponse(callApi(params, req, runtime));
}

ListConsumedServicesResponse Alibabacloud_Sae20190506::Client::listConsumedServices(shared_ptr<ListConsumedServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConsumedServicesWithOptions(request, headers, runtime);
}

ListGreyTagRouteResponse Alibabacloud_Sae20190506::Client::listGreyTagRouteWithOptions(shared_ptr<ListGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGreyTagRoute"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/tagroute/greyTagRouteList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGreyTagRouteResponse(callApi(params, req, runtime));
}

ListGreyTagRouteResponse Alibabacloud_Sae20190506::Client::listGreyTagRoute(shared_ptr<ListGreyTagRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGreyTagRouteWithOptions(request, headers, runtime);
}

ListIngressesResponse Alibabacloud_Sae20190506::Client::listIngressesWithOptions(shared_ptr<ListIngressesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIngresses"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/ingress/IngressList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIngressesResponse(callApi(params, req, runtime));
}

ListIngressesResponse Alibabacloud_Sae20190506::Client::listIngresses(shared_ptr<ListIngressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIngressesWithOptions(request, headers, runtime);
}

ListJobsResponse Alibabacloud_Sae20190506::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldType)) {
    query->insert(pair<string, string>("FieldType", *request->fieldType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldValue)) {
    query->insert(pair<string, string>("FieldValue", *request->fieldValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workload)) {
    query->insert(pair<string, string>("Workload", *request->workload));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/listJobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_Sae20190506::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listJobsWithOptions(request, headers, runtime);
}

ListLogConfigsResponse Alibabacloud_Sae20190506::Client::listLogConfigsWithOptions(shared_ptr<ListLogConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogConfigs"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/log/listLogConfigs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogConfigsResponse(callApi(params, req, runtime));
}

ListLogConfigsResponse Alibabacloud_Sae20190506::Client::listLogConfigs(shared_ptr<ListLogConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogConfigsWithOptions(request, headers, runtime);
}

ListNamespaceChangeOrdersResponse Alibabacloud_Sae20190506::Client::listNamespaceChangeOrdersWithOptions(shared_ptr<ListNamespaceChangeOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coStatus)) {
    query->insert(pair<string, string>("CoStatus", *request->coStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coType)) {
    query->insert(pair<string, string>("CoType", *request->coType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNamespaceChangeOrders"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/changeorder/listNamespaceChangeOrders"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNamespaceChangeOrdersResponse(callApi(params, req, runtime));
}

ListNamespaceChangeOrdersResponse Alibabacloud_Sae20190506::Client::listNamespaceChangeOrders(shared_ptr<ListNamespaceChangeOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNamespaceChangeOrdersWithOptions(request, headers, runtime);
}

ListNamespacedConfigMapsResponse Alibabacloud_Sae20190506::Client::listNamespacedConfigMapsWithOptions(shared_ptr<ListNamespacedConfigMapsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNamespacedConfigMaps"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/configmap/listNamespacedConfigMaps"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNamespacedConfigMapsResponse(callApi(params, req, runtime));
}

ListNamespacedConfigMapsResponse Alibabacloud_Sae20190506::Client::listNamespacedConfigMaps(shared_ptr<ListNamespacedConfigMapsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNamespacedConfigMapsWithOptions(request, headers, runtime);
}

ListPublishedServicesResponse Alibabacloud_Sae20190506::Client::listPublishedServicesWithOptions(shared_ptr<ListPublishedServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublishedServices"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/service/listPublishedServices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublishedServicesResponse(callApi(params, req, runtime));
}

ListPublishedServicesResponse Alibabacloud_Sae20190506::Client::listPublishedServices(shared_ptr<ListPublishedServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPublishedServicesWithOptions(request, headers, runtime);
}

ListSecretsResponse Alibabacloud_Sae20190506::Client::listSecretsWithOptions(shared_ptr<ListSecretsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSecrets"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/secret/secrets"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSecretsResponse(callApi(params, req, runtime));
}

ListSecretsResponse Alibabacloud_Sae20190506::Client::listSecrets(shared_ptr<ListSecretsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSecretsWithOptions(request, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_Sae20190506::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Sae20190506::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListWebApplicationInstancesResponse Alibabacloud_Sae20190506::Client::listWebApplicationInstancesWithOptions(shared_ptr<string> ApplicationId,
                                                                                                             shared_ptr<ListWebApplicationInstancesRequest> tmpReq,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWebApplicationInstancesShrinkRequest> request = make_shared<ListWebApplicationInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->statuses)) {
    request->statusesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->statuses, make_shared<string>("Statuses"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->versionIds)) {
    request->versionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->versionIds, make_shared<string>("VersionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    query->insert(pair<string, string>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusesShrink)) {
    query->insert(pair<string, string>("Statuses", *request->statusesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionIdsShrink)) {
    query->insert(pair<string, string>("VersionIds", *request->versionIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWebApplicationInstances"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/applications-observability/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWebApplicationInstancesResponse(callApi(params, req, runtime));
}

ListWebApplicationInstancesResponse Alibabacloud_Sae20190506::Client::listWebApplicationInstances(shared_ptr<string> ApplicationId, shared_ptr<ListWebApplicationInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWebApplicationInstancesWithOptions(ApplicationId, request, headers, runtime);
}

ListWebApplicationRevisionsResponse Alibabacloud_Sae20190506::Client::listWebApplicationRevisionsWithOptions(shared_ptr<string> ApplicationId,
                                                                                                             shared_ptr<ListWebApplicationRevisionsRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWebApplicationRevisions"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-revisions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/revisions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWebApplicationRevisionsResponse(callApi(params, req, runtime));
}

ListWebApplicationRevisionsResponse Alibabacloud_Sae20190506::Client::listWebApplicationRevisions(shared_ptr<string> ApplicationId, shared_ptr<ListWebApplicationRevisionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWebApplicationRevisionsWithOptions(ApplicationId, request, headers, runtime);
}

ListWebApplicationsResponse Alibabacloud_Sae20190506::Client::listWebApplicationsWithOptions(shared_ptr<ListWebApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWebApplications"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/applications"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWebApplicationsResponse(callApi(params, req, runtime));
}

ListWebApplicationsResponse Alibabacloud_Sae20190506::Client::listWebApplications(shared_ptr<ListWebApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWebApplicationsWithOptions(request, headers, runtime);
}

ListWebCustomDomainsResponse Alibabacloud_Sae20190506::Client::listWebCustomDomainsWithOptions(shared_ptr<ListWebCustomDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    query->insert(pair<string, string>("ApplicationId", *request->applicationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    query->insert(pair<string, string>("Prefix", *request->prefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWebCustomDomains"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/custom-domains"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWebCustomDomainsResponse(callApi(params, req, runtime));
}

ListWebCustomDomainsResponse Alibabacloud_Sae20190506::Client::listWebCustomDomains(shared_ptr<ListWebCustomDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWebCustomDomainsWithOptions(request, headers, runtime);
}

OpenSaeServiceResponse Alibabacloud_Sae20190506::Client::openSaeServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenSaeService"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/service/open"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenSaeServiceResponse(callApi(params, req, runtime));
}

OpenSaeServiceResponse Alibabacloud_Sae20190506::Client::openSaeService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return openSaeServiceWithOptions(headers, runtime);
}

PublishWebApplicationRevisionResponse Alibabacloud_Sae20190506::Client::publishWebApplicationRevisionWithOptions(shared_ptr<string> ApplicationId,
                                                                                                                 shared_ptr<PublishWebApplicationRevisionRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishWebApplicationRevision"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-revisions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/revisions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishWebApplicationRevisionResponse(callApi(params, req, runtime));
}

PublishWebApplicationRevisionResponse Alibabacloud_Sae20190506::Client::publishWebApplicationRevision(shared_ptr<string> ApplicationId, shared_ptr<PublishWebApplicationRevisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishWebApplicationRevisionWithOptions(ApplicationId, request, headers, runtime);
}

QueryResourceStaticsResponse Alibabacloud_Sae20190506::Client::queryResourceStaticsWithOptions(shared_ptr<QueryResourceStaticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryResourceStatics"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/quota/queryResourceStatics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryResourceStaticsResponse(callApi(params, req, runtime));
}

QueryResourceStaticsResponse Alibabacloud_Sae20190506::Client::queryResourceStatics(shared_ptr<QueryResourceStaticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryResourceStaticsWithOptions(request, headers, runtime);
}

ReduceApplicationCapacityByInstanceIdsResponse Alibabacloud_Sae20190506::Client::reduceApplicationCapacityByInstanceIdsWithOptions(shared_ptr<ReduceApplicationCapacityByInstanceIdsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReduceApplicationCapacityByInstanceIds"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/ScaleInApplicationWithInstanceIds"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReduceApplicationCapacityByInstanceIdsResponse(callApi(params, req, runtime));
}

ReduceApplicationCapacityByInstanceIdsResponse Alibabacloud_Sae20190506::Client::reduceApplicationCapacityByInstanceIds(shared_ptr<ReduceApplicationCapacityByInstanceIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reduceApplicationCapacityByInstanceIdsWithOptions(request, headers, runtime);
}

RescaleApplicationResponse Alibabacloud_Sae20190506::Client::rescaleApplicationWithOptions(shared_ptr<RescaleApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoEnableApplicationScalingRule)) {
    query->insert(pair<string, bool>("AutoEnableApplicationScalingRule", *request->autoEnableApplicationScalingRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstanceRatio)) {
    query->insert(pair<string, long>("MinReadyInstanceRatio", *request->minReadyInstanceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstances)) {
    query->insert(pair<string, long>("MinReadyInstances", *request->minReadyInstances));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    query->insert(pair<string, long>("Replicas", *request->replicas));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RescaleApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/rescaleApplication"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RescaleApplicationResponse(callApi(params, req, runtime));
}

RescaleApplicationResponse Alibabacloud_Sae20190506::Client::rescaleApplication(shared_ptr<RescaleApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rescaleApplicationWithOptions(request, headers, runtime);
}

RescaleApplicationVerticallyResponse Alibabacloud_Sae20190506::Client::rescaleApplicationVerticallyWithOptions(shared_ptr<RescaleApplicationVerticallyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpu)) {
    query->insert(pair<string, string>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diskSize)) {
    query->insert(pair<string, string>("DiskSize", *request->diskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memory)) {
    query->insert(pair<string, string>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoEnableApplicationScalingRule)) {
    query->insert(pair<string, bool>("autoEnableApplicationScalingRule", *request->autoEnableApplicationScalingRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstanceRatio)) {
    query->insert(pair<string, long>("minReadyInstanceRatio", *request->minReadyInstanceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstances)) {
    query->insert(pair<string, long>("minReadyInstances", *request->minReadyInstances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RescaleApplicationVertically"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/rescaleApplicationVertically"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RescaleApplicationVerticallyResponse(callApi(params, req, runtime));
}

RescaleApplicationVerticallyResponse Alibabacloud_Sae20190506::Client::rescaleApplicationVertically(shared_ptr<RescaleApplicationVerticallyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rescaleApplicationVerticallyWithOptions(request, headers, runtime);
}

RestartApplicationResponse Alibabacloud_Sae20190506::Client::restartApplicationWithOptions(shared_ptr<RestartApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoEnableApplicationScalingRule)) {
    query->insert(pair<string, bool>("AutoEnableApplicationScalingRule", *request->autoEnableApplicationScalingRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstanceRatio)) {
    query->insert(pair<string, long>("MinReadyInstanceRatio", *request->minReadyInstanceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstances)) {
    query->insert(pair<string, long>("MinReadyInstances", *request->minReadyInstances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/restartApplication"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartApplicationResponse(callApi(params, req, runtime));
}

RestartApplicationResponse Alibabacloud_Sae20190506::Client::restartApplication(shared_ptr<RestartApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartApplicationWithOptions(request, headers, runtime);
}

RestartInstancesResponse Alibabacloud_Sae20190506::Client::restartInstancesWithOptions(shared_ptr<RestartInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartInstances"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/restartInstances"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartInstancesResponse(callApi(params, req, runtime));
}

RestartInstancesResponse Alibabacloud_Sae20190506::Client::restartInstances(shared_ptr<RestartInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartInstancesWithOptions(request, headers, runtime);
}

RollbackApplicationResponse Alibabacloud_Sae20190506::Client::rollbackApplicationWithOptions(shared_ptr<RollbackApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoEnableApplicationScalingRule)) {
    query->insert(pair<string, string>("AutoEnableApplicationScalingRule", *request->autoEnableApplicationScalingRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchWaitTime)) {
    query->insert(pair<string, long>("BatchWaitTime", *request->batchWaitTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstanceRatio)) {
    query->insert(pair<string, long>("MinReadyInstanceRatio", *request->minReadyInstanceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstances)) {
    query->insert(pair<string, long>("MinReadyInstances", *request->minReadyInstances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStrategy)) {
    query->insert(pair<string, string>("UpdateStrategy", *request->updateStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/rollbackApplication"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackApplicationResponse(callApi(params, req, runtime));
}

RollbackApplicationResponse Alibabacloud_Sae20190506::Client::rollbackApplication(shared_ptr<RollbackApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rollbackApplicationWithOptions(request, headers, runtime);
}

StartApplicationResponse Alibabacloud_Sae20190506::Client::startApplicationWithOptions(shared_ptr<StartApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/startApplication"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartApplicationResponse(callApi(params, req, runtime));
}

StartApplicationResponse Alibabacloud_Sae20190506::Client::startApplication(shared_ptr<StartApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startApplicationWithOptions(request, headers, runtime);
}

StartWebApplicationResponse Alibabacloud_Sae20190506::Client::startWebApplicationWithOptions(shared_ptr<string> ApplicationId,
                                                                                             shared_ptr<StartWebApplicationRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartWebApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-ops/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartWebApplicationResponse(callApi(params, req, runtime));
}

StartWebApplicationResponse Alibabacloud_Sae20190506::Client::startWebApplication(shared_ptr<string> ApplicationId, shared_ptr<StartWebApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

StopApplicationResponse Alibabacloud_Sae20190506::Client::stopApplicationWithOptions(shared_ptr<StopApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/stopApplication"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopApplicationResponse(callApi(params, req, runtime));
}

StopApplicationResponse Alibabacloud_Sae20190506::Client::stopApplication(shared_ptr<StopApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopApplicationWithOptions(request, headers, runtime);
}

StopWebApplicationResponse Alibabacloud_Sae20190506::Client::stopWebApplicationWithOptions(shared_ptr<string> ApplicationId,
                                                                                           shared_ptr<StopWebApplicationRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopWebApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-ops/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)) + string("/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopWebApplicationResponse(callApi(params, req, runtime));
}

StopWebApplicationResponse Alibabacloud_Sae20190506::Client::stopWebApplication(shared_ptr<string> ApplicationId, shared_ptr<StopWebApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

SuspendJobResponse Alibabacloud_Sae20190506::Client::suspendJobWithOptions(shared_ptr<SuspendJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->suspend)) {
    query->insert(pair<string, bool>("Suspend", *request->suspend));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendJob"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/suspendJob"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendJobResponse(callApi(params, req, runtime));
}

SuspendJobResponse Alibabacloud_Sae20190506::Client::suspendJob(shared_ptr<SuspendJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return suspendJobWithOptions(request, headers, runtime);
}

TagResourcesResponse Alibabacloud_Sae20190506::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    body->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Sae20190506::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

UnbindNlbResponse Alibabacloud_Sae20190506::Client::unbindNlbWithOptions(shared_ptr<UnbindNlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nlbId)) {
    query->insert(pair<string, string>("NlbId", *request->nlbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    query->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindNlb"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/nlb"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindNlbResponse(callApi(params, req, runtime));
}

UnbindNlbResponse Alibabacloud_Sae20190506::Client::unbindNlb(shared_ptr<UnbindNlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindNlbWithOptions(request, headers, runtime);
}

UnbindSlbResponse Alibabacloud_Sae20190506::Client::unbindSlbWithOptions(shared_ptr<UnbindSlbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->internet)) {
    query->insert(pair<string, bool>("Internet", *request->internet));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->intranet)) {
    query->insert(pair<string, bool>("Intranet", *request->intranet));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindSlb"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/slb"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindSlbResponse(callApi(params, req, runtime));
}

UnbindSlbResponse Alibabacloud_Sae20190506::Client::unbindSlb(shared_ptr<UnbindSlbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unbindSlbWithOptions(request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_Sae20190506::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteAll)) {
    query->insert(pair<string, bool>("DeleteAll", *request->deleteAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeys)) {
    query->insert(pair<string, string>("TagKeys", *request->tagKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tags"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Sae20190506::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UpdateAppSecurityGroupResponse Alibabacloud_Sae20190506::Client::updateAppSecurityGroupWithOptions(shared_ptr<UpdateAppSecurityGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAppSecurityGroup"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/updateAppSecurityGroup"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAppSecurityGroupResponse(callApi(params, req, runtime));
}

UpdateAppSecurityGroupResponse Alibabacloud_Sae20190506::Client::updateAppSecurityGroup(shared_ptr<UpdateAppSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAppSecurityGroupWithOptions(request, headers, runtime);
}

UpdateApplicationDescriptionResponse Alibabacloud_Sae20190506::Client::updateApplicationDescriptionWithOptions(shared_ptr<UpdateApplicationDescriptionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appDescription)) {
    query->insert(pair<string, string>("AppDescription", *request->appDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplicationDescription"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/updateAppDescription"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicationDescriptionResponse(callApi(params, req, runtime));
}

UpdateApplicationDescriptionResponse Alibabacloud_Sae20190506::Client::updateApplicationDescription(shared_ptr<UpdateApplicationDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateApplicationDescriptionWithOptions(request, headers, runtime);
}

UpdateApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::updateApplicationScalingRuleWithOptions(shared_ptr<UpdateApplicationScalingRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableIdle)) {
    query->insert(pair<string, bool>("EnableIdle", *request->enableIdle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstanceRatio)) {
    query->insert(pair<string, long>("MinReadyInstanceRatio", *request->minReadyInstanceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minReadyInstances)) {
    query->insert(pair<string, long>("MinReadyInstances", *request->minReadyInstances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleMetric)) {
    query->insert(pair<string, string>("ScalingRuleMetric", *request->scalingRuleMetric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleName)) {
    query->insert(pair<string, string>("ScalingRuleName", *request->scalingRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scalingRuleTimer)) {
    query->insert(pair<string, string>("ScalingRuleTimer", *request->scalingRuleTimer));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplicationScalingRule"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/scale/applicationScalingRule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicationScalingRuleResponse(callApi(params, req, runtime));
}

UpdateApplicationScalingRuleResponse Alibabacloud_Sae20190506::Client::updateApplicationScalingRule(shared_ptr<UpdateApplicationScalingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateApplicationScalingRuleWithOptions(request, headers, runtime);
}

UpdateApplicationVswitchesResponse Alibabacloud_Sae20190506::Client::updateApplicationVswitchesWithOptions(shared_ptr<UpdateApplicationVswitchesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplicationVswitches"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/updateAppVswitches"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicationVswitchesResponse(callApi(params, req, runtime));
}

UpdateApplicationVswitchesResponse Alibabacloud_Sae20190506::Client::updateApplicationVswitches(shared_ptr<UpdateApplicationVswitchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateApplicationVswitchesWithOptions(request, headers, runtime);
}

UpdateConfigMapResponse Alibabacloud_Sae20190506::Client::updateConfigMapWithOptions(shared_ptr<UpdateConfigMapRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configMapId)) {
    query->insert(pair<string, long>("ConfigMapId", *request->configMapId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfigMap"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/configmap/configMap"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConfigMapResponse(callApi(params, req, runtime));
}

UpdateConfigMapResponse Alibabacloud_Sae20190506::Client::updateConfigMap(shared_ptr<UpdateConfigMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateConfigMapWithOptions(request, headers, runtime);
}

UpdateGreyTagRouteResponse Alibabacloud_Sae20190506::Client::updateGreyTagRouteWithOptions(shared_ptr<UpdateGreyTagRouteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->albRules)) {
    query->insert(pair<string, string>("AlbRules", *request->albRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dubboRules)) {
    query->insert(pair<string, string>("DubboRules", *request->dubboRules));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->greyTagRouteId)) {
    query->insert(pair<string, long>("GreyTagRouteId", *request->greyTagRouteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scRules)) {
    query->insert(pair<string, string>("ScRules", *request->scRules));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGreyTagRoute"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/tagroute/greyTagRoute"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGreyTagRouteResponse(callApi(params, req, runtime));
}

UpdateGreyTagRouteResponse Alibabacloud_Sae20190506::Client::updateGreyTagRoute(shared_ptr<UpdateGreyTagRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGreyTagRouteWithOptions(request, headers, runtime);
}

UpdateIngressResponse Alibabacloud_Sae20190506::Client::updateIngressWithOptions(shared_ptr<UpdateIngressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certId)) {
    query->insert(pair<string, string>("CertId", *request->certId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certIds)) {
    query->insert(pair<string, string>("CertIds", *request->certIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corsConfig)) {
    query->insert(pair<string, string>("CorsConfig", *request->corsConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRule)) {
    query->insert(pair<string, string>("DefaultRule", *request->defaultRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedFor)) {
    query->insert(pair<string, bool>("EnableXForwardedFor", *request->enableXForwardedFor));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedForClientSrcPort)) {
    query->insert(pair<string, bool>("EnableXForwardedForClientSrcPort", *request->enableXForwardedForClientSrcPort));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedForProto)) {
    query->insert(pair<string, bool>("EnableXForwardedForProto", *request->enableXForwardedForProto));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedForSlbId)) {
    query->insert(pair<string, bool>("EnableXForwardedForSlbId", *request->enableXForwardedForSlbId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableXForwardedForSlbPort)) {
    query->insert(pair<string, bool>("EnableXForwardedForSlbPort", *request->enableXForwardedForSlbPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    query->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ingressId)) {
    query->insert(pair<string, long>("IngressId", *request->ingressId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerPort)) {
    query->insert(pair<string, string>("ListenerPort", *request->listenerPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listenerProtocol)) {
    query->insert(pair<string, string>("ListenerProtocol", *request->listenerProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loadBalanceType)) {
    query->insert(pair<string, string>("LoadBalanceType", *request->loadBalanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->requestTimeout)) {
    query->insert(pair<string, long>("RequestTimeout", *request->requestTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyId)) {
    query->insert(pair<string, string>("SecurityPolicyId", *request->securityPolicyId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->rules)) {
    body->insert(pair<string, string>("Rules", *request->rules));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIngress"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/ingress/Ingress"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIngressResponse(callApi(params, req, runtime));
}

UpdateIngressResponse Alibabacloud_Sae20190506::Client::updateIngress(shared_ptr<UpdateIngressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateIngressWithOptions(request, headers, runtime);
}

UpdateJobResponse Alibabacloud_Sae20190506::Client::updateJobWithOptions(shared_ptr<UpdateJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acrAssumeRoleArn)) {
    query->insert(pair<string, string>("AcrAssumeRoleArn", *request->acrAssumeRoleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backoffLimit)) {
    query->insert(pair<string, long>("BackoffLimit", *request->backoffLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandArgs)) {
    query->insert(pair<string, string>("CommandArgs", *request->commandArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->concurrencyPolicy)) {
    query->insert(pair<string, string>("ConcurrencyPolicy", *request->concurrencyPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customHostAlias)) {
    query->insert(pair<string, string>("CustomHostAlias", *request->customHostAlias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edasContainerVersion)) {
    query->insert(pair<string, string>("EdasContainerVersion", *request->edasContainerVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envs)) {
    query->insert(pair<string, string>("Envs", *request->envs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imagePullSecrets)) {
    query->insert(pair<string, string>("ImagePullSecrets", *request->imagePullSecrets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartArgs)) {
    query->insert(pair<string, string>("JarStartArgs", *request->jarStartArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jarStartOptions)) {
    query->insert(pair<string, string>("JarStartOptions", *request->jarStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jdk)) {
    query->insert(pair<string, string>("Jdk", *request->jdk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountDesc)) {
    query->insert(pair<string, string>("MountDesc", *request->mountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mountHost)) {
    query->insert(pair<string, string>("MountHost", *request->mountHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasId)) {
    query->insert(pair<string, string>("NasId", *request->nasId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUrl)) {
    query->insert(pair<string, string>("PackageUrl", *request->packageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageVersion)) {
    query->insert(pair<string, string>("PackageVersion", *request->packageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpConfigLocation)) {
    query->insert(pair<string, string>("PhpConfigLocation", *request->phpConfigLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postStart)) {
    query->insert(pair<string, string>("PostStart", *request->postStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preStop)) {
    query->insert(pair<string, string>("PreStop", *request->preStop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programmingLanguage)) {
    query->insert(pair<string, string>("ProgrammingLanguage", *request->programmingLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->python)) {
    query->insert(pair<string, string>("Python", *request->python));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pythonModules)) {
    query->insert(pair<string, string>("PythonModules", *request->pythonModules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refAppId)) {
    query->insert(pair<string, string>("RefAppId", *request->refAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->replicas)) {
    query->insert(pair<string, string>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->slice)) {
    query->insert(pair<string, bool>("Slice", *request->slice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sliceEnvs)) {
    query->insert(pair<string, string>("SliceEnvs", *request->sliceEnvs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsConfigs)) {
    query->insert(pair<string, string>("SlsConfigs", *request->slsConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->terminationGracePeriodSeconds)) {
    query->insert(pair<string, long>("TerminationGracePeriodSeconds", *request->terminationGracePeriodSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timezone)) {
    query->insert(pair<string, string>("Timezone", *request->timezone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tomcatConfig)) {
    query->insert(pair<string, string>("TomcatConfig", *request->tomcatConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerConfig)) {
    query->insert(pair<string, string>("TriggerConfig", *request->triggerConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warStartOptions)) {
    query->insert(pair<string, string>("WarStartOptions", *request->warStartOptions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webContainer)) {
    query->insert(pair<string, string>("WebContainer", *request->webContainer));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acrInstanceId)) {
    body->insert(pair<string, string>("AcrInstanceId", *request->acrInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configMapMountDesc)) {
    body->insert(pair<string, string>("ConfigMapMountDesc", *request->configMapMountDesc));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableImageAccl)) {
    body->insert(pair<string, bool>("EnableImageAccl", *request->enableImageAccl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAkId)) {
    body->insert(pair<string, string>("OssAkId", *request->ossAkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAkSecret)) {
    body->insert(pair<string, string>("OssAkSecret", *request->ossAkSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossMountDescs)) {
    body->insert(pair<string, string>("OssMountDescs", *request->ossMountDescs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->php)) {
    body->insert(pair<string, string>("Php", *request->php));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phpConfig)) {
    body->insert(pair<string, string>("PhpConfig", *request->phpConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateJob"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/job/updateJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateJobResponse(callApi(params, req, runtime));
}

UpdateJobResponse Alibabacloud_Sae20190506::Client::updateJob(shared_ptr<UpdateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateJobWithOptions(request, headers, runtime);
}

UpdateNamespaceResponse Alibabacloud_Sae20190506::Client::updateNamespaceWithOptions(shared_ptr<UpdateNamespaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableMicroRegistration)) {
    query->insert(pair<string, bool>("EnableMicroRegistration", *request->enableMicroRegistration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpaceShortId)) {
    query->insert(pair<string, string>("NameSpaceShortId", *request->nameSpaceShortId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceDescription)) {
    query->insert(pair<string, string>("NamespaceDescription", *request->namespaceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNamespace"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/paas/namespace"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNamespaceResponse(callApi(params, req, runtime));
}

UpdateNamespaceResponse Alibabacloud_Sae20190506::Client::updateNamespace(shared_ptr<UpdateNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateNamespaceWithOptions(request, headers, runtime);
}

UpdateNamespaceVpcResponse Alibabacloud_Sae20190506::Client::updateNamespaceVpcWithOptions(shared_ptr<UpdateNamespaceVpcRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpaceShortId)) {
    query->insert(pair<string, string>("NameSpaceShortId", *request->nameSpaceShortId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNamespaceVpc"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/namespace/updateNamespaceVpc"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNamespaceVpcResponse(callApi(params, req, runtime));
}

UpdateNamespaceVpcResponse Alibabacloud_Sae20190506::Client::updateNamespaceVpc(shared_ptr<UpdateNamespaceVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateNamespaceVpcWithOptions(request, headers, runtime);
}

UpdateSecretResponse Alibabacloud_Sae20190506::Client::updateSecretWithOptions(shared_ptr<UpdateSecretRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSecretShrinkRequest> request = make_shared<UpdateSecretShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateSecretRequestSecretData>(tmpReq->secretData)) {
    request->secretDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->secretData, make_shared<string>("SecretData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretDataShrink)) {
    query->insert(pair<string, string>("SecretData", *request->secretDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->secretId)) {
    query->insert(pair<string, long>("SecretId", *request->secretId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSecret"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/secret/secret"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSecretResponse(callApi(params, req, runtime));
}

UpdateSecretResponse Alibabacloud_Sae20190506::Client::updateSecret(shared_ptr<UpdateSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSecretWithOptions(request, headers, runtime);
}

UpdateWebApplicationResponse Alibabacloud_Sae20190506::Client::updateWebApplicationWithOptions(shared_ptr<string> ApplicationId,
                                                                                               shared_ptr<UpdateWebApplicationRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWebApplication"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/applications/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWebApplicationResponse(callApi(params, req, runtime));
}

UpdateWebApplicationResponse Alibabacloud_Sae20190506::Client::updateWebApplication(shared_ptr<string> ApplicationId, shared_ptr<UpdateWebApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

UpdateWebApplicationScalingConfigResponse Alibabacloud_Sae20190506::Client::updateWebApplicationScalingConfigWithOptions(shared_ptr<string> ApplicationId,
                                                                                                                         shared_ptr<UpdateWebApplicationScalingConfigRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWebApplicationScalingConfig"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-scaling/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWebApplicationScalingConfigResponse(callApi(params, req, runtime));
}

UpdateWebApplicationScalingConfigResponse Alibabacloud_Sae20190506::Client::updateWebApplicationScalingConfig(shared_ptr<string> ApplicationId, shared_ptr<UpdateWebApplicationScalingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWebApplicationScalingConfigWithOptions(ApplicationId, request, headers, runtime);
}

UpdateWebApplicationTrafficConfigResponse Alibabacloud_Sae20190506::Client::updateWebApplicationTrafficConfigWithOptions(shared_ptr<string> ApplicationId,
                                                                                                                         shared_ptr<UpdateWebApplicationTrafficConfigRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWebApplicationTrafficConfig"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/application-traffic/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ApplicationId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWebApplicationTrafficConfigResponse(callApi(params, req, runtime));
}

UpdateWebApplicationTrafficConfigResponse Alibabacloud_Sae20190506::Client::updateWebApplicationTrafficConfig(shared_ptr<string> ApplicationId, shared_ptr<UpdateWebApplicationTrafficConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWebApplicationTrafficConfigWithOptions(ApplicationId, request, headers, runtime);
}

UpdateWebCustomDomainResponse Alibabacloud_Sae20190506::Client::updateWebCustomDomainWithOptions(shared_ptr<string> DomainName,
                                                                                                 shared_ptr<UpdateWebCustomDomainRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWebCustomDomain"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v2/api/web/custom-domains/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DomainName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWebCustomDomainResponse(callApi(params, req, runtime));
}

UpdateWebCustomDomainResponse Alibabacloud_Sae20190506::Client::updateWebCustomDomain(shared_ptr<string> DomainName, shared_ptr<UpdateWebCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWebCustomDomainWithOptions(DomainName, request, headers, runtime);
}

UpgradeApplicationApmServiceResponse Alibabacloud_Sae20190506::Client::upgradeApplicationApmServiceWithOptions(shared_ptr<UpgradeApplicationApmServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeApplicationApmService"))},
    {"version", boost::any(string("2019-05-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/v1/sam/app/applicationApmService"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeApplicationApmServiceResponse(callApi(params, req, runtime));
}

UpgradeApplicationApmServiceResponse Alibabacloud_Sae20190506::Client::upgradeApplicationApmService(shared_ptr<UpgradeApplicationApmServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeApplicationApmServiceWithOptions(request, headers, runtime);
}

