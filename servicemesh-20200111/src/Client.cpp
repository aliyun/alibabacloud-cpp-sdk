#include <darabonba/Core.hpp>
#include <alibabacloud/Servicemesh20200111.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Servicemesh20200111::Models;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{

AlibabaCloud::Servicemesh20200111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("servicemesh", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a cluster to an ASM instance.
 *
 * @param request AddClusterIntoServiceMeshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddClusterIntoServiceMeshResponse
 */
AddClusterIntoServiceMeshResponse Client::addClusterIntoServiceMeshWithOptions(const AddClusterIntoServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDiscoveryOnly()) {
    body["DiscoveryOnly"] = request.discoveryOnly();
  }

  if (!!request.hasIgnoreNamespaceCheck()) {
    body["IgnoreNamespaceCheck"] = request.ignoreNamespaceCheck();
  }

  if (!!request.hasKubeconfig()) {
    body["Kubeconfig"] = request.kubeconfig();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddClusterIntoServiceMesh"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddClusterIntoServiceMeshResponse>();
}

/**
 * @summary Adds a cluster to an ASM instance.
 *
 * @param request AddClusterIntoServiceMeshRequest
 * @return AddClusterIntoServiceMeshResponse
 */
AddClusterIntoServiceMeshResponse Client::addClusterIntoServiceMesh(const AddClusterIntoServiceMeshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addClusterIntoServiceMeshWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddVMIntoServiceMesh is deprecated
 *
 * @summary Adds a virtual machine (VM) to a Service Mesh (ASM) instance.
 *
 * @param request AddVMIntoServiceMeshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVMIntoServiceMeshResponse
 */
AddVMIntoServiceMeshResponse Client::addVMIntoServiceMeshWithOptions(const AddVMIntoServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcsId()) {
    query["EcsId"] = request.ecsId();
  }

  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddVMIntoServiceMesh"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddVMIntoServiceMeshResponse>();
}

/**
 * @deprecated OpenAPI AddVMIntoServiceMesh is deprecated
 *
 * @summary Adds a virtual machine (VM) to a Service Mesh (ASM) instance.
 *
 * @param request AddVMIntoServiceMeshRequest
 * @return AddVMIntoServiceMeshResponse
 */
AddVMIntoServiceMeshResponse Client::addVMIntoServiceMesh(const AddVMIntoServiceMeshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVMIntoServiceMeshWithOptions(request, runtime);
}

/**
 * @summary Creates a Service Mesh (ASM) gateway.
 *
 * @param request CreateASMGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateASMGatewayResponse
 */
CreateASMGatewayResponse Client::createASMGatewayWithOptions(const CreateASMGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["Body"] = request.body();
  }

  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateASMGateway"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateASMGatewayResponse>();
}

/**
 * @summary Creates a Service Mesh (ASM) gateway.
 *
 * @param request CreateASMGatewayRequest
 * @return CreateASMGatewayResponse
 */
CreateASMGatewayResponse Client::createASMGateway(const CreateASMGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createASMGatewayWithOptions(request, runtime);
}

/**
 * @summary Creates a secret for a Service Mesh (ASM) gateway.
 *
 * @param request CreateGatewaySecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewaySecretResponse
 */
CreateGatewaySecretResponse Client::createGatewaySecretWithOptions(const CreateGatewaySecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCert()) {
    body["Cert"] = request.cert();
  }

  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasKey()) {
    body["Key"] = request.key();
  }

  if (!!request.hasSecretName()) {
    body["SecretName"] = request.secretName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateGatewaySecret"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewaySecretResponse>();
}

/**
 * @summary Creates a secret for a Service Mesh (ASM) gateway.
 *
 * @param request CreateGatewaySecretRequest
 * @return CreateGatewaySecretResponse
 */
CreateGatewaySecretResponse Client::createGatewaySecret(const CreateGatewaySecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGatewaySecretWithOptions(request, runtime);
}

/**
 * @summary Adds domain names for a Service Mesh (ASM) gateway.
 *
 * @param request CreateIstioGatewayDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIstioGatewayDomainsResponse
 */
CreateIstioGatewayDomainsResponse Client::createIstioGatewayDomainsWithOptions(const CreateIstioGatewayDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCredential()) {
    body["Credential"] = request.credential();
  }

  if (!!request.hasForceHttps()) {
    body["ForceHttps"] = request.forceHttps();
  }

  if (!!request.hasHosts()) {
    body["Hosts"] = request.hosts();
  }

  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasLimit()) {
    body["Limit"] = request.limit();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNumber()) {
    body["Number"] = request.number();
  }

  if (!!request.hasPortName()) {
    body["PortName"] = request.portName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.protocol();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateIstioGatewayDomains"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIstioGatewayDomainsResponse>();
}

/**
 * @summary Adds domain names for a Service Mesh (ASM) gateway.
 *
 * @param request CreateIstioGatewayDomainsRequest
 * @return CreateIstioGatewayDomainsResponse
 */
CreateIstioGatewayDomainsResponse Client::createIstioGatewayDomains(const CreateIstioGatewayDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIstioGatewayDomainsWithOptions(request, runtime);
}

/**
 * @summary Creates a routing rule for a Service Mesh (ASM) gateway.
 *
 * @param tmpReq CreateIstioGatewayRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIstioGatewayRoutesResponse
 */
CreateIstioGatewayRoutesResponse Client::createIstioGatewayRoutesWithOptions(const CreateIstioGatewayRoutesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateIstioGatewayRoutesShrinkRequest request = CreateIstioGatewayRoutesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGatewayRoute()) {
    request.setGatewayRouteShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.gatewayRoute(), "GatewayRoute", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasGatewayRouteShrink()) {
    body["GatewayRoute"] = request.gatewayRouteShrink();
  }

  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateIstioGatewayRoutes"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIstioGatewayRoutesResponse>();
}

/**
 * @summary Creates a routing rule for a Service Mesh (ASM) gateway.
 *
 * @param request CreateIstioGatewayRoutesRequest
 * @return CreateIstioGatewayRoutesResponse
 */
CreateIstioGatewayRoutesResponse Client::createIstioGatewayRoutes(const CreateIstioGatewayRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIstioGatewayRoutesWithOptions(request, runtime);
}

/**
 * @summary Creates a Service Mesh (ASM) instance.
 *
 * @param request CreateServiceMeshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceMeshResponse
 */
