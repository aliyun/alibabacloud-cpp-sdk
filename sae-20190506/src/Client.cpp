#include <darabonba/Core.hpp>
#include <alibabacloud/Sae20190506.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Sae20190506::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Sae20190506
{

AlibabaCloud::Sae20190506::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("sae", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Terminates a change order and rolls back the corresponding application.
 *
 * @param request AbortAndRollbackChangeOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortAndRollbackChangeOrderResponse
 */
AbortAndRollbackChangeOrderResponse Client::abortAndRollbackChangeOrderWithOptions(const AbortAndRollbackChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderId()) {
    query["ChangeOrderId"] = request.changeOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortAndRollbackChangeOrder"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/changeorder/AbortAndRollbackChangeOrder")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortAndRollbackChangeOrderResponse>();
}

/**
 * @summary Terminates a change order and rolls back the corresponding application.
 *
 * @param request AbortAndRollbackChangeOrderRequest
 * @return AbortAndRollbackChangeOrderResponse
 */
AbortAndRollbackChangeOrderResponse Client::abortAndRollbackChangeOrder(const AbortAndRollbackChangeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return abortAndRollbackChangeOrderWithOptions(request, headers, runtime);
}

/**
 * @summary Terminate a change order.
 *
 * @param request AbortChangeOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortChangeOrderResponse
 */
AbortChangeOrderResponse Client::abortChangeOrderWithOptions(const AbortChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderId()) {
    query["ChangeOrderId"] = request.changeOrderId();
  }

  if (!!request.hasRollback()) {
    query["Rollback"] = request.rollback();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortChangeOrder"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/changeorder/AbortChangeOrder")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortChangeOrderResponse>();
}

/**
 * @summary Terminate a change order.
 *
 * @param request AbortChangeOrderRequest
 * @return AbortChangeOrderResponse
 */
AbortChangeOrderResponse Client::abortChangeOrder(const AbortChangeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return abortChangeOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 批量重启应用
 *
 * @param request BatchRestartApplicationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchRestartApplicationsResponse
 */
BatchRestartApplicationsResponse Client::batchRestartApplicationsWithOptions(const BatchRestartApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchRestartApplications"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/batchRestartApplications")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchRestartApplicationsResponse>();
}

/**
 * @summary 批量重启应用
 *
 * @param request BatchRestartApplicationsRequest
 * @return BatchRestartApplicationsResponse
 */
BatchRestartApplicationsResponse Client::batchRestartApplications(const BatchRestartApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchRestartApplicationsWithOptions(request, headers, runtime);
}

/**
 * @summary Starts multiple applications at a time.
 *
 * @param request BatchStartApplicationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartApplicationsResponse
 */
BatchStartApplicationsResponse Client::batchStartApplicationsWithOptions(const BatchStartApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStartApplications"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/batchStartApplications")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStartApplicationsResponse>();
}

/**
 * @summary Starts multiple applications at a time.
 *
 * @param request BatchStartApplicationsRequest
 * @return BatchStartApplicationsResponse
 */
BatchStartApplicationsResponse Client::batchStartApplications(const BatchStartApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchStartApplicationsWithOptions(request, headers, runtime);
}

/**
 * @summary Stop applications in batches.
 *
 * @param request BatchStopApplicationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopApplicationsResponse
 */
BatchStopApplicationsResponse Client::batchStopApplicationsWithOptions(const BatchStopApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStopApplications"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/batchStopApplications")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStopApplicationsResponse>();
}

/**
 * @summary Stop applications in batches.
 *
 * @param request BatchStopApplicationsRequest
 * @return BatchStopApplicationsResponse
 */
BatchStopApplicationsResponse Client::batchStopApplications(const BatchStopApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchStopApplicationsWithOptions(request, headers, runtime);
}

/**
 * @summary Associates a Network Load Balancer (NLB) instance with an application.
 *
 * @param request BindNlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindNlbResponse
 */
BindNlbResponse Client::bindNlbWithOptions(const BindNlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasListeners()) {
    query["Listeners"] = request.listeners();
  }

  if (!!request.hasNlbId()) {
    query["NlbId"] = request.nlbId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.zoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindNlb"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/nlb")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindNlbResponse>();
}

/**
 * @summary Associates a Network Load Balancer (NLB) instance with an application.
 *
 * @param request BindNlbRequest
 * @return BindNlbResponse
 */
BindNlbResponse Client::bindNlb(const BindNlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindNlbWithOptions(request, headers, runtime);
}

/**
 * @param request BindSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindSlbResponse
 */
BindSlbResponse Client::bindSlbWithOptions(const BindSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasInternet()) {
    query["Internet"] = request.internet();
  }

  if (!!request.hasInternetSlbChargeType()) {
    query["InternetSlbChargeType"] = request.internetSlbChargeType();
  }

  if (!!request.hasInternetSlbId()) {
    query["InternetSlbId"] = request.internetSlbId();
  }

  if (!!request.hasIntranet()) {
    query["Intranet"] = request.intranet();
  }

  if (!!request.hasIntranetSlbChargeType()) {
    query["IntranetSlbChargeType"] = request.intranetSlbChargeType();
  }

  if (!!request.hasIntranetSlbId()) {
    query["IntranetSlbId"] = request.intranetSlbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindSlb"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/slb")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindSlbResponse>();
}

/**
 * @param request BindSlbRequest
 * @return BindSlbResponse
 */
BindSlbResponse Client::bindSlb(const BindSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Confirms whether to start the next batch.
 *
 * @param request ConfirmPipelineBatchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmPipelineBatchResponse
 */
ConfirmPipelineBatchResponse Client::confirmPipelineBatchWithOptions(const ConfirmPipelineBatchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfirm()) {
    query["Confirm"] = request.confirm();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfirmPipelineBatch"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/changeorder/ConfirmPipelineBatch")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmPipelineBatchResponse>();
}

/**
 * @summary Confirms whether to start the next batch.
 *
 * @param request ConfirmPipelineBatchRequest
 * @return ConfirmPipelineBatchResponse
 */
ConfirmPipelineBatchResponse Client::confirmPipelineBatch(const ConfirmPipelineBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return confirmPipelineBatchWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an application.
 *
 * @param tmpReq CreateApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApplicationShrinkRequest request = CreateApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInitContainersConfig()) {
    request.setInitContainersConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.initContainersConfig(), "InitContainersConfig", "json"));
  }

  if (!!tmpReq.hasSidecarContainersConfig()) {
    request.setSidecarContainersConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sidecarContainersConfig(), "SidecarContainersConfig", "json"));
  }

  json query = {};
  if (!!request.hasAcrAssumeRoleArn()) {
    query["AcrAssumeRoleArn"] = request.acrAssumeRoleArn();
  }

  if (!!request.hasAppDescription()) {
    query["AppDescription"] = request.appDescription();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAppSource()) {
    query["AppSource"] = request.appSource();
  }

  if (!!request.hasAutoConfig()) {
    query["AutoConfig"] = request.autoConfig();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasCommandArgs()) {
    query["CommandArgs"] = request.commandArgs();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.cpu();
  }

  if (!!request.hasCustomHostAlias()) {
    query["CustomHostAlias"] = request.customHostAlias();
  }

  if (!!request.hasCustomImageNetworkType()) {
    query["CustomImageNetworkType"] = request.customImageNetworkType();
  }

  if (!!request.hasDeploy()) {
    query["Deploy"] = request.deploy();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasDotnet()) {
    query["Dotnet"] = request.dotnet();
  }

  if (!!request.hasEdasContainerVersion()) {
    query["EdasContainerVersion"] = request.edasContainerVersion();
  }

  if (!!request.hasEnableCpuBurst()) {
    query["EnableCpuBurst"] = request.enableCpuBurst();
  }

  if (!!request.hasEnableEbpf()) {
    query["EnableEbpf"] = request.enableEbpf();
  }

  if (!!request.hasEnableNewArms()) {
    query["EnableNewArms"] = request.enableNewArms();
  }

  if (!!request.hasEnablePrometheus()) {
    query["EnablePrometheus"] = request.enablePrometheus();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.envs();
  }

  if (!!request.hasGpuConfig()) {
    query["GpuConfig"] = request.gpuConfig();
  }

  if (!!request.hasHeadlessPvtzDiscoverySvc()) {
    query["HeadlessPvtzDiscoverySvc"] = request.headlessPvtzDiscoverySvc();
  }

  if (!!request.hasHtml()) {
    query["Html"] = request.html();
  }

  if (!!request.hasImagePullSecrets()) {
    query["ImagePullSecrets"] = request.imagePullSecrets();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasIsStateful()) {
    query["IsStateful"] = request.isStateful();
  }

  if (!!request.hasJarStartArgs()) {
    query["JarStartArgs"] = request.jarStartArgs();
  }

  if (!!request.hasJarStartOptions()) {
    query["JarStartOptions"] = request.jarStartOptions();
  }

  if (!!request.hasJdk()) {
    query["Jdk"] = request.jdk();
  }

  if (!!request.hasKafkaConfigs()) {
    query["KafkaConfigs"] = request.kafkaConfigs();
  }

  if (!!request.hasLiveness()) {
    query["Liveness"] = request.liveness();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.memory();
  }

  if (!!request.hasMicroRegistration()) {
    query["MicroRegistration"] = request.microRegistration();
  }

  if (!!request.hasMicroserviceEngineConfig()) {
    query["MicroserviceEngineConfig"] = request.microserviceEngineConfig();
  }

  if (!!request.hasMountDesc()) {
    query["MountDesc"] = request.mountDesc();
  }

  if (!!request.hasMountHost()) {
    query["MountHost"] = request.mountHost();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasNasConfigs()) {
    query["NasConfigs"] = request.nasConfigs();
  }

  if (!!request.hasNasId()) {
    query["NasId"] = request.nasId();
  }

  if (!!request.hasNewSaeVersion()) {
    query["NewSaeVersion"] = request.newSaeVersion();
  }

  if (!!request.hasOidcRoleName()) {
    query["OidcRoleName"] = request.oidcRoleName();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.packageType();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.packageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.packageVersion();
  }

  if (!!request.hasPhpArmsConfigLocation()) {
    query["PhpArmsConfigLocation"] = request.phpArmsConfigLocation();
  }

  if (!!request.hasPhpConfigLocation()) {
    query["PhpConfigLocation"] = request.phpConfigLocation();
  }

  if (!!request.hasPostStart()) {
    query["PostStart"] = request.postStart();
  }

  if (!!request.hasPreStop()) {
    query["PreStop"] = request.preStop();
  }

  if (!!request.hasProgrammingLanguage()) {
    query["ProgrammingLanguage"] = request.programmingLanguage();
  }

  if (!!request.hasPvtzDiscoverySvc()) {
    query["PvtzDiscoverySvc"] = request.pvtzDiscoverySvc();
  }

  if (!!request.hasPython()) {
    query["Python"] = request.python();
  }

  if (!!request.hasPythonModules()) {
    query["PythonModules"] = request.pythonModules();
  }

  if (!!request.hasReadiness()) {
    query["Readiness"] = request.readiness();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSaeVersion()) {
    query["SaeVersion"] = request.saeVersion();
  }

  if (!!request.hasSecretMountDesc()) {
    query["SecretMountDesc"] = request.secretMountDesc();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasSlsConfigs()) {
    query["SlsConfigs"] = request.slsConfigs();
  }

  if (!!request.hasStartupProbe()) {
    query["StartupProbe"] = request.startupProbe();
  }

  if (!!request.hasTerminationGracePeriodSeconds()) {
    query["TerminationGracePeriodSeconds"] = request.terminationGracePeriodSeconds();
  }

  if (!!request.hasTimezone()) {
    query["Timezone"] = request.timezone();
  }

  if (!!request.hasTomcatConfig()) {
    query["TomcatConfig"] = request.tomcatConfig();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasWarStartOptions()) {
    query["WarStartOptions"] = request.warStartOptions();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.webContainer();
  }

  json body = {};
  if (!!request.hasAcrInstanceId()) {
    body["AcrInstanceId"] = request.acrInstanceId();
  }

  if (!!request.hasAssociateEip()) {
    body["AssociateEip"] = request.associateEip();
  }

  if (!!request.hasBaseAppId()) {
    body["BaseAppId"] = request.baseAppId();
  }

  if (!!request.hasConfigMapMountDesc()) {
    body["ConfigMapMountDesc"] = request.configMapMountDesc();
  }

  if (!!request.hasEmptyDirDesc()) {
    body["EmptyDirDesc"] = request.emptyDirDesc();
  }

  if (!!request.hasEnableSidecarResourceIsolated()) {
    body["EnableSidecarResourceIsolated"] = request.enableSidecarResourceIsolated();
  }

  if (!!request.hasInitContainersConfigShrink()) {
    body["InitContainersConfig"] = request.initContainersConfigShrink();
  }

  if (!!request.hasMicroRegistrationConfig()) {
    body["MicroRegistrationConfig"] = request.microRegistrationConfig();
  }

  if (!!request.hasOssAkId()) {
    body["OssAkId"] = request.ossAkId();
  }

  if (!!request.hasOssAkSecret()) {
    body["OssAkSecret"] = request.ossAkSecret();
  }

  if (!!request.hasOssMountDescs()) {
    body["OssMountDescs"] = request.ossMountDescs();
  }

  if (!!request.hasPhp()) {
    body["Php"] = request.php();
  }

  if (!!request.hasPhpConfig()) {
    body["PhpConfig"] = request.phpConfig();
  }

  if (!!request.hasServiceTags()) {
    body["ServiceTags"] = request.serviceTags();
  }

  if (!!request.hasSidecarContainersConfigShrink()) {
    body["SidecarContainersConfig"] = request.sidecarContainersConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/createApplication")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary Creates an application.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Null
 *
 * @description The HTTP status code. Take note of the following rules:
 * *   **2xx**: The call was successful.
 * *   **3xx**: The call was redirected.
 * *   **4xx**: The call failed.
 * *   **5xx**: A server error occurred.
 *
 * @param request CreateApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationScalingRuleResponse
 */
CreateApplicationScalingRuleResponse Client::createApplicationScalingRuleWithOptions(const CreateApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEnableIdle()) {
    query["EnableIdle"] = request.enableIdle();
  }

  if (!!request.hasMinReadyInstanceRatio()) {
    query["MinReadyInstanceRatio"] = request.minReadyInstanceRatio();
  }

  if (!!request.hasMinReadyInstances()) {
    query["MinReadyInstances"] = request.minReadyInstances();
  }

  if (!!request.hasScalingRuleEnable()) {
    query["ScalingRuleEnable"] = request.scalingRuleEnable();
  }

  if (!!request.hasScalingRuleMetric()) {
    query["ScalingRuleMetric"] = request.scalingRuleMetric();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  if (!!request.hasScalingRuleTimer()) {
    query["ScalingRuleTimer"] = request.scalingRuleTimer();
  }

  if (!!request.hasScalingRuleType()) {
    query["ScalingRuleType"] = request.scalingRuleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationScalingRule"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/scale/applicationScalingRule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationScalingRuleResponse>();
}

/**
 * @summary Null
 *
 * @description The HTTP status code. Take note of the following rules:
 * *   **2xx**: The call was successful.
 * *   **3xx**: The call was redirected.
 * *   **4xx**: The call failed.
 * *   **5xx**: A server error occurred.
 *
 * @param request CreateApplicationScalingRuleRequest
 * @return CreateApplicationScalingRuleResponse
 */
CreateApplicationScalingRuleResponse Client::createApplicationScalingRule(const CreateApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Create a ConfigMap in a namespace.
 *
 * @param request CreateConfigMapRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigMapResponse
 */
CreateConfigMapResponse Client::createConfigMapWithOptions(const CreateConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConfigMap"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/configmap/configMap")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigMapResponse>();
}

/**
 * @summary Create a ConfigMap in a namespace.
 *
 * @param request CreateConfigMapRequest
 * @return CreateConfigMapResponse
 */
CreateConfigMapResponse Client::createConfigMap(const CreateConfigMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConfigMapWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a canary release rule for a Spring Cloud or Dubbo application.
 *
 * @description >  You can configure only one canary release rule for each application.
 *
 * @param request CreateGreyTagRouteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGreyTagRouteResponse
 */
CreateGreyTagRouteResponse Client::createGreyTagRouteWithOptions(const CreateGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlbRules()) {
    query["AlbRules"] = request.albRules();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDubboRules()) {
    query["DubboRules"] = request.dubboRules();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasScRules()) {
    query["ScRules"] = request.scRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGreyTagRoute"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/tagroute/greyTagRoute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGreyTagRouteResponse>();
}

/**
 * @summary Creates a canary release rule for a Spring Cloud or Dubbo application.
 *
 * @description >  You can configure only one canary release rule for each application.
 *
 * @param request CreateGreyTagRouteRequest
 * @return CreateGreyTagRouteResponse
 */
CreateGreyTagRouteResponse Client::createGreyTagRoute(const CreateGreyTagRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGreyTagRouteWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a routing rule.
 *
 * @param request CreateIngressRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIngressResponse
 */
CreateIngressResponse Client::createIngressWithOptions(const CreateIngressRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  if (!!request.hasCertIds()) {
    query["CertIds"] = request.certIds();
  }

  if (!!request.hasCorsConfig()) {
    query["CorsConfig"] = request.corsConfig();
  }

  if (!!request.hasDefaultRule()) {
    query["DefaultRule"] = request.defaultRule();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnableGzip()) {
    query["EnableGzip"] = request.enableGzip();
  }

  if (!!request.hasEnableXForwardedFor()) {
    query["EnableXForwardedFor"] = request.enableXForwardedFor();
  }

  if (!!request.hasEnableXForwardedForClientSrcPort()) {
    query["EnableXForwardedForClientSrcPort"] = request.enableXForwardedForClientSrcPort();
  }

  if (!!request.hasEnableXForwardedForProto()) {
    query["EnableXForwardedForProto"] = request.enableXForwardedForProto();
  }

  if (!!request.hasEnableXForwardedForSlbId()) {
    query["EnableXForwardedForSlbId"] = request.enableXForwardedForSlbId();
  }

  if (!!request.hasEnableXForwardedForSlbPort()) {
    query["EnableXForwardedForSlbPort"] = request.enableXForwardedForSlbPort();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.idleTimeout();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalanceType()) {
    query["LoadBalanceType"] = request.loadBalanceType();
  }

  if (!!request.hasLoadBalancerEdition()) {
    query["LoadBalancerEdition"] = request.loadBalancerEdition();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.requestTimeout();
  }

  if (!!request.hasSecurityPolicyId()) {
    query["SecurityPolicyId"] = request.securityPolicyId();
  }

  if (!!request.hasSlbId()) {
    query["SlbId"] = request.slbId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.zoneMappings();
  }

  json body = {};
  if (!!request.hasRules()) {
    body["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIngress"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/ingress/Ingress")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIngressResponse>();
}

/**
 * @summary Creates a routing rule.
 *
 * @param request CreateIngressRequest
 * @return CreateIngressResponse
 */
CreateIngressResponse Client::createIngress(const CreateIngressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIngressWithOptions(request, headers, runtime);
}

/**
 * @summary Create a job template.
 *
 * @param request CreateJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJobWithOptions(const CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcrAssumeRoleArn()) {
    query["AcrAssumeRoleArn"] = request.acrAssumeRoleArn();
  }

  if (!!request.hasAppDescription()) {
    query["AppDescription"] = request.appDescription();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAutoConfig()) {
    query["AutoConfig"] = request.autoConfig();
  }

  if (!!request.hasBackoffLimit()) {
    query["BackoffLimit"] = request.backoffLimit();
  }

  if (!!request.hasBestEffortType()) {
    query["BestEffortType"] = request.bestEffortType();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasCommandArgs()) {
    query["CommandArgs"] = request.commandArgs();
  }

  if (!!request.hasConcurrencyPolicy()) {
    query["ConcurrencyPolicy"] = request.concurrencyPolicy();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.cpu();
  }

  if (!!request.hasCustomHostAlias()) {
    query["CustomHostAlias"] = request.customHostAlias();
  }

  if (!!request.hasEdasContainerVersion()) {
    query["EdasContainerVersion"] = request.edasContainerVersion();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.envs();
  }

  if (!!request.hasImagePullSecrets()) {
    query["ImagePullSecrets"] = request.imagePullSecrets();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasJarStartArgs()) {
    query["JarStartArgs"] = request.jarStartArgs();
  }

  if (!!request.hasJarStartOptions()) {
    query["JarStartOptions"] = request.jarStartOptions();
  }

  if (!!request.hasJdk()) {
    query["Jdk"] = request.jdk();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.memory();
  }

  if (!!request.hasMountDesc()) {
    query["MountDesc"] = request.mountDesc();
  }

  if (!!request.hasMountHost()) {
    query["MountHost"] = request.mountHost();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasNasConfigs()) {
    query["NasConfigs"] = request.nasConfigs();
  }

  if (!!request.hasNasId()) {
    query["NasId"] = request.nasId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.packageType();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.packageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.packageVersion();
  }

  if (!!request.hasPhpConfigLocation()) {
    query["PhpConfigLocation"] = request.phpConfigLocation();
  }

  if (!!request.hasPostStart()) {
    query["PostStart"] = request.postStart();
  }

  if (!!request.hasPreStop()) {
    query["PreStop"] = request.preStop();
  }

  if (!!request.hasProgrammingLanguage()) {
    query["ProgrammingLanguage"] = request.programmingLanguage();
  }

  if (!!request.hasPython()) {
    query["Python"] = request.python();
  }

  if (!!request.hasPythonModules()) {
    query["PythonModules"] = request.pythonModules();
  }

  if (!!request.hasRefAppId()) {
    query["RefAppId"] = request.refAppId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasSlice()) {
    query["Slice"] = request.slice();
  }

  if (!!request.hasSliceEnvs()) {
    query["SliceEnvs"] = request.sliceEnvs();
  }

  if (!!request.hasSlsConfigs()) {
    query["SlsConfigs"] = request.slsConfigs();
  }

  if (!!request.hasTerminationGracePeriodSeconds()) {
    query["TerminationGracePeriodSeconds"] = request.terminationGracePeriodSeconds();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  if (!!request.hasTimezone()) {
    query["Timezone"] = request.timezone();
  }

  if (!!request.hasTomcatConfig()) {
    query["TomcatConfig"] = request.tomcatConfig();
  }

  if (!!request.hasTriggerConfig()) {
    query["TriggerConfig"] = request.triggerConfig();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasWarStartOptions()) {
    query["WarStartOptions"] = request.warStartOptions();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.webContainer();
  }

  if (!!request.hasWorkload()) {
    query["Workload"] = request.workload();
  }

  json body = {};
  if (!!request.hasAcrInstanceId()) {
    body["AcrInstanceId"] = request.acrInstanceId();
  }

  if (!!request.hasConfigMapMountDesc()) {
    body["ConfigMapMountDesc"] = request.configMapMountDesc();
  }

  if (!!request.hasEnableImageAccl()) {
    body["EnableImageAccl"] = request.enableImageAccl();
  }

  if (!!request.hasOssAkId()) {
    body["OssAkId"] = request.ossAkId();
  }

  if (!!request.hasOssAkSecret()) {
    body["OssAkSecret"] = request.ossAkSecret();
  }

  if (!!request.hasOssMountDescs()) {
    body["OssMountDescs"] = request.ossMountDescs();
  }

  if (!!request.hasPhpConfig()) {
    body["PhpConfig"] = request.phpConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateJob"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/createJob")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobResponse>();
}

/**
 * @summary Create a job template.
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createJobWithOptions(request, headers, runtime);
}

/**
 * @summary Create a namespace.
 *
 * @param request CreateNamespaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespaceWithOptions(const CreateNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableMicroRegistration()) {
    query["EnableMicroRegistration"] = request.enableMicroRegistration();
  }

  if (!!request.hasNameSpaceShortId()) {
    query["NameSpaceShortId"] = request.nameSpaceShortId();
  }

  if (!!request.hasNamespaceDescription()) {
    query["NamespaceDescription"] = request.namespaceDescription();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNamespace"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/namespace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNamespaceResponse>();
}

/**
 * @summary Create a namespace.
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createNamespaceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建或者更新泳道
 *
 * @param tmpReq CreateOrUpdateSwimmingLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateSwimmingLaneResponse
 */
CreateOrUpdateSwimmingLaneResponse Client::createOrUpdateSwimmingLaneWithOptions(const CreateOrUpdateSwimmingLaneRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOrUpdateSwimmingLaneShrinkRequest request = CreateOrUpdateSwimmingLaneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAppEntryRule()) {
    request.setAppEntryRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.appEntryRule(), "AppEntryRule", "json"));
  }

  if (!!tmpReq.hasMseGatewayEntryRule()) {
    request.setMseGatewayEntryRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.mseGatewayEntryRule(), "MseGatewayEntryRule", "json"));
  }

  json query = {};
  if (!!request.hasAppEntryRuleShrink()) {
    query["AppEntryRule"] = request.appEntryRuleShrink();
  }

  if (!!request.hasCanaryModel()) {
    query["CanaryModel"] = request.canaryModel();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLaneId()) {
    query["LaneId"] = request.laneId();
  }

  if (!!request.hasLaneName()) {
    query["LaneName"] = request.laneName();
  }

  if (!!request.hasLaneTag()) {
    query["LaneTag"] = request.laneTag();
  }

  if (!!request.hasMseGatewayEntryRuleShrink()) {
    query["MseGatewayEntryRule"] = request.mseGatewayEntryRuleShrink();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateSwimmingLane"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/createOrUpdateSwimmingLane")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateSwimmingLaneResponse>();
}

/**
 * @summary 创建或者更新泳道
 *
 * @param request CreateOrUpdateSwimmingLaneRequest
 * @return CreateOrUpdateSwimmingLaneResponse
 */
CreateOrUpdateSwimmingLaneResponse Client::createOrUpdateSwimmingLane(const CreateOrUpdateSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createOrUpdateSwimmingLaneWithOptions(request, headers, runtime);
}

/**
 * @summary 创建或者更新泳道组
 *
 * @param tmpReq CreateOrUpdateSwimmingLaneGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateSwimmingLaneGroupResponse
 */
CreateOrUpdateSwimmingLaneGroupResponse Client::createOrUpdateSwimmingLaneGroupWithOptions(const CreateOrUpdateSwimmingLaneGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOrUpdateSwimmingLaneGroupShrinkRequest request = CreateOrUpdateSwimmingLaneGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAppIds()) {
    request.setAppIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.appIds(), "AppIds", "json"));
  }

  json query = {};
  if (!!request.hasAppIdsShrink()) {
    query["AppIds"] = request.appIdsShrink();
  }

  if (!!request.hasEntryAppId()) {
    query["EntryAppId"] = request.entryAppId();
  }

  if (!!request.hasEntryAppType()) {
    query["EntryAppType"] = request.entryAppType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasSwimVersion()) {
    query["SwimVersion"] = request.swimVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateSwimmingLaneGroup"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/createOrUpdateSwimmingLaneGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateSwimmingLaneGroupResponse>();
}

/**
 * @summary 创建或者更新泳道组
 *
 * @param request CreateOrUpdateSwimmingLaneGroupRequest
 * @return CreateOrUpdateSwimmingLaneGroupResponse
 */
CreateOrUpdateSwimmingLaneGroupResponse Client::createOrUpdateSwimmingLaneGroup(const CreateOrUpdateSwimmingLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createOrUpdateSwimmingLaneGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a Secret in a namespace.
 *
 * @param tmpReq CreateSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecretResponse
 */
CreateSecretResponse Client::createSecretWithOptions(const CreateSecretRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecretShrinkRequest request = CreateSecretShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSecretData()) {
    request.setSecretDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.secretData(), "SecretData", "json"));
  }

  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasSecretDataShrink()) {
    query["SecretData"] = request.secretDataShrink();
  }

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.secretName();
  }

  if (!!request.hasSecretType()) {
    query["SecretType"] = request.secretType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecret"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/secret/secret")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecretResponse>();
}

/**
 * @summary Creates a Secret in a namespace.
 *
 * @param request CreateSecretRequest
 * @return CreateSecretResponse
 */
CreateSecretResponse Client::createSecret(const CreateSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSecretWithOptions(request, headers, runtime);
}

/**
 * @summary Create a web application
 *
 * @description Call the CreateWebApplication operation to create a web application.
 *
 * @param request CreateWebApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebApplicationResponse
 */
CreateWebApplicationResponse Client::createWebApplicationWithOptions(const CreateWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateWebApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/applications")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebApplicationResponse>();
}

/**
 * @summary Create a web application
 *
 * @description Call the CreateWebApplication operation to create a web application.
 *
 * @param request CreateWebApplicationRequest
 * @return CreateWebApplicationResponse
 */
CreateWebApplicationResponse Client::createWebApplication(const CreateWebApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWebApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Create a custom domain name for the web application.
 *
 * @description Create a custom domain name for the web application.
 *
 * @param request CreateWebCustomDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebCustomDomainResponse
 */
CreateWebCustomDomainResponse Client::createWebCustomDomainWithOptions(const CreateWebCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateWebCustomDomain"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/custom-domains")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebCustomDomainResponse>();
}

/**
 * @summary Create a custom domain name for the web application.
 *
 * @description Create a custom domain name for the web application.
 *
 * @param request CreateWebCustomDomainRequest
 * @return CreateWebCustomDomainResponse
 */
CreateWebCustomDomainResponse Client::createWebCustomDomain(const CreateWebCustomDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWebCustomDomainWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an application.
 *
 * @param request DeleteApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/deleteApplication")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary Deletes an application.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary 7171a6ca-d1cd-4928-8642-7d5cfe69\\*\\*\\*\\*
 *
 * @param request DeleteApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationScalingRuleResponse
 */
DeleteApplicationScalingRuleResponse Client::deleteApplicationScalingRuleWithOptions(const DeleteApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationScalingRule"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/scale/applicationScalingRule")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationScalingRuleResponse>();
}

/**
 * @summary 7171a6ca-d1cd-4928-8642-7d5cfe69\\*\\*\\*\\*
 *
 * @param request DeleteApplicationScalingRuleRequest
 * @return DeleteApplicationScalingRuleResponse
 */
DeleteApplicationScalingRuleResponse Client::deleteApplicationScalingRule(const DeleteApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a ConfigMap.
 *
 * @param request DeleteConfigMapRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigMapResponse
 */
DeleteConfigMapResponse Client::deleteConfigMapWithOptions(const DeleteConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigMapId()) {
    query["ConfigMapId"] = request.configMapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfigMap"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/configmap/configMap")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigMapResponse>();
}

/**
 * @summary Deletes a ConfigMap.
 *
 * @param request DeleteConfigMapRequest
 * @return DeleteConfigMapResponse
 */
DeleteConfigMapResponse Client::deleteConfigMap(const DeleteConfigMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConfigMapWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a canary release rule based on the specified rule ID.
 *
 * @param request DeleteGreyTagRouteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGreyTagRouteResponse
 */
DeleteGreyTagRouteResponse Client::deleteGreyTagRouteWithOptions(const DeleteGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGreyTagRouteId()) {
    query["GreyTagRouteId"] = request.greyTagRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGreyTagRoute"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/tagroute/greyTagRoute")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGreyTagRouteResponse>();
}

/**
 * @summary Deletes a canary release rule based on the specified rule ID.
 *
 * @param request DeleteGreyTagRouteRequest
 * @return DeleteGreyTagRouteResponse
 */
DeleteGreyTagRouteResponse Client::deleteGreyTagRoute(const DeleteGreyTagRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGreyTagRouteWithOptions(request, headers, runtime);
}

/**
 * @summary Delete a job.
 *
 * @param request DeleteHistoryJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHistoryJobResponse
 */
DeleteHistoryJobResponse Client::deleteHistoryJobWithOptions(const DeleteHistoryJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHistoryJob"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/deleteHistoryJob")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHistoryJobResponse>();
}