CreateServiceMeshResponse Client::createServiceMeshWithOptions(const CreateServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  json body = {};
  if (!!request.hasAccessLogEnabled()) {
    body["AccessLogEnabled"] = request.accessLogEnabled();
  }

  if (!!request.hasAccessLogFile()) {
    body["AccessLogFile"] = request.accessLogFile();
  }

  if (!!request.hasAccessLogFormat()) {
    body["AccessLogFormat"] = request.accessLogFormat();
  }

  if (!!request.hasAccessLogProject()) {
    body["AccessLogProject"] = request.accessLogProject();
  }

  if (!!request.hasAccessLogServiceEnabled()) {
    body["AccessLogServiceEnabled"] = request.accessLogServiceEnabled();
  }

  if (!!request.hasAccessLogServiceHost()) {
    body["AccessLogServiceHost"] = request.accessLogServiceHost();
  }

  if (!!request.hasAccessLogServicePort()) {
    body["AccessLogServicePort"] = request.accessLogServicePort();
  }

  if (!!request.hasApiServerLoadBalancerSpec()) {
    body["ApiServerLoadBalancerSpec"] = request.apiServerLoadBalancerSpec();
  }

  if (!!request.hasApiServerPublicEip()) {
    body["ApiServerPublicEip"] = request.apiServerPublicEip();
  }

  if (!!request.hasAuditProject()) {
    body["AuditProject"] = request.auditProject();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasAutoRenewPeriod()) {
    body["AutoRenewPeriod"] = request.autoRenewPeriod();
  }

  if (!!request.hasCRAggregationEnabled()) {
    body["CRAggregationEnabled"] = request.CRAggregationEnabled();
  }

  if (!!request.hasCertChain()) {
    body["CertChain"] = request.certChain();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasClusterDomain()) {
    body["ClusterDomain"] = request.clusterDomain();
  }

  if (!!request.hasClusterSpec()) {
    body["ClusterSpec"] = request.clusterSpec();
  }

  if (!!request.hasConfigSourceEnabled()) {
    body["ConfigSourceEnabled"] = request.configSourceEnabled();
  }

  if (!!request.hasConfigSourceNacosID()) {
    body["ConfigSourceNacosID"] = request.configSourceNacosID();
  }

  if (!!request.hasControlPlaneLogEnabled()) {
    body["ControlPlaneLogEnabled"] = request.controlPlaneLogEnabled();
  }

  if (!!request.hasControlPlaneLogProject()) {
    body["ControlPlaneLogProject"] = request.controlPlaneLogProject();
  }

  if (!!request.hasCustomizedPrometheus()) {
    body["CustomizedPrometheus"] = request.customizedPrometheus();
  }

  if (!!request.hasCustomizedZipkin()) {
    body["CustomizedZipkin"] = request.customizedZipkin();
  }

  if (!!request.hasDNSProxyingEnabled()) {
    body["DNSProxyingEnabled"] = request.DNSProxyingEnabled();
  }

  if (!!request.hasDubboFilterEnabled()) {
    body["DubboFilterEnabled"] = request.dubboFilterEnabled();
  }

  if (!!request.hasEdition()) {
    body["Edition"] = request.edition();
  }

  if (!!request.hasEnableACMG()) {
    body["EnableACMG"] = request.enableACMG();
  }

  if (!!request.hasEnableAmbient()) {
    body["EnableAmbient"] = request.enableAmbient();
  }

  if (!!request.hasEnableAudit()) {
    body["EnableAudit"] = request.enableAudit();
  }

  if (!!request.hasEnableCRHistory()) {
    body["EnableCRHistory"] = request.enableCRHistory();
  }

  if (!!request.hasEnableSDSServer()) {
    body["EnableSDSServer"] = request.enableSDSServer();
  }

  if (!!request.hasExcludeIPRanges()) {
    body["ExcludeIPRanges"] = request.excludeIPRanges();
  }

  if (!!request.hasExcludeInboundPorts()) {
    body["ExcludeInboundPorts"] = request.excludeInboundPorts();
  }

  if (!!request.hasExcludeOutboundPorts()) {
    body["ExcludeOutboundPorts"] = request.excludeOutboundPorts();
  }

  if (!!request.hasExistingCaCert()) {
    body["ExistingCaCert"] = request.existingCaCert();
  }

  if (!!request.hasExistingCaKey()) {
    body["ExistingCaKey"] = request.existingCaKey();
  }

  if (!!request.hasExistingCaType()) {
    body["ExistingCaType"] = request.existingCaType();
  }

  if (!!request.hasExistingRootCaCert()) {
    body["ExistingRootCaCert"] = request.existingRootCaCert();
  }

  if (!!request.hasExistingRootCaKey()) {
    body["ExistingRootCaKey"] = request.existingRootCaKey();
  }

  if (!!request.hasFilterGatewayClusterConfig()) {
    body["FilterGatewayClusterConfig"] = request.filterGatewayClusterConfig();
  }

  if (!!request.hasGatewayAPIEnabled()) {
    body["GatewayAPIEnabled"] = request.gatewayAPIEnabled();
  }

  if (!!request.hasGuestCluster()) {
    body["GuestCluster"] = request.guestCluster();
  }

  if (!!request.hasIncludeIPRanges()) {
    body["IncludeIPRanges"] = request.includeIPRanges();
  }

  if (!!request.hasIstioVersion()) {
    body["IstioVersion"] = request.istioVersion();
  }

  if (!!request.hasKialiEnabled()) {
    body["KialiEnabled"] = request.kialiEnabled();
  }

  if (!!request.hasLocalityLBConf()) {
    body["LocalityLBConf"] = request.localityLBConf();
  }

  if (!!request.hasLocalityLoadBalancing()) {
    body["LocalityLoadBalancing"] = request.localityLoadBalancing();
  }

  if (!!request.hasMSEEnabled()) {
    body["MSEEnabled"] = request.MSEEnabled();
  }

  if (!!request.hasMultiBufferEnabled()) {
    body["MultiBufferEnabled"] = request.multiBufferEnabled();
  }

  if (!!request.hasMultiBufferPollDelay()) {
    body["MultiBufferPollDelay"] = request.multiBufferPollDelay();
  }

  if (!!request.hasMysqlFilterEnabled()) {
    body["MysqlFilterEnabled"] = request.mysqlFilterEnabled();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOPALimitCPU()) {
    body["OPALimitCPU"] = request.OPALimitCPU();
  }

  if (!!request.hasOPALimitMemory()) {
    body["OPALimitMemory"] = request.OPALimitMemory();
  }

  if (!!request.hasOPALogLevel()) {
    body["OPALogLevel"] = request.OPALogLevel();
  }

  if (!!request.hasOPARequestCPU()) {
    body["OPARequestCPU"] = request.OPARequestCPU();
  }

  if (!!request.hasOPARequestMemory()) {
    body["OPARequestMemory"] = request.OPARequestMemory();
  }

  if (!!request.hasOpaEnabled()) {
    body["OpaEnabled"] = request.opaEnabled();
  }

  if (!!request.hasOpenAgentPolicy()) {
    body["OpenAgentPolicy"] = request.openAgentPolicy();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.period();
  }

  if (!!request.hasPilotLoadBalancerSpec()) {
    body["PilotLoadBalancerSpec"] = request.pilotLoadBalancerSpec();
  }

  if (!!request.hasPlaygroundScene()) {
    body["PlaygroundScene"] = request.playgroundScene();
  }

  if (!!request.hasPrometheusUrl()) {
    body["PrometheusUrl"] = request.prometheusUrl();
  }

  if (!!request.hasProxyLimitCPU()) {
    body["ProxyLimitCPU"] = request.proxyLimitCPU();
  }

  if (!!request.hasProxyLimitMemory()) {
    body["ProxyLimitMemory"] = request.proxyLimitMemory();
  }

  if (!!request.hasProxyRequestCPU()) {
    body["ProxyRequestCPU"] = request.proxyRequestCPU();
  }

  if (!!request.hasProxyRequestMemory()) {
    body["ProxyRequestMemory"] = request.proxyRequestMemory();
  }

  if (!!request.hasRedisFilterEnabled()) {
    body["RedisFilterEnabled"] = request.redisFilterEnabled();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTelemetry()) {
    body["Telemetry"] = request.telemetry();
  }

  if (!!request.hasThriftFilterEnabled()) {
    body["ThriftFilterEnabled"] = request.thriftFilterEnabled();
  }

  if (!!request.hasTraceSampling()) {
    body["TraceSampling"] = request.traceSampling();
  }

  if (!!request.hasTracing()) {
    body["Tracing"] = request.tracing();
  }

  if (!!request.hasUseExistingCA()) {
    body["UseExistingCA"] = request.useExistingCA();
  }

  if (!!request.hasVSwitches()) {
    body["VSwitches"] = request.vSwitches();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasWebAssemblyFilterEnabled()) {
    body["WebAssemblyFilterEnabled"] = request.webAssemblyFilterEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceMesh"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceMeshResponse>();
}

/**
 * @summary Creates a Service Mesh (ASM) instance.
 *
 * @param request CreateServiceMeshRequest
 * @return CreateServiceMeshResponse
 */
CreateServiceMeshResponse Client::createServiceMesh(const CreateServiceMeshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceMeshWithOptions(request, runtime);
}

/**
 * @summary Creates a lane.
 *
 * @param request CreateSwimLaneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSwimLaneResponse
 */
CreateSwimLaneResponse Client::createSwimLaneWithOptions(const CreateSwimLaneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasLabelSelectorKey()) {
    body["LabelSelectorKey"] = request.labelSelectorKey();
  }

  if (!!request.hasLabelSelectorValue()) {
    body["LabelSelectorValue"] = request.labelSelectorValue();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasServicesList()) {
    body["ServicesList"] = request.servicesList();
  }

  if (!!request.hasSwimLaneName()) {
    body["SwimLaneName"] = request.swimLaneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSwimLane"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSwimLaneResponse>();
}

/**
 * @summary Creates a lane.
 *
 * @param request CreateSwimLaneRequest
 * @return CreateSwimLaneResponse
 */
CreateSwimLaneResponse Client::createSwimLane(const CreateSwimLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSwimLaneWithOptions(request, runtime);
}

/**
 * @summary Creates a lane group.
 *
 * @param request CreateSwimLaneGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSwimLaneGroupResponse
 */
CreateSwimLaneGroupResponse Client::createSwimLaneGroupWithOptions(const CreateSwimLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasIngressGatewayName()) {
    body["IngressGatewayName"] = request.ingressGatewayName();
  }

  if (!!request.hasIngressGatewayNamespace()) {
    body["IngressGatewayNamespace"] = request.ingressGatewayNamespace();
  }

  if (!!request.hasIngressType()) {
    body["IngressType"] = request.ingressType();
  }

  if (!!request.hasIsPermissive()) {
    body["IsPermissive"] = request.isPermissive();
  }

  if (!!request.hasRouteHeader()) {
    body["RouteHeader"] = request.routeHeader();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasServicesList()) {
    body["ServicesList"] = request.servicesList();
  }

  if (!!request.hasTraceHeader()) {
    body["TraceHeader"] = request.traceHeader();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSwimLaneGroup"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSwimLaneGroupResponse>();
}

/**
 * @summary Creates a lane group.
 *
 * @param request CreateSwimLaneGroupRequest
 * @return CreateSwimLaneGroupResponse
 */
CreateSwimLaneGroupResponse Client::createSwimLaneGroup(const CreateSwimLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSwimLaneGroupWithOptions(request, runtime);
}

/**
 * @summary 创建Waypoint
 *
 * @param request CreateWaypointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWaypointResponse
 */
CreateWaypointResponse Client::createWaypointWithOptions(const CreateWaypointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasHPAEnabled()) {
    body["HPAEnabled"] = request.HPAEnabled();
  }

  if (!!request.hasHPAMaxReplicas()) {
    body["HPAMaxReplicas"] = request.HPAMaxReplicas();
  }

  if (!!request.hasHPAMinReplicas()) {
    body["HPAMinReplicas"] = request.HPAMinReplicas();
  }

  if (!!request.hasHPATargetCPU()) {
    body["HPATargetCPU"] = request.HPATargetCPU();
  }

  if (!!request.hasHPATargetMemory()) {
    body["HPATargetMemory"] = request.HPATargetMemory();
  }

  if (!!request.hasLimitCPU()) {
    body["LimitCPU"] = request.limitCPU();
  }

  if (!!request.hasLimitMemory()) {
    body["LimitMemory"] = request.limitMemory();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasPreferECI()) {
    body["PreferECI"] = request.preferECI();
  }

  if (!!request.hasReplicas()) {
    body["Replicas"] = request.replicas();
  }

  if (!!request.hasRequestCPU()) {
    body["RequestCPU"] = request.requestCPU();
  }

  if (!!request.hasRequestMemory()) {
    body["RequestMemory"] = request.requestMemory();
  }

  if (!!request.hasServiceAccount()) {
    body["ServiceAccount"] = request.serviceAccount();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWaypoint"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWaypointResponse>();
}

/**
 * @summary 创建Waypoint
 *
 * @param request CreateWaypointRequest
 * @return CreateWaypointResponse
 */
CreateWaypointResponse Client::createWaypoint(const CreateWaypointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWaypointWithOptions(request, runtime);
}

/**
 * @summary Deletes a routing rule for a Service Mesh (ASM) gateway.
 *
 * @param request DeleteGatewayRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayRouteResponse
 */
DeleteGatewayRouteResponse Client::deleteGatewayRouteWithOptions(const DeleteGatewayRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasRouteName()) {
    body["RouteName"] = request.routeName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayRoute"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayRouteResponse>();
}

/**
 * @summary Deletes a routing rule for a Service Mesh (ASM) gateway.
 *
 * @param request DeleteGatewayRouteRequest
 * @return DeleteGatewayRouteResponse
 */
DeleteGatewayRouteResponse Client::deleteGatewayRoute(const DeleteGatewayRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewayRouteWithOptions(request, runtime);
}

/**
 * @summary Deletes a secret for a Service Mesh (ASM) gateway.
 *
 * @param request DeleteGatewaySecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewaySecretResponse
 */
DeleteGatewaySecretResponse Client::deleteGatewaySecretWithOptions(const DeleteGatewaySecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasSecretName()) {
    body["SecretName"] = request.secretName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteGatewaySecret"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewaySecretResponse>();
}

/**
 * @summary Deletes a secret for a Service Mesh (ASM) gateway.
 *
 * @param request DeleteGatewaySecretRequest
 * @return DeleteGatewaySecretResponse
 */
DeleteGatewaySecretResponse Client::deleteGatewaySecret(const DeleteGatewaySecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGatewaySecretWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more domain names for a Service Mesh (ASM) gateway.
 *
 * @param request DeleteIstioGatewayDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIstioGatewayDomainsResponse
 */
DeleteIstioGatewayDomainsResponse Client::deleteIstioGatewayDomainsWithOptions(const DeleteIstioGatewayDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHosts()) {
    body["Hosts"] = request.hosts();
  }

  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasLimit()) {
    body["Limit"] = request.limit();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasPortName()) {
    body["PortName"] = request.portName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteIstioGatewayDomains"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIstioGatewayDomainsResponse>();
}

/**
 * @summary Deletes one or more domain names for a Service Mesh (ASM) gateway.
 *
 * @param request DeleteIstioGatewayDomainsRequest
 * @return DeleteIstioGatewayDomainsResponse
 */
DeleteIstioGatewayDomainsResponse Client::deleteIstioGatewayDomains(const DeleteIstioGatewayDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIstioGatewayDomainsWithOptions(request, runtime);
}

/**
 * @summary Deletes a Service Mesh (ASM) instance.
 *
 * @param request DeleteServiceMeshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceMeshResponse
 */
DeleteServiceMeshResponse Client::deleteServiceMeshWithOptions(const DeleteServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasForce()) {
    body["Force"] = request.force();
  }

  if (!!request.hasRetainResources()) {
    body["RetainResources"] = request.retainResources();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteServiceMesh"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceMeshResponse>();
}

/**
 * @summary Deletes a Service Mesh (ASM) instance.
 *
 * @param request DeleteServiceMeshRequest
 * @return DeleteServiceMeshResponse
 */
DeleteServiceMeshResponse Client::deleteServiceMesh(const DeleteServiceMeshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceMeshWithOptions(request, runtime);
}

/**
 * @summary Deletes a lane.
 *
 * @param request DeleteSwimLaneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSwimLaneResponse
 */
DeleteSwimLaneResponse Client::deleteSwimLaneWithOptions(const DeleteSwimLaneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasSwimLaneName()) {
    body["SwimLaneName"] = request.swimLaneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSwimLane"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSwimLaneResponse>();
}

/**
 * @summary Deletes a lane.
 *
 * @param request DeleteSwimLaneRequest
 * @return DeleteSwimLaneResponse
 */
DeleteSwimLaneResponse Client::deleteSwimLane(const DeleteSwimLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSwimLaneWithOptions(request, runtime);
}

/**
 * @summary Deletes a lane group. If a lane group is deleted, the lanes in the group and the traffic routing rules attached to the lanes are deleted.
 *
 * @param request DeleteSwimLaneGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSwimLaneGroupResponse
 */
DeleteSwimLaneGroupResponse Client::deleteSwimLaneGroupWithOptions(const DeleteSwimLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSwimLaneGroup"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSwimLaneGroupResponse>();
}

/**
 * @summary Deletes a lane group. If a lane group is deleted, the lanes in the group and the traffic routing rules attached to the lanes are deleted.
 *
 * @param request DeleteSwimLaneGroupRequest
 * @return DeleteSwimLaneGroupResponse
 */
DeleteSwimLaneGroupResponse Client::deleteSwimLaneGroup(const DeleteSwimLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSwimLaneGroupWithOptions(request, runtime);
}

/**
 * @summary 删除Waypoint资源
 *
 * @param request DeleteWaypointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWaypointResponse
 */
DeleteWaypointResponse Client::deleteWaypointWithOptions(const DeleteWaypointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWaypoint"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWaypointResponse>();
}

/**
 * @summary 删除Waypoint资源
 *
 * @param request DeleteWaypointRequest
 * @return DeleteWaypointResponse
 */
DeleteWaypointResponse Client::deleteWaypoint(const DeleteWaypointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWaypointWithOptions(request, runtime);
}

/**
 * @summary Queries the information about imported services on a Service Mesh (ASM) gateway.
 *
 * @param request DescribeASMGatewayImportedServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeASMGatewayImportedServicesResponse
 */
DescribeASMGatewayImportedServicesResponse Client::describeASMGatewayImportedServicesWithOptions(const DescribeASMGatewayImportedServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasASMGatewayName()) {
    body["ASMGatewayName"] = request.ASMGatewayName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasServiceNamespace()) {
    body["ServiceNamespace"] = request.serviceNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeASMGatewayImportedServices"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeASMGatewayImportedServicesResponse>();
}

/**
 * @summary Queries the information about imported services on a Service Mesh (ASM) gateway.
 *
 * @param request DescribeASMGatewayImportedServicesRequest
 * @return DescribeASMGatewayImportedServicesResponse
 */
DescribeASMGatewayImportedServicesResponse Client::describeASMGatewayImportedServices(const DescribeASMGatewayImportedServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeASMGatewayImportedServicesWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of the Cloud Controller Manager (CCM) component.
 *
 * @param request DescribeCCMVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCCMVersionResponse
 */
DescribeCCMVersionResponse Client::describeCCMVersionWithOptions(const DescribeCCMVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCCMVersion"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCCMVersionResponse>();
}

/**
 * @summary Queries the versions of the Cloud Controller Manager (CCM) component.
 *
 * @param request DescribeCCMVersionRequest
 * @return DescribeCCMVersionResponse
 */
DescribeCCMVersionResponse Client::describeCCMVersion(const DescribeCCMVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCCMVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the network connectivity between clusters that are deployed across virtual private clouds (VPCs) in a Service Mesh (ASM) instance.
 *
 * @param request DescribeCensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCensResponse
 */
DescribeCensResponse Client::describeCensWithOptions(const DescribeCensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCens"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCensResponse>();
}

/**
 * @summary Queries the network connectivity between clusters that are deployed across virtual private clouds (VPCs) in a Service Mesh (ASM) instance.
 *
 * @param request DescribeCensRequest
 * @return DescribeCensResponse
 */
DescribeCensResponse Client::describeCens(const DescribeCensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCensWithOptions(request, runtime);
}

/**
 * @summary Queries the information about Grafana dashboards of a cluster in a Service Mesh (ASM) instance.
 *
 * @param request DescribeClusterGrafanaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterGrafanaResponse
 */
DescribeClusterGrafanaResponse Client::describeClusterGrafanaWithOptions(const DescribeClusterGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasK8sClusterId()) {
    query["K8sClusterId"] = request.k8sClusterId();
  }

  if (!!request.hasReAddPrometheusIntegration()) {
    query["ReAddPrometheusIntegration"] = request.reAddPrometheusIntegration();
  }

  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterGrafana"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterGrafanaResponse>();
}

/**
 * @summary Queries the information about Grafana dashboards of a cluster in a Service Mesh (ASM) instance.
 *
 * @param request DescribeClusterGrafanaRequest
 * @return DescribeClusterGrafanaResponse
 */
DescribeClusterGrafanaResponse Client::describeClusterGrafana(const DescribeClusterGrafanaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterGrafanaWithOptions(request, runtime);
}

/**
 * @summary Queries the public endpoint of the Prometheus service that is used to monitor a cluster in an Alibaba Cloud Service Mesh (ASM) instance.
 *
 * @param request DescribeClusterPrometheusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterPrometheusResponse
 */
DescribeClusterPrometheusResponse Client::describeClusterPrometheusWithOptions(const DescribeClusterPrometheusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasK8sClusterId()) {
    query["K8sClusterId"] = request.k8sClusterId();
  }

  if (!!request.hasK8sClusterRegionId()) {
    query["K8sClusterRegionId"] = request.k8sClusterRegionId();
  }

  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterPrometheus"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterPrometheusResponse>();
}

/**
 * @summary Queries the public endpoint of the Prometheus service that is used to monitor a cluster in an Alibaba Cloud Service Mesh (ASM) instance.
 *
 * @param request DescribeClusterPrometheusRequest
 * @return DescribeClusterPrometheusResponse
 */
DescribeClusterPrometheusResponse Client::describeClusterPrometheus(const DescribeClusterPrometheusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterPrometheusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about clusters in a Service Mesh (ASM) instance.
 *
 * @param request DescribeClustersInServiceMeshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClustersInServiceMeshResponse
 */
DescribeClustersInServiceMeshResponse Client::describeClustersInServiceMeshWithOptions(const DescribeClustersInServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClustersInServiceMesh"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClustersInServiceMeshResponse>();
}

/**
 * @summary Queries the information about clusters in a Service Mesh (ASM) instance.
 *
 * @param request DescribeClustersInServiceMeshRequest
 * @return DescribeClustersInServiceMeshResponse
 */
DescribeClustersInServiceMeshResponse Client::describeClustersInServiceMesh(const DescribeClustersInServiceMeshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClustersInServiceMeshWithOptions(request, runtime);
}

/**
 * @summary Queries the common YAML templates of Istio resources used by Service Mesh (ASM) instances.
 *
 * @param request DescribeCrTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCrTemplatesResponse
 */
DescribeCrTemplatesResponse Client::describeCrTemplatesWithOptions(const DescribeCrTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIstioVersion()) {
    body["IstioVersion"] = request.istioVersion();
  }

  if (!!request.hasKind()) {
    body["Kind"] = request.kind();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeCrTemplates"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCrTemplatesResponse>();
}

/**
 * @summary Queries the common YAML templates of Istio resources used by Service Mesh (ASM) instances.
 *
 * @param request DescribeCrTemplatesRequest
 * @return DescribeCrTemplatesResponse
 */
DescribeCrTemplatesResponse Client::describeCrTemplates(const DescribeCrTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCrTemplatesWithOptions(request, runtime);
}

/**
 * @summary DescribeEipResources
 *
 * @param request DescribeEipResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEipResourcesResponse
 */
DescribeEipResourcesResponse Client::describeEipResourcesWithOptions(const DescribeEipResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeEipResources"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEipResourcesResponse>();
}

/**
 * @summary DescribeEipResources
 *
 * @param request DescribeEipResourcesRequest
 * @return DescribeEipResourcesResponse
 */
DescribeEipResourcesResponse Client::describeEipResources(const DescribeEipResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEipResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a secret of a Service Mesh (ASM) gateway.
 *
 * @param request DescribeGatewaySecretDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGatewaySecretDetailsResponse
 */
DescribeGatewaySecretDetailsResponse Client::describeGatewaySecretDetailsWithOptions(const DescribeGatewaySecretDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeGatewaySecretDetails"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGatewaySecretDetailsResponse>();
}

/**
 * @summary Queries the detailed information about a secret of a Service Mesh (ASM) gateway.
 *
 * @param request DescribeGatewaySecretDetailsRequest
 * @return DescribeGatewaySecretDetailsResponse
 */
DescribeGatewaySecretDetailsResponse Client::describeGatewaySecretDetails(const DescribeGatewaySecretDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGatewaySecretDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the access log dashboards of a cluster on the data plane.
 *
 * @param request DescribeGuestClusterAccessLogDashboardsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGuestClusterAccessLogDashboardsResponse
 */
DescribeGuestClusterAccessLogDashboardsResponse Client::describeGuestClusterAccessLogDashboardsWithOptions(const DescribeGuestClusterAccessLogDashboardsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasK8sClusterId()) {
    body["K8sClusterId"] = request.k8sClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeGuestClusterAccessLogDashboards"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGuestClusterAccessLogDashboardsResponse>();
}

/**
 * @summary Queries the access log dashboards of a cluster on the data plane.
 *
 * @param request DescribeGuestClusterAccessLogDashboardsRequest
 * @return DescribeGuestClusterAccessLogDashboardsResponse
 */
DescribeGuestClusterAccessLogDashboardsResponse Client::describeGuestClusterAccessLogDashboards(const DescribeGuestClusterAccessLogDashboardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGuestClusterAccessLogDashboardsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of the namespaces of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
 *
 * @param request DescribeGuestClusterNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGuestClusterNamespacesResponse
 */
DescribeGuestClusterNamespacesResponse Client::describeGuestClusterNamespacesWithOptions(const DescribeGuestClusterNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGuestClusterID()) {
    body["GuestClusterID"] = request.guestClusterID();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasShowNsLabels()) {
    body["ShowNsLabels"] = request.showNsLabels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeGuestClusterNamespaces"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGuestClusterNamespacesResponse>();
}

/**
 * @summary Queries a list of the namespaces of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
 *
 * @param request DescribeGuestClusterNamespacesRequest
 * @return DescribeGuestClusterNamespacesResponse
 */
DescribeGuestClusterNamespacesResponse Client::describeGuestClusterNamespaces(const DescribeGuestClusterNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGuestClusterNamespacesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of the pods in a specified namespace of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
 *
 * @param request DescribeGuestClusterPodsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGuestClusterPodsResponse
 */
DescribeGuestClusterPodsResponse Client::describeGuestClusterPodsWithOptions(const DescribeGuestClusterPodsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGuestClusterID()) {
    body["GuestClusterID"] = request.guestClusterID();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeGuestClusterPods"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGuestClusterPodsResponse>();
}

/**
 * @summary Queries a list of the pods in a specified namespace of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
 *
 * @param request DescribeGuestClusterPodsRequest
 * @return DescribeGuestClusterPodsResponse
 */
DescribeGuestClusterPodsResponse Client::describeGuestClusterPods(const DescribeGuestClusterPodsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGuestClusterPodsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the imported services on a Service Mesh (ASM) gateway.
 *
 * @param request DescribeImportedServicesDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeImportedServicesDetailResponse
 */
DescribeImportedServicesDetailResponse Client::describeImportedServicesDetailWithOptions(const DescribeImportedServicesDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasASMGatewayName()) {
    body["ASMGatewayName"] = request.ASMGatewayName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasServiceNamespace()) {
    body["ServiceNamespace"] = request.serviceNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeImportedServicesDetail"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeImportedServicesDetailResponse>();
}

/**
 * @summary Queries the details of the imported services on a Service Mesh (ASM) gateway.
 *
 * @param request DescribeImportedServicesDetailRequest
 * @return DescribeImportedServicesDetailResponse
 */
DescribeImportedServicesDetailResponse Client::describeImportedServicesDetail(const DescribeImportedServicesDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeImportedServicesDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of the domain names that are exposed by a Service Mesh (ASM) gateway.
 *
 * @param request DescribeIstioGatewayDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIstioGatewayDomainsResponse
 */
DescribeIstioGatewayDomainsResponse Client::describeIstioGatewayDomainsWithOptions(const DescribeIstioGatewayDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasLimit()) {
    body["Limit"] = request.limit();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeIstioGatewayDomains"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIstioGatewayDomainsResponse>();
}

/**
 * @summary Queries a list of the domain names that are exposed by a Service Mesh (ASM) gateway.
 *
 * @param request DescribeIstioGatewayDomainsRequest
 * @return DescribeIstioGatewayDomainsResponse
 */
DescribeIstioGatewayDomainsResponse Client::describeIstioGatewayDomains(const DescribeIstioGatewayDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIstioGatewayDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a routing rule of an Alibaba Cloud Service Mesh (ASM) gateway.
 *
 * @param request DescribeIstioGatewayRouteDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIstioGatewayRouteDetailResponse
 */
DescribeIstioGatewayRouteDetailResponse Client::describeIstioGatewayRouteDetailWithOptions(const DescribeIstioGatewayRouteDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasRouteName()) {
    body["RouteName"] = request.routeName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeIstioGatewayRouteDetail"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIstioGatewayRouteDetailResponse>();
}

/**
 * @summary Queries the detailed information about a routing rule of an Alibaba Cloud Service Mesh (ASM) gateway.
 *
 * @param request DescribeIstioGatewayRouteDetailRequest
 * @return DescribeIstioGatewayRouteDetailResponse
 */
DescribeIstioGatewayRouteDetailResponse Client::describeIstioGatewayRouteDetail(const DescribeIstioGatewayRouteDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIstioGatewayRouteDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the routing rules for a Service Mesh (ASM) gateway.
 *
 * @param request DescribeIstioGatewayRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIstioGatewayRoutesResponse
 */
DescribeIstioGatewayRoutesResponse Client::describeIstioGatewayRoutesWithOptions(const DescribeIstioGatewayRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeIstioGatewayRoutes"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIstioGatewayRoutesResponse>();
}

/**
 * @summary Queries the routing rules for a Service Mesh (ASM) gateway.
 *
 * @param request DescribeIstioGatewayRoutesRequest
 * @return DescribeIstioGatewayRoutesResponse
 */
DescribeIstioGatewayRoutesResponse Client::describeIstioGatewayRoutes(const DescribeIstioGatewayRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIstioGatewayRoutesWithOptions(request, runtime);
}

/**
 * @summary 获取ASM网格网络分区设置
 *
 * @param request DescribeMeshMultiClusterNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMeshMultiClusterNetworkResponse
 */
DescribeMeshMultiClusterNetworkResponse Client::describeMeshMultiClusterNetworkWithOptions(const DescribeMeshMultiClusterNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeMeshMultiClusterNetwork"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMeshMultiClusterNetworkResponse>();
}

/**
 * @summary 获取ASM网格网络分区设置
 *
 * @param request DescribeMeshMultiClusterNetworkRequest
 * @return DescribeMeshMultiClusterNetworkResponse
 */
DescribeMeshMultiClusterNetworkResponse Client::describeMeshMultiClusterNetwork(const DescribeMeshMultiClusterNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMeshMultiClusterNetworkWithOptions(request, runtime);
}

/**
 * @summary Queries basic information about a Service Mesh (ASM) instance.
 *
 * @param request DescribeMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetadataResponse
 */
DescribeMetadataResponse Client::describeMetadataWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeMetadata"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetadataResponse>();
}

/**
 * @summary Queries basic information about a Service Mesh (ASM) instance.
 *
 * @return DescribeMetadataResponse
 */
DescribeMetadataResponse Client::describeMetadata() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetadataWithOptions(runtime);
}

/**
 * @summary Queries the configurations of sidecar proxies at the namespace level.
 *
 * @param request DescribeNamespaceScopeSidecarConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNamespaceScopeSidecarConfigResponse
 */
DescribeNamespaceScopeSidecarConfigResponse Client::describeNamespaceScopeSidecarConfigWithOptions(const DescribeNamespaceScopeSidecarConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeNamespaceScopeSidecarConfig"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNamespaceScopeSidecarConfigResponse>();
}

/**
 * @summary Queries the configurations of sidecar proxies at the namespace level.
 *
 * @param request DescribeNamespaceScopeSidecarConfigRequest
 * @return DescribeNamespaceScopeSidecarConfigResponse
 */
DescribeNamespaceScopeSidecarConfigResponse Client::describeNamespaceScopeSidecarConfig(const DescribeNamespaceScopeSidecarConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNamespaceScopeSidecarConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the instance types of nodes on the data plane and whether the instance types support Multi-Buffer acceleration.
 *
 * @param request DescribeNodesInstanceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNodesInstanceTypeResponse
 */
DescribeNodesInstanceTypeResponse Client::describeNodesInstanceTypeWithOptions(const DescribeNodesInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeNodesInstanceType"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNodesInstanceTypeResponse>();
}

/**
 * @summary Queries the instance types of nodes on the data plane and whether the instance types support Multi-Buffer acceleration.
 *
 * @param request DescribeNodesInstanceTypeRequest
 * @return DescribeNodesInstanceTypeResponse
 */
DescribeNodesInstanceTypeResponse Client::describeNodesInstanceType(const DescribeNodesInstanceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNodesInstanceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the Server Load Balancer (SLB) instances that can be reused.
 *
 * @param request DescribeReusableSlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeReusableSlbResponse
 */
DescribeReusableSlbResponse Client::describeReusableSlbWithOptions(const DescribeReusableSlbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasK8sClusterId()) {
    body["K8sClusterId"] = request.k8sClusterId();
  }

  if (!!request.hasLbType()) {
    body["LbType"] = request.lbType();
  }

  if (!!request.hasNetworkType()) {
    body["NetworkType"] = request.networkType();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeReusableSlb"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeReusableSlbResponse>();
}

/**
 * @summary Queries the Server Load Balancer (SLB) instances that can be reused.
 *
 * @param request DescribeReusableSlbRequest
 * @return DescribeReusableSlbResponse
 */
DescribeReusableSlbResponse Client::describeReusableSlb(const DescribeReusableSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeReusableSlbWithOptions(request, runtime);
}

/**
 * @summary Queries the check results of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshAdditionalStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshAdditionalStatusResponse
 */
DescribeServiceMeshAdditionalStatusResponse Client::describeServiceMeshAdditionalStatusWithOptions(const DescribeServiceMeshAdditionalStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCheckMode()) {
    body["CheckMode"] = request.checkMode();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeServiceMeshAdditionalStatus"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshAdditionalStatusResponse>();
}

/**
 * @summary Queries the check results of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshAdditionalStatusRequest
 * @return DescribeServiceMeshAdditionalStatusResponse
 */
DescribeServiceMeshAdditionalStatusResponse Client::describeServiceMeshAdditionalStatus(const DescribeServiceMeshAdditionalStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshAdditionalStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the clusters that can be added to a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshClustersResponse
 */
DescribeServiceMeshClustersResponse Client::describeServiceMeshClustersWithOptions(const DescribeServiceMeshClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  json body = {};
  if (!!request.hasLimit()) {
    body["Limit"] = request.limit();
  }

  if (!!request.hasOffset()) {
    body["Offset"] = request.offset();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeServiceMeshClusters"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshClustersResponse>();
}

/**
 * @summary Queries the clusters that can be added to a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshClustersRequest
 * @return DescribeServiceMeshClustersResponse
 */
DescribeServiceMeshClustersResponse Client::describeServiceMeshClusters(const DescribeServiceMeshClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshDetailResponse
 */
DescribeServiceMeshDetailResponse Client::describeServiceMeshDetailWithOptions(const DescribeServiceMeshDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeServiceMeshDetail"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshDetailResponse>();
}

/**
 * @summary Queries the details of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshDetailRequest
 * @return DescribeServiceMeshDetailResponse
 */
DescribeServiceMeshDetailResponse Client::describeServiceMeshDetail(const DescribeServiceMeshDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the content of the kubeconfig file of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshKubeconfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshKubeconfigResponse
 */
DescribeServiceMeshKubeconfigResponse Client::describeServiceMeshKubeconfigWithOptions(const DescribeServiceMeshKubeconfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPrivateIpAddress()) {
    query["PrivateIpAddress"] = request.privateIpAddress();
  }

  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceMeshKubeconfig"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshKubeconfigResponse>();
}

/**
 * @summary Queries the content of the kubeconfig file of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshKubeconfigRequest
 * @return DescribeServiceMeshKubeconfigResponse
 */
DescribeServiceMeshKubeconfigResponse Client::describeServiceMeshKubeconfig(const DescribeServiceMeshKubeconfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshKubeconfigWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshLogsResponse
 */
DescribeServiceMeshLogsResponse Client::describeServiceMeshLogsWithOptions(const DescribeServiceMeshLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeServiceMeshLogs"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshLogsResponse>();
}

/**
 * @summary Queries the logs of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshLogsRequest
 * @return DescribeServiceMeshLogsResponse
 */
DescribeServiceMeshLogsResponse Client::describeServiceMeshLogs(const DescribeServiceMeshLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of proxies on the data plane of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshProxyStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshProxyStatusResponse
 */
DescribeServiceMeshProxyStatusResponse Client::describeServiceMeshProxyStatusWithOptions(const DescribeServiceMeshProxyStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeServiceMeshProxyStatus"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshProxyStatusResponse>();
}

/**
 * @summary Queries the status of proxies on the data plane of a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshProxyStatusRequest
 * @return DescribeServiceMeshProxyStatusResponse
 */
DescribeServiceMeshProxyStatusResponse Client::describeServiceMeshProxyStatus(const DescribeServiceMeshProxyStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshProxyStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the upgrade details of a Service Mesh (ASM) instance and its ingress gateways.
 *
 * @param request DescribeServiceMeshUpgradeStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshUpgradeStatusResponse
 */
DescribeServiceMeshUpgradeStatusResponse Client::describeServiceMeshUpgradeStatusWithOptions(const DescribeServiceMeshUpgradeStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  json body = {};
  if (!!request.hasAllIstioGatewayFullNames()) {
    body["AllIstioGatewayFullNames"] = request.allIstioGatewayFullNames();
  }

  if (!!request.hasGuestClusterIds()) {
    body["GuestClusterIds"] = request.guestClusterIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeServiceMeshUpgradeStatus"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshUpgradeStatusResponse>();
}

/**
 * @summary Queries the upgrade details of a Service Mesh (ASM) instance and its ingress gateways.
 *
 * @param request DescribeServiceMeshUpgradeStatusRequest
 * @return DescribeServiceMeshUpgradeStatusResponse
 */
DescribeServiceMeshUpgradeStatusResponse Client::describeServiceMeshUpgradeStatus(const DescribeServiceMeshUpgradeStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshUpgradeStatusWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeServiceMeshVMs is deprecated
 *
 * @summary Queries the Elastic Compute Service (ECS) instances that reside in the same virtual private cloud (VPC) as a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshVMsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshVMsResponse
 */
DescribeServiceMeshVMsResponse Client::describeServiceMeshVMsWithOptions(const DescribeServiceMeshVMsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceMeshVMs"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshVMsResponse>();
}

/**
 * @deprecated OpenAPI DescribeServiceMeshVMs is deprecated
 *
 * @summary Queries the Elastic Compute Service (ECS) instances that reside in the same virtual private cloud (VPC) as a Service Mesh (ASM) instance.
 *
 * @param request DescribeServiceMeshVMsRequest
 * @return DescribeServiceMeshVMsResponse
 */
DescribeServiceMeshVMsResponse Client::describeServiceMeshVMs(const DescribeServiceMeshVMsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshVMsWithOptions(request, runtime);
}

/**
 * @summary Queries ASM instances.
 *
 * @param request DescribeServiceMeshesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMeshesResponse
 */
DescribeServiceMeshesResponse Client::describeServiceMeshesWithOptions(const DescribeServiceMeshesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceMeshes"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMeshesResponse>();
}

/**
 * @summary Queries ASM instances.
 *
 * @param request DescribeServiceMeshesRequest
 * @return DescribeServiceMeshesResponse
 */
DescribeServiceMeshesResponse Client::describeServiceMeshes(const DescribeServiceMeshesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceMeshesWithOptions(request, runtime);
}

/**
 * @summary Queries the update status of a Service Mesh (ASM) instance.
 *
 * @param request DescribeUpgradeVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUpgradeVersionResponse
 */
DescribeUpgradeVersionResponse Client::describeUpgradeVersionWithOptions(const DescribeUpgradeVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUpgradeVersion"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUpgradeVersionResponse>();
}

/**
 * @summary Queries the update status of a Service Mesh (ASM) instance.
 *
 * @param request DescribeUpgradeVersionRequest
 * @return DescribeUpgradeVersionResponse
 */
DescribeUpgradeVersionResponse Client::describeUpgradeVersion(const DescribeUpgradeVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUpgradeVersionWithOptions(request, runtime);
}

/**
 * @summary Obtains role-based access control (RBAC) permissions.
 *
 * @param request DescribeUserPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserPermissionsResponse
 */
DescribeUserPermissionsResponse Client::describeUserPermissionsWithOptions(const DescribeUserPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSubAccountUserId()) {
    body["SubAccountUserId"] = request.subAccountUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeUserPermissions"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserPermissionsResponse>();
}

/**
 * @summary Obtains role-based access control (RBAC) permissions.
 *
 * @param request DescribeUserPermissionsRequest
 * @return DescribeUserPermissionsResponse
 */
DescribeUserPermissionsResponse Client::describeUserPermissions(const DescribeUserPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserPermissionsWithOptions(request, runtime);
}

/**
 * @summary Queries the IDs of all RAM users or RAM roles to which a Role-based Access Control (RBAC) role is assigned.
 *
 * @param request DescribeUsersWithPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsersWithPermissionsResponse
 */
DescribeUsersWithPermissionsResponse Client::describeUsersWithPermissionsWithOptions(const DescribeUsersWithPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserType()) {
    body["UserType"] = request.userType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeUsersWithPermissions"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsersWithPermissionsResponse>();
}

/**
 * @summary Queries the IDs of all RAM users or RAM roles to which a Role-based Access Control (RBAC) role is assigned.
 *
 * @param request DescribeUsersWithPermissionsRequest
 * @return DescribeUsersWithPermissionsResponse
 */
DescribeUsersWithPermissionsResponse Client::describeUsersWithPermissions(const DescribeUsersWithPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsersWithPermissionsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeVMsInServiceMesh is deprecated
 *
 * @summary Queries the virtual machines (VMs) that are added to a Service Mesh (ASM) instance.
 *
 * @param request DescribeVMsInServiceMeshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVMsInServiceMeshResponse
 */
DescribeVMsInServiceMeshResponse Client::describeVMsInServiceMeshWithOptions(const DescribeVMsInServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVMsInServiceMesh"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVMsInServiceMeshResponse>();
}

/**
 * @deprecated OpenAPI DescribeVMsInServiceMesh is deprecated
 *
 * @summary Queries the virtual machines (VMs) that are added to a Service Mesh (ASM) instance.
 *
 * @param request DescribeVMsInServiceMeshRequest
 * @return DescribeVMsInServiceMeshResponse
 */
DescribeVMsInServiceMeshResponse Client::describeVMsInServiceMesh(const DescribeVMsInServiceMeshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVMsInServiceMeshWithOptions(request, runtime);
}

/**
 * @summary Queries a list of vSwitches that are deployed in a specified virtual private cloud (VPC) in a region.
 *
 * @param request DescribeVSwitchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitchesWithOptions(const DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeVSwitches"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVSwitchesResponse>();
}

/**
 * @summary Queries a list of vSwitches that are deployed in a specified virtual private cloud (VPC) in a region.
 *
 * @param request DescribeVSwitchesRequest
 * @return DescribeVSwitchesResponse
 */
DescribeVSwitchesResponse Client::describeVSwitches(const DescribeVSwitchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVSwitchesWithOptions(request, runtime);
}

/**
 * @summary Queries available Service Mesh (ASM) versions when you create an ASM instance.
 *
 * @param request DescribeVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVersionsResponse
 */
DescribeVersionsResponse Client::describeVersionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeVersions"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVersionsResponse>();
}

/**
 * @summary Queries available Service Mesh (ASM) versions when you create an ASM instance.
 *
 * @return DescribeVersionsResponse
 */
DescribeVersionsResponse Client::describeVersions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVersionsWithOptions(runtime);
}

/**
 * @summary Queries the virtual private clouds (VPCs) that are available in a specified region.
 *
 * @param request DescribeVpcsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcsWithOptions(const DescribeVpcsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeVpcs"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcsResponse>();
}

/**
 * @summary Queries the virtual private clouds (VPCs) that are available in a specified region.
 *
 * @param request DescribeVpcsRequest
 * @return DescribeVpcsResponse
 */
DescribeVpcsResponse Client::describeVpcs(const DescribeVpcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcsWithOptions(request, runtime);
}

/**
 * @summary Obtains a certificate issued by a certificate authority (CA).
 *
 * @param request GetCaCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCaCertResponse
 */
GetCaCertResponse Client::getCaCertWithOptions(const GetCaCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCaCert"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCaCertResponse>();
}

/**
 * @summary Obtains a certificate issued by a certificate authority (CA).
 *
 * @param request GetCaCertRequest
 * @return GetCaCertResponse
 */
GetCaCertResponse Client::getCaCert(const GetCaCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCaCertWithOptions(request, runtime);
}

/**
 * @summary Queries a list of workloads specified by a label selector.
 *
 * @param tmpReq GetDeploymentBySelectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentBySelectorResponse
 */
GetDeploymentBySelectorResponse Client::getDeploymentBySelectorWithOptions(const GetDeploymentBySelectorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDeploymentBySelectorShrinkRequest request = GetDeploymentBySelectorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelector()) {
    request.setLabelSelectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelector(), "LabelSelector", "json"));
  }

  json body = {};
  if (!!request.hasGuestCluster()) {
    body["GuestCluster"] = request.guestCluster();
  }

  if (!!request.hasLabelSelectorShrink()) {
    body["LabelSelector"] = request.labelSelectorShrink();
  }

  if (!!request.hasLimit()) {
    body["Limit"] = request.limit();
  }

  if (!!request.hasMark()) {
    body["Mark"] = request.mark();
  }

  if (!!request.hasNameSpace()) {
    body["NameSpace"] = request.nameSpace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDeploymentBySelector"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentBySelectorResponse>();
}

/**
 * @summary Queries a list of workloads specified by a label selector.
 *
 * @param request GetDeploymentBySelectorRequest
 * @return GetDeploymentBySelectorResponse
 */
GetDeploymentBySelectorResponse Client::getDeploymentBySelector(const GetDeploymentBySelectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeploymentBySelectorWithOptions(request, runtime);
}

/**
 * @summary Queries the Grafana dashboard URL from Application Real-Time Monitoring Service (ARMS).
 *
 * @param request GetGrafanaDashboardUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGrafanaDashboardUrlResponse
 */
GetGrafanaDashboardUrlResponse Client::getGrafanaDashboardUrlWithOptions(const GetGrafanaDashboardUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasK8sClusterId()) {
    body["K8sClusterId"] = request.k8sClusterId();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetGrafanaDashboardUrl"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGrafanaDashboardUrlResponse>();
}

/**
 * @summary Queries the Grafana dashboard URL from Application Real-Time Monitoring Service (ARMS).
 *
 * @param request GetGrafanaDashboardUrlRequest
 * @return GetGrafanaDashboardUrlResponse
 */
GetGrafanaDashboardUrlResponse Client::getGrafanaDashboardUrl(const GetGrafanaDashboardUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGrafanaDashboardUrlWithOptions(request, runtime);
}

/**
 * @summary 描述ServiceEndpoints信息
 *
 * @param request GetRegisteredServiceEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegisteredServiceEndpointsResponse
 */
GetRegisteredServiceEndpointsResponse Client::getRegisteredServiceEndpointsWithOptions(const GetRegisteredServiceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterIds()) {
    body["ClusterIds"] = request.clusterIds();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasServiceType()) {
    body["ServiceType"] = request.serviceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRegisteredServiceEndpoints"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegisteredServiceEndpointsResponse>();
}

/**
 * @summary 描述ServiceEndpoints信息
 *
 * @param request GetRegisteredServiceEndpointsRequest
 * @return GetRegisteredServiceEndpointsResponse
 */
GetRegisteredServiceEndpointsResponse Client::getRegisteredServiceEndpoints(const GetRegisteredServiceEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRegisteredServiceEndpointsWithOptions(request, runtime);
}

/**
 * @param request GetRegisteredServiceNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegisteredServiceNamespacesResponse
 */
GetRegisteredServiceNamespacesResponse Client::getRegisteredServiceNamespacesWithOptions(const GetRegisteredServiceNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRegisteredServiceNamespaces"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegisteredServiceNamespacesResponse>();
}

/**
 * @param request GetRegisteredServiceNamespacesRequest
 * @return GetRegisteredServiceNamespacesResponse
 */
GetRegisteredServiceNamespacesResponse Client::getRegisteredServiceNamespaces(const GetRegisteredServiceNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRegisteredServiceNamespacesWithOptions(request, runtime);
}

/**
 * @summary Queries detailed information about a lane.
 *
 * @param request GetSwimLaneDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSwimLaneDetailResponse
 */
GetSwimLaneDetailResponse Client::getSwimLaneDetailWithOptions(const GetSwimLaneDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasSwimLaneName()) {
    body["SwimLaneName"] = request.swimLaneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSwimLaneDetail"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSwimLaneDetailResponse>();
}

/**
 * @summary Queries detailed information about a lane.
 *
 * @param request GetSwimLaneDetailRequest
 * @return GetSwimLaneDetailResponse
 */
GetSwimLaneDetailResponse Client::getSwimLaneDetail(const GetSwimLaneDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSwimLaneDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of all lane groups in an Alibaba Cloud Service Mesh (ASM) instance.
 *
 * @param request GetSwimLaneGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSwimLaneGroupListResponse
 */
GetSwimLaneGroupListResponse Client::getSwimLaneGroupListWithOptions(const GetSwimLaneGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSwimLaneGroupList"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSwimLaneGroupListResponse>();
}

/**
 * @summary Queries a list of all lane groups in an Alibaba Cloud Service Mesh (ASM) instance.
 *
 * @param request GetSwimLaneGroupListRequest
 * @return GetSwimLaneGroupListResponse
 */
GetSwimLaneGroupListResponse Client::getSwimLaneGroupList(const GetSwimLaneGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSwimLaneGroupListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of all the lanes in a lane group.
 *
 * @param request GetSwimLaneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSwimLaneListResponse
 */
GetSwimLaneListResponse Client::getSwimLaneListWithOptions(const GetSwimLaneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSwimLaneList"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSwimLaneListResponse>();
}

/**
 * @summary Queries a list of all the lanes in a lane group.
 *
 * @param request GetSwimLaneListRequest
 * @return GetSwimLaneListResponse
 */
GetSwimLaneListResponse Client::getSwimLaneList(const GetSwimLaneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSwimLaneListWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetVmAppMeshInfo is deprecated
 *
 * @summary Queries the information about VMs that are added to a Service Mesh (ASM) instance.
 *
 * @param request GetVmAppMeshInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVmAppMeshInfoResponse
 */
GetVmAppMeshInfoResponse Client::getVmAppMeshInfoWithOptions(const GetVmAppMeshInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVmAppMeshInfo"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVmAppMeshInfoResponse>();
}

/**
 * @deprecated OpenAPI GetVmAppMeshInfo is deprecated
 *
 * @summary Queries the information about VMs that are added to a Service Mesh (ASM) instance.
 *
 * @param request GetVmAppMeshInfoRequest
 * @return GetVmAppMeshInfoResponse
 */
GetVmAppMeshInfoResponse Client::getVmAppMeshInfo(const GetVmAppMeshInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVmAppMeshInfoWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetVmMeta is deprecated
 *
 * @summary Queries the metadata that is required to add a non-containerized application to a Service Mesh (ASM) instance.
 *
 * @param request GetVmMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVmMetaResponse
 */
GetVmMetaResponse Client::getVmMetaWithOptions(const GetVmMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVmMeta"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVmMetaResponse>();
}

/**
 * @deprecated OpenAPI GetVmMeta is deprecated
 *
 * @summary Queries the metadata that is required to add a non-containerized application to a Service Mesh (ASM) instance.
 *
 * @param request GetVmMetaRequest
 * @return GetVmMetaResponse
 */
GetVmMetaResponse Client::getVmMeta(const GetVmMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVmMetaWithOptions(request, runtime);
}

/**
 * @summary Grants permissions to a Resource Access Management (RAM) user.
 *
 * @param tmpReq GrantUserPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantUserPermissionsResponse
 */
GrantUserPermissionsResponse Client::grantUserPermissionsWithOptions(const GrantUserPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GrantUserPermissionsShrinkRequest request = GrantUserPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubAccountUserIds()) {
    request.setSubAccountUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subAccountUserIds(), "SubAccountUserIds", "json"));
  }

  json body = {};
  if (!!request.hasPermissions()) {
    body["Permissions"] = request.permissions();
  }

  if (!!request.hasSubAccountUserId()) {
    body["SubAccountUserId"] = request.subAccountUserId();
  }

  if (!!request.hasSubAccountUserIdsShrink()) {
    body["SubAccountUserIds"] = request.subAccountUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GrantUserPermissions"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantUserPermissionsResponse>();
}

/**
 * @summary Grants permissions to a Resource Access Management (RAM) user.
 *
 * @param request GrantUserPermissionsRequest
 * @return GrantUserPermissionsResponse
 */
GrantUserPermissionsResponse Client::grantUserPermissions(const GrantUserPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantUserPermissionsWithOptions(request, runtime);
}

/**
 * @summary 列举所有服务账号
 *
 * @param request ListServiceAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceAccountsResponse
 */
ListServiceAccountsResponse Client::listServiceAccountsWithOptions(const ListServiceAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListServiceAccounts"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceAccountsResponse>();
}

/**
 * @summary 列举所有服务账号
 *
 * @param request ListServiceAccountsRequest
 * @return ListServiceAccountsResponse
 */
ListServiceAccountsResponse Client::listServiceAccounts(const ListServiceAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries user tags on a Service Mesh (ASM) instance.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries user tags on a Service Mesh (ASM) instance.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of all waypoint proxies in a namespace of a cluster on the data plane.
 *
 * @param request ListWaypointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWaypointsResponse
 */
ListWaypointsResponse Client::listWaypointsWithOptions(const ListWaypointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasContinue()) {
    body["Continue"] = request._continue();
  }

  if (!!request.hasLimit()) {
    body["Limit"] = request.limit();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListWaypoints"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWaypointsResponse>();
}

/**
 * @summary Queries the configurations of all waypoint proxies in a namespace of a cluster on the data plane.
 *
 * @param request ListWaypointsRequest
 * @return ListWaypointsResponse
 */
ListWaypointsResponse Client::listWaypoints(const ListWaypointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWaypointsWithOptions(request, runtime);
}

/**
 * @summary ModifyApiServerEipResource
 *
 * @param request ModifyApiServerEipResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApiServerEipResourceResponse
 */
ModifyApiServerEipResourceResponse Client::modifyApiServerEipResourceWithOptions(const ModifyApiServerEipResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiServerEipId()) {
    body["ApiServerEipId"] = request.apiServerEipId();
  }

  if (!!request.hasOperation()) {
    body["Operation"] = request.operation();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyApiServerEipResource"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApiServerEipResourceResponse>();
}

/**
 * @summary ModifyApiServerEipResource
 *
 * @param request ModifyApiServerEipResourceRequest
 * @return ModifyApiServerEipResourceResponse
 */
ModifyApiServerEipResourceResponse Client::modifyApiServerEipResource(const ModifyApiServerEipResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApiServerEipResourceWithOptions(request, runtime);
}

/**
 * @summary ModifyPilotEipResource
 *
 * @param request ModifyPilotEipResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPilotEipResourceResponse
 */
ModifyPilotEipResourceResponse Client::modifyPilotEipResourceWithOptions(const ModifyPilotEipResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEipId()) {
    body["EipId"] = request.eipId();
  }

  if (!!request.hasIsCanary()) {
    body["IsCanary"] = request.isCanary();
  }

  if (!!request.hasOperation()) {
    body["Operation"] = request.operation();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyPilotEipResource"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPilotEipResourceResponse>();
}

/**
 * @summary ModifyPilotEipResource
 *
 * @param request ModifyPilotEipResourceRequest
 * @return ModifyPilotEipResourceResponse
 */
ModifyPilotEipResourceResponse Client::modifyPilotEipResource(const ModifyPilotEipResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPilotEipResourceWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a Service Mesh (ASM) instance.
 *
 * @param request ModifyServiceMeshNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyServiceMeshNameResponse
 */
ModifyServiceMeshNameResponse Client::modifyServiceMeshNameWithOptions(const ModifyServiceMeshNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyServiceMeshName"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyServiceMeshNameResponse>();
}

/**
 * @summary Modifies the name of a Service Mesh (ASM) instance.
 *
 * @param request ModifyServiceMeshNameRequest
 * @return ModifyServiceMeshNameResponse
 */
ModifyServiceMeshNameResponse Client::modifyServiceMeshName(const ModifyServiceMeshNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyServiceMeshNameWithOptions(request, runtime);
}

/**
 * @summary Recreates a project that is used to store audit logs. After mesh audit is enabled, if you delete the log project that stores audit logs by mistake, you can recreate a project for storing audit logs.
 *
 * @description Before you call this operation, make sure that you understand the billing methods of Simple Log Service. For more information, visit the [pricing page](https://www.alibabacloud.com/zh/pricing-calculator?_p_lc=1\\&spm=a2796.7960336.3034855210.1.44e6b91aaSp2M7#/commodity/vm_intl).
 *
 * @param request ReActivateAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReActivateAuditResponse
 */
ReActivateAuditResponse Client::reActivateAuditWithOptions(const ReActivateAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnableAudit()) {
    body["EnableAudit"] = request.enableAudit();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReActivateAudit"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReActivateAuditResponse>();
}

/**
 * @summary Recreates a project that is used to store audit logs. After mesh audit is enabled, if you delete the log project that stores audit logs by mistake, you can recreate a project for storing audit logs.
 *
 * @description Before you call this operation, make sure that you understand the billing methods of Simple Log Service. For more information, visit the [pricing page](https://www.alibabacloud.com/zh/pricing-calculator?_p_lc=1\\&spm=a2796.7960336.3034855210.1.44e6b91aaSp2M7#/commodity/vm_intl).
 *
 * @param request ReActivateAuditRequest
 * @return ReActivateAuditResponse
 */
ReActivateAuditResponse Client::reActivateAudit(const ReActivateAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reActivateAuditWithOptions(request, runtime);
}

/**
 * @summary Removes a cluster from a Service Mesh (ASM) instance.
 *
 * @param request RemoveClusterFromServiceMeshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveClusterFromServiceMeshResponse
 */
RemoveClusterFromServiceMeshResponse Client::removeClusterFromServiceMeshWithOptions(const RemoveClusterFromServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasReserveNamespace()) {
    body["ReserveNamespace"] = request.reserveNamespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveClusterFromServiceMesh"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveClusterFromServiceMeshResponse>();
}

/**
 * @summary Removes a cluster from a Service Mesh (ASM) instance.
 *
 * @param request RemoveClusterFromServiceMeshRequest
 * @return RemoveClusterFromServiceMeshResponse
 */
RemoveClusterFromServiceMeshResponse Client::removeClusterFromServiceMesh(const RemoveClusterFromServiceMeshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeClusterFromServiceMeshWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI RemoveVMFromServiceMesh is deprecated
 *
 * @summary Removes a virtual machine (VM) from a Service Mesh (ASM) instance.
 *
 * @param request RemoveVMFromServiceMeshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveVMFromServiceMeshResponse
 */
RemoveVMFromServiceMeshResponse Client::removeVMFromServiceMeshWithOptions(const RemoveVMFromServiceMeshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcsId()) {
    query["EcsId"] = request.ecsId();
  }

  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveVMFromServiceMesh"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveVMFromServiceMeshResponse>();
}

/**
 * @deprecated OpenAPI RemoveVMFromServiceMesh is deprecated
 *
 * @summary Removes a virtual machine (VM) from a Service Mesh (ASM) instance.
 *
 * @param request RemoveVMFromServiceMeshRequest
 * @return RemoveVMFromServiceMeshResponse
 */
RemoveVMFromServiceMeshResponse Client::removeVMFromServiceMesh(const RemoveVMFromServiceMeshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeVMFromServiceMeshWithOptions(request, runtime);
}

/**
 * @summary Revokes the kubeconfig file of a Service Mesh (ASM) instance and generates a new kubeconfig file.
 *
 * @param request RevokeKubeconfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeKubeconfigResponse
 */
RevokeKubeconfigResponse Client::revokeKubeconfigWithOptions(const RevokeKubeconfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrivateIpAddress()) {
    body["PrivateIpAddress"] = request.privateIpAddress();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevokeKubeconfig"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeKubeconfigResponse>();
}

/**
 * @summary Revokes the kubeconfig file of a Service Mesh (ASM) instance and generates a new kubeconfig file.
 *
 * @param request RevokeKubeconfigRequest
 * @return RevokeKubeconfigResponse
 */
RevokeKubeconfigResponse Client::revokeKubeconfig(const RevokeKubeconfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeKubeconfigWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies user tags on a resource.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds or modifies user tags on a resource.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Deletes user tags on a Service Mesh (ASM) instance.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Deletes user tags on a Service Mesh (ASM) instance.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a Service Mesh (ASM) gateway.
 *
 * @param request UpdateASMGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateASMGatewayResponse
 */
UpdateASMGatewayResponse Client::updateASMGatewayWithOptions(const UpdateASMGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["Body"] = request.body();
  }

  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateASMGateway"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateASMGatewayResponse>();
}

/**
 * @summary Updates a Service Mesh (ASM) gateway.
 *
 * @param request UpdateASMGatewayRequest
 * @return UpdateASMGatewayResponse
 */
UpdateASMGatewayResponse Client::updateASMGateway(const UpdateASMGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateASMGatewayWithOptions(request, runtime);
}

/**
 * @summary Updates imported services on a Service Mesh (ASM) gateway to import or delete upstream services associated with the gateway.
 *
 * @param request UpdateASMGatewayImportedServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateASMGatewayImportedServicesResponse
 */
UpdateASMGatewayImportedServicesResponse Client::updateASMGatewayImportedServicesWithOptions(const UpdateASMGatewayImportedServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasASMGatewayName()) {
    body["ASMGatewayName"] = request.ASMGatewayName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasServiceNames()) {
    body["ServiceNames"] = request.serviceNames();
  }

  if (!!request.hasServiceNamespace()) {
    body["ServiceNamespace"] = request.serviceNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateASMGatewayImportedServices"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateASMGatewayImportedServicesResponse>();
}

/**
 * @summary Updates imported services on a Service Mesh (ASM) gateway to import or delete upstream services associated with the gateway.
 *
 * @param request UpdateASMGatewayImportedServicesRequest
 * @return UpdateASMGatewayImportedServicesResponse
 */
UpdateASMGatewayImportedServicesResponse Client::updateASMGatewayImportedServices(const UpdateASMGatewayImportedServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateASMGatewayImportedServicesWithOptions(request, runtime);
}

/**
 * @summary Synchronizes namespaces of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
 *
 * @param request UpdateASMNamespaceFromGuestClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateASMNamespaceFromGuestClusterResponse
 */
UpdateASMNamespaceFromGuestClusterResponse Client::updateASMNamespaceFromGuestClusterWithOptions(const UpdateASMNamespaceFromGuestClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasK8sClusterId()) {
    body["K8sClusterId"] = request.k8sClusterId();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateASMNamespaceFromGuestCluster"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateASMNamespaceFromGuestClusterResponse>();
}

/**
 * @summary Synchronizes namespaces of a Kubernetes cluster that is added to a Service Mesh (ASM) instance.
 *
 * @param request UpdateASMNamespaceFromGuestClusterRequest
 * @return UpdateASMNamespaceFromGuestClusterResponse
 */
UpdateASMNamespaceFromGuestClusterResponse Client::updateASMNamespaceFromGuestCluster(const UpdateASMNamespaceFromGuestClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateASMNamespaceFromGuestClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration for collecting control plane logs.
 *
 * @param request UpdateControlPlaneLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateControlPlaneLogConfigResponse
 */
UpdateControlPlaneLogConfigResponse Client::updateControlPlaneLogConfigWithOptions(const UpdateControlPlaneLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnabled()) {
    body["Enabled"] = request.enabled();
  }

  if (!!request.hasLogTTLInDay()) {
    body["LogTTLInDay"] = request.logTTLInDay();
  }

  if (!!request.hasProject()) {
    body["Project"] = request.project();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateControlPlaneLogConfig"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateControlPlaneLogConfigResponse>();
}

/**
 * @summary Modifies the configuration for collecting control plane logs.
 *
 * @param request UpdateControlPlaneLogConfigRequest
 * @return UpdateControlPlaneLogConfigResponse
 */
UpdateControlPlaneLogConfigResponse Client::updateControlPlaneLogConfig(const UpdateControlPlaneLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateControlPlaneLogConfigWithOptions(request, runtime);
}

/**
 * @summary 更新Guest Cluster配置
 *
 * @param request UpdateGuestClusterConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGuestClusterConfigResponse
 */
UpdateGuestClusterConfigResponse Client::updateGuestClusterConfigWithOptions(const UpdateGuestClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGuestClusterId()) {
    body["GuestClusterId"] = request.guestClusterId();
  }

  if (!!request.hasSMCEnabled()) {
    body["SMCEnabled"] = request.SMCEnabled();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateGuestClusterConfig"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGuestClusterConfigResponse>();
}

/**
 * @summary 更新Guest Cluster配置
 *
 * @param request UpdateGuestClusterConfigRequest
 * @return UpdateGuestClusterConfigResponse
 */
UpdateGuestClusterConfigResponse Client::updateGuestClusterConfig(const UpdateGuestClusterConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGuestClusterConfigWithOptions(request, runtime);
}

/**
 * @summary Updates a routing rule for a Service Mesh (ASM) gateway.
 *
 * @param tmpReq UpdateIstioGatewayRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIstioGatewayRoutesResponse
 */
UpdateIstioGatewayRoutesResponse Client::updateIstioGatewayRoutesWithOptions(const UpdateIstioGatewayRoutesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateIstioGatewayRoutesShrinkRequest request = UpdateIstioGatewayRoutesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGatewayRoute()) {
    request.setGatewayRouteShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.gatewayRoute(), "GatewayRoute", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasGatewayRouteShrink()) {
    body["GatewayRoute"] = request.gatewayRouteShrink();
  }

  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateIstioGatewayRoutes"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIstioGatewayRoutesResponse>();
}

/**
 * @summary Updates a routing rule for a Service Mesh (ASM) gateway.
 *
 * @param request UpdateIstioGatewayRoutesRequest
 * @return UpdateIstioGatewayRoutesResponse
 */
UpdateIstioGatewayRoutesResponse Client::updateIstioGatewayRoutes(const UpdateIstioGatewayRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIstioGatewayRoutesWithOptions(request, runtime);
}

/**
 * @param request UpdateIstioInjectionConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIstioInjectionConfigResponse
 */
UpdateIstioInjectionConfigResponse Client::updateIstioInjectionConfigWithOptions(const UpdateIstioInjectionConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataPlaneMode()) {
    body["DataPlaneMode"] = request.dataPlaneMode();
  }

  if (!!request.hasEnableIstioInjection()) {
    body["EnableIstioInjection"] = request.enableIstioInjection();
  }

  if (!!request.hasEnableSidecarSetInjection()) {
    body["EnableSidecarSetInjection"] = request.enableSidecarSetInjection();
  }

  if (!!request.hasIstioRev()) {
    body["IstioRev"] = request.istioRev();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateIstioInjectionConfig"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIstioInjectionConfigResponse>();
}

/**
 * @param request UpdateIstioInjectionConfigRequest
 * @return UpdateIstioInjectionConfigResponse
 */
UpdateIstioInjectionConfigResponse Client::updateIstioInjectionConfig(const UpdateIstioInjectionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIstioInjectionConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a routing rule for a Service Mesh (ASM) gateway.
 *
 * @param request UpdateIstioRouteAdditionalStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIstioRouteAdditionalStatusResponse
 */
UpdateIstioRouteAdditionalStatusResponse Client::updateIstioRouteAdditionalStatusWithOptions(const UpdateIstioRouteAdditionalStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.routeName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  json body = {};
  if (!!request.hasIstioGatewayName()) {
    body["IstioGatewayName"] = request.istioGatewayName();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateIstioRouteAdditionalStatus"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIstioRouteAdditionalStatusResponse>();
}

/**
 * @summary Updates the information about a routing rule for a Service Mesh (ASM) gateway.
 *
 * @param request UpdateIstioRouteAdditionalStatusRequest
 * @return UpdateIstioRouteAdditionalStatusResponse
 */
UpdateIstioRouteAdditionalStatusResponse Client::updateIstioRouteAdditionalStatus(const UpdateIstioRouteAdditionalStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIstioRouteAdditionalStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the settings of whether to enable the Kubernetes API on the data plane to access Istio resources.
 *
 * @param request UpdateMeshCRAggregationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMeshCRAggregationResponse
 */
UpdateMeshCRAggregationResponse Client::updateMeshCRAggregationWithOptions(const UpdateMeshCRAggregationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCPULimit()) {
    body["CPULimit"] = request.CPULimit();
  }

  if (!!request.hasCPURequirement()) {
    body["CPURequirement"] = request.CPURequirement();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.enabled();
  }

  if (!!request.hasMemoryLimit()) {
    body["MemoryLimit"] = request.memoryLimit();
  }

  if (!!request.hasMemoryRequirement()) {
    body["MemoryRequirement"] = request.memoryRequirement();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasUsePublicApiServer()) {
    body["UsePublicApiServer"] = request.usePublicApiServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMeshCRAggregation"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMeshCRAggregationResponse>();
}

/**
 * @summary Updates the settings of whether to enable the Kubernetes API on the data plane to access Istio resources.
 *
 * @param request UpdateMeshCRAggregationRequest
 * @return UpdateMeshCRAggregationResponse
 */
UpdateMeshCRAggregationResponse Client::updateMeshCRAggregation(const UpdateMeshCRAggregationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMeshCRAggregationWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a Service Mesh (ASM) instance.
 *
 * @param request UpdateMeshFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMeshFeatureResponse
 */
UpdateMeshFeatureResponse Client::updateMeshFeatureWithOptions(const UpdateMeshFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessLogGatewayEnabled()) {
    query["AccessLogGatewayEnabled"] = request.accessLogGatewayEnabled();
  }

  if (!!request.hasAccessLogSidecarEnabled()) {
    query["AccessLogSidecarEnabled"] = request.accessLogSidecarEnabled();
  }

  if (!!request.hasLabelsForOffloadedWorkloads()) {
    query["LabelsForOffloadedWorkloads"] = request.labelsForOffloadedWorkloads();
  }

  json body = {};
  if (!!request.hasAccessLogEnabled()) {
    body["AccessLogEnabled"] = request.accessLogEnabled();
  }

  if (!!request.hasAccessLogFile()) {
    body["AccessLogFile"] = request.accessLogFile();
  }

  if (!!request.hasAccessLogFormat()) {
    body["AccessLogFormat"] = request.accessLogFormat();
  }

  if (!!request.hasAccessLogGatewayLifecycle()) {
    body["AccessLogGatewayLifecycle"] = request.accessLogGatewayLifecycle();
  }

  if (!!request.hasAccessLogProject()) {
    body["AccessLogProject"] = request.accessLogProject();
  }

  if (!!request.hasAccessLogServiceEnabled()) {
    body["AccessLogServiceEnabled"] = request.accessLogServiceEnabled();
  }

  if (!!request.hasAccessLogServiceHost()) {
    body["AccessLogServiceHost"] = request.accessLogServiceHost();
  }

  if (!!request.hasAccessLogServicePort()) {
    body["AccessLogServicePort"] = request.accessLogServicePort();
  }

  if (!!request.hasAccessLogSidecarLifecycle()) {
    body["AccessLogSidecarLifecycle"] = request.accessLogSidecarLifecycle();
  }

  if (!!request.hasAuditProject()) {
    body["AuditProject"] = request.auditProject();
  }

  if (!!request.hasAutoInjectionPolicyEnabled()) {
    body["AutoInjectionPolicyEnabled"] = request.autoInjectionPolicyEnabled();
  }

  if (!!request.hasCRAggregationEnabled()) {
    body["CRAggregationEnabled"] = request.CRAggregationEnabled();
  }

  if (!!request.hasCertChain()) {
    body["CertChain"] = request.certChain();
  }

  if (!!request.hasClusterSpec()) {
    body["ClusterSpec"] = request.clusterSpec();
  }

  if (!!request.hasCniEnabled()) {
    body["CniEnabled"] = request.cniEnabled();
  }

  if (!!request.hasCniExcludeNamespaces()) {
    body["CniExcludeNamespaces"] = request.cniExcludeNamespaces();
  }

  if (!!request.hasConcurrency()) {
    body["Concurrency"] = request.concurrency();
  }

  if (!!request.hasConfigSourceEnabled()) {
    body["ConfigSourceEnabled"] = request.configSourceEnabled();
  }

  if (!!request.hasConfigSourceNacosID()) {
    body["ConfigSourceNacosID"] = request.configSourceNacosID();
  }

  if (!!request.hasCustomizedPrometheus()) {
    body["CustomizedPrometheus"] = request.customizedPrometheus();
  }

  if (!!request.hasCustomizedZipkin()) {
    body["CustomizedZipkin"] = request.customizedZipkin();
  }

  if (!!request.hasDNSProxyingEnabled()) {
    body["DNSProxyingEnabled"] = request.DNSProxyingEnabled();
  }

  if (!!request.hasDefaultComponentsScheduleConfig()) {
    body["DefaultComponentsScheduleConfig"] = request.defaultComponentsScheduleConfig();
  }

  if (!!request.hasDiscoverySelectors()) {
    body["DiscoverySelectors"] = request.discoverySelectors();
  }

  if (!!request.hasDubboFilterEnabled()) {
    body["DubboFilterEnabled"] = request.dubboFilterEnabled();
  }

  if (!!request.hasEnableAudit()) {
    body["EnableAudit"] = request.enableAudit();
  }

  if (!!request.hasEnableAutoDiagnosis()) {
    body["EnableAutoDiagnosis"] = request.enableAutoDiagnosis();
  }

  if (!!request.hasEnableBootstrapXdsAgent()) {
    body["EnableBootstrapXdsAgent"] = request.enableBootstrapXdsAgent();
  }

  if (!!request.hasEnableCRHistory()) {
    body["EnableCRHistory"] = request.enableCRHistory();
  }

  if (!!request.hasEnableNamespacesByDefault()) {
    body["EnableNamespacesByDefault"] = request.enableNamespacesByDefault();
  }

  if (!!request.hasEnableSDSServer()) {
    body["EnableSDSServer"] = request.enableSDSServer();
  }

  if (!!request.hasExcludeIPRanges()) {
    body["ExcludeIPRanges"] = request.excludeIPRanges();
  }

  if (!!request.hasExcludeInboundPorts()) {
    body["ExcludeInboundPorts"] = request.excludeInboundPorts();
  }

  if (!!request.hasExcludeOutboundPorts()) {
    body["ExcludeOutboundPorts"] = request.excludeOutboundPorts();
  }

  if (!!request.hasExistingCaCert()) {
    body["ExistingCaCert"] = request.existingCaCert();
  }

  if (!!request.hasExistingCaKey()) {
    body["ExistingCaKey"] = request.existingCaKey();
  }

  if (!!request.hasExistingRootCaCert()) {
    body["ExistingRootCaCert"] = request.existingRootCaCert();
  }

  if (!!request.hasFilterGatewayClusterConfig()) {
    body["FilterGatewayClusterConfig"] = request.filterGatewayClusterConfig();
  }

  if (!!request.hasGatewayAPIEnabled()) {
    body["GatewayAPIEnabled"] = request.gatewayAPIEnabled();
  }

  if (!!request.hasHoldApplicationUntilProxyStarts()) {
    body["HoldApplicationUntilProxyStarts"] = request.holdApplicationUntilProxyStarts();
  }

  if (!!request.hasHttp10Enabled()) {
    body["Http10Enabled"] = request.http10Enabled();
  }

  if (!!request.hasIncludeIPRanges()) {
    body["IncludeIPRanges"] = request.includeIPRanges();
  }

  if (!!request.hasIncludeInboundPorts()) {
    body["IncludeInboundPorts"] = request.includeInboundPorts();
  }

  if (!!request.hasIncludeOutboundPorts()) {
    body["IncludeOutboundPorts"] = request.includeOutboundPorts();
  }

  if (!!request.hasIntegrateKiali()) {
    body["IntegrateKiali"] = request.integrateKiali();
  }

  if (!!request.hasInterceptionMode()) {
    body["InterceptionMode"] = request.interceptionMode();
  }

  if (!!request.hasKialiArmsAuthTokens()) {
    body["KialiArmsAuthTokens"] = request.kialiArmsAuthTokens();
  }

  if (!!request.hasKialiEnabled()) {
    body["KialiEnabled"] = request.kialiEnabled();
  }

  if (!!request.hasKialiServiceAnnotations()) {
    body["KialiServiceAnnotations"] = request.kialiServiceAnnotations();
  }

  if (!!request.hasLifecycle()) {
    body["Lifecycle"] = request.lifecycle();
  }

  if (!!request.hasLocalityLBConf()) {
    body["LocalityLBConf"] = request.localityLBConf();
  }

  if (!!request.hasLocalityLoadBalancing()) {
    body["LocalityLoadBalancing"] = request.localityLoadBalancing();
  }

  if (!!request.hasLogLevel()) {
    body["LogLevel"] = request.logLevel();
  }

  if (!!request.hasMSEEnabled()) {
    body["MSEEnabled"] = request.MSEEnabled();
  }

  if (!!request.hasMultiBufferEnabled()) {
    body["MultiBufferEnabled"] = request.multiBufferEnabled();
  }

  if (!!request.hasMultiBufferPollDelay()) {
    body["MultiBufferPollDelay"] = request.multiBufferPollDelay();
  }

  if (!!request.hasMysqlFilterEnabled()) {
    body["MysqlFilterEnabled"] = request.mysqlFilterEnabled();
  }

  if (!!request.hasNFDEnabled()) {
    body["NFDEnabled"] = request.NFDEnabled();
  }

  if (!!request.hasNFDLabelPruned()) {
    body["NFDLabelPruned"] = request.NFDLabelPruned();
  }

  if (!!request.hasOPAInjectorCPULimit()) {
    body["OPAInjectorCPULimit"] = request.OPAInjectorCPULimit();
  }

  if (!!request.hasOPAInjectorCPURequirement()) {
    body["OPAInjectorCPURequirement"] = request.OPAInjectorCPURequirement();
  }

  if (!!request.hasOPAInjectorMemoryLimit()) {
    body["OPAInjectorMemoryLimit"] = request.OPAInjectorMemoryLimit();
  }

  if (!!request.hasOPAInjectorMemoryRequirement()) {
    body["OPAInjectorMemoryRequirement"] = request.OPAInjectorMemoryRequirement();
  }

  if (!!request.hasOPALimitCPU()) {
    body["OPALimitCPU"] = request.OPALimitCPU();
  }

  if (!!request.hasOPALimitMemory()) {
    body["OPALimitMemory"] = request.OPALimitMemory();
  }

  if (!!request.hasOPALogLevel()) {
    body["OPALogLevel"] = request.OPALogLevel();
  }

  if (!!request.hasOPARequestCPU()) {
    body["OPARequestCPU"] = request.OPARequestCPU();
  }

  if (!!request.hasOPARequestMemory()) {
    body["OPARequestMemory"] = request.OPARequestMemory();
  }

  if (!!request.hasOPAScopeInjected()) {
    body["OPAScopeInjected"] = request.OPAScopeInjected();
  }

  if (!!request.hasOpaEnabled()) {
    body["OpaEnabled"] = request.opaEnabled();
  }

  if (!!request.hasOpenAgentPolicy()) {
    body["OpenAgentPolicy"] = request.openAgentPolicy();
  }

  if (!!request.hasOutboundTrafficPolicy()) {
    body["OutboundTrafficPolicy"] = request.outboundTrafficPolicy();
  }

  if (!!request.hasPilotEnableQuicListeners()) {
    body["PilotEnableQuicListeners"] = request.pilotEnableQuicListeners();
  }

  if (!!request.hasPrometheusUrl()) {
    body["PrometheusUrl"] = request.prometheusUrl();
  }

  if (!!request.hasProxyInitCPUResourceLimit()) {
    body["ProxyInitCPUResourceLimit"] = request.proxyInitCPUResourceLimit();
  }

  if (!!request.hasProxyInitCPUResourceRequest()) {
    body["ProxyInitCPUResourceRequest"] = request.proxyInitCPUResourceRequest();
  }

  if (!!request.hasProxyInitMemoryResourceLimit()) {
    body["ProxyInitMemoryResourceLimit"] = request.proxyInitMemoryResourceLimit();
  }

  if (!!request.hasProxyInitMemoryResourceRequest()) {
    body["ProxyInitMemoryResourceRequest"] = request.proxyInitMemoryResourceRequest();
  }

  if (!!request.hasProxyLimitCPU()) {
    body["ProxyLimitCPU"] = request.proxyLimitCPU();
  }

  if (!!request.hasProxyLimitMemory()) {
    body["ProxyLimitMemory"] = request.proxyLimitMemory();
  }

  if (!!request.hasProxyRequestCPU()) {
    body["ProxyRequestCPU"] = request.proxyRequestCPU();
  }

  if (!!request.hasProxyRequestMemory()) {
    body["ProxyRequestMemory"] = request.proxyRequestMemory();
  }

  if (!!request.hasProxyStatsMatcher()) {
    body["ProxyStatsMatcher"] = request.proxyStatsMatcher();
  }

  if (!!request.hasRedisFilterEnabled()) {
    body["RedisFilterEnabled"] = request.redisFilterEnabled();
  }

  if (!!request.hasSMCEnabled()) {
    body["SMCEnabled"] = request.SMCEnabled();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasSidecarInjectorLimitCPU()) {
    body["SidecarInjectorLimitCPU"] = request.sidecarInjectorLimitCPU();
  }

  if (!!request.hasSidecarInjectorLimitMemory()) {
    body["SidecarInjectorLimitMemory"] = request.sidecarInjectorLimitMemory();
  }

  if (!!request.hasSidecarInjectorRequestCPU()) {
    body["SidecarInjectorRequestCPU"] = request.sidecarInjectorRequestCPU();
  }

  if (!!request.hasSidecarInjectorRequestMemory()) {
    body["SidecarInjectorRequestMemory"] = request.sidecarInjectorRequestMemory();
  }

  if (!!request.hasSidecarInjectorWebhookAsYaml()) {
    body["SidecarInjectorWebhookAsYaml"] = request.sidecarInjectorWebhookAsYaml();
  }

  if (!!request.hasTelemetry()) {
    body["Telemetry"] = request.telemetry();
  }

  if (!!request.hasTerminationDrainDuration()) {
    body["TerminationDrainDuration"] = request.terminationDrainDuration();
  }

  if (!!request.hasThriftFilterEnabled()) {
    body["ThriftFilterEnabled"] = request.thriftFilterEnabled();
  }

  if (!!request.hasTraceCustomTags()) {
    body["TraceCustomTags"] = request.traceCustomTags();
  }

  if (!!request.hasTraceMaxPathTagLength()) {
    body["TraceMaxPathTagLength"] = request.traceMaxPathTagLength();
  }

  if (!!request.hasTraceSampling()) {
    body["TraceSampling"] = request.traceSampling();
  }

  if (!!request.hasTracing()) {
    body["Tracing"] = request.tracing();
  }

  if (!!request.hasTracingOnExtZipkinLimitCPU()) {
    body["TracingOnExtZipkinLimitCPU"] = request.tracingOnExtZipkinLimitCPU();
  }

  if (!!request.hasTracingOnExtZipkinLimitMemory()) {
    body["TracingOnExtZipkinLimitMemory"] = request.tracingOnExtZipkinLimitMemory();
  }

  if (!!request.hasTracingOnExtZipkinReplicaCount()) {
    body["TracingOnExtZipkinReplicaCount"] = request.tracingOnExtZipkinReplicaCount();
  }

  if (!!request.hasTracingOnExtZipkinRequestCPU()) {
    body["TracingOnExtZipkinRequestCPU"] = request.tracingOnExtZipkinRequestCPU();
  }

  if (!!request.hasTracingOnExtZipkinRequestMemory()) {
    body["TracingOnExtZipkinRequestMemory"] = request.tracingOnExtZipkinRequestMemory();
  }

  if (!!request.hasWebAssemblyFilterEnabled()) {
    body["WebAssemblyFilterEnabled"] = request.webAssemblyFilterEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMeshFeature"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMeshFeatureResponse>();
}

/**
 * @summary Updates the configuration of a Service Mesh (ASM) instance.
 *
 * @param request UpdateMeshFeatureRequest
 * @return UpdateMeshFeatureResponse
 */
UpdateMeshFeatureResponse Client::updateMeshFeature(const UpdateMeshFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMeshFeatureWithOptions(request, runtime);
}

/**
 * @summary Updates the network configurations of multiple Kubernetes clusters in a Service Mesh (ASM) instance.
 *
 * @param tmpReq UpdateMeshMultiClusterNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMeshMultiClusterNetworkResponse
 */
UpdateMeshMultiClusterNetworkResponse Client::updateMeshMultiClusterNetworkWithOptions(const UpdateMeshMultiClusterNetworkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMeshMultiClusterNetworkShrinkRequest request = UpdateMeshMultiClusterNetworkShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMultiClusterNetworks()) {
    request.setMultiClusterNetworksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.multiClusterNetworks(), "MultiClusterNetworks", "json"));
  }

  json body = {};
  if (!!request.hasMultiClusterNetworksShrink()) {
    body["MultiClusterNetworks"] = request.multiClusterNetworksShrink();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMeshMultiClusterNetwork"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMeshMultiClusterNetworkResponse>();
}

/**
 * @summary Updates the network configurations of multiple Kubernetes clusters in a Service Mesh (ASM) instance.
 *
 * @param request UpdateMeshMultiClusterNetworkRequest
 * @return UpdateMeshMultiClusterNetworkResponse
 */
UpdateMeshMultiClusterNetworkResponse Client::updateMeshMultiClusterNetwork(const UpdateMeshMultiClusterNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMeshMultiClusterNetworkWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of sidecar proxies at the namespace level.
 *
 * @param tmpReq UpdateNamespaceScopeSidecarConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNamespaceScopeSidecarConfigResponse
 */
UpdateNamespaceScopeSidecarConfigResponse Client::updateNamespaceScopeSidecarConfigWithOptions(const UpdateNamespaceScopeSidecarConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateNamespaceScopeSidecarConfigShrinkRequest request = UpdateNamespaceScopeSidecarConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScaledSidecarResource()) {
    request.setScaledSidecarResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scaledSidecarResource(), "ScaledSidecarResource", "json"));
  }

  json body = {};
  if (!!request.hasConcurrency()) {
    body["Concurrency"] = request.concurrency();
  }

  if (!!request.hasEnableCoreDump()) {
    body["EnableCoreDump"] = request.enableCoreDump();
  }

  if (!!request.hasExcludeIPRanges()) {
    body["ExcludeIPRanges"] = request.excludeIPRanges();
  }

  if (!!request.hasExcludeInboundPorts()) {
    body["ExcludeInboundPorts"] = request.excludeInboundPorts();
  }

  if (!!request.hasExcludeOutboundPorts()) {
    body["ExcludeOutboundPorts"] = request.excludeOutboundPorts();
  }

  if (!!request.hasHoldApplicationUntilProxyStarts()) {
    body["HoldApplicationUntilProxyStarts"] = request.holdApplicationUntilProxyStarts();
  }

  if (!!request.hasIncludeIPRanges()) {
    body["IncludeIPRanges"] = request.includeIPRanges();
  }

  if (!!request.hasIncludeInboundPorts()) {
    body["IncludeInboundPorts"] = request.includeInboundPorts();
  }

  if (!!request.hasIncludeOutboundPorts()) {
    body["IncludeOutboundPorts"] = request.includeOutboundPorts();
  }

  if (!!request.hasInterceptionMode()) {
    body["InterceptionMode"] = request.interceptionMode();
  }

  if (!!request.hasIstioDNSProxyEnabled()) {
    body["IstioDNSProxyEnabled"] = request.istioDNSProxyEnabled();
  }

  if (!!request.hasLifecycle()) {
    body["Lifecycle"] = request.lifecycle();
  }

  if (!!request.hasLogLevel()) {
    body["LogLevel"] = request.logLevel();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasPostStart()) {
    body["PostStart"] = request.postStart();
  }

  if (!!request.hasPreStop()) {
    body["PreStop"] = request.preStop();
  }

  if (!!request.hasPrivileged()) {
    body["Privileged"] = request.privileged();
  }

  if (!!request.hasProxyInitAckSloCPUResourceLimit()) {
    body["ProxyInitAckSloCPUResourceLimit"] = request.proxyInitAckSloCPUResourceLimit();
  }

  if (!!request.hasProxyInitAckSloCPUResourceRequest()) {
    body["ProxyInitAckSloCPUResourceRequest"] = request.proxyInitAckSloCPUResourceRequest();
  }

  if (!!request.hasProxyInitAckSloMemoryResourceLimit()) {
    body["ProxyInitAckSloMemoryResourceLimit"] = request.proxyInitAckSloMemoryResourceLimit();
  }

  if (!!request.hasProxyInitAckSloMemoryResourceRequest()) {
    body["ProxyInitAckSloMemoryResourceRequest"] = request.proxyInitAckSloMemoryResourceRequest();
  }

  if (!!request.hasProxyInitCPUResourceLimit()) {
    body["ProxyInitCPUResourceLimit"] = request.proxyInitCPUResourceLimit();
  }

  if (!!request.hasProxyInitCPUResourceRequest()) {
    body["ProxyInitCPUResourceRequest"] = request.proxyInitCPUResourceRequest();
  }

  if (!!request.hasProxyInitMemoryResourceLimit()) {
    body["ProxyInitMemoryResourceLimit"] = request.proxyInitMemoryResourceLimit();
  }

  if (!!request.hasProxyInitMemoryResourceRequest()) {
    body["ProxyInitMemoryResourceRequest"] = request.proxyInitMemoryResourceRequest();
  }

  if (!!request.hasProxyMetadata()) {
    body["ProxyMetadata"] = request.proxyMetadata();
  }

  if (!!request.hasProxyStatsMatcher()) {
    body["ProxyStatsMatcher"] = request.proxyStatsMatcher();
  }

  if (!!request.hasReadinessFailureThreshold()) {
    body["ReadinessFailureThreshold"] = request.readinessFailureThreshold();
  }

  if (!!request.hasReadinessInitialDelaySeconds()) {
    body["ReadinessInitialDelaySeconds"] = request.readinessInitialDelaySeconds();
  }

  if (!!request.hasReadinessPeriodSeconds()) {
    body["ReadinessPeriodSeconds"] = request.readinessPeriodSeconds();
  }

  if (!!request.hasRuntimeValues()) {
    body["RuntimeValues"] = request.runtimeValues();
  }

  if (!!request.hasSMCEnabled()) {
    body["SMCEnabled"] = request.SMCEnabled();
  }

  if (!!request.hasScaledSidecarResourceShrink()) {
    body["ScaledSidecarResource"] = request.scaledSidecarResourceShrink();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasSidecarProxyAckSloCPUResourceLimit()) {
    body["SidecarProxyAckSloCPUResourceLimit"] = request.sidecarProxyAckSloCPUResourceLimit();
  }

  if (!!request.hasSidecarProxyAckSloCPUResourceRequest()) {
    body["SidecarProxyAckSloCPUResourceRequest"] = request.sidecarProxyAckSloCPUResourceRequest();
  }

  if (!!request.hasSidecarProxyAckSloMemoryResourceLimit()) {
    body["SidecarProxyAckSloMemoryResourceLimit"] = request.sidecarProxyAckSloMemoryResourceLimit();
  }

  if (!!request.hasSidecarProxyAckSloMemoryResourceRequest()) {
    body["SidecarProxyAckSloMemoryResourceRequest"] = request.sidecarProxyAckSloMemoryResourceRequest();
  }

  if (!!request.hasSidecarProxyCPUResourceLimit()) {
    body["SidecarProxyCPUResourceLimit"] = request.sidecarProxyCPUResourceLimit();
  }

  if (!!request.hasSidecarProxyCPUResourceRequest()) {
    body["SidecarProxyCPUResourceRequest"] = request.sidecarProxyCPUResourceRequest();
  }

  if (!!request.hasSidecarProxyMemoryResourceLimit()) {
    body["SidecarProxyMemoryResourceLimit"] = request.sidecarProxyMemoryResourceLimit();
  }

  if (!!request.hasSidecarProxyMemoryResourceRequest()) {
    body["SidecarProxyMemoryResourceRequest"] = request.sidecarProxyMemoryResourceRequest();
  }

  if (!!request.hasTerminationDrainDuration()) {
    body["TerminationDrainDuration"] = request.terminationDrainDuration();
  }

  if (!!request.hasTracing()) {
    body["Tracing"] = request.tracing();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNamespaceScopeSidecarConfig"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNamespaceScopeSidecarConfigResponse>();
}

/**
 * @summary Updates the configurations of sidecar proxies at the namespace level.
 *
 * @param request UpdateNamespaceScopeSidecarConfigRequest
 * @return UpdateNamespaceScopeSidecarConfigResponse
 */
UpdateNamespaceScopeSidecarConfigResponse Client::updateNamespaceScopeSidecarConfig(const UpdateNamespaceScopeSidecarConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNamespaceScopeSidecarConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a lane.
 *
 * @param request UpdateSwimLaneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSwimLaneResponse
 */
UpdateSwimLaneResponse Client::updateSwimLaneWithOptions(const UpdateSwimLaneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasLabelSelectorKey()) {
    body["LabelSelectorKey"] = request.labelSelectorKey();
  }

  if (!!request.hasLabelSelectorValue()) {
    body["LabelSelectorValue"] = request.labelSelectorValue();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasServicesList()) {
    body["ServicesList"] = request.servicesList();
  }

  if (!!request.hasSwimLaneName()) {
    body["SwimLaneName"] = request.swimLaneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSwimLane"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSwimLaneResponse>();
}

/**
 * @summary Updates the information about a lane.
 *
 * @param request UpdateSwimLaneRequest
 * @return UpdateSwimLaneResponse
 */
UpdateSwimLaneResponse Client::updateSwimLane(const UpdateSwimLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSwimLaneWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a lane group.
 *
 * @param request UpdateSwimLaneGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSwimLaneGroupResponse
 */
UpdateSwimLaneGroupResponse Client::updateSwimLaneGroupWithOptions(const UpdateSwimLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFallbackTarget()) {
    body["FallbackTarget"] = request.fallbackTarget();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasIngressRoutingStrategy()) {
    body["IngressRoutingStrategy"] = request.ingressRoutingStrategy();
  }

  if (!!request.hasServiceLevelFallbackTarget()) {
    body["ServiceLevelFallbackTarget"] = request.serviceLevelFallbackTarget();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasServicesList()) {
    body["ServicesList"] = request.servicesList();
  }

  if (!!request.hasWeightedIngressRule()) {
    body["WeightedIngressRule"] = request.weightedIngressRule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSwimLaneGroup"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSwimLaneGroupResponse>();
}

/**
 * @summary Updates the information of a lane group.
 *
 * @param request UpdateSwimLaneGroupRequest
 * @return UpdateSwimLaneGroupResponse
 */
UpdateSwimLaneGroupResponse Client::updateSwimLaneGroup(const UpdateSwimLaneGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSwimLaneGroupWithOptions(request, runtime);
}

/**
 * @summary 更新Waypoint
 *
 * @param request UpdateWaypointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWaypointResponse
 */
UpdateWaypointResponse Client::updateWaypointWithOptions(const UpdateWaypointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasHPAEnabled()) {
    body["HPAEnabled"] = request.HPAEnabled();
  }

  if (!!request.hasHPAMaxReplicas()) {
    body["HPAMaxReplicas"] = request.HPAMaxReplicas();
  }

  if (!!request.hasHPAMinReplicas()) {
    body["HPAMinReplicas"] = request.HPAMinReplicas();
  }

  if (!!request.hasHPATargetCPU()) {
    body["HPATargetCPU"] = request.HPATargetCPU();
  }

  if (!!request.hasHPATargetMemory()) {
    body["HPATargetMemory"] = request.HPATargetMemory();
  }

  if (!!request.hasLimitCPU()) {
    body["LimitCPU"] = request.limitCPU();
  }

  if (!!request.hasLimitMemory()) {
    body["LimitMemory"] = request.limitMemory();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasPreferECI()) {
    body["PreferECI"] = request.preferECI();
  }

  if (!!request.hasReplicas()) {
    body["Replicas"] = request.replicas();
  }

  if (!!request.hasRequestCPU()) {
    body["RequestCPU"] = request.requestCPU();
  }

  if (!!request.hasRequestMemory()) {
    body["RequestMemory"] = request.requestMemory();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWaypoint"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWaypointResponse>();
}

/**
 * @summary 更新Waypoint
 *
 * @param request UpdateWaypointRequest
 * @return UpdateWaypointResponse
 */
UpdateWaypointResponse Client::updateWaypoint(const UpdateWaypointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWaypointWithOptions(request, runtime);
}

/**
 * @summary Upgrades a Service Mesh (ASM) instance to Professional Edition that is commercially released.
 *
 * @param request UpgradeMeshEditionPartiallyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeMeshEditionPartiallyResponse
 */
UpgradeMeshEditionPartiallyResponse Client::upgradeMeshEditionPartiallyWithOptions(const UpgradeMeshEditionPartiallyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasASMGatewayContinue()) {
    body["ASMGatewayContinue"] = request.ASMGatewayContinue();
  }

  if (!!request.hasExpectedVersion()) {
    body["ExpectedVersion"] = request.expectedVersion();
  }

  if (!!request.hasPreCheck()) {
    body["PreCheck"] = request.preCheck();
  }

  if (!!request.hasServiceMeshId()) {
    body["ServiceMeshId"] = request.serviceMeshId();
  }

  if (!!request.hasSwitchToPro()) {
    body["SwitchToPro"] = request.switchToPro();
  }

  if (!!request.hasUpgradeGatewayRecords()) {
    body["UpgradeGatewayRecords"] = request.upgradeGatewayRecords();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpgradeMeshEditionPartially"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeMeshEditionPartiallyResponse>();
}

/**
 * @summary Upgrades a Service Mesh (ASM) instance to Professional Edition that is commercially released.
 *
 * @param request UpgradeMeshEditionPartiallyRequest
 * @return UpgradeMeshEditionPartiallyResponse
 */
UpgradeMeshEditionPartiallyResponse Client::upgradeMeshEditionPartially(const UpgradeMeshEditionPartiallyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeMeshEditionPartiallyWithOptions(request, runtime);
}

/**
 * @summary Updates the version of a Service Mesh (ASM) instance.
 *
 * @param request UpgradeMeshVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeMeshVersionResponse
 */
UpgradeMeshVersionResponse Client::upgradeMeshVersionWithOptions(const UpgradeMeshVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPreCheck()) {
    query["PreCheck"] = request.preCheck();
  }

  if (!!request.hasServiceMeshId()) {
    query["ServiceMeshId"] = request.serviceMeshId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeMeshVersion"},
    {"version" , "2020-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeMeshVersionResponse>();
}

/**
 * @summary Updates the version of a Service Mesh (ASM) instance.
 *
 * @param request UpgradeMeshVersionRequest
 * @return UpgradeMeshVersionResponse
 */
UpgradeMeshVersionResponse Client::upgradeMeshVersion(const UpgradeMeshVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeMeshVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Servicemesh20200111