/**
 * @summary Delete a job.
 *
 * @param request DeleteHistoryJobRequest
 * @return DeleteHistoryJobResponse
 */
DeleteHistoryJobResponse Client::deleteHistoryJob(const DeleteHistoryJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHistoryJobWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a routing rule.
 *
 * @param request DeleteIngressRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIngressResponse
 */
DeleteIngressResponse Client::deleteIngressWithOptions(const DeleteIngressRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIngressId()) {
    query["IngressId"] = request.ingressId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIngress"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/ingress/Ingress")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIngressResponse>();
}

/**
 * @summary Deletes a routing rule.
 *
 * @param request DeleteIngressRequest
 * @return DeleteIngressResponse
 */
DeleteIngressResponse Client::deleteIngress(const DeleteIngressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIngressWithOptions(request, headers, runtime);
}

/**
 * @summary 删除实例
 *
 * @param request DeleteInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstancesResponse
 */
DeleteInstancesResponse Client::deleteInstancesWithOptions(const DeleteInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstances"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/deleteInstances")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstancesResponse>();
}

/**
 * @summary 删除实例
 *
 * @param request DeleteInstancesRequest
 * @return DeleteInstancesResponse
 */
DeleteInstancesResponse Client::deleteInstances(const DeleteInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Delete a job template.
 *
 * @param request DeleteJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobResponse
 */
DeleteJobResponse Client::deleteJobWithOptions(const DeleteJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJob"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/deleteJob")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobResponse>();
}

/**
 * @summary Delete a job template.
 *
 * @param request DeleteJobRequest
 * @return DeleteJobResponse
 */
DeleteJobResponse Client::deleteJob(const DeleteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteJobWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a namespace.
 *
 * @param request DeleteNamespaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespaceWithOptions(const DeleteNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNameSpaceShortId()) {
    query["NameSpaceShortId"] = request.nameSpaceShortId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNamespace"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/namespace")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNamespaceResponse>();
}

/**
 * @summary Deletes a namespace.
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteNamespaceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a Secret.
 *
 * @param request DeleteSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretResponse
 */
DeleteSecretResponse Client::deleteSecretWithOptions(const DeleteSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecret"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/secret/secret")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecretResponse>();
}

/**
 * @summary Deletes a Secret.
 *
 * @param request DeleteSecretRequest
 * @return DeleteSecretResponse
 */
DeleteSecretResponse Client::deleteSecret(const DeleteSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSecretWithOptions(request, headers, runtime);
}

/**
 * @summary 删除泳道组
 *
 * @param request DeleteSwimmingLaneGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSwimmingLaneGroupResponse
 */
DeleteSwimmingLaneGroupResponse Client::deleteSwimmingLaneGroupWithOptions(const DeleteSwimmingLaneGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSwimmingLaneGroup"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/deleteSwimmingLaneGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSwimmingLaneGroupResponse>();
}

/**
 * @summary 删除泳道组
 *
 * @param request DeleteSwimmingLaneGroupRequest
 * @return DeleteSwimmingLaneGroupResponse
 */
DeleteSwimmingLaneGroupResponse Client::deleteSwimmingLaneGroup(const DeleteSwimmingLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSwimmingLaneGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Delete a web application.
 *
 * @description Call the DeleteWebApplication operation to delete a web application.
 *
 * @param request DeleteWebApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebApplicationResponse
 */
DeleteWebApplicationResponse Client::deleteWebApplicationWithOptions(const string &ApplicationId, const DeleteWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/applications/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebApplicationResponse>();
}

/**
 * @summary Delete a web application.
 *
 * @description Call the DeleteWebApplication operation to delete a web application.
 *
 * @param request DeleteWebApplicationRequest
 * @return DeleteWebApplicationResponse
 */
DeleteWebApplicationResponse Client::deleteWebApplication(const string &ApplicationId, const DeleteWebApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Delete a web application version.
 *
 * @description Delete a web application version.
 *
 * @param request DeleteWebApplicationRevisionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebApplicationRevisionResponse
 */
DeleteWebApplicationRevisionResponse Client::deleteWebApplicationRevisionWithOptions(const string &ApplicationId, const string &RevisionId, const DeleteWebApplicationRevisionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebApplicationRevision"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-revisions/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/revisions/" , Darabonba::Encode::Encoder::percentEncode(RevisionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebApplicationRevisionResponse>();
}

/**
 * @summary Delete a web application version.
 *
 * @description Delete a web application version.
 *
 * @param request DeleteWebApplicationRevisionRequest
 * @return DeleteWebApplicationRevisionResponse
 */
DeleteWebApplicationRevisionResponse Client::deleteWebApplicationRevision(const string &ApplicationId, const string &RevisionId, const DeleteWebApplicationRevisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWebApplicationRevisionWithOptions(ApplicationId, RevisionId, request, headers, runtime);
}

/**
 * @summary Delete a custom domain name.
 *
 * @description Delete a custom domain name.
 *
 * @param request DeleteWebCustomDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebCustomDomainResponse
 */
DeleteWebCustomDomainResponse Client::deleteWebCustomDomainWithOptions(const string &DomainName, const DeleteWebCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebCustomDomain"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(DomainName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebCustomDomainResponse>();
}

/**
 * @summary Delete a custom domain name.
 *
 * @description Delete a custom domain name.
 *
 * @param request DeleteWebCustomDomainRequest
 * @return DeleteWebCustomDomainResponse
 */
DeleteWebCustomDomainResponse Client::deleteWebCustomDomain(const string &DomainName, const DeleteWebCustomDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWebCustomDomainWithOptions(DomainName, request, headers, runtime);
}

/**
 * @summary Deploys an application.
 *
 * @param tmpReq DeployApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployApplicationResponse
 */
DeployApplicationResponse Client::deployApplicationWithOptions(const DeployApplicationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeployApplicationShrinkRequest request = DeployApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInitContainersConfig()) {
    request.setInitContainersConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.initContainersConfig(), "InitContainersConfig", "json"));
  }

  if (!!tmpReq.hasSidecarContainersConfig()) {
    request.setSidecarContainersConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sidecarContainersConfig(), "SidecarContainersConfig", "json"));
  }

  json query = {};
  if (!!request.hasAcrAssumeRoleArn()) {
    query["AcrAssumeRoleArn"] = request.acrAssumeRoleArn();
  }

  if (!!request.hasAlbIngressReadinessGate()) {
    query["AlbIngressReadinessGate"] = request.albIngressReadinessGate();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAutoEnableApplicationScalingRule()) {
    query["AutoEnableApplicationScalingRule"] = request.autoEnableApplicationScalingRule();
  }

  if (!!request.hasBatchWaitTime()) {
    query["BatchWaitTime"] = request.batchWaitTime();
  }

  if (!!request.hasChangeOrderDesc()) {
    query["ChangeOrderDesc"] = request.changeOrderDesc();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasCommandArgs()) {
    query["CommandArgs"] = request.commandArgs();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.cpu();
  }

  if (!!request.hasCustomHostAlias()) {
    query["CustomHostAlias"] = request.customHostAlias();
  }

  if (!!request.hasCustomImageNetworkType()) {
    query["CustomImageNetworkType"] = request.customImageNetworkType();
  }

  if (!!request.hasDeploy()) {
    query["Deploy"] = request.deploy();
  }

  if (!!request.hasDotnet()) {
    query["Dotnet"] = request.dotnet();
  }

  if (!!request.hasEdasContainerVersion()) {
    query["EdasContainerVersion"] = request.edasContainerVersion();
  }

  if (!!request.hasEnableAhas()) {
    query["EnableAhas"] = request.enableAhas();
  }

  if (!!request.hasEnableCpuBurst()) {
    query["EnableCpuBurst"] = request.enableCpuBurst();
  }

  if (!!request.hasEnableGreyTagRoute()) {
    query["EnableGreyTagRoute"] = request.enableGreyTagRoute();
  }

  if (!!request.hasEnableNewArms()) {
    query["EnableNewArms"] = request.enableNewArms();
  }

  if (!!request.hasEnablePrometheus()) {
    query["EnablePrometheus"] = request.enablePrometheus();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.envs();
  }

  if (!!request.hasGpuConfig()) {
    query["GpuConfig"] = request.gpuConfig();
  }

  if (!!request.hasHtml()) {
    query["Html"] = request.html();
  }

  if (!!request.hasImagePullSecrets()) {
    query["ImagePullSecrets"] = request.imagePullSecrets();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasJarStartArgs()) {
    query["JarStartArgs"] = request.jarStartArgs();
  }

  if (!!request.hasJarStartOptions()) {
    query["JarStartOptions"] = request.jarStartOptions();
  }

  if (!!request.hasJdk()) {
    query["Jdk"] = request.jdk();
  }

  if (!!request.hasKafkaConfigs()) {
    query["KafkaConfigs"] = request.kafkaConfigs();
  }

  if (!!request.hasLiveness()) {
    query["Liveness"] = request.liveness();
  }

  if (!!request.hasMaxSurgeInstanceRatio()) {
    query["MaxSurgeInstanceRatio"] = request.maxSurgeInstanceRatio();
  }

  if (!!request.hasMaxSurgeInstances()) {
    query["MaxSurgeInstances"] = request.maxSurgeInstances();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.memory();
  }

  if (!!request.hasMicroRegistration()) {
    query["MicroRegistration"] = request.microRegistration();
  }

  if (!!request.hasMicroserviceEngineConfig()) {
    query["MicroserviceEngineConfig"] = request.microserviceEngineConfig();
  }

  if (!!request.hasMinReadyInstanceRatio()) {
    query["MinReadyInstanceRatio"] = request.minReadyInstanceRatio();
  }

  if (!!request.hasMinReadyInstances()) {
    query["MinReadyInstances"] = request.minReadyInstances();
  }

  if (!!request.hasMountDesc()) {
    query["MountDesc"] = request.mountDesc();
  }

  if (!!request.hasMountHost()) {
    query["MountHost"] = request.mountHost();
  }

  if (!!request.hasNasConfigs()) {
    query["NasConfigs"] = request.nasConfigs();
  }

  if (!!request.hasNasId()) {
    query["NasId"] = request.nasId();
  }

  if (!!request.hasNewSaeVersion()) {
    query["NewSaeVersion"] = request.newSaeVersion();
  }

  if (!!request.hasOidcRoleName()) {
    query["OidcRoleName"] = request.oidcRoleName();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.packageType();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.packageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.packageVersion();
  }

  if (!!request.hasPhpArmsConfigLocation()) {
    query["PhpArmsConfigLocation"] = request.phpArmsConfigLocation();
  }

  if (!!request.hasPhpConfigLocation()) {
    query["PhpConfigLocation"] = request.phpConfigLocation();
  }

  if (!!request.hasPostStart()) {
    query["PostStart"] = request.postStart();
  }

  if (!!request.hasPreStop()) {
    query["PreStop"] = request.preStop();
  }

  if (!!request.hasPvtzDiscoverySvc()) {
    query["PvtzDiscoverySvc"] = request.pvtzDiscoverySvc();
  }

  if (!!request.hasPython()) {
    query["Python"] = request.python();
  }

  if (!!request.hasPythonModules()) {
    query["PythonModules"] = request.pythonModules();
  }

  if (!!request.hasReadiness()) {
    query["Readiness"] = request.readiness();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasSecretMountDesc()) {
    query["SecretMountDesc"] = request.secretMountDesc();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasSlsConfigs()) {
    query["SlsConfigs"] = request.slsConfigs();
  }

  if (!!request.hasStartupProbe()) {
    query["StartupProbe"] = request.startupProbe();
  }

  if (!!request.hasTerminationGracePeriodSeconds()) {
    query["TerminationGracePeriodSeconds"] = request.terminationGracePeriodSeconds();
  }

  if (!!request.hasTimezone()) {
    query["Timezone"] = request.timezone();
  }

  if (!!request.hasTomcatConfig()) {
    query["TomcatConfig"] = request.tomcatConfig();
  }

  if (!!request.hasUpdateStrategy()) {
    query["UpdateStrategy"] = request.updateStrategy();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasWarStartOptions()) {
    query["WarStartOptions"] = request.warStartOptions();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.webContainer();
  }

  json body = {};
  if (!!request.hasAcrInstanceId()) {
    body["AcrInstanceId"] = request.acrInstanceId();
  }

  if (!!request.hasAssociateEip()) {
    body["AssociateEip"] = request.associateEip();
  }

  if (!!request.hasConfigMapMountDesc()) {
    body["ConfigMapMountDesc"] = request.configMapMountDesc();
  }

  if (!!request.hasEmptyDirDesc()) {
    body["EmptyDirDesc"] = request.emptyDirDesc();
  }

  if (!!request.hasEnableSidecarResourceIsolated()) {
    body["EnableSidecarResourceIsolated"] = request.enableSidecarResourceIsolated();
  }

  if (!!request.hasInitContainersConfigShrink()) {
    body["InitContainersConfig"] = request.initContainersConfigShrink();
  }

  if (!!request.hasMicroRegistrationConfig()) {
    body["MicroRegistrationConfig"] = request.microRegistrationConfig();
  }

  if (!!request.hasOssAkId()) {
    body["OssAkId"] = request.ossAkId();
  }

  if (!!request.hasOssAkSecret()) {
    body["OssAkSecret"] = request.ossAkSecret();
  }

  if (!!request.hasOssMountDescs()) {
    body["OssMountDescs"] = request.ossMountDescs();
  }

  if (!!request.hasPhp()) {
    body["Php"] = request.php();
  }

  if (!!request.hasPhpConfig()) {
    body["PhpConfig"] = request.phpConfig();
  }

  if (!!request.hasServiceTags()) {
    body["ServiceTags"] = request.serviceTags();
  }

  if (!!request.hasSidecarContainersConfigShrink()) {
    body["SidecarContainersConfig"] = request.sidecarContainersConfigShrink();
  }

  if (!!request.hasSwimlanePvtzDiscoverySvc()) {
    body["SwimlanePvtzDiscoverySvc"] = request.swimlanePvtzDiscoverySvc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeployApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/deployApplication")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployApplicationResponse>();
}

/**
 * @summary Deploys an application.
 *
 * @param request DeployApplicationRequest
 * @return DeployApplicationResponse
 */
DeployApplicationResponse Client::deployApplication(const DeployApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the metadata details of the service of an application.
 *
 * @param request DescribeAppServiceDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppServiceDetailResponse
 */
DescribeAppServiceDetailResponse Client::describeAppServiceDetailWithOptions(const DescribeAppServiceDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasNacosInstanceId()) {
    query["NacosInstanceId"] = request.nacosInstanceId();
  }

  if (!!request.hasNacosNamespaceId()) {
    query["NacosNamespaceId"] = request.nacosNamespaceId();
  }

  if (!!request.hasServiceGroup()) {
    query["ServiceGroup"] = request.serviceGroup();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.serviceVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppServiceDetail"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/service/describeAppServiceDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppServiceDetailResponse>();
}

/**
 * @summary Queries the metadata details of the service of an application.
 *
 * @param request DescribeAppServiceDetailRequest
 * @return DescribeAppServiceDetailResponse
 */
DescribeAppServiceDetailResponse Client::describeAppServiceDetail(const DescribeAppServiceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAppServiceDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the configurations of an application.
 *
 * @param request DescribeApplicationConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationConfigResponse
 */
DescribeApplicationConfigResponse Client::describeApplicationConfigWithOptions(const DescribeApplicationConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationConfig"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/describeApplicationConfig")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationConfigResponse>();
}

/**
 * @summary Queries the configurations of an application.
 *
 * @param request DescribeApplicationConfigRequest
 * @return DescribeApplicationConfigResponse
 */
DescribeApplicationConfigResponse Client::describeApplicationConfig(const DescribeApplicationConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the instance groups of an application.
 *
 * @param request DescribeApplicationGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationGroupsResponse
 */
DescribeApplicationGroupsResponse Client::describeApplicationGroupsWithOptions(const DescribeApplicationGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationGroups"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/describeApplicationGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationGroupsResponse>();
}

/**
 * @summary Queries the instance groups of an application.
 *
 * @param request DescribeApplicationGroupsRequest
 * @return DescribeApplicationGroupsResponse
 */
DescribeApplicationGroupsResponse Client::describeApplicationGroups(const DescribeApplicationGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the information about the image of an application.
 *
 * @param request DescribeApplicationImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationImageResponse
 */
DescribeApplicationImageResponse Client::describeApplicationImageWithOptions(const DescribeApplicationImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationImage"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/container/describeApplicationImage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationImageResponse>();
}

/**
 * @summary Queries the information about the image of an application.
 *
 * @param request DescribeApplicationImageRequest
 * @return DescribeApplicationImageResponse
 */
DescribeApplicationImageResponse Client::describeApplicationImage(const DescribeApplicationImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationImageWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of application instances.
 *
 * @param request DescribeApplicationInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationInstancesResponse
 */
DescribeApplicationInstancesResponse Client::describeApplicationInstancesWithOptions(const DescribeApplicationInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.reverse();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationInstances"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/describeApplicationInstances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationInstancesResponse>();
}

/**
 * @summary Queries a list of application instances.
 *
 * @param request DescribeApplicationInstancesRequest
 * @return DescribeApplicationInstancesResponse
 */
DescribeApplicationInstancesResponse Client::describeApplicationInstances(const DescribeApplicationInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationInstancesWithOptions(request, headers, runtime);
}

/**
 * @param request DescribeApplicationMseServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationMseServiceResponse
 */
DescribeApplicationMseServiceResponse Client::describeApplicationMseServiceWithOptions(const DescribeApplicationMseServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEnableAhas()) {
    query["EnableAhas"] = request.enableAhas();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationMseService"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/applicationMseService")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationMseServiceResponse>();
}

/**
 * @param request DescribeApplicationMseServiceRequest
 * @return DescribeApplicationMseServiceResponse
 */
DescribeApplicationMseServiceResponse Client::describeApplicationMseService(const DescribeApplicationMseServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationMseServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the Network Load Balancer (NLB) instances bound to an application and their listeners.
 *
 * @param request DescribeApplicationNlbsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationNlbsResponse
 */
DescribeApplicationNlbsResponse Client::describeApplicationNlbsWithOptions(const DescribeApplicationNlbsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationNlbs"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/nlb")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationNlbsResponse>();
}

/**
 * @summary Queries the Network Load Balancer (NLB) instances bound to an application and their listeners.
 *
 * @param request DescribeApplicationNlbsRequest
 * @return DescribeApplicationNlbsResponse
 */
DescribeApplicationNlbsResponse Client::describeApplicationNlbs(const DescribeApplicationNlbsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationNlbsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries an Auto Scaling policy of an application.
 *
 * @param request DescribeApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationScalingRuleResponse
 */
DescribeApplicationScalingRuleResponse Client::describeApplicationScalingRuleWithOptions(const DescribeApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationScalingRule"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/scale/applicationScalingRule")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationScalingRuleResponse>();
}

/**
 * @summary Queries an Auto Scaling policy of an application.
 *
 * @param request DescribeApplicationScalingRuleRequest
 * @return DescribeApplicationScalingRuleResponse
 */
DescribeApplicationScalingRuleResponse Client::describeApplicationScalingRule(const DescribeApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the auto scaling policies of an application.
 *
 * @param request DescribeApplicationScalingRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationScalingRulesResponse
 */
DescribeApplicationScalingRulesResponse Client::describeApplicationScalingRulesWithOptions(const DescribeApplicationScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationScalingRules"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/scale/applicationScalingRules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationScalingRulesResponse>();
}

/**
 * @summary Queries the auto scaling policies of an application.
 *
 * @param request DescribeApplicationScalingRulesRequest
 * @return DescribeApplicationScalingRulesResponse
 */
DescribeApplicationScalingRulesResponse Client::describeApplicationScalingRules(const DescribeApplicationScalingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationScalingRulesWithOptions(request, headers, runtime);
}

/**
 * @summary 017f39b8-dfa4-4e16-a84b-1dcee4b1\\*\\*\\*\\*
 *
 * @param request DescribeApplicationSlbsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationSlbsResponse
 */
DescribeApplicationSlbsResponse Client::describeApplicationSlbsWithOptions(const DescribeApplicationSlbsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationSlbs"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/slb")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationSlbsResponse>();
}

/**
 * @summary 017f39b8-dfa4-4e16-a84b-1dcee4b1\\*\\*\\*\\*
 *
 * @param request DescribeApplicationSlbsRequest
 * @return DescribeApplicationSlbsResponse
 */
DescribeApplicationSlbsResponse Client::describeApplicationSlbs(const DescribeApplicationSlbsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationSlbsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the status of an application.
 *
 * @param request DescribeApplicationStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationStatusResponse
 */
DescribeApplicationStatusResponse Client::describeApplicationStatusWithOptions(const DescribeApplicationStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationStatus"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/describeApplicationStatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationStatusResponse>();
}

/**
 * @summary Queries the status of an application.
 *
 * @param request DescribeApplicationStatusRequest
 * @return DescribeApplicationStatusResponse
 */
DescribeApplicationStatusResponse Client::describeApplicationStatus(const DescribeApplicationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeApplicationStatusWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the information of a change order.
 *
 * @param request DescribeChangeOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChangeOrderResponse
 */
DescribeChangeOrderResponse Client::describeChangeOrderWithOptions(const DescribeChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderId()) {
    query["ChangeOrderId"] = request.changeOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChangeOrder"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/changeorder/DescribeChangeOrder")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChangeOrderResponse>();
}

/**
 * @summary Queries the information of a change order.
 *
 * @param request DescribeChangeOrderRequest
 * @return DescribeChangeOrderResponse
 */
DescribeChangeOrderResponse Client::describeChangeOrder(const DescribeChangeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeChangeOrderWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the version of the component that is required when you create and deploy an application.
 *
 * @param request DescribeComponentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentsResponse
 */
DescribeComponentsResponse Client::describeComponentsWithOptions(const DescribeComponentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponents"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/resource/components")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentsResponse>();
}

/**
 * @summary Queries the version of the component that is required when you create and deploy an application.
 *
 * @param request DescribeComponentsRequest
 * @return DescribeComponentsResponse
 */
DescribeComponentsResponse Client::describeComponents(const DescribeComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeComponentsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a ConfigMap.
 *
 * @param request DescribeConfigMapRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfigMapResponse
 */
DescribeConfigMapResponse Client::describeConfigMapWithOptions(const DescribeConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigMapId()) {
    query["ConfigMapId"] = request.configMapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfigMap"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/configmap/configMap")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfigMapResponse>();
}

/**
 * @summary Queries the details of a ConfigMap.
 *
 * @param request DescribeConfigMapRequest
 * @return DescribeConfigMapResponse
 */
DescribeConfigMapResponse Client::describeConfigMap(const DescribeConfigMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeConfigMapWithOptions(request, headers, runtime);
}

/**
 * @summary Query configuration price.
 *
 * @param request DescribeConfigurationPriceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfigurationPriceResponse
 */
DescribeConfigurationPriceResponse Client::describeConfigurationPriceWithOptions(const DescribeConfigurationPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBestEffortType()) {
    query["BestEffortType"] = request.bestEffortType();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.cpu();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.memory();
  }

  if (!!request.hasNewSaeVersion()) {
    query["NewSaeVersion"] = request.newSaeVersion();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasWorkload()) {
    query["Workload"] = request.workload();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfigurationPrice"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/configurationPrice")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfigurationPriceResponse>();
}

/**
 * @summary Query configuration price.
 *
 * @param request DescribeConfigurationPriceRequest
 * @return DescribeConfigurationPriceResponse
 */
DescribeConfigurationPriceResponse Client::describeConfigurationPrice(const DescribeConfigurationPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeConfigurationPriceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the container components of a microservices application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEdasContainersResponse
 */
DescribeEdasContainersResponse Client::describeEdasContainersWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEdasContainers"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/resource/edasContainers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEdasContainersResponse>();
}

/**
 * @summary Queries the container components of a microservices application.
 *
 * @return DescribeEdasContainersResponse
 */
DescribeEdasContainersResponse Client::describeEdasContainers() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeEdasContainersWithOptions(headers, runtime);
}

/**
 * @summary Queries the details of a canary release rule based on the specified rule ID.
 *
 * @param request DescribeGreyTagRouteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGreyTagRouteResponse
 */
DescribeGreyTagRouteResponse Client::describeGreyTagRouteWithOptions(const DescribeGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGreyTagRouteId()) {
    query["GreyTagRouteId"] = request.greyTagRouteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGreyTagRoute"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/tagroute/greyTagRoute")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGreyTagRouteResponse>();
}

/**
 * @summary Queries the details of a canary release rule based on the specified rule ID.
 *
 * @param request DescribeGreyTagRouteRequest
 * @return DescribeGreyTagRouteResponse
 */
DescribeGreyTagRouteResponse Client::describeGreyTagRoute(const DescribeGreyTagRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeGreyTagRouteWithOptions(request, headers, runtime);
}

/**
 * @summary Call the DescribeIngress operation to query the details of an Ingress.
 *
 * @param request DescribeIngressRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIngressResponse
 */
DescribeIngressResponse Client::describeIngressWithOptions(const DescribeIngressRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIngressId()) {
    query["IngressId"] = request.ingressId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIngress"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/ingress/Ingress")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIngressResponse>();
}

/**
 * @summary Call the DescribeIngress operation to query the details of an Ingress.
 *
 * @param request DescribeIngressRequest
 * @return DescribeIngressResponse
 */
DescribeIngressResponse Client::describeIngress(const DescribeIngressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeIngressWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the logs of a sidecar container instance.
 *
 * @param request DescribeInstanceLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceLogResponse
 */
DescribeInstanceLogResponse Client::describeInstanceLogWithOptions(const DescribeInstanceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainerId()) {
    query["ContainerId"] = request.containerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceLog"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/instance/describeInstanceLog")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceLogResponse>();
}

/**
 * @summary Queries the logs of a sidecar container instance.
 *
 * @param request DescribeInstanceLogRequest
 * @return DescribeInstanceLogResponse
 */
DescribeInstanceLogResponse Client::describeInstanceLog(const DescribeInstanceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceLogWithOptions(request, headers, runtime);
}

/**
 * @summary Queries all instance types.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSpecificationsResponse
 */
DescribeInstanceSpecificationsResponse Client::describeInstanceSpecificationsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSpecifications"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/quota/instanceSpecifications")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSpecificationsResponse>();
}

/**
 * @summary Queries all instance types.
 *
 * @return DescribeInstanceSpecificationsResponse
 */
DescribeInstanceSpecificationsResponse Client::describeInstanceSpecifications() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceSpecificationsWithOptions(headers, runtime);
}

/**
 * @summary Queries the configurations of a job template.
 *
 * @param request DescribeJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobResponse
 */
DescribeJobResponse Client::describeJobWithOptions(const DescribeJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJob"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/describeJob")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobResponse>();
}

/**
 * @summary Queries the configurations of a job template.
 *
 * @param request DescribeJobRequest
 * @return DescribeJobResponse
 */
DescribeJobResponse Client::describeJob(const DescribeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeJobWithOptions(request, headers, runtime);
}

/**
 * @summary Query the information about jobs.
 *
 * @param request DescribeJobHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobHistoryResponse
 */
DescribeJobHistoryResponse Client::describeJobHistoryWithOptions(const DescribeJobHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobHistory"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/describeJobHistory")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobHistoryResponse>();
}

/**
 * @summary Query the information about jobs.
 *
 * @param request DescribeJobHistoryRequest
 * @return DescribeJobHistoryResponse
 */
DescribeJobHistoryResponse Client::describeJobHistory(const DescribeJobHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeJobHistoryWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the status of a job.
 *
 * @param request DescribeJobStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobStatusResponse
 */
DescribeJobStatusResponse Client::describeJobStatusWithOptions(const DescribeJobStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobStatus"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/describeJobStatus")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobStatusResponse>();
}

/**
 * @summary Queries the status of a job.
 *
 * @param request DescribeJobStatusRequest
 * @return DescribeJobStatusResponse
 */
DescribeJobStatusResponse Client::describeJobStatus(const DescribeJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeJobStatusWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a namespace.
 *
 * @param request DescribeNamespaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNamespaceResponse
 */
DescribeNamespaceResponse Client::describeNamespaceWithOptions(const DescribeNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNameSpaceShortId()) {
    query["NameSpaceShortId"] = request.nameSpaceShortId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNamespace"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/namespace")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNamespaceResponse>();
}

/**
 * @summary Queries the details of a namespace.
 *
 * @param request DescribeNamespaceRequest
 * @return DescribeNamespaceResponse
 */
DescribeNamespaceResponse Client::describeNamespace(const DescribeNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeNamespaceWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of namespaces.
 *
 * @param request DescribeNamespaceListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNamespaceListResponse
 */
DescribeNamespaceListResponse Client::describeNamespaceListWithOptions(const DescribeNamespaceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainCustom()) {
    query["ContainCustom"] = request.containCustom();
  }

  if (!!request.hasHybridCloudExclude()) {
    query["HybridCloudExclude"] = request.hybridCloudExclude();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNamespaceList"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/namespace/describeNamespaceList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNamespaceListResponse>();
}

/**
 * @summary Queries a list of namespaces.
 *
 * @param request DescribeNamespaceListRequest
 * @return DescribeNamespaceListResponse
 */
DescribeNamespaceListResponse Client::describeNamespaceList(const DescribeNamespaceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeNamespaceListWithOptions(request, headers, runtime);
}

/**
 * @summary Query the information about resources in a namespace.
 *
 * @param request DescribeNamespaceResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNamespaceResourcesResponse
 */
DescribeNamespaceResourcesResponse Client::describeNamespaceResourcesWithOptions(const DescribeNamespaceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNameSpaceShortId()) {
    query["NameSpaceShortId"] = request.nameSpaceShortId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNamespaceResources"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/namespace/describeNamespaceResources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNamespaceResourcesResponse>();
}

/**
 * @summary Query the information about resources in a namespace.
 *
 * @param request DescribeNamespaceResourcesRequest
 * @return DescribeNamespaceResourcesResponse
 */
DescribeNamespaceResourcesResponse Client::describeNamespaceResources(const DescribeNamespaceResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeNamespaceResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of namespaces.
 *
 * @param request DescribeNamespacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNamespacesResponse
 */
DescribeNamespacesResponse Client::describeNamespacesWithOptions(const DescribeNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNamespaces"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/namespaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNamespacesResponse>();
}

/**
 * @summary Queries a list of namespaces.
 *
 * @param request DescribeNamespacesRequest
 * @return DescribeNamespacesResponse
 */
DescribeNamespacesResponse Client::describeNamespaces(const DescribeNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeNamespacesWithOptions(request, headers, runtime);
}

/**
 * @summary View batch information
 *
 * @param request DescribePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePipelineResponse
 */
DescribePipelineResponse Client::describePipelineWithOptions(const DescribePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePipeline"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/changeorder/DescribePipeline")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePipelineResponse>();
}

/**
 * @summary View batch information
 *
 * @param request DescribePipelineRequest
 * @return DescribePipelineResponse
 */
DescribePipelineResponse Client::describePipeline(const DescribePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describePipelineWithOptions(request, headers, runtime);
}

/**
 * @summary Queries available regions.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/regionConfig")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries available regions.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary Queries the details of a Secret.
 *
 * @param request DescribeSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecretResponse
 */
DescribeSecretResponse Client::describeSecretWithOptions(const DescribeSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecret"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/secret/secret")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecretResponse>();
}

/**
 * @summary Queries the details of a Secret.
 *
 * @param request DescribeSecretRequest
 * @return DescribeSecretResponse
 */
DescribeSecretResponse Client::describeSecret(const DescribeSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSecretWithOptions(request, headers, runtime);
}

/**
 * @summary 查询泳道详情
 *
 * @param request DescribeSwimmingLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSwimmingLaneResponse
 */
DescribeSwimmingLaneResponse Client::describeSwimmingLaneWithOptions(const DescribeSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLaneId()) {
    query["LaneId"] = request.laneId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSwimmingLane"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/describeSwimmingLane")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSwimmingLaneResponse>();
}

/**
 * @summary 查询泳道详情
 *
 * @param request DescribeSwimmingLaneRequest
 * @return DescribeSwimmingLaneResponse
 */
DescribeSwimmingLaneResponse Client::describeSwimmingLane(const DescribeSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSwimmingLaneWithOptions(request, headers, runtime);
}

/**
 * @summary Query web applications.
 *
 * @description Call the DescribeWebApplication operation to query web applications.
 *
 * @param request DescribeWebApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebApplicationResponse
 */
DescribeWebApplicationResponse Client::describeWebApplicationWithOptions(const string &ApplicationId, const DescribeWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/applications/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebApplicationResponse>();
}

/**
 * @summary Query web applications.
 *
 * @description Call the DescribeWebApplication operation to query web applications.
 *
 * @param request DescribeWebApplicationRequest
 * @return DescribeWebApplicationResponse
 */
DescribeWebApplicationResponse Client::describeWebApplication(const string &ApplicationId, const DescribeWebApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Query the resource usage of a web application.
 *
 * @description Query the resource usage of a web application.
 *
 * @param request DescribeWebApplicationResourceStaticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebApplicationResourceStaticsResponse
 */
DescribeWebApplicationResourceStaticsResponse Client::describeWebApplicationResourceStaticsWithOptions(const string &ApplicationId, const DescribeWebApplicationResourceStaticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebApplicationResourceStatics"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/applications-observability/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/resource")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebApplicationResourceStaticsResponse>();
}

/**
 * @summary Query the resource usage of a web application.
 *
 * @description Query the resource usage of a web application.
 *
 * @param request DescribeWebApplicationResourceStaticsRequest
 * @return DescribeWebApplicationResourceStaticsResponse
 */
DescribeWebApplicationResourceStaticsResponse Client::describeWebApplicationResourceStatics(const string &ApplicationId, const DescribeWebApplicationResourceStaticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWebApplicationResourceStaticsWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Describe a web application version.
 *
 * @description Describe a web application version.
 *
 * @param request DescribeWebApplicationRevisionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebApplicationRevisionResponse
 */
DescribeWebApplicationRevisionResponse Client::describeWebApplicationRevisionWithOptions(const string &ApplicationId, const string &RevisionId, const DescribeWebApplicationRevisionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebApplicationRevision"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-revisions/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/revisions/" , Darabonba::Encode::Encoder::percentEncode(RevisionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebApplicationRevisionResponse>();
}

/**
 * @summary Describe a web application version.
 *
 * @description Describe a web application version.
 *
 * @param request DescribeWebApplicationRevisionRequest
 * @return DescribeWebApplicationRevisionResponse
 */
DescribeWebApplicationRevisionResponse Client::describeWebApplicationRevision(const string &ApplicationId, const string &RevisionId, const DescribeWebApplicationRevisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWebApplicationRevisionWithOptions(ApplicationId, RevisionId, request, headers, runtime);
}

/**
 * @summary Describe the scaling configuration of a web application.
 *
 * @description Call the DescribeWebApplicationScalingConfig operation to obtain the scaling configuration of a web application.
 *
 * @param request DescribeWebApplicationScalingConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebApplicationScalingConfigResponse
 */
DescribeWebApplicationScalingConfigResponse Client::describeWebApplicationScalingConfigWithOptions(const string &ApplicationId, const DescribeWebApplicationScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebApplicationScalingConfig"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-scaling/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebApplicationScalingConfigResponse>();
}

/**
 * @summary Describe the scaling configuration of a web application.
 *
 * @description Call the DescribeWebApplicationScalingConfig operation to obtain the scaling configuration of a web application.
 *
 * @param request DescribeWebApplicationScalingConfigRequest
 * @return DescribeWebApplicationScalingConfigResponse
 */
DescribeWebApplicationScalingConfigResponse Client::describeWebApplicationScalingConfig(const string &ApplicationId, const DescribeWebApplicationScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWebApplicationScalingConfigWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Query the traffic configurations of a web application.
 *
 * @description Call the DescribeWebApplicationTrafficConfig operation to query the traffic configurations of a web application.
 *
 * @param request DescribeWebApplicationTrafficConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebApplicationTrafficConfigResponse
 */
DescribeWebApplicationTrafficConfigResponse Client::describeWebApplicationTrafficConfigWithOptions(const string &ApplicationId, const DescribeWebApplicationTrafficConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebApplicationTrafficConfig"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-traffic/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebApplicationTrafficConfigResponse>();
}

/**
 * @summary Query the traffic configurations of a web application.
 *
 * @description Call the DescribeWebApplicationTrafficConfig operation to query the traffic configurations of a web application.
 *
 * @param request DescribeWebApplicationTrafficConfigRequest
 * @return DescribeWebApplicationTrafficConfigResponse
 */
DescribeWebApplicationTrafficConfigResponse Client::describeWebApplicationTrafficConfig(const string &ApplicationId, const DescribeWebApplicationTrafficConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWebApplicationTrafficConfigWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Query the details of a custom domain name for a web application.
 *
 * @description Query the details of a custom domain name for a web application.
 *
 * @param request DescribeWebCustomDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebCustomDomainResponse
 */
DescribeWebCustomDomainResponse Client::describeWebCustomDomainWithOptions(const string &DomainName, const DescribeWebCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebCustomDomain"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(DomainName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebCustomDomainResponse>();
}

/**
 * @summary Query the details of a custom domain name for a web application.
 *
 * @description Query the details of a custom domain name for a web application.
 *
 * @param request DescribeWebCustomDomainRequest
 * @return DescribeWebCustomDomainResponse
 */
DescribeWebCustomDomainResponse Client::describeWebCustomDomain(const string &DomainName, const DescribeWebCustomDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWebCustomDomainWithOptions(DomainName, request, headers, runtime);
}

/**
 * @summary Obtain the logs of web application instances.
 *
 * @description Obtain the logs of web application instances.
 *
 * @param request DescribeWebInstanceLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebInstanceLogsResponse
 */
DescribeWebInstanceLogsResponse Client::describeWebInstanceLogsWithOptions(const string &ApplicationId, const string &InstanceId, const DescribeWebInstanceLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebInstanceLogs"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/applications-observability/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebInstanceLogsResponse>();
}

/**
 * @summary Obtain the logs of web application instances.
 *
 * @description Obtain the logs of web application instances.
 *
 * @param request DescribeWebInstanceLogsRequest
 * @return DescribeWebInstanceLogsResponse
 */
DescribeWebInstanceLogsResponse Client::describeWebInstanceLogs(const string &ApplicationId, const string &InstanceId, const DescribeWebInstanceLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeWebInstanceLogsWithOptions(ApplicationId, InstanceId, request, headers, runtime);
}

/**
 * @param request DisableApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationScalingRuleResponse
 */
DisableApplicationScalingRuleResponse Client::disableApplicationScalingRuleWithOptions(const DisableApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationScalingRule"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/scale/disableApplicationScalingRule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationScalingRuleResponse>();
}

/**
 * @param request DisableApplicationScalingRuleRequest
 * @return DisableApplicationScalingRuleResponse
 */
DisableApplicationScalingRuleResponse Client::disableApplicationScalingRule(const DisableApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Disables the advanced monitoring feature of Application Real-Time Monitoring Service (ARMS).
 *
 * @param request DowngradeApplicationApmServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DowngradeApplicationApmServiceResponse
 */
DowngradeApplicationApmServiceResponse Client::downgradeApplicationApmServiceWithOptions(const DowngradeApplicationApmServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DowngradeApplicationApmService"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/applicationApmService")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DowngradeApplicationApmServiceResponse>();
}

/**
 * @summary Disables the advanced monitoring feature of Application Real-Time Monitoring Service (ARMS).
 *
 * @param request DowngradeApplicationApmServiceRequest
 * @return DowngradeApplicationApmServiceResponse
 */
DowngradeApplicationApmServiceResponse Client::downgradeApplicationApmService(const DowngradeApplicationApmServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return downgradeApplicationApmServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Enables an auto scaling policy for an application.
 *
 * @param request EnableApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationScalingRuleResponse
 */
EnableApplicationScalingRuleResponse Client::enableApplicationScalingRuleWithOptions(const EnableApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationScalingRule"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/scale/enableApplicationScalingRule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationScalingRuleResponse>();
}

/**
 * @summary Enables an auto scaling policy for an application.
 *
 * @param request EnableApplicationScalingRuleRequest
 * @return EnableApplicationScalingRuleResponse
 */
EnableApplicationScalingRuleResponse Client::enableApplicationScalingRule(const EnableApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @param request ExecJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecJobResponse
 */
ExecJobResponse Client::execJobWithOptions(const ExecJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasCommandArgs()) {
    query["CommandArgs"] = request.commandArgs();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.envs();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasJarStartArgs()) {
    query["JarStartArgs"] = request.jarStartArgs();
  }

  if (!!request.hasJarStartOptions()) {
    query["JarStartOptions"] = request.jarStartOptions();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.time();
  }

  if (!!request.hasWarStartOptions()) {
    query["WarStartOptions"] = request.warStartOptions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecJob"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/execJob")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecJobResponse>();
}

/**
 * @param request ExecJobRequest
 * @return ExecJobResponse
 */
ExecJobResponse Client::execJob(const ExecJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return execJobWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the basic information of an application.
 *
 * @param request GetApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/getApplication")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary Queries the basic information of an application.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary The application name.
 *
 * @param request GetArmsTopNMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArmsTopNMetricResponse
 */
GetArmsTopNMetricResponse Client::getArmsTopNMetricWithOptions(const GetArmsTopNMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppSource()) {
    query["AppSource"] = request.appSource();
  }

  if (!!request.hasCpuStrategy()) {
    query["CpuStrategy"] = request.cpuStrategy();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArmsTopNMetric"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/getArmsTopNMetric")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArmsTopNMetricResponse>();
}

/**
 * @summary The application name.
 *
 * @param request GetArmsTopNMetricRequest
 * @return GetArmsTopNMetricResponse
 */
GetArmsTopNMetricResponse Client::getArmsTopNMetric(const GetArmsTopNMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getArmsTopNMetricWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the top N applications in which abnormal instances exist. The applications are sorted by the total number of abnormal instances.
 *
 * @param request GetAvailabilityMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAvailabilityMetricResponse
 */
GetAvailabilityMetricResponse Client::getAvailabilityMetricWithOptions(const GetAvailabilityMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppSource()) {
    query["AppSource"] = request.appSource();
  }

  if (!!request.hasCpuStrategy()) {
    query["CpuStrategy"] = request.cpuStrategy();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAvailabilityMetric"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/getAvailabilityMetric")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAvailabilityMetricResponse>();
}

/**
 * @summary Queries the top N applications in which abnormal instances exist. The applications are sorted by the total number of abnormal instances.
 *
 * @param request GetAvailabilityMetricRequest
 * @return GetAvailabilityMetricResponse
 */
GetAvailabilityMetricResponse Client::getAvailabilityMetric(const GetAvailabilityMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAvailabilityMetricWithOptions(request, headers, runtime);
}

/**
 * @summary Queries top N applications in abnormal change orders.
 *
 * @param request GetChangeOrderMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChangeOrderMetricResponse
 */
GetChangeOrderMetricResponse Client::getChangeOrderMetricWithOptions(const GetChangeOrderMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppSource()) {
    query["AppSource"] = request.appSource();
  }

  if (!!request.hasCoType()) {
    query["CoType"] = request.coType();
  }

  if (!!request.hasCpuStrategy()) {
    query["CpuStrategy"] = request.cpuStrategy();
  }

  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.createTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChangeOrderMetric"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/getChangeOrderMetric")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChangeOrderMetricResponse>();
}

/**
 * @summary Queries top N applications in abnormal change orders.
 *
 * @param request GetChangeOrderMetricRequest
 * @return GetChangeOrderMetricResponse
 */
GetChangeOrderMetricResponse Client::getChangeOrderMetric(const GetChangeOrderMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChangeOrderMetricWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the top N applications in which auto scaling takes effect.
 *
 * @param request GetScaleAppMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScaleAppMetricResponse
 */
GetScaleAppMetricResponse Client::getScaleAppMetricWithOptions(const GetScaleAppMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppSource()) {
    query["AppSource"] = request.appSource();
  }

  if (!!request.hasCpuStrategy()) {
    query["CpuStrategy"] = request.cpuStrategy();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScaleAppMetric"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/getScaleAppMetric")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScaleAppMetricResponse>();
}

/**
 * @summary Queries the top N applications in which auto scaling takes effect.
 *
 * @param request GetScaleAppMetricRequest
 * @return GetScaleAppMetricResponse
 */
GetScaleAppMetricResponse Client::getScaleAppMetric(const GetScaleAppMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScaleAppMetricWithOptions(request, headers, runtime);
}

/**
 * @summary The number of Warning events.
 *
 * @param request GetWarningEventMetricRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWarningEventMetricResponse
 */
GetWarningEventMetricResponse Client::getWarningEventMetricWithOptions(const GetWarningEventMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppSource()) {
    query["AppSource"] = request.appSource();
  }

  if (!!request.hasCpuStrategy()) {
    query["CpuStrategy"] = request.cpuStrategy();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWarningEventMetric"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/getWarningEventMetric")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWarningEventMetricResponse>();
}

/**
 * @summary The number of Warning events.
 *
 * @param request GetWarningEventMetricRequest
 * @return GetWarningEventMetricResponse
 */
GetWarningEventMetricResponse Client::getWarningEventMetric(const GetWarningEventMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWarningEventMetricWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the token used to remotely log on to the Webshell of an instance.
 *
 * @param request GetWebshellTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWebshellTokenResponse
 */
GetWebshellTokenResponse Client::getWebshellTokenWithOptions(const GetWebshellTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasContainerName()) {
    query["ContainerName"] = request.containerName();
  }

  if (!!request.hasPodName()) {
    query["PodName"] = request.podName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWebshellToken"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/instance/webshellToken")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWebshellTokenResponse>();
}

/**
 * @summary Obtains the token used to remotely log on to the Webshell of an instance.
 *
 * @param request GetWebshellTokenRequest
 * @return GetWebshellTokenResponse
 */
GetWebshellTokenResponse Client::getWebshellToken(const GetWebshellTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWebshellTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 查询所有泳道组
 *
 * @param request ListAllSwimmingLaneGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllSwimmingLaneGroupsResponse
 */
ListAllSwimmingLaneGroupsResponse Client::listAllSwimmingLaneGroupsWithOptions(const ListAllSwimmingLaneGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllSwimmingLaneGroups"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/listSwimmingLaneGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllSwimmingLaneGroupsResponse>();
}

/**
 * @summary 查询所有泳道组
 *
 * @param request ListAllSwimmingLaneGroupsRequest
 * @return ListAllSwimmingLaneGroupsResponse
 */
ListAllSwimmingLaneGroupsResponse Client::listAllSwimmingLaneGroups(const ListAllSwimmingLaneGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAllSwimmingLaneGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询所有泳道
 *
 * @param request ListAllSwimmingLanesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllSwimmingLanesResponse
 */
ListAllSwimmingLanesResponse Client::listAllSwimmingLanesWithOptions(const ListAllSwimmingLanesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllSwimmingLanes"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/listSwimmingLanes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllSwimmingLanesResponse>();
}

/**
 * @summary 查询所有泳道
 *
 * @param request ListAllSwimmingLanesRequest
 * @return ListAllSwimmingLanesResponse
 */
ListAllSwimmingLanesResponse Client::listAllSwimmingLanes(const ListAllSwimmingLanesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAllSwimmingLanesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the events that occurred in an application.
 *
 * @param request ListAppEventsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppEventsResponse
 */
ListAppEventsResponse Client::listAppEventsWithOptions(const ListAppEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasObjectKind()) {
    query["ObjectKind"] = request.objectKind();
  }

  if (!!request.hasObjectName()) {
    query["ObjectName"] = request.objectName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.reason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppEvents"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/listAppEvents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppEventsResponse>();
}

/**
 * @summary Queries the events that occurred in an application.
 *
 * @param request ListAppEventsRequest
 * @return ListAppEventsResponse
 */
ListAppEventsResponse Client::listAppEvents(const ListAppEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppEventsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of microservices.
 *
 * @param request ListAppServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppServicesResponse
 */
ListAppServicesResponse Client::listAppServicesWithOptions(const ListAppServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasNacosInstanceId()) {
    query["NacosInstanceId"] = request.nacosInstanceId();
  }

  if (!!request.hasNacosNamespaceId()) {
    query["NacosNamespaceId"] = request.nacosNamespaceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegistryType()) {
    query["RegistryType"] = request.registryType();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppServices"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/service/listAppServices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppServicesResponse>();
}

/**
 * @summary Queries the list of microservices.
 *
 * @param request ListAppServicesRequest
 * @return ListAppServicesResponse
 */
ListAppServicesResponse Client::listAppServices(const ListAppServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the services of an application.
 *
 * @param request ListAppServicesPageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppServicesPageResponse
 */
ListAppServicesPageResponse Client::listAppServicesPageWithOptions(const ListAppServicesPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppServicesPage"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/service/listAppServicesPage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppServicesPageResponse>();
}

/**
 * @summary Queries the services of an application.
 *
 * @param request ListAppServicesPageRequest
 * @return ListAppServicesPageResponse
 */
ListAppServicesPageResponse Client::listAppServicesPage(const ListAppServicesPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppServicesPageWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the deployment versions of an application.
 *
 * @param request ListAppVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppVersionsResponse
 */
ListAppVersionsResponse Client::listAppVersionsWithOptions(const ListAppVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppVersions"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/listAppVersions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppVersionsResponse>();
}

/**
 * @summary Queries the deployment versions of an application.
 *
 * @param request ListAppVersionsRequest
 * @return ListAppVersionsResponse
 */
ListAppVersionsResponse Client::listAppVersions(const ListAppVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of applications.
 *
 * @param request ListApplicationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAppSource()) {
    query["AppSource"] = request.appSource();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFieldType()) {
    query["FieldType"] = request.fieldType();
  }

  if (!!request.hasFieldValue()) {
    query["FieldValue"] = request.fieldValue();
  }

  if (!!request.hasIsStateful()) {
    query["IsStateful"] = request.isStateful();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.reverse();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/listApplications")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary Queries a list of applications.
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApplicationsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取应用列表，供全链路灰度拉取应用列表
 *
 * @param request ListApplicationsForSwimmingLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsForSwimmingLaneResponse
 */
ListApplicationsForSwimmingLaneResponse Client::listApplicationsForSwimmingLaneWithOptions(const ListApplicationsForSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationsForSwimmingLane"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/listApplicationsForSwimmingLane")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsForSwimmingLaneResponse>();
}

/**
 * @summary 获取应用列表，供全链路灰度拉取应用列表
 *
 * @param request ListApplicationsForSwimmingLaneRequest
 * @return ListApplicationsForSwimmingLaneResponse
 */
ListApplicationsForSwimmingLaneResponse Client::listApplicationsForSwimmingLane(const ListApplicationsForSwimmingLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApplicationsForSwimmingLaneWithOptions(request, headers, runtime);
}

/**
 * @summary Query a list of change orders.
 *
 * @param request ListChangeOrdersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChangeOrdersResponse
 */
ListChangeOrdersResponse Client::listChangeOrdersWithOptions(const ListChangeOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCoStatus()) {
    query["CoStatus"] = request.coStatus();
  }

  if (!!request.hasCoType()) {
    query["CoType"] = request.coType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.reverse();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChangeOrders"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/changeorder/ListChangeOrders")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChangeOrdersResponse>();
}

/**
 * @summary Query a list of change orders.
 *
 * @param request ListChangeOrdersRequest
 * @return ListChangeOrdersResponse
 */
ListChangeOrdersResponse Client::listChangeOrders(const ListChangeOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChangeOrdersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of microservices that are subscribed.
 *
 * @param request ListConsumedServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConsumedServicesResponse
 */
ListConsumedServicesResponse Client::listConsumedServicesWithOptions(const ListConsumedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConsumedServices"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/service/listConsumedServices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsumedServicesResponse>();
}

/**
 * @summary Queries a list of microservices that are subscribed.
 *
 * @param request ListConsumedServicesRequest
 * @return ListConsumedServicesResponse
 */
ListConsumedServicesResponse Client::listConsumedServices(const ListConsumedServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConsumedServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a canary release rule based on an application ID.
 *
 * @description >  You can configure only one canary release rule for each application.
 *
 * @param request ListGreyTagRouteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGreyTagRouteResponse
 */
ListGreyTagRouteResponse Client::listGreyTagRouteWithOptions(const ListGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGreyTagRoute"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/tagroute/greyTagRouteList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGreyTagRouteResponse>();
}

/**
 * @summary Queries the details of a canary release rule based on an application ID.
 *
 * @description >  You can configure only one canary release rule for each application.
 *
 * @param request ListGreyTagRouteRequest
 * @return ListGreyTagRouteResponse
 */
ListGreyTagRouteResponse Client::listGreyTagRoute(const ListGreyTagRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGreyTagRouteWithOptions(request, headers, runtime);
}

/**
 * @summary Use ListIngress API call to query Ingress list
 *
 * @param request ListIngressesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIngressesResponse
 */
ListIngressesResponse Client::listIngressesWithOptions(const ListIngressesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIngresses"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/ingress/IngressList")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIngressesResponse>();
}

/**
 * @summary Use ListIngress API call to query Ingress list
 *
 * @param request ListIngressesRequest
 * @return ListIngressesResponse
 */
ListIngressesResponse Client::listIngresses(const ListIngressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIngressesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the information about job templates.
 *
 * @param request ListJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFieldType()) {
    query["FieldType"] = request.fieldType();
  }

  if (!!request.hasFieldValue()) {
    query["FieldValue"] = request.fieldValue();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.reverse();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasWorkload()) {
    query["Workload"] = request.workload();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/listJobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary Queries the information about job templates.
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of application logs.
 *
 * @param request ListLogConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogConfigsResponse
 */
ListLogConfigsResponse Client::listLogConfigsWithOptions(const ListLogConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogConfigs"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/log/listLogConfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogConfigsResponse>();
}

/**
 * @summary Queries a list of application logs.
 *
 * @param request ListLogConfigsRequest
 * @return ListLogConfigsResponse
 */
ListLogConfigsResponse Client::listLogConfigs(const ListLogConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLogConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of change orders in a namespace.
 *
 * @param request ListNamespaceChangeOrdersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNamespaceChangeOrdersResponse
 */
ListNamespaceChangeOrdersResponse Client::listNamespaceChangeOrdersWithOptions(const ListNamespaceChangeOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoStatus()) {
    query["CoStatus"] = request.coStatus();
  }

  if (!!request.hasCoType()) {
    query["CoType"] = request.coType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNamespaceChangeOrders"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/changeorder/listNamespaceChangeOrders")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNamespaceChangeOrdersResponse>();
}

/**
 * @summary Queries a list of change orders in a namespace.
 *
 * @param request ListNamespaceChangeOrdersRequest
 * @return ListNamespaceChangeOrdersResponse
 */
ListNamespaceChangeOrdersResponse Client::listNamespaceChangeOrders(const ListNamespaceChangeOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listNamespaceChangeOrdersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the ConfigMap instances in a namespace.
 *
 * @param request ListNamespacedConfigMapsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNamespacedConfigMapsResponse
 */
ListNamespacedConfigMapsResponse Client::listNamespacedConfigMapsWithOptions(const ListNamespacedConfigMapsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNamespacedConfigMaps"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/configmap/listNamespacedConfigMaps")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNamespacedConfigMapsResponse>();
}

/**
 * @summary Queries the ConfigMap instances in a namespace.
 *
 * @param request ListNamespacedConfigMapsRequest
 * @return ListNamespacedConfigMapsResponse
 */
ListNamespacedConfigMapsResponse Client::listNamespacedConfigMaps(const ListNamespacedConfigMapsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listNamespacedConfigMapsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of microservices that are published.
 *
 * @param request ListPublishedServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublishedServicesResponse
 */
ListPublishedServicesResponse Client::listPublishedServicesWithOptions(const ListPublishedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPublishedServices"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/service/listPublishedServices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPublishedServicesResponse>();
}

/**
 * @summary Queries a list of microservices that are published.
 *
 * @param request ListPublishedServicesRequest
 * @return ListPublishedServicesResponse
 */
ListPublishedServicesResponse Client::listPublishedServices(const ListPublishedServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPublishedServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the information about Secrets in a namespace.
 *
 * @param request ListSecretsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecretsResponse
 */
ListSecretsResponse Client::listSecretsWithOptions(const ListSecretsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecrets"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/secret/secrets")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecretsResponse>();
}

/**
 * @summary Queries the information about Secrets in a namespace.
 *
 * @param request ListSecretsRequest
 * @return ListSecretsResponse
 */
ListSecretsResponse Client::listSecrets(const ListSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSecretsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询泳道可选的网关路由
 *
 * @param request ListSwimmingLaneGatewayRoutesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSwimmingLaneGatewayRoutesResponse
 */
ListSwimmingLaneGatewayRoutesResponse Client::listSwimmingLaneGatewayRoutesWithOptions(const ListSwimmingLaneGatewayRoutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGatewayUniqueId()) {
    query["GatewayUniqueId"] = request.gatewayUniqueId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSwimmingLaneGatewayRoutes"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/listSwimmingLaneGatewayRoutes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSwimmingLaneGatewayRoutesResponse>();
}

/**
 * @summary 查询泳道可选的网关路由
 *
 * @param request ListSwimmingLaneGatewayRoutesRequest
 * @return ListSwimmingLaneGatewayRoutesResponse
 */
ListSwimmingLaneGatewayRoutesResponse Client::listSwimmingLaneGatewayRoutes(const ListSwimmingLaneGatewayRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSwimmingLaneGatewayRoutesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询所有泳道标签列表
 *
 * @param request ListSwimmingLaneGroupTagsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSwimmingLaneGroupTagsResponse
 */
ListSwimmingLaneGroupTagsResponse Client::listSwimmingLaneGroupTagsWithOptions(const ListSwimmingLaneGroupTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSwimmingLaneGroupTags"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/listSwimmingLaneGroupTags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSwimmingLaneGroupTagsResponse>();
}

/**
 * @summary 查询所有泳道标签列表
 *
 * @param request ListSwimmingLaneGroupTagsRequest
 * @return ListSwimmingLaneGroupTagsResponse
 */
ListSwimmingLaneGroupTagsResponse Client::listSwimmingLaneGroupTags(const ListSwimmingLaneGroupTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSwimmingLaneGroupTagsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the mapping relationships between applications and tags.
 *
 * @param request ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the mapping relationships between applications and tags.
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
 * @summary Query the list of web application instances.
 *
 * @description Query the list of web application instances.
 *
 * @param tmpReq ListWebApplicationInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWebApplicationInstancesResponse
 */
ListWebApplicationInstancesResponse Client::listWebApplicationInstancesWithOptions(const string &ApplicationId, const ListWebApplicationInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWebApplicationInstancesShrinkRequest request = ListWebApplicationInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceIds(), "InstanceIds", "json"));
  }

  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.statuses(), "Statuses", "json"));
  }

  if (!!tmpReq.hasVersionIds()) {
    request.setVersionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.versionIds(), "VersionIds", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.instanceIdsShrink();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatusesShrink()) {
    query["Statuses"] = request.statusesShrink();
  }

  if (!!request.hasVersionIdsShrink()) {
    query["VersionIds"] = request.versionIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWebApplicationInstances"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/applications-observability/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWebApplicationInstancesResponse>();
}

/**
 * @summary Query the list of web application instances.
 *
 * @description Query the list of web application instances.
 *
 * @param request ListWebApplicationInstancesRequest
 * @return ListWebApplicationInstancesResponse
 */
ListWebApplicationInstancesResponse Client::listWebApplicationInstances(const string &ApplicationId, const ListWebApplicationInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWebApplicationInstancesWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Query the list of web application versions.
 *
 * @description Query the list of web application versions.
 *
 * @param request ListWebApplicationRevisionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWebApplicationRevisionsResponse
 */
ListWebApplicationRevisionsResponse Client::listWebApplicationRevisionsWithOptions(const string &ApplicationId, const ListWebApplicationRevisionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWebApplicationRevisions"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-revisions/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/revisions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWebApplicationRevisionsResponse>();
}

/**
 * @summary Query the list of web application versions.
 *
 * @description Query the list of web application versions.
 *
 * @param request ListWebApplicationRevisionsRequest
 * @return ListWebApplicationRevisionsResponse
 */
ListWebApplicationRevisionsResponse Client::listWebApplicationRevisions(const string &ApplicationId, const ListWebApplicationRevisionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWebApplicationRevisionsWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Query the list of web applications.
 *
 * @description Call the ListWebApplications operation to query the list of web applications.
 *
 * @param request ListWebApplicationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWebApplicationsResponse
 */
ListWebApplicationsResponse Client::listWebApplicationsWithOptions(const ListWebApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.prefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWebApplications"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/applications")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWebApplicationsResponse>();
}

/**
 * @summary Query the list of web applications.
 *
 * @description Call the ListWebApplications operation to query the list of web applications.
 *
 * @param request ListWebApplicationsRequest
 * @return ListWebApplicationsResponse
 */
ListWebApplicationsResponse Client::listWebApplications(const ListWebApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWebApplicationsWithOptions(request, headers, runtime);
}

/**
 * @summary Query available custom domain names.
 *
 * @description Query available custom domain names.
 *
 * @param request ListWebCustomDomainsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWebCustomDomainsResponse
 */
ListWebCustomDomainsResponse Client::listWebCustomDomainsWithOptions(const ListWebCustomDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPrefix()) {
    query["Prefix"] = request.prefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWebCustomDomains"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/custom-domains")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWebCustomDomainsResponse>();
}

/**
 * @summary Query available custom domain names.
 *
 * @description Query available custom domain names.
 *
 * @param request ListWebCustomDomainsRequest
 * @return ListWebCustomDomainsResponse
 */
ListWebCustomDomainsResponse Client::listWebCustomDomains(const ListWebCustomDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWebCustomDomainsWithOptions(request, headers, runtime);
}

/**
 * @summary Activates Serverless App Engine (SAE) for free.
 *
 * @description > Make sure that your account balance is greater than 0. Otherwise, the SAE service cannot be activated.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenSaeServiceResponse
 */
OpenSaeServiceResponse Client::openSaeServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenSaeService"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/service/open")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenSaeServiceResponse>();
}

/**
 * @summary Activates Serverless App Engine (SAE) for free.
 *
 * @description > Make sure that your account balance is greater than 0. Otherwise, the SAE service cannot be activated.
 *
 * @return OpenSaeServiceResponse
 */
OpenSaeServiceResponse Client::openSaeService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openSaeServiceWithOptions(headers, runtime);
}

/**
 * @summary Publish a web application version.
 *
 * @description Publish a web application version. You can change the configurations of the version and create a new version.
 *
 * @param request PublishWebApplicationRevisionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishWebApplicationRevisionResponse
 */
PublishWebApplicationRevisionResponse Client::publishWebApplicationRevisionWithOptions(const string &ApplicationId, const PublishWebApplicationRevisionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PublishWebApplicationRevision"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-revisions/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/revisions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishWebApplicationRevisionResponse>();
}

/**
 * @summary Publish a web application version.
 *
 * @description Publish a web application version. You can change the configurations of the version and create a new version.
 *
 * @param request PublishWebApplicationRevisionRequest
 * @return PublishWebApplicationRevisionResponse
 */
PublishWebApplicationRevisionResponse Client::publishWebApplicationRevision(const string &ApplicationId, const PublishWebApplicationRevisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishWebApplicationRevisionWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @param request QueryArmsEnableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryArmsEnableResponse
 */
QueryArmsEnableResponse Client::queryArmsEnableWithOptions(const QueryArmsEnableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryArmsEnable"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/arms/queryArms")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryArmsEnableResponse>();
}

/**
 * @param request QueryArmsEnableRequest
 * @return QueryArmsEnableResponse
 */
QueryArmsEnableResponse Client::queryArmsEnable(const QueryArmsEnableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryArmsEnableWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the resource usage of an application.
 *
 * @param request QueryResourceStaticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryResourceStaticsResponse
 */
QueryResourceStaticsResponse Client::queryResourceStaticsWithOptions(const QueryResourceStaticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryResourceStatics"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/quota/queryResourceStatics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryResourceStaticsResponse>();
}

/**
 * @summary Queries the resource usage of an application.
 *
 * @param request QueryResourceStaticsRequest
 * @return QueryResourceStaticsResponse
 */
QueryResourceStaticsResponse Client::queryResourceStatics(const QueryResourceStaticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryResourceStaticsWithOptions(request, headers, runtime);
}

/**
 * @summary Scales in an application based on instance IDs.
 *
 * @param request ReduceApplicationCapacityByInstanceIdsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReduceApplicationCapacityByInstanceIdsResponse
 */
ReduceApplicationCapacityByInstanceIdsResponse Client::reduceApplicationCapacityByInstanceIdsWithOptions(const ReduceApplicationCapacityByInstanceIdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReduceApplicationCapacityByInstanceIds"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/ScaleInApplicationWithInstanceIds")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReduceApplicationCapacityByInstanceIdsResponse>();
}

/**
 * @summary Scales in an application based on instance IDs.
 *
 * @param request ReduceApplicationCapacityByInstanceIdsRequest
 * @return ReduceApplicationCapacityByInstanceIdsResponse
 */
ReduceApplicationCapacityByInstanceIdsResponse Client::reduceApplicationCapacityByInstanceIds(const ReduceApplicationCapacityByInstanceIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reduceApplicationCapacityByInstanceIdsWithOptions(request, headers, runtime);
}

/**
 * @summary Rescale an application.
 *
 * @param request RescaleApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RescaleApplicationResponse
 */
RescaleApplicationResponse Client::rescaleApplicationWithOptions(const RescaleApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAutoEnableApplicationScalingRule()) {
    query["AutoEnableApplicationScalingRule"] = request.autoEnableApplicationScalingRule();
  }

  if (!!request.hasMinReadyInstanceRatio()) {
    query["MinReadyInstanceRatio"] = request.minReadyInstanceRatio();
  }

  if (!!request.hasMinReadyInstances()) {
    query["MinReadyInstances"] = request.minReadyInstances();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RescaleApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/rescaleApplication")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RescaleApplicationResponse>();
}

/**
 * @summary Rescale an application.
 *
 * @param request RescaleApplicationRequest
 * @return RescaleApplicationResponse
 */
RescaleApplicationResponse Client::rescaleApplication(const RescaleApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rescaleApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Changes the instance specifications of an application.
 *
 * @param request RescaleApplicationVerticallyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RescaleApplicationVerticallyResponse
 */
RescaleApplicationVerticallyResponse Client::rescaleApplicationVerticallyWithOptions(const RescaleApplicationVerticallyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.cpu();
  }

  if (!!request.hasDiskSize()) {
    query["DiskSize"] = request.diskSize();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.memory();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasAutoEnableApplicationScalingRule()) {
    query["autoEnableApplicationScalingRule"] = request.autoEnableApplicationScalingRule();
  }

  if (!!request.hasMinReadyInstanceRatio()) {
    query["minReadyInstanceRatio"] = request.minReadyInstanceRatio();
  }

  if (!!request.hasMinReadyInstances()) {
    query["minReadyInstances"] = request.minReadyInstances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RescaleApplicationVertically"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/rescaleApplicationVertically")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RescaleApplicationVerticallyResponse>();
}

/**
 * @summary Changes the instance specifications of an application.
 *
 * @param request RescaleApplicationVerticallyRequest
 * @return RescaleApplicationVerticallyResponse
 */
RescaleApplicationVerticallyResponse Client::rescaleApplicationVertically(const RescaleApplicationVerticallyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rescaleApplicationVerticallyWithOptions(request, headers, runtime);
}

/**
 * @summary Restarts an application.
 *
 * @param request RestartApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartApplicationResponse
 */
RestartApplicationResponse Client::restartApplicationWithOptions(const RestartApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAutoEnableApplicationScalingRule()) {
    query["AutoEnableApplicationScalingRule"] = request.autoEnableApplicationScalingRule();
  }

  if (!!request.hasMinReadyInstanceRatio()) {
    query["MinReadyInstanceRatio"] = request.minReadyInstanceRatio();
  }

  if (!!request.hasMinReadyInstances()) {
    query["MinReadyInstances"] = request.minReadyInstances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/restartApplication")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartApplicationResponse>();
}

/**
 * @summary Restarts an application.
 *
 * @param request RestartApplicationRequest
 * @return RestartApplicationResponse
 */
RestartApplicationResponse Client::restartApplication(const RestartApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Restarts one or more instances in an application.
 *
 * @param request RestartInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstancesResponse
 */
RestartInstancesResponse Client::restartInstancesWithOptions(const RestartInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartInstances"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/restartInstances")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstancesResponse>();
}

/**
 * @summary Restarts one or more instances in an application.
 *
 * @param request RestartInstancesRequest
 * @return RestartInstancesResponse
 */
RestartInstancesResponse Client::restartInstances(const RestartInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Rolls back an application.
 *
 * @param request RollbackApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackApplicationResponse
 */
RollbackApplicationResponse Client::rollbackApplicationWithOptions(const RollbackApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAutoEnableApplicationScalingRule()) {
    query["AutoEnableApplicationScalingRule"] = request.autoEnableApplicationScalingRule();
  }

  if (!!request.hasBatchWaitTime()) {
    query["BatchWaitTime"] = request.batchWaitTime();
  }

  if (!!request.hasMinReadyInstanceRatio()) {
    query["MinReadyInstanceRatio"] = request.minReadyInstanceRatio();
  }

  if (!!request.hasMinReadyInstances()) {
    query["MinReadyInstances"] = request.minReadyInstances();
  }

  if (!!request.hasUpdateStrategy()) {
    query["UpdateStrategy"] = request.updateStrategy();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/rollbackApplication")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackApplicationResponse>();
}

/**
 * @summary Rolls back an application.
 *
 * @param request RollbackApplicationRequest
 * @return RollbackApplicationResponse
 */
RollbackApplicationResponse Client::rollbackApplication(const RollbackApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rollbackApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Starts an application.
 *
 * @param request StartApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartApplicationResponse
 */
StartApplicationResponse Client::startApplicationWithOptions(const StartApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/startApplication")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartApplicationResponse>();
}

/**
 * @summary Starts an application.
 *
 * @param request StartApplicationRequest
 * @return StartApplicationResponse
 */
StartApplicationResponse Client::startApplication(const StartApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Start a web application.
 *
 * @description Call the StartWebApplication operation to start a web application.
 *
 * @param request StartWebApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartWebApplicationResponse
 */
StartWebApplicationResponse Client::startWebApplicationWithOptions(const string &ApplicationId, const StartWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartWebApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-ops/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/start")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartWebApplicationResponse>();
}

/**
 * @summary Start a web application.
 *
 * @description Call the StartWebApplication operation to start a web application.
 *
 * @param request StartWebApplicationRequest
 * @return StartWebApplicationResponse
 */
StartWebApplicationResponse Client::startWebApplication(const string &ApplicationId, const StartWebApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Stops an application.
 *
 * @param request StopApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopApplicationResponse
 */
StopApplicationResponse Client::stopApplicationWithOptions(const StopApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/stopApplication")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopApplicationResponse>();
}

/**
 * @summary Stops an application.
 *
 * @param request StopApplicationRequest
 * @return StopApplicationResponse
 */
StopApplicationResponse Client::stopApplication(const StopApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary Stop a web application.
 *
 * @description Call the StopWebApplication operation to stop a web application.
 *
 * @param request StopWebApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopWebApplicationResponse
 */
StopWebApplicationResponse Client::stopWebApplicationWithOptions(const string &ApplicationId, const StopWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopWebApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-ops/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopWebApplicationResponse>();
}

/**
 * @summary Stop a web application.
 *
 * @description Call the StopWebApplication operation to stop a web application.
 *
 * @param request StopWebApplicationRequest
 * @return StopWebApplicationResponse
 */
StopWebApplicationResponse Client::stopWebApplication(const string &ApplicationId, const StopWebApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Suspends one or more jobs.
 *
 * @param request SuspendJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendJobResponse
 */
SuspendJobResponse Client::suspendJobWithOptions(const SuspendJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasSuspend()) {
    query["Suspend"] = request.suspend();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendJob"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/suspendJob")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendJobResponse>();
}

/**
 * @summary Suspends one or more jobs.
 *
 * @param request SuspendJobRequest
 * @return SuspendJobResponse
 */
SuspendJobResponse Client::suspendJob(const SuspendJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return suspendJobWithOptions(request, headers, runtime);
}

/**
 * @summary Adds tags to resources.
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
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to resources.
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
 * @summary Calls the UnbindNlb operation to delete an NLB listener bound for application access
 *
 * @param request UnbindNlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindNlbResponse
 */
UnbindNlbResponse Client::unbindNlbWithOptions(const UnbindNlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasNlbId()) {
    query["NlbId"] = request.nlbId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindNlb"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/nlb")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindNlbResponse>();
}

/**
 * @summary Calls the UnbindNlb operation to delete an NLB listener bound for application access
 *
 * @param request UnbindNlbRequest
 * @return UnbindNlbResponse
 */
UnbindNlbResponse Client::unbindNlb(const UnbindNlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unbindNlbWithOptions(request, headers, runtime);
}

/**
 * @summary Disassociates an internal-facing or Internet-facing SLB instance from an application.
 *
 * @param request UnbindSlbRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindSlbResponse
 */
UnbindSlbResponse Client::unbindSlbWithOptions(const UnbindSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasInternet()) {
    query["Internet"] = request.internet();
  }

  if (!!request.hasIntranet()) {
    query["Intranet"] = request.intranet();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindSlb"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/slb")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindSlbResponse>();
}

/**
 * @summary Disassociates an internal-facing or Internet-facing SLB instance from an application.
 *
 * @param request UnbindSlbRequest
 * @return UnbindSlbResponse
 */
UnbindSlbResponse Client::unbindSlb(const UnbindSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unbindSlbWithOptions(request, headers, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteAll()) {
    query["DeleteAll"] = request.deleteAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.tagKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from resources.
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
 * @summary 应用闲置模式更新
 *
 * @param request UpdateAppModeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppModeResponse
 */
UpdateAppModeResponse Client::updateAppModeWithOptions(const UpdateAppModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppIds()) {
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasEnableIdle()) {
    query["EnableIdle"] = request.enableIdle();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppMode"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/updateAppMode")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppModeResponse>();
}

/**
 * @summary 应用闲置模式更新
 *
 * @param request UpdateAppModeRequest
 * @return UpdateAppModeResponse
 */
UpdateAppModeResponse Client::updateAppMode(const UpdateAppModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAppModeWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the security group of an application.
 *
 * @param request UpdateAppSecurityGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppSecurityGroupResponse
 */
UpdateAppSecurityGroupResponse Client::updateAppSecurityGroupWithOptions(const UpdateAppSecurityGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppSecurityGroup"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/updateAppSecurityGroup")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppSecurityGroupResponse>();
}

/**
 * @summary Updates the security group of an application.
 *
 * @param request UpdateAppSecurityGroupRequest
 * @return UpdateAppSecurityGroupResponse
 */
UpdateAppSecurityGroupResponse Client::updateAppSecurityGroup(const UpdateAppSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAppSecurityGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the description of an application.
 *
 * @param request UpdateApplicationDescriptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationDescriptionResponse
 */
UpdateApplicationDescriptionResponse Client::updateApplicationDescriptionWithOptions(const UpdateApplicationDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppDescription()) {
    query["AppDescription"] = request.appDescription();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationDescription"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/updateAppDescription")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationDescriptionResponse>();
}

/**
 * @summary Updates the description of an application.
 *
 * @param request UpdateApplicationDescriptionRequest
 * @return UpdateApplicationDescriptionResponse
 */
UpdateApplicationDescriptionResponse Client::updateApplicationDescription(const UpdateApplicationDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApplicationDescriptionWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the auto scaling policy of an application.
 *
 * @description ##
 * If you want to configure more than 50 instances for an application, you must submit a [ticket](https://workorder.console.aliyun.com/#/ticket/createIndex) to add your account to the whitelist.
 *
 * @param request UpdateApplicationScalingRuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationScalingRuleResponse
 */
UpdateApplicationScalingRuleResponse Client::updateApplicationScalingRuleWithOptions(const UpdateApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEnableIdle()) {
    query["EnableIdle"] = request.enableIdle();
  }

  if (!!request.hasMinReadyInstanceRatio()) {
    query["MinReadyInstanceRatio"] = request.minReadyInstanceRatio();
  }

  if (!!request.hasMinReadyInstances()) {
    query["MinReadyInstances"] = request.minReadyInstances();
  }

  if (!!request.hasScalingRuleMetric()) {
    query["ScalingRuleMetric"] = request.scalingRuleMetric();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  if (!!request.hasScalingRuleTimer()) {
    query["ScalingRuleTimer"] = request.scalingRuleTimer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationScalingRule"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/scale/applicationScalingRule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationScalingRuleResponse>();
}

/**
 * @summary Updates the auto scaling policy of an application.
 *
 * @description ##
 * If you want to configure more than 50 instances for an application, you must submit a [ticket](https://workorder.console.aliyun.com/#/ticket/createIndex) to add your account to the whitelist.
 *
 * @param request UpdateApplicationScalingRuleRequest
 * @return UpdateApplicationScalingRuleResponse
 */
UpdateApplicationScalingRuleResponse Client::updateApplicationScalingRule(const UpdateApplicationScalingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApplicationScalingRuleWithOptions(request, headers, runtime);
}

/**
 * @summary Update the configuration of a vSwitch.
 *
 * @param request UpdateApplicationVswitchesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationVswitchesResponse
 */
UpdateApplicationVswitchesResponse Client::updateApplicationVswitchesWithOptions(const UpdateApplicationVswitchesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationVswitches"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/updateAppVswitches")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationVswitchesResponse>();
}

/**
 * @summary Update the configuration of a vSwitch.
 *
 * @param request UpdateApplicationVswitchesRequest
 * @return UpdateApplicationVswitchesResponse
 */
UpdateApplicationVswitchesResponse Client::updateApplicationVswitches(const UpdateApplicationVswitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApplicationVswitchesWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a ConfigMap instance.
 *
 * @param request UpdateConfigMapRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigMapResponse
 */
UpdateConfigMapResponse Client::updateConfigMapWithOptions(const UpdateConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigMapId()) {
    query["ConfigMapId"] = request.configMapId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConfigMap"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/configmap/configMap")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigMapResponse>();
}

/**
 * @summary Updates a ConfigMap instance.
 *
 * @param request UpdateConfigMapRequest
 * @return UpdateConfigMapResponse
 */
UpdateConfigMapResponse Client::updateConfigMap(const UpdateConfigMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConfigMapWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a canary release rule.
 *
 * @param request UpdateGreyTagRouteRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGreyTagRouteResponse
 */
UpdateGreyTagRouteResponse Client::updateGreyTagRouteWithOptions(const UpdateGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlbRules()) {
    query["AlbRules"] = request.albRules();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDubboRules()) {
    query["DubboRules"] = request.dubboRules();
  }

  if (!!request.hasGreyTagRouteId()) {
    query["GreyTagRouteId"] = request.greyTagRouteId();
  }

  if (!!request.hasScRules()) {
    query["ScRules"] = request.scRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGreyTagRoute"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/tagroute/greyTagRoute")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGreyTagRouteResponse>();
}

/**
 * @summary Updates a canary release rule.
 *
 * @param request UpdateGreyTagRouteRequest
 * @return UpdateGreyTagRouteResponse
 */
UpdateGreyTagRouteResponse Client::updateGreyTagRoute(const UpdateGreyTagRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGreyTagRouteWithOptions(request, headers, runtime);
}

/**
 * @summary Update the configurations of an Ingress instance.
 *
 * @param request UpdateIngressRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIngressResponse
 */
UpdateIngressResponse Client::updateIngressWithOptions(const UpdateIngressRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  if (!!request.hasCertIds()) {
    query["CertIds"] = request.certIds();
  }

  if (!!request.hasCorsConfig()) {
    query["CorsConfig"] = request.corsConfig();
  }

  if (!!request.hasDefaultRule()) {
    query["DefaultRule"] = request.defaultRule();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnableGzip()) {
    query["EnableGzip"] = request.enableGzip();
  }

  if (!!request.hasEnableXForwardedFor()) {
    query["EnableXForwardedFor"] = request.enableXForwardedFor();
  }

  if (!!request.hasEnableXForwardedForClientSrcPort()) {
    query["EnableXForwardedForClientSrcPort"] = request.enableXForwardedForClientSrcPort();
  }

  if (!!request.hasEnableXForwardedForProto()) {
    query["EnableXForwardedForProto"] = request.enableXForwardedForProto();
  }

  if (!!request.hasEnableXForwardedForSlbId()) {
    query["EnableXForwardedForSlbId"] = request.enableXForwardedForSlbId();
  }

  if (!!request.hasEnableXForwardedForSlbPort()) {
    query["EnableXForwardedForSlbPort"] = request.enableXForwardedForSlbPort();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.idleTimeout();
  }

  if (!!request.hasIngressId()) {
    query["IngressId"] = request.ingressId();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalanceType()) {
    query["LoadBalanceType"] = request.loadBalanceType();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.requestTimeout();
  }

  if (!!request.hasSecurityPolicyId()) {
    query["SecurityPolicyId"] = request.securityPolicyId();
  }

  json body = {};
  if (!!request.hasRules()) {
    body["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateIngress"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/ingress/Ingress")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIngressResponse>();
}

/**
 * @summary Update the configurations of an Ingress instance.
 *
 * @param request UpdateIngressRequest
 * @return UpdateIngressResponse
 */
UpdateIngressResponse Client::updateIngress(const UpdateIngressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateIngressWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a job template.
 *
 * @param request UpdateJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobResponse
 */
UpdateJobResponse Client::updateJobWithOptions(const UpdateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcrAssumeRoleArn()) {
    query["AcrAssumeRoleArn"] = request.acrAssumeRoleArn();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackoffLimit()) {
    query["BackoffLimit"] = request.backoffLimit();
  }

  if (!!request.hasBestEffortType()) {
    query["BestEffortType"] = request.bestEffortType();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasCommandArgs()) {
    query["CommandArgs"] = request.commandArgs();
  }

  if (!!request.hasConcurrencyPolicy()) {
    query["ConcurrencyPolicy"] = request.concurrencyPolicy();
  }

  if (!!request.hasCustomHostAlias()) {
    query["CustomHostAlias"] = request.customHostAlias();
  }

  if (!!request.hasEdasContainerVersion()) {
    query["EdasContainerVersion"] = request.edasContainerVersion();
  }

  if (!!request.hasEnvs()) {
    query["Envs"] = request.envs();
  }

  if (!!request.hasImagePullSecrets()) {
    query["ImagePullSecrets"] = request.imagePullSecrets();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasJarStartArgs()) {
    query["JarStartArgs"] = request.jarStartArgs();
  }

  if (!!request.hasJarStartOptions()) {
    query["JarStartOptions"] = request.jarStartOptions();
  }

  if (!!request.hasJdk()) {
    query["Jdk"] = request.jdk();
  }

  if (!!request.hasMountDesc()) {
    query["MountDesc"] = request.mountDesc();
  }

  if (!!request.hasMountHost()) {
    query["MountHost"] = request.mountHost();
  }

  if (!!request.hasNasConfigs()) {
    query["NasConfigs"] = request.nasConfigs();
  }

  if (!!request.hasNasId()) {
    query["NasId"] = request.nasId();
  }

  if (!!request.hasPackageUrl()) {
    query["PackageUrl"] = request.packageUrl();
  }

  if (!!request.hasPackageVersion()) {
    query["PackageVersion"] = request.packageVersion();
  }

  if (!!request.hasPhpConfigLocation()) {
    query["PhpConfigLocation"] = request.phpConfigLocation();
  }

  if (!!request.hasPostStart()) {
    query["PostStart"] = request.postStart();
  }

  if (!!request.hasPreStop()) {
    query["PreStop"] = request.preStop();
  }

  if (!!request.hasProgrammingLanguage()) {
    query["ProgrammingLanguage"] = request.programmingLanguage();
  }

  if (!!request.hasPython()) {
    query["Python"] = request.python();
  }

  if (!!request.hasPythonModules()) {
    query["PythonModules"] = request.pythonModules();
  }

  if (!!request.hasRefAppId()) {
    query["RefAppId"] = request.refAppId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.replicas();
  }

  if (!!request.hasSlice()) {
    query["Slice"] = request.slice();
  }

  if (!!request.hasSliceEnvs()) {
    query["SliceEnvs"] = request.sliceEnvs();
  }

  if (!!request.hasSlsConfigs()) {
    query["SlsConfigs"] = request.slsConfigs();
  }

  if (!!request.hasTerminationGracePeriodSeconds()) {
    query["TerminationGracePeriodSeconds"] = request.terminationGracePeriodSeconds();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  if (!!request.hasTimezone()) {
    query["Timezone"] = request.timezone();
  }

  if (!!request.hasTomcatConfig()) {
    query["TomcatConfig"] = request.tomcatConfig();
  }

  if (!!request.hasTriggerConfig()) {
    query["TriggerConfig"] = request.triggerConfig();
  }

  if (!!request.hasWarStartOptions()) {
    query["WarStartOptions"] = request.warStartOptions();
  }

  if (!!request.hasWebContainer()) {
    query["WebContainer"] = request.webContainer();
  }

  json body = {};
  if (!!request.hasAcrInstanceId()) {
    body["AcrInstanceId"] = request.acrInstanceId();
  }

  if (!!request.hasConfigMapMountDesc()) {
    body["ConfigMapMountDesc"] = request.configMapMountDesc();
  }

  if (!!request.hasEnableImageAccl()) {
    body["EnableImageAccl"] = request.enableImageAccl();
  }

  if (!!request.hasOssAkId()) {
    body["OssAkId"] = request.ossAkId();
  }

  if (!!request.hasOssAkSecret()) {
    body["OssAkSecret"] = request.ossAkSecret();
  }

  if (!!request.hasOssMountDescs()) {
    body["OssMountDescs"] = request.ossMountDescs();
  }

  if (!!request.hasPhp()) {
    body["Php"] = request.php();
  }

  if (!!request.hasPhpConfig()) {
    body["PhpConfig"] = request.phpConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateJob"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/job/updateJob")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobResponse>();
}

/**
 * @summary Updates a job template.
 *
 * @param request UpdateJobRequest
 * @return UpdateJobResponse
 */
UpdateJobResponse Client::updateJob(const UpdateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateJobWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the information about a namespace.
 *
 * @param request UpdateNamespaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNamespaceResponse
 */
UpdateNamespaceResponse Client::updateNamespaceWithOptions(const UpdateNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableMicroRegistration()) {
    query["EnableMicroRegistration"] = request.enableMicroRegistration();
  }

  if (!!request.hasNameSpaceShortId()) {
    query["NameSpaceShortId"] = request.nameSpaceShortId();
  }

  if (!!request.hasNamespaceDescription()) {
    query["NamespaceDescription"] = request.namespaceDescription();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNamespace"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/paas/namespace")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNamespaceResponse>();
}

/**
 * @summary Updates the information about a namespace.
 *
 * @param request UpdateNamespaceRequest
 * @return UpdateNamespaceResponse
 */
UpdateNamespaceResponse Client::updateNamespace(const UpdateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateNamespaceWithOptions(request, headers, runtime);
}

/**
 * @summary cn-beijing:test
 *
 * @param request UpdateNamespaceVpcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNamespaceVpcResponse
 */
UpdateNamespaceVpcResponse Client::updateNamespaceVpcWithOptions(const UpdateNamespaceVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNameSpaceShortId()) {
    query["NameSpaceShortId"] = request.nameSpaceShortId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNamespaceVpc"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/namespace/updateNamespaceVpc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNamespaceVpcResponse>();
}

/**
 * @summary cn-beijing:test
 *
 * @param request UpdateNamespaceVpcRequest
 * @return UpdateNamespaceVpcResponse
 */
UpdateNamespaceVpcResponse Client::updateNamespaceVpc(const UpdateNamespaceVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateNamespaceVpcWithOptions(request, headers, runtime);
}

/**
 * @summary The HTTP status code. Valid values:
 * *   **2xx**: The call was successful.
 * *   **3xx**: The call was redirected.
 * *   **4xx**: The call failed.
 * *   **5xx**: A server error occurred.
 *
 * @param tmpReq UpdateSecretRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecretResponse
 */
UpdateSecretResponse Client::updateSecretWithOptions(const UpdateSecretRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSecretShrinkRequest request = UpdateSecretShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSecretData()) {
    request.setSecretDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.secretData(), "SecretData", "json"));
  }

  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasSecretDataShrink()) {
    query["SecretData"] = request.secretDataShrink();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSecret"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/secret/secret")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecretResponse>();
}

/**
 * @summary The HTTP status code. Valid values:
 * *   **2xx**: The call was successful.
 * *   **3xx**: The call was redirected.
 * *   **4xx**: The call failed.
 * *   **5xx**: A server error occurred.
 *
 * @param request UpdateSecretRequest
 * @return UpdateSecretResponse
 */
UpdateSecretResponse Client::updateSecret(const UpdateSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSecretWithOptions(request, headers, runtime);
}

/**
 * @summary 更新泳道的启用属性
 *
 * @param request UpdateSwimmingLaneEnableAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSwimmingLaneEnableAttributeResponse
 */
UpdateSwimmingLaneEnableAttributeResponse Client::updateSwimmingLaneEnableAttributeWithOptions(const UpdateSwimmingLaneEnableAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLaneId()) {
    query["LaneId"] = request.laneId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSwimmingLaneEnableAttribute"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/cas/gray/updateSwimmingLaneEnableAttribute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSwimmingLaneEnableAttributeResponse>();
}

/**
 * @summary 更新泳道的启用属性
 *
 * @param request UpdateSwimmingLaneEnableAttributeRequest
 * @return UpdateSwimmingLaneEnableAttributeResponse
 */
UpdateSwimmingLaneEnableAttributeResponse Client::updateSwimmingLaneEnableAttribute(const UpdateSwimmingLaneEnableAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSwimmingLaneEnableAttributeWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the configuration at the web application level.
 *
 * @description You can call the UpdateWebApplication operation to update the configuration at the web application level.
 *
 * @param request UpdateWebApplicationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebApplicationResponse
 */
UpdateWebApplicationResponse Client::updateWebApplicationWithOptions(const string &ApplicationId, const UpdateWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateWebApplication"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/applications/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebApplicationResponse>();
}

/**
 * @summary Updates the configuration at the web application level.
 *
 * @description You can call the UpdateWebApplication operation to update the configuration at the web application level.
 *
 * @param request UpdateWebApplicationRequest
 * @return UpdateWebApplicationResponse
 */
UpdateWebApplicationResponse Client::updateWebApplication(const string &ApplicationId, const UpdateWebApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWebApplicationWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Update the scaling configuration of a web application.
 *
 * @description You can call the UpdateWebApplicationScalingConfig operation to update the scaling configurations of a web application.
 *
 * @param request UpdateWebApplicationScalingConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebApplicationScalingConfigResponse
 */
UpdateWebApplicationScalingConfigResponse Client::updateWebApplicationScalingConfigWithOptions(const string &ApplicationId, const UpdateWebApplicationScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateWebApplicationScalingConfig"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-scaling/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebApplicationScalingConfigResponse>();
}

/**
 * @summary Update the scaling configuration of a web application.
 *
 * @description You can call the UpdateWebApplicationScalingConfig operation to update the scaling configurations of a web application.
 *
 * @param request UpdateWebApplicationScalingConfigRequest
 * @return UpdateWebApplicationScalingConfigResponse
 */
UpdateWebApplicationScalingConfigResponse Client::updateWebApplicationScalingConfig(const string &ApplicationId, const UpdateWebApplicationScalingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWebApplicationScalingConfigWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Update the traffic configurations of a web application.
 *
 * @description Call the UpdateWebApplicationTrafficConfig operation to update the traffic configurations of a web application.
 *
 * @param request UpdateWebApplicationTrafficConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebApplicationTrafficConfigResponse
 */
UpdateWebApplicationTrafficConfigResponse Client::updateWebApplicationTrafficConfigWithOptions(const string &ApplicationId, const UpdateWebApplicationTrafficConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateWebApplicationTrafficConfig"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/application-traffic/" , Darabonba::Encode::Encoder::percentEncode(ApplicationId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebApplicationTrafficConfigResponse>();
}

/**
 * @summary Update the traffic configurations of a web application.
 *
 * @description Call the UpdateWebApplicationTrafficConfig operation to update the traffic configurations of a web application.
 *
 * @param request UpdateWebApplicationTrafficConfigRequest
 * @return UpdateWebApplicationTrafficConfigResponse
 */
UpdateWebApplicationTrafficConfigResponse Client::updateWebApplicationTrafficConfig(const string &ApplicationId, const UpdateWebApplicationTrafficConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWebApplicationTrafficConfigWithOptions(ApplicationId, request, headers, runtime);
}

/**
 * @summary Update a custom domain name.
 *
 * @description Update a custom domain name.
 *
 * @param request UpdateWebCustomDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebCustomDomainResponse
 */
UpdateWebCustomDomainResponse Client::updateWebCustomDomainWithOptions(const string &DomainName, const UpdateWebCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateWebCustomDomain"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v2/api/web/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(DomainName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebCustomDomainResponse>();
}

/**
 * @summary Update a custom domain name.
 *
 * @description Update a custom domain name.
 *
 * @param request UpdateWebCustomDomainRequest
 * @return UpdateWebCustomDomainResponse
 */
UpdateWebCustomDomainResponse Client::updateWebCustomDomain(const string &DomainName, const UpdateWebCustomDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWebCustomDomainWithOptions(DomainName, request, headers, runtime);
}

/**
 * @summary Enables the advanced monitoring feature of Application Real-Time Monitoring Service (ARMS).
 *
 * @description You are charged when you use the ARMS advanced monitoring feature. Enable this feature based on your business requirements. For more information, see [Billing overview](https://icms.alibaba-inc.com/content/arms/arms?l=1\\&m=16992\\&n=3183148).
 *
 * @param request UpgradeApplicationApmServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeApplicationApmServiceResponse
 */
UpgradeApplicationApmServiceResponse Client::upgradeApplicationApmServiceWithOptions(const UpgradeApplicationApmServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeApplicationApmService"},
    {"version" , "2019-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/v1/sam/app/applicationApmService")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeApplicationApmServiceResponse>();
}

/**
 * @summary Enables the advanced monitoring feature of Application Real-Time Monitoring Service (ARMS).
 *
 * @description You are charged when you use the ARMS advanced monitoring feature. Enable this feature based on your business requirements. For more information, see [Billing overview](https://icms.alibaba-inc.com/content/arms/arms?l=1\\&m=16992\\&n=3183148).
 *
 * @param request UpgradeApplicationApmServiceRequest
 * @return UpgradeApplicationApmServiceResponse
 */
UpgradeApplicationApmServiceResponse Client::upgradeApplicationApmService(const UpgradeApplicationApmServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upgradeApplicationApmServiceWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Sae20190